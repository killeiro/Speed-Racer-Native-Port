#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0,
    0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347,
    0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386,
    0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487,
    0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0,
    0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E0004;
    case 3u: goto L_002E0014;
    case 4u: goto L_002E0024;
    case 5u: goto L_002E0040;
    case 6u: goto L_002E0074;
    case 7u: goto L_002E0084;
    case 8u: goto L_002E00A0;
    case 9u: goto L_002E00B4;
    case 10u: goto L_002E00BC;
    case 11u: goto L_002E00C4;
    case 12u: goto L_002E00E0;
    case 13u: goto L_002E00F4;
    case 14u: goto L_002E0108;
    case 15u: goto L_002E0110;
    case 16u: goto L_002E011C;
    case 17u: goto L_002E0128;
    case 18u: goto L_002E0160;
    case 19u: goto L_002E01AC;
    case 20u: goto L_002E01BC;
    case 21u: goto L_002E01D8;
    case 22u: goto L_002E01EC;
    case 23u: goto L_002E01FC;
    case 24u: goto L_002E0218;
    case 25u: goto L_002E0228;
    case 26u: goto L_002E0244;
    case 27u: goto L_002E0258;
    case 28u: goto L_002E0268;
    case 29u: goto L_002E0288;
    case 30u: goto L_002E0298;
    case 31u: goto L_002E02B4;
    case 32u: goto L_002E02D4;
    case 33u: goto L_002E02E4;
    case 34u: goto L_002E0300;
    case 35u: goto L_002E0338;
    case 36u: goto L_002E0348;
    case 37u: goto L_002E0368;
    case 38u: goto L_002E03A0;
    case 39u: goto L_002E03B0;
    case 40u: goto L_002E03D0;
    case 41u: goto L_002E0400;
    case 42u: goto L_002E040C;
    case 43u: goto L_002E0468;
    case 44u: goto L_002E0474;
    case 45u: goto L_002E0490;
    case 46u: goto L_002E04B0;
    case 47u: goto L_002E04D8;
    case 48u: goto L_002E04E8;
    case 49u: goto L_002E0500;
    case 50u: goto L_002E0528;
    case 51u: goto L_002E0538;
    case 52u: goto L_002E0550;
    case 53u: goto L_002E0564;
    case 54u: goto L_002E0598;
    case 55u: goto L_002E05D4;
    case 56u: goto L_002E05F0;
    case 57u: goto L_002E061C;
    case 58u: goto L_002E062C;
    case 59u: goto L_002E0648;
    case 60u: goto L_002E065C;
    case 61u: goto L_002E066C;
    case 62u: goto L_002E0680;
    case 63u: goto L_002E06BC;
    case 64u: goto L_002E06D4;
    case 65u: goto L_002E06F4;
    case 66u: goto L_002E0704;
    case 67u: goto L_002E0720;
    case 68u: goto L_002E0734;
    case 69u: goto L_002E0744;
    case 70u: goto L_002E0760;
    case 71u: goto L_002E0770;
    case 72u: goto L_002E0780;
    case 73u: goto L_002E07C4;
    case 74u: goto L_002E07F0;
    case 75u: goto L_002E0800;
    case 76u: goto L_002E0824;
    case 77u: goto L_002E0850;
    case 78u: goto L_002E0884;
    case 79u: goto L_002E08B0;
    case 80u: goto L_002E08C0;
    case 81u: goto L_002E08D4;
    case 82u: goto L_002E08E0;
    case 83u: goto L_002E08F4;
    case 84u: goto L_002E0910;
    case 85u: goto L_002E092C;
    case 86u: goto L_002E0990;
    case 87u: goto L_002E09E8;
    case 88u: goto L_002E0A80;
    case 89u: goto L_002E0A9C;
    case 90u: goto L_002E0ACC;
    case 91u: goto L_002E0AD8;
    case 92u: goto L_002E0AF8;
    case 93u: goto L_002E0B10;
    case 94u: goto L_002E0B1C;
    case 95u: goto L_002E0B28;
    case 96u: goto L_002E0B34;
    case 97u: goto L_002E0B48;
    case 98u: goto L_002E0B5C;
    case 99u: goto L_002E0B70;
    case 100u: goto L_002E0B90;
    case 101u: goto L_002E0BAC;
    case 102u: goto L_002E0BCC;
    case 103u: goto L_002E0BE8;
    case 104u: goto L_002E0C08;
    case 105u: goto L_002E0C30;
    case 106u: goto L_002E0C54;
    case 107u: goto L_002E0C64;
    case 108u: goto L_002E0C70;
    case 109u: goto L_002E0C80;
    case 110u: goto L_002E0CA0;
    case 111u: goto L_002E0CA8;
    case 112u: goto L_002E0CE0;
    case 113u: goto L_002E0D00;
    case 114u: goto L_002E0D10;
    case 115u: goto L_002E0D2C;
    case 116u: goto L_002E0D40;
    case 117u: goto L_002E0D50;
    case 118u: goto L_002E0D6C;
    case 119u: goto L_002E0D7C;
    case 120u: goto L_002E0D98;
    case 121u: goto L_002E0DAC;
    case 122u: goto L_002E0DBC;
    case 123u: goto L_002E0DCC;
    case 124u: goto L_002E0DEC;
    case 125u: goto L_002E0DFC;
    case 126u: goto L_002E0E18;
    case 127u: goto L_002E0E2C;
    case 128u: goto L_002E0E3C;
    case 129u: goto L_002E0E58;
    case 130u: goto L_002E0E68;
    case 131u: goto L_002E0E84;
    case 132u: goto L_002E0E98;
    case 133u: goto L_002E0EA8;
    case 134u: goto L_002E0EC0;
    case 135u: goto L_002E0EE8;
    case 136u: goto L_002E0EF0;
    case 137u: goto L_002E0F00;
    case 138u: goto L_002E0F10;
    case 139u: goto L_002E0F34;
    case 140u: goto L_002E0F44;
    case 141u: goto L_002E0F50;
    case 142u: goto L_002E0F58;
    case 143u: goto L_002E0F70;
    case 144u: goto L_002E0F8C;
    case 145u: goto L_002E0F9C;
    case 146u: goto L_002E0FA4;
    case 147u: goto L_002E0FB0;
    case 148u: goto L_002E0FD4;
    case 149u: goto L_002E0FFC;
    case 150u: goto L_002E102C;
    case 151u: goto L_002E103C;
    case 152u: goto L_002E105C;
    case 153u: goto L_002E1070;
    case 154u: goto L_002E1084;
    case 155u: goto L_002E108C;
    case 156u: goto L_002E1094;
    case 157u: goto L_002E10B4;
    case 158u: goto L_002E10E4;
    case 159u: goto L_002E10F4;
    case 160u: goto L_002E1114;
    case 161u: goto L_002E1124;
    case 162u: goto L_002E1144;
    case 163u: goto L_002E1170;
    case 164u: goto L_002E1188;
    case 165u: goto L_002E11A0;
    case 166u: goto L_002E11AC;
    case 167u: goto L_002E11B8;
    case 168u: goto L_002E11C4;
    case 169u: goto L_002E11D0;
    case 170u: goto L_002E1200;
    case 171u: goto L_002E1230;
    case 172u: goto L_002E1244;
    case 173u: goto L_002E1254;
    case 174u: goto L_002E1270;
    case 175u: goto L_002E1290;
    case 176u: goto L_002E12A8;
    case 177u: goto L_002E12B8;
    case 178u: goto L_002E12CC;
    case 179u: goto L_002E12D4;
    case 180u: goto L_002E12E0;
    case 181u: goto L_002E12EC;
    case 182u: goto L_002E1310;
    case 183u: goto L_002E133C;
    case 184u: goto L_002E134C;
    case 185u: goto L_002E1368;
    case 186u: goto L_002E137C;
    case 187u: goto L_002E138C;
    case 188u: goto L_002E13A0;
    case 189u: goto L_002E13E8;
    case 190u: goto L_002E1400;
    case 191u: goto L_002E1414;
    case 192u: goto L_002E1424;
    case 193u: goto L_002E1454;
    case 194u: goto L_002E1464;
    case 195u: goto L_002E1480;
    case 196u: goto L_002E1494;
    case 197u: goto L_002E14A4;
    case 198u: goto L_002E14C4;
    case 199u: goto L_002E14D4;
    case 200u: goto L_002E14F0;
    case 201u: goto L_002E1504;
    case 202u: goto L_002E1514;
    case 203u: goto L_002E1528;
    case 204u: goto L_002E1538;
    case 205u: goto L_002E1554;
    case 206u: goto L_002E1570;
    case 207u: goto L_002E15C0;
    case 208u: goto L_002E1610;
    case 209u: goto L_002E166C;
    case 210u: goto L_002E167C;
    case 211u: goto L_002E169C;
    case 212u: goto L_002E16A8;
    case 213u: goto L_002E1700;
    case 214u: goto L_002E1710;
    case 215u: goto L_002E1730;
    case 216u: goto L_002E175C;
    case 217u: goto L_002E17A0;
    case 218u: goto L_002E17D0;
    case 219u: goto L_002E1808;
    case 220u: goto L_002E1818;
    case 221u: goto L_002E182C;
    case 222u: goto L_002E1834;
    case 223u: goto L_002E1840;
    case 224u: goto L_002E184C;
    case 225u: goto L_002E18A4;
    case 226u: goto L_002E18B4;
    case 227u: goto L_002E18D8;
    case 228u: goto L_002E18E8;
    case 229u: goto L_002E1908;
    case 230u: goto L_002E1918;
    case 231u: goto L_002E1934;
    case 232u: goto L_002E1940;
    case 233u: goto L_002E1958;
    case 234u: goto L_002E1988;
    case 235u: goto L_002E1998;
    case 236u: goto L_002E19B8;
    case 237u: goto L_002E19C4;
    case 238u: goto L_002E19E0;
    case 239u: goto L_002E1A04;
    case 240u: goto L_002E1A40;
    case 241u: goto L_002E1A50;
    case 242u: goto L_002E1A60;
    case 243u: goto L_002E1AB0;
    case 244u: goto L_002E1AD0;
    case 245u: goto L_002E1B10;
    case 246u: goto L_002E1B30;
    case 247u: goto L_002E1B70;
    case 248u: goto L_002E1B90;
    case 249u: goto L_002E1BD0;
    case 250u: goto L_002E1BEC;
    case 251u: goto L_002E1C10;
    case 252u: goto L_002E1C20;
    case 253u: goto L_002E1C30;
    case 254u: goto L_002E1C58;
    case 255u: goto L_002E1C68;
    case 256u: goto L_002E1C84;
    case 257u: goto L_002E1C98;
    case 258u: goto L_002E1CA8;
    case 259u: goto L_002E1CC0;
    case 260u: goto L_002E1CDC;
    case 261u: goto L_002E1CEC;
    case 262u: goto L_002E1D30;
    case 263u: goto L_002E1D40;
    case 264u: goto L_002E1D5C;
    case 265u: goto L_002E1D70;
    case 266u: goto L_002E1D80;
    case 267u: goto L_002E1DA0;
    case 268u: goto L_002E1DBC;
    case 269u: goto L_002E1DC8;
    case 270u: goto L_002E1DDC;
    case 271u: goto L_002E1DF4;
    case 272u: goto L_002E1E08;
    case 273u: goto L_002E1E20;
    case 274u: goto L_002E1E3C;
    case 275u: goto L_002E1E7C;
    case 276u: goto L_002E1E80;
    case 277u: goto L_002E1E9C;
    case 278u: goto L_002E1EA8;
    case 279u: goto L_002E1EC0;
    case 280u: goto L_002E1ED0;
    case 281u: goto L_002E1EE0;
    case 282u: goto L_002E1EFC;
    case 283u: goto L_002E1F08;
    case 284u: goto L_002E1F20;
    case 285u: goto L_002E1F38;
    case 286u: goto L_002E1F48;
    case 287u: goto L_002E1F90;
    case 288u: goto L_002E1FB8;
    case 289u: goto L_002E1FC8;
    case 290u: goto L_002E2000;
    case 291u: goto L_002E2030;
    case 292u: goto L_002E2064;
    case 293u: goto L_002E2074;
    case 294u: goto L_002E2090;
    case 295u: goto L_002E20AC;
    case 296u: goto L_002E20D0;
    case 297u: goto L_002E2110;
    case 298u: goto L_002E212C;
    case 299u: goto L_002E2150;
    case 300u: goto L_002E2160;
    case 301u: goto L_002E217C;
    case 302u: goto L_002E2188;
    case 303u: goto L_002E219C;
    case 304u: goto L_002E21AC;
    case 305u: goto L_002E21C0;
    case 306u: goto L_002E21D0;
    case 307u: goto L_002E21E4;
    case 308u: goto L_002E21F4;
    case 309u: goto L_002E2208;
    case 310u: goto L_002E2218;
    case 311u: goto L_002E222C;
    case 312u: goto L_002E2240;
    case 313u: goto L_002E225C;
    case 314u: goto L_002E22C0;
    case 315u: goto L_002E22DC;
    case 316u: goto L_002E22E8;
    case 317u: goto L_002E22F4;
    case 318u: goto L_002E2300;
    case 319u: goto L_002E2320;
    case 320u: goto L_002E2330;
    case 321u: goto L_002E2340;
    case 322u: goto L_002E235C;
    case 323u: goto L_002E2368;
    case 324u: goto L_002E238C;
    case 325u: goto L_002E2398;
    case 326u: goto L_002E23C4;
    case 327u: goto L_002E23FC;
    case 328u: goto L_002E2420;
    case 329u: goto L_002E2438;
    case 330u: goto L_002E2448;
    case 331u: goto L_002E24A0;
    case 332u: goto L_002E24C8;
    case 333u: goto L_002E24D8;
    case 334u: goto L_002E2520;
    case 335u: goto L_002E2580;
    case 336u: goto L_002E2594;
    case 337u: goto L_002E25D0;
    case 338u: goto L_002E25E0;
    case 339u: goto L_002E25FC;
    case 340u: goto L_002E260C;
    case 341u: goto L_002E261C;
    case 342u: goto L_002E262C;
    case 343u: goto L_002E263C;
    case 344u: goto L_002E264C;
    case 345u: goto L_002E265C;
    case 346u: goto L_002E266C;
    case 347u: goto L_002E267C;
    case 348u: goto L_002E2684;
    case 349u: goto L_002E26A0;
    case 350u: goto L_002E26E0;
    case 351u: goto L_002E2720;
    case 352u: goto L_002E2740;
    case 353u: goto L_002E2780;
    case 354u: goto L_002E27B4;
    case 355u: goto L_002E27CC;
    case 356u: goto L_002E27FC;
    case 357u: goto L_002E280C;
    case 358u: goto L_002E282C;
    case 359u: goto L_002E2844;
    case 360u: goto L_002E2884;
    case 361u: goto L_002E28A4;
    case 362u: goto L_002E28E4;
    case 363u: goto L_002E2918;
    case 364u: goto L_002E2930;
    case 365u: goto L_002E2960;
    case 366u: goto L_002E2970;
    case 367u: goto L_002E2990;
    case 368u: goto L_002E29A8;
    case 369u: goto L_002E29E8;
    case 370u: goto L_002E2A08;
    case 371u: goto L_002E2A48;
    case 372u: goto L_002E2A7C;
    case 373u: goto L_002E2A94;
    case 374u: goto L_002E2AC4;
    case 375u: goto L_002E2AD4;
    case 376u: goto L_002E2AF4;
    case 377u: goto L_002E2B0C;
    case 378u: goto L_002E2B4C;
    case 379u: goto L_002E2B6C;
    case 380u: goto L_002E2BAC;
    case 381u: goto L_002E2BE0;
    case 382u: goto L_002E2BF8;
    case 383u: goto L_002E2C28;
    case 384u: goto L_002E2C38;
    case 385u: goto L_002E2C58;
    case 386u: goto L_002E2C7C;
    case 387u: goto L_002E2C88;
    case 388u: goto L_002E2CA0;
    case 389u: goto L_002E2CB8;
    case 390u: goto L_002E2CD8;
    case 391u: goto L_002E2CFC;
    case 392u: goto L_002E2D10;
    case 393u: goto L_002E2D20;
    case 394u: goto L_002E2D4C;
    case 395u: goto L_002E2D5C;
    case 396u: goto L_002E2D7C;
    case 397u: goto L_002E2DA0;
    case 398u: goto L_002E2DB4;
    case 399u: goto L_002E2DC4;
    case 400u: goto L_002E2DF0;
    case 401u: goto L_002E2E00;
    case 402u: goto L_002E2E20;
    case 403u: goto L_002E2E50;
    case 404u: goto L_002E2EA8;
    case 405u: goto L_002E2EE8;
    case 406u: goto L_002E2F1C;
    case 407u: goto L_002E2F34;
    case 408u: goto L_002E2F64;
    case 409u: goto L_002E2F74;
    case 410u: goto L_002E2F94;
    case 411u: goto L_002E2FAC;
    case 412u: goto L_002E2FD0;
    case 413u: goto L_002E2FE4;
    case 414u: goto L_002E2FF4;
    case 415u: goto L_002E3020;
    case 416u: goto L_002E3030;
    case 417u: goto L_002E3050;
    case 418u: goto L_002E3074;
    case 419u: goto L_002E3084;
    case 420u: goto L_002E30B4;
    case 421u: goto L_002E30C4;
    case 422u: goto L_002E30E4;
    case 423u: goto L_002E3108;
    case 424u: goto L_002E3118;
    case 425u: goto L_002E3148;
    case 426u: goto L_002E3158;
    case 427u: goto L_002E3178;
    case 428u: goto L_002E319C;
    case 429u: goto L_002E31AC;
    case 430u: goto L_002E31DC;
    case 431u: goto L_002E31EC;
    case 432u: goto L_002E320C;
    case 433u: goto L_002E3230;
    case 434u: goto L_002E3240;
    case 435u: goto L_002E3270;
    case 436u: goto L_002E3280;
    case 437u: goto L_002E32A0;
    case 438u: goto L_002E32E0;
    case 439u: goto L_002E3328;
    case 440u: goto L_002E3368;
    case 441u: goto L_002E339C;
    case 442u: goto L_002E33B4;
    case 443u: goto L_002E33E4;
    case 444u: goto L_002E33F4;
    case 445u: goto L_002E3414;
    case 446u: goto L_002E342C;
    case 447u: goto L_002E3450;
    case 448u: goto L_002E3464;
    case 449u: goto L_002E3474;
    case 450u: goto L_002E34A0;
    case 451u: goto L_002E34B0;
    case 452u: goto L_002E34D0;
    case 453u: goto L_002E34F4;
    case 454u: goto L_002E3504;
    case 455u: goto L_002E3534;
    case 456u: goto L_002E3544;
    case 457u: goto L_002E3564;
    case 458u: goto L_002E3588;
    case 459u: goto L_002E3598;
    case 460u: goto L_002E35C8;
    case 461u: goto L_002E35D8;
    case 462u: goto L_002E35F8;
    case 463u: goto L_002E3630;
    case 464u: goto L_002E3680;
    case 465u: goto L_002E36C0;
    case 466u: goto L_002E36E0;
    case 467u: goto L_002E3720;
    case 468u: goto L_002E3754;
    case 469u: goto L_002E376C;
    case 470u: goto L_002E379C;
    case 471u: goto L_002E37AC;
    case 472u: goto L_002E37CC;
    case 473u: goto L_002E37E4;
    case 474u: goto L_002E3810;
    case 475u: goto L_002E3824;
    case 476u: goto L_002E3834;
    case 477u: goto L_002E3860;
    case 478u: goto L_002E3870;
    case 479u: goto L_002E3890;
    case 480u: goto L_002E38BC;
    case 481u: goto L_002E38D0;
    case 482u: goto L_002E38E0;
    case 483u: goto L_002E390C;
    case 484u: goto L_002E391C;
    case 485u: goto L_002E393C;
    case 486u: goto L_002E3968;
    case 487u: goto L_002E397C;
    case 488u: goto L_002E398C;
    case 489u: goto L_002E39B8;
    case 490u: goto L_002E39C8;
    case 491u: goto L_002E39E8;
    case 492u: goto L_002E3A0C;
    case 493u: goto L_002E3A1C;
    case 494u: goto L_002E3A4C;
    case 495u: goto L_002E3A5C;
    case 496u: goto L_002E3A7C;
    case 497u: goto L_002E3AB0;
    case 498u: goto L_002E3AF0;
    case 499u: goto L_002E3B30;
    case 500u: goto L_002E3B64;
    case 501u: goto L_002E3B7C;
    case 502u: goto L_002E3BAC;
    case 503u: goto L_002E3BBC;
    case 504u: goto L_002E3BDC;
    case 505u: goto L_002E3BF4;
    case 506u: goto L_002E3C34;
    case 507u: goto L_002E3C68;
    case 508u: goto L_002E3C80;
    case 509u: goto L_002E3CB0;
    case 510u: goto L_002E3CC0;
    case 511u: goto L_002E3CE0;
    case 512u: goto L_002E3CF8;
    case 513u: goto L_002E3D38;
    case 514u: goto L_002E3D6C;
    case 515u: goto L_002E3D84;
    case 516u: goto L_002E3DB4;
    case 517u: goto L_002E3DC4;
    case 518u: goto L_002E3DE4;
    case 519u: goto L_002E3DFC;
    case 520u: goto L_002E3E3C;
    case 521u: goto L_002E3E70;
    case 522u: goto L_002E3E88;
    case 523u: goto L_002E3EB8;
    case 524u: goto L_002E3EC8;
    case 525u: goto L_002E3EE8;
    case 526u: goto L_002E3F00;
    case 527u: goto L_002E3F24;
    case 528u: goto L_002E3F38;
    case 529u: goto L_002E3F48;
    case 530u: goto L_002E3F74;
    case 531u: goto L_002E3F84;
    case 532u: goto L_002E3FA4;
    case 533u: goto L_002E3FC8;
    case 534u: goto L_002E3FD8;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002E0004:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E0028; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0014u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0014u) [[unlikely]] return; }
L_002E0014:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0024u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0024u) [[unlikely]] return; }
L_002E0024:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E0040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E00C4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_002E00A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0074u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0074u) [[unlikely]] return; }
L_002E0074:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0084u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0084u) [[unlikely]] return; }
L_002E0084:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E00A0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E00A0u) [[unlikely]] return; }
L_002E00A0:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002E00A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E00C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E00B4u) [[unlikely]] return; }
L_002E00B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_002E00BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E00C4u) [[unlikely]] return; }
L_002E00C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E00C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E00E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 52u, depth + 1u); else { c.pc = 0x002E0550u; return; } if (c.pc != 0x002E00F4u) [[unlikely]] return; }
L_002E00F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0108u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002E0108u) [[unlikely]] return; }
L_002E0108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0110u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002E0110u) [[unlikely]] return; }
L_002E0110:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E011Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 49u, depth + 1u); else { c.pc = 0x002E0500u; return; } if (c.pc != 0x002E011Cu) [[unlikely]] return; }
L_002E011C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 46u, depth + 1u); else { c.pc = 0x002E04B0u; return; } if (c.pc != 0x002E0128u) [[unlikely]] return; }
L_002E0128:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 15712u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E0490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 60u)));  goto L_002E0200; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002E01DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E01ACu) [[unlikely]] return; }
L_002E01AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01BCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E01BCu) [[unlikely]] return; }
L_002E01BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E01D8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E01D8u) [[unlikely]] return; }
L_002E01D8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E01DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_002E01FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E01ECu) [[unlikely]] return; }
L_002E01EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01FCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E01FCu) [[unlikely]] return; }
L_002E01FC:
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_002E0200:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 64u);  goto L_002E026C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002E0248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0218u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0218u) [[unlikely]] return; }
L_002E0218:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0228u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0228u) [[unlikely]] return; }
L_002E0228:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0244; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0244u) [[unlikely]] return; }
L_002E0244:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0248:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_002E0268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0258u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0258u) [[unlikely]] return; }
L_002E0258:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0268u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0268u) [[unlikely]] return; }
L_002E0268:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002E026C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 60u);  goto L_002E02B8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E02B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0288u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0288u) [[unlikely]] return; }
L_002E0288:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0298u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0298u) [[unlikely]] return; }
L_002E0298:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E02B4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E02B4u) [[unlikely]] return; }
L_002E02B4:
    set32(c.r[2], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_002E02B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_002E0304; }
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E0300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E02D4u) [[unlikely]] return; }
L_002E02D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02E4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E02E4u) [[unlikely]] return; }
L_002E02E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0300; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0300u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0300u) [[unlikely]] return; }
L_002E0300:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_002E0304:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 52u);  goto L_002E036C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E0368; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0338u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0338u) [[unlikely]] return; }
L_002E0338:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0348u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0348u) [[unlikely]] return; }
L_002E0348:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0368; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0368u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E0368u) [[unlikely]] return; }
L_002E0368:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002E036C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E03D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E03D0; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03A0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E03A0u) [[unlikely]] return; }
L_002E03A0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03B0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E03B0u) [[unlikely]] return; }
L_002E03B0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E03D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03D0u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E03D0u) [[unlikely]] return; }
L_002E03D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002E0478; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 17872u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0400; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0400u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0400u) [[unlikely]] return; }
L_002E0400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E040Cu); set32(c.r[4], c.r[4].w[0] + 16608u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002E040Cu) [[unlikely]] return; }
L_002E040C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27524u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));  goto L_002E0424; }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[28].w[0] - 27524u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));
    c.budget -= 3;
L_002E0424:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_002E0438; }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[28].w[0] - 27520u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
L_002E0438:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 48u)));  goto L_002E044C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
L_002E044C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E045C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_002E045C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0468u); set32(c.r[4], c.r[4].w[0] + 16608u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002E0468u) [[unlikely]] return; }
L_002E0468:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x002E0474u) [[unlikely]] return; }
L_002E0474:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002E0478:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E0494; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0490u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002E0490u) [[unlikely]] return; }
L_002E0490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E04B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002E04E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E04D8u) [[unlikely]] return; }
L_002E04D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E04E8u) [[unlikely]] return; }
L_002E04E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002E0538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0528u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0528u) [[unlikely]] return; }
L_002E0528:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0538u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0538u) [[unlikely]] return; }
L_002E0538:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002E0564u) [[unlikely]] return; }
L_002E0564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 17872u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16608u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0598u); st32((c.r[16].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002E0598u) [[unlikely]] return; }
L_002E0598:
    set32(c.r[2], ld32((c.r[28].w[0] - 27524u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));  goto L_002E05AC; }
    st32((c.r[28].w[0] - 27524u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));
    c.budget -= 2;
L_002E05AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), 0u);  goto L_002E05C0; }
    st32((c.r[2].w[0] + 48u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
L_002E05C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27520u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05D4u); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002E05D4u) [[unlikely]] return; }
L_002E05D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E05F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E066C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002E064C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E061Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E061Cu) [[unlikely]] return; }
L_002E061C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E062Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E062Cu) [[unlikely]] return; }
L_002E062C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0648; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0648u) [[unlikely]] return; }
L_002E0648:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E064C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_002E066C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E065Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E065Cu) [[unlikely]] return; }
L_002E065C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E066Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E066Cu) [[unlikely]] return; }
L_002E066C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E0744; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002E0748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06BCu);  if (depth < kMaxDepth) unit_006A(c, 165u, depth + 1u); else { c.pc = 0x002A9920u; return; } if (c.pc != 0x002E06BCu) [[unlikely]] return; }
L_002E06BC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06D4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E06D4u) [[unlikely]] return; }
L_002E06D4:
    set32(c.r[18], ld32((c.r[16].w[0] + 64u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_002E0744; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[17].w[0]);  goto L_002E0724; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E06F4u) [[unlikely]] return; }
L_002E06F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0704u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0704u) [[unlikely]] return; }
L_002E0704:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0720; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0720u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0720u) [[unlikely]] return; }
L_002E0720:
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    c.budget -= 1;
L_002E0724:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E0744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0734u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0734u) [[unlikely]] return; }
L_002E0734:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0744u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0744u) [[unlikely]] return; }
L_002E0744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E0748:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E0760:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002E0850; }
L_002E0770:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002E07F0; }
L_002E0780:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002E0790; }
L_002E0790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E07C4u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E07C4u) [[unlikely]] return; }
L_002E07C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E07F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.budget -= 4;
L_002E0800:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0824u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0824u) [[unlikely]] return; }
L_002E0824:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E0850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0884u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0884u) [[unlikely]] return; }
L_002E0884:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E08B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28864u);  c.pc = t; return; }
L_002E08C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08D4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 398u, depth + 1u); else { c.pc = 0x003139D0u; return; } if (c.pc != 0x002E08D4u) [[unlikely]] return; }
L_002E08D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08E0u); set32(c.r[4], ld32((c.r[2].w[0] - 28864u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002E08E0u) [[unlikely]] return; }
L_002E08E0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08F4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E08F4u) [[unlikely]] return; }
L_002E08F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E092Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 402u, depth + 1u); else { c.pc = 0x00313A20u; return; } if (c.pc != 0x002E092Cu) [[unlikely]] return; }
L_002E092C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 52u)));  goto L_002E093C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E0A60; } }
L_002E093C:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_002E0950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E0A60; } }
L_002E0950:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0964; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E0A60; }
L_002E0964:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E0978; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0998; } }
L_002E0978:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_002E09A8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0990u); set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0990u) [[unlikely]] return; }
L_002E0990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E09A4; } }
L_002E0998:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0A60; } }
L_002E09A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_002E09A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E09BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E0A60; }
L_002E09BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E09D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E09F0; } }
L_002E09D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_002E0A00; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09E8u); set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E09E8u) [[unlikely]] return; }
L_002E09E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E09FC; } }
L_002E09F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0A60; } }
L_002E09FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_002E0A00:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E0A60; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0A5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0A5C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0A5C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 69u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0A5C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 70u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 70u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002E0A60; }
L_002E0A5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 403u, depth + 1u); else { c.pc = 0x00313A30u; return; } if (c.pc != 0x002E0A9Cu) [[unlikely]] return; }
L_002E0A9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_002E0AC0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002E0AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0ACCu); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002E0ACCu) [[unlikely]] return; }
L_002E0ACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AD8u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x002E0AD8u) [[unlikely]] return; }
L_002E0AD8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 70u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002E0B00; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0AF8u) [[unlikely]] return; }
L_002E0AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E0B14; } }
L_002E0B00:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0B10u) [[unlikely]] return; }
L_002E0B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E0B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B1Cu); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0078(c, 242u, depth + 1u); else { c.pc = 0x002E1A60u; return; } if (c.pc != 0x002E0B1Cu) [[unlikely]] return; }
L_002E0B1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B28u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0078(c, 241u, depth + 1u); else { c.pc = 0x002E1A50u; return; } if (c.pc != 0x002E0B28u) [[unlikely]] return; }
L_002E0B28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B34u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0078(c, 240u, depth + 1u); else { c.pc = 0x002E1A40u; return; } if (c.pc != 0x002E0B34u) [[unlikely]] return; }
L_002E0B34:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 62u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B48u); st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002E0B48u) [[unlikely]] return; }
L_002E0B48:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 69u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 61u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B5Cu); st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002E0B5Cu) [[unlikely]] return; }
L_002E0B5C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 70u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B70u); st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002E0B70u) [[unlikely]] return; }
L_002E0B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E0B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 404u, depth + 1u); else { c.pc = 0x00313A40u; return; } if (c.pc != 0x002E0BACu) [[unlikely]] return; }
L_002E0BAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002E0BBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E0C10; } }
L_002E0BBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BCCu); set32(c.r[5], c.r[17].w[0] + 52u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0BCCu) [[unlikely]] return; }
L_002E0BCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_002E0BF0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0BE8u) [[unlikely]] return; }
L_002E0BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E0C14; } }
L_002E0BF0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002E0C10; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0C08u) [[unlikely]] return; }
L_002E0C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0C10; } }
L_002E0C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E0C14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30628u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E0C70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C54u); set32(c.r[4], c.r[4].w[0] + 16576u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002E0C54u) [[unlikely]] return; }
L_002E0C54:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0C64u) [[unlikely]] return; }
L_002E0C64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C70u); set32(c.r[4], c.r[4].w[0] + 16576u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002E0C70u) [[unlikely]] return; }
L_002E0C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CA0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 405u, depth + 1u); else { c.pc = 0x00313A50u; return; } if (c.pc != 0x002E0CA0u) [[unlikely]] return; }
L_002E0CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002E0CA8u) [[unlikely]] return; }
L_002E0CA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002E0EAC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E0CD8; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 70u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E0DC4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E0CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CE0u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002E0CE0u) [[unlikely]] return; }
L_002E0CE0:
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 60u)));  goto L_002E0D54; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  goto L_002E0D30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0D00u) [[unlikely]] return; }
L_002E0D00:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D10u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0D10u) [[unlikely]] return; }
L_002E0D10:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0D2C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0D2Cu) [[unlikely]] return; }
L_002E0D2C:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_002E0D30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E0D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0D40u) [[unlikely]] return; }
L_002E0D40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D50u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0D50u) [[unlikely]] return; }
L_002E0D50:
    set32(c.r[16], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_002E0D54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E0EA8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002E0D9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0D6Cu) [[unlikely]] return; }
L_002E0D6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0D7Cu) [[unlikely]] return; }
L_002E0D7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0D98; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0D98u) [[unlikely]] return; }
L_002E0D98:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0D9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_002E0EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0DACu) [[unlikely]] return; }
L_002E0DAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0DBCu) [[unlikely]] return; }
L_002E0DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0EA8; } }
L_002E0DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DCCu);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002E0DCCu) [[unlikely]] return; }
L_002E0DCC:
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 64u)));  goto L_002E0E40; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 60u), c.r[16].w[0]);  goto L_002E0E1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0DECu) [[unlikely]] return; }
L_002E0DEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DFCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0DFCu) [[unlikely]] return; }
L_002E0DFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0E18; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0E18u) [[unlikely]] return; }
L_002E0E18:
    st32((c.r[17].w[0] + 60u), c.r[16].w[0]);
    c.budget -= 1;
L_002E0E1C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E0E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0E2Cu) [[unlikely]] return; }
L_002E0E2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0E3Cu) [[unlikely]] return; }
L_002E0E3C:
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_002E0E40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E0EA8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002E0E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0E58u) [[unlikely]] return; }
L_002E0E58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E68u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0E68u) [[unlikely]] return; }
L_002E0E68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E0E84; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0E84u) [[unlikely]] return; }
L_002E0E84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0E88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_002E0EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0E98u) [[unlikely]] return; }
L_002E0E98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0EA8u) [[unlikely]] return; }
L_002E0EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E0EAC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E0EC0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EE8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 406u, depth + 1u); else { c.pc = 0x00313A60u; return; } if (c.pc != 0x002E0EE8u) [[unlikely]] return; }
L_002E0EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0EF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E0EF0u) [[unlikely]] return; }
L_002E0EF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F00u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E0F00u) [[unlikely]] return; }
L_002E0F00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 367u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F10u); st8((c.r[29].w[0] + 367u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002E0F10u) [[unlikely]] return; }
L_002E0F10:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002E0F3C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F34u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x002E0F34u) [[unlikely]] return; }
L_002E0F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E0F48; } }
L_002E0F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F44u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x002E0F44u) [[unlikely]] return; }
L_002E0F44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E0F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 100u, depth + 1u); else { c.pc = 0x0030CA00u; return; } if (c.pc != 0x002E0F50u) [[unlikely]] return; }
L_002E0F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002E0F58u) [[unlikely]] return; }
L_002E0F58:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 367u));  goto L_002E0F74; }
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F70u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x002A8D90u; return; } if (c.pc != 0x002E0F70u) [[unlikely]] return; }
L_002E0F70:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 367u));
    c.budget -= 1;
L_002E0F74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002E1154; }
    set32(c.r[18], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 177u, depth + 1u); else { c.pc = 0x0021DA50u; return; } if (c.pc != 0x002E0F8Cu) [[unlikely]] return; }
L_002E0F8C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0F9Cu) [[unlikely]] return; }
L_002E0F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002E0FB4; } }
L_002E0FA4:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0FB0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 665u, depth + 1u); else { c.pc = 0x00307EF0u; return; } if (c.pc != 0x002E0FB0u) [[unlikely]] return; }
L_002E0FB0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E0FB4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002E0FDC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0FD4u); set32(c.r[6], 0u + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0FD4u) [[unlikely]] return; }
L_002E0FD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0FA4u | kUnwind; return; } goto L_002E0FA4; }
L_002E0FDC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002E1078; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002E1060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0FFCu); st32((c.r[29].w[0] + 360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E0FFCu) [[unlikely]] return; }
L_002E0FFC:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E105C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E102Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E102Cu) [[unlikely]] return; }
L_002E102C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E103Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E103Cu) [[unlikely]] return; }
L_002E103C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E105C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E105Cu); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E105Cu) [[unlikely]] return; }
L_002E105C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002E1060:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1070u) [[unlikely]] return; }
L_002E1070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E11A4; } }
L_002E1078:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1084u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1084u) [[unlikely]] return; }
L_002E1084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0])));  if (t) { goto L_002E1130; } }
L_002E108C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 334u, depth + 1u); else { c.pc = 0x0021B8E0u; return; } if (c.pc != 0x002E1094u) [[unlikely]] return; }
L_002E1094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E112C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  goto L_002E1118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10B4u); st32((c.r[29].w[0] + 356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E10B4u) [[unlikely]] return; }
L_002E10B4:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1114; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10E4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E10E4u) [[unlikely]] return; }
L_002E10E4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10F4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E10F4u) [[unlikely]] return; }
L_002E10F4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1114; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1114u); set32(c.r[5], c.r[29].w[0] + 356u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E1114u) [[unlikely]] return; }
L_002E1114:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_002E1118:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1124u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 667u, depth + 1u); else { c.pc = 0x00307F20u; return; } if (c.pc != 0x002E1124u) [[unlikely]] return; }
L_002E1124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E11A0; } }
L_002E112C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002E1130:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1144u); set32(c.r[6], 0u + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1144u) [[unlikely]] return; }
L_002E1144:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E108Cu | kUnwind; return; } goto L_002E108C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E11A0; } }
L_002E1154:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E11A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1170u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 665u, depth + 1u); else { c.pc = 0x00307EF0u; return; } if (c.pc != 0x002E1170u) [[unlikely]] return; }
L_002E1170:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002E1190; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1188u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 667u, depth + 1u); else { c.pc = 0x00307F20u; return; } if (c.pc != 0x002E1188u) [[unlikely]] return; }
L_002E1188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E11A0; } }
L_002E1190:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E11A0u) [[unlikely]] return; }
L_002E11A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E11A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11ACu); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0078(c, 72u, depth + 1u); else { c.pc = 0x002E0780u; return; } if (c.pc != 0x002E11ACu) [[unlikely]] return; }
L_002E11AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11B8u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0078(c, 71u, depth + 1u); else { c.pc = 0x002E0770u; return; } if (c.pc != 0x002E11B8u) [[unlikely]] return; }
L_002E11B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11C4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0078(c, 70u, depth + 1u); else { c.pc = 0x002E0760u; return; } if (c.pc != 0x002E11C4u) [[unlikely]] return; }
L_002E11C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11D0u); set32(c.r[5], c.r[29].w[0] + 366u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002E11D0u) [[unlikely]] return; }
L_002E11D0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 366u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].d[0] = c.r[2].d[0] | 103ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_002E1210; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1200u); set32(c.r[5], c.r[29].w[0] + 365u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002E1200u) [[unlikely]] return; }
L_002E1200:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 365u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
L_002E1210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E123C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1230u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002E1230u) [[unlikely]] return; }
L_002E1230:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 364u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 70u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002E123C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1244u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1244u) [[unlikely]] return; }
L_002E1244:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1254u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1254u) [[unlikely]] return; }
L_002E1254:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002E1274; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1270u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1270u) [[unlikely]] return; }
L_002E1270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002E1274:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002E1290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 72u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E12A8u) [[unlikely]] return; }
L_002E12A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E12FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 52u, depth + 1u); else { c.pc = 0x002E0550u; return; } if (c.pc != 0x002E12B8u) [[unlikely]] return; }
L_002E12B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12CCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002E12CCu) [[unlikely]] return; }
L_002E12CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12D4u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002E12D4u) [[unlikely]] return; }
L_002E12D4:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 49u, depth + 1u); else { c.pc = 0x002E0500u; return; } if (c.pc != 0x002E12E0u) [[unlikely]] return; }
L_002E12E0:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 46u, depth + 1u); else { c.pc = 0x002E04B0u; return; } if (c.pc != 0x002E12ECu) [[unlikely]] return; }
L_002E12EC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002E12FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E138C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002E136C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E133Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E133Cu) [[unlikely]] return; }
L_002E133C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E134Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E134Cu) [[unlikely]] return; }
L_002E134C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1368; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1368u) [[unlikely]] return; }
L_002E1368:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E136C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_002E138C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E137Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E137Cu) [[unlikely]] return; }
L_002E137C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E138Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E138Cu) [[unlikely]] return; }
L_002E138C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E13A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E1558; }
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002E1554; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13E8u);  if (depth < kMaxDepth) unit_006A(c, 165u, depth + 1u); else { c.pc = 0x002A9920u; return; } if (c.pc != 0x002E13E8u) [[unlikely]] return; }
L_002E13E8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1400u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1400u) [[unlikely]] return; }
L_002E1400:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_002E1424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1414u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1414u) [[unlikely]] return; }
L_002E1414:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1424u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1424u) [[unlikely]] return; }
L_002E1424:
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  goto L_002E14AC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 60u)));  goto L_002E1518; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002E1514; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 60u)));  goto L_002E1484; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1454u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1454u) [[unlikely]] return; }
L_002E1454:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1464u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1464u) [[unlikely]] return; }
L_002E1464:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1480; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1480u) [[unlikely]] return; }
L_002E1480:
    set32(c.r[16], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_002E1484:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_002E1514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1494u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1494u) [[unlikely]] return; }
L_002E1494:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E14A4u) [[unlikely]] return; }
L_002E14A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1514; } }
L_002E14AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002E1514; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 60u)));  goto L_002E14F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E14C4u) [[unlikely]] return; }
L_002E14C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E14D4u) [[unlikely]] return; }
L_002E14D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E14F0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E14F0u) [[unlikely]] return; }
L_002E14F0:
    set32(c.r[16], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_002E14F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_002E1514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1504u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1504u) [[unlikely]] return; }
L_002E1504:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1514u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1514u) [[unlikely]] return; }
L_002E1514:
    set32(c.r[16], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_002E1518:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E1554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1528u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1528u) [[unlikely]] return; }
L_002E1528:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1538u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1538u) [[unlikely]] return; }
L_002E1538:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1554; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1554u) [[unlikely]] return; }
L_002E1554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E1558:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E1570:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  goto L_002E1584; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002E15AC; } }
L_002E1584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  goto L_002E1598; }
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002E15AC; } }
L_002E1598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E15AC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002E15AC; } }
L_002E15AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E15C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  goto L_002E15D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_002E15FC; } }
L_002E15D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  goto L_002E15E8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002E15FC; } }
L_002E15E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E15FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002E15FC; } }
L_002E15FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1610:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E1740; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E1740; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28848u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E1664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E166C; } }
L_002E1664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E166Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E166Cu) [[unlikely]] return; }
L_002E166C:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E167Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x002E167Cu) [[unlikely]] return; }
L_002E167C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002E1690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002E16D4; } }
L_002E1690:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E169Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E169Cu) [[unlikely]] return; }
L_002E169C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20680u);  if (t) { goto L_002E16B8; } }
L_002E16A8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002E16B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E16C4; } }
L_002E16B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E16A8u | kUnwind; return; } goto L_002E16A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E16C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002E16D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E16D4; } }
L_002E16D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1730; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1700u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1700u) [[unlikely]] return; }
L_002E1700:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1710u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1710u) [[unlikely]] return; }
L_002E1710:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1730; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1730u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E1730u) [[unlikely]] return; }
L_002E1730:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E1740; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_002E1740:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[28].w[0] - 30624u));  goto L_002E1770; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E175Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E175Cu) [[unlikely]] return; }
L_002E175C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E176C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E17A4; } }
L_002E176C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30624u));
    c.budget -= 1;
L_002E1770:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002E17A4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E17A0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E17A0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E17A0u) [[unlikely]] return; }
L_002E17A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E17A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E17D0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 72u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1808u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E1808u) [[unlikely]] return; }
L_002E1808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E185C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 52u, depth + 1u); else { c.pc = 0x002E0550u; return; } if (c.pc != 0x002E1818u) [[unlikely]] return; }
L_002E1818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E182Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002E182Cu) [[unlikely]] return; }
L_002E182C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1834u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002E1834u) [[unlikely]] return; }
L_002E1834:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1840u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 49u, depth + 1u); else { c.pc = 0x002E0500u; return; } if (c.pc != 0x002E1840u) [[unlikely]] return; }
L_002E1840:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E184Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 46u, depth + 1u); else { c.pc = 0x002E04B0u; return; } if (c.pc != 0x002E184Cu) [[unlikely]] return; }
L_002E184C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002E185C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[18], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 12;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[17], ld32((c.r[16].w[0] + 52u)));  goto L_002E1910; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_002E18B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E18A4u) [[unlikely]] return; }
L_002E18A4:
    set32(c.r[2], ld32((c.r[18].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18B4u); st32((c.r[18].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E18B4u) [[unlikely]] return; }
L_002E18B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002E18B8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { st32((c.r[16].w[0] + 52u), c.r[18].w[0]);  goto L_002E190C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18D8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E18D8u) [[unlikely]] return; }
L_002E18D8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18E8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E18E8u) [[unlikely]] return; }
L_002E18E8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1908; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1908u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E1908u) [[unlikely]] return; }
L_002E1908:
    st32((c.r[16].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 1;
L_002E190C:
    set32(c.r[17], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002E1910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002E1918u) [[unlikely]] return; }
L_002E1918:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002E1928; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_002E1928:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1934u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002E1934u) [[unlikely]] return; }
L_002E1934:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1940u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x002E1940u) [[unlikely]] return; }
L_002E1940:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], c.r[16].w[0] + 52u);  goto L_002E19BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1958u); st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E1958u) [[unlikely]] return; }
L_002E1958:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E19B8; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1988u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1988u) [[unlikely]] return; }
L_002E1988:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1998u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1998u) [[unlikely]] return; }
L_002E1998:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E19B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19B8u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E19B8u) [[unlikely]] return; }
L_002E19B8:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002E19BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19C4u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_006A(c, 92u, depth + 1u); else { c.pc = 0x002A8D90u; return; } if (c.pc != 0x002E19C4u) [[unlikely]] return; }
L_002E19C4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30628u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002E1A14; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E19E0u) [[unlikely]] return; }
L_002E19E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1A10; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E1A14; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1A04u) [[unlikely]] return; }
L_002E1A04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1A14; } }
L_002E1A10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E1A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002E1A40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_002E1B30; }
L_002E1A50:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_002E1AD0; }
L_002E1A60:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_002E1A70; }
L_002E1A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AB0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1AB0u) [[unlikely]] return; }
L_002E1AB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B10u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1B10u) [[unlikely]] return; }
L_002E1B10:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B70u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1B70u) [[unlikely]] return; }
L_002E1B70:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E1BEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15936u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002E1BD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BD0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x002E1BD0u) [[unlikely]] return; }
L_002E1BD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E1BF0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BECu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002E1BECu) [[unlikely]] return; }
L_002E1BEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E1BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28824u);  c.pc = t; return; }
L_002E1C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6u);  c.pc = t; return; }
L_002E1C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27540u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002E1CAC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002E1C88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1C58u) [[unlikely]] return; }
L_002E1C58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C68u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1C68u) [[unlikely]] return; }
L_002E1C68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1C84; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1C84u) [[unlikely]] return; }
L_002E1C84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1C88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27540u), 0u);  if (t) { goto L_002E1CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1C98u) [[unlikely]] return; }
L_002E1C98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1CA8u) [[unlikely]] return; }
L_002E1CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E1CAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CDCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E1CDCu) [[unlikely]] return; }
L_002E1CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E1D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002E1CECu) [[unlikely]] return; }
L_002E1CEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 15936u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_002E1D14:
    set32(c.r[17], ld32((c.r[28].w[0] - 27540u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002E1D84; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27540u), c.r[16].w[0]);  goto L_002E1D60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1D30u) [[unlikely]] return; }
L_002E1D30:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D40u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1D40u) [[unlikely]] return; }
L_002E1D40:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1D5C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1D5Cu) [[unlikely]] return; }
L_002E1D5C:
    st32((c.r[28].w[0] - 27540u), c.r[16].w[0]);
    c.budget -= 1;
L_002E1D60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E1D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E1D70u) [[unlikely]] return; }
L_002E1D70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E1D80u) [[unlikely]] return; }
L_002E1D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E1D84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8A80u; return; } if (c.pc != 0x002E1DBCu) [[unlikely]] return; }
L_002E1DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DC8u); set32(c.r[4], ld32((c.r[2].w[0] - 28824u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002E1DC8u) [[unlikely]] return; }
L_002E1DC8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DDCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E1DDCu) [[unlikely]] return; }
L_002E1DDC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28816u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DF4u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002E1DF4u) [[unlikely]] return; }
L_002E1DF4:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E08u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E1E08u) [[unlikely]] return; }
L_002E1E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E1E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 96u, depth + 1u); else { c.pc = 0x002C8AD0u; return; } if (c.pc != 0x002E1E3Cu) [[unlikely]] return; }
L_002E1E3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_002E1E4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E1E68; } }
L_002E1E4C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_002E1E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1E7C:
    c.budget -= 1;
L_002E1E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 97u, depth + 1u); else { c.pc = 0x002C8AE0u; return; } if (c.pc != 0x002E1E9Cu) [[unlikely]] return; }
L_002E1E9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1EA8u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002E1EA8u) [[unlikely]] return; }
L_002E1EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1EC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8AF0u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 98u, depth); }
L_002E1ED0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B00u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 99u, depth); }
L_002E1EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1EFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 100u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002E1EFCu) [[unlikely]] return; }
L_002E1EFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F08u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002E1F08u) [[unlikely]] return; }
L_002E1F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E1F38u) [[unlikely]] return; }
L_002E1F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E1F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002E1F48u) [[unlikely]] return; }
L_002E1F48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 15936u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002E1F70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E1FB8u) [[unlikely]] return; }
L_002E1FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E1FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002E1FC8u) [[unlikely]] return; }
L_002E1FC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 15936u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002E1FF0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2000u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8B20u; return; } if (c.pc != 0x002E2000u) [[unlikely]] return; }
L_002E2000:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E20AC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002E2094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2064u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2064u) [[unlikely]] return; }
L_002E2064:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2074u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2074u) [[unlikely]] return; }
L_002E2074:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2090; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2090u) [[unlikely]] return; }
L_002E2090:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002E2094:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002E20B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20ACu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002E20ACu) [[unlikely]] return; }
L_002E20AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E20B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E20D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E212C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002E2110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2110u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 284u, depth + 1u); else { c.pc = 0x002AA6A0u; return; } if (c.pc != 0x002E2110u) [[unlikely]] return; }
L_002E2110:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002E2130; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E212Cu); set32(c.r[5], 0u + 432u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002E212Cu) [[unlikely]] return; }
L_002E212C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E2130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28784u);  c.pc = t; return; }
L_002E2160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E217Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 55u, depth + 1u); else { c.pc = 0x002C8690u; return; } if (c.pc != 0x002E217Cu) [[unlikely]] return; }
L_002E217C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2188u); set32(c.r[4], ld32((c.r[2].w[0] - 28784u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002E2188u) [[unlikely]] return; }
L_002E2188:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E219Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E219Cu) [[unlikely]] return; }
L_002E219C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[17].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21ACu); set32(c.r[5], c.r[5].w[0] - 28768u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x002E21ACu) [[unlikely]] return; }
L_002E21AC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21C0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E21C0u) [[unlikely]] return; }
L_002E21C0:
    c.f[12] = ld32((c.r[17].w[0] + 412u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21D0u); set32(c.r[4], c.r[4].w[0] - 28756u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002E21D0u) [[unlikely]] return; }
L_002E21D0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21E4u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E21E4u) [[unlikely]] return; }
L_002E21E4:
    c.f[12] = ld32((c.r[17].w[0] + 416u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21F4u); set32(c.r[4], c.r[4].w[0] - 28738u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002E21F4u) [[unlikely]] return; }
L_002E21F4:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2208u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E2208u) [[unlikely]] return; }
L_002E2208:
    c.f[12] = ld32((c.r[17].w[0] + 420u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2218u); set32(c.r[4], c.r[4].w[0] - 28720u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002E2218u) [[unlikely]] return; }
L_002E2218:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E222Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002E222Cu) [[unlikely]] return; }
L_002E222C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E2240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E225Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 65u, depth + 1u); else { c.pc = 0x002C8750u; return; } if (c.pc != 0x002E225Cu) [[unlikely]] return; }
L_002E225C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 412u));  goto L_002E226C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E22A8; } }
L_002E226C:
    c.f[0] = ld32((c.r[16].w[0] + 412u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E22A8; }
    c.f[1] = ld32((c.r[17].w[0] + 420u));
    c.f[0] = ld32((c.r[16].w[0] + 420u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E22A4; } }
    c.f[1] = ld32((c.r[17].w[0] + 416u));
    c.f[0] = ld32((c.r[16].w[0] + 416u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_002E22A8; }
L_002E22A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E22A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E22C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 67u, depth + 1u); else { c.pc = 0x002C87D0u; return; } if (c.pc != 0x002E22DCu) [[unlikely]] return; }
L_002E22DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22E8u); set32(c.r[5], c.r[17].w[0] + 412u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002E22E8u) [[unlikely]] return; }
L_002E22E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22F4u); set32(c.r[5], c.r[17].w[0] + 416u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002E22F4u) [[unlikely]] return; }
L_002E22F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2300u); set32(c.r[5], c.r[17].w[0] + 420u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002E2300u) [[unlikely]] return; }
L_002E2300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2320:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8830u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 72u, depth); }
L_002E2330:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8840u | kUnwind; return; } [[clang::musttail]] return unit_0072(c, 73u, depth); }
L_002E2340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E235Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 74u, depth + 1u); else { c.pc = 0x002C8850u; return; } if (c.pc != 0x002E235Cu) [[unlikely]] return; }
L_002E235C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2368u); set32(c.r[5], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002E2368u) [[unlikely]] return; }
L_002E2368:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002E2390; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E238Cu); set32(c.r[5], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002E238Cu) [[unlikely]] return; }
L_002E238C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E2390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2398u); set32(c.r[5], c.r[16].w[0] + 420u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002E2398u) [[unlikely]] return; }
L_002E2398:
    c.f[2] = ld32((c.r[16].w[0] + 412u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = ld32((c.r[28].w[0] - 32580u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 412u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E23C4u);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x002E23C4u) [[unlikely]] return; }
L_002E23C4:
    st32((c.r[16].w[0] + 424u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.f[1] = ld32((c.r[28].w[0] - 32580u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 416u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E23FCu); st32((c.r[16].w[0] + 416u), c.f[2]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x002E23FCu) [[unlikely]] return; }
L_002E23FC:
    st32((c.r[16].w[0] + 428u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 432u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2438u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E2438u) [[unlikely]] return; }
L_002E2438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E2480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 90u, depth + 1u); else { c.pc = 0x002C8A30u; return; } if (c.pc != 0x002E2448u) [[unlikely]] return; }
L_002E2448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), 0u);
    st32((c.r[16].w[0] + 420u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 412u), 0u);
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 424u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    c.budget -= 14;
L_002E2480:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E24A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 432u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002E24C8u) [[unlikely]] return; }
L_002E24C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E2510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 90u, depth + 1u); else { c.pc = 0x002C8A30u; return; } if (c.pc != 0x002E24D8u) [[unlikely]] return; }
L_002E24D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), 0u);
    st32((c.r[16].w[0] + 420u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 412u), 0u);
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 424u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    c.budget -= 14;
L_002E2510:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2520u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 82u, depth + 1u); else { c.pc = 0x002C8910u; return; } if (c.pc != 0x002E2520u) [[unlikely]] return; }
L_002E2520:
    c.f[0] = ld32((c.r[18].w[0] + 400u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 404u));
    st32((c.r[16].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 408u));
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 412u));
    st32((c.r[16].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 416u));
    st32((c.r[16].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 420u));
    st32((c.r[16].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 424u));
    st32((c.r[16].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 428u));
    st32((c.r[16].w[0] + 428u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 88u, depth + 1u); else { c.pc = 0x002C8A00u; return; } if (c.pc != 0x002E2594u) [[unlikely]] return; }
L_002E2594:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[16].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[16].w[0] + 408u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E25D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28688u);  c.pc = t; return; }
L_002E25E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 15680u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E25FCu) [[unlikely]] return; }
L_002E25FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E260Cu); set32(c.r[5], c.r[5].w[0] - 15792u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E260Cu) [[unlikely]] return; }
L_002E260C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E261Cu); set32(c.r[5], c.r[5].w[0] - 15952u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E261Cu) [[unlikely]] return; }
L_002E261C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E262Cu); set32(c.r[5], c.r[5].w[0] - 17696u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E262Cu) [[unlikely]] return; }
L_002E262C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E263Cu); set32(c.r[5], c.r[5].w[0] - 20064u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E263Cu) [[unlikely]] return; }
L_002E263C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E264Cu); set32(c.r[5], c.r[5].w[0] - 20224u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E264Cu) [[unlikely]] return; }
L_002E264C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E265Cu); set32(c.r[5], c.r[5].w[0] - 21584u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E265Cu) [[unlikely]] return; }
L_002E265C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E266Cu); set32(c.r[5], c.r[5].w[0] - 21648u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E266Cu) [[unlikely]] return; }
L_002E266C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E267Cu); set32(c.r[5], c.r[5].w[0] - 21824u);  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x0029DCA0u; return; } if (c.pc != 0x002E267Cu) [[unlikely]] return; }
L_002E267C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2684u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 224u, depth + 1u); else { c.pc = 0x0029DC90u; return; } if (c.pc != 0x002E2684u) [[unlikely]] return; }
L_002E2684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E26A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E26E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E26E0u) [[unlikely]] return; }
L_002E26E0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28448u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E26FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E2728; } }
L_002E26FC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E2728; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2718; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2728; } }
L_002E2718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2720u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2720u) [[unlikely]] return; }
L_002E2720:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2834; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E2834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2740u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2740u) [[unlikely]] return; }
L_002E2740:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28442u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E275C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E2788; } }
L_002E275C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E2788; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2778; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2788; } }
L_002E2778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2780u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2780u) [[unlikely]] return; }
L_002E2780:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2834; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28435u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E27AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E27B4; } }
L_002E27AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E27B4u) [[unlikely]] return; }
L_002E27B4:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27CCu); set32(c.r[5], c.r[29].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E27CCu) [[unlikely]] return; }
L_002E27CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27FCu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E27FCu) [[unlikely]] return; }
L_002E27FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E280Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E280Cu) [[unlikely]] return; }
L_002E280C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E282Cu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E282Cu) [[unlikely]] return; }
L_002E282C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC0; } }
L_002E2834:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E2998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2844u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2844u) [[unlikely]] return; }
L_002E2844:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28448u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E2860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E288C; } }
L_002E2860:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E288C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E287C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E288C; } }
L_002E287C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2884u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2884u) [[unlikely]] return; }
L_002E2884:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E288C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2998; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E2998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E28A4u) [[unlikely]] return; }
L_002E28A4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E28C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E28EC; } }
L_002E28C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E28EC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E28DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E28EC; } }
L_002E28DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28E4u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E28E4u) [[unlikely]] return; }
L_002E28E4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E28EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2998; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28414u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2918; } }
L_002E2910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2918u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2918u) [[unlikely]] return; }
L_002E2918:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2930u); set32(c.r[5], c.r[29].w[0] + 136u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2930u) [[unlikely]] return; }
L_002E2930:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2960u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2960u) [[unlikely]] return; }
L_002E2960:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2970u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2970u) [[unlikely]] return; }
L_002E2970:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2990u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E2990u) [[unlikely]] return; }
L_002E2990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC0; } }
L_002E2998:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E2AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E29A8u) [[unlikely]] return; }
L_002E29A8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E29C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E29F0; } }
L_002E29C4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E29F0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E29E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E29F0; } }
L_002E29E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29E8u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E29E8u) [[unlikely]] return; }
L_002E29E8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E29F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2AFC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E2AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2A08u) [[unlikely]] return; }
L_002E2A08:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28448u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E2A24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E2A50; } }
L_002E2A24:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E2A50; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2A40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2A50; } }
L_002E2A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A48u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2A48u) [[unlikely]] return; }
L_002E2A48:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2AFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28400u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2A74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2A7C; } }
L_002E2A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A7Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2A7Cu) [[unlikely]] return; }
L_002E2A7C:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A94u); set32(c.r[5], c.r[29].w[0] + 132u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2A94u) [[unlikely]] return; }
L_002E2A94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AC4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2AC4u) [[unlikely]] return; }
L_002E2AC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AD4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2AD4u) [[unlikely]] return; }
L_002E2AD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AF4u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E2AF4u) [[unlikely]] return; }
L_002E2AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC0; } }
L_002E2AFC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E2C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2B0Cu) [[unlikely]] return; }
L_002E2B0C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28442u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E2B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E2B54; } }
L_002E2B28:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E2B54; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2B44; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2B54; } }
L_002E2B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B4Cu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2B4Cu) [[unlikely]] return; }
L_002E2B4C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2C60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E2C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2B6Cu) [[unlikely]] return; }
L_002E2B6C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28448u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E2B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E2BB4; } }
L_002E2B88:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E2BB4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2BA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2BB4; } }
L_002E2BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BACu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2BACu) [[unlikely]] return; }
L_002E2BAC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2C60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28386u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2BE0; } }
L_002E2BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BE0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2BE0u) [[unlikely]] return; }
L_002E2BE0:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BF8u); set32(c.r[5], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2BF8u) [[unlikely]] return; }
L_002E2BF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C28u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2C28u) [[unlikely]] return; }
L_002E2C28:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C38u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2C38u) [[unlikely]] return; }
L_002E2C38:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2CC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C58u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E2C58u) [[unlikely]] return; }
L_002E2C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2CC0; } }
L_002E2C60:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E2CC0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E2CC0; } }
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2C7Cu) [[unlikely]] return; }
L_002E2C7C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2C88u) [[unlikely]] return; }
L_002E2C88:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CA0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2CA0u) [[unlikely]] return; }
L_002E2CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2CC0; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CB8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E2CB8u) [[unlikely]] return; }
L_002E2CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002E2E28; } }
L_002E2CC0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002E2CD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E2E24; } }
L_002E2CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E2CD8u) [[unlikely]] return; }
L_002E2CD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28372u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2CF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2CFC; } }
L_002E2CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CFCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2CFCu) [[unlikely]] return; }
L_002E2CFC:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D10u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E2D10u) [[unlikely]] return; }
L_002E2D10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D20u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E2D20u) [[unlikely]] return; }
L_002E2D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2D7C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D4Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2D4Cu) [[unlikely]] return; }
L_002E2D4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D5Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2D5Cu) [[unlikely]] return; }
L_002E2D5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2D7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D7Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E2D7Cu) [[unlikely]] return; }
L_002E2D7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28366u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2D98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2DA0; } }
L_002E2D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DA0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2DA0u) [[unlikely]] return; }
L_002E2DA0:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DB4u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E2DB4u) [[unlikely]] return; }
L_002E2DB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DC4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E2DC4u) [[unlikely]] return; }
L_002E2DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002E2E24; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DF0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2DF0u) [[unlikely]] return; }
L_002E2DF0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E00u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2E00u) [[unlikely]] return; }
L_002E2E00:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2E20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E20u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E2E20u) [[unlikely]] return; }
L_002E2E20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E2E24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002E2E28:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002E2E50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2EA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E2EA8u) [[unlikely]] return; }
L_002E2EA8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E2EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E2EF0; } }
L_002E2EC4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E2EF0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2EE0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2EF0; } }
L_002E2EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2EE8u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E2EE8u) [[unlikely]] return; }
L_002E2EE8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E2EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2F94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28359u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2F1C; } }
L_002E2F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F1Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2F1Cu) [[unlikely]] return; }
L_002E2F1C:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F34u); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2F34u) [[unlikely]] return; }
L_002E2F34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E2F94; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F64u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E2F64u) [[unlikely]] return; }
L_002E2F64:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F74u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E2F74u) [[unlikely]] return; }
L_002E2F74:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2F94; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F94u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E2F94u) [[unlikely]] return; }
L_002E2F94:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002E2FA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E32A4; } }
L_002E2FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E2FACu) [[unlikely]] return; }
L_002E2FAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28349u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E2FD0; } }
L_002E2FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FD0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E2FD0u) [[unlikely]] return; }
L_002E2FD0:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FE4u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E2FE4u) [[unlikely]] return; }
L_002E2FE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FF4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E2FF4u) [[unlikely]] return; }
L_002E2FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3050; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3020u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3020u) [[unlikely]] return; }
L_002E3020:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3030u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3030u) [[unlikely]] return; }
L_002E3030:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3050; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3050u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3050u) [[unlikely]] return; }
L_002E3050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28333u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E306C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3074; } }
L_002E306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3074u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3074u) [[unlikely]] return; }
L_002E3074:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3084u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3084u) [[unlikely]] return; }
L_002E3084:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E30E4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30B4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E30B4u) [[unlikely]] return; }
L_002E30B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30C4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E30C4u) [[unlikely]] return; }
L_002E30C4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E30E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30E4u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E30E4u) [[unlikely]] return; }
L_002E30E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28329u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3108; } }
L_002E3100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3108u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3108u) [[unlikely]] return; }
L_002E3108:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3118u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3118u) [[unlikely]] return; }
L_002E3118:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3178; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3148u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3148u) [[unlikely]] return; }
L_002E3148:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3158u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3158u) [[unlikely]] return; }
L_002E3158:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3178; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3178u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3178u) [[unlikely]] return; }
L_002E3178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28323u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E319C; } }
L_002E3194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E319Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E319Cu) [[unlikely]] return; }
L_002E319C:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31ACu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E31ACu) [[unlikely]] return; }
L_002E31AC:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E320C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31DCu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E31DCu) [[unlikely]] return; }
L_002E31DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31ECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E31ECu) [[unlikely]] return; }
L_002E31EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E320C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E320Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E320Cu) [[unlikely]] return; }
L_002E320C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28318u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3230; } }
L_002E3228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3230u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3230u) [[unlikely]] return; }
L_002E3230:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3240u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3240u) [[unlikely]] return; }
L_002E3240:
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002E32A4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3270u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3270u) [[unlikely]] return; }
L_002E3270:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3280u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3280u) [[unlikely]] return; }
L_002E3280:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E32A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32A0u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E32A0u) [[unlikely]] return; }
L_002E32A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E32A4:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E32E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E3414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3328u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E3328u) [[unlikely]] return; }
L_002E3328:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E3344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E3370; } }
L_002E3344:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3370; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3360; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3370; } }
L_002E3360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3368u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E3368u) [[unlikely]] return; }
L_002E3368:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E3370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28312u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E339C; } }
L_002E3394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E339Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E339Cu) [[unlikely]] return; }
L_002E339C:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33B4u); set32(c.r[5], c.r[29].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E33B4u) [[unlikely]] return; }
L_002E33B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3414; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33E4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E33E4u) [[unlikely]] return; }
L_002E33E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E33F4u) [[unlikely]] return; }
L_002E33F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3414; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3414u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3414u) [[unlikely]] return; }
L_002E3414:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002E3424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E35FC; } }
L_002E3424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E342Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E342Cu) [[unlikely]] return; }
L_002E342C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28349u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3448; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3450; } }
L_002E3448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3450u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3450u) [[unlikely]] return; }
L_002E3450:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3464u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E3464u) [[unlikely]] return; }
L_002E3464:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3474u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E3474u) [[unlikely]] return; }
L_002E3474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E34D0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34A0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E34A0u) [[unlikely]] return; }
L_002E34A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E34B0u) [[unlikely]] return; }
L_002E34B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E34D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34D0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E34D0u) [[unlikely]] return; }
L_002E34D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28291u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E34EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E34F4; } }
L_002E34EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E34F4u) [[unlikely]] return; }
L_002E34F4:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3504u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3504u) [[unlikely]] return; }
L_002E3504:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3564; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3534u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3534u) [[unlikely]] return; }
L_002E3534:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3544u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3544u) [[unlikely]] return; }
L_002E3544:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3564; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3564u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3564u) [[unlikely]] return; }
L_002E3564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28285u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3580; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3588; } }
L_002E3580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3588u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3588u) [[unlikely]] return; }
L_002E3588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3598u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3598u) [[unlikely]] return; }
L_002E3598:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002E35FC; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35C8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E35C8u) [[unlikely]] return; }
L_002E35C8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35D8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E35D8u) [[unlikely]] return; }
L_002E35D8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E35F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35F8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E35F8u) [[unlikely]] return; }
L_002E35F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E35FC:
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
L_002E3630:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E36D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3680u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E3680u) [[unlikely]] return; }
L_002E3680:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28442u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E369C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E36C8; } }
L_002E369C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E36C8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E36B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E36C8; } }
L_002E36B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36C0u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E36C0u) [[unlikely]] return; }
L_002E36C0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E36C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3730; } }
L_002E36D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E37CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E36E0u) [[unlikely]] return; }
L_002E36E0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28442u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E36FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E3728; } }
L_002E36FC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3728; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3718; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3728; } }
L_002E3718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3720u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E3720u) [[unlikely]] return; }
L_002E3720:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E3728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E37CC; } }
L_002E3730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28277u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E374C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3754; } }
L_002E374C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3754u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3754u) [[unlikely]] return; }
L_002E3754:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E376Cu); set32(c.r[5], c.r[29].w[0] + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E376Cu) [[unlikely]] return; }
L_002E376C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E37CC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E379Cu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E379Cu) [[unlikely]] return; }
L_002E379C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37ACu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E37ACu) [[unlikely]] return; }
L_002E37AC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E37CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37CCu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E37CCu) [[unlikely]] return; }
L_002E37CC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002E37DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E3A80; } }
L_002E37DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E37E4u) [[unlikely]] return; }
L_002E37E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E3890; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28250u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3810; } }
L_002E3808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3810u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3810u) [[unlikely]] return; }
L_002E3810:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3824u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E3824u) [[unlikely]] return; }
L_002E3824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3834u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E3834u) [[unlikely]] return; }
L_002E3834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3890; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3860u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3860u) [[unlikely]] return; }
L_002E3860:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3870u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3870u) [[unlikely]] return; }
L_002E3870:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3890; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3890u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3890u) [[unlikely]] return; }
L_002E3890:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E393C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28247u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E38B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E38BC; } }
L_002E38B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E38BCu) [[unlikely]] return; }
L_002E38BC:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38D0u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E38D0u) [[unlikely]] return; }
L_002E38D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E38E0u) [[unlikely]] return; }
L_002E38E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E393C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E390Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E390Cu) [[unlikely]] return; }
L_002E390C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E391Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E391Cu) [[unlikely]] return; }
L_002E391C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E393C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E393Cu); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E393Cu) [[unlikely]] return; }
L_002E393C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002E39E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28244u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3968; } }
L_002E3960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3968u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3968u) [[unlikely]] return; }
L_002E3968:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E397Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E397Cu) [[unlikely]] return; }
L_002E397C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E398Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E398Cu) [[unlikely]] return; }
L_002E398C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E39E8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39B8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E39B8u) [[unlikely]] return; }
L_002E39B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E39C8u) [[unlikely]] return; }
L_002E39C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E39E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39E8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E39E8u) [[unlikely]] return; }
L_002E39E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28366u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3A04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3A0C; } }
L_002E3A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A0Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3A0Cu) [[unlikely]] return; }
L_002E3A0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A1Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3A1Cu) [[unlikely]] return; }
L_002E3A1C:
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002E3A80; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A4Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3A4Cu) [[unlikely]] return; }
L_002E3A4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A5Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3A5Cu) [[unlikely]] return; }
L_002E3A5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3A7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A7Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3A7Cu) [[unlikely]] return; }
L_002E3A7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E3A80:
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
L_002E3AB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E3BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E3AF0u) [[unlikely]] return; }
L_002E3AF0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E3B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E3B38; } }
L_002E3B0C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3B38; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3B28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3B38; } }
L_002E3B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B30u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E3B30u) [[unlikely]] return; }
L_002E3B30:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E3B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3BE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28237u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3B64; } }
L_002E3B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B64u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3B64u) [[unlikely]] return; }
L_002E3B64:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B7Cu); set32(c.r[5], c.r[29].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3B7Cu) [[unlikely]] return; }
L_002E3B7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BACu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3BACu) [[unlikely]] return; }
L_002E3BAC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BBCu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3BBCu) [[unlikely]] return; }
L_002E3BBC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BDCu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3BDCu) [[unlikely]] return; }
L_002E3BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3EE8; } }
L_002E3BE4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E3CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E3BF4u) [[unlikely]] return; }
L_002E3BF4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28442u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E3C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E3C3C; } }
L_002E3C10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3C3C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3C2C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3C3C; } }
L_002E3C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C34u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E3C34u) [[unlikely]] return; }
L_002E3C34:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E3C3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3CE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28222u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3C60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3C68; } }
L_002E3C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C68u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3C68u) [[unlikely]] return; }
L_002E3C68:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C80u); set32(c.r[5], c.r[29].w[0] + 136u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3C80u) [[unlikely]] return; }
L_002E3C80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CB0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3CB0u) [[unlikely]] return; }
L_002E3CB0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CC0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3CC0u) [[unlikely]] return; }
L_002E3CC0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CE0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3CE0u) [[unlikely]] return; }
L_002E3CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3EE8; } }
L_002E3CE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E3DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E3CF8u) [[unlikely]] return; }
L_002E3CF8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28207u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E3D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E3D40; } }
L_002E3D14:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3D40; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3D30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3D40; } }
L_002E3D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D38u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E3D38u) [[unlikely]] return; }
L_002E3D38:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E3D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3DEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28200u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3D64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3D6C; } }
L_002E3D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D6Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3D6Cu) [[unlikely]] return; }
L_002E3D6C:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D84u); set32(c.r[5], c.r[29].w[0] + 132u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3D84u) [[unlikely]] return; }
L_002E3D84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DB4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3DB4u) [[unlikely]] return; }
L_002E3DB4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DC4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3DC4u) [[unlikely]] return; }
L_002E3DC4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DE4u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3DE4u) [[unlikely]] return; }
L_002E3DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3EE8; } }
L_002E3DEC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E3EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002E3DFCu) [[unlikely]] return; }
L_002E3DFC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28448u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002E3E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E3E44; } }
L_002E3E18:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002E3E44; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3E34; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3E44; } }
L_002E3E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E3Cu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002E3E3Cu) [[unlikely]] return; }
L_002E3E3C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002E3E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3EE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28185u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3E70; } }
L_002E3E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E70u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3E70u) [[unlikely]] return; }
L_002E3E70:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E88u); set32(c.r[5], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3E88u) [[unlikely]] return; }
L_002E3E88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EB8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3EB8u) [[unlikely]] return; }
L_002E3EB8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EC8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3EC8u) [[unlikely]] return; }
L_002E3EC8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EE8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3EE8u) [[unlikely]] return; }
L_002E3EE8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_002E3EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 5u, depth); } }
L_002E3EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E3F00u) [[unlikely]] return; }
L_002E3F00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28250u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3F1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3F24; } }
L_002E3F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F24u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3F24u) [[unlikely]] return; }
L_002E3F24:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F38u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E3F38u) [[unlikely]] return; }
L_002E3F38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F48u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E3F48u) [[unlikely]] return; }
L_002E3F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3FA4; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F74u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E3F74u) [[unlikely]] return; }
L_002E3F74:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F84u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E3F84u) [[unlikely]] return; }
L_002E3F84:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3FA4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FA4u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E3FA4u) [[unlikely]] return; }
L_002E3FA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28366u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E3FC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E3FC8; } }
L_002E3FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FC8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E3FC8u) [[unlikely]] return; }
L_002E3FC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FD8u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E3FD8u) [[unlikely]] return; }
L_002E3FD8:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  [[clang::musttail]] return unit_0079(c, 5u, depth); }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}
