#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C4[4096] = {
    1, 2, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28,
    0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0,
    0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0,
    0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107,
    0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0,
    0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 399,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0,
    0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00410000;
    case 2u: goto L_00410004;
    case 3u: goto L_0041000C;
    case 4u: goto L_00410010;
    case 5u: goto L_00410018;
    case 6u: goto L_00410040;
    case 7u: goto L_00410050;
    case 8u: goto L_00410080;
    case 9u: goto L_004100B0;
    case 10u: goto L_004100D8;
    case 11u: goto L_00410110;
    case 12u: goto L_00410144;
    case 13u: goto L_00410160;
    case 14u: goto L_00410188;
    case 15u: goto L_004101A0;
    case 16u: goto L_004101B8;
    case 17u: goto L_004101C0;
    case 18u: goto L_004101D0;
    case 19u: goto L_004101E0;
    case 20u: goto L_004101F4;
    case 21u: goto L_004101FC;
    case 22u: goto L_00410210;
    case 23u: goto L_00410234;
    case 24u: goto L_00410248;
    case 25u: goto L_00410250;
    case 26u: goto L_00410268;
    case 27u: goto L_00410274;
    case 28u: goto L_0041027C;
    case 29u: goto L_0041028C;
    case 30u: goto L_00410294;
    case 31u: goto L_0041029C;
    case 32u: goto L_004102AC;
    case 33u: goto L_004102C0;
    case 34u: goto L_004102C8;
    case 35u: goto L_004102E0;
    case 36u: goto L_004102EC;
    case 37u: goto L_004102F4;
    case 38u: goto L_00410304;
    case 39u: goto L_0041030C;
    case 40u: goto L_00410320;
    case 41u: goto L_00410340;
    case 42u: goto L_00410348;
    case 43u: goto L_00410360;
    case 44u: goto L_00410384;
    case 45u: goto L_00410394;
    case 46u: goto L_0041039C;
    case 47u: goto L_004103AC;
    case 48u: goto L_004103CC;
    case 49u: goto L_004103E8;
    case 50u: goto L_004103F4;
    case 51u: goto L_00410400;
    case 52u: goto L_0041041C;
    case 53u: goto L_00410430;
    case 54u: goto L_00410440;
    case 55u: goto L_0041048C;
    case 56u: goto L_004104C0;
    case 57u: goto L_004104E8;
    case 58u: goto L_004104FC;
    case 59u: goto L_00410574;
    case 60u: goto L_004105C4;
    case 61u: goto L_004105F0;
    case 62u: goto L_0041064C;
    case 63u: goto L_00410660;
    case 64u: goto L_00410690;
    case 65u: goto L_004106A4;
    case 66u: goto L_004106C0;
    case 67u: goto L_004106D4;
    case 68u: goto L_00410700;
    case 69u: goto L_00410710;
    case 70u: goto L_00410718;
    case 71u: goto L_00410728;
    case 72u: goto L_00410730;
    case 73u: goto L_00410758;
    case 74u: goto L_00410760;
    case 75u: goto L_00410770;
    case 76u: goto L_00410778;
    case 77u: goto L_00410788;
    case 78u: goto L_00410790;
    case 79u: goto L_00410798;
    case 80u: goto L_004107A0;
    case 81u: goto L_004107B0;
    case 82u: goto L_004107B8;
    case 83u: goto L_004107C0;
    case 84u: goto L_004107C8;
    case 85u: goto L_004107D8;
    case 86u: goto L_004107F0;
    case 87u: goto L_00410800;
    case 88u: goto L_00410824;
    case 89u: goto L_00410840;
    case 90u: goto L_0041084C;
    case 91u: goto L_00410854;
    case 92u: goto L_00410894;
    case 93u: goto L_004108B8;
    case 94u: goto L_004108D4;
    case 95u: goto L_004108E4;
    case 96u: goto L_00410904;
    case 97u: goto L_00410914;
    case 98u: goto L_00410984;
    case 99u: goto L_00410990;
    case 100u: goto L_0041099C;
    case 101u: goto L_004109A4;
    case 102u: goto L_00410A00;
    case 103u: goto L_00410A0C;
    case 104u: goto L_00410A40;
    case 105u: goto L_00410A50;
    case 106u: goto L_00410A70;
    case 107u: goto L_00410A7C;
    case 108u: goto L_00410A84;
    case 109u: goto L_00410A98;
    case 110u: goto L_00410AA0;
    case 111u: goto L_00410AB8;
    case 112u: goto L_00410AC4;
    case 113u: goto L_00410AE0;
    case 114u: goto L_00410B58;
    case 115u: goto L_00410B64;
    case 116u: goto L_00410B7C;
    case 117u: goto L_00410B8C;
    case 118u: goto L_00410BEC;
    case 119u: goto L_00410C70;
    case 120u: goto L_00410CA0;
    case 121u: goto L_00410CB0;
    case 122u: goto L_00410CC8;
    case 123u: goto L_00410CD8;
    case 124u: goto L_00410D08;
    case 125u: goto L_00410D18;
    case 126u: goto L_00410D34;
    case 127u: goto L_00410D54;
    case 128u: goto L_00410D9C;
    case 129u: goto L_00410DC0;
    case 130u: goto L_00410DDC;
    case 131u: goto L_00410DE8;
    case 132u: goto L_00410E00;
    case 133u: goto L_00410E18;
    case 134u: goto L_00410E28;
    case 135u: goto L_00410E38;
    case 136u: goto L_00410E5C;
    case 137u: goto L_00410E70;
    case 138u: goto L_00410E90;
    case 139u: goto L_00410EA4;
    case 140u: goto L_00410EB4;
    case 141u: goto L_00410ED8;
    case 142u: goto L_00410EEC;
    case 143u: goto L_00410EFC;
    case 144u: goto L_00410F20;
    case 145u: goto L_00410F34;
    case 146u: goto L_00410F44;
    case 147u: goto L_00410F68;
    case 148u: goto L_00410FA0;
    case 149u: goto L_00410FD0;
    case 150u: goto L_00410FE8;
    case 151u: goto L_00410FF8;
    case 152u: goto L_0041101C;
    case 153u: goto L_00411030;
    case 154u: goto L_00411040;
    case 155u: goto L_00411064;
    case 156u: goto L_00411078;
    case 157u: goto L_00411088;
    case 158u: goto L_004110AC;
    case 159u: goto L_004110CC;
    case 160u: goto L_004110D8;
    case 161u: goto L_004110E8;
    case 162u: goto L_00411104;
    case 163u: goto L_00411138;
    case 164u: goto L_00411190;
    case 165u: goto L_004111C8;
    case 166u: goto L_004111E0;
    case 167u: goto L_004111EC;
    case 168u: goto L_0041122C;
    case 169u: goto L_00411238;
    case 170u: goto L_00411260;
    case 171u: goto L_00411270;
    case 172u: goto L_0041128C;
    case 173u: goto L_004112A4;
    case 174u: goto L_004112C4;
    case 175u: goto L_004112D0;
    case 176u: goto L_004112DC;
    case 177u: goto L_004112F0;
    case 178u: goto L_00411300;
    case 179u: goto L_00411320;
    case 180u: goto L_0041132C;
    case 181u: goto L_00411338;
    case 182u: goto L_0041134C;
    case 183u: goto L_0041135C;
    case 184u: goto L_0041137C;
    case 185u: goto L_00411388;
    case 186u: goto L_00411394;
    case 187u: goto L_004113A8;
    case 188u: goto L_004113B8;
    case 189u: goto L_004113DC;
    case 190u: goto L_004113E8;
    case 191u: goto L_004113F4;
    case 192u: goto L_0041140C;
    case 193u: goto L_0041143C;
    case 194u: goto L_00411458;
    case 195u: goto L_004114A0;
    case 196u: goto L_004114D8;
    case 197u: goto L_00411504;
    case 198u: goto L_00411534;
    case 199u: goto L_00411540;
    case 200u: goto L_00411558;
    case 201u: goto L_00411580;
    case 202u: goto L_004115B0;
    case 203u: goto L_004115D8;
    case 204u: goto L_00411604;
    case 205u: goto L_00411634;
    case 206u: goto L_00411640;
    case 207u: goto L_00411658;
    case 208u: goto L_0041167C;
    case 209u: goto L_004116A0;
    case 210u: goto L_004116C8;
    case 211u: goto L_004116E8;
    case 212u: goto L_0041170C;
    case 213u: goto L_00411718;
    case 214u: goto L_00411724;
    case 215u: goto L_0041173C;
    case 216u: goto L_00411754;
    case 217u: goto L_00411778;
    case 218u: goto L_00411784;
    case 219u: goto L_00411790;
    case 220u: goto L_004117A8;
    case 221u: goto L_004117B8;
    case 222u: goto L_004117D8;
    case 223u: goto L_004117E4;
    case 224u: goto L_004117F0;
    case 225u: goto L_00411804;
    case 226u: goto L_00411814;
    case 227u: goto L_00411834;
    case 228u: goto L_00411840;
    case 229u: goto L_0041184C;
    case 230u: goto L_00411860;
    case 231u: goto L_0041187C;
    case 232u: goto L_0041189C;
    case 233u: goto L_004118A8;
    case 234u: goto L_004118B4;
    case 235u: goto L_004118C8;
    case 236u: goto L_004118E8;
    case 237u: goto L_00411908;
    case 238u: goto L_00411914;
    case 239u: goto L_00411920;
    case 240u: goto L_00411934;
    case 241u: goto L_00411968;
    case 242u: goto L_00411970;
    case 243u: goto L_004119BC;
    case 244u: goto L_00411A18;
    case 245u: goto L_00411A70;
    case 246u: goto L_00411A90;
    case 247u: goto L_00411AD0;
    case 248u: goto L_00411B00;
    case 249u: goto L_00411B28;
    case 250u: goto L_00411B60;
    case 251u: goto L_00411B94;
    case 252u: goto L_00411BB0;
    case 253u: goto L_00411BCC;
    case 254u: goto L_00411BDC;
    case 255u: goto L_00411BE8;
    case 256u: goto L_00411C00;
    case 257u: goto L_00411C1C;
    case 258u: goto L_00411C30;
    case 259u: goto L_00411C6C;
    case 260u: goto L_00411C78;
    case 261u: goto L_00411C9C;
    case 262u: goto L_00411CA8;
    case 263u: goto L_00411CC0;
    case 264u: goto L_00411CE0;
    case 265u: goto L_00411D08;
    case 266u: goto L_00411D34;
    case 267u: goto L_00411D4C;
    case 268u: goto L_00411D64;
    case 269u: goto L_00411D84;
    case 270u: goto L_00411D98;
    case 271u: goto L_00411DE0;
    case 272u: goto L_00411E04;
    case 273u: goto L_00411E20;
    case 274u: goto L_00411E44;
    case 275u: goto L_00411E5C;
    case 276u: goto L_00411E80;
    case 277u: goto L_00411E90;
    case 278u: goto L_00411EB4;
    case 279u: goto L_00411EC0;
    case 280u: goto L_00411ED0;
    case 281u: goto L_00411EE8;
    case 282u: goto L_00411EF8;
    case 283u: goto L_00411F0C;
    case 284u: goto L_00411F20;
    case 285u: goto L_00411F48;
    case 286u: goto L_00411F74;
    case 287u: goto L_00411F9C;
    case 288u: goto L_00411FC4;
    case 289u: goto L_00411FEC;
    case 290u: goto L_00412014;
    case 291u: goto L_0041203C;
    case 292u: goto L_00412064;
    case 293u: goto L_00412080;
    case 294u: goto L_004120A4;
    case 295u: goto L_004120C0;
    case 296u: goto L_004120E4;
    case 297u: goto L_004120FC;
    case 298u: goto L_00412120;
    case 299u: goto L_00412130;
    case 300u: goto L_00412154;
    case 301u: goto L_00412160;
    case 302u: goto L_00412170;
    case 303u: goto L_004121C8;
    case 304u: goto L_004121E0;
    case 305u: goto L_00412200;
    case 306u: goto L_00412240;
    case 307u: goto L_00412250;
    case 308u: goto L_00412260;
    case 309u: goto L_0041229C;
    case 310u: goto L_004122A4;
    case 311u: goto L_004122D0;
    case 312u: goto L_00412300;
    case 313u: goto L_00412340;
    case 314u: goto L_00412424;
    case 315u: goto L_0041243C;
    case 316u: goto L_0041245C;
    case 317u: goto L_00412468;
    case 318u: goto L_0041249C;
    case 319u: goto L_004124DC;
    case 320u: goto L_004124E8;
    case 321u: goto L_004124F4;
    case 322u: goto L_00412508;
    case 323u: goto L_00412514;
    case 324u: goto L_00412528;
    case 325u: goto L_00412534;
    case 326u: goto L_0041254C;
    case 327u: goto L_00412590;
    case 328u: goto L_0041259C;
    case 329u: goto L_004125A8;
    case 330u: goto L_004125F0;
    case 331u: goto L_004125FC;
    case 332u: goto L_00412608;
    case 333u: goto L_00412634;
    case 334u: goto L_00412644;
    case 335u: goto L_00412674;
    case 336u: goto L_004126AC;
    case 337u: goto L_004126B8;
    case 338u: goto L_004126C4;
    case 339u: goto L_004126E8;
    case 340u: goto L_004126F4;
    case 341u: goto L_00412708;
    case 342u: goto L_0041271C;
    case 343u: goto L_00412734;
    case 344u: goto L_00412770;
    case 345u: goto L_0041277C;
    case 346u: goto L_00412788;
    case 347u: goto L_004127DC;
    case 348u: goto L_004127F4;
    case 349u: goto L_00412830;
    case 350u: goto L_0041287C;
    case 351u: goto L_004128F0;
    case 352u: goto L_0041290C;
    case 353u: goto L_00412980;
    case 354u: goto L_0041299C;
    case 355u: goto L_004129FC;
    case 356u: goto L_00412A08;
    case 357u: goto L_00412A30;
    case 358u: goto L_00412A40;
    case 359u: goto L_00412A70;
    case 360u: goto L_00412AB4;
    case 361u: goto L_00412B9C;
    case 362u: goto L_00412BB8;
    case 363u: goto L_00412BE0;
    case 364u: goto L_00412C3C;
    case 365u: goto L_00412C48;
    case 366u: goto L_00412C54;
    case 367u: goto L_00412C68;
    case 368u: goto L_00412C74;
    case 369u: goto L_00412C98;
    case 370u: goto L_00412CE0;
    case 371u: goto L_00412CEC;
    case 372u: goto L_00412CF8;
    case 373u: goto L_00412D40;
    case 374u: goto L_00412D4C;
    case 375u: goto L_00412D58;
    case 376u: goto L_00412D94;
    case 377u: goto L_00412DF0;
    case 378u: goto L_00412DFC;
    case 379u: goto L_00412E08;
    case 380u: goto L_00412E2C;
    case 381u: goto L_00412E38;
    case 382u: goto L_00412E5C;
    case 383u: goto L_00412EA4;
    case 384u: goto L_00412EB0;
    case 385u: goto L_00412EBC;
    case 386u: goto L_00412F14;
    case 387u: goto L_00412F30;
    case 388u: goto L_00412F70;
    case 389u: goto L_00413008;
    case 390u: goto L_00413010;
    case 391u: goto L_00413070;
    case 392u: goto L_00413088;
    case 393u: goto L_004130D0;
    case 394u: goto L_004130E4;
    case 395u: goto L_00413120;
    case 396u: goto L_00413134;
    case 397u: goto L_00413164;
    case 398u: goto L_00413170;
    case 399u: goto L_0041317C;
    case 400u: goto L_0041318C;
    case 401u: goto L_0041319C;
    case 402u: goto L_004131A8;
    case 403u: goto L_004131C4;
    case 404u: goto L_004131EC;
    case 405u: goto L_004131F8;
    case 406u: goto L_00413208;
    case 407u: goto L_00413234;
    case 408u: goto L_00413260;
    case 409u: goto L_00413280;
    case 410u: goto L_00413294;
    case 411u: goto L_004132BC;
    case 412u: goto L_004132D4;
    case 413u: goto L_00413320;
    case 414u: goto L_00413334;
    case 415u: goto L_004133AC;
    case 416u: goto L_004133C8;
    case 417u: goto L_00413400;
    case 418u: goto L_0041342C;
    case 419u: goto L_00413464;
    case 420u: goto L_00413480;
    case 421u: goto L_004134C0;
    case 422u: goto L_004134D0;
    case 423u: goto L_0041352C;
    case 424u: goto L_0041353C;
    case 425u: goto L_00413584;
    case 426u: goto L_00413620;
    case 427u: goto L_004136A4;
    case 428u: goto L_004136E4;
    case 429u: goto L_00413700;
    case 430u: goto L_00413774;
    case 431u: goto L_00413784;
    case 432u: goto L_004137B4;
    case 433u: goto L_004137F4;
    case 434u: goto L_00413860;
    case 435u: goto L_00413874;
    case 436u: goto L_004138A0;
    case 437u: goto L_004138C4;
    case 438u: goto L_004138DC;
    case 439u: goto L_0041391C;
    case 440u: goto L_004139A0;
    case 441u: goto L_00413A1C;
    case 442u: goto L_00413A24;
    case 443u: goto L_00413A30;
    case 444u: goto L_00413A40;
    case 445u: goto L_00413A50;
    case 446u: goto L_00413A5C;
    case 447u: goto L_00413A78;
    case 448u: goto L_00413A98;
    case 449u: goto L_00413ACC;
    case 450u: goto L_00413B30;
    case 451u: goto L_00413B78;
    case 452u: goto L_00413B98;
    case 453u: goto L_00413BAC;
    case 454u: goto L_00413C24;
    case 455u: goto L_00413C40;
    case 456u: goto L_00413C60;
    case 457u: goto L_00413CD0;
    case 458u: goto L_00413CD8;
    case 459u: goto L_00413D28;
    case 460u: goto L_00413D68;
    case 461u: goto L_00413DC0;
    case 462u: goto L_00413E00;
    case 463u: goto L_00413E6C;
    case 464u: goto L_00413EAC;
    case 465u: goto L_00413F3C;
    case 466u: goto L_00413F4C;
    case 467u: goto L_00413F84;
    case 468u: goto L_00413FB8;
    case 469u: goto L_00413FE0;
    default: bad_entry(c, 0x00410000u); return;
    }
L_00410000:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00410004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041000Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 216u, depth + 1u); else { c.pc = 0x003E9890u; return; } if (c.pc != 0x0041000Cu) [[unlikely]] return; }
L_0041000C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00410010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410018u);  if (depth < kMaxDepth) unit_00C4(c, 171u, depth + 1u); else { c.pc = 0x00411270u; return; } if (c.pc != 0x00410018u) [[unlikely]] return; }
L_00410018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00410040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
L_00410050:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0041008C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410080u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00410080u) [[unlikely]] return; }
L_00410080:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0041008C:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004100B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100D8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004100D8u) [[unlikely]] return; }
L_004100D8:
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
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0041011C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410110u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00410110u) [[unlikely]] return; }
L_00410110:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0041011C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410144u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410144u) [[unlikely]] return; }
L_00410144:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00410160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 620u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410188u); set32(c.r[5], ld32((c.r[16].w[0] + 616u)));  if (depth < kMaxDepth) unit_00BA(c, 203u, depth + 1u); else { c.pc = 0x003E9730u; return; } if (c.pc != 0x00410188u) [[unlikely]] return; }
L_00410188:
    st32((c.r[16].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 628u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_004101A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 119u, depth + 1u); else { c.pc = 0x00410C70u; return; } if (c.pc != 0x004101A0u) [[unlikely]] return; }
L_004101A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004101B8; } }
L_004101A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004101B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 113u, depth + 1u); else { c.pc = 0x00410AE0u; return; } if (c.pc != 0x004101B8u) [[unlikely]] return; }
L_004101B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101C0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x004101C0u) [[unlikely]] return; }
L_004101C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101D0u); set32(c.r[5], c.r[5].w[0] + 9156u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x004101D0u) [[unlikely]] return; }
L_004101D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004101E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 171u, depth + 1u); else { c.pc = 0x00411270u; return; } if (c.pc != 0x004101F4u) [[unlikely]] return; }
L_004101F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 209u, depth + 1u); else { c.pc = 0x004116A0u; return; } if (c.pc != 0x004101FCu) [[unlikely]] return; }
L_004101FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00410294; } }
    set32(c.r[4], c.r[16].w[0] + 648u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410234u); st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BD(c, 378u, depth + 1u); else { c.pc = 0x003F74B0u; return; } if (c.pc != 0x00410234u) [[unlikely]] return; }
L_00410234:
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_00410254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410248u);  if (depth < kMaxDepth) unit_00D1(c, 20u, depth + 1u); else { c.pc = 0x00444190u; return; } if (c.pc != 0x00410248u) [[unlikely]] return; }
L_00410248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410250u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 9u, depth + 1u); else { c.pc = 0x00444090u; return; } if (c.pc != 0x00410250u) [[unlikely]] return; }
L_00410250:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_00410254:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041026C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410268u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 178u, depth + 1u); else { c.pc = 0x004D19D0u; return; } if (c.pc != 0x00410268u) [[unlikely]] return; }
L_00410268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041026C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 445u, depth + 1u); else { c.pc = 0x0040BDC0u; return; } if (c.pc != 0x00410274u) [[unlikely]] return; }
L_00410274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041027Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 12u, depth + 1u); else { c.pc = 0x004440D0u; return; } if (c.pc != 0x0041027Cu) [[unlikely]] return; }
L_0041027C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041028Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 255u, depth + 1u); else { c.pc = 0x004FE280u; return; } if (c.pc != 0x0041028Cu) [[unlikely]] return; }
L_0041028C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410294u); set32(c.r[4], c.r[16].w[0] + 648u);  if (depth < kMaxDepth) unit_00BD(c, 379u, depth + 1u); else { c.pc = 0x003F74C0u; return; } if (c.pc != 0x00410294u) [[unlikely]] return; }
L_00410294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041029Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x0041029Cu) [[unlikely]] return; }
L_0041029C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00410310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102ACu); set32(c.r[4], c.r[16].w[0] + 648u);  if (depth < kMaxDepth) unit_00BD(c, 378u, depth + 1u); else { c.pc = 0x003F74B0u; return; } if (c.pc != 0x004102ACu) [[unlikely]] return; }
L_004102AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004102CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102C0u);  if (depth < kMaxDepth) unit_00D1(c, 20u, depth + 1u); else { c.pc = 0x00444190u; return; } if (c.pc != 0x004102C0u) [[unlikely]] return; }
L_004102C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102C8u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 9u, depth + 1u); else { c.pc = 0x00444090u; return; } if (c.pc != 0x004102C8u) [[unlikely]] return; }
L_004102C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_004102CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004102E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102E0u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 178u, depth + 1u); else { c.pc = 0x004D19D0u; return; } if (c.pc != 0x004102E0u) [[unlikely]] return; }
L_004102E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004102E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 445u, depth + 1u); else { c.pc = 0x0040BDC0u; return; } if (c.pc != 0x004102ECu) [[unlikely]] return; }
L_004102EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004102F4u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 12u, depth + 1u); else { c.pc = 0x004440D0u; return; } if (c.pc != 0x004102F4u) [[unlikely]] return; }
L_004102F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410304u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 255u, depth + 1u); else { c.pc = 0x004FE280u; return; } if (c.pc != 0x00410304u) [[unlikely]] return; }
L_00410304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041030Cu); set32(c.r[4], c.r[16].w[0] + 648u);  if (depth < kMaxDepth) unit_00BD(c, 379u, depth + 1u); else { c.pc = 0x003F74C0u; return; } if (c.pc != 0x0041030Cu) [[unlikely]] return; }
L_0041030C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00410310:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00410340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410340u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 22u, depth + 1u); else { c.pc = 0x004441C0u; return; } if (c.pc != 0x00410340u) [[unlikely]] return; }
L_00410340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 372u, depth + 1u); else { c.pc = 0x0040B570u; return; } if (c.pc != 0x00410348u) [[unlikely]] return; }
L_00410348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00410360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041041C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410384u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 20u, depth + 1u); else { c.pc = 0x00444190u; return; } if (c.pc != 0x00410384u) [[unlikely]] return; }
L_00410384:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410394u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 136u, depth + 1u); else { c.pc = 0x004D1290u; return; } if (c.pc != 0x00410394u) [[unlikely]] return; }
L_00410394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041039Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 410u, depth + 1u); else { c.pc = 0x0040ED70u; return; } if (c.pc != 0x0041039Cu) [[unlikely]] return; }
L_0041039C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004103ACu); set32(c.r[5], c.r[5].w[0] + 9181u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004103ACu) [[unlikely]] return; }
L_004103AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  goto L_004103D0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004103CCu); set32(c.r[5], c.r[5].w[0] + 9199u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004103CCu) [[unlikely]] return; }
L_004103CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_004103D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004103E0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004103E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004103E8u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x004103E8u) [[unlikely]] return; }
L_004103E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004103F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 297u, depth + 1u); else { c.pc = 0x004F2410u; return; } if (c.pc != 0x004103F4u) [[unlikely]] return; }
L_004103F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410400u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x00410400u) [[unlikely]] return; }
L_00410400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041041Cu); st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0041041Cu) [[unlikely]] return; }
L_0041041C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00410430:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B470u | kUnwind; return; } [[clang::musttail]] return unit_00C2(c, 363u, depth); }
L_00410440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041059C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26976u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041048Cu); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0041048Cu) [[unlikely]] return; }
L_0041048C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004104E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004104DC; } }
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004104C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004104C0u) [[unlikely]] return; }
L_004104C0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = c.r[20].d[0] & 255ull;  goto L_004104E0; }
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004104DC:
    c.r[16].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 1;
L_004104E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00410578; } }
L_004104E8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004104FCu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004104FCu) [[unlikely]] return; }
L_004104FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_00410538; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 6u);  goto L_0041056C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 4u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00410568; } }
L_00410538:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00410568; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 4u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00410568:
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_0041056C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410574u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x00410574u) [[unlikely]] return; }
L_00410574:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00410578:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004104E8u | kUnwind; return; } goto L_004104E8; }
    st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0041059C:
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004105C8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004105C4u); st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x004105C4u) [[unlikely]] return; }
L_004105C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004105C8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004105F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_00410670; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0041062C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004106A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004106A4; } }
L_0041062C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004106A4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041064Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00F4(c, 140u, depth + 1u); else { c.pc = 0x004D1300u; return; } if (c.pc != 0x0041064Cu) [[unlikely]] return; }
L_0041064C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00410668; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410660u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x00410660u) [[unlikely]] return; }
L_00410660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004106A4; } }
L_00410668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004106A4; } }
L_00410670:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004106A4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410690u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00F4(c, 140u, depth + 1u); else { c.pc = 0x004D1300u; return; } if (c.pc != 0x00410690u) [[unlikely]] return; }
L_00410690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004106A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004106A4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x004106A4u) [[unlikely]] return; }
L_004106A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004106A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004106C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004106D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 423u, depth + 1u); else { c.pc = 0x0040BB00u; return; } if (c.pc != 0x004106D4u) [[unlikely]] return; }
L_004106D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004107DC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7584u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00410000u < 16384u) { entry = entries_00C4[(t - 0x00410000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00410700:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410710u) [[unlikely]] return; }
L_00410710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_00410718:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410728u) [[unlikely]] return; }
L_00410728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_00410730:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0041074C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_0041074C:
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410758u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410758u) [[unlikely]] return; }
L_00410758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_00410760:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410770u) [[unlikely]] return; }
L_00410770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_00410778:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00410788u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00410788u) [[unlikely]] return; }
L_00410788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_00410790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 54u, depth + 1u); else { c.pc = 0x00410440u; return; } if (c.pc != 0x00410798u) [[unlikely]] return; }
L_00410798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_004107A0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004107B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004107B0u) [[unlikely]] return; }
L_004107B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_004107B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004107C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 43u, depth + 1u); else { c.pc = 0x00410360u; return; } if (c.pc != 0x004107C0u) [[unlikely]] return; }
L_004107C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004107D8; } }
L_004107C8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004107D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004107D8u) [[unlikely]] return; }
L_004107D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004107DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004107F0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.budget -= 4;
L_00410800:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410824u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 31u, depth + 1u); else { c.pc = 0x00444270u; return; } if (c.pc != 0x00410824u) [[unlikely]] return; }
L_00410824:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[22], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[22].w[0] + 320u)));  if (t) { goto L_00410840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 425u, depth + 1u); else { c.pc = 0x0040F1B0u; return; } if (c.pc != 0x00410840u) [[unlikely]] return; }
L_00410840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041084Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 445u, depth + 1u); else { c.pc = 0x0040BDC0u; return; } if (c.pc != 0x0041084Cu) [[unlikely]] return; }
L_0041084C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 435u, depth + 1u); else { c.pc = 0x0040BC90u; return; } if (c.pc != 0x00410854u) [[unlikely]] return; }
L_00410854:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[2], c.r[16].w[0] + 632u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 156u), 0u);  if (t) { goto L_00410894; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 644u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410894u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 426u, depth + 1u); else { c.pc = 0x00413620u; return; } if (c.pc != 0x00410894u) [[unlikely]] return; }
L_00410894:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[6], c.r[6].w[0] + 2624u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004108B8u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 311u, depth + 1u); else { c.pc = 0x004122D0u; return; } if (c.pc != 0x004108B8u) [[unlikely]] return; }
L_004108B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_004109BC; } }
L_004108D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004108E4u); set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x004108E4u) [[unlikely]] return; }
L_004108E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_004108F8; }
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[23], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_004108F8:
    set32(c.r[17], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00410940; } }
L_00410904:
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410914u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00410914u) [[unlikely]] return; }
L_00410914:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_00410934; }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[23].d[0] == c.r[2].d[0]) { c.r[6].d[0] = c.r[20].d[0] + 0ull;  goto L_00410978; }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_00410934:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    c.budget -= 3;
L_00410940:
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410904u | kUnwind; return; } goto L_00410904; }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00410978:
    set32(c.r[4], c.r[22].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410984u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00FE(c, 481u, depth + 1u); else { c.pc = 0x004FBC50u; return; } if (c.pc != 0x00410984u) [[unlikely]] return; }
L_00410984:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410990u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00EE(c, 305u, depth + 1u); else { c.pc = 0x004BA990u; return; } if (c.pc != 0x00410990u) [[unlikely]] return; }
L_00410990:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041099Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00EF(c, 150u, depth + 1u); else { c.pc = 0x004BDB10u; return; } if (c.pc != 0x0041099Cu) [[unlikely]] return; }
L_0041099C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004109A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 218u, depth + 1u); else { c.pc = 0x004BE770u; return; } if (c.pc != 0x004109A4u) [[unlikely]] return; }
L_004109A4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[21].d[0] = c.r[2].d[0] << 56;
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.budget -= 6;
L_004109BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004108D4u | kUnwind; return; } goto L_004108D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 186u, depth + 1u); else { c.pc = 0x004D1AD0u; return; } if (c.pc != 0x00410A00u) [[unlikely]] return; }
L_00410A00:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 24u, depth + 1u); else { c.pc = 0x004144C0u; return; } if (c.pc != 0x00410A0Cu) [[unlikely]] return; }
L_00410A0C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00410A40:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00410A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A70u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 13u, depth + 1u); else { c.pc = 0x003CC240u; return; } if (c.pc != 0x00410A70u) [[unlikely]] return; }
L_00410A70:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 445u, depth + 1u); else { c.pc = 0x0040BDC0u; return; } if (c.pc != 0x00410A7Cu) [[unlikely]] return; }
L_00410A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A84u); set32(c.r[4], c.r[17].w[0] + 648u);  if (depth < kMaxDepth) unit_00BD(c, 378u, depth + 1u); else { c.pc = 0x003F74B0u; return; } if (c.pc != 0x00410A84u) [[unlikely]] return; }
L_00410A84:
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_00410AA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A98u);  if (depth < kMaxDepth) unit_00D1(c, 20u, depth + 1u); else { c.pc = 0x00444190u; return; } if (c.pc != 0x00410A98u) [[unlikely]] return; }
L_00410A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AA0u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 9u, depth + 1u); else { c.pc = 0x00444090u; return; } if (c.pc != 0x00410AA0u) [[unlikely]] return; }
L_00410AA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_00410AA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00410ABC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AB8u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 178u, depth + 1u); else { c.pc = 0x004D19D0u; return; } if (c.pc != 0x00410AB8u) [[unlikely]] return; }
L_00410AB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00410ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x00410AC4u) [[unlikely]] return; }
L_00410AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 616u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 620u)));
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 28;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00410B5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B58u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x00410B58u) [[unlikely]] return; }
L_00410B58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00410B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B64u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 119u, depth + 1u); else { c.pc = 0x00410C70u; return; } if (c.pc != 0x00410B64u) [[unlikely]] return; }
L_00410B64:
    set32(c.r[3], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00410BCC; } }
L_00410B7C:
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] << 4);  if (t) { goto L_00410BBC; } }
L_00410B8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00410BBC; }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_00410BBC:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410B8Cu | kUnwind; return; } goto L_00410B8C; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00410BCC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410B7Cu | kUnwind; return; } goto L_00410B7C; }
    set32(c.r[4], c.r[9].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[4].w[0] << 4);  if (t) { goto L_00410C20; } }
L_00410BEC:
    set32(c.r[4], c.r[8].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00410C14; }
    set32(c.r[4], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st8((c.r[6].w[0] + 40u), static_cast<std::uint8_t>(0u));  goto L_00410C14; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00410C14:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 48u);
    c.budget -= 3;
L_00410C20:
    set32(c.r[6], ld32((c.r[17].w[0] + 640u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[17].w[0] + 644u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00410BECu | kUnwind; return; } goto L_00410BEC; }
    set32(c.r[3], c.r[16].w[0] - 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00410C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 616u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 620u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CA0u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BA(c, 240u, depth + 1u); else { c.pc = 0x003E9BC0u; return; } if (c.pc != 0x00410CA0u) [[unlikely]] return; }
L_00410CA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 616u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x00410CB0u) [[unlikely]] return; }
L_00410CB0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00410CD0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x00410CC8u) [[unlikely]] return; }
L_00410CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));  if (t) { goto L_00410CDC; } }
L_00410CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x00410CD8u) [[unlikely]] return; }
L_00410CD8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 1;
L_00410CDC:
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 28u);  if (t) { goto L_00410CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00410CFC; } }
L_00410CF8:
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00410CFC:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00410D08u) [[unlikely]] return; }
L_00410D08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D18u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00410D18u) [[unlikely]] return; }
L_00410D18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00410D28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), 0u);  if (t) { goto L_00410D64; } }
L_00410D28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D34u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00410D34u) [[unlikely]] return; }
L_00410D34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00410D48; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00410D64; } }
L_00410D48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D54u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00410D54u) [[unlikely]] return; }
L_00410D54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_00410D68; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00410D64:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00410D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 7564u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 616u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D9Cu); st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00410D9Cu) [[unlikely]] return; }
L_00410D9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_00410DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00410DB8; } }
L_00410DB4:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00410DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410DC0u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 268u, depth + 1u); else { c.pc = 0x0046FC50u; return; } if (c.pc != 0x00410DC0u) [[unlikely]] return; }
L_00410DC0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_00410DD4; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00410DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410DDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 311u, depth + 1u); else { c.pc = 0x0040AC40u; return; } if (c.pc != 0x00410DDCu) [[unlikely]] return; }
L_00410DDC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410DE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00410DE8u) [[unlikely]] return; }
L_00410DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00410E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00410E18u) [[unlikely]] return; }
L_00410E18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E28u); set32(c.r[5], c.r[5].w[0] + 9228u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00410E28u) [[unlikely]] return; }
L_00410E28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00410E38u) [[unlikely]] return; }
L_00410E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_00410E60; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00410E5C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00410E5Cu) [[unlikely]] return; }
L_00410E5C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 1;
L_00410E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410E70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00410E90u) [[unlikely]] return; }
L_00410E90:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9259u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00410EA4u) [[unlikely]] return; }
L_00410EA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00410EB4u) [[unlikely]] return; }
L_00410EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410ED8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00410ED8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410ED8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00410ED8u) [[unlikely]] return; }
L_00410ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EECu); set32(c.r[5], c.r[5].w[0] + 9273u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00410EECu) [[unlikely]] return; }
L_00410EEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410EFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00410EFCu) [[unlikely]] return; }
L_00410EFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00410F24; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00410F20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00410F20u) [[unlikely]] return; }
L_00410F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00410F24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F34u); set32(c.r[5], c.r[5].w[0] + 9294u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00410F34u) [[unlikely]] return; }
L_00410F34:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00410F44u) [[unlikely]] return; }
L_00410F44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 68u)));  goto L_00410F6C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00410F68; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00410F68u) [[unlikely]] return; }
L_00410F68:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_00410F6C:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410F7C; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00410F7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00410F8C; }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00410F8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00410FA0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410FD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00410FD0u) [[unlikely]] return; }
L_00410FD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[20], c.r[16].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] + 9259u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410FE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00410FE8u) [[unlikely]] return; }
L_00410FE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410FF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00410FF8u) [[unlikely]] return; }
L_00410FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041101C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0041101C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041101Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0041101Cu) [[unlikely]] return; }
L_0041101C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[19], ld32((c.r[29].w[0] + 184u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411030u); set32(c.r[5], c.r[5].w[0] + 9273u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00411030u) [[unlikely]] return; }
L_00411030:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411040u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00411040u) [[unlikely]] return; }
L_00411040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00411064; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00411064; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411064u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00411064u) [[unlikely]] return; }
L_00411064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411078u); set32(c.r[5], c.r[5].w[0] + 9294u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00411078u) [[unlikely]] return; }
L_00411078:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411088u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00411088u) [[unlikely]] return; }
L_00411088:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_004110B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004110AC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110ACu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004110ACu) [[unlikely]] return; }
L_004110AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_004110B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9307u);
    st32((c.r[17].w[0] + 616u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 620u), c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110CCu); st32((c.r[17].w[0] + 624u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004110CCu) [[unlikely]] return; }
L_004110CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110D8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004110D8u) [[unlikely]] return; }
L_004110D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110E8u); set32(c.r[5], c.r[5].w[0] + 9317u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004110E8u) [[unlikely]] return; }
L_004110E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 628u), 0u);  goto L_004110F8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 628u), c.r[2].w[0]);
    c.budget -= 2;
L_004110F8:
    set32(c.r[20], ld32((c.r[16].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + 332u);  if (t) { goto L_004111F8; } }
L_00411104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 25040u);
    set32(c.r[5], c.r[18].w[0] + 8u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411138u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00411138u) [[unlikely]] return; }
L_00411138:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 632u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 40u));
    st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 640u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411190u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 456u, depth + 1u); else { c.pc = 0x00413C60u; return; } if (c.pc != 0x00411190u) [[unlikely]] return; }
L_00411190:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004111C8; } }
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_004111C0; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004111C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x004111C8u) [[unlikely]] return; }
L_004111C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111E0u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004111E0u) [[unlikely]] return; }
L_004111E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x004111ECu) [[unlikely]] return; }
L_004111EC:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004111F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00411104u | kUnwind; return; } goto L_00411104; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041122Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 354u, depth + 1u); else { c.pc = 0x0043B810u; return; } if (c.pc != 0x0041122Cu) [[unlikely]] return; }
L_0041122C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00411238u) [[unlikely]] return; }
L_00411238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00411260:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 9ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00411270:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041128Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0041128Cu) [[unlikely]] return; }
L_0041128C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], c.r[17].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] + 9259u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112A4u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004112A4u) [[unlikely]] return; }
L_004112A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004112E4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 9259u);
    set32(c.r[6], c.r[28].w[0] - 30296u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112C4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x004112C4u) [[unlikely]] return; }
L_004112C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112D0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004112D0u) [[unlikely]] return; }
L_004112D0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004112DCu) [[unlikely]] return; }
L_004112DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004112F0; } }
L_004112E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004112F0u); set32(c.r[6], c.r[28].w[0] - 30296u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x004112F0u) [[unlikely]] return; }
L_004112F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411300u); set32(c.r[5], c.r[5].w[0] + 9273u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00411300u) [[unlikely]] return; }
L_00411300:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411340; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 9273u);
    set32(c.r[6], c.r[28].w[0] - 30292u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411320u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x00411320u) [[unlikely]] return; }
L_00411320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041132Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0041132Cu) [[unlikely]] return; }
L_0041132C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00411338u) [[unlikely]] return; }
L_00411338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041134C; } }
L_00411340:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041134Cu); set32(c.r[6], c.r[28].w[0] - 30292u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x0041134Cu) [[unlikely]] return; }
L_0041134C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041135Cu); set32(c.r[5], c.r[5].w[0] + 9294u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0041135Cu) [[unlikely]] return; }
L_0041135C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0041139C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 9294u);
    set32(c.r[6], c.r[28].w[0] - 30288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041137Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x0041137Cu) [[unlikely]] return; }
L_0041137C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411388u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00411388u) [[unlikely]] return; }
L_00411388:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411394u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00411394u) [[unlikely]] return; }
L_00411394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004113A8; } }
L_0041139C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113A8u); set32(c.r[6], c.r[28].w[0] - 30288u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x004113A8u) [[unlikely]] return; }
L_004113A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113B8u); set32(c.r[5], c.r[5].w[0] + 9307u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004113B8u) [[unlikely]] return; }
L_004113B8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004113FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 9307u);
    set32(c.r[6], c.r[6].w[0] + 9648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113DCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 201u, depth + 1u); else { c.pc = 0x00411580u; return; } if (c.pc != 0x004113DCu) [[unlikely]] return; }
L_004113DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113E8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004113E8u) [[unlikely]] return; }
L_004113E8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004113F4u) [[unlikely]] return; }
L_004113F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 344u)));  if (t) { goto L_00411410; } }
L_004113FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041140Cu); set32(c.r[6], c.r[6].w[0] + 9648u);  if (depth < kMaxDepth) unit_00C4(c, 195u, depth + 1u); else { c.pc = 0x004114A0u; return; } if (c.pc != 0x0041140Cu) [[unlikely]] return; }
L_0041140C:
    set32(c.r[4], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 1;
L_00411410:
    set32(c.r[16], c.r[17].w[0] + 332u);
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    st32((c.r[29].w[0] + 188u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { goto L_00411464; } }
L_0041143C:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 180u)));  goto L_0041145C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411458u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411458u) [[unlikely]] return; }
L_00411458:
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 1;
L_0041145C:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 2;
L_00411464:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 180u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041143Cu | kUnwind; return; } goto L_0041143C; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004114A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 512u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004114D8u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004114D8u) [[unlikely]] return; }
L_004114D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_0041150C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_0041150C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411504u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00411504u) [[unlikely]] return; }
L_00411504:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0041150C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00411550; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_00411538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411534u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00411534u) [[unlikely]] return; }
L_00411534:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00411538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411540u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00411540u) [[unlikely]] return; }
L_00411540:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_00411550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411558u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00411558u) [[unlikely]] return; }
L_00411558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00411580:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004115B0u) [[unlikely]] return; }
L_004115B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 512u);
    st32((c.r[20].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115D8u); st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004115D8u) [[unlikely]] return; }
L_004115D8:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_0041160C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 4u)));  goto L_0041160C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411604u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00411604u) [[unlikely]] return; }
L_00411604:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0041160C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_00411650; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_00411638; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411634u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00411634u) [[unlikely]] return; }
L_00411634:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_00411638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411640u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00411640u) [[unlikely]] return; }
L_00411640:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_00411650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411658u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00411658u) [[unlikely]] return; }
L_00411658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041167Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041167Cu) [[unlikely]] return; }
L_0041167C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004116A0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004116C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x004116C8u) [[unlikely]] return; }
L_004116C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 628u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[17].w[0] + 28u);  if (t) { goto L_00411744; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004116E8u); set32(c.r[5], c.r[5].w[0] + 9307u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004116E8u) [[unlikely]] return; }
L_004116E8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0041172C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 9307u);
    set32(c.r[6], c.r[6].w[0] + 9648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041170Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 201u, depth + 1u); else { c.pc = 0x00411580u; return; } if (c.pc != 0x0041170Cu) [[unlikely]] return; }
L_0041170C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411718u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00411718u) [[unlikely]] return; }
L_00411718:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411724u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00411724u) [[unlikely]] return; }
L_00411724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004117A8; } }
L_0041172C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041173Cu); set32(c.r[6], c.r[6].w[0] + 9648u);  if (depth < kMaxDepth) unit_00C4(c, 195u, depth + 1u); else { c.pc = 0x004114A0u; return; } if (c.pc != 0x0041173Cu) [[unlikely]] return; }
L_0041173C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004117A8; } }
L_00411744:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411754u); set32(c.r[5], c.r[5].w[0] + 9307u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00411754u) [[unlikely]] return; }
L_00411754:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00411798; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] + 9307u);
    set32(c.r[6], c.r[6].w[0] + 9660u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411778u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 201u, depth + 1u); else { c.pc = 0x00411580u; return; } if (c.pc != 0x00411778u) [[unlikely]] return; }
L_00411778:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411784u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00411784u) [[unlikely]] return; }
L_00411784:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411790u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00411790u) [[unlikely]] return; }
L_00411790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004117A8; } }
L_00411798:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117A8u); set32(c.r[6], c.r[6].w[0] + 9660u);  if (depth < kMaxDepth) unit_00C4(c, 195u, depth + 1u); else { c.pc = 0x004114A0u; return; } if (c.pc != 0x004117A8u) [[unlikely]] return; }
L_004117A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117B8u); set32(c.r[5], c.r[5].w[0] + 9259u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004117B8u) [[unlikely]] return; }
L_004117B8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004117F8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 9259u);
    set32(c.r[6], c.r[16].w[0] + 616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117D8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x004117D8u) [[unlikely]] return; }
L_004117D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117E4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004117E4u) [[unlikely]] return; }
L_004117E4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004117F0u) [[unlikely]] return; }
L_004117F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00411804; } }
L_004117F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411804u); set32(c.r[6], c.r[16].w[0] + 616u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x00411804u) [[unlikely]] return; }
L_00411804:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411814u); set32(c.r[5], c.r[5].w[0] + 9273u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00411814u) [[unlikely]] return; }
L_00411814:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00411854; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 9273u);
    set32(c.r[6], c.r[16].w[0] + 620u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411834u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x00411834u) [[unlikely]] return; }
L_00411834:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411840u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00411840u) [[unlikely]] return; }
L_00411840:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041184Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0041184Cu) [[unlikely]] return; }
L_0041184C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 624u)));  if (t) { goto L_00411864; } }
L_00411854:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411860u); set32(c.r[6], c.r[16].w[0] + 620u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x00411860u) [[unlikely]] return; }
L_00411860:
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 1;
L_00411864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 9294u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041187Cu); st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0041187Cu) [[unlikely]] return; }
L_0041187C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004118BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 9294u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041189Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 9u, depth + 1u); else { c.pc = 0x004100B0u; return; } if (c.pc != 0x0041189Cu) [[unlikely]] return; }
L_0041189C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118A8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004118A8u) [[unlikely]] return; }
L_004118A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004118B4u) [[unlikely]] return; }
L_004118B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  if (t) { goto L_004118CC; } }
L_004118BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118C8u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00C4(c, 6u, depth + 1u); else { c.pc = 0x00410040u; return; } if (c.pc != 0x004118C8u) [[unlikely]] return; }
L_004118C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 1;
L_004118CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 9228u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118E8u); st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004118E8u) [[unlikely]] return; }
L_004118E8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00411928; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 9228u);
    set32(c.r[6], c.r[29].w[0] + 287u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411908u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C4(c, 248u, depth + 1u); else { c.pc = 0x00411B00u; return; } if (c.pc != 0x00411908u) [[unlikely]] return; }
L_00411908:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411914u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00411914u) [[unlikely]] return; }
L_00411914:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411920u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00411920u) [[unlikely]] return; }
L_00411920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 640u)));  if (t) { goto L_00411938; } }
L_00411928:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411934u); set32(c.r[6], c.r[29].w[0] + 287u);  if (depth < kMaxDepth) unit_00C4(c, 246u, depth + 1u); else { c.pc = 0x00411A90u; return; } if (c.pc != 0x00411934u) [[unlikely]] return; }
L_00411934:
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 1;
L_00411938:
    set32(c.r[18], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  goto L_00411A5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[17].w[0] + 332u);  if (t) { goto L_00411A24; } }
L_00411968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411970u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00411970u) [[unlikely]] return; }
L_00411970:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 276u), c.r[17].w[0]);  goto L_004119F8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    c.r[4].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] - 25632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[4].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004119BCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004119BCu) [[unlikely]] return; }
L_004119BC:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 40u));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[17].w[0]);
    c.budget -= 15;
L_004119F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 276u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A18u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00411A18u) [[unlikely]] return; }
L_00411A18:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 48u);
    c.budget -= 3;
L_00411A24:
    set32(c.r[5], ld32((c.r[16].w[0] + 640u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00411968u | kUnwind; return; } goto L_00411968; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 1;
L_00411A5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 9329u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 434u, depth + 1u); else { c.pc = 0x0043F8D0u; return; } if (c.pc != 0x00411A70u) [[unlikely]] return; }
L_00411A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00411A90:
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
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_00411ADC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411AD0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00411AD0u) [[unlikely]] return; }
L_00411AD0:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_00411ADC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00411B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B28u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00411B28u) [[unlikely]] return; }
L_00411B28:
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
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_00411B6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00411B60u) [[unlikely]] return; }
L_00411B60:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_00411B6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411B94u) [[unlikely]] return; }
L_00411B94:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00411BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00411BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BCCu);  if (depth < kMaxDepth) unit_00C4(c, 148u, depth + 1u); else { c.pc = 0x00410FA0u; return; } if (c.pc != 0x00411BCCu) [[unlikely]] return; }
L_00411BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00411C14; } }
L_00411BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BDCu);  if (depth < kMaxDepth) unit_00C4(c, 171u, depth + 1u); else { c.pc = 0x00411270u; return; } if (c.pc != 0x00411BDCu) [[unlikely]] return; }
L_00411BDC:
    st32((c.r[16].w[0] + 628u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BE8u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 140u, depth + 1u); else { c.pc = 0x003CD300u; return; } if (c.pc != 0x00411BE8u) [[unlikely]] return; }
L_00411BE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 112u)));  goto L_00411C04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C00u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 145u, depth + 1u); else { c.pc = 0x003CD3D0u; return; } if (c.pc != 0x00411C00u) [[unlikely]] return; }
L_00411C00:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_00411C04:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 616u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 624u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00411C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C1Cu);  if (depth < kMaxDepth) unit_00C4(c, 119u, depth + 1u); else { c.pc = 0x00410C70u; return; } if (c.pc != 0x00411C1Cu) [[unlikely]] return; }
L_00411C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00411C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00411CC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24848u);
    set32(c.r[2], c.r[2].w[0] + 24880u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C6Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 25u, depth + 1u); else { c.pc = 0x00444200u; return; } if (c.pc != 0x00411C6Cu) [[unlikely]] return; }
L_00411C6C:
    set32(c.r[4], c.r[17].w[0] + 648u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BD(c, 380u, depth + 1u); else { c.pc = 0x003F74D0u; return; } if (c.pc != 0x00411C78u) [[unlikely]] return; }
L_00411C78:
    set32(c.r[4], c.r[17].w[0] + 632u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411CA0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00411C9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00411C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 24u, depth + 1u); else { c.pc = 0x004144C0u; return; } if (c.pc != 0x00411C9Cu) [[unlikely]] return; }
L_00411C9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 23u, depth + 1u); else { c.pc = 0x0040C280u; return; } if (c.pc != 0x00411CA8u) [[unlikely]] return; }
L_00411CA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00411CC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00411CC0u) [[unlikely]] return; }
L_00411CC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00411CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00411CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C3(c, 41u, depth + 1u); else { c.pc = 0x0040C530u; return; } if (c.pc != 0x00411D08u) [[unlikely]] return; }
L_00411D08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24848u);
    set32(c.r[2], c.r[2].w[0] + 24880u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[19].w[0] + 632u);  if (t) { goto L_00411D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00411D34u) [[unlikely]] return; }
L_00411D34:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00411D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D4Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00411D4Cu) [[unlikely]] return; }
L_00411D4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00411D54:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_00411D6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D64u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00411D64u) [[unlikely]] return; }
L_00411D64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00411D68:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00411D6C:
    set32(c.r[4], c.r[19].w[0] + 648u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D84u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 385u, depth + 1u); else { c.pc = 0x003F7570u; return; } if (c.pc != 0x00411D84u) [[unlikely]] return; }
L_00411D84:
    st32((c.r[19].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D98u); st8((c.r[19].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x00411D98u) [[unlikely]] return; }
L_00411D98:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[19].w[0] + 616u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 620u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 624u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 628u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 100u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00411DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00411DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00411E0C; } }
L_00411DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E04u);  if (depth < kMaxDepth) unit_00C3(c, 93u, depth + 1u); else { c.pc = 0x0040CB10u; return; } if (c.pc != 0x00411E04u) [[unlikely]] return; }
L_00411E04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00411E0C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00411E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E44u); set32(c.r[4], c.r[4].w[0] + 7632u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00411E44u) [[unlikely]] return; }
L_00411E44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00411E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00411E64; } }
L_00411E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 94u, depth + 1u); else { c.pc = 0x0040CB30u; return; } if (c.pc != 0x00411E5Cu) [[unlikely]] return; }
L_00411E5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00411E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00411E80:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00411E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00411EAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00411EB4; } }
L_00411EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EB4u);  if (depth < kMaxDepth) unit_00C3(c, 97u, depth + 1u); else { c.pc = 0x0040CB80u; return; } if (c.pc != 0x00411EB4u) [[unlikely]] return; }
L_00411EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00411EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));  c.pc = t; return; }
L_00411ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00411EE8u) [[unlikely]] return; }
L_00411EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00411F0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x00411EF8u) [[unlikely]] return; }
L_00411EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00411F0Cu) [[unlikely]] return; }
L_00411F0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00411F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22320u);
    set32(c.r[5], c.r[5].w[0] + 9337u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00411F48u) [[unlikely]] return; }
L_00411F48:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9367u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 9380u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F74u); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00411F74u) [[unlikely]] return; }
L_00411F74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9388u);
    set32(c.r[6], c.r[6].w[0] + 9395u);
    set32(c.r[7], 0u + 24u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F9Cu); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00411F9Cu) [[unlikely]] return; }
L_00411F9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9399u);
    set32(c.r[6], c.r[6].w[0] + 9395u);
    set32(c.r[7], 0u + 28u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FC4u); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00411FC4u) [[unlikely]] return; }
L_00411FC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9415u);
    set32(c.r[6], c.r[6].w[0] + 9395u);
    set32(c.r[7], 0u + 32u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411FECu); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00411FECu) [[unlikely]] return; }
L_00411FEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9427u);
    set32(c.r[6], c.r[6].w[0] + 9435u);
    set32(c.r[7], 0u + 36u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412014u); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00412014u) [[unlikely]] return; }
L_00412014:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9441u);
    set32(c.r[6], c.r[6].w[0] + 9457u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041203Cu); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0041203Cu) [[unlikely]] return; }
L_0041203C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9462u);
    set32(c.r[6], c.r[6].w[0] + 9395u);
    set32(c.r[7], 0u + 44u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412064u); set32(c.r[9], c.r[9].w[0] + 9387u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00412064u) [[unlikely]] return; }
L_00412064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00412080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0041209C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004120AC; } }
L_0041209C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120A4u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x004120A4u) [[unlikely]] return; }
L_004120A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004120AC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004120C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120E4u); set32(c.r[4], c.r[4].w[0] - 22320u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004120E4u) [[unlikely]] return; }
L_004120E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004120F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00412104; } }
L_004120F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x004120FCu) [[unlikely]] return; }
L_004120FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00412104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00412120:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00412130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0041214C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00412154; } }
L_0041214C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412154u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x00412154u) [[unlikely]] return; }
L_00412154:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00412160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));  c.pc = t; return; }
L_00412170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004121E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25008u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004121C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004121C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004121C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004121C8u) [[unlikely]] return; }
L_004121C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004121E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004121E0u) [[unlikely]] return; }
L_004121E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004121E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00412200:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00412228; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00412220; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00412220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041222C; } }
L_00412228:
    set32(c.r[2], c.r[2].w[0] + 7704u);
    c.budget -= 1;
L_0041222C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00412240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 7712u);  c.pc = t; return; }
L_00412250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 7744u);  c.pc = t; return; }
L_00412260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004122A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041229Cu); set32(c.r[5], c.r[5].w[0] + 9471u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0041229Cu) [[unlikely]] return; }
L_0041229C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004122A4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004122A4u) [[unlikely]] return; }
L_004122A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004122D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
L_00412300:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], 0u + 48u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00412804; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  goto L_00412348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412340u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 65u, depth + 1u); else { c.pc = 0x00414A10u; return; } if (c.pc != 0x00412340u) [[unlikely]] return; }
L_00412340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00412800; } }
L_00412348:
    c.budget -= 2;
    if (c.r[8].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] << 32;  goto L_0041235C; }
    set32(c.r[2], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_0041235C:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00412394; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_00412394:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004123B4; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004123B4:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004123FC; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 30268u), c.r[4].w[0]);
    c.budget -= 2;
L_004123FC:
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    set32(c.r[19], c.r[2].w[0] - 48u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412424u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 29u, depth + 1u); else { c.pc = 0x00414580u; return; } if (c.pc != 0x00412424u) [[unlikely]] return; }
L_00412424:
    c.r[17].d[0] = c.r[16].d[0] << 32;
    c.r[18].d[0] = c.r[19].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  if (t) { goto L_00412448; } }
L_0041243C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[17].w[0]);
    c.budget -= 3;
L_00412448:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041245Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041245Cu) [[unlikely]] return; }
L_0041245C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041243Cu | kUnwind; return; } goto L_0041243C; }
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412468:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_004124B0; }
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041249Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041249Cu) [[unlikely]] return; }
L_0041249C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412468u | kUnwind; return; } goto L_00412468; }
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004124B0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] << 32;  goto L_004125C0; }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124DCu); st32((c.r[29].w[0] + 196u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x004124DCu) [[unlikely]] return; }
L_004124DC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124E8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x004124E8u) [[unlikely]] return; }
L_004124E8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004124F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x004124F4u) [[unlikely]] return; }
L_004124F4:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  if (t) { goto L_00412514; } }
L_00412508:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[17].w[0]);
    c.budget -= 3;
L_00412514:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412528u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412528u) [[unlikely]] return; }
L_00412528:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412508u | kUnwind; return; } goto L_00412508; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412534:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] - 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041254Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041254Cu) [[unlikely]] return; }
L_0041254C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412534u | kUnwind; return; } goto L_00412534; }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004125BC; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412590u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412590u) [[unlikely]] return; }
L_00412590:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041259Cu); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x0041259Cu) [[unlikely]] return; }
L_0041259C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004125A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x004125A8u) [[unlikely]] return; }
L_004125A8:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412514u | kUnwind; return; } goto L_00412514; } }
L_004125BC:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004125C0:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);  goto L_004127A8; }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004125F0u); st32((c.r[29].w[0] + 180u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x004125F0u) [[unlikely]] return; }
L_004125F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004125FCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x004125FCu) [[unlikely]] return; }
L_004125FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412608u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412608u) [[unlikely]] return; }
L_00412608:
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] - 48u);
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[17], c.r[3].w[0] + 48u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412634u); st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412634u) [[unlikely]] return; }
L_00412634:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] << 32;  goto L_004126C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] << 32;  if (t) { goto L_00412654; } }
L_00412644:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.budget -= 4;
L_00412654:
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] << 32;  goto L_00412680; }
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412674u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412674u) [[unlikely]] return; }
L_00412674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412644u | kUnwind; return; } goto L_00412644; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_00412680:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004126C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004126ACu); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x004126ACu) [[unlikely]] return; }
L_004126AC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004126B8u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x004126B8u) [[unlikely]] return; }
L_004126B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004126C4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x004126C4u) [[unlikely]] return; }
L_004126C4:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004126C8:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] << 32;  goto L_004127A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] << 32;  if (t) { goto L_004126F8; } }
L_004126E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[17].w[0]);
    c.budget -= 3;
L_004126F4:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_004126F8:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412708u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412708u) [[unlikely]] return; }
L_00412708:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004126E8u | kUnwind; return; } goto L_004126E8; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0041271C:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] - 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412734u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412734u) [[unlikely]] return; }
L_00412734:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041271Cu | kUnwind; return; } goto L_0041271C; }
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041279C; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412770u); st32((c.r[29].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412770u) [[unlikely]] return; }
L_00412770:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041277Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x0041277Cu) [[unlikely]] return; }
L_0041277C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412788u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412788u) [[unlikely]] return; }
L_00412788:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004126F4u | kUnwind; return; } goto L_004126F4; } }
L_0041279C:
    c.r[16].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004127A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412300u | kUnwind; return; } goto L_00412300; } }
L_004127A8:
    set32(c.r[7], 0u + 48u);
    mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    mmi::div(c, 1, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_004127E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004127DCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 311u, depth + 1u); else { c.pc = 0x004122D0u; return; } if (c.pc != 0x004127DCu) [[unlikely]] return; }
L_004127DC:
    c.r[16].d[0] = c.r[17].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412300u | kUnwind; return; } goto L_00412300; } }
L_004127E8:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004127F4u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 311u, depth + 1u); else { c.pc = 0x004122D0u; return; } if (c.pc != 0x004127F4u) [[unlikely]] return; }
L_004127F4:
    c.r[21].d[0] = c.r[17].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412300u | kUnwind; return; } goto L_00412300; } }
L_00412800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00412804:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00412830:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 25632u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 8u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041287Cu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0041287Cu) [[unlikely]] return; }
L_0041287C:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 40u));
    st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 9u);  goto L_004128C8; }
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_004128C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 8u));  goto L_004128E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_004128E8; } }
L_004128E0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004128E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004128F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004128F0u) [[unlikely]] return; }
L_004128F0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 140u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041290Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0041290Cu) [[unlikely]] return; }
L_0041290C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 40u));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 89u);  goto L_00412958; }
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_00412958:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));  goto L_00412970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00412978; } }
L_00412970:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00412978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00412980u) [[unlikely]] return; }
L_00412980:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 136u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041299Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0041299Cu) [[unlikely]] return; }
L_0041299C:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 120u));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00412A00; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004129FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004129FCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004129FCu) [[unlikely]] return; }
L_004129FC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00412A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412A08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x00412A08u) [[unlikely]] return; }
L_00412A08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00412A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00412A40:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
L_00412A70:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], 0u + 48u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00412F40; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  goto L_00412ABC; }
    c.r[6].d[0] = c.r[21].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412AB4u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00C5(c, 59u, depth + 1u); else { c.pc = 0x004148A0u; return; } if (c.pc != 0x00412AB4u) [[unlikely]] return; }
L_00412AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00412F3C; } }
L_00412ABC:
    c.budget -= 2;
    if (c.r[8].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] << 32;  goto L_00412AD0; }
    set32(c.r[2], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_00412AD0:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30272u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00412B08; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_00412B08:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00412B28; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00412B28:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 30272u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00412B70; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 30272u), c.r[4].w[0]);
    c.budget -= 2;
L_00412B70:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[21].d[0] << 56;
    set32(c.r[20], c.r[2].w[0] - 48u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B9Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 45u, depth + 1u); else { c.pc = 0x00414730u; return; } if (c.pc != 0x00412B9Cu) [[unlikely]] return; }
L_00412B9C:
    c.r[19].d[0] = c.r[20].d[0] << 32;
    c.r[18].d[0] = c.r[16].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[18].w[0]);  if (t) { goto L_00412BC4; } }
L_00412BB8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[18].w[0]);
    c.budget -= 3;
L_00412BC4:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412BB8u | kUnwind; return; } goto L_00412BB8; }
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_00412BE0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] - 48u);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_00412C10; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412BE0u | kUnwind; return; } goto L_00412BE0; }
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412C10:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_00412D10; }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C3Cu); st32((c.r[29].w[0] + 196u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412C3Cu) [[unlikely]] return; }
L_00412C3C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C48u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412C48u) [[unlikely]] return; }
L_00412C48:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412C54u) [[unlikely]] return; }
L_00412C54:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[18].w[0]);  if (t) { goto L_00412C74; } }
L_00412C68:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[18].w[0]);
    c.budget -= 3;
L_00412C74:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412C68u | kUnwind; return; } goto L_00412C68; }
L_00412C98:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] - 48u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412C98u | kUnwind; return; } goto L_00412C98; } }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412D0C; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[4], c.r[29].w[0] + 188u);
    st32((c.r[29].w[0] + 184u), c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412CE0u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412CE0u) [[unlikely]] return; }
L_00412CE0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412CECu); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412CECu) [[unlikely]] return; }
L_00412CEC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412CF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412CF8u) [[unlikely]] return; }
L_00412CF8:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412C74u | kUnwind; return; } goto L_00412C74; } }
L_00412D0C:
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412D10:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);  goto L_00412EDC; }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D40u); st32((c.r[29].w[0] + 180u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412D40u) [[unlikely]] return; }
L_00412D40:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D4Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412D4Cu) [[unlikely]] return; }
L_00412D4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412D58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412D58u) [[unlikely]] return; }
L_00412D58:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 48u);
    set32(c.r[19], c.r[5].w[0] - 48u);
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[5].w[0] - 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 156u), c.r[18].w[0]);  if (t) { goto L_00412E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_00412DA4; } }
L_00412D94:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[18].w[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
L_00412DA4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[18].d[0] << 32;  goto L_00412DC4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412D94u | kUnwind; return; } goto L_00412D94; }
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412DC4:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] << 32;  goto L_00412E0C; }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DF0u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412DF0u) [[unlikely]] return; }
L_00412DF0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DFCu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412DFCu) [[unlikely]] return; }
L_00412DFC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E08u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412E08u) [[unlikely]] return; }
L_00412E08:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412E0C:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[18].d[0] << 32;  goto L_00412ED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] << 32;  if (t) { goto L_00412E3C; } }
L_00412E2C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 156u), c.r[18].w[0]);
    c.budget -= 3;
L_00412E38:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_00412E3C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00412E2Cu | kUnwind; return; } goto L_00412E2C; }
L_00412E5C:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] - 48u);
    set32(c.r[3], ld32((c.r[3].w[0] - 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412E5Cu | kUnwind; return; } goto L_00412E5C; } }
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00412ED0; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[4], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EA4u); st32((c.r[29].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412EA4u) [[unlikely]] return; }
L_00412EA4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EB0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00C4(c, 357u, depth + 1u); else { c.pc = 0x00412A30u; return; } if (c.pc != 0x00412EB0u) [[unlikely]] return; }
L_00412EB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 349u, depth + 1u); else { c.pc = 0x00412830u; return; } if (c.pc != 0x00412EBCu) [[unlikely]] return; }
L_00412EBC:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 48u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412E38u | kUnwind; return; } goto L_00412E38; } }
L_00412ED0:
    c.r[16].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_00412ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412A70u | kUnwind; return; } goto L_00412A70; } }
L_00412EDC:
    set32(c.r[7], 0u + 48u);
    mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    mmi::div(c, 1, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_00412F20; }
    c.r[6].d[0] = c.r[21].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F14u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00C4(c, 358u, depth + 1u); else { c.pc = 0x00412A40u; return; } if (c.pc != 0x00412F14u) [[unlikely]] return; }
L_00412F14:
    c.r[16].d[0] = c.r[18].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412A70u | kUnwind; return; } goto L_00412A70; } }
L_00412F20:
    c.r[6].d[0] = c.r[21].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F30u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 358u, depth + 1u); else { c.pc = 0x00412A40u; return; } if (c.pc != 0x00412F30u) [[unlikely]] return; }
L_00412F30:
    c.r[17].d[0] = c.r[18].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412A70u | kUnwind; return; } goto L_00412A70; } }
L_00412F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00412F40:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00412F70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 196u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[6].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00412FD0; } }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_00412FD0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004133CC; }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00413014; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413008u); set32(c.r[5], c.r[5].w[0] + 9501u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00413008u) [[unlikely]] return; }
L_00413008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413010u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00413010u) [[unlikely]] return; }
L_00413010:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00413014:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_00413210; }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[20].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00413040; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00413040:
    set32(c.r[23], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.r[1].d[0] = c.r[23].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00413110; } }
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], c.r[23].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004130A4; } }
L_00413070:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0041308C; }
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413088u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413088u) [[unlikely]] return; }
L_00413088:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0041308C:
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_004130A4:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413070u | kUnwind; return; } goto L_00413070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004130F8; } }
L_004130D0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_004130E8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004130E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004130E4u) [[unlikely]] return; }
L_004130E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_004130E8:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_004130F8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004130D0u | kUnwind; return; } goto L_004130D0; } }
    c.r[22].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);  if (t) { goto L_004131D0; } }
L_00413110:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_00413148; } }
L_00413120:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_00413138; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413134u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413134u) [[unlikely]] return; }
L_00413134:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00413138:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00413148:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413120u | kUnwind; return; } goto L_00413120; } }
    set32(c.r[2], c.r[23].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_004131C4; } }
L_00413164:
    set32(c.r[17], c.r[17].w[0] - 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413170u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 251u, depth + 1u); else { c.pc = 0x0011E530u; return; } if (c.pc != 0x00413170u) [[unlikely]] return; }
L_00413170:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041317Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 250u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x0041317Cu) [[unlikely]] return; }
L_0041317C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00413194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041318Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 248u, depth + 1u); else { c.pc = 0x0011E500u; return; } if (c.pc != 0x0041318Cu) [[unlikely]] return; }
L_0041318C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_004131A0; } }
L_00413194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041319Cu);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011E510u; return; } if (c.pc != 0x0041319Cu) [[unlikely]] return; }
L_0041319C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004131A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004131A8u) [[unlikely]] return; }
L_004131A8:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 188u)));
    set32(c.r[8], c.r[18].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x004131C4u) [[unlikely]] return; }
L_004131C4:
    c.r[1].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413164u | kUnwind; return; } goto L_00413164; }
L_004131D0:
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131ECu); st32((c.r[29].w[0] + 180u), c.f[0]);  if (depth < kMaxDepth) unit_00C4(c, 421u, depth + 1u); else { c.pc = 0x004134C0u; return; } if (c.pc != 0x004131ECu) [[unlikely]] return; }
L_004131EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131F8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00C4(c, 421u, depth + 1u); else { c.pc = 0x004134C0u; return; } if (c.pc != 0x004131F8u) [[unlikely]] return; }
L_004131F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413208u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 417u, depth + 1u); else { c.pc = 0x00413400u; return; } if (c.pc != 0x00413208u) [[unlikely]] return; }
L_00413208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004133C8; } }
L_00413210:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0041322C; }
L_0041322C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00413248; } }
L_00413234:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00413248; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00413248:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413234u | kUnwind; return; } goto L_00413234; }
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413260u); set32(c.r[4], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00413260u) [[unlikely]] return; }
L_00413260:
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_004132A8; } }
L_00413280:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_00413298; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413294u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413294u) [[unlikely]] return; }
L_00413294:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00413298:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_004132A8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413280u | kUnwind; return; } goto L_00413280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_004132F8; } }
L_004132BC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_004132D8; }
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004132D4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004132D4u) [[unlikely]] return; }
L_004132D4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_004132D8:
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 148u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 8;
L_004132F8:
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004132BCu | kUnwind; return; } goto L_004132BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0041334C; } }
L_00413320:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_00413338; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413334u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413334u) [[unlikely]] return; }
L_00413334:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00413338:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0041334C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413320u | kUnwind; return; } goto L_00413320; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004133A4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_004133A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133ACu);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x004133ACu) [[unlikely]] return; }
L_004133AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004133C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004133C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133C8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004133C8u) [[unlikely]] return; }
L_004133C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004133CC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00413400:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00413488; } }
L_0041342C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[18].w[0] + 1u);  goto L_0041343C; }
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0041343C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00413454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0041345C; } }
L_00413454:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0041345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00413464u) [[unlikely]] return; }
L_00413464:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00413480u) [[unlikely]] return; }
L_00413480:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 2;
L_00413488:
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041342Cu | kUnwind; return; } goto L_0041342C; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004134C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_004134D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004135FC; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041352Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0041352Cu) [[unlikely]] return; }
L_0041352C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_004135D8; } }
L_0041353C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_004135C0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    c.r[4].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] - 25632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[4].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 25040u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413584u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413584u) [[unlikely]] return; }
L_00413584:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 15;
L_004135C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[18], c.r[3].w[0] + 48u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_004135D8:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041353Cu | kUnwind; return; } goto L_0041353C; } }
L_004135FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00413620:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    set32(c.r[5], c.r[19].w[0] - c.r[20].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], 0u + 48u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_00413848; }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 156u);  goto L_00413688; }
    set32(c.r[3], c.r[21].w[0] + 8u);
    c.budget -= 1;
L_00413688:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[18], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_00413738; } }
L_004136A4:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[20].w[0] + 9u);  goto L_004136BC; }
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_004136BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 8u));  goto L_004136D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_004136DC; } }
L_004136D4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[22].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004136DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004136E4u) [[unlikely]] return; }
L_004136E4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 152u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00413700u) [[unlikely]] return; }
L_00413700:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 40u));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 14;
L_00413738:
    c.r[3].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004136A4u | kUnwind; return; } goto L_004136A4; }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_004137A4; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00413788; } }
L_00413774:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00413784u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00413784u) [[unlikely]] return; }
L_00413784:
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_00413788:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413774u | kUnwind; return; } goto L_00413774; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00413968; } }
L_004137A4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0041396C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00413838; } }
L_004137B4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_00413828; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 25040u);
    set32(c.r[5], c.r[20].w[0] + 8u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137F4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004137F4u) [[unlikely]] return; }
L_004137F4:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 40u));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 13;
L_00413828:
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00413838:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004137B4u | kUnwind; return; } goto L_004137B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00413968; } }
L_00413848:
    set32(c.r[17], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_00413874; } }
L_00413860:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00413874u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00413874u) [[unlikely]] return; }
L_00413874:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413860u | kUnwind; return; } goto L_00413860; }
    st32((c.r[21].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_004138AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 12u), 0u);  goto L_004138A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004138A0u) [[unlikely]] return; }
L_004138A0:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004138A4:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 2;
L_004138AC:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138C4u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004138C4u) [[unlikely]] return; }
L_004138C4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_00413960; } }
L_004138DC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_00413950; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 25040u);
    set32(c.r[5], c.r[20].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041391Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0041391Cu) [[unlikely]] return; }
L_0041391C:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 40u));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 13;
L_00413950:
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00413960:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004138DCu | kUnwind; return; } goto L_004138DC; } }
L_00413968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0041396C:
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
L_004139A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
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
    c.budget -= 15;
    { const bool t = c.r[20].d[0] != c.r[19].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004139E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00413B00; } }
L_004139E4:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] - c.r[19].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00413A08; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00413A08:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], c.r[23].w[0] << 4);  goto L_00413A90; }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00413A80; } }
L_00413A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 251u, depth + 1u); else { c.pc = 0x0011E530u; return; } if (c.pc != 0x00413A24u) [[unlikely]] return; }
L_00413A24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 250u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x00413A30u) [[unlikely]] return; }
L_00413A30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00413A48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 248u, depth + 1u); else { c.pc = 0x0011E500u; return; } if (c.pc != 0x00413A40u) [[unlikely]] return; }
L_00413A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[2].w[0])));  if (t) { goto L_00413A54; } }
L_00413A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A50u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011E510u; return; } if (c.pc != 0x00413A50u) [[unlikely]] return; }
L_00413A50:
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00413A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00413A5Cu) [[unlikely]] return; }
L_00413A5C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x00413A78u) [[unlikely]] return; }
L_00413A78:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 2;
L_00413A80:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413A1Cu | kUnwind; return; } goto L_00413A1C; } }
    set32(c.r[2], c.r[23].w[0] << 4);
    c.budget -= 1;
L_00413A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_00413AD0; } }
L_00413A98:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_00413AD0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00413ACC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413ACC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00413ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413ACCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00413ACCu) [[unlikely]] return; }
L_00413ACC:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_00413AD0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413A98u | kUnwind; return; } goto L_00413A98; } }
    set32(c.r[2], c.r[19].w[0] - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00413AF0; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00413AF0:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00413B00:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00413B30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00413C40; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[16].w[0] << 4);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B78u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00413B78u) [[unlikely]] return; }
L_00413B78:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_00413BC0; } }
L_00413B98:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_00413BB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413BACu) [[unlikely]] return; }
L_00413BAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00413BB0:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_00413BC0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413B98u | kUnwind; return; } goto L_00413B98; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00413C1C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_00413C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C24u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x00413C24u) [[unlikely]] return; }
L_00413C24:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00413C44; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00413C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C40u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00413C40u) [[unlikely]] return; }
L_00413C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00413C44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00413C60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00C5(c, 11u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_00413CDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CD0u); set32(c.r[5], c.r[5].w[0] + 9501u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00413CD0u) [[unlikely]] return; }
L_00413CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CD8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00413CD8u) [[unlikely]] return; }
L_00413CD8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_00413CDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_00413F54; }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], 0u + 48u);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[19].w[0] - c.r[22].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  goto L_00413E58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00413DAC; } }
L_00413D28:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_00413D9C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 8u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 25040u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D68u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413D68u) [[unlikely]] return; }
L_00413D68:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[21].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[21].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 13;
L_00413D9C:
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00413DAC:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413D28u | kUnwind; return; } goto L_00413D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00413E44; } }
L_00413DC0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_00413E34; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 8u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 25040u);
    set32(c.r[5], c.r[20].w[0] + 8u);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E00u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413E00u) [[unlikely]] return; }
L_00413E00:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[21].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[21].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 40u));
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 13;
L_00413E34:
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00413E44:
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413DC0u | kUnwind; return; } goto L_00413DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00413F40; } }
L_00413E58:
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[2].w[0] << 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] - c.r[30].w[0]);  if (t) { goto L_00413EF0; } }
L_00413E6C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_00413EE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 25040u);
    set32(c.r[5], c.r[21].w[0] + 8u);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413EACu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00413EACu) [[unlikely]] return; }
L_00413EAC:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));
    st8((c.r[20].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 13;
L_00413EE0:
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00413EF0:
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413E6Cu | kUnwind; return; } goto L_00413E6C; } }
    set32(c.r[3], c.r[23].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);  goto L_00413F30; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00413F2C; } }
    set32(c.r[16], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_00413F2C:
    set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00413F30:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413F3Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 17u, depth + 1u); else { c.pc = 0x00414360u; return; } if (c.pc != 0x00413F3Cu) [[unlikely]] return; }
L_00413F3C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00413F40:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413F4Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 13u, depth + 1u); else { c.pc = 0x00414270u; return; } if (c.pc != 0x00413F4Cu) [[unlikely]] return; }
L_00413F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_00C5(c, 12u, depth); } }
L_00413F54:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00413F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00413F7C; } }
L_00413F74:
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00413F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00413F9C; } }
L_00413F84:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[19].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_00413F98; }
    set32(c.r[19], c.r[19].w[0] << 1);
    c.budget -= 1;
L_00413F98:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00413F9C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00413F84u | kUnwind; return; } goto L_00413F84; }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413FB8u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00413FB8u) [[unlikely]] return; }
L_00413FB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), c.r[19].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[29].w[0] + 172u), c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] + c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00C5(c, 4u, depth); } }
L_00413FE0:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  [[clang::musttail]] return unit_00C5(c, 3u, depth); }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 6;
    [[clang::musttail]] return unit_00C5(c, 1u, depth);
}

}
