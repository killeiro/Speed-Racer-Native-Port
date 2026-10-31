#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C1[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15,
    0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0,
    0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0,
    244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354,
    0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0,
    394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0,
    411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0,
    461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 475, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 489, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0,
    542, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0,
    569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0,
    576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0,
    591, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0,
    0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0,
    608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616,
    0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620,
    0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626,
    0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00404000;
    case 2u: goto L_00404010;
    case 3u: goto L_0040402C;
    case 4u: goto L_00404038;
    case 5u: goto L_0040403C;
    case 6u: goto L_00404060;
    case 7u: goto L_0040407C;
    case 8u: goto L_00404088;
    case 9u: goto L_004040A0;
    case 10u: goto L_004040B0;
    case 11u: goto L_004040C0;
    case 12u: goto L_004040D4;
    case 13u: goto L_00404120;
    case 14u: goto L_00404174;
    case 15u: goto L_0040417C;
    case 16u: goto L_0040418C;
    case 17u: goto L_00404194;
    case 18u: goto L_004041A4;
    case 19u: goto L_004041B8;
    case 20u: goto L_004041C0;
    case 21u: goto L_00404200;
    case 22u: goto L_00404210;
    case 23u: goto L_0040421C;
    case 24u: goto L_00404230;
    case 25u: goto L_00404240;
    case 26u: goto L_0040424C;
    case 27u: goto L_00404260;
    case 28u: goto L_00404298;
    case 29u: goto L_004042A8;
    case 30u: goto L_004042BC;
    case 31u: goto L_004042DC;
    case 32u: goto L_004042E8;
    case 33u: goto L_0040430C;
    case 34u: goto L_00404330;
    case 35u: goto L_00404360;
    case 36u: goto L_00404380;
    case 37u: goto L_00404390;
    case 38u: goto L_004043A4;
    case 39u: goto L_004043B0;
    case 40u: goto L_004043EC;
    case 41u: goto L_00404410;
    case 42u: goto L_00404418;
    case 43u: goto L_0040443C;
    case 44u: goto L_00404448;
    case 45u: goto L_00404484;
    case 46u: goto L_0040449C;
    case 47u: goto L_004044BC;
    case 48u: goto L_004044E4;
    case 49u: goto L_00404500;
    case 50u: goto L_0040451C;
    case 51u: goto L_00404528;
    case 52u: goto L_00404544;
    case 53u: goto L_00404550;
    case 54u: goto L_00404570;
    case 55u: goto L_00404580;
    case 56u: goto L_0040459C;
    case 57u: goto L_004045B0;
    case 58u: goto L_004045C0;
    case 59u: goto L_004045DC;
    case 60u: goto L_00404600;
    case 61u: goto L_00404688;
    case 62u: goto L_00404694;
    case 63u: goto L_0040469C;
    case 64u: goto L_004046A8;
    case 65u: goto L_004046C4;
    case 66u: goto L_004046D4;
    case 67u: goto L_00404720;
    case 68u: goto L_0040473C;
    case 69u: goto L_00404750;
    case 70u: goto L_0040476C;
    case 71u: goto L_00404794;
    case 72u: goto L_004047A8;
    case 73u: goto L_004047BC;
    case 74u: goto L_004047C8;
    case 75u: goto L_004047E0;
    case 76u: goto L_004047E8;
    case 77u: goto L_00404804;
    case 78u: goto L_00404820;
    case 79u: goto L_0040484C;
    case 80u: goto L_0040486C;
    case 81u: goto L_004048D8;
    case 82u: goto L_00404900;
    case 83u: goto L_00404918;
    case 84u: goto L_0040495C;
    case 85u: goto L_00404968;
    case 86u: goto L_00404980;
    case 87u: goto L_00404994;
    case 88u: goto L_004049BC;
    case 89u: goto L_004049E0;
    case 90u: goto L_004049F4;
    case 91u: goto L_00404A04;
    case 92u: goto L_00404A0C;
    case 93u: goto L_00404A1C;
    case 94u: goto L_00404A28;
    case 95u: goto L_00404A30;
    case 96u: goto L_00404A48;
    case 97u: goto L_00404A60;
    case 98u: goto L_00404A6C;
    case 99u: goto L_00404A74;
    case 100u: goto L_00404A90;
    case 101u: goto L_00404AB0;
    case 102u: goto L_00404AD4;
    case 103u: goto L_00404AE4;
    case 104u: goto L_00404AF0;
    case 105u: goto L_00404AFC;
    case 106u: goto L_00404B20;
    case 107u: goto L_00404B30;
    case 108u: goto L_00404B88;
    case 109u: goto L_00404B94;
    case 110u: goto L_00404BA4;
    case 111u: goto L_00404BB4;
    case 112u: goto L_00404BD8;
    case 113u: goto L_00404BE4;
    case 114u: goto L_00404C10;
    case 115u: goto L_00404C24;
    case 116u: goto L_00404C30;
    case 117u: goto L_00404C58;
    case 118u: goto L_00404C80;
    case 119u: goto L_00404CC8;
    case 120u: goto L_00404D08;
    case 121u: goto L_00404D28;
    case 122u: goto L_00404D34;
    case 123u: goto L_00404D4C;
    case 124u: goto L_00404D70;
    case 125u: goto L_00404D90;
    case 126u: goto L_00404DA4;
    case 127u: goto L_00404E04;
    case 128u: goto L_00404E18;
    case 129u: goto L_00404E30;
    case 130u: goto L_00404E54;
    case 131u: goto L_00404E60;
    case 132u: goto L_00404E70;
    case 133u: goto L_00404E80;
    case 134u: goto L_00404EC4;
    case 135u: goto L_00404EE8;
    case 136u: goto L_00404EF4;
    case 137u: goto L_00404F30;
    case 138u: goto L_00404F3C;
    case 139u: goto L_00404F4C;
    case 140u: goto L_00404F5C;
    case 141u: goto L_00404F70;
    case 142u: goto L_00404F80;
    case 143u: goto L_00404F90;
    case 144u: goto L_00404F9C;
    case 145u: goto L_00404FC0;
    case 146u: goto L_00404FD0;
    case 147u: goto L_00404FE8;
    case 148u: goto L_00405000;
    case 149u: goto L_0040501C;
    case 150u: goto L_0040502C;
    case 151u: goto L_00405038;
    case 152u: goto L_0040504C;
    case 153u: goto L_00405064;
    case 154u: goto L_00405070;
    case 155u: goto L_00405088;
    case 156u: goto L_004050A4;
    case 157u: goto L_004050B4;
    case 158u: goto L_004050C0;
    case 159u: goto L_004050CC;
    case 160u: goto L_004050E4;
    case 161u: goto L_004050F0;
    case 162u: goto L_00405110;
    case 163u: goto L_00405140;
    case 164u: goto L_00405158;
    case 165u: goto L_00405170;
    case 166u: goto L_0040518C;
    case 167u: goto L_004051B0;
    case 168u: goto L_004051C8;
    case 169u: goto L_004051D8;
    case 170u: goto L_004051E8;
    case 171u: goto L_0040520C;
    case 172u: goto L_00405220;
    case 173u: goto L_00405238;
    case 174u: goto L_00405248;
    case 175u: goto L_00405258;
    case 176u: goto L_0040527C;
    case 177u: goto L_00405290;
    case 178u: goto L_004052A0;
    case 179u: goto L_004052B0;
    case 180u: goto L_004052C0;
    case 181u: goto L_00405380;
    case 182u: goto L_00405400;
    case 183u: goto L_00405490;
    case 184u: goto L_00405518;
    case 185u: goto L_00405540;
    case 186u: goto L_004055B0;
    case 187u: goto L_00405600;
    case 188u: goto L_00405624;
    case 189u: goto L_00405638;
    case 190u: goto L_00405658;
    case 191u: goto L_00405664;
    case 192u: goto L_00405670;
    case 193u: goto L_00405684;
    case 194u: goto L_00405690;
    case 195u: goto L_004056C8;
    case 196u: goto L_004056F0;
    case 197u: goto L_00405730;
    case 198u: goto L_00405760;
    case 199u: goto L_00405788;
    case 200u: goto L_004057C0;
    case 201u: goto L_004057F4;
    case 202u: goto L_00405810;
    case 203u: goto L_00405828;
    case 204u: goto L_00405838;
    case 205u: goto L_00405848;
    case 206u: goto L_0040586C;
    case 207u: goto L_00405880;
    case 208u: goto L_00405890;
    case 209u: goto L_00405898;
    case 210u: goto L_004058B0;
    case 211u: goto L_004058C8;
    case 212u: goto L_004058D8;
    case 213u: goto L_004058E4;
    case 214u: goto L_00405900;
    case 215u: goto L_0040591C;
    case 216u: goto L_00405930;
    case 217u: goto L_00405950;
    case 218u: goto L_0040595C;
    case 219u: goto L_00405968;
    case 220u: goto L_0040597C;
    case 221u: goto L_00405990;
    case 222u: goto L_004059A8;
    case 223u: goto L_004059B8;
    case 224u: goto L_004059C8;
    case 225u: goto L_004059EC;
    case 226u: goto L_00405A00;
    case 227u: goto L_00405A1C;
    case 228u: goto L_00405A30;
    case 229u: goto L_00405A50;
    case 230u: goto L_00405A5C;
    case 231u: goto L_00405A68;
    case 232u: goto L_00405A7C;
    case 233u: goto L_00405A90;
    case 234u: goto L_00405AA8;
    case 235u: goto L_00405AB8;
    case 236u: goto L_00405AC8;
    case 237u: goto L_00405AEC;
    case 238u: goto L_00405B00;
    case 239u: goto L_00405B10;
    case 240u: goto L_00405B20;
    case 241u: goto L_00405B48;
    case 242u: goto L_00405B60;
    case 243u: goto L_00405B6C;
    case 244u: goto L_00405B80;
    case 245u: goto L_00405B90;
    case 246u: goto L_00405B98;
    case 247u: goto L_00405BB0;
    case 248u: goto L_00405BC0;
    case 249u: goto L_00405BE0;
    case 250u: goto L_00405BF0;
    case 251u: goto L_00405BF8;
    case 252u: goto L_00405C10;
    case 253u: goto L_00405C20;
    case 254u: goto L_00405C28;
    case 255u: goto L_00405C40;
    case 256u: goto L_00405C50;
    case 257u: goto L_00405C58;
    case 258u: goto L_00405C70;
    case 259u: goto L_00405C8C;
    case 260u: goto L_00405CA0;
    case 261u: goto L_00405CC0;
    case 262u: goto L_00405CCC;
    case 263u: goto L_00405CD8;
    case 264u: goto L_00405CEC;
    case 265u: goto L_00405D00;
    case 266u: goto L_00405D18;
    case 267u: goto L_00405D28;
    case 268u: goto L_00405D38;
    case 269u: goto L_00405D5C;
    case 270u: goto L_00405D70;
    case 271u: goto L_00405D8C;
    case 272u: goto L_00405DA0;
    case 273u: goto L_00405DC0;
    case 274u: goto L_00405DCC;
    case 275u: goto L_00405DD8;
    case 276u: goto L_00405DEC;
    case 277u: goto L_00405E00;
    case 278u: goto L_00405E18;
    case 279u: goto L_00405E28;
    case 280u: goto L_00405E38;
    case 281u: goto L_00405E5C;
    case 282u: goto L_00405E70;
    case 283u: goto L_00405E9C;
    case 284u: goto L_00405EB0;
    case 285u: goto L_00405EE0;
    case 286u: goto L_00405F00;
    case 287u: goto L_00405F18;
    case 288u: goto L_00405F2C;
    case 289u: goto L_00405F40;
    case 290u: goto L_00405F4C;
    case 291u: goto L_00405F58;
    case 292u: goto L_00405F70;
    case 293u: goto L_00405F94;
    case 294u: goto L_00405FA8;
    case 295u: goto L_00405FC4;
    case 296u: goto L_00405FD0;
    case 297u: goto L_00405FDC;
    case 298u: goto L_00406000;
    case 299u: goto L_00406028;
    case 300u: goto L_0040603C;
    case 301u: goto L_0040604C;
    case 302u: goto L_00406078;
    case 303u: goto L_00406084;
    case 304u: goto L_004060A0;
    case 305u: goto L_004060B8;
    case 306u: goto L_004060CC;
    case 307u: goto L_004060E0;
    case 308u: goto L_00406104;
    case 309u: goto L_00406118;
    case 310u: goto L_00406140;
    case 311u: goto L_00406164;
    case 312u: goto L_00406178;
    case 313u: goto L_00406190;
    case 314u: goto L_004061B4;
    case 315u: goto L_004061D0;
    case 316u: goto L_004061E0;
    case 317u: goto L_004061FC;
    case 318u: goto L_0040620C;
    case 319u: goto L_0040621C;
    case 320u: goto L_00406230;
    case 321u: goto L_00406248;
    case 322u: goto L_00406254;
    case 323u: goto L_00406260;
    case 324u: goto L_0040626C;
    case 325u: goto L_00406280;
    case 326u: goto L_00406294;
    case 327u: goto L_004062C0;
    case 328u: goto L_004062D4;
    case 329u: goto L_00406300;
    case 330u: goto L_00406314;
    case 331u: goto L_00406340;
    case 332u: goto L_00406354;
    case 333u: goto L_00406380;
    case 334u: goto L_004063A0;
    case 335u: goto L_004063B4;
    case 336u: goto L_004063D0;
    case 337u: goto L_004063E8;
    case 338u: goto L_00406420;
    case 339u: goto L_00406438;
    case 340u: goto L_00406448;
    case 341u: goto L_00406458;
    case 342u: goto L_00406470;
    case 343u: goto L_0040648C;
    case 344u: goto L_004064B4;
    case 345u: goto L_004064C8;
    case 346u: goto L_004064D4;
    case 347u: goto L_004064E0;
    case 348u: goto L_00406500;
    case 349u: goto L_0040651C;
    case 350u: goto L_0040653C;
    case 351u: goto L_00406548;
    case 352u: goto L_00406564;
    case 353u: goto L_00406570;
    case 354u: goto L_0040657C;
    case 355u: goto L_00406588;
    case 356u: goto L_004065A0;
    case 357u: goto L_004065BC;
    case 358u: goto L_004065DC;
    case 359u: goto L_004065F8;
    case 360u: goto L_00406604;
    case 361u: goto L_00406610;
    case 362u: goto L_0040661C;
    case 363u: goto L_00406630;
    case 364u: goto L_0040664C;
    case 365u: goto L_00406678;
    case 366u: goto L_00406694;
    case 367u: goto L_004066A0;
    case 368u: goto L_004066AC;
    case 369u: goto L_004066C0;
    case 370u: goto L_004066DC;
    case 371u: goto L_004066FC;
    case 372u: goto L_00406708;
    case 373u: goto L_00406714;
    case 374u: goto L_00406730;
    case 375u: goto L_00406748;
    case 376u: goto L_00406768;
    case 377u: goto L_00406774;
    case 378u: goto L_00406780;
    case 379u: goto L_004067A0;
    case 380u: goto L_004067C0;
    case 381u: goto L_004067C8;
    case 382u: goto L_00406838;
    case 383u: goto L_00406854;
    case 384u: goto L_00406860;
    case 385u: goto L_00406888;
    case 386u: goto L_00406894;
    case 387u: goto L_004068A0;
    case 388u: goto L_004068C0;
    case 389u: goto L_004068D8;
    case 390u: goto L_004068E0;
    case 391u: goto L_00406954;
    case 392u: goto L_00406960;
    case 393u: goto L_0040696C;
    case 394u: goto L_00406980;
    case 395u: goto L_00406990;
    case 396u: goto L_004069C0;
    case 397u: goto L_004069D0;
    case 398u: goto L_004069E0;
    case 399u: goto L_00406A00;
    case 400u: goto L_00406A20;
    case 401u: goto L_00406A40;
    case 402u: goto L_00406A60;
    case 403u: goto L_00406A7C;
    case 404u: goto L_00406A90;
    case 405u: goto L_00406AA0;
    case 406u: goto L_00406AB0;
    case 407u: goto L_00406AD0;
    case 408u: goto L_00406AE0;
    case 409u: goto L_00406AE8;
    case 410u: goto L_00406AF8;
    case 411u: goto L_00406B00;
    case 412u: goto L_00406B08;
    case 413u: goto L_00406B18;
    case 414u: goto L_00406B28;
    case 415u: goto L_00406B38;
    case 416u: goto L_00406B50;
    case 417u: goto L_00406B60;
    case 418u: goto L_00406B70;
    case 419u: goto L_00406B78;
    case 420u: goto L_00406BA0;
    case 421u: goto L_00406BC4;
    case 422u: goto L_00406BD4;
    case 423u: goto L_00406BE0;
    case 424u: goto L_00406BFC;
    case 425u: goto L_00406C38;
    case 426u: goto L_00406C4C;
    case 427u: goto L_00406C84;
    case 428u: goto L_00406C90;
    case 429u: goto L_00406C9C;
    case 430u: goto L_00406CC0;
    case 431u: goto L_00406CD0;
    case 432u: goto L_00406CE0;
    case 433u: goto L_00406CF0;
    case 434u: goto L_00406D0C;
    case 435u: goto L_00406D20;
    case 436u: goto L_00406D30;
    case 437u: goto L_00406D38;
    case 438u: goto L_00406D50;
    case 439u: goto L_00406D60;
    case 440u: goto L_00406D68;
    case 441u: goto L_00406D80;
    case 442u: goto L_00406D90;
    case 443u: goto L_00406DA0;
    case 444u: goto L_00406DB0;
    case 445u: goto L_00406DD0;
    case 446u: goto L_00406DE0;
    case 447u: goto L_00406E00;
    case 448u: goto L_00406E10;
    case 449u: goto L_00406E18;
    case 450u: goto L_00406E30;
    case 451u: goto L_00406E40;
    case 452u: goto L_00406E48;
    case 453u: goto L_00406E60;
    case 454u: goto L_00406E70;
    case 455u: goto L_00406E78;
    case 456u: goto L_00406E90;
    case 457u: goto L_00406EA8;
    case 458u: goto L_00406EC0;
    case 459u: goto L_00406ED0;
    case 460u: goto L_00406EF0;
    case 461u: goto L_00406F00;
    case 462u: goto L_00406F08;
    case 463u: goto L_00406F20;
    case 464u: goto L_00406F30;
    case 465u: goto L_00406F38;
    case 466u: goto L_00406F50;
    case 467u: goto L_00406F60;
    case 468u: goto L_00406F68;
    case 469u: goto L_00406F80;
    case 470u: goto L_00406F98;
    case 471u: goto L_00406FA4;
    case 472u: goto L_00406FC0;
    case 473u: goto L_00406FE0;
    case 474u: goto L_00406FF0;
    case 475u: goto L_00406FF8;
    case 476u: goto L_00407010;
    case 477u: goto L_00407020;
    case 478u: goto L_00407034;
    case 479u: goto L_00407040;
    case 480u: goto L_00407050;
    case 481u: goto L_00407058;
    case 482u: goto L_00407070;
    case 483u: goto L_004070A8;
    case 484u: goto L_004070B0;
    case 485u: goto L_004070B8;
    case 486u: goto L_004070D4;
    case 487u: goto L_004070DC;
    case 488u: goto L_004070F4;
    case 489u: goto L_00407104;
    case 490u: goto L_00407110;
    case 491u: goto L_00407118;
    case 492u: goto L_00407138;
    case 493u: goto L_00407144;
    case 494u: goto L_00407170;
    case 495u: goto L_00407180;
    case 496u: goto L_00407190;
    case 497u: goto L_004071A0;
    case 498u: goto L_004071C0;
    case 499u: goto L_004071F0;
    case 500u: goto L_00407230;
    case 501u: goto L_00407270;
    case 502u: goto L_00407280;
    case 503u: goto L_004072A0;
    case 504u: goto L_004072C0;
    case 505u: goto L_004072D0;
    case 506u: goto L_004072E0;
    case 507u: goto L_00407304;
    case 508u: goto L_00407310;
    case 509u: goto L_00407330;
    case 510u: goto L_00407340;
    case 511u: goto L_00407350;
    case 512u: goto L_00407360;
    case 513u: goto L_00407370;
    case 514u: goto L_00407380;
    case 515u: goto L_004073A0;
    case 516u: goto L_004073B0;
    case 517u: goto L_004073D4;
    case 518u: goto L_004073F0;
    case 519u: goto L_00407404;
    case 520u: goto L_00407410;
    case 521u: goto L_00407420;
    case 522u: goto L_00407434;
    case 523u: goto L_0040743C;
    case 524u: goto L_0040744C;
    case 525u: goto L_00407460;
    case 526u: goto L_00407480;
    case 527u: goto L_00407490;
    case 528u: goto L_004074A0;
    case 529u: goto L_004074B0;
    case 530u: goto L_004074D4;
    case 531u: goto L_004074E4;
    case 532u: goto L_00407500;
    case 533u: goto L_00407524;
    case 534u: goto L_00407530;
    case 535u: goto L_0040753C;
    case 536u: goto L_00407550;
    case 537u: goto L_00407574;
    case 538u: goto L_00407584;
    case 539u: goto L_004075A0;
    case 540u: goto L_004075C0;
    case 541u: goto L_004075F0;
    case 542u: goto L_00407600;
    case 543u: goto L_00407614;
    case 544u: goto L_00407624;
    case 545u: goto L_00407648;
    case 546u: goto L_00407690;
    case 547u: goto L_004076A4;
    case 548u: goto L_004076E0;
    case 549u: goto L_00407710;
    case 550u: goto L_00407720;
    case 551u: goto L_00407744;
    case 552u: goto L_00407780;
    case 553u: goto L_00407794;
    case 554u: goto L_004077D0;
    case 555u: goto L_00407800;
    case 556u: goto L_00407820;
    case 557u: goto L_00407830;
    case 558u: goto L_00407840;
    case 559u: goto L_00407850;
    case 560u: goto L_00407864;
    case 561u: goto L_00407870;
    case 562u: goto L_00407890;
    case 563u: goto L_00407898;
    case 564u: goto L_004078AC;
    case 565u: goto L_004078C0;
    case 566u: goto L_004078D0;
    case 567u: goto L_004078E0;
    case 568u: goto L_004078F0;
    case 569u: goto L_00407900;
    case 570u: goto L_00407920;
    case 571u: goto L_0040792C;
    case 572u: goto L_00407938;
    case 573u: goto L_00407940;
    case 574u: goto L_00407950;
    case 575u: goto L_00407960;
    case 576u: goto L_00407980;
    case 577u: goto L_00407998;
    case 578u: goto L_004079B4;
    case 579u: goto L_004079C8;
    case 580u: goto L_004079D8;
    case 581u: goto L_004079E4;
    case 582u: goto L_004079F0;
    case 583u: goto L_00407A0C;
    case 584u: goto L_00407A14;
    case 585u: goto L_00407A1C;
    case 586u: goto L_00407A38;
    case 587u: goto L_00407A4C;
    case 588u: goto L_00407A54;
    case 589u: goto L_00407A64;
    case 590u: goto L_00407A70;
    case 591u: goto L_00407A80;
    case 592u: goto L_00407A94;
    case 593u: goto L_00407AA4;
    case 594u: goto L_00407AB4;
    case 595u: goto L_00407AD0;
    case 596u: goto L_00407AE0;
    case 597u: goto L_00407AE8;
    case 598u: goto L_00407AF8;
    case 599u: goto L_00407B10;
    case 600u: goto L_00407B28;
    case 601u: goto L_00407B30;
    case 602u: goto L_00407B38;
    case 603u: goto L_00407B40;
    case 604u: goto L_00407B48;
    case 605u: goto L_00407B50;
    case 606u: goto L_00407B58;
    case 607u: goto L_00407B78;
    case 608u: goto L_00407B80;
    case 609u: goto L_00407B88;
    case 610u: goto L_00407B98;
    case 611u: goto L_00407BB0;
    case 612u: goto L_00407BC0;
    case 613u: goto L_00407BD0;
    case 614u: goto L_00407BE0;
    case 615u: goto L_00407BF4;
    case 616u: goto L_00407BFC;
    case 617u: goto L_00407C0C;
    case 618u: goto L_00407C20;
    case 619u: goto L_00407C68;
    case 620u: goto L_00407C7C;
    case 621u: goto L_00407C9C;
    case 622u: goto L_00407CA8;
    case 623u: goto L_00407CB4;
    case 624u: goto L_00407CC8;
    case 625u: goto L_00407CE8;
    case 626u: goto L_00407CFC;
    case 627u: goto L_00407D1C;
    case 628u: goto L_00407D28;
    case 629u: goto L_00407D34;
    case 630u: goto L_00407D48;
    case 631u: goto L_00407D54;
    case 632u: goto L_00407D5C;
    case 633u: goto L_00407D6C;
    case 634u: goto L_00407D90;
    case 635u: goto L_00407DD0;
    case 636u: goto L_00407E00;
    case 637u: goto L_00407E28;
    case 638u: goto L_00407E60;
    case 639u: goto L_00407E94;
    case 640u: goto L_00407EB0;
    case 641u: goto L_00407EE0;
    case 642u: goto L_00407F0C;
    case 643u: goto L_00407F34;
    case 644u: goto L_00407F5C;
    case 645u: goto L_00407F84;
    case 646u: goto L_00407FAC;
    case 647u: goto L_00407FD8;
    default: bad_entry(c, 0x00404000u); return;
    }
L_00404000:
    c.f[1] = c.f[3];
    c.f[4] = c.f[3];
    st32((c.r[29].w[0] + 48u), c.f[4]);
    c.budget -= 4;
L_00404010:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040402Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 101u, depth + 1u); else { c.pc = 0x00549460u; return; } if (c.pc != 0x0040402Cu) [[unlikely]] return; }
L_0040402C:
    st32((c.r[16].w[0] + 212u), c.f[20]);
    st32((c.r[16].w[0] + 216u), c.f[21]);
    st32((c.r[16].w[0] + 220u), c.f[22]);
    c.budget -= 3;
L_00404038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040403C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040407Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0060(c, 565u, depth + 1u); else { c.pc = 0x00283A60u; return; } if (c.pc != 0x0040407Cu) [[unlikely]] return; }
L_0040407C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404088u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C0(c, 294u, depth + 1u); else { c.pc = 0x00403F40u; return; } if (c.pc != 0x00404088u) [[unlikely]] return; }
L_00404088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004040A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283A60u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 565u, depth); }
L_004040B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283B80u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 575u, depth); }
L_004040C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 61u, depth + 1u); else { c.pc = 0x00284670u; return; } if (c.pc != 0x004040D4u) [[unlikely]] return; }
L_004040D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 212u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    st8((c.r[16].w[0] + 224u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00404120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0040414C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_00404158; } }
L_0040414C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_00404158:
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00404220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404174u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00404174u) [[unlikely]] return; }
L_00404174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040417Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x0040417Cu) [[unlikely]] return; }
L_0040417C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0040421C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040418Cu);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x0040418Cu) [[unlikely]] return; }
L_0040418C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 46u, depth + 1u); else { c.pc = 0x001A4880u; return; } if (c.pc != 0x00404194u) [[unlikely]] return; }
L_00404194:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0040421C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 201u, depth + 1u); else { c.pc = 0x0016DCF0u; return; } if (c.pc != 0x004041A4u) [[unlikely]] return; }
L_004041A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040421C; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 212u, depth + 1u); else { c.pc = 0x0016DE90u; return; } if (c.pc != 0x004041B8u) [[unlikely]] return; }
L_004041B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x004041C0u) [[unlikely]] return; }
L_004041C0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[17].w[0] + 100u));  goto L_004041D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_00404214; } }
L_004041D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));  goto L_004041EC; }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00404210; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 1;
L_004041EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404200u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x00404200u) [[unlikely]] return; }
L_00404200:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404210u); set32(c.r[5], c.r[5].w[0] - 889u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00404210u) [[unlikely]] return; }
L_00404210:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00404214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040421Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x0040421Cu) [[unlikely]] return; }
L_0040421C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00404220:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404240u);  if (depth < kMaxDepth) unit_00AF(c, 399u, depth + 1u); else { c.pc = 0x003BF2B0u; return; } if (c.pc != 0x00404240u) [[unlikely]] return; }
L_00404240:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040424Cu); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00FF(c, 258u, depth + 1u); else { c.pc = 0x004FE310u; return; } if (c.pc != 0x0040424Cu) [[unlikely]] return; }
L_0040424C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00404260:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404298u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00404298u) [[unlikely]] return; }
L_00404298:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042A8u); set32(c.r[5], c.r[5].w[0] - 873u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004042A8u) [[unlikely]] return; }
L_004042A8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_004042C4; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004042BCu) [[unlikely]] return; }
L_004042BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00404554; } }
L_004042C4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00404338; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042DCu); set32(c.r[5], c.r[5].w[0] - 858u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004042DCu) [[unlikely]] return; }
L_004042DC:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004042E8u) [[unlikely]] return; }
L_004042E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  goto L_00404310; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 832u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040430Cu); set32(c.r[7], c.r[7].w[0] - 802u);  if (depth < kMaxDepth) unit_00CB(c, 139u, depth + 1u); else { c.pc = 0x0042CDC0u; return; } if (c.pc != 0x0040430Cu) [[unlikely]] return; }
L_0040430C:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_00404310:
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[7], c.r[18].w[0] + 88u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404330u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00404330u) [[unlikely]] return; }
L_00404330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0040439C; } }
L_00404338:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00404368; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00404354; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 764u);  if (t) { goto L_00404358; } }
L_00404354:
    set32(c.r[5], c.r[5].w[0] - 734u);
    c.budget -= 1;
L_00404358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404360u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00404360u) [[unlikely]] return; }
L_00404360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404398; } }
L_00404368:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00404388; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404380u); set32(c.r[5], c.r[5].w[0] - 705u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00404380u) [[unlikely]] return; }
L_00404380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404398; } }
L_00404388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00404390u) [[unlikely]] return; }
L_00404390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404550; } }
L_00404398:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0040439C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004043A4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004043A4u) [[unlikely]] return; }
L_004043A4:
    set32(c.r[4], 0u + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004043B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004043B0u) [[unlikely]] return; }
L_004043B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  goto L_004043F0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_004043CC; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004043CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 97u);  goto L_004043E0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004043E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004043ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 476u, depth + 1u); else { c.pc = 0x0042B240u; return; } if (c.pc != 0x004043ECu) [[unlikely]] return; }
L_004043EC:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_004043F0:
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404410u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00404410u) [[unlikely]] return; }
L_00404410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040452C; } }
L_00404418:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 97u);  goto L_00404428; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00404428:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040443Cu); set32(c.r[5], c.r[5].w[0] - 676u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0040443Cu) [[unlikely]] return; }
L_0040443C:
    set32(c.r[4], 0u + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00404448u) [[unlikely]] return; }
L_00404448:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  goto L_00404488; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_00404464; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00404464:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 97u);  goto L_00404478; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00404478:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 106u, depth + 1u); else { c.pc = 0x0042CA80u; return; } if (c.pc != 0x00404484u) [[unlikely]] return; }
L_00404484:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_00404488:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040449Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040449Cu) [[unlikely]] return; }
L_0040449C:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004044BCu) [[unlikely]] return; }
L_004044BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_004044D0; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004044D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044E4u); set32(c.r[6], c.r[6].w[0] - 664u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004044E4u) [[unlikely]] return; }
L_004044E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 65u);  goto L_004044F8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004044F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404500u);  if (depth < kMaxDepth) unit_00FD(c, 60u, depth + 1u); else { c.pc = 0x004F4600u; return; } if (c.pc != 0x00404500u) [[unlikely]] return; }
L_00404500:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_00404520; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040451Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040451Cu) [[unlikely]] return; }
L_0040451C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00404520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404528u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00404528u) [[unlikely]] return; }
L_00404528:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040452C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404418u | kUnwind; return; } goto L_00404418; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00404544u) [[unlikely]] return; }
L_00404544:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00404550u) [[unlikely]] return; }
L_00404550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00404554:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00404570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 26120u));  c.pc = t; return; }
L_00404580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040459Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 323u, depth + 1u); else { c.pc = 0x0044AAD0u; return; } if (c.pc != 0x0040459Cu) [[unlikely]] return; }
L_0040459C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004045B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045B0u);  if (depth < kMaxDepth) unit_00CB(c, 129u, depth + 1u); else { c.pc = 0x0042CCB0u; return; } if (c.pc != 0x004045B0u) [[unlikely]] return; }
L_004045B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004045B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004045C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x004045DCu) [[unlikely]] return; }
L_004045DC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00404600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 93u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040462C; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00404808; }
L_0040462C:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0040464C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_00404654; } }
L_0040464C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_00404654:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(0u));  goto L_00404670; }
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00404670:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 93u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00404804; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404688u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 451u, depth + 1u); else { c.pc = 0x004378F0u; return; } if (c.pc != 0x00404688u) [[unlikely]] return; }
L_00404688:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 93u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404694u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_00D5(c, 35u, depth + 1u); else { c.pc = 0x00454380u; return; } if (c.pc != 0x00404694u) [[unlikely]] return; }
L_00404694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040469Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 93u));  if (depth < kMaxDepth) unit_0010(c, 348u, depth + 1u); else { c.pc = 0x00142BA0u; return; } if (c.pc != 0x0040469Cu) [[unlikely]] return; }
L_0040469C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 93u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004046A8u); set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));  if (depth < kMaxDepth) unit_00D2(c, 323u, depth + 1u); else { c.pc = 0x0044AAD0u; return; } if (c.pc != 0x004046A8u) [[unlikely]] return; }
L_004046A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00404804; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 93u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  goto L_004047D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_004046E0; } }
L_004046C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004046D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 288u, depth + 1u); else { c.pc = 0x00429D80u; return; } if (c.pc != 0x004046D4u) [[unlikely]] return; }
L_004046D4:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004046E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004046C4u | kUnwind; return; } goto L_004046C4; }
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404720u) [[unlikely]] return; }
L_00404720:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00404744; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040473Cu); set32(c.r[5], c.r[5].w[0] - 650u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0040473Cu) [[unlikely]] return; }
L_0040473C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004047AC; } }
L_00404744:
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404750u) [[unlikely]] return; }
L_00404750:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_00404774; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040476Cu); set32(c.r[5], c.r[5].w[0] - 625u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0040476Cu) [[unlikely]] return; }
L_0040476C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004047AC; } }
L_00404774:
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  goto L_0040479C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404794u); set32(c.r[5], c.r[5].w[0] - 601u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x00404794u) [[unlikely]] return; }
L_00404794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004047AC; } }
L_0040479C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047A8u); set32(c.r[5], c.r[5].w[0] - 587u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x004047A8u) [[unlikely]] return; }
L_004047A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004047AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00404804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 297u, depth + 1u); else { c.pc = 0x004F2410u; return; } if (c.pc != 0x004047BCu) [[unlikely]] return; }
L_004047BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 17u, depth + 1u); else { c.pc = 0x004F41C0u; return; } if (c.pc != 0x004047C8u) [[unlikely]] return; }
L_004047C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404804; } }
L_004047D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 1996u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004047E8; } }
L_004047E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047E8u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FD(c, 15u, depth + 1u); else { c.pc = 0x004F4170u; return; } if (c.pc != 0x004047E8u) [[unlikely]] return; }
L_004047E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004047E0u | kUnwind; return; } goto L_004047E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00404804u) [[unlikely]] return; }
L_00404804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00404808:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00404820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040484Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00C2(c, 213u, depth + 1u); else { c.pc = 0x00409EF0u; return; } if (c.pc != 0x0040484Cu) [[unlikely]] return; }
L_0040484C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[28].w[0] - 29008u));  goto L_00404874; }
    c.f[12] = ld32((c.r[28].w[0] - 30324u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040486Cu); st8((c.r[28].w[0] - 26116u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00FF(c, 268u, depth + 1u); else { c.pc = 0x004FE500u; return; } if (c.pc != 0x0040486Cu) [[unlikely]] return; }
L_0040486C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));  if (t) { goto L_004048DC; } }
L_00404874:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[28].w[0] - 26120u));  goto L_00404898; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404894; } }
    c.f[20] = ld32((c.r[28].w[0] - 31496u));
    c.budget -= 1;
L_00404894:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.budget -= 1;
L_00404898:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  goto L_004048AC; }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_004048AC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004048D0; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_004048CC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004048CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004048D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004048D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00FF(c, 268u, depth + 1u); else { c.pc = 0x004FE500u; return; } if (c.pc != 0x004048D8u) [[unlikely]] return; }
L_004048D8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 1;
L_004048DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00404954; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00404950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_00404924; } }
L_00404900:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404918u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404918u) [[unlikely]] return; }
L_00404918:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_00404924:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404900u | kUnwind; return; } goto L_00404900; }
L_00404950:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040495Cu);  if (depth < kMaxDepth) unit_0015(c, 176u, depth + 1u); else { c.pc = 0x00155A70u; return; } if (c.pc != 0x0040495Cu) [[unlikely]] return; }
L_0040495C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404968u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AF(c, 400u, depth + 1u); else { c.pc = 0x003BF2C0u; return; } if (c.pc != 0x00404968u) [[unlikely]] return; }
L_00404968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004049C8; } }
L_00404994:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_004049C0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004049BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004049BCu) [[unlikely]] return; }
L_004049BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004049C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_004049C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404994u | kUnwind; return; } goto L_00404994; }
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004049E0u); set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));  if (depth < kMaxDepth) unit_00D2(c, 316u, depth + 1u); else { c.pc = 0x0044AA00u; return; } if (c.pc != 0x004049E0u) [[unlikely]] return; }
L_004049E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004049F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004049F4u) [[unlikely]] return; }
L_004049F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26976u)));
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A04u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 137u, depth + 1u); else { c.pc = 0x003CD290u; return; } if (c.pc != 0x00404A04u) [[unlikely]] return; }
L_00404A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 273u, depth + 1u); else { c.pc = 0x003CE2B0u; return; } if (c.pc != 0x00404A0Cu) [[unlikely]] return; }
L_00404A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x00404A1Cu) [[unlikely]] return; }
L_00404A1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 460u, depth + 1u); else { c.pc = 0x004379E0u; return; } if (c.pc != 0x00404A28u) [[unlikely]] return; }
L_00404A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A30u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 95u, depth + 1u); else { c.pc = 0x0019D9E0u; return; } if (c.pc != 0x00404A30u) [[unlikely]] return; }
L_00404A30:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404A48u) [[unlikely]] return; }
L_00404A48:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404A60u) [[unlikely]] return; }
L_00404A60:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 169u, depth + 1u); else { c.pc = 0x003D9CE0u; return; } if (c.pc != 0x00404A6Cu) [[unlikely]] return; }
L_00404A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 401u, depth + 1u); else { c.pc = 0x003BF2E0u; return; } if (c.pc != 0x00404A74u) [[unlikely]] return; }
L_00404A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00404A90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AB0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AF(c, 402u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x00404AB0u) [[unlikely]] return; }
L_00404AB0:
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 92u));
    st8((c.r[18].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 35u, depth + 1u); else { c.pc = 0x00454380u; return; } if (c.pc != 0x00404AD4u) [[unlikely]] return; }
L_00404AD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 451u, depth + 1u); else { c.pc = 0x004378F0u; return; } if (c.pc != 0x00404AE4u) [[unlikely]] return; }
L_00404AE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 323u, depth + 1u); else { c.pc = 0x0044AAD0u; return; } if (c.pc != 0x00404AF0u) [[unlikely]] return; }
L_00404AF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00404AFCu) [[unlikely]] return; }
L_00404AFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_00404B3C; } }
L_00404B20:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EF(c, 143u, depth + 1u); else { c.pc = 0x004BD9C0u; return; } if (c.pc != 0x00404B30u) [[unlikely]] return; }
L_00404B30:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_00404B3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404B20u | kUnwind; return; } goto L_00404B20; }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 27u, depth + 1u); else { c.pc = 0x00404260u; return; } if (c.pc != 0x00404B88u) [[unlikely]] return; }
L_00404B88:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00404B94u) [[unlikely]] return; }
L_00404B94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BA4u); set32(c.r[5], c.r[5].w[0] - 571u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00404BA4u) [[unlikely]] return; }
L_00404BA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 111u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00404BB4u) [[unlikely]] return; }
L_00404BB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  goto L_00404BDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00404BD8; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00404BD8u) [[unlikely]] return; }
L_00404BD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 1;
L_00404BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BE4u); c.r[16].d[0] = ld8((c.r[29].w[0] + 111u));  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00404E30u; return; } if (c.pc != 0x00404BE4u) [[unlikely]] return; }
L_00404BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404BF0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00404BF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st8((c.r[3].w[0] - 1996u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] - 1996u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C10u); set32(c.r[4], ld32((c.r[28].w[0] - 26064u)));  if (depth < kMaxDepth) unit_00C2(c, 200u, depth + 1u); else { c.pc = 0x00409DE0u; return; } if (c.pc != 0x00404C10u) [[unlikely]] return; }
L_00404C10:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  goto L_00404C28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00FD(c, 571u, depth + 1u); else { c.pc = 0x004F7A70u; return; } if (c.pc != 0x00404C24u) [[unlikely]] return; }
L_00404C24:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 1;
L_00404C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C30u);  if (depth < kMaxDepth) unit_00FC(c, 391u, depth + 1u); else { c.pc = 0x004F2E40u; return; } if (c.pc != 0x00404C30u) [[unlikely]] return; }
L_00404C30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00404C5C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00404C58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00FC(c, 395u, depth + 1u); else { c.pc = 0x004F2EE0u; return; } if (c.pc != 0x00404C58u) [[unlikely]] return; }
L_00404C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00404C5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00404C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00404D4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24352u);
    set32(c.r[2], c.r[2].w[0] + 24380u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00404CC0; } }
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.budget -= 1;
L_00404CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CC8u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x00404CC8u) [[unlikely]] return; }
L_00404CC8:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 24u);  goto L_00404D0C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00404D08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00404D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D08u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00404D08u) [[unlikely]] return; }
L_00404D08:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_00404D0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00404D2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D28u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 145u, depth + 1u); else { c.pc = 0x00199BA0u; return; } if (c.pc != 0x00404D28u) [[unlikely]] return; }
L_00404D28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00404D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 403u, depth + 1u); else { c.pc = 0x003BF300u; return; } if (c.pc != 0x00404D34u) [[unlikely]] return; }
L_00404D34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00404D50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00404D4Cu) [[unlikely]] return; }
L_00404D4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00404D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00404D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 559u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D90u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 406u, depth + 1u); else { c.pc = 0x003BF370u; return; } if (c.pc != 0x00404D90u) [[unlikely]] return; }
L_00404D90:
    set32(c.r[17], c.r[16].w[0] + 24u);
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404DA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x00199E90u; return; } if (c.pc != 0x00404DA4u) [[unlikely]] return; }
L_00404DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17136u);
    set32(c.r[3], c.r[3].w[0] + 24352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24380u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30328u));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30328u));
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E04u); st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00404E04u) [[unlikely]] return; }
L_00404E04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00404E10; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00404E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E18u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x00404E18u) [[unlikely]] return; }
L_00404E18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00404E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00404E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00404E54; } }
L_00404E44:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E54u); set32(c.r[5], ld32((c.r[28].w[0] - 30256u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404E54u) [[unlikely]] return; }
L_00404E54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00404E60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404120u | kUnwind; return; } goto L_00404120; }
L_00404E70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404C80u | kUnwind; return; } goto L_00404C80; }
L_00404E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 49u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00404F5C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 48u));  goto L_00404F60; }
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EC4u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 327u, depth + 1u); else { c.pc = 0x003D34E0u; return; } if (c.pc != 0x00404EC4u) [[unlikely]] return; }
L_00404EC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 188u);  if (t) { goto L_00404EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00404EE0; } }
L_00404EDC:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00404EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EE8u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 321u, depth + 1u); else { c.pc = 0x003D33F0u; return; } if (c.pc != 0x00404EE8u) [[unlikely]] return; }
L_00404EE8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EF4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 310u, depth + 1u); else { c.pc = 0x0040AC10u; return; } if (c.pc != 0x00404EF4u) [[unlikely]] return; }
L_00404EF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 72u);  if (t) { goto L_00404F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00404F14; } }
L_00404F10:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00404F14:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 65u);  goto L_00404F28; }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00404F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F30u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 309u, depth + 1u); else { c.pc = 0x003D3280u; return; } if (c.pc != 0x00404F30u) [[unlikely]] return; }
L_00404F30:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00404F3Cu) [[unlikely]] return; }
L_00404F3C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404F4Cu) [[unlikely]] return; }
L_00404F4C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F5Cu); st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00CC(c, 407u, depth + 1u); else { c.pc = 0x00432DF0u; return; } if (c.pc != 0x00404F5Cu) [[unlikely]] return; }
L_00404F5C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_00404F60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00404F94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 404u, depth + 1u); else { c.pc = 0x00432DC0u; return; } if (c.pc != 0x00404F70u) [[unlikely]] return; }
L_00404F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00404F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F80u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00404F80u) [[unlikely]] return; }
L_00404F80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F90u); set32(c.r[5], c.r[5].w[0] - 400u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00404F90u) [[unlikely]] return; }
L_00404F90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00404F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F9Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00CC(c, 479u, depth + 1u); else { c.pc = 0x00433520u; return; } if (c.pc != 0x00404F9Cu) [[unlikely]] return; }
L_00404F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404FD0u);  if (depth < kMaxDepth) unit_00CC(c, 481u, depth + 1u); else { c.pc = 0x00433560u; return; } if (c.pc != 0x00404FD0u) [[unlikely]] return; }
L_00404FD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404FE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 215u, depth + 1u); else { c.pc = 0x004033D0u; return; } if (c.pc != 0x00404FE8u) [[unlikely]] return; }
L_00404FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040501Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x0040501Cu) [[unlikely]] return; }
L_0040501C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  goto L_00405030; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040502Cu);  if (depth < kMaxDepth) unit_00B4(c, 390u, depth + 1u); else { c.pc = 0x003D3F60u; return; } if (c.pc != 0x0040502Cu) [[unlikely]] return; }
L_0040502C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_00405030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405038u);  if (depth < kMaxDepth) unit_00B4(c, 386u, depth + 1u); else { c.pc = 0x003D3F00u; return; } if (c.pc != 0x00405038u) [[unlikely]] return; }
L_00405038:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040504Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 460u, depth + 1u); else { c.pc = 0x004379E0u; return; } if (c.pc != 0x0040504Cu) [[unlikely]] return; }
L_0040504C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 387u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405064u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 358u, depth + 1u); else { c.pc = 0x003D3A10u; return; } if (c.pc != 0x00405064u) [[unlikely]] return; }
L_00405064:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405070u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B6(c, 169u, depth + 1u); else { c.pc = 0x003D9CE0u; return; } if (c.pc != 0x00405070u) [[unlikely]] return; }
L_00405070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[2], c.r[2].w[0] - 375u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405088u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x00405088u) [[unlikely]] return; }
L_00405088:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 72u);  goto L_0040509C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004050C0; } }
L_0040509C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050A4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004050A4u) [[unlikely]] return; }
L_004050A4:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050B4u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004050B4u) [[unlikely]] return; }
L_004050B4:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050C0u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004050C0u) [[unlikely]] return; }
L_004050C0:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 144u, depth + 1u); else { c.pc = 0x003D9A60u; return; } if (c.pc != 0x004050CCu) [[unlikely]] return; }
L_004050CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004050E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 459u, depth + 1u); else { c.pc = 0x004332E0u; return; } if (c.pc != 0x004050E4u) [[unlikely]] return; }
L_004050E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004050E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050F0u);  if (depth < kMaxDepth) unit_00CC(c, 491u, depth + 1u); else { c.pc = 0x00433620u; return; } if (c.pc != 0x004050F0u) [[unlikely]] return; }
L_004050F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00405110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00405158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405140u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 545u, depth + 1u); else { c.pc = 0x00433BC0u; return; } if (c.pc != 0x00405140u) [[unlikely]] return; }
L_00405140:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040515C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00405158u) [[unlikely]] return; }
L_00405158:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040515C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 362u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040518Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 548u, depth + 1u); else { c.pc = 0x00433C20u; return; } if (c.pc != 0x0040518Cu) [[unlikely]] return; }
L_0040518C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 24416u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004051B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x004051C8u) [[unlikely]] return; }
L_004051C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051D8u); set32(c.r[5], c.r[5].w[0] - 272u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004051D8u) [[unlikely]] return; }
L_004051D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004051E8u) [[unlikely]] return; }
L_004051E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_00405210; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040520C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040520Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0040520Cu) [[unlikely]] return; }
L_0040520C:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_00405210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405238u) [[unlikely]] return; }
L_00405238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405248u); set32(c.r[5], c.r[5].w[0] - 257u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00405248u) [[unlikely]] return; }
L_00405248:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00405258u) [[unlikely]] return; }
L_00405258:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_00405280; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040527C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040527Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0040527Cu) [[unlikely]] return; }
L_0040527C:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_00405280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405290:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 29004u)));
    c.budget -= 4;
    { set32(c.r[7], 0u + 6u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00142DF0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 372u, depth); }
L_004052A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004052B0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3670u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 340u, depth); }
L_004052C0:
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 20u));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[8].w[0] + 12u)));  if (t) { goto L_00405338; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 242u);  if (t) { goto L_00405340; } }
L_00405338:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 234u);
    c.budget -= 2;
L_00405340:
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 28u);  if (t) { goto L_00405358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040535C; } }
L_00405358:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040535C:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 4u);  if (t) { goto L_00405374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00405378; } }
L_00405374:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00405378:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00DD(c, 26u, depth); }
L_00405380:
    set32(c.r[7], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 29;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_004053F8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004053F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405400:
    set32(c.r[7], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 27;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00405478; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 242u);  if (t) { goto L_0040547C; } }
L_00405478:
    set32(c.r[2], c.r[2].w[0] - 234u);
    c.budget -= 1;
L_0040547C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 31;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00405510; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00405510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405518u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 268u, depth + 1u); else { c.pc = 0x0046FC50u; return; } if (c.pc != 0x00405518u) [[unlikely]] return; }
L_00405518:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0040552C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0040552C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405540:
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 23;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_004055A0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004055A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004055B0:
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 28u)));  c.pc = t; return; }
L_00405600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405624u) [[unlikely]] return; }
L_00405624:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 226u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405638u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00405638u) [[unlikely]] return; }
L_00405638:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00405678; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 226u);
    set32(c.r[6], c.r[29].w[0] + 63u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405658u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 198u, depth + 1u); else { c.pc = 0x00405760u; return; } if (c.pc != 0x00405658u) [[unlikely]] return; }
L_00405658:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405664u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00405664u) [[unlikely]] return; }
L_00405664:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405670u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00405670u) [[unlikely]] return; }
L_00405670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));  if (t) { goto L_00405688; } }
L_00405678:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405684u); set32(c.r[6], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_00C1(c, 196u, depth + 1u); else { c.pc = 0x004056F0u; return; } if (c.pc != 0x00405684u) [[unlikely]] return; }
L_00405684:
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 1;
L_00405688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405690u); c.r[5].d[0] = ld8((c.r[29].w[0] + 63u));  if (depth < kMaxDepth) unit_00D2(c, 301u, depth + 1u); else { c.pc = 0x0044A7C0u; return; } if (c.pc != 0x00405690u) [[unlikely]] return; }
L_00405690:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));  goto L_004056CC; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004056C8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30320u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004056C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.f[12] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004056C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 309u, depth + 1u); else { c.pc = 0x0044A8B0u; return; } if (c.pc != 0x004056C8u) [[unlikely]] return; }
L_004056C8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 1;
L_004056CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[28].w[0] - 30320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004056F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0040573C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405730u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00405730u) [[unlikely]] return; }
L_00405730:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0040573C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405788u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00405788u) [[unlikely]] return; }
L_00405788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[16].d[0] = ld8((c.r[16].w[0]));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_004057CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004057C0u) [[unlikely]] return; }
L_004057C0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_004057CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004057F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004057F4u) [[unlikely]] return; }
L_004057F4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00405810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405828u) [[unlikely]] return; }
L_00405828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405838u); set32(c.r[5], c.r[5].w[0] - 226u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00405838u) [[unlikely]] return; }
L_00405838:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405848u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00405848u) [[unlikely]] return; }
L_00405848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_00405870; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040586C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040586Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0040586Cu) [[unlikely]] return; }
L_0040586C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 1;
L_00405870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405890u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x00405890u) [[unlikely]] return; }
L_00405890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405898u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 390u, depth + 1u); else { c.pc = 0x003F7600u; return; } if (c.pc != 0x00405898u) [[unlikely]] return; }
L_00405898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004058B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x004058C8u) [[unlikely]] return; }
L_004058C8:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058D8u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00BD(c, 391u, depth + 1u); else { c.pc = 0x003F7610u; return; } if (c.pc != 0x004058D8u) [[unlikely]] return; }
L_004058D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 394u, depth + 1u); else { c.pc = 0x003F76A0u; return; } if (c.pc != 0x004058E4u) [[unlikely]] return; }
L_004058E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040591Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040591Cu) [[unlikely]] return; }
L_0040591C:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 209u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405930u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00405930u) [[unlikely]] return; }
L_00405930:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00405970; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 209u);
    set32(c.r[6], c.r[29].w[0] + 47u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405950u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 198u, depth + 1u); else { c.pc = 0x00405760u; return; } if (c.pc != 0x00405950u) [[unlikely]] return; }
L_00405950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040595Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0040595Cu) [[unlikely]] return; }
L_0040595C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405968u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00405968u) [[unlikely]] return; }
L_00405968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00405980; } }
L_00405970:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040597Cu); set32(c.r[6], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_00C1(c, 196u, depth + 1u); else { c.pc = 0x004056F0u; return; } if (c.pc != 0x0040597Cu) [[unlikely]] return; }
L_0040597C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00405980:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00405990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x004059A8u) [[unlikely]] return; }
L_004059A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059B8u); set32(c.r[5], c.r[5].w[0] - 209u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004059B8u) [[unlikely]] return; }
L_004059B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004059C8u) [[unlikely]] return; }
L_004059C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_004059F0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004059EC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004059ECu) [[unlikely]] return; }
L_004059EC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 1;
L_004059F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405A1Cu) [[unlikely]] return; }
L_00405A1C:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 193u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A30u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00405A30u) [[unlikely]] return; }
L_00405A30:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00405A70; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 193u);
    set32(c.r[6], c.r[29].w[0] + 47u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A50u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 198u, depth + 1u); else { c.pc = 0x00405760u; return; } if (c.pc != 0x00405A50u) [[unlikely]] return; }
L_00405A50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A5Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00405A5Cu) [[unlikely]] return; }
L_00405A5C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00405A68u) [[unlikely]] return; }
L_00405A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00405A80; } }
L_00405A70:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A7Cu); set32(c.r[6], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_00C1(c, 196u, depth + 1u); else { c.pc = 0x004056F0u; return; } if (c.pc != 0x00405A7Cu) [[unlikely]] return; }
L_00405A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00405A80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00405A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405AA8u) [[unlikely]] return; }
L_00405AA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405AB8u); set32(c.r[5], c.r[5].w[0] - 193u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00405AB8u) [[unlikely]] return; }
L_00405AB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405AC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00405AC8u) [[unlikely]] return; }
L_00405AC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_00405AF0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00405AEC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405AECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00405AECu) [[unlikely]] return; }
L_00405AEC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 1;
L_00405AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405B00:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));  [[clang::musttail]] return unit_00D2(c, 323u, depth); }
L_00405B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405B48u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00405B48u) [[unlikely]] return; }
L_00405B48:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405B60u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405B60u) [[unlikely]] return; }
L_00405B60:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405B6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00405B6Cu) [[unlikely]] return; }
L_00405B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00405B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405B90u);  if (depth < kMaxDepth) unit_00CC(c, 137u, depth + 1u); else { c.pc = 0x00430F70u; return; } if (c.pc != 0x00405B90u) [[unlikely]] return; }
L_00405B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405B98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 146u, depth + 1u); else { c.pc = 0x00431030u; return; } if (c.pc != 0x00405B98u) [[unlikely]] return; }
L_00405B98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405BC0u);  if (depth < kMaxDepth) unit_00CC(c, 137u, depth + 1u); else { c.pc = 0x00430F70u; return; } if (c.pc != 0x00405BC0u) [[unlikely]] return; }
L_00405BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405BF0u);  if (depth < kMaxDepth) unit_00CC(c, 139u, depth + 1u); else { c.pc = 0x00430F90u; return; } if (c.pc != 0x00405BF0u) [[unlikely]] return; }
L_00405BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405BF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 142u, depth + 1u); else { c.pc = 0x00431000u; return; } if (c.pc != 0x00405BF8u) [[unlikely]] return; }
L_00405BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405C20u);  if (depth < kMaxDepth) unit_00CC(c, 134u, depth + 1u); else { c.pc = 0x00430F10u; return; } if (c.pc != 0x00405C20u) [[unlikely]] return; }
L_00405C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405C28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 138u, depth + 1u); else { c.pc = 0x00430F80u; return; } if (c.pc != 0x00405C28u) [[unlikely]] return; }
L_00405C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405C50u);  if (depth < kMaxDepth) unit_00CC(c, 139u, depth + 1u); else { c.pc = 0x00430F90u; return; } if (c.pc != 0x00405C50u) [[unlikely]] return; }
L_00405C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405C58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 138u, depth + 1u); else { c.pc = 0x00430F80u; return; } if (c.pc != 0x00405C58u) [[unlikely]] return; }
L_00405C58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405C8Cu) [[unlikely]] return; }
L_00405C8C:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 181u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CA0u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00405CA0u) [[unlikely]] return; }
L_00405CA0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00405CE0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 181u);
    set32(c.r[6], c.r[29].w[0] + 47u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CC0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 198u, depth + 1u); else { c.pc = 0x00405760u; return; } if (c.pc != 0x00405CC0u) [[unlikely]] return; }
L_00405CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CCCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00405CCCu) [[unlikely]] return; }
L_00405CCC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00405CD8u) [[unlikely]] return; }
L_00405CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00405CF0; } }
L_00405CE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CECu); set32(c.r[6], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_00C1(c, 196u, depth + 1u); else { c.pc = 0x004056F0u; return; } if (c.pc != 0x00405CECu) [[unlikely]] return; }
L_00405CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00405CF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00405D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405D18u) [[unlikely]] return; }
L_00405D18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D28u); set32(c.r[5], c.r[5].w[0] - 181u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00405D28u) [[unlikely]] return; }
L_00405D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00405D38u) [[unlikely]] return; }
L_00405D38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_00405D60; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00405D5C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00405D5Cu) [[unlikely]] return; }
L_00405D5C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 1;
L_00405D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405D70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405D8Cu) [[unlikely]] return; }
L_00405D8C:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 154u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DA0u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00405DA0u) [[unlikely]] return; }
L_00405DA0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00405DE0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 154u);
    set32(c.r[6], c.r[29].w[0] + 47u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DC0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 198u, depth + 1u); else { c.pc = 0x00405760u; return; } if (c.pc != 0x00405DC0u) [[unlikely]] return; }
L_00405DC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DCCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00405DCCu) [[unlikely]] return; }
L_00405DCC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00405DD8u) [[unlikely]] return; }
L_00405DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00405DF0; } }
L_00405DE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DECu); set32(c.r[6], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_00C1(c, 196u, depth + 1u); else { c.pc = 0x004056F0u; return; } if (c.pc != 0x00405DECu) [[unlikely]] return; }
L_00405DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00405DF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00405E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00405E18u) [[unlikely]] return; }
L_00405E18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E28u); set32(c.r[5], c.r[5].w[0] - 154u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00405E28u) [[unlikely]] return; }
L_00405E28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00405E38u) [[unlikely]] return; }
L_00405E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_00405E60; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00405E5C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00405E5Cu) [[unlikely]] return; }
L_00405E5C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 1;
L_00405E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E9Cu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00405E9Cu) [[unlikely]] return; }
L_00405E9C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00405EC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405EB0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x00405EB0u) [[unlikely]] return; }
L_00405EB0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00405EC0; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00405EC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00405EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F00u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00405F00u) [[unlikely]] return; }
L_00405F00:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F18u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00405F18u) [[unlikely]] return; }
L_00405F18:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00405F44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F2Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x00405F2Cu) [[unlikely]] return; }
L_00405F2C:
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F40u); set32(c.r[5], c.r[5].w[0] - 136u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00405F40u) [[unlikely]] return; }
L_00405F40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00405F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F4Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00405F4Cu) [[unlikely]] return; }
L_00405F4C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00405F58u) [[unlikely]] return; }
L_00405F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00405F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F94u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00405F94u) [[unlikely]] return; }
L_00405F94:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x00405FA8u) [[unlikely]] return; }
L_00405FA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00405FC8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 246u, depth + 1u); else { c.pc = 0x0048A180u; return; } if (c.pc != 0x00405FC4u) [[unlikely]] return; }
L_00405FC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00405FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FD0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00405FD0u) [[unlikely]] return; }
L_00405FD0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00405FDCu) [[unlikely]] return; }
L_00405FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00406000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406028u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00406028u) [[unlikely]] return; }
L_00406028:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[17], 0u - 1u);  goto L_00406040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040603Cu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x0040603Cu) [[unlikely]] return; }
L_0040603C:
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 1;
L_00406040:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040604Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 171u, depth + 1u); else { c.pc = 0x004898B0u; return; } if (c.pc != 0x0040604Cu) [[unlikely]] return; }
L_0040604C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 49u);  goto L_00406060; }
    set32(c.r[8], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00406060:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406078u); set32(c.r[6], c.r[6].w[0] - 133u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00406078u) [[unlikely]] return; }
L_00406078:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406084u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406084u) [[unlikely]] return; }
L_00406084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004060A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060B8u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x004060B8u) [[unlikely]] return; }
L_004060B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_004060CC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 372u, depth + 1u); else { c.pc = 0x0040E780u; return; } if (c.pc != 0x004060CCu) [[unlikely]] return; }
L_004060CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004060E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406104u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00406104u) [[unlikely]] return; }
L_00406104:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 9999u);  goto L_00406120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406118u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x00406118u) [[unlikely]] return; }
L_00406118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 28u));  if (t) { goto L_0040612C; } }
L_00406120:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_0040612C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00406140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406164u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00406164u) [[unlikely]] return; }
L_00406164:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0040617C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406178u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 502u, depth + 1u); else { c.pc = 0x00443930u; return; } if (c.pc != 0x00406178u) [[unlikely]] return; }
L_00406178:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 1;
L_0040617C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00406190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004061BC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004061B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004061B4u) [[unlikely]] return; }
L_004061B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004061C4; } }
L_004061BC:
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004061C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004061D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 280u);  c.pc = t; return; }
L_004061E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004061FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004061FCu) [[unlikely]] return; }
L_004061FC:
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040620Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0040620Cu) [[unlikely]] return; }
L_0040620C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040621Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0040621Cu) [[unlikely]] return; }
L_0040621C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406248u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x00406248u) [[unlikely]] return; }
L_00406248:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406254u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406254u) [[unlikely]] return; }
L_00406254:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406260u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406260u) [[unlikely]] return; }
L_00406260:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040626Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040626Cu) [[unlikely]] return; }
L_0040626C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406294u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00406294u) [[unlikely]] return; }
L_00406294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004062A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 160u));  if (t) { goto L_004062A8; } }
L_004062A4:
    c.f[0] = 0u;
    c.budget -= 1;
L_004062A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004062C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004062D4u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004062D4u) [[unlikely]] return; }
L_004062D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004062E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 156u));  if (t) { goto L_004062E8; } }
L_004062E4:
    c.f[0] = 0u;
    c.budget -= 1;
L_004062E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406314u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00406314u) [[unlikely]] return; }
L_00406314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 148u));  if (t) { goto L_00406328; } }
L_00406324:
    c.f[0] = 0u;
    c.budget -= 1;
L_00406328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406354u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00406354u) [[unlikely]] return; }
L_00406354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 152u));  if (t) { goto L_00406368; } }
L_00406364:
    c.f[0] = 0u;
    c.budget -= 1;
L_00406368:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004063A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 161u, depth + 1u); else { c.pc = 0x004D17D0u; return; } if (c.pc != 0x004063A0u) [[unlikely]] return; }
L_004063A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_004063B4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004063B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x004063B4u) [[unlikely]] return; }
L_004063B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004063D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004063E8u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 161u, depth + 1u); else { c.pc = 0x004D17D0u; return; } if (c.pc != 0x004063E8u) [[unlikely]] return; }
L_004063E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 9999u);  goto L_004063FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 20u));  if (t) { goto L_00406408; } }
L_004063FC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 3;
L_00406408:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406438u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00406438u) [[unlikely]] return; }
L_00406438:
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406448u); set32(c.r[5], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BF(c, 434u, depth + 1u); else { c.pc = 0x003FF360u; return; } if (c.pc != 0x00406448u) [[unlikely]] return; }
L_00406448:
    c.f[20] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406458u) [[unlikely]] return; }
L_00406458:
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040648Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0040648Cu) [[unlikely]] return; }
L_0040648C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004064CC; }
    set32(c.r[6], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[6].sd[0] > 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004064BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004064B4u); set32(c.r[5], c.r[5].w[0] - 127u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004064B4u) [[unlikely]] return; }
L_004064B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004064C8; } }
L_004064BC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004064C8u); set32(c.r[5], c.r[5].w[0] - 124u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004064C8u) [[unlikely]] return; }
L_004064C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004064CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004064D4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004064D4u) [[unlikely]] return; }
L_004064D4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004064E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004064E0u) [[unlikely]] return; }
L_004064E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040651Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0040651Cu) [[unlikely]] return; }
L_0040651C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.f[12] = c.f[0];  goto L_00406540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040653Cu);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0040653Cu) [[unlikely]] return; }
L_0040653C:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00406540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406548u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00E2(c, 251u, depth + 1u); else { c.pc = 0x0048A2A0u; return; } if (c.pc != 0x00406548u) [[unlikely]] return; }
L_00406548:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0040655C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0040655C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406564u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00406564u) [[unlikely]] return; }
L_00406564:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406570u) [[unlikely]] return; }
L_00406570:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040657Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0040657Cu) [[unlikely]] return; }
L_0040657C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406588u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406588u) [[unlikely]] return; }
L_00406588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004065A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004065BCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004065BCu) [[unlikely]] return; }
L_004065BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00406608; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[2].w[0] + 188u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004065DCu); set32(c.r[5], c.r[5].w[0] - 119u);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x004065DCu) [[unlikely]] return; }
L_004065DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_004065F0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_004065F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004065F8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004065F8u) [[unlikely]] return; }
L_004065F8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406604u) [[unlikely]] return; }
L_00406604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00406608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406610u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406610u) [[unlikely]] return; }
L_00406610:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040661Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040661Cu) [[unlikely]] return; }
L_0040661C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00406630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040664Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0040664Cu) [[unlikely]] return; }
L_0040664C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00406698; }
    set32(c.r[3], c.r[2].w[0] + 188u);
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00406670; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00406670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406678u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x00406678u) [[unlikely]] return; }
L_00406678:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_0040668C; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0040668C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406694u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00406694u) [[unlikely]] return; }
L_00406694:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00406698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066A0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004066A0u) [[unlikely]] return; }
L_004066A0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004066ACu) [[unlikely]] return; }
L_004066AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004066C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066DCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004066DCu) [[unlikely]] return; }
L_004066DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00406700; }
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066FCu); set32(c.r[5], c.r[5].w[0] - 105u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004066FCu) [[unlikely]] return; }
L_004066FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00406700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406708u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406708u) [[unlikely]] return; }
L_00406708:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406714u) [[unlikely]] return; }
L_00406714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406748u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00406748u) [[unlikely]] return; }
L_00406748:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040676C; }
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406768u); set32(c.r[5], c.r[5].w[0] - 85u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00406768u) [[unlikely]] return; }
L_00406768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040676C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406774u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406774u) [[unlikely]] return; }
L_00406774:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406780u) [[unlikely]] return; }
L_00406780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004067A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067C0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004067C0u) [[unlikely]] return; }
L_004067C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067C8u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x004067C8u) [[unlikely]] return; }
L_004067C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00406888; } }
    set32(c.r[8], ld32((c.r[2].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[6], c.r[6].w[0] - 65u);
    set32(c.r[2], ld32((c.r[16].w[0] + 620u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406838u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 372u, depth + 1u); else { c.pc = 0x00142DF0u; return; } if (c.pc != 0x00406838u) [[unlikely]] return; }
L_00406838:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0040684C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0040684C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406854u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00406854u) [[unlikely]] return; }
L_00406854:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406860u) [[unlikely]] return; }
L_00406860:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 624u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0040687C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_00406880; } }
L_0040687C:
    set32(c.r[5], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_00406880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406888u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00406888u) [[unlikely]] return; }
L_00406888:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406894u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406894u) [[unlikely]] return; }
L_00406894:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004068A0u) [[unlikely]] return; }
L_004068A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004068C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068D8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004068D8u) [[unlikely]] return; }
L_004068D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068E0u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x004068E0u) [[unlikely]] return; }
L_004068E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00406954; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 620u)));
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 23;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040694C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040694C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406954u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00406954u) [[unlikely]] return; }
L_00406954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406960u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406960u) [[unlikely]] return; }
L_00406960:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040696Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040696Cu) [[unlikely]] return; }
L_0040696C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406980:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC390u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 22u, depth); }
L_00406990:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_004069AC; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004069AC:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC3B0u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 24u, depth); }
L_004069C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC580u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 37u, depth); }
L_004069D0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC590u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 38u, depth); }
L_004069E0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE080u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 249u, depth); }
L_00406A00:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE0F0u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 254u, depth); }
L_00406A20:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD0C0u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 122u, depth); }
L_00406A40:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD000u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 111u, depth); }
L_00406A60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406A7Cu) [[unlikely]] return; }
L_00406A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AA0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00406AA0u) [[unlikely]] return; }
L_00406AA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AB0u); set32(c.r[5], c.r[5].w[0] - 44u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x00406AB0u) [[unlikely]] return; }
L_00406AB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AE0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00406AE0u) [[unlikely]] return; }
L_00406AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00406AE8u) [[unlikely]] return; }
L_00406AE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00406B3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AF8u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00406AF8u) [[unlikely]] return; }
L_00406AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00406B00u) [[unlikely]] return; }
L_00406B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x00406B08u) [[unlikely]] return; }
L_00406B08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B18u); set32(c.r[5], c.r[5].w[0] - 25u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00406B18u) [[unlikely]] return; }
L_00406B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B28u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00406B28u) [[unlikely]] return; }
L_00406B28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B38u); set32(c.r[5], c.r[5].w[0] - 12u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00406B38u) [[unlikely]] return; }
L_00406B38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00406B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B60u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00406B60u) [[unlikely]] return; }
L_00406B60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B70u); set32(c.r[5], c.r[5].w[0] + 7u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x00406B70u) [[unlikely]] return; }
L_00406B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 32u, depth + 1u); else { c.pc = 0x003E8370u; return; } if (c.pc != 0x00406B78u) [[unlikely]] return; }
L_00406B78:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00406B8C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00406B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406BA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BC4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00406BC4u) [[unlikely]] return; }
L_00406BC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BD4u); set32(c.r[5], c.r[5].w[0] + 7u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x00406BD4u) [[unlikely]] return; }
L_00406BD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 33u, depth + 1u); else { c.pc = 0x003E8380u; return; } if (c.pc != 0x00406BE0u) [[unlikely]] return; }
L_00406BE0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_00406BF4; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00406BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BFCu); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00406BFCu) [[unlikely]] return; }
L_00406BFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00406C24; }
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[3].w[0] + 1u);  goto L_00406C1C; }
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00406C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[28].w[0] - 26060u)));  if (t) { goto L_00406C2C; } }
L_00406C24:
    set32(c.r[16], c.r[16].w[0] - 128u);
    set32(c.r[19], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 2;
L_00406C2C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 375u, depth + 1u); else { c.pc = 0x0040E830u; return; } if (c.pc != 0x00406C38u) [[unlikely]] return; }
L_00406C38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C4Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00406C4Cu) [[unlikely]] return; }
L_00406C4C:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00406C88; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00406C84; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C84u); set32(c.r[5], c.r[5].w[0] + 33u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00406C84u) [[unlikely]] return; }
L_00406C84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00406C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C90u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00406C90u) [[unlikely]] return; }
L_00406C90:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00406C9Cu) [[unlikely]] return; }
L_00406C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00406CC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8CE0u | kUnwind; return; } [[clang::musttail]] return unit_00BA(c, 121u, depth); }
L_00406CD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8D10u | kUnwind; return; } [[clang::musttail]] return unit_00BA(c, 123u, depth); }
L_00406CE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8CF0u | kUnwind; return; } [[clang::musttail]] return unit_00BA(c, 122u, depth); }
L_00406CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00406D10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D0Cu);  if (depth < kMaxDepth) unit_00C2(c, 396u, depth + 1u); else { c.pc = 0x0040B800u; return; } if (c.pc != 0x00406D0Cu) [[unlikely]] return; }
L_00406D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00406D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D30u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406D30u) [[unlikely]] return; }
L_00406D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 132u, depth + 1u); else { c.pc = 0x00410E00u; return; } if (c.pc != 0x00406D38u) [[unlikely]] return; }
L_00406D38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D60u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406D60u) [[unlikely]] return; }
L_00406D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x00410E70u; return; } if (c.pc != 0x00406D68u) [[unlikely]] return; }
L_00406D68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D90u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406D90u) [[unlikely]] return; }
L_00406D90:
    st32((c.r[2].w[0] + 628u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406DB0u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406DB0u) [[unlikely]] return; }
L_00406DB0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 628u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406DE0u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406DE0u) [[unlikely]] return; }
L_00406DE0:
    set32(c.r[2], ld32((c.r[2].w[0] + 628u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E10u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406E10u) [[unlikely]] return; }
L_00406E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 371u, depth + 1u); else { c.pc = 0x0040E770u; return; } if (c.pc != 0x00406E18u) [[unlikely]] return; }
L_00406E18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E40u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406E40u) [[unlikely]] return; }
L_00406E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 397u, depth + 1u); else { c.pc = 0x0040EAA0u; return; } if (c.pc != 0x00406E48u) [[unlikely]] return; }
L_00406E48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E70u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406E70u) [[unlikely]] return; }
L_00406E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 410u, depth + 1u); else { c.pc = 0x0040ED70u; return; } if (c.pc != 0x00406E78u) [[unlikely]] return; }
L_00406E78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406EA8u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406EA8u) [[unlikely]] return; }
L_00406EA8:
    st32((c.r[2].w[0] + 620u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00406EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406ED0u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406ED0u) [[unlikely]] return; }
L_00406ED0:
    set32(c.r[2], ld32((c.r[2].w[0] + 628u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F00u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406F00u) [[unlikely]] return; }
L_00406F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 505u, depth + 1u); else { c.pc = 0x0040FC20u; return; } if (c.pc != 0x00406F08u) [[unlikely]] return; }
L_00406F08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F30u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406F30u) [[unlikely]] return; }
L_00406F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 506u, depth + 1u); else { c.pc = 0x0040FC60u; return; } if (c.pc != 0x00406F38u) [[unlikely]] return; }
L_00406F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F60u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406F60u) [[unlikely]] return; }
L_00406F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 171u, depth + 1u); else { c.pc = 0x00411270u; return; } if (c.pc != 0x00406F68u) [[unlikely]] return; }
L_00406F68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F98u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406F98u) [[unlikely]] return; }
L_00406F98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406FA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 252u, depth + 1u); else { c.pc = 0x00411BB0u; return; } if (c.pc != 0x00406FA4u) [[unlikely]] return; }
L_00406FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00406FC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00406FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406FF0u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00406FF0u) [[unlikely]] return; }
L_00406FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406FF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 507u, depth + 1u); else { c.pc = 0x0040FCD0u; return; } if (c.pc != 0x00406FF8u) [[unlikely]] return; }
L_00406FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407020u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00407020u) [[unlikely]] return; }
L_00407020:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00407038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407034u);  if (depth < kMaxDepth) unit_00C4(c, 19u, depth + 1u); else { c.pc = 0x004101E0u; return; } if (c.pc != 0x00407034u) [[unlikely]] return; }
L_00407034:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00407038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407050u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x00407050u) [[unlikely]] return; }
L_00407050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407058u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 13u, depth + 1u); else { c.pc = 0x00410160u; return; } if (c.pc != 0x00407058u) [[unlikely]] return; }
L_00407058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407070:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 92u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[28].w[0] - 28976u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004070A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x004070A8u) [[unlikely]] return; }
L_004070A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040713C; } }
L_004070B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004070B8u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x004070B8u) [[unlikely]] return; }
L_004070B8:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004070D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004070D4u) [[unlikely]] return; }
L_004070D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004070DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x004070DCu) [[unlikely]] return; }
L_004070DC:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00407154; }
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004070F4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x004070F4u) [[unlikely]] return; }
L_004070F4:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407104u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 475u, depth + 1u); else { c.pc = 0x00147F70u; return; } if (c.pc != 0x00407104u) [[unlikely]] return; }
L_00407104:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407110u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0011(c, 474u, depth + 1u); else { c.pc = 0x00147F60u; return; } if (c.pc != 0x00407110u) [[unlikely]] return; }
L_00407110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407118u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00407118u) [[unlikely]] return; }
L_00407118:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00407138; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407138u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 473u, depth + 1u); else { c.pc = 0x00147F40u; return; } if (c.pc != 0x00407138u) [[unlikely]] return; }
L_00407138:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0040713C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407144u);  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00407144u) [[unlikely]] return; }
L_00407144:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004070B0u | kUnwind; return; } goto L_004070B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00407154:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00407170:
    set32(c.r[2], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 3;
    { set32(c.r[4], c.r[2].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F4E0u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 328u, depth); }
L_00407180:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[28].w[0] - 27036u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5B50u | kUnwind; return; } [[clang::musttail]] return unit_00B1(c, 171u, depth); }
L_00407190:
    set32(c.r[2], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 40u)));  c.pc = t; return; }
L_004071A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_004071C0:
    set32(c.r[6], ld32((c.r[28].w[0] - 24928u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 20u));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004071F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 13;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 24928u)));  goto L_00407234; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407230u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0101(c, 102u, depth + 1u); else { c.pc = 0x00504BC0u; return; } if (c.pc != 0x00407230u) [[unlikely]] return; }
L_00407230:
    set32(c.r[6], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 1;
L_00407234:
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407270:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  [[clang::musttail]] return unit_00CF(c, 344u, depth); }
L_00407280:
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] >> 63;  c.pc = t; return; }
L_004072A0:
    set32(c.r[6], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 12u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004072C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  [[clang::musttail]] return unit_00CF(c, 345u, depth); }
L_004072D0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  [[clang::musttail]] return unit_00CF(c, 347u, depth); }
L_004072E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 24928u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407304u); set32(c.r[4], c.r[16].w[0] + 492u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00407304u) [[unlikely]] return; }
L_00407304:
    set32(c.r[4], c.r[16].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407310u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00407310u) [[unlikely]] return; }
L_00407310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00407330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407340u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00407340u) [[unlikely]] return; }
L_00407340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407350u); set32(c.r[5], c.r[5].w[0] + 57u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x00407350u) [[unlikely]] return; }
L_00407350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00407364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407360u); set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  if (depth < kMaxDepth) unit_00CF(c, 366u, depth + 1u); else { c.pc = 0x0043EDE0u; return; } if (c.pc != 0x00407360u) [[unlikely]] return; }
L_00407360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00407364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00407380:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[6], c.r[6].w[0] + 71u);
    c.budget -= 6;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_00CF(c, 434u, depth); }
L_004073A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 4;
    { c.r[6].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_00CF(c, 437u, depth); }
L_004073B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004073DC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004073D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004073D4u) [[unlikely]] return; }
L_004073D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004073E4; } }
L_004073DC:
    set32(c.r[2], c.r[2].w[0] + 79u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004073E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004073F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407404u) [[unlikely]] return; }
L_00407404:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407410u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00407410u) [[unlikely]] return; }
L_00407410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407434u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00407434u) [[unlikely]] return; }
L_00407434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040743Cu);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x0040743Cu) [[unlikely]] return; }
L_0040743C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040744Cu); set32(c.r[5], c.r[5].w[0] + 92u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x0040744Cu) [[unlikely]] return; }
L_0040744C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407460:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00407480:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 96u), c.r[4].w[0]);  c.pc = t; return; }
L_00407490:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 152u), c.r[4].w[0]);  c.pc = t; return; }
L_004074A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004074B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074D4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F1B0u; return; } if (c.pc != 0x004074D4u) [[unlikely]] return; }
L_004074D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074E4u); set32(c.r[5], c.r[5].w[0] - 234u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004074E4u) [[unlikely]] return; }
L_004074E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004074F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (t) { goto L_00407528; } }
L_004074F4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407500u); set32(c.r[5], c.r[5].w[0] - 242u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00407500u) [[unlikely]] return; }
L_00407500:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00407510; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00407524; } }
L_00407510:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407524u); set32(c.r[6], c.r[6].w[0] + 112u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00407524u) [[unlikely]] return; }
L_00407524:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 1;
L_00407528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407530u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x00407530u) [[unlikely]] return; }
L_00407530:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040753Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040753Cu) [[unlikely]] return; }
L_0040753C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407574u); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00407574u) [[unlikely]] return; }
L_00407574:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407584u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00407584u) [[unlikely]] return; }
L_00407584:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00407594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_004075D0; } }
L_00407594:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004075A0u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004075A0u) [[unlikely]] return; }
L_004075A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004075B4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004075D0; } }
L_004075B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004075C0u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004075C0u) [[unlikely]] return; }
L_004075C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004075D4; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_004075D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004075D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004075F0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  [[clang::musttail]] return unit_00C2(c, 311u, depth); }
L_00407600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00407614u) [[unlikely]] return; }
L_00407614:
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407624u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00407624u) [[unlikely]] return; }
L_00407624:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00407640; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00407640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407648u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00407648u) [[unlikely]] return; }
L_00407648:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00407670; }
    set32(c.r[3], c.r[2].w[0] + 132u);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00407668; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00407668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00407678; } }
L_00407670:
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00407678:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004076A4u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004076A4u) [[unlikely]] return; }
L_004076A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004076CC; }
    set32(c.r[3], c.r[2].w[0] + 68u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_004076C4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004076C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004076D4; } }
L_004076CC:
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004076D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004076E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00407708; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 128u);  if (t) { goto L_00407770; } }
L_00407708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407710u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00407710u) [[unlikely]] return; }
L_00407710:
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407720u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00407720u) [[unlikely]] return; }
L_00407720:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040773C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040773C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407744u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00407744u) [[unlikely]] return; }
L_00407744:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0040776C; }
    set32(c.r[3], c.r[2].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00407764; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00407764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00407774; } }
L_0040776C:
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 1;
L_00407770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00407774:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407794u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00407794u) [[unlikely]] return; }
L_00407794:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004077BC; }
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_004077B4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004077B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004077C4; } }
L_004077BC:
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004077C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004077D0:
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_004077F8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004077F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00407800:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_00C2(c, 456u, depth); }
L_00407820:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 112u)));  c.pc = t; return; }
L_00407830:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  [[clang::musttail]] return unit_00C2(c, 314u, depth); }
L_00407840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407850u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00404E30u; return; } if (c.pc != 0x00407850u) [[unlikely]] return; }
L_00407850:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00407868; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407864u);  if (depth < kMaxDepth) unit_00C5(c, 421u, depth + 1u); else { c.pc = 0x00416E60u; return; } if (c.pc != 0x00407864u) [[unlikely]] return; }
L_00407864:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00407868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24136u)));
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24136u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407890u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x00407890u) [[unlikely]] return; }
L_00407890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407898u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00404E30u; return; } if (c.pc != 0x00407898u) [[unlikely]] return; }
L_00407898:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004078B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078ACu);  if (depth < kMaxDepth) unit_00C5(c, 517u, depth + 1u); else { c.pc = 0x00417600u; return; } if (c.pc != 0x004078ACu) [[unlikely]] return; }
L_004078AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004078B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004078C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 26064u)));  [[clang::musttail]] return unit_00C2(c, 214u, depth); }
L_004078D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078E0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x004078E0u) [[unlikely]] return; }
L_004078E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078F0u); set32(c.r[5], c.r[5].w[0] + 198u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x004078F0u) [[unlikely]] return; }
L_004078F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407920u); set32(c.r[5], c.r[5].w[0] + 203u);  if (depth < kMaxDepth) unit_00C2(c, 214u, depth + 1u); else { c.pc = 0x00409F10u; return; } if (c.pc != 0x00407920u) [[unlikely]] return; }
L_00407920:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040792Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 311u, depth + 1u); else { c.pc = 0x0040AC40u; return; } if (c.pc != 0x0040792Cu) [[unlikely]] return; }
L_0040792C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00407938u) [[unlikely]] return; }
L_00407938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407940u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407940u) [[unlikely]] return; }
L_00407940:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407950u); set32(c.r[5], c.r[5].w[0] + 214u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00407950u) [[unlikely]] return; }
L_00407950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407960:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00407980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407998u); set32(c.r[5], c.r[5].w[0] + 241u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00407998u) [[unlikely]] return; }
L_00407998:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 17u);  goto L_004079AC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_004079AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004079B4u);  if (depth < kMaxDepth) unit_00D1(c, 89u, depth + 1u); else { c.pc = 0x004447E0u; return; } if (c.pc != 0x004079B4u) [[unlikely]] return; }
L_004079B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004079D0; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004079C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004079C8u) [[unlikely]] return; }
L_004079C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004079E8; } }
L_004079D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004079D8u);  if (depth < kMaxDepth) unit_00C1(c, 618u, depth + 1u); else { c.pc = 0x00407C20u; return; } if (c.pc != 0x004079D8u) [[unlikely]] return; }
L_004079D8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004079E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004079E4u) [[unlikely]] return; }
L_004079E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004079E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004079F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407A0Cu) [[unlikely]] return; }
L_00407A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (t) { goto L_00407A20; } }
L_00407A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A1Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FD(c, 15u, depth + 1u); else { c.pc = 0x004F4170u; return; } if (c.pc != 0x00407A1Cu) [[unlikely]] return; }
L_00407A1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 1;
L_00407A20:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A14u | kUnwind; return; } goto L_00407A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00407A38u) [[unlikely]] return; }
L_00407A38:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00407A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A4Cu);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407A4Cu) [[unlikely]] return; }
L_00407A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00407A54u) [[unlikely]] return; }
L_00407A54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x00407A64u) [[unlikely]] return; }
L_00407A64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00407A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407A70:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  [[clang::musttail]] return unit_00D1(c, 5u, depth); }
L_00407A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407A94u) [[unlikely]] return; }
L_00407A94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AA4u); set32(c.r[5], c.r[5].w[0] + 260u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x00407AA4u) [[unlikely]] return; }
L_00407AA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x00407AB4u) [[unlikely]] return; }
L_00407AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AE0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407AE0u) [[unlikely]] return; }
L_00407AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00407AE8u) [[unlikely]] return; }
L_00407AE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x00407AF8u) [[unlikely]] return; }
L_00407AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B28u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00FF(c, 313u, depth + 1u); else { c.pc = 0x004FE930u; return; } if (c.pc != 0x00407B28u) [[unlikely]] return; }
L_00407B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B30u); set32(c.r[4], ld32((c.r[28].w[0] - 26064u)));  if (depth < kMaxDepth) unit_00C2(c, 212u, depth + 1u); else { c.pc = 0x00409ED0u; return; } if (c.pc != 0x00407B30u) [[unlikely]] return; }
L_00407B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B38u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407B38u) [[unlikely]] return; }
L_00407B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00407B40u) [[unlikely]] return; }
L_00407B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 55u, depth + 1u); else { c.pc = 0x00404580u; return; } if (c.pc != 0x00407B48u) [[unlikely]] return; }
L_00407B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 22500u)));  if (t) { goto L_00407B58; } }
L_00407B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 15u, depth + 1u); else { c.pc = 0x004F4170u; return; } if (c.pc != 0x00407B58u) [[unlikely]] return; }
L_00407B58:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407B50u | kUnwind; return; } goto L_00407B50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00407B78u) [[unlikely]] return; }
L_00407B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B80u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407B80u) [[unlikely]] return; }
L_00407B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x00407B88u) [[unlikely]] return; }
L_00407B88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 60u, depth + 1u); else { c.pc = 0x00404600u; return; } if (c.pc != 0x00407B98u) [[unlikely]] return; }
L_00407B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BC0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407BC0u) [[unlikely]] return; }
L_00407BC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BD0u); set32(c.r[5], c.r[5].w[0] + 273u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00407BD0u) [[unlikely]] return; }
L_00407BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00407BF4u) [[unlikely]] return; }
L_00407BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BFCu);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407BFCu) [[unlikely]] return; }
L_00407BFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C0Cu); set32(c.r[5], c.r[5].w[0] + 288u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00407C0Cu) [[unlikely]] return; }
L_00407C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407C20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 26056u)));
    c.budget -= 9;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  goto L_00407D4C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00407D48; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 26060u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C68u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00407C68u) [[unlikely]] return; }
L_00407C68:
    set32(c.r[18], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 257u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C7Cu); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00407C7Cu) [[unlikely]] return; }
L_00407C7C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00407CBC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 257u);
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C9Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 636u, depth + 1u); else { c.pc = 0x00407E00u; return; } if (c.pc != 0x00407C9Cu) [[unlikely]] return; }
L_00407C9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407CA8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00407CA8u) [[unlikely]] return; }
L_00407CA8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407CB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00407CB4u) [[unlikely]] return; }
L_00407CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00407CCC; } }
L_00407CBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407CC8u); set32(c.r[6], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_00C1(c, 634u, depth + 1u); else { c.pc = 0x00407D90u; return; } if (c.pc != 0x00407CC8u) [[unlikely]] return; }
L_00407CC8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00407CCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00407D48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 620u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407CE8u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00407CE8u) [[unlikely]] return; }
L_00407CE8:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407CFCu); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00407CFCu) [[unlikely]] return; }
L_00407CFC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00407D3C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 272u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D1Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C1(c, 636u, depth + 1u); else { c.pc = 0x00407E00u; return; } if (c.pc != 0x00407D1Cu) [[unlikely]] return; }
L_00407D1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D28u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00407D28u) [[unlikely]] return; }
L_00407D28:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00407D34u) [[unlikely]] return; }
L_00407D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407D48; } }
L_00407D3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D48u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00C1(c, 634u, depth + 1u); else { c.pc = 0x00407D90u; return; } if (c.pc != 0x00407D48u) [[unlikely]] return; }
L_00407D48:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 1;
L_00407D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00407D54u) [[unlikely]] return; }
L_00407D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D5Cu);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x00407D5Cu) [[unlikely]] return; }
L_00407D5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D6Cu); set32(c.r[5], c.r[5].w[0] + 308u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x00407D6Cu) [[unlikely]] return; }
L_00407D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00407D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_00407DDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407DD0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00407DD0u) [[unlikely]] return; }
L_00407DD0:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_00407DDC:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00407E00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407E28u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00407E28u) [[unlikely]] return; }
L_00407E28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_00407E6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407E60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00407E60u) [[unlikely]] return; }
L_00407E60:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_00407E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407E94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407E94u) [[unlikely]] return; }
L_00407E94:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 333u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31776u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407EE0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407EE0u) [[unlikely]] return; }
L_00407EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 350u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 30976u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F0Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407F0Cu) [[unlikely]] return; }
L_00407F0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 370u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31712u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F34u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407F34u) [[unlikely]] return; }
L_00407F34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 381u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31664u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F5Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407F5Cu) [[unlikely]] return; }
L_00407F5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 398u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31504u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F84u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407F84u) [[unlikely]] return; }
L_00407F84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 412u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31440u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407FACu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407FACu) [[unlikely]] return; }
L_00407FAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 425u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 31360u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407FD8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00407FD8u) [[unlikely]] return; }
L_00407FD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 446u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 31344u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408000u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00C2(c, 1u, depth);
}

}
