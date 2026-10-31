#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C3[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155,
    0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0,
    263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0,
    0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0,
    0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0,
    0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0,
    528, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0,
};

void unit_00C3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0040C000;
    case 2u: goto L_0040C018;
    case 3u: goto L_0040C024;
    case 4u: goto L_0040C030;
    case 5u: goto L_0040C038;
    case 6u: goto L_0040C044;
    case 7u: goto L_0040C048;
    case 8u: goto L_0040C060;
    case 9u: goto L_0040C098;
    case 10u: goto L_0040C0C4;
    case 11u: goto L_0040C0F4;
    case 12u: goto L_0040C100;
    case 13u: goto L_0040C118;
    case 14u: goto L_0040C140;
    case 15u: goto L_0040C170;
    case 16u: goto L_0040C19C;
    case 17u: goto L_0040C1C8;
    case 18u: goto L_0040C1F8;
    case 19u: goto L_0040C204;
    case 20u: goto L_0040C21C;
    case 21u: goto L_0040C240;
    case 22u: goto L_0040C270;
    case 23u: goto L_0040C280;
    case 24u: goto L_0040C2D8;
    case 25u: goto L_0040C2F4;
    case 26u: goto L_0040C30C;
    case 27u: goto L_0040C320;
    case 28u: goto L_0040C338;
    case 29u: goto L_0040C344;
    case 30u: goto L_0040C358;
    case 31u: goto L_0040C36C;
    case 32u: goto L_0040C38C;
    case 33u: goto L_0040C3B8;
    case 34u: goto L_0040C3D0;
    case 35u: goto L_0040C434;
    case 36u: goto L_0040C464;
    case 37u: goto L_0040C47C;
    case 38u: goto L_0040C4A0;
    case 39u: goto L_0040C4FC;
    case 40u: goto L_0040C514;
    case 41u: goto L_0040C530;
    case 42u: goto L_0040C56C;
    case 43u: goto L_0040C588;
    case 44u: goto L_0040C5A8;
    case 45u: goto L_0040C5B4;
    case 46u: goto L_0040C5C0;
    case 47u: goto L_0040C5E0;
    case 48u: goto L_0040C5E8;
    case 49u: goto L_0040C608;
    case 50u: goto L_0040C618;
    case 51u: goto L_0040C628;
    case 52u: goto L_0040C634;
    case 53u: goto L_0040C650;
    case 54u: goto L_0040C65C;
    case 55u: goto L_0040C668;
    case 56u: goto L_0040C678;
    case 57u: goto L_0040C684;
    case 58u: goto L_0040C6A0;
    case 59u: goto L_0040C6AC;
    case 60u: goto L_0040C6D4;
    case 61u: goto L_0040C6F0;
    case 62u: goto L_0040C700;
    case 63u: goto L_0040C718;
    case 64u: goto L_0040C740;
    case 65u: goto L_0040C75C;
    case 66u: goto L_0040C76C;
    case 67u: goto L_0040C784;
    case 68u: goto L_0040C7C0;
    case 69u: goto L_0040C7E8;
    case 70u: goto L_0040C810;
    case 71u: goto L_0040C854;
    case 72u: goto L_0040C860;
    case 73u: goto L_0040C878;
    case 74u: goto L_0040C890;
    case 75u: goto L_0040C8D0;
    case 76u: goto L_0040C8E8;
    case 77u: goto L_0040C900;
    case 78u: goto L_0040C950;
    case 79u: goto L_0040C968;
    case 80u: goto L_0040C980;
    case 81u: goto L_0040C9A0;
    case 82u: goto L_0040C9B4;
    case 83u: goto L_0040C9C8;
    case 84u: goto L_0040C9F0;
    case 85u: goto L_0040CA38;
    case 86u: goto L_0040CA4C;
    case 87u: goto L_0040CA60;
    case 88u: goto L_0040CA80;
    case 89u: goto L_0040CA94;
    case 90u: goto L_0040CAAC;
    case 91u: goto L_0040CAC4;
    case 92u: goto L_0040CAE8;
    case 93u: goto L_0040CB10;
    case 94u: goto L_0040CB30;
    case 95u: goto L_0040CB4C;
    case 96u: goto L_0040CB70;
    case 97u: goto L_0040CB80;
    case 98u: goto L_0040CB90;
    case 99u: goto L_0040CBA0;
    case 100u: goto L_0040CBC0;
    case 101u: goto L_0040CBE0;
    case 102u: goto L_0040CBF0;
    case 103u: goto L_0040CC14;
    case 104u: goto L_0040CC20;
    case 105u: goto L_0040CC58;
    case 106u: goto L_0040CC68;
    case 107u: goto L_0040CC7C;
    case 108u: goto L_0040CCB0;
    case 109u: goto L_0040CD18;
    case 110u: goto L_0040CD58;
    case 111u: goto L_0040CD60;
    case 112u: goto L_0040CD80;
    case 113u: goto L_0040CD94;
    case 114u: goto L_0040CDD4;
    case 115u: goto L_0040CDDC;
    case 116u: goto L_0040CDE8;
    case 117u: goto L_0040CE0C;
    case 118u: goto L_0040CE2C;
    case 119u: goto L_0040CE44;
    case 120u: goto L_0040CE84;
    case 121u: goto L_0040CE8C;
    case 122u: goto L_0040CE9C;
    case 123u: goto L_0040CEB0;
    case 124u: goto L_0040CED4;
    case 125u: goto L_0040CEF0;
    case 126u: goto L_0040CF38;
    case 127u: goto L_0040CF4C;
    case 128u: goto L_0040CF58;
    case 129u: goto L_0040CF64;
    case 130u: goto L_0040CF6C;
    case 131u: goto L_0040CF7C;
    case 132u: goto L_0040CF9C;
    case 133u: goto L_0040CFB0;
    case 134u: goto L_0040CFBC;
    case 135u: goto L_0040CFC8;
    case 136u: goto L_0040CFD0;
    case 137u: goto L_0040CFE0;
    case 138u: goto L_0040CFEC;
    case 139u: goto L_0040CFF8;
    case 140u: goto L_0040D000;
    case 141u: goto L_0040D010;
    case 142u: goto L_0040D03C;
    case 143u: goto L_0040D050;
    case 144u: goto L_0040D05C;
    case 145u: goto L_0040D068;
    case 146u: goto L_0040D070;
    case 147u: goto L_0040D080;
    case 148u: goto L_0040D0A0;
    case 149u: goto L_0040D0B4;
    case 150u: goto L_0040D0C0;
    case 151u: goto L_0040D0CC;
    case 152u: goto L_0040D0D4;
    case 153u: goto L_0040D0E4;
    case 154u: goto L_0040D0F0;
    case 155u: goto L_0040D0FC;
    case 156u: goto L_0040D104;
    case 157u: goto L_0040D114;
    case 158u: goto L_0040D14C;
    case 159u: goto L_0040D160;
    case 160u: goto L_0040D16C;
    case 161u: goto L_0040D178;
    case 162u: goto L_0040D188;
    case 163u: goto L_0040D1B4;
    case 164u: goto L_0040D1BC;
    case 165u: goto L_0040D1C8;
    case 166u: goto L_0040D1D8;
    case 167u: goto L_0040D1E8;
    case 168u: goto L_0040D210;
    case 169u: goto L_0040D26C;
    case 170u: goto L_0040D2A0;
    case 171u: goto L_0040D2B8;
    case 172u: goto L_0040D2D0;
    case 173u: goto L_0040D2E4;
    case 174u: goto L_0040D2F0;
    case 175u: goto L_0040D300;
    case 176u: goto L_0040D324;
    case 177u: goto L_0040D330;
    case 178u: goto L_0040D340;
    case 179u: goto L_0040D350;
    case 180u: goto L_0040D380;
    case 181u: goto L_0040D3B4;
    case 182u: goto L_0040D3CC;
    case 183u: goto L_0040D3D8;
    case 184u: goto L_0040D3F8;
    case 185u: goto L_0040D444;
    case 186u: goto L_0040D464;
    case 187u: goto L_0040D4D0;
    case 188u: goto L_0040D4F4;
    case 189u: goto L_0040D4FC;
    case 190u: goto L_0040D50C;
    case 191u: goto L_0040D530;
    case 192u: goto L_0040D53C;
    case 193u: goto L_0040D560;
    case 194u: goto L_0040D578;
    case 195u: goto L_0040D5B0;
    case 196u: goto L_0040D5DC;
    case 197u: goto L_0040D5F0;
    case 198u: goto L_0040D60C;
    case 199u: goto L_0040D624;
    case 200u: goto L_0040D63C;
    case 201u: goto L_0040D670;
    case 202u: goto L_0040D6B4;
    case 203u: goto L_0040D6C0;
    case 204u: goto L_0040D6FC;
    case 205u: goto L_0040D710;
    case 206u: goto L_0040D724;
    case 207u: goto L_0040D738;
    case 208u: goto L_0040D754;
    case 209u: goto L_0040D760;
    case 210u: goto L_0040D778;
    case 211u: goto L_0040D788;
    case 212u: goto L_0040D794;
    case 213u: goto L_0040D7B0;
    case 214u: goto L_0040D7E0;
    case 215u: goto L_0040D7FC;
    case 216u: goto L_0040D810;
    case 217u: goto L_0040D818;
    case 218u: goto L_0040D824;
    case 219u: goto L_0040D880;
    case 220u: goto L_0040D8A0;
    case 221u: goto L_0040D8F0;
    case 222u: goto L_0040D904;
    case 223u: goto L_0040D940;
    case 224u: goto L_0040D998;
    case 225u: goto L_0040D9A0;
    case 226u: goto L_0040D9AC;
    case 227u: goto L_0040D9BC;
    case 228u: goto L_0040D9D0;
    case 229u: goto L_0040DA10;
    case 230u: goto L_0040DA50;
    case 231u: goto L_0040DA70;
    case 232u: goto L_0040DA80;
    case 233u: goto L_0040DA8C;
    case 234u: goto L_0040DA98;
    case 235u: goto L_0040DAA4;
    case 236u: goto L_0040DAB8;
    case 237u: goto L_0040DAE0;
    case 238u: goto L_0040DB18;
    case 239u: goto L_0040DB30;
    case 240u: goto L_0040DB50;
    case 241u: goto L_0040DB60;
    case 242u: goto L_0040DB70;
    case 243u: goto L_0040DB88;
    case 244u: goto L_0040DBA0;
    case 245u: goto L_0040DBB8;
    case 246u: goto L_0040DBD0;
    case 247u: goto L_0040DBF0;
    case 248u: goto L_0040DC00;
    case 249u: goto L_0040DC10;
    case 250u: goto L_0040DC20;
    case 251u: goto L_0040DC30;
    case 252u: goto L_0040DC40;
    case 253u: goto L_0040DC50;
    case 254u: goto L_0040DC68;
    case 255u: goto L_0040DC80;
    case 256u: goto L_0040DC90;
    case 257u: goto L_0040DCA0;
    case 258u: goto L_0040DCCC;
    case 259u: goto L_0040DCD8;
    case 260u: goto L_0040DCE0;
    case 261u: goto L_0040DCF0;
    case 262u: goto L_0040DCF8;
    case 263u: goto L_0040DD00;
    case 264u: goto L_0040DD1C;
    case 265u: goto L_0040DD28;
    case 266u: goto L_0040DD40;
    case 267u: goto L_0040DD50;
    case 268u: goto L_0040DD60;
    case 269u: goto L_0040DD70;
    case 270u: goto L_0040DD90;
    case 271u: goto L_0040DDD0;
    case 272u: goto L_0040DDE0;
    case 273u: goto L_0040DDF0;
    case 274u: goto L_0040DE0C;
    case 275u: goto L_0040DE44;
    case 276u: goto L_0040DE58;
    case 277u: goto L_0040DE84;
    case 278u: goto L_0040DE94;
    case 279u: goto L_0040DE9C;
    case 280u: goto L_0040DEAC;
    case 281u: goto L_0040DEB4;
    case 282u: goto L_0040DEC4;
    case 283u: goto L_0040DECC;
    case 284u: goto L_0040DEDC;
    case 285u: goto L_0040DEE4;
    case 286u: goto L_0040DEF4;
    case 287u: goto L_0040DEFC;
    case 288u: goto L_0040DF48;
    case 289u: goto L_0040DF50;
    case 290u: goto L_0040DF60;
    case 291u: goto L_0040DF68;
    case 292u: goto L_0040DF78;
    case 293u: goto L_0040DF90;
    case 294u: goto L_0040DFB0;
    case 295u: goto L_0040DFC4;
    case 296u: goto L_0040DFCC;
    case 297u: goto L_0040DFDC;
    case 298u: goto L_0040DFE8;
    case 299u: goto L_0040DFF8;
    case 300u: goto L_0040E004;
    case 301u: goto L_0040E014;
    case 302u: goto L_0040E01C;
    case 303u: goto L_0040E040;
    case 304u: goto L_0040E048;
    case 305u: goto L_0040E058;
    case 306u: goto L_0040E080;
    case 307u: goto L_0040E094;
    case 308u: goto L_0040E0AC;
    case 309u: goto L_0040E0BC;
    case 310u: goto L_0040E0E0;
    case 311u: goto L_0040E11C;
    case 312u: goto L_0040E124;
    case 313u: goto L_0040E138;
    case 314u: goto L_0040E150;
    case 315u: goto L_0040E15C;
    case 316u: goto L_0040E168;
    case 317u: goto L_0040E180;
    case 318u: goto L_0040E1A0;
    case 319u: goto L_0040E1C8;
    case 320u: goto L_0040E1F4;
    case 321u: goto L_0040E1FC;
    case 322u: goto L_0040E210;
    case 323u: goto L_0040E248;
    case 324u: goto L_0040E258;
    case 325u: goto L_0040E27C;
    case 326u: goto L_0040E284;
    case 327u: goto L_0040E2A4;
    case 328u: goto L_0040E2B8;
    case 329u: goto L_0040E2D8;
    case 330u: goto L_0040E2EC;
    case 331u: goto L_0040E33C;
    case 332u: goto L_0040E35C;
    case 333u: goto L_0040E36C;
    case 334u: goto L_0040E388;
    case 335u: goto L_0040E3A8;
    case 336u: goto L_0040E3D8;
    case 337u: goto L_0040E3F4;
    case 338u: goto L_0040E400;
    case 339u: goto L_0040E40C;
    case 340u: goto L_0040E458;
    case 341u: goto L_0040E47C;
    case 342u: goto L_0040E4B0;
    case 343u: goto L_0040E4D4;
    case 344u: goto L_0040E4F0;
    case 345u: goto L_0040E514;
    case 346u: goto L_0040E52C;
    case 347u: goto L_0040E550;
    case 348u: goto L_0040E560;
    case 349u: goto L_0040E584;
    case 350u: goto L_0040E590;
    case 351u: goto L_0040E5A0;
    case 352u: goto L_0040E5B0;
    case 353u: goto L_0040E5C0;
    case 354u: goto L_0040E5D0;
    case 355u: goto L_0040E5E0;
    case 356u: goto L_0040E5F0;
    case 357u: goto L_0040E620;
    case 358u: goto L_0040E640;
    case 359u: goto L_0040E654;
    case 360u: goto L_0040E65C;
    case 361u: goto L_0040E674;
    case 362u: goto L_0040E680;
    case 363u: goto L_0040E694;
    case 364u: goto L_0040E6C0;
    case 365u: goto L_0040E6D4;
    case 366u: goto L_0040E700;
    case 367u: goto L_0040E71C;
    case 368u: goto L_0040E72C;
    case 369u: goto L_0040E73C;
    case 370u: goto L_0040E750;
    case 371u: goto L_0040E770;
    case 372u: goto L_0040E780;
    case 373u: goto L_0040E7B4;
    case 374u: goto L_0040E7C4;
    case 375u: goto L_0040E830;
    case 376u: goto L_0040E83C;
    case 377u: goto L_0040E880;
    case 378u: goto L_0040E89C;
    case 379u: goto L_0040E8A8;
    case 380u: goto L_0040E8B4;
    case 381u: goto L_0040E8C0;
    case 382u: goto L_0040E8D4;
    case 383u: goto L_0040E8FC;
    case 384u: goto L_0040E904;
    case 385u: goto L_0040E938;
    case 386u: goto L_0040E948;
    case 387u: goto L_0040E9AC;
    case 388u: goto L_0040E9C0;
    case 389u: goto L_0040E9EC;
    case 390u: goto L_0040EA00;
    case 391u: goto L_0040EA10;
    case 392u: goto L_0040EA28;
    case 393u: goto L_0040EA40;
    case 394u: goto L_0040EA58;
    case 395u: goto L_0040EA70;
    case 396u: goto L_0040EA90;
    case 397u: goto L_0040EAA0;
    case 398u: goto L_0040EACC;
    case 399u: goto L_0040EAD4;
    case 400u: goto L_0040EAE0;
    case 401u: goto L_0040EB30;
    case 402u: goto L_0040EB68;
    case 403u: goto L_0040EBAC;
    case 404u: goto L_0040EBE4;
    case 405u: goto L_0040EBF4;
    case 406u: goto L_0040EC58;
    case 407u: goto L_0040ECCC;
    case 408u: goto L_0040ED0C;
    case 409u: goto L_0040ED4C;
    case 410u: goto L_0040ED70;
    case 411u: goto L_0040EDB8;
    case 412u: goto L_0040EDC0;
    case 413u: goto L_0040EDCC;
    case 414u: goto L_0040EDFC;
    case 415u: goto L_0040EE1C;
    case 416u: goto L_0040EECC;
    case 417u: goto L_0040EEF0;
    case 418u: goto L_0040EF80;
    case 419u: goto L_0040EFBC;
    case 420u: goto L_0040F0C4;
    case 421u: goto L_0040F128;
    case 422u: goto L_0040F170;
    case 423u: goto L_0040F190;
    case 424u: goto L_0040F198;
    case 425u: goto L_0040F1B0;
    case 426u: goto L_0040F1E4;
    case 427u: goto L_0040F23C;
    case 428u: goto L_0040F248;
    case 429u: goto L_0040F254;
    case 430u: goto L_0040F25C;
    case 431u: goto L_0040F264;
    case 432u: goto L_0040F278;
    case 433u: goto L_0040F2A4;
    case 434u: goto L_0040F2D8;
    case 435u: goto L_0040F32C;
    case 436u: goto L_0040F354;
    case 437u: goto L_0040F398;
    case 438u: goto L_0040F3C0;
    case 439u: goto L_0040F3E4;
    case 440u: goto L_0040F404;
    case 441u: goto L_0040F424;
    case 442u: goto L_0040F460;
    case 443u: goto L_0040F484;
    case 444u: goto L_0040F4BC;
    case 445u: goto L_0040F500;
    case 446u: goto L_0040F518;
    case 447u: goto L_0040F520;
    case 448u: goto L_0040F530;
    case 449u: goto L_0040F544;
    case 450u: goto L_0040F550;
    case 451u: goto L_0040F558;
    case 452u: goto L_0040F568;
    case 453u: goto L_0040F5AC;
    case 454u: goto L_0040F5E8;
    case 455u: goto L_0040F63C;
    case 456u: goto L_0040F670;
    case 457u: goto L_0040F688;
    case 458u: goto L_0040F690;
    case 459u: goto L_0040F6A0;
    case 460u: goto L_0040F6B4;
    case 461u: goto L_0040F6C0;
    case 462u: goto L_0040F6C8;
    case 463u: goto L_0040F6D8;
    case 464u: goto L_0040F6EC;
    case 465u: goto L_0040F720;
    case 466u: goto L_0040F744;
    case 467u: goto L_0040F77C;
    case 468u: goto L_0040F7A0;
    case 469u: goto L_0040F7BC;
    case 470u: goto L_0040F7D0;
    case 471u: goto L_0040F7F0;
    case 472u: goto L_0040F80C;
    case 473u: goto L_0040F840;
    case 474u: goto L_0040F84C;
    case 475u: goto L_0040F860;
    case 476u: goto L_0040F87C;
    case 477u: goto L_0040F8C4;
    case 478u: goto L_0040F8DC;
    case 479u: goto L_0040F8E8;
    case 480u: goto L_0040F8F4;
    case 481u: goto L_0040F910;
    case 482u: goto L_0040F91C;
    case 483u: goto L_0040F928;
    case 484u: goto L_0040F960;
    case 485u: goto L_0040F998;
    case 486u: goto L_0040F9A4;
    case 487u: goto L_0040F9BC;
    case 488u: goto L_0040F9E0;
    case 489u: goto L_0040F9F0;
    case 490u: goto L_0040FA10;
    case 491u: goto L_0040FA38;
    case 492u: goto L_0040FA60;
    case 493u: goto L_0040FA80;
    case 494u: goto L_0040FA8C;
    case 495u: goto L_0040FAA0;
    case 496u: goto L_0040FAC0;
    case 497u: goto L_0040FAE0;
    case 498u: goto L_0040FB10;
    case 499u: goto L_0040FB44;
    case 500u: goto L_0040FB90;
    case 501u: goto L_0040FBB0;
    case 502u: goto L_0040FBE0;
    case 503u: goto L_0040FBEC;
    case 504u: goto L_0040FBF8;
    case 505u: goto L_0040FC20;
    case 506u: goto L_0040FC60;
    case 507u: goto L_0040FCD0;
    case 508u: goto L_0040FD04;
    case 509u: goto L_0040FD2C;
    case 510u: goto L_0040FD5C;
    case 511u: goto L_0040FD70;
    case 512u: goto L_0040FD90;
    case 513u: goto L_0040FD9C;
    case 514u: goto L_0040FDA8;
    case 515u: goto L_0040FDBC;
    case 516u: goto L_0040FDD8;
    case 517u: goto L_0040FDF4;
    case 518u: goto L_0040FE00;
    case 519u: goto L_0040FE3C;
    case 520u: goto L_0040FEDC;
    case 521u: goto L_0040FEF4;
    case 522u: goto L_0040FF10;
    case 523u: goto L_0040FF1C;
    case 524u: goto L_0040FF34;
    case 525u: goto L_0040FF48;
    case 526u: goto L_0040FF68;
    case 527u: goto L_0040FF74;
    case 528u: goto L_0040FF80;
    case 529u: goto L_0040FF94;
    case 530u: goto L_0040FFA0;
    case 531u: goto L_0040FFB4;
    case 532u: goto L_0040FFD4;
    case 533u: goto L_0040FFE0;
    case 534u: goto L_0040FFEC;
    default: bad_entry(c, 0x0040C000u); return;
    }
L_0040C000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 5770u);
    set32(c.r[6], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C018u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 14u, depth + 1u); else { c.pc = 0x0040C140u; return; } if (c.pc != 0x0040C018u) [[unlikely]] return; }
L_0040C018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C024u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0040C024u) [[unlikely]] return; }
L_0040C024:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C030u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040C030u) [[unlikely]] return; }
L_0040C030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C044; } }
L_0040C038:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C044u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00C3(c, 8u, depth + 1u); else { c.pc = 0x0040C060u; return; } if (c.pc != 0x0040C044u) [[unlikely]] return; }
L_0040C044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040C048:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040C060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 512u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C098u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0040C098u) [[unlikely]] return; }
L_0040C098:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_0040C0CC; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_0040C0CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0040C0C4u) [[unlikely]] return; }
L_0040C0C4:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0040C0CC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0040C110; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_0040C0F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0F4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0040C0F4u) [[unlikely]] return; }
L_0040C0F4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0040C0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C100u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0040C100u) [[unlikely]] return; }
L_0040C100:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_0040C110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C118u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0040C118u) [[unlikely]] return; }
L_0040C118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040C140:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C170u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0040C170u) [[unlikely]] return; }
L_0040C170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 512u);
    st32((c.r[20].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0])));
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C19Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0040C19Cu) [[unlikely]] return; }
L_0040C19C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_0040C1D0; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 4u)));  goto L_0040C1D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C1C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0040C1C8u) [[unlikely]] return; }
L_0040C1C8:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0040C1D0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0040C214; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_0040C1FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C1F8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0040C1F8u) [[unlikely]] return; }
L_0040C1F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0040C1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C204u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0040C204u) [[unlikely]] return; }
L_0040C204:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_0040C214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C21Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0040C21Cu) [[unlikely]] return; }
L_0040C21C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C240u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040C240u) [[unlikely]] return; }
L_0040C240:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040C270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0040C280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C3B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24480u);
    set32(c.r[2], c.r[2].w[0] + 24512u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));
    st8((c.r[2].w[0] + 2633u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C2DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C2D8u);  if (depth < kMaxDepth) unit_00B4(c, 390u, depth + 1u); else { c.pc = 0x003D3F60u; return; } if (c.pc != 0x0040C2D8u) [[unlikely]] return; }
L_0040C2D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C2DC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  goto L_0040C2EC; }
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 2;
L_0040C2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C2F4u);  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x0040C2F4u) [[unlikely]] return; }
L_0040C2F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[4], c.r[17].w[0] + 216u);
    set32(c.r[5], c.r[5].w[0] - 15200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C30Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0040C30Cu) [[unlikely]] return; }
L_0040C30C:
    set32(c.r[4], c.r[17].w[0] + 188u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C320u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C320u) [[unlikely]] return; }
L_0040C320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], c.r[17].w[0] + 156u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C338u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0040C338u) [[unlikely]] return; }
L_0040C338:
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C344u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C6(c, 201u, depth + 1u); else { c.pc = 0x004197A0u; return; } if (c.pc != 0x0040C344u) [[unlikely]] return; }
L_0040C344:
    set32(c.r[4], c.r[17].w[0] + 124u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_0040C35C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C358u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C358u) [[unlikely]] return; }
L_0040C358:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_0040C35C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0040C370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C36Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C36Cu) [[unlikely]] return; }
L_0040C36C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0040C370:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C38C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C38Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x0040C38Cu) [[unlikely]] return; }
L_0040C38C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040C3A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0040C3A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C3BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C3B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040C3B8u) [[unlikely]] return; }
L_0040C3B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C47C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 28u);
    set32(c.r[3], c.r[3].w[0] + 24640u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0040C434; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0040C438; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C434; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C434; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C434; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C434u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040C434u) [[unlikely]] return; }
L_0040C434:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0040C438:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040C468; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C464; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C464; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040C464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C464u);  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040C464u) [[unlikely]] return; }
L_0040C464:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040C468:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C480; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C47Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040C47Cu) [[unlikely]] return; }
L_0040C47C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C514; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040C500; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C4FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C4FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C4FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C4FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C4FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C4FCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040C4FCu) [[unlikely]] return; }
L_0040C4FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040C500:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C518; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C514u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040C514u) [[unlikely]] return; }
L_0040C514:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[17].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C56Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x0040C56Cu) [[unlikely]] return; }
L_0040C56C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C588u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x0040C588u) [[unlikely]] return; }
L_0040C588:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24480u);
    set32(c.r[2], c.r[2].w[0] + 24512u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5A8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040C5A8u) [[unlikely]] return; }
L_0040C5A8:
    set32(c.r[4], c.r[17].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5B4u); st32((c.r[17].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040C5B4u) [[unlikely]] return; }
L_0040C5B4:
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 206u, depth + 1u); else { c.pc = 0x00419860u; return; } if (c.pc != 0x0040C5C0u) [[unlikely]] return; }
L_0040C5C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], c.r[17].w[0] + 156u);
    set32(c.r[5], c.r[5].w[0] - 5776u);
    set32(c.r[6], c.r[6].w[0] + 11712u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5E0u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0040C5E0u) [[unlikely]] return; }
L_0040C5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5E8u); set32(c.r[4], c.r[17].w[0] + 188u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040C5E8u) [[unlikely]] return; }
L_0040C5E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], c.r[17].w[0] + 216u);
    set32(c.r[5], c.r[5].w[0] - 13952u);
    set32(c.r[6], c.r[6].w[0] - 15200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C608u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0040C608u) [[unlikely]] return; }
L_0040C608:
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C618u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040C618u) [[unlikely]] return; }
L_0040C618:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C628u); set32(c.r[5], c.r[5].w[0] + 5755u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0040C628u) [[unlikely]] return; }
L_0040C628:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C634u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0040C634u) [[unlikely]] return; }
L_0040C634:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_0040C648; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0040C648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C650u); set32(c.r[4], c.r[17].w[0] + 156u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040C650u) [[unlikely]] return; }
L_0040C650:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C65Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C65Cu) [[unlikely]] return; }
L_0040C65C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C668u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040C668u) [[unlikely]] return; }
L_0040C668:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C678u); set32(c.r[5], c.r[5].w[0] + 5770u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0040C678u) [[unlikely]] return; }
L_0040C678:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C684u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0040C684u) [[unlikely]] return; }
L_0040C684:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0040C698; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0040C698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6A0u); set32(c.r[4], c.r[17].w[0] + 172u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040C6A0u) [[unlikely]] return; }
L_0040C6A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C6ACu) [[unlikely]] return; }
L_0040C6AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 157u);  goto L_0040C6C0; }
    set32(c.r[7], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_0040C6C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6D4u); set32(c.r[6], c.r[6].w[0] + 5785u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040C6D4u) [[unlikely]] return; }
L_0040C6D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0040C6E8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0040C6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6F0u); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x0040C6F0u) [[unlikely]] return; }
L_0040C6F0:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C700u) [[unlikely]] return; }
L_0040C700:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 172u)));  goto L_0040C71C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C718u); set32(c.r[5], c.r[5].w[0] + 5796u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040C718u) [[unlikely]] return; }
L_0040C718:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 1;
L_0040C71C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 173u);  goto L_0040C72C; }
    set32(c.r[7], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_0040C72C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C740u); set32(c.r[6], c.r[6].w[0] + 5785u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040C740u) [[unlikely]] return; }
L_0040C740:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0040C754; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0040C754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C75Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x0040C75Cu) [[unlikely]] return; }
L_0040C75C:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C76Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040C76Cu) [[unlikely]] return; }
L_0040C76C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(0u));  goto L_0040C788; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[17].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C784u); set32(c.r[5], c.r[5].w[0] + 5796u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040C784u) [[unlikely]] return; }
L_0040C784:
    st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040C788:
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 96u), 0u);
    st8((c.r[17].w[0] + 104u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 121u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_0040C7B8; } }
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0040C7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7C0u); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x0040C7C0u) [[unlikely]] return; }
L_0040C7C0:
    st32((c.r[17].w[0] + 108u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 216u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7E8u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0040C7E8u) [[unlikely]] return; }
L_0040C7E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040C810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0040C860; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + 24640u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C854u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 77u, depth + 1u); else { c.pc = 0x0040C900u; return; } if (c.pc != 0x0040C854u) [[unlikely]] return; }
L_0040C854:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C860u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 74u, depth + 1u); else { c.pc = 0x0040C890u; return; } if (c.pc != 0x0040C860u) [[unlikely]] return; }
L_0040C860:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C87C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040C878u) [[unlikely]] return; }
L_0040C878:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C87C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C8E8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040C8D4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040C8D0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040C8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C8D0u);  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040C8D0u) [[unlikely]] return; }
L_0040C8D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040C8D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C8EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C8E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040C8E8u) [[unlikely]] return; }
L_0040C8E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C968; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040C954; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040C950; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040C950; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C950; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C950u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040C950u) [[unlikely]] return; }
L_0040C950:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040C954:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C96C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040C968u) [[unlikely]] return; }
L_0040C968:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040C9A0u) [[unlikely]] return; }
L_0040C9A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0040C9B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9B4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040C9B4u) [[unlikely]] return; }
L_0040C9B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0040C9B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0040C9CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9C8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040C9C8u) [[unlikely]] return; }
L_0040C9C8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0040C9CC:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C9F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 24640u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[19].w[0] + 4u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040CA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040CA38u) [[unlikely]] return; }
L_0040CA38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0040CA50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA4Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040CA4Cu) [[unlikely]] return; }
L_0040CA4C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0040CA50:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  goto L_0040CA64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA60u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040CA60u) [[unlikely]] return; }
L_0040CA60:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0040CA64:
    set32(c.r[5], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 92u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA80u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C3(c, 179u, depth + 1u); else { c.pc = 0x0040D350u; return; } if (c.pc != 0x0040CA80u) [[unlikely]] return; }
L_0040CA80:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[19].w[0] + 28u);  if (t) { goto L_0040CAC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040CA94u) [[unlikely]] return; }
L_0040CA94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0040CAB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CAACu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040CAACu) [[unlikely]] return; }
L_0040CAAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0040CAB4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_0040CACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CAC4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040CAC4u) [[unlikely]] return; }
L_0040CAC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040CAC8:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0040CACC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[19].w[0] + 28u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CAE8u); st8((c.r[19].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0040CAE8u) [[unlikely]] return; }
L_0040CAE8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040CB10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0040CB1C; }
L_0040CB1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040CB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB4Cu); set32(c.r[4], c.r[4].w[0] + 4360u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0040CB4Cu) [[unlikely]] return; }
L_0040CB4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0040CB54; }
L_0040CB54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040CB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040CB80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040CB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  c.pc = t; return; }
L_0040CBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBC0u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0040CBC0u) [[unlikely]] return; }
L_0040CBC0:
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040CBE0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_0040D380; }
L_0040CBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0040CC04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040CC14; } }
L_0040CC04:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC14u); set32(c.r[5], ld32((c.r[28].w[0] - 30308u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040CC14u) [[unlikely]] return; }
L_0040CC14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040CC20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == c.r[6].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0040CC90; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0040CC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0040CC98; } }
L_0040CC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC58u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CC58u) [[unlikely]] return; }
L_0040CC58:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC68u); c.r[16].d[0] = c.r[2].d[0] >> 29;  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CC68u) [[unlikely]] return; }
L_0040CC68:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 2;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC7Cu); c.r[16].d[0] = c.r[2].d[0] | c.r[16].d[0];  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CC7Cu) [[unlikely]] return; }
L_0040CC7C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];  if (t) { goto L_0040CED4; } }
L_0040CC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040CED4; } }
L_0040CC98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4352u)));
    set32(c.r[7], 0u + 31u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 4352u);  if (t) { goto L_0040CCD0; } }
L_0040CCB0:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0040CCC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 104u);  if (t) { goto L_0040CCC8; } }
L_0040CCC4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0040CCC8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0040CCD0:
    c.r[1].d[0] = c.r[7].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 62u);  goto L_0040CCF0; }
    c.r[2].d[0] = c.r[6].d[0] << (c.r[7].w[0] & 63u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] - c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CCB0u | kUnwind; return; } goto L_0040CCB0; }
    set32(c.r[2], 0u + 62u);
    c.budget -= 1;
L_0040CCF0:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_0040CD88; }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull | 32768ull;  goto L_0040CD0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] & 1ull;  if (t) { goto L_0040CE14; } }
L_0040CD0C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD18u); c.r[4].d[0] = c.r[2].d[0] << 16;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CD18u) [[unlikely]] return; }
L_0040CD18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.budget -= 16;
L_0040CD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD60u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CD60u) [[unlikely]] return; }
L_0040CD60:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CD58u | kUnwind; return; } goto L_0040CD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CD80u) [[unlikely]] return; }
L_0040CD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0040CED8; } }
L_0040CD88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD94u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CD94u) [[unlikely]] return; }
L_0040CD94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.budget -= 16;
L_0040CDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDDCu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CDDCu) [[unlikely]] return; }
L_0040CDDC:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDE8u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CDE8u) [[unlikely]] return; }
L_0040CDE8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 31;
    c.r[4].d[0] = c.r[2].d[0] | c.r[17].d[0];
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CDD4u | kUnwind; return; } goto L_0040CDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CE0Cu) [[unlikely]] return; }
L_0040CE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CED4; } }
L_0040CE14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  goto L_0040CE34; }
    set32(c.r[2], 0u - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE2Cu); mmi::pcpyld(c.r[4], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CE2Cu) [[unlikely]] return; }
L_0040CE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0040CE48; } }
L_0040CE34:
    c.r[5].d[0] = c.r[18].d[0] >> 1;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE44u); mmi::pcpyld(c.r[4], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CE44u) [[unlikely]] return; }
L_0040CE44:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0040CE48:
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.budget -= 15;
L_0040CE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE8Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CE8Cu) [[unlikely]] return; }
L_0040CE8C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE9Cu); c.r[18].d[0] = c.r[2].d[0] >> 29;  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CE9Cu) [[unlikely]] return; }
L_0040CE9C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 2;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CEB0u); c.r[18].d[0] = c.r[2].d[0] | c.r[18].d[0];  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040CEB0u) [[unlikely]] return; }
L_0040CEB0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[4].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CE84u | kUnwind; return; } goto L_0040CE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CED4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0040CED4u) [[unlikely]] return; }
L_0040CED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0040CED8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040CEF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040D010; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0040CF80; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0040CF3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF38u);  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040CF38u) [[unlikely]] return; }
L_0040CF38:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0040CF3C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040CF50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040CF4Cu) [[unlikely]] return; }
L_0040CF4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040CF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF58u);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040D340u; return; } if (c.pc != 0x0040CF58u) [[unlikely]] return; }
L_0040CF58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF64u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C3(c, 175u, depth + 1u); else { c.pc = 0x0040D300u; return; } if (c.pc != 0x0040CF64u) [[unlikely]] return; }
L_0040CF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040D2F0u; return; } if (c.pc != 0x0040CF6Cu) [[unlikely]] return; }
L_0040CF6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 172u, depth + 1u); else { c.pc = 0x0040D2D0u; return; } if (c.pc != 0x0040CF7Cu) [[unlikely]] return; }
L_0040CF7C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0040CF80:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040CFE4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0040CFA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040CF9Cu) [[unlikely]] return; }
L_0040CF9C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0040CFA0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040CFB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040CFB0u) [[unlikely]] return; }
L_0040CFB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040CFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFBCu);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040D340u; return; } if (c.pc != 0x0040CFBCu) [[unlikely]] return; }
L_0040CFBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFC8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C3(c, 175u, depth + 1u); else { c.pc = 0x0040D300u; return; } if (c.pc != 0x0040CFC8u) [[unlikely]] return; }
L_0040CFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040D2F0u; return; } if (c.pc != 0x0040CFD0u) [[unlikely]] return; }
L_0040CFD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 172u, depth + 1u); else { c.pc = 0x0040D2D0u; return; } if (c.pc != 0x0040CFE0u) [[unlikely]] return; }
L_0040CFE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040CFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFECu);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040D340u; return; } if (c.pc != 0x0040CFECu) [[unlikely]] return; }
L_0040CFEC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 168u, depth + 1u); else { c.pc = 0x0040D210u; return; } if (c.pc != 0x0040CFF8u) [[unlikely]] return; }
L_0040CFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040D2F0u; return; } if (c.pc != 0x0040D000u) [[unlikely]] return; }
L_0040D000:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0040D014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D010u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D010u) [[unlikely]] return; }
L_0040D010:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0040D014:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_0040D118; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0040D084; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0040D040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D03Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040D03Cu) [[unlikely]] return; }
L_0040D03C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0040D040:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040D050u) [[unlikely]] return; }
L_0040D050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040D054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D05Cu);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040D340u; return; } if (c.pc != 0x0040D05Cu) [[unlikely]] return; }
L_0040D05C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D068u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C3(c, 175u, depth + 1u); else { c.pc = 0x0040D300u; return; } if (c.pc != 0x0040D068u) [[unlikely]] return; }
L_0040D068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040D2F0u; return; } if (c.pc != 0x0040D070u) [[unlikely]] return; }
L_0040D070:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D080u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 172u, depth + 1u); else { c.pc = 0x0040D2D0u; return; } if (c.pc != 0x0040D080u) [[unlikely]] return; }
L_0040D080:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0040D084:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D0E8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0040D0A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040D0A0u) [[unlikely]] return; }
L_0040D0A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0040D0A4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 125u, depth + 1u); else { c.pc = 0x0040CEF0u; return; } if (c.pc != 0x0040D0B4u) [[unlikely]] return; }
L_0040D0B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040D0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0C0u);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040D340u; return; } if (c.pc != 0x0040D0C0u) [[unlikely]] return; }
L_0040D0C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0CCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C3(c, 175u, depth + 1u); else { c.pc = 0x0040D300u; return; } if (c.pc != 0x0040D0CCu) [[unlikely]] return; }
L_0040D0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040D2F0u; return; } if (c.pc != 0x0040D0D4u) [[unlikely]] return; }
L_0040D0D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 172u, depth + 1u); else { c.pc = 0x0040D2D0u; return; } if (c.pc != 0x0040D0E4u) [[unlikely]] return; }
L_0040D0E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040D0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0F0u);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040D340u; return; } if (c.pc != 0x0040D0F0u) [[unlikely]] return; }
L_0040D0F0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 168u, depth + 1u); else { c.pc = 0x0040D210u; return; } if (c.pc != 0x0040D0FCu) [[unlikely]] return; }
L_0040D0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D104u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040D2F0u; return; } if (c.pc != 0x0040D104u) [[unlikely]] return; }
L_0040D104:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0040D114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D114u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D114u) [[unlikely]] return; }
L_0040D114:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0040D118:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040D1D8; } }
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 12u);  goto L_0040D18C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D14Cu);  if (depth < kMaxDepth) unit_0010(c, 540u, depth + 1u); else { c.pc = 0x00143EB0u; return; } if (c.pc != 0x0040D14Cu) [[unlikely]] return; }
L_0040D14C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040D188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D160u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 539u, depth + 1u); else { c.pc = 0x00143EA0u; return; } if (c.pc != 0x0040D160u) [[unlikely]] return; }
L_0040D160:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D16Cu); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 540u, depth + 1u); else { c.pc = 0x00143EB0u; return; } if (c.pc != 0x0040D16Cu) [[unlikely]] return; }
L_0040D16C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D178u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 538u, depth + 1u); else { c.pc = 0x00143E90u; return; } if (c.pc != 0x0040D178u) [[unlikely]] return; }
L_0040D178:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D188u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 536u, depth + 1u); else { c.pc = 0x00143E70u; return; } if (c.pc != 0x0040D188u) [[unlikely]] return; }
L_0040D188:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0040D18C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D1D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D1D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040D1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1B4u);  if (depth < kMaxDepth) unit_0010(c, 535u, depth + 1u); else { c.pc = 0x00143E60u; return; } if (c.pc != 0x0040D1B4u) [[unlikely]] return; }
L_0040D1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1BCu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 534u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0040D1BCu) [[unlikely]] return; }
L_0040D1BC:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1C8u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0010(c, 533u, depth + 1u); else { c.pc = 0x00143E40u; return; } if (c.pc != 0x0040D1C8u) [[unlikely]] return; }
L_0040D1C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040D1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D1D8u) [[unlikely]] return; }
L_0040D1D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0040D1EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D1E8u) [[unlikely]] return; }
L_0040D1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040D1EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040D210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040D2B8; } }
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D26C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D26C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D26C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D26C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D26C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D26Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D26Cu) [[unlikely]] return; }
L_0040D26C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040D2A4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040D2A0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D2A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D2A0u) [[unlikely]] return; }
L_0040D2A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040D2A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D2BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040D2B8u) [[unlikely]] return; }
L_0040D2B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040D2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040D2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0040D2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D2E4u) [[unlikely]] return; }
L_0040D2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040D2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0040D300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040D334; }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D324u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 77u, depth + 1u); else { c.pc = 0x0040C900u; return; } if (c.pc != 0x0040D324u) [[unlikely]] return; }
L_0040D324:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D330u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x0040D330u) [[unlikely]] return; }
L_0040D330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040D334:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040D340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040D350:
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
L_0040D380:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D3B4u) [[unlikely]] return; }
L_0040D3B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0040D438; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3CCu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 201u, depth + 1u); else { c.pc = 0x0040D670u; return; } if (c.pc != 0x0040D3CCu) [[unlikely]] return; }
L_0040D3CC:
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 16u);  if (t) { goto L_0040D428; } }
L_0040D3D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D3F8u) [[unlikely]] return; }
L_0040D3F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  goto L_0040D43C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0040D42C; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_0040D428:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0040D42C:
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D3D8u | kUnwind; return; } goto L_0040D3D8; }
L_0040D438:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_0040D43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040D494; } }
L_0040D444:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D464u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D464u) [[unlikely]] return; }
L_0040D464:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0040D4A8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_0040D498; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_0040D494:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_0040D498:
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D444u | kUnwind; return; } goto L_0040D444; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0040D4A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040D4D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040D53C; } }
L_0040D4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4FCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0040D4FCu) [[unlikely]] return; }
L_0040D4FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D50Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C3(c, 197u, depth + 1u); else { c.pc = 0x0040D5F0u; return; } if (c.pc != 0x0040D50Cu) [[unlikely]] return; }
L_0040D50C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_0040D534; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D530u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D530u) [[unlikely]] return; }
L_0040D530:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_0040D534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D53Cu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0040D53Cu) [[unlikely]] return; }
L_0040D53C:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[4].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D4F4u | kUnwind; return; } goto L_0040D4F4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0040D580; } }
L_0040D560:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[5], c.r[5].w[0] + 4u);  goto L_0040D580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D578u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x0040D578u) [[unlikely]] return; }
L_0040D578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0040D5A0; } }
L_0040D580:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D560u | kUnwind; return; } goto L_0040D560; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040D5A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040D5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5DCu); set32(c.r[4], c.r[4].w[0] + 28u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0040D5DCu) [[unlikely]] return; }
L_0040D5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040D5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D60Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 201u, depth + 1u); else { c.pc = 0x0040D670u; return; } if (c.pc != 0x0040D60Cu) [[unlikely]] return; }
L_0040D60C:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0040D644; } }
L_0040D624:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[5], c.r[5].w[0] + 4u);  goto L_0040D644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D63Cu);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x0040D63Cu) [[unlikely]] return; }
L_0040D63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040D664; } }
L_0040D644:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D624u | kUnwind; return; } goto L_0040D624; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040D664:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040D670:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
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
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040D6E0; } }
L_0040D6B4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6C0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0040D6C0u) [[unlikely]] return; }
L_0040D6C0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D6D4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040D6E0; } }
L_0040D6D4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0040D6E0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D6B4u | kUnwind; return; } goto L_0040D6B4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0040D708; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6FCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0040D6FCu) [[unlikely]] return; }
L_0040D6FC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_0040D7B4; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0040D708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D710u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040D710u) [[unlikely]] return; }
L_0040D710:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0040D728; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D724u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040D724u) [[unlikely]] return; }
L_0040D724:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0040D728:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  goto L_0040D73C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D738u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040D738u) [[unlikely]] return; }
L_0040D738:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0040D73C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), 0u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D754u); st32((c.r[29].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0040D754u) [[unlikely]] return; }
L_0040D754:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D760u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00C3(c, 214u, depth + 1u); else { c.pc = 0x0040D7E0u; return; } if (c.pc != 0x0040D760u) [[unlikely]] return; }
L_0040D760:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D778u); set32(c.r[8], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00C3(c, 223u, depth + 1u); else { c.pc = 0x0040D940u; return; } if (c.pc != 0x0040D778u) [[unlikely]] return; }
L_0040D778:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D788u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 77u, depth + 1u); else { c.pc = 0x0040C900u; return; } if (c.pc != 0x0040D788u) [[unlikely]] return; }
L_0040D788:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D794u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x0040D794u) [[unlikely]] return; }
L_0040D794:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0040D7B4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040D7B0u) [[unlikely]] return; }
L_0040D7B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040D7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0040D7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040D7FCu) [[unlikely]] return; }
L_0040D7FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0040D814; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D810u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040D810u) [[unlikely]] return; }
L_0040D810:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0040D814:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  goto L_0040D828; }
    goto L_0040D81C;
L_0040D818:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0040D81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D824u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040D824u) [[unlikely]] return; }
L_0040D824:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0040D828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D880u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00C3(c, 220u, depth + 1u); else { c.pc = 0x0040D8A0u; return; } if (c.pc != 0x0040D880u) [[unlikely]] return; }
L_0040D880:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040D8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[5].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0040D8D8; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0040D8D8:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0040D924; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8F0u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0040D8F0u) [[unlikely]] return; }
L_0040D8F0:
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0040D910; } }
L_0040D904:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
L_0040D910:
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D904u | kUnwind; return; } goto L_0040D904; }
L_0040D924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040D940:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0040D9A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D998u); set32(c.r[5], c.r[5].w[0] + 5942u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0040D998u) [[unlikely]] return; }
L_0040D998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9A0u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0040D9A0u) [[unlikely]] return; }
L_0040D9A0:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9ACu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0040D9ACu) [[unlikely]] return; }
L_0040D9AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9BCu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0040D9BCu) [[unlikely]] return; }
L_0040D9BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0040D9D4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 230u, depth + 1u); else { c.pc = 0x0040DA50u; return; } if (c.pc != 0x0040D9D0u) [[unlikely]] return; }
L_0040D9D0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0040D9D4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0040D9F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0040D9F8; } }
L_0040D9F4:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0040D9F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0040DA10u) [[unlikely]] return; }
L_0040DA10:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0040DA20; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0040DA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040DA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA70u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0040DA70u) [[unlikely]] return; }
L_0040DA70:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA80u); set32(c.r[16], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_00C3(c, 247u, depth + 1u); else { c.pc = 0x0040DBF0u; return; } if (c.pc != 0x0040DA80u) [[unlikely]] return; }
L_0040DA80:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA8Cu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040DBD0u; return; } if (c.pc != 0x0040DA8Cu) [[unlikely]] return; }
L_0040DA8C:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 242u, depth + 1u); else { c.pc = 0x0040DB70u; return; } if (c.pc != 0x0040DA98u) [[unlikely]] return; }
L_0040DA98:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 241u, depth + 1u); else { c.pc = 0x0040DB60u; return; } if (c.pc != 0x0040DAA4u) [[unlikely]] return; }
L_0040DAA4:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAB8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 237u, depth + 1u); else { c.pc = 0x0040DAE0u; return; } if (c.pc != 0x0040DAB8u) [[unlikely]] return; }
L_0040DAB8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040DAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB18u); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00C3(c, 239u, depth + 1u); else { c.pc = 0x0040DB30u; return; } if (c.pc != 0x0040DB18u) [[unlikely]] return; }
L_0040DB18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040DB30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.r[6].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 60u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB50u); c.r[5].d[0] = ld64((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_00C3(c, 220u, depth + 1u); else { c.pc = 0x0040D8A0u; return; } if (c.pc != 0x0040DB50u) [[unlikely]] return; }
L_0040DB50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040DB60:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040DB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0040DBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB88u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040DB88u) [[unlikely]] return; }
L_0040DB88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0040DBA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBA0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040DBA0u) [[unlikely]] return; }
L_0040DBA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0040DBA8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0040DBC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBB8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040DBB8u) [[unlikely]] return; }
L_0040DBB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040DBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0040DBC0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040DBD0:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040DBF0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040DC00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A550u | kUnwind; return; } [[clang::musttail]] return unit_00C2(c, 281u, depth); }
L_0040DC10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C280u | kUnwind; return; } goto L_0040C280; }
L_0040DC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 6064u);  c.pc = t; return; }
L_0040DC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 6088u);  c.pc = t; return; }
L_0040DC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0040DC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC68u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 467u, depth + 1u); else { c.pc = 0x00437AD0u; return; } if (c.pc != 0x0040DC68u) [[unlikely]] return; }
L_0040DC68:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 617u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040DC88; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC80u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040DC80u) [[unlikely]] return; }
L_0040DC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040DC94; } }
L_0040DC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC90u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040DC90u) [[unlikely]] return; }
L_0040DC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040DC94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040DCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040DCF0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040DCD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCCCu);  if (depth < kMaxDepth) unit_00D1(c, 9u, depth + 1u); else { c.pc = 0x00444090u; return; } if (c.pc != 0x0040DCCCu) [[unlikely]] return; }
L_0040DCCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040DCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 445u, depth + 1u); else { c.pc = 0x0040BDC0u; return; } if (c.pc != 0x0040DCD8u) [[unlikely]] return; }
L_0040DCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCE0u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 12u, depth + 1u); else { c.pc = 0x004440D0u; return; } if (c.pc != 0x0040DCE0u) [[unlikely]] return; }
L_0040DCE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 255u, depth + 1u); else { c.pc = 0x004FE280u; return; } if (c.pc != 0x0040DCF0u) [[unlikely]] return; }
L_0040DCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 362u, depth + 1u); else { c.pc = 0x0040B450u; return; } if (c.pc != 0x0040DCF8u) [[unlikely]] return; }
L_0040DCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD00u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x0040DD00u) [[unlikely]] return; }
L_0040DD00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040DD2C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040DD20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD1Cu);  if (depth < kMaxDepth) unit_00D1(c, 9u, depth + 1u); else { c.pc = 0x00444090u; return; } if (c.pc != 0x0040DD1Cu) [[unlikely]] return; }
L_0040DD1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040DD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD28u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040DD28u) [[unlikely]] return; }
L_0040DD28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040DD2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040DD40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD50u);  if (depth < kMaxDepth) unit_00C2(c, 335u, depth + 1u); else { c.pc = 0x0040B020u; return; } if (c.pc != 0x0040DD50u) [[unlikely]] return; }
L_0040DD50:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD60u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0040DD60u) [[unlikely]] return; }
L_0040DD60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 79u, depth + 1u); else { c.pc = 0x004B89F0u; return; } if (c.pc != 0x0040DD70u) [[unlikely]] return; }
L_0040DD70:
    c.f[0] = ld32((c.r[28].w[0] - 32292u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040DD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0040DDE4; }
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 6u);  goto L_0040DDD8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040DDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DDE0; } }
L_0040DDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDD0u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040DDD0u) [[unlikely]] return; }
L_0040DDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DDE0; } }
L_0040DDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDE0u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040DDE0u) [[unlikely]] return; }
L_0040DDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0040DDE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040DDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE0Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00C2(c, 423u, depth + 1u); else { c.pc = 0x0040BB00u; return; } if (c.pc != 0x0040DE0Cu) [[unlikely]] return; }
L_0040DE0C:
    c.f[0] = ld32((c.r[16].w[0] + 620u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_0040DE5C; }
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 620u), c.f[0]);  if (t) { goto L_0040DE58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE44u); set32(c.r[5], c.r[5].w[0] + 7296u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0040DE44u) [[unlikely]] return; }
L_0040DE44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040DE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE58u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x0040DE58u) [[unlikely]] return; }
L_0040DE58:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0040DE5C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040DF7C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00C3[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040DE84:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DE94u) [[unlikely]] return; }
L_0040DE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DE9C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DEACu) [[unlikely]] return; }
L_0040DEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DEB4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DEC4u) [[unlikely]] return; }
L_0040DEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DECC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DEDCu) [[unlikely]] return; }
L_0040DEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DEE4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DEF4u) [[unlikely]] return; }
L_0040DEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DEFC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 56u));  goto L_0040DF24; }
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 7;
L_0040DF24:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040DF78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF48u); st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040DF48u) [[unlikely]] return; }
L_0040DF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DF50:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DF60u) [[unlikely]] return; }
L_0040DF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DF78; } }
L_0040DF68:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DF78u) [[unlikely]] return; }
L_0040DF78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040DF7C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040DF90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFB0u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 31u, depth + 1u); else { c.pc = 0x00444270u; return; } if (c.pc != 0x0040DFB0u) [[unlikely]] return; }
L_0040DFB0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DFC4u) [[unlikely]] return; }
L_0040DFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 435u, depth + 1u); else { c.pc = 0x0040BC90u; return; } if (c.pc != 0x0040DFCCu) [[unlikely]] return; }
L_0040DFCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040E020; } }
L_0040DFDC:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFE8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 481u, depth + 1u); else { c.pc = 0x004FBC50u; return; } if (c.pc != 0x0040DFE8u) [[unlikely]] return; }
L_0040DFE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFF8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0040DFF8u) [[unlikely]] return; }
L_0040DFF8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E004u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00EE(c, 305u, depth + 1u); else { c.pc = 0x004BA990u; return; } if (c.pc != 0x0040E004u) [[unlikely]] return; }
L_0040E004:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E014u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0040E014u) [[unlikely]] return; }
L_0040E014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E01Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00EF(c, 218u, depth + 1u); else { c.pc = 0x004BE770u; return; } if (c.pc != 0x0040E01Cu) [[unlikely]] return; }
L_0040E01C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0040E020:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DFDCu | kUnwind; return; } goto L_0040DFDC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E040u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 255u, depth + 1u); else { c.pc = 0x004FE280u; return; } if (c.pc != 0x0040E040u) [[unlikely]] return; }
L_0040E040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E048u);  if (depth < kMaxDepth) unit_00D1(c, 65u, depth + 1u); else { c.pc = 0x00444610u; return; } if (c.pc != 0x0040E048u) [[unlikely]] return; }
L_0040E048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);  goto L_0040E064; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E058u); set32(c.r[4], ld32((c.r[16].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 186u, depth + 1u); else { c.pc = 0x004D1AD0u; return; } if (c.pc != 0x0040E058u) [[unlikely]] return; }
L_0040E058:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 617u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.budget -= 3;
L_0040E064:
    st32((c.r[18].w[0] + 620u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040E080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 445u, depth + 1u); else { c.pc = 0x0040BDC0u; return; } if (c.pc != 0x0040E094u) [[unlikely]] return; }
L_0040E094:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 617u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040E0B4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0ACu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040E0ACu) [[unlikely]] return; }
L_0040E0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040E0C8; } }
L_0040E0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0BCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x0040E0BCu) [[unlikely]] return; }
L_0040E0BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0040E0C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040E0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040E180; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24688u);
    set32(c.r[2], c.r[2].w[0] + 24720u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E11Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 378u, depth + 1u); else { c.pc = 0x003F74B0u; return; } if (c.pc != 0x0040E11Cu) [[unlikely]] return; }
L_0040E11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E124u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 25u, depth + 1u); else { c.pc = 0x00444200u; return; } if (c.pc != 0x0040E124u) [[unlikely]] return; }
L_0040E124:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0040E130; } }
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0040E130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E138u); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x0040E138u) [[unlikely]] return; }
L_0040E138:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 616u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 624u);  goto L_0040E154; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E150u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D2(c, 301u, depth + 1u); else { c.pc = 0x0044A7C0u; return; } if (c.pc != 0x0040E150u) [[unlikely]] return; }
L_0040E150:
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 1;
L_0040E154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E15Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BD(c, 380u, depth + 1u); else { c.pc = 0x003F74D0u; return; } if (c.pc != 0x0040E15Cu) [[unlikely]] return; }
L_0040E15C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 23u, depth + 1u); else { c.pc = 0x0040C280u; return; } if (c.pc != 0x0040E168u) [[unlikely]] return; }
L_0040E168:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0040E184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E180u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040E180u) [[unlikely]] return; }
L_0040E180:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040E184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040E1A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1C8u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C3(c, 41u, depth + 1u); else { c.pc = 0x0040C530u; return; } if (c.pc != 0x0040E1C8u) [[unlikely]] return; }
L_0040E1C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24688u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 24720u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 624u);
    set32(c.r[5], c.r[5].w[0] + 7296u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1F4u); st8((c.r[20].w[0] + 617u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BD(c, 385u, depth + 1u); else { c.pc = 0x003F7570u; return; } if (c.pc != 0x0040E1F4u) [[unlikely]] return; }
L_0040E1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1FCu); set32(c.r[4], c.r[20].w[0] + 624u);  if (depth < kMaxDepth) unit_00BD(c, 379u, depth + 1u); else { c.pc = 0x003F74C0u; return; } if (c.pc != 0x0040E1FCu) [[unlikely]] return; }
L_0040E1FC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E210u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E210u) [[unlikely]] return; }
L_0040E210:
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 620u), 0u);
    st32((c.r[20].w[0] + 100u), 0u);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040E240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040E250; } }
L_0040E240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E248u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040E248u) [[unlikely]] return; }
L_0040E248:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0040E250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E258u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x0040E258u) [[unlikely]] return; }
L_0040E258:
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0040E270; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040E270:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E27Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x0040E27Cu) [[unlikely]] return; }
L_0040E27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E284u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040E284u) [[unlikely]] return; }
L_0040E284:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0040E298; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0040E29C; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0040E298:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040E29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2A4u); st32((c.r[20].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040E2A4u) [[unlikely]] return; }
L_0040E2A4:
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2B8u); set32(c.r[19], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040E2B8u) [[unlikely]] return; }
L_0040E2B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0040E2CC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[3].w[0] + 2u);  goto L_0040E2D0; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0040E2CC:
    set32(c.r[18], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_0040E2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2D8u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040E2D8u) [[unlikely]] return; }
L_0040E2D8:
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2ECu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040E2ECu) [[unlikely]] return; }
L_0040E2EC:
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], 0u + 1u);  goto L_0040E330; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040E330:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E33Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x0040E33Cu) [[unlikely]] return; }
L_0040E33C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31504u);
    set32(c.r[4], c.r[20].w[0] + 72u);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E35Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040E35Cu) [[unlikely]] return; }
L_0040E35C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E36Cu); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0040E36Cu) [[unlikely]] return; }
L_0040E36C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0040E37C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), 0u);  if (t) { goto L_0040E3B8; } }
L_0040E37C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E388u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0040E388u) [[unlikely]] return; }
L_0040E388:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0040E39C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0040E3B8; } }
L_0040E39C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3A8u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0040E3A8u) [[unlikely]] return; }
L_0040E3A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_0040E3BC; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0040E3B8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0040E3BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 7312u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3D8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040E3D8u) [[unlikely]] return; }
L_0040E3D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0040E3EC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0040E3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 311u, depth + 1u); else { c.pc = 0x0040AC40u; return; } if (c.pc != 0x0040E3F4u) [[unlikely]] return; }
L_0040E3F4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E400u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040E400u) [[unlikely]] return; }
L_0040E400:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E40Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x0040E40Cu) [[unlikely]] return; }
L_0040E40C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[11].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0040E420; }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 7318u);  if (t) { goto L_0040E424; } }
L_0040E420:
    set32(c.r[11], c.r[11].w[0] + 7326u);
    c.budget -= 1;
L_0040E424:
    set32(c.r[2], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26016u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[21].w[0])));
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 7334u);
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E458u); st32((c.r[28].w[0] - 26016u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0040E458u) [[unlikely]] return; }
L_0040E458:
    set32(c.r[2], ld32((c.r[28].w[0] - 24752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    st8((c.r[20].w[0] + 616u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 616u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0040E480; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E47Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 301u, depth + 1u); else { c.pc = 0x0044A7C0u; return; } if (c.pc != 0x0040E47Cu) [[unlikely]] return; }
L_0040E47C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0040E480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0040E4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30308u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0040E4CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0040E4DC; } }
L_0040E4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4D4u);  if (depth < kMaxDepth) unit_00C3(c, 93u, depth + 1u); else { c.pc = 0x0040CB10u; return; } if (c.pc != 0x0040E4D4u) [[unlikely]] return; }
L_0040E4D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0040E4DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040E4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E514u); set32(c.r[4], c.r[4].w[0] + 6032u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0040E514u) [[unlikely]] return; }
L_0040E514:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040E524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040E534; } }
L_0040E524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E52Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 94u, depth + 1u); else { c.pc = 0x0040CB30u; return; } if (c.pc != 0x0040E52Cu) [[unlikely]] return; }
L_0040E52C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0040E534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040E550:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040E560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30308u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0040E57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0040E584; } }
L_0040E57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E584u);  if (depth < kMaxDepth) unit_00C3(c, 97u, depth + 1u); else { c.pc = 0x0040CB80u; return; } if (c.pc != 0x0040E584u) [[unlikely]] return; }
L_0040E584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040E590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30308u)));  c.pc = t; return; }
L_0040E5A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DD90u | kUnwind; return; } goto L_0040DD90; }
L_0040E5B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E0E0u | kUnwind; return; } goto L_0040E0E0; }
L_0040E5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 7664u);  c.pc = t; return; }
L_0040E5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 7688u);  c.pc = t; return; }
L_0040E5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_0040E5F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 628u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0040E60C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 8958u);  if (t) { goto L_0040E610; } }
L_0040E60C:
    set32(c.r[2], c.r[2].w[0] + 8991u);
    c.budget -= 1;
L_0040E610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0040E638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0040E678; } }
L_0040E638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E640u); set32(c.r[4], c.r[4].w[0] + 648u);  if (depth < kMaxDepth) unit_00BD(c, 378u, depth + 1u); else { c.pc = 0x003F74B0u; return; } if (c.pc != 0x0040E640u) [[unlikely]] return; }
L_0040E640:
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));  goto L_0040E660; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E654u);  if (depth < kMaxDepth) unit_00D1(c, 20u, depth + 1u); else { c.pc = 0x00444190u; return; } if (c.pc != 0x0040E654u) [[unlikely]] return; }
L_0040E654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E65Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 9u, depth + 1u); else { c.pc = 0x00444090u; return; } if (c.pc != 0x0040E65Cu) [[unlikely]] return; }
L_0040E65C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_0040E660:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040E674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E674u); set32(c.r[4], ld32((c.r[3].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 178u, depth + 1u); else { c.pc = 0x004D19D0u; return; } if (c.pc != 0x0040E674u) [[unlikely]] return; }
L_0040E674:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0040E678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040E680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 420u, depth + 1u); else { c.pc = 0x0040BA90u; return; } if (c.pc != 0x0040E694u) [[unlikely]] return; }
L_0040E694:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0040E6A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040E6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040E6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 361u, depth + 1u); else { c.pc = 0x0040B3E0u; return; } if (c.pc != 0x0040E6D4u) [[unlikely]] return; }
L_0040E6D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0040E6E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040E6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040E700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E71Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 399u, depth + 1u); else { c.pc = 0x0040B860u; return; } if (c.pc != 0x0040E71Cu) [[unlikely]] return; }
L_0040E71C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040E754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E72Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 401u, depth + 1u); else { c.pc = 0x0040EB30u; return; } if (c.pc != 0x0040E72Cu) [[unlikely]] return; }
L_0040E72C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E73Cu); set32(c.r[5], c.r[5].w[0] + 9022u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0040E73Cu) [[unlikely]] return; }
L_0040E73C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040E750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E750u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x0040E750u) [[unlikely]] return; }
L_0040E750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040E754:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040E770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0040E780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 640u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 644u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0040E7E4; } }
L_0040E7B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7C4u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0040E7C4u) [[unlikely]] return; }
L_0040E7C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0040E7DC; }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 28u)));  if (t) { goto L_0040E80C; } }
L_0040E7DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 48u);
    c.budget -= 2;
L_0040E7E4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E7B4u | kUnwind; return; } goto L_0040E7B4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040E80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040E830:
    set32(c.r[6], ld32((c.r[4].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040E860; } }
L_0040E83C:
    set32(c.r[2], ld32((c.r[4].w[0] + 644u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0040E860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E870; } }
L_0040E860:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E83Cu | kUnwind; return; } goto L_0040E83C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040E870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E89Cu); set32(c.r[5], c.r[16].w[0] + 632u);  if (depth < kMaxDepth) unit_00C3(c, 396u, depth + 1u); else { c.pc = 0x0040EA90u; return; } if (c.pc != 0x0040E89Cu) [[unlikely]] return; }
L_0040E89C:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8A8u); set32(c.r[5], c.r[16].w[0] + 632u);  if (depth < kMaxDepth) unit_00C3(c, 395u, depth + 1u); else { c.pc = 0x0040EA70u; return; } if (c.pc != 0x0040E8A8u) [[unlikely]] return; }
L_0040E8A8:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8B4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C3(c, 391u, depth + 1u); else { c.pc = 0x0040EA10u; return; } if (c.pc != 0x0040E8B4u) [[unlikely]] return; }
L_0040E8B4:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 390u, depth + 1u); else { c.pc = 0x0040EA00u; return; } if (c.pc != 0x0040E8C0u) [[unlikely]] return; }
L_0040E8C0:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8D4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C3(c, 388u, depth + 1u); else { c.pc = 0x0040E9C0u; return; } if (c.pc != 0x0040E8D4u) [[unlikely]] return; }
L_0040E8D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8FCu); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 358u, depth + 1u); else { c.pc = 0x00412A40u; return; } if (c.pc != 0x0040E8FCu) [[unlikely]] return; }
L_0040E8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040E920; } }
L_0040E904:
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 7;
L_0040E920:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E904u | kUnwind; return; } goto L_0040E904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0040E990; } }
L_0040E938:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] << 4);  if (t) { goto L_0040E97C; } }
L_0040E948:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 10;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0040E97C; }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_0040E97C:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E948u | kUnwind; return; } goto L_0040E948; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0040E990:
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[2].d[0] = c.r[8].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E938u | kUnwind; return; } goto L_0040E938; }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 24u, depth + 1u); else { c.pc = 0x004144C0u; return; } if (c.pc != 0x0040E9ACu) [[unlikely]] return; }
L_0040E9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040E9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9ECu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 422u, depth + 1u); else { c.pc = 0x004134D0u; return; } if (c.pc != 0x0040E9ECu) [[unlikely]] return; }
L_0040E9EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EA00:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040EA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0040EA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA28u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040EA28u) [[unlikely]] return; }
L_0040EA28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0040EA48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA40u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040EA40u) [[unlikely]] return; }
L_0040EA40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0040EA48:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0040EA60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA58u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040EA58u) [[unlikely]] return; }
L_0040EA58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040EA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0040EA60:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040EA70:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040EA90:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040EAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040EB08; } }
L_0040EACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EAD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0040EAD4u) [[unlikely]] return; }
L_0040EAD4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EAE0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x0040EAE0u) [[unlikely]] return; }
L_0040EAE0:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
L_0040EB08:
    set32(c.r[3], ld32((c.r[18].w[0] + 640u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EACCu | kUnwind; return; } goto L_0040EACC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040EB30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040ED4C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 640u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0040EB90; } }
L_0040EB68:
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0040EB90; }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0040EB90:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EB68u | kUnwind; return; } goto L_0040EB68; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0040ED50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EBACu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 131u, depth + 1u); else { c.pc = 0x003CD1A0u; return; } if (c.pc != 0x0040EBACu) [[unlikely]] return; }
L_0040EBAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 156u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 156u);  if (t) { goto L_0040EBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0040EBC8; } }
L_0040EBC4:
    set32(c.r[17], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0040EBC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0040EC14; } }
L_0040EBE4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EBF4u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0040EBF4u) [[unlikely]] return; }
L_0040EBF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_0040EC0C; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 28u)));  if (t) { goto L_0040EC3C; } }
L_0040EC0C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 48u);
    c.budget -= 2;
L_0040EC14:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EBE4u | kUnwind; return; } goto L_0040EBE4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040EC3C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0040EC4C; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0040EC4C:
    set32(c.r[5], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040EC7C; } }
L_0040EC58:
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0040EC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EC8C; } }
L_0040EC7C:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EC58u | kUnwind; return; } goto L_0040EC58; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040EC8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040ED4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[16].w[0] + 9u);  goto L_0040ECA8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0040ECA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 156u);  if (t) { goto L_0040ECC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040ECC4; } }
L_0040ECC0:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040ECC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ECCCu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 78u, depth + 1u); else { c.pc = 0x003CCB90u; return; } if (c.pc != 0x0040ECCCu) [[unlikely]] return; }
L_0040ECCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040ED4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[16].w[0] + 9u);  goto L_0040ECE8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0040ECE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 156u);  if (t) { goto L_0040ED00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040ED04; } }
L_0040ED00:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040ED04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 88u, depth + 1u); else { c.pc = 0x003CCD20u; return; } if (c.pc != 0x0040ED0Cu) [[unlikely]] return; }
L_0040ED0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040ED4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[16].w[0] + 9u);  goto L_0040ED28; }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0040ED28:
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 156u);  if (t) { goto L_0040ED40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040ED44; } }
L_0040ED40:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040ED44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED4Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 130u, depth + 1u); else { c.pc = 0x003CD190u; return; } if (c.pc != 0x0040ED4Cu) [[unlikely]] return; }
L_0040ED4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040ED50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040ED70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 628u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040EDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 628u), 0u);  if (t) { goto L_0040EECC; } }
L_0040EDA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040EEB4; } }
L_0040EDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDC0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0040EDC0u) [[unlikely]] return; }
L_0040EDC0:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 422u, depth + 1u); else { c.pc = 0x0040F170u; return; } if (c.pc != 0x0040EDCCu) [[unlikely]] return; }
L_0040EDCC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 644u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDFCu); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x0040EDFCu) [[unlikely]] return; }
L_0040EDFC:
    st32((c.r[2].w[0] + 56u), c.r[21].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 644u)));  goto L_0040EEA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE1Cu); set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x0040EE1Cu) [[unlikely]] return; }
L_0040EE1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    c.f[2] = ld32((c.r[28].w[0] - 30136u));
    c.f[3] = ld32((c.r[28].w[0] - 30132u));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.f[4] = ld32((c.r[2].w[0] + 76u));  if (t) { goto L_0040EE5C; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 9;
L_0040EE5C:
    set32(c.r[3], ld32((c.r[20].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 30124u));  goto L_0040EE74; }
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[28].w[0] - 30124u));
    c.budget -= 2;
L_0040EE74:
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 644u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.f[0]);  if (t) { goto L_0040EEB0; } }
L_0040EEA8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 2;
L_0040EEB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0040EEB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 640u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EDB8u | kUnwind; return; } goto L_0040EDB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EECCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 377u, depth + 1u); else { c.pc = 0x0040E880u; return; } if (c.pc != 0x0040EECCu) [[unlikely]] return; }
L_0040EECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040EEF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040EF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040EF4C; } }
L_0040EF38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31516u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_0040EF4C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[20].w[0] + 48u)));  if (t) { goto L_0040F078; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF80u); set32(c.r[21], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0040EF80u) [[unlikely]] return; }
L_0040EF80:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[21].w[0];
    c.f[21] = ld32((c.r[28].w[0] - 30280u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EFBCu); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0040EFBCu) [[unlikely]] return; }
L_0040EFBC:
    c.f[2] = ld32((c.r[28].w[0] - 30276u));
    set32(c.r[2], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[20]));
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.budget -= 19;
    if (c.r[19].sd[0] < 0) { set32(c.r[3], c.r[19].w[0] >> 1);  goto L_0040F014; }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040F02C; } }
L_0040F014:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040F02C:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0040F05C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7001u);  if (t) { goto L_0040F074; } }
L_0040F05C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 7001u);
    c.budget -= 6;
L_0040F074:
    mmi::pminw(c.r[19], c.r[3], c.r[2]);
    c.budget -= 1;
L_0040F078:
    c.budget -= 2;
    if (c.r[19].sd[0] < 0) { set32(c.r[3], c.r[19].w[0] >> 1);  goto L_0040F08C; }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040F0A4; } }
L_0040F08C:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0040F0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F0C4u);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x0040F0C4u) [[unlikely]] return; }
L_0040F0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_0040F0EC; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0040F104; } }
L_0040F0EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0040F104:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0040F13C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F128u);  if (depth < kMaxDepth) unit_00F4(c, 161u, depth + 1u); else { c.pc = 0x004D17D0u; return; } if (c.pc != 0x0040F128u) [[unlikely]] return; }
L_0040F128:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0040F13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040F170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F190u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x0040F190u) [[unlikely]] return; }
L_0040F190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F198u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 417u, depth + 1u); else { c.pc = 0x0040EEF0u; return; } if (c.pc != 0x0040F198u) [[unlikely]] return; }
L_0040F198:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040F1B0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[20].w[0] + 632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F1E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C5(c, 21u, depth + 1u); else { c.pc = 0x00414450u; return; } if (c.pc != 0x0040F1E4u) [[unlikely]] return; }
L_0040F1E4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 252u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F23Cu); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 450u, depth + 1u); else { c.pc = 0x00413B30u; return; } if (c.pc != 0x0040F23Cu) [[unlikely]] return; }
L_0040F23C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F248u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 450u, depth + 1u); else { c.pc = 0x00413B30u; return; } if (c.pc != 0x0040F248u) [[unlikely]] return; }
L_0040F248:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F254u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 450u, depth + 1u); else { c.pc = 0x00413B30u; return; } if (c.pc != 0x0040F254u) [[unlikely]] return; }
L_0040F254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040F408; } }
L_0040F25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F264u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x0040F264u) [[unlikely]] return; }
L_0040F264:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0040F2B4; } }
L_0040F278:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040F29C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040F29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2A4u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 213u, depth + 1u); else { c.pc = 0x004E5EB0u; return; } if (c.pc != 0x0040F2A4u) [[unlikely]] return; }
L_0040F2A4:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0040F2B4; }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0040F2B4:
    c.r[2].d[0] = c.r[22].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F278u | kUnwind; return; } goto L_0040F278; }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_0040F2E4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2D8u); set32(c.r[5], c.r[5].w[0] + 9049u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0040F2D8u) [[unlikely]] return; }
L_0040F2D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0040F408; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0040F2E4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 248u)));  goto L_0040F3EC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_0040F304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040F308; } }
L_0040F304:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040F308:
    set32(c.r[2], ld32((c.r[20].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 156u);  if (t) { goto L_0040F320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040F324; } }
L_0040F320:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040F324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F32Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 88u, depth + 1u); else { c.pc = 0x003CCD20u; return; } if (c.pc != 0x0040F32Cu) [[unlikely]] return; }
L_0040F32C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0040F35C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F354u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0040F354u) [[unlikely]] return; }
L_0040F354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F404; } }
L_0040F35C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_0040F370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040F374; } }
L_0040F370:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040F374:
    set32(c.r[2], ld32((c.r[20].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 156u);  if (t) { goto L_0040F38C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040F390; } }
L_0040F38C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040F390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F398u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 78u, depth + 1u); else { c.pc = 0x003CCB90u; return; } if (c.pc != 0x0040F398u) [[unlikely]] return; }
L_0040F398:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 248u)));  goto L_0040F3C8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3C0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0040F3C0u) [[unlikely]] return; }
L_0040F3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F404; } }
L_0040F3C8:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3E4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0040F3E4u) [[unlikely]] return; }
L_0040F3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F404; } }
L_0040F3EC:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F404u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0040F404u) [[unlikely]] return; }
L_0040F404:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0040F408:
    set32(c.r[2], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F25Cu | kUnwind; return; } goto L_0040F25C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0040F4C0; } }
L_0040F424:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    st32((c.r[29].w[0] + 404u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    set32(c.r[16], c.r[4].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 400u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 336u), c.f[1]);  if (t) { goto L_0040F468; } }
L_0040F460:
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F468:
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  goto L_0040F490; }
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F484u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0040F484u) [[unlikely]] return; }
L_0040F484:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 340u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F460u | kUnwind; return; } goto L_0040F460; }
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_0040F490:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 340u)));  if (t) { goto L_0040F4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4BCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00B1(c, 389u, depth + 1u); else { c.pc = 0x003C71C0u; return; } if (c.pc != 0x0040F4BCu) [[unlikely]] return; }
L_0040F4BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0040F4C0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F424u | kUnwind; return; } goto L_0040F424; }
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 284u);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 396u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 392u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F500u); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_00C3(c, 497u, depth + 1u); else { c.pc = 0x0040FAE0u; return; } if (c.pc != 0x0040F500u) [[unlikely]] return; }
L_0040F500:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 232u)));  goto L_0040F574; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F518u); set32(c.r[4], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_00C3(c, 496u, depth + 1u); else { c.pc = 0x0040FAC0u; return; } if (c.pc != 0x0040F518u) [[unlikely]] return; }
L_0040F518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 288u);  if (t) { goto L_0040F560; } }
L_0040F520:
    set32(c.r[4], c.r[29].w[0] + 276u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F530u); st8((c.r[29].w[0] + 276u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C3(c, 104u, depth + 1u); else { c.pc = 0x0040CC20u; return; } if (c.pc != 0x0040F530u) [[unlikely]] return; }
L_0040F530:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F544u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00C3(c, 495u, depth + 1u); else { c.pc = 0x0040FAA0u; return; } if (c.pc != 0x0040F544u) [[unlikely]] return; }
L_0040F544:
    set32(c.r[5], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F550u); set32(c.r[4], ld32((c.r[29].w[0] + 288u)));  if (depth < kMaxDepth) unit_00C3(c, 490u, depth + 1u); else { c.pc = 0x0040FA10u; return; } if (c.pc != 0x0040F550u) [[unlikely]] return; }
L_0040F550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F558u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00C3(c, 489u, depth + 1u); else { c.pc = 0x0040F9F0u; return; } if (c.pc != 0x0040F558u) [[unlikely]] return; }
L_0040F558:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 2;
L_0040F560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F568u); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_00C3(c, 488u, depth + 1u); else { c.pc = 0x0040F9E0u; return; } if (c.pc != 0x0040F568u) [[unlikely]] return; }
L_0040F568:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F520u | kUnwind; return; } goto L_0040F520; }
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_0040F574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  goto L_0040F5B0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5ACu); set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 388u, depth + 1u); else { c.pc = 0x00412F70u; return; } if (c.pc != 0x0040F5ACu) [[unlikely]] return; }
L_0040F5AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0040F5B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_0040F5EC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 296u)));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5E8u); set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 388u, depth + 1u); else { c.pc = 0x00412F70u; return; } if (c.pc != 0x0040F5E8u) [[unlikely]] return; }
L_0040F5E8:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_0040F5EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 252u)));  goto L_0040F640; }
    set32(c.r[5], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    set32(c.r[5], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F63Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00C4(c, 440u, depth + 1u); else { c.pc = 0x004139A0u; return; } if (c.pc != 0x0040F63Cu) [[unlikely]] return; }
L_0040F63C:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 1;
L_0040F640:
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F670u); st32((c.r[29].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_00C3(c, 497u, depth + 1u); else { c.pc = 0x0040FAE0u; return; } if (c.pc != 0x0040F670u) [[unlikely]] return; }
L_0040F670:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0040F7A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F688u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_00C3(c, 496u, depth + 1u); else { c.pc = 0x0040FAC0u; return; } if (c.pc != 0x0040F688u) [[unlikely]] return; }
L_0040F688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_0040F6D0; } }
L_0040F690:
    set32(c.r[4], c.r[29].w[0] + 260u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6A0u); st8((c.r[29].w[0] + 260u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C3(c, 104u, depth + 1u); else { c.pc = 0x0040CC20u; return; } if (c.pc != 0x0040F6A0u) [[unlikely]] return; }
L_0040F6A0:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6B4u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00C3(c, 495u, depth + 1u); else { c.pc = 0x0040FAA0u; return; } if (c.pc != 0x0040F6B4u) [[unlikely]] return; }
L_0040F6B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6C0u); set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  if (depth < kMaxDepth) unit_00C3(c, 490u, depth + 1u); else { c.pc = 0x0040FA10u; return; } if (c.pc != 0x0040F6C0u) [[unlikely]] return; }
L_0040F6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6C8u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00C3(c, 489u, depth + 1u); else { c.pc = 0x0040F9F0u; return; } if (c.pc != 0x0040F6C8u) [[unlikely]] return; }
L_0040F6C8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 2;
L_0040F6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6D8u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_00C3(c, 488u, depth + 1u); else { c.pc = 0x0040F9E0u; return; } if (c.pc != 0x0040F6D8u) [[unlikely]] return; }
L_0040F6D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F690u | kUnwind; return; } goto L_0040F690; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F7A4; } }
L_0040F6EC:
    set32(c.r[16], c.r[19].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 348u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 304u), c.f[0]);  if (t) { goto L_0040F728; } }
L_0040F720:
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F728:
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  goto L_0040F750; }
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F744u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0040F744u) [[unlikely]] return; }
L_0040F744:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 308u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F720u | kUnwind; return; } goto L_0040F720; }
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_0040F750:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 308u)));  if (t) { goto L_0040F77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F77Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00B1(c, 389u, depth + 1u); else { c.pc = 0x003C71C0u; return; } if (c.pc != 0x0040F77Cu) [[unlikely]] return; }
L_0040F77C:
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7A0u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0040F7A0u) [[unlikely]] return; }
L_0040F7A0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0040F7A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 252u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F6ECu | kUnwind; return; } goto L_0040F6EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0040F8F8; } }
L_0040F7BC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0040F7C8; }
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0040F7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7D0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040F7D0u) [[unlikely]] return; }
L_0040F7D0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0040F814; }
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[3], c.r[18].w[0] - c.r[17].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7F0u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00C4(c, 308u, depth + 1u); else { c.pc = 0x00412260u; return; } if (c.pc != 0x0040F7F0u) [[unlikely]] return; }
L_0040F7F0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_0040F804; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0040F804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F80Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040F80Cu) [[unlikely]] return; }
L_0040F80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0040F844; } }
L_0040F814:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040F838; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040F838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F840u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040F840u) [[unlikely]] return; }
L_0040F840:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0040F844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F84Cu);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x0040F84Cu) [[unlikely]] return; }
L_0040F84C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F860u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040F860u) [[unlikely]] return; }
L_0040F860:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_0040F874; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_0040F874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F87Cu); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040F87Cu) [[unlikely]] return; }
L_0040F87C:
    st32((c.r[29].w[0] + 188u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[4], c.r[20].w[0] + 632u);
    set32(c.r[3], ld32((c.r[20].w[0] + 640u)));
    set32(c.r[7], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 184u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[20].w[0] + 640u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 644u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8C4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 456u, depth + 1u); else { c.pc = 0x00413C60u; return; } if (c.pc != 0x0040F8C4u) [[unlikely]] return; }
L_0040F8C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8DCu); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040F8DCu) [[unlikely]] return; }
L_0040F8DC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x0040F8E8u) [[unlikely]] return; }
L_0040F8E8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040F8F4u) [[unlikely]] return; }
L_0040F8F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0040F8F8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F7BCu | kUnwind; return; } goto L_0040F7BC; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0040F910u) [[unlikely]] return; }
L_0040F910:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F91Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0040F91Cu) [[unlikely]] return; }
L_0040F91C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0040F928u) [[unlikely]] return; }
L_0040F928:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0040F960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040F9BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0040F998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F998u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040F998u) [[unlikely]] return; }
L_0040F998:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x0040F9A4u) [[unlikely]] return; }
L_0040F9A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040F9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040F9BCu) [[unlikely]] return; }
L_0040F9BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040F9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040F9E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0040F9F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040FA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA38u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0040FA38u) [[unlikely]] return; }
L_0040FA38:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040FA54; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040FA54:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA60u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040FA60u) [[unlikely]] return; }
L_0040FA60:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0040FA74; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0040FA74:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA80u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040FA80u) [[unlikely]] return; }
L_0040FA80:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040FA8Cu) [[unlikely]] return; }
L_0040FA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040FAA0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040FAC0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0040FAE0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_0040FAFC; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0040FAFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040FB10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040FBB8; } }
L_0040FB44:
    set32(c.r[2], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0040FBB8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 8u);  if (t) { goto L_0040FB7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040FB80; } }
L_0040FB7C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040FB80:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB90u); c.r[7].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00F4(c, 211u, depth + 1u); else { c.pc = 0x004D1E20u; return; } if (c.pc != 0x0040FB90u) [[unlikely]] return; }
L_0040FB90:
    set32(c.r[3], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FBB4; } }
    c.f[20] = ld32((c.r[4].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBB0u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x0040FBB0u) [[unlikely]] return; }
L_0040FBB0:
    st32((c.r[2].w[0] + 76u), c.f[20]);
    c.budget -= 1;
L_0040FBB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0040FBB8:
    set32(c.r[2], ld32((c.r[19].w[0] + 640u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FB44u | kUnwind; return; } goto L_0040FB44; }
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  goto L_0040FBE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 318u, depth + 1u); else { c.pc = 0x0040ACC0u; return; } if (c.pc != 0x0040FBE0u) [[unlikely]] return; }
L_0040FBE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 1;
L_0040FBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBECu);  if (depth < kMaxDepth) unit_00B3(c, 274u, depth + 1u); else { c.pc = 0x003CE2C0u; return; } if (c.pc != 0x0040FBECu) [[unlikely]] return; }
L_0040FBEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBF8u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00FF(c, 351u, depth + 1u); else { c.pc = 0x004FEC60u; return; } if (c.pc != 0x0040FBF8u) [[unlikely]] return; }
L_0040FBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040FC20:
    set32(c.r[5], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 616u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 620u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040FC60:
    set32(c.r[2], ld32((c.r[4].w[0] + 616u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 620u)));
    set32(c.r[7], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0040FCD0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040FE08; } }
L_0040FD04:
    set32(c.r[2], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 616u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    set32(c.r[6], ld32((c.r[19].w[0] + 620u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FD2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 201u, depth + 1u); else { c.pc = 0x003E9680u; return; } if (c.pc != 0x0040FD2Cu) [[unlikely]] return; }
L_0040FD2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0040FE08; }
    set32(c.r[2], ld32((c.r[19].w[0] + 620u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FD5Cu); st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040FD5Cu) [[unlikely]] return; }
L_0040FD5C:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9063u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FD70u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0040FD70u) [[unlikely]] return; }
L_0040FD70:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040FDB0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] + 9063u);
    set32(c.r[6], c.r[29].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FD90u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x0040FD90u) [[unlikely]] return; }
L_0040FD90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FD9Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0040FD9Cu) [[unlikely]] return; }
L_0040FD9C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FDA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040FDA8u) [[unlikely]] return; }
L_0040FDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[19].w[0] + 616u)));  if (t) { goto L_0040FDC0; } }
L_0040FDB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FDBCu); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x0040FDBCu) [[unlikely]] return; }
L_0040FDBC:
    set32(c.r[7], ld32((c.r[19].w[0] + 616u)));
    c.budget -= 1;
L_0040FDC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 620u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FDD8u); set32(c.r[6], c.r[6].w[0] + 9078u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040FDD8u) [[unlikely]] return; }
L_0040FDD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_0040FDEC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0040FDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FDF4u); set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));  if (depth < kMaxDepth) unit_00B1(c, 190u, depth + 1u); else { c.pc = 0x003C5DC0u; return; } if (c.pc != 0x0040FDF4u) [[unlikely]] return; }
L_0040FDF4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040FE00u) [[unlikely]] return; }
L_0040FE00:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0040FE08:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FD04u | kUnwind; return; } goto L_0040FD04; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 616u)));  goto L_0040FE40; }
    set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE3Cu); set32(c.r[5], c.r[5].w[0] + 9104u);  if (depth < kMaxDepth) unit_00B1(c, 190u, depth + 1u); else { c.pc = 0x003C5DC0u; return; } if (c.pc != 0x0040FE3Cu) [[unlikely]] return; }
L_0040FE3C:
    set32(c.r[6], ld32((c.r[19].w[0] + 616u)));
    c.budget -= 1;
L_0040FE40:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 620u)));
    set32(c.r[4], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 12;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  [[clang::musttail]] return unit_00C4(c, 4u, depth); }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[20], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00C4(c, 3u, depth); } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040FEB0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0040FEB0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0040FEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FF1C; } }
L_0040FEB0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040FF1C; } }
    set32(c.r[4], c.r[20].w[0] - 1u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FEDCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 184u, depth + 1u); else { c.pc = 0x003E9480u; return; } if (c.pc != 0x0040FEDCu) [[unlikely]] return; }
L_0040FEDC:
    set32(c.r[7], ld32((c.r[19].w[0] + 616u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FEF4u); set32(c.r[6], c.r[6].w[0] + 9123u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040FEF4u) [[unlikely]] return; }
L_0040FEF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_0040FF08; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_0040FF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF10u); set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));  if (depth < kMaxDepth) unit_00B1(c, 190u, depth + 1u); else { c.pc = 0x003C5DC0u; return; } if (c.pc != 0x0040FF10u) [[unlikely]] return; }
L_0040FF10:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040FF1Cu) [[unlikely]] return; }
L_0040FF1C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  [[clang::musttail]] return unit_00C4(c, 2u, depth); }
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF34u); st32((c.r[29].w[0] + 232u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040FF34u) [[unlikely]] return; }
L_0040FF34:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9141u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF48u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0040FF48u) [[unlikely]] return; }
L_0040FF48:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040FF88; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 9141u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF68u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x0040FF68u) [[unlikely]] return; }
L_0040FF68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF74u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0040FF74u) [[unlikely]] return; }
L_0040FF74:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040FF80u) [[unlikely]] return; }
L_0040FF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  if (t) { goto L_0040FF98; } }
L_0040FF88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF94u); set32(c.r[6], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x0040FF94u) [[unlikely]] return; }
L_0040FF94:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 1;
L_0040FF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040FFA0u) [[unlikely]] return; }
L_0040FFA0:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9063u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFB4u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0040FFB4u) [[unlikely]] return; }
L_0040FFB4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040FFF4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 9063u);
    set32(c.r[6], c.r[28].w[0] - 30284u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFD4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x0040FFD4u) [[unlikely]] return; }
L_0040FFD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFE0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0040FFE0u) [[unlikely]] return; }
L_0040FFE0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040FFECu) [[unlikely]] return; }
L_0040FFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00C4(c, 1u, depth); } }
L_0040FFF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410000u); set32(c.r[6], c.r[28].w[0] - 30284u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x00410000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00C4(c, 1u, depth);
}

}
