#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E9[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0,
    0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0,
    193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0,
    229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0,
    0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257,
    0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0,
    0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284,
    0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0,
    0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403,
    0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0,
    0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0,
    476, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0,
    0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490,
    0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505,
    0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 510,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00E9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004A4000;
    case 2u: goto L_004A4020;
    case 3u: goto L_004A4054;
    case 4u: goto L_004A4060;
    case 5u: goto L_004A4078;
    case 6u: goto L_004A4084;
    case 7u: goto L_004A40BC;
    case 8u: goto L_004A4120;
    case 9u: goto L_004A4148;
    case 10u: goto L_004A4160;
    case 11u: goto L_004A416C;
    case 12u: goto L_004A4188;
    case 13u: goto L_004A41A0;
    case 14u: goto L_004A41B8;
    case 15u: goto L_004A41D0;
    case 16u: goto L_004A41DC;
    case 17u: goto L_004A41E8;
    case 18u: goto L_004A41F4;
    case 19u: goto L_004A4210;
    case 20u: goto L_004A4240;
    case 21u: goto L_004A42A8;
    case 22u: goto L_004A42C4;
    case 23u: goto L_004A42E0;
    case 24u: goto L_004A42FC;
    case 25u: goto L_004A4318;
    case 26u: goto L_004A4334;
    case 27u: goto L_004A4350;
    case 28u: goto L_004A436C;
    case 29u: goto L_004A4388;
    case 30u: goto L_004A43A4;
    case 31u: goto L_004A43C0;
    case 32u: goto L_004A43E0;
    case 33u: goto L_004A4400;
    case 34u: goto L_004A4444;
    case 35u: goto L_004A4480;
    case 36u: goto L_004A44BC;
    case 37u: goto L_004A4530;
    case 38u: goto L_004A4588;
    case 39u: goto L_004A45A4;
    case 40u: goto L_004A45BC;
    case 41u: goto L_004A45CC;
    case 42u: goto L_004A45DC;
    case 43u: goto L_004A45F4;
    case 44u: goto L_004A45FC;
    case 45u: goto L_004A4614;
    case 46u: goto L_004A4634;
    case 47u: goto L_004A4648;
    case 48u: goto L_004A465C;
    case 49u: goto L_004A4668;
    case 50u: goto L_004A4680;
    case 51u: goto L_004A46BC;
    case 52u: goto L_004A46E0;
    case 53u: goto L_004A4718;
    case 54u: goto L_004A472C;
    case 55u: goto L_004A4740;
    case 56u: goto L_004A4760;
    case 57u: goto L_004A476C;
    case 58u: goto L_004A4774;
    case 59u: goto L_004A477C;
    case 60u: goto L_004A4790;
    case 61u: goto L_004A47C0;
    case 62u: goto L_004A47DC;
    case 63u: goto L_004A47F0;
    case 64u: goto L_004A4894;
    case 65u: goto L_004A48A4;
    case 66u: goto L_004A48B4;
    case 67u: goto L_004A48C0;
    case 68u: goto L_004A48E0;
    case 69u: goto L_004A4920;
    case 70u: goto L_004A4934;
    case 71u: goto L_004A494C;
    case 72u: goto L_004A495C;
    case 73u: goto L_004A4974;
    case 74u: goto L_004A4990;
    case 75u: goto L_004A49B0;
    case 76u: goto L_004A49D0;
    case 77u: goto L_004A4A1C;
    case 78u: goto L_004A4A40;
    case 79u: goto L_004A4A58;
    case 80u: goto L_004A4A78;
    case 81u: goto L_004A4AC4;
    case 82u: goto L_004A4AE8;
    case 83u: goto L_004A4B00;
    case 84u: goto L_004A4B20;
    case 85u: goto L_004A4B6C;
    case 86u: goto L_004A4B90;
    case 87u: goto L_004A4BB0;
    case 88u: goto L_004A4BF8;
    case 89u: goto L_004A4C10;
    case 90u: goto L_004A4C30;
    case 91u: goto L_004A4C64;
    case 92u: goto L_004A4CAC;
    case 93u: goto L_004A4D00;
    case 94u: goto L_004A4D10;
    case 95u: goto L_004A4D58;
    case 96u: goto L_004A4D74;
    case 97u: goto L_004A4D84;
    case 98u: goto L_004A4DA0;
    case 99u: goto L_004A4DAC;
    case 100u: goto L_004A4DB8;
    case 101u: goto L_004A4DD8;
    case 102u: goto L_004A4E00;
    case 103u: goto L_004A4E48;
    case 104u: goto L_004A4E60;
    case 105u: goto L_004A4E84;
    case 106u: goto L_004A4EA8;
    case 107u: goto L_004A4EC0;
    case 108u: goto L_004A4EE0;
    case 109u: goto L_004A4F0C;
    case 110u: goto L_004A4F24;
    case 111u: goto L_004A4F40;
    case 112u: goto L_004A4F64;
    case 113u: goto L_004A4FA4;
    case 114u: goto L_004A4FB8;
    case 115u: goto L_004A4FCC;
    case 116u: goto L_004A5004;
    case 117u: goto L_004A500C;
    case 118u: goto L_004A5020;
    case 119u: goto L_004A502C;
    case 120u: goto L_004A5038;
    case 121u: goto L_004A5050;
    case 122u: goto L_004A5064;
    case 123u: goto L_004A507C;
    case 124u: goto L_004A5090;
    case 125u: goto L_004A509C;
    case 126u: goto L_004A50B0;
    case 127u: goto L_004A50BC;
    case 128u: goto L_004A50C8;
    case 129u: goto L_004A50DC;
    case 130u: goto L_004A50FC;
    case 131u: goto L_004A5110;
    case 132u: goto L_004A511C;
    case 133u: goto L_004A5130;
    case 134u: goto L_004A513C;
    case 135u: goto L_004A5150;
    case 136u: goto L_004A5168;
    case 137u: goto L_004A517C;
    case 138u: goto L_004A51A0;
    case 139u: goto L_004A51D8;
    case 140u: goto L_004A5200;
    case 141u: goto L_004A5248;
    case 142u: goto L_004A5260;
    case 143u: goto L_004A5278;
    case 144u: goto L_004A52A0;
    case 145u: goto L_004A52D8;
    case 146u: goto L_004A52F0;
    case 147u: goto L_004A5308;
    case 148u: goto L_004A533C;
    case 149u: goto L_004A5360;
    case 150u: goto L_004A5374;
    case 151u: goto L_004A5390;
    case 152u: goto L_004A53BC;
    case 153u: goto L_004A53D0;
    case 154u: goto L_004A53F4;
    case 155u: goto L_004A5408;
    case 156u: goto L_004A5420;
    case 157u: goto L_004A5478;
    case 158u: goto L_004A5490;
    case 159u: goto L_004A54B0;
    case 160u: goto L_004A5508;
    case 161u: goto L_004A5520;
    case 162u: goto L_004A5540;
    case 163u: goto L_004A5598;
    case 164u: goto L_004A55B0;
    case 165u: goto L_004A55D0;
    case 166u: goto L_004A5610;
    case 167u: goto L_004A5620;
    case 168u: goto L_004A5660;
    case 169u: goto L_004A5670;
    case 170u: goto L_004A56B0;
    case 171u: goto L_004A56C0;
    case 172u: goto L_004A5730;
    case 173u: goto L_004A5738;
    case 174u: goto L_004A5790;
    case 175u: goto L_004A57D4;
    case 176u: goto L_004A57E0;
    case 177u: goto L_004A57EC;
    case 178u: goto L_004A57F8;
    case 179u: goto L_004A5804;
    case 180u: goto L_004A5810;
    case 181u: goto L_004A581C;
    case 182u: goto L_004A5828;
    case 183u: goto L_004A5834;
    case 184u: goto L_004A5840;
    case 185u: goto L_004A584C;
    case 186u: goto L_004A5874;
    case 187u: goto L_004A58B8;
    case 188u: goto L_004A58C4;
    case 189u: goto L_004A58D0;
    case 190u: goto L_004A58DC;
    case 191u: goto L_004A58E8;
    case 192u: goto L_004A58F4;
    case 193u: goto L_004A5900;
    case 194u: goto L_004A590C;
    case 195u: goto L_004A5918;
    case 196u: goto L_004A5924;
    case 197u: goto L_004A5930;
    case 198u: goto L_004A5974;
    case 199u: goto L_004A59B8;
    case 200u: goto L_004A59C4;
    case 201u: goto L_004A59D0;
    case 202u: goto L_004A59DC;
    case 203u: goto L_004A59E8;
    case 204u: goto L_004A59F4;
    case 205u: goto L_004A5A00;
    case 206u: goto L_004A5A0C;
    case 207u: goto L_004A5A18;
    case 208u: goto L_004A5A24;
    case 209u: goto L_004A5A30;
    case 210u: goto L_004A5A98;
    case 211u: goto L_004A5AA8;
    case 212u: goto L_004A5AD4;
    case 213u: goto L_004A5B10;
    case 214u: goto L_004A5B40;
    case 215u: goto L_004A5B84;
    case 216u: goto L_004A5B90;
    case 217u: goto L_004A5B9C;
    case 218u: goto L_004A5BA8;
    case 219u: goto L_004A5BB4;
    case 220u: goto L_004A5BC0;
    case 221u: goto L_004A5BCC;
    case 222u: goto L_004A5BD8;
    case 223u: goto L_004A5BE4;
    case 224u: goto L_004A5BF0;
    case 225u: goto L_004A5BFC;
    case 226u: goto L_004A5C24;
    case 227u: goto L_004A5C68;
    case 228u: goto L_004A5C74;
    case 229u: goto L_004A5C80;
    case 230u: goto L_004A5C8C;
    case 231u: goto L_004A5C98;
    case 232u: goto L_004A5CA4;
    case 233u: goto L_004A5CB0;
    case 234u: goto L_004A5CBC;
    case 235u: goto L_004A5CC8;
    case 236u: goto L_004A5CD4;
    case 237u: goto L_004A5CE0;
    case 238u: goto L_004A5D04;
    case 239u: goto L_004A5D48;
    case 240u: goto L_004A5D54;
    case 241u: goto L_004A5D60;
    case 242u: goto L_004A5D6C;
    case 243u: goto L_004A5D78;
    case 244u: goto L_004A5D84;
    case 245u: goto L_004A5D90;
    case 246u: goto L_004A5D9C;
    case 247u: goto L_004A5DA8;
    case 248u: goto L_004A5DB4;
    case 249u: goto L_004A5DC0;
    case 250u: goto L_004A5E38;
    case 251u: goto L_004A5E70;
    case 252u: goto L_004A5E94;
    case 253u: goto L_004A5ECC;
    case 254u: goto L_004A5ED8;
    case 255u: goto L_004A5EE4;
    case 256u: goto L_004A5EF0;
    case 257u: goto L_004A5EFC;
    case 258u: goto L_004A5F08;
    case 259u: goto L_004A5F14;
    case 260u: goto L_004A5F20;
    case 261u: goto L_004A5F2C;
    case 262u: goto L_004A5F38;
    case 263u: goto L_004A5F44;
    case 264u: goto L_004A5F70;
    case 265u: goto L_004A5F94;
    case 266u: goto L_004A5FD4;
    case 267u: goto L_004A5FE0;
    case 268u: goto L_004A5FEC;
    case 269u: goto L_004A5FF8;
    case 270u: goto L_004A6004;
    case 271u: goto L_004A6010;
    case 272u: goto L_004A601C;
    case 273u: goto L_004A6028;
    case 274u: goto L_004A6034;
    case 275u: goto L_004A6040;
    case 276u: goto L_004A604C;
    case 277u: goto L_004A6080;
    case 278u: goto L_004A60D8;
    case 279u: goto L_004A6108;
    case 280u: goto L_004A614C;
    case 281u: goto L_004A6158;
    case 282u: goto L_004A6164;
    case 283u: goto L_004A6170;
    case 284u: goto L_004A617C;
    case 285u: goto L_004A6188;
    case 286u: goto L_004A6194;
    case 287u: goto L_004A61A0;
    case 288u: goto L_004A61AC;
    case 289u: goto L_004A61B8;
    case 290u: goto L_004A61C4;
    case 291u: goto L_004A623C;
    case 292u: goto L_004A6260;
    case 293u: goto L_004A6290;
    case 294u: goto L_004A62C0;
    case 295u: goto L_004A62D0;
    case 296u: goto L_004A630C;
    case 297u: goto L_004A631C;
    case 298u: goto L_004A6350;
    case 299u: goto L_004A6374;
    case 300u: goto L_004A6390;
    case 301u: goto L_004A63A8;
    case 302u: goto L_004A63C0;
    case 303u: goto L_004A63E4;
    case 304u: goto L_004A6400;
    case 305u: goto L_004A6418;
    case 306u: goto L_004A6430;
    case 307u: goto L_004A6454;
    case 308u: goto L_004A646C;
    case 309u: goto L_004A649C;
    case 310u: goto L_004A64AC;
    case 311u: goto L_004A64BC;
    case 312u: goto L_004A64C8;
    case 313u: goto L_004A64E4;
    case 314u: goto L_004A6508;
    case 315u: goto L_004A652C;
    case 316u: goto L_004A653C;
    case 317u: goto L_004A6550;
    case 318u: goto L_004A656C;
    case 319u: goto L_004A6594;
    case 320u: goto L_004A65B8;
    case 321u: goto L_004A65C4;
    case 322u: goto L_004A65E0;
    case 323u: goto L_004A6604;
    case 324u: goto L_004A6618;
    case 325u: goto L_004A6668;
    case 326u: goto L_004A6678;
    case 327u: goto L_004A6688;
    case 328u: goto L_004A6694;
    case 329u: goto L_004A66B0;
    case 330u: goto L_004A66D4;
    case 331u: goto L_004A66F8;
    case 332u: goto L_004A6708;
    case 333u: goto L_004A671C;
    case 334u: goto L_004A6738;
    case 335u: goto L_004A6760;
    case 336u: goto L_004A6784;
    case 337u: goto L_004A6790;
    case 338u: goto L_004A67B0;
    case 339u: goto L_004A67D4;
    case 340u: goto L_004A67EC;
    case 341u: goto L_004A681C;
    case 342u: goto L_004A682C;
    case 343u: goto L_004A683C;
    case 344u: goto L_004A6848;
    case 345u: goto L_004A6864;
    case 346u: goto L_004A6888;
    case 347u: goto L_004A68AC;
    case 348u: goto L_004A68BC;
    case 349u: goto L_004A68D0;
    case 350u: goto L_004A68EC;
    case 351u: goto L_004A6914;
    case 352u: goto L_004A6938;
    case 353u: goto L_004A6944;
    case 354u: goto L_004A6960;
    case 355u: goto L_004A69A4;
    case 356u: goto L_004A6A00;
    case 357u: goto L_004A6A60;
    case 358u: goto L_004A6A68;
    case 359u: goto L_004A6AB4;
    case 360u: goto L_004A6AF4;
    case 361u: goto L_004A6B40;
    case 362u: goto L_004A6BAC;
    case 363u: goto L_004A6BDC;
    case 364u: goto L_004A6C38;
    case 365u: goto L_004A6C64;
    case 366u: goto L_004A6C84;
    case 367u: goto L_004A6CC4;
    case 368u: goto L_004A6D00;
    case 369u: goto L_004A6DA0;
    case 370u: goto L_004A6DC0;
    case 371u: goto L_004A6DD0;
    case 372u: goto L_004A6DE0;
    case 373u: goto L_004A6DF0;
    case 374u: goto L_004A6E44;
    case 375u: goto L_004A6E80;
    case 376u: goto L_004A6EA0;
    case 377u: goto L_004A6EB0;
    case 378u: goto L_004A6EF4;
    case 379u: goto L_004A6F00;
    case 380u: goto L_004A6F1C;
    case 381u: goto L_004A6F24;
    case 382u: goto L_004A6F38;
    case 383u: goto L_004A6F80;
    case 384u: goto L_004A6F8C;
    case 385u: goto L_004A6FBC;
    case 386u: goto L_004A6FE4;
    case 387u: goto L_004A7008;
    case 388u: goto L_004A7028;
    case 389u: goto L_004A7064;
    case 390u: goto L_004A708C;
    case 391u: goto L_004A70A0;
    case 392u: goto L_004A70C0;
    case 393u: goto L_004A70E0;
    case 394u: goto L_004A710C;
    case 395u: goto L_004A711C;
    case 396u: goto L_004A713C;
    case 397u: goto L_004A715C;
    case 398u: goto L_004A7174;
    case 399u: goto L_004A7190;
    case 400u: goto L_004A71A8;
    case 401u: goto L_004A71C8;
    case 402u: goto L_004A71F0;
    case 403u: goto L_004A71FC;
    case 404u: goto L_004A7208;
    case 405u: goto L_004A7214;
    case 406u: goto L_004A7254;
    case 407u: goto L_004A7268;
    case 408u: goto L_004A727C;
    case 409u: goto L_004A7290;
    case 410u: goto L_004A72A4;
    case 411u: goto L_004A72B4;
    case 412u: goto L_004A72C4;
    case 413u: goto L_004A72E8;
    case 414u: goto L_004A730C;
    case 415u: goto L_004A731C;
    case 416u: goto L_004A7330;
    case 417u: goto L_004A7348;
    case 418u: goto L_004A7380;
    case 419u: goto L_004A739C;
    case 420u: goto L_004A73B8;
    case 421u: goto L_004A7428;
    case 422u: goto L_004A7440;
    case 423u: goto L_004A7470;
    case 424u: goto L_004A74D4;
    case 425u: goto L_004A7508;
    case 426u: goto L_004A751C;
    case 427u: goto L_004A7540;
    case 428u: goto L_004A7560;
    case 429u: goto L_004A758C;
    case 430u: goto L_004A75AC;
    case 431u: goto L_004A75C4;
    case 432u: goto L_004A75CC;
    case 433u: goto L_004A75D4;
    case 434u: goto L_004A75E8;
    case 435u: goto L_004A75F8;
    case 436u: goto L_004A7614;
    case 437u: goto L_004A7620;
    case 438u: goto L_004A7630;
    case 439u: goto L_004A763C;
    case 440u: goto L_004A7650;
    case 441u: goto L_004A7670;
    case 442u: goto L_004A76D0;
    case 443u: goto L_004A76E4;
    case 444u: goto L_004A7714;
    case 445u: goto L_004A772C;
    case 446u: goto L_004A7740;
    case 447u: goto L_004A774C;
    case 448u: goto L_004A7770;
    case 449u: goto L_004A777C;
    case 450u: goto L_004A779C;
    case 451u: goto L_004A77A8;
    case 452u: goto L_004A77C0;
    case 453u: goto L_004A77D8;
    case 454u: goto L_004A77FC;
    case 455u: goto L_004A7810;
    case 456u: goto L_004A7828;
    case 457u: goto L_004A784C;
    case 458u: goto L_004A786C;
    case 459u: goto L_004A7884;
    case 460u: goto L_004A78A8;
    case 461u: goto L_004A78C8;
    case 462u: goto L_004A78E0;
    case 463u: goto L_004A7904;
    case 464u: goto L_004A7918;
    case 465u: goto L_004A7930;
    case 466u: goto L_004A7954;
    case 467u: goto L_004A7964;
    case 468u: goto L_004A7974;
    case 469u: goto L_004A7988;
    case 470u: goto L_004A79A4;
    case 471u: goto L_004A79B0;
    case 472u: goto L_004A79BC;
    case 473u: goto L_004A79D0;
    case 474u: goto L_004A79E4;
    case 475u: goto L_004A7A74;
    case 476u: goto L_004A7A80;
    case 477u: goto L_004A7A8C;
    case 478u: goto L_004A7A98;
    case 479u: goto L_004A7AB8;
    case 480u: goto L_004A7AC8;
    case 481u: goto L_004A7B6C;
    case 482u: goto L_004A7B78;
    case 483u: goto L_004A7B84;
    case 484u: goto L_004A7B90;
    case 485u: goto L_004A7B9C;
    case 486u: goto L_004A7BA8;
    case 487u: goto L_004A7BD0;
    case 488u: goto L_004A7BDC;
    case 489u: goto L_004A7BF0;
    case 490u: goto L_004A7BFC;
    case 491u: goto L_004A7C0C;
    case 492u: goto L_004A7C40;
    case 493u: goto L_004A7C58;
    case 494u: goto L_004A7C64;
    case 495u: goto L_004A7C70;
    case 496u: goto L_004A7CC0;
    case 497u: goto L_004A7CE0;
    case 498u: goto L_004A7D00;
    case 499u: goto L_004A7D24;
    case 500u: goto L_004A7D50;
    case 501u: goto L_004A7D88;
    case 502u: goto L_004A7D94;
    case 503u: goto L_004A7DAC;
    case 504u: goto L_004A7DD0;
    case 505u: goto L_004A7DFC;
    case 506u: goto L_004A7E14;
    case 507u: goto L_004A7E30;
    case 508u: goto L_004A7E5C;
    case 509u: goto L_004A7E70;
    case 510u: goto L_004A7E7C;
    case 511u: goto L_004A7EA4;
    case 512u: goto L_004A7EC4;
    case 513u: goto L_004A7ED0;
    case 514u: goto L_004A7EEC;
    case 515u: goto L_004A7F30;
    case 516u: goto L_004A7F44;
    case 517u: goto L_004A7F60;
    case 518u: goto L_004A7FC4;
    default: bad_entry(c, 0x004A4000u); return;
    }
L_004A4000:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A4020:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4054u); set32(c.r[4], c.r[4].w[0] - 6319u);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x004A4054u) [[unlikely]] return; }
L_004A4054:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4060u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x004A4060u) [[unlikely]] return; }
L_004A4060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004A4070; }
    set32(c.r[2], c.r[2].w[0] + 68u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004A4070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4078u);  if (depth < kMaxDepth) unit_00CD(c, 82u, depth + 1u); else { c.pc = 0x004348B0u; return; } if (c.pc != 0x004A4078u) [[unlikely]] return; }
L_004A4078:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004A40D0; } }
L_004A4084:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_004A40B4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004A40B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A40BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004A40BCu) [[unlikely]] return; }
L_004A40BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004A40D0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[18].w[0]);  if (t) { goto L_004A40E4; } }
L_004A40D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4084u | kUnwind; return; } goto L_004A4084; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A40E4:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_004A41E0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[20].w[0] + 41u);  goto L_004A4100; }
    set32(c.r[5], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 1;
L_004A4100:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[20].w[0] + 57u);  goto L_004A4114; }
    set32(c.r[18], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_004A4114:
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4120u); set32(c.r[4], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_00E9(c, 33u, depth + 1u); else { c.pc = 0x004A4400u; return; } if (c.pc != 0x004A4120u) [[unlikely]] return; }
L_004A4120:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_004A4130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A41A0; } }
L_004A4130:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4148u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004A4148u) [[unlikely]] return; }
L_004A4148:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_004A4190; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4160u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4160u) [[unlikely]] return; }
L_004A4160:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A416Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 101u, depth + 1u); else { c.pc = 0x0012CD00u; return; } if (c.pc != 0x004A416Cu) [[unlikely]] return; }
L_004A416C:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4188u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4188u) [[unlikely]] return; }
L_004A4188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A41A0; } }
L_004A4190:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A41A0u) [[unlikely]] return; }
L_004A41A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004A41B0; }
    set32(c.r[2], c.r[2].w[0] + 68u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004A41B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41B8u);  if (depth < kMaxDepth) unit_00CD(c, 82u, depth + 1u); else { c.pc = 0x004348B0u; return; } if (c.pc != 0x004A41B8u) [[unlikely]] return; }
L_004A41B8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A41D0u) [[unlikely]] return; }
L_004A41D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41DCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 95u, depth + 1u); else { c.pc = 0x001A5870u; return; } if (c.pc != 0x004A41DCu) [[unlikely]] return; }
L_004A41DC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004A41E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41E8u); set32(c.r[4], c.r[21].w[0] + 164u);  if (depth < kMaxDepth) unit_00E9(c, 20u, depth + 1u); else { c.pc = 0x004A4240u; return; } if (c.pc != 0x004A41E8u) [[unlikely]] return; }
L_004A41E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41F4u); set32(c.r[4], c.r[21].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A41F4u) [[unlikely]] return; }
L_004A41F4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4210u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4210u) [[unlikely]] return; }
L_004A4210:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A4240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A429C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_004A42A0; } }
L_004A429C:
    set32(c.r[5], c.r[16].w[0] + 25u);
    c.budget -= 1;
L_004A42A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A42A8u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A42A8u) [[unlikely]] return; }
L_004A42A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 41u);  goto L_004A42BC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_004A42BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A42C4u); set32(c.r[4], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A42C4u) [[unlikely]] return; }
L_004A42C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 57u);  goto L_004A42D8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_004A42D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A42E0u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A42E0u) [[unlikely]] return; }
L_004A42E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 73u);  goto L_004A42F4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004A42F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A42FCu); set32(c.r[4], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A42FCu) [[unlikely]] return; }
L_004A42FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 89u);  goto L_004A4310; }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_004A4310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4318u); set32(c.r[4], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A4318u) [[unlikely]] return; }
L_004A4318:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 105u);  goto L_004A432C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_004A432C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4334u); set32(c.r[4], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A4334u) [[unlikely]] return; }
L_004A4334:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 121u);  goto L_004A4348; }
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_004A4348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4350u); set32(c.r[4], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A4350u) [[unlikely]] return; }
L_004A4350:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 137u);  goto L_004A4364; }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_004A4364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A436Cu); set32(c.r[4], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A436Cu) [[unlikely]] return; }
L_004A436C:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 153u);  goto L_004A4380; }
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_004A4380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4388u); set32(c.r[4], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A4388u) [[unlikely]] return; }
L_004A4388:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 169u);  goto L_004A439C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_004A439C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A43A4u); set32(c.r[4], c.r[17].w[0] + 168u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A43A4u) [[unlikely]] return; }
L_004A43A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 185u);  goto L_004A43B8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 1;
L_004A43B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A43C0u); set32(c.r[4], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A43C0u) [[unlikely]] return; }
L_004A43C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A43E0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 6456u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004A4000u < 16384u) { entry = entries_00E9[(t - 0x004A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A4400:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A4434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004A450C; } }
L_004A4434:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_004A4464; } }
L_004A4444:
    set32(c.r[4], c.r[17].w[0] << 4);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_004A4464; } }
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[17].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.budget -= 2;
L_004A4464:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4444u | kUnwind; return; } goto L_004A4444; }
    mmi::divu(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_004A44F0; } }
L_004A4480:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_004A44D8; }
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_004A44B4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004A44B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A44BCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004A44BCu) [[unlikely]] return; }
L_004A44BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A44D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_004A450C; } }
L_004A44D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_004A44D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_004A44EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A44EC; } }
L_004A44EC:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_004A44F0:
    set32(c.r[16], c.r[18].w[0] << 3);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4480u | kUnwind; return; } goto L_004A4480; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004A450C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A4530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004A45E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  goto L_004A45C4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004A45AC; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004A457C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004A4660; } }
L_004A457C:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4588u) [[unlikely]] return; }
L_004A4588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_004A465C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A45A4u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A45A4u) [[unlikely]] return; }
L_004A45A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A465C; } }
L_004A45AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A45BCu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A45BCu) [[unlikely]] return; }
L_004A45BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A465C; } }
L_004A45C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A45CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004A45CCu) [[unlikely]] return; }
L_004A45CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A45DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x0019CF90u; return; } if (c.pc != 0x004A45DCu) [[unlikely]] return; }
L_004A45DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A466C; } }
L_004A45E4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A45F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A45F4u) [[unlikely]] return; }
L_004A45F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A45FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 46u, depth + 1u); else { c.pc = 0x001A4880u; return; } if (c.pc != 0x004A45FCu) [[unlikely]] return; }
L_004A45FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004A464C; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4614u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4614u) [[unlikely]] return; }
L_004A4614:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A4648; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4634u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4634u) [[unlikely]] return; }
L_004A4634:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4648u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4648u) [[unlikely]] return; }
L_004A4648:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004A464C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A465Cu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A465Cu) [[unlikely]] return; }
L_004A465C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A4660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4668u);  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004A4668u) [[unlikely]] return; }
L_004A4668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A466C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A4680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[16].d[0]) { c.r[3].d[0] = ld8((c.r[16].w[0] + 80u));  goto L_004A46E8; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 92u)));  goto L_004A46C4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A46BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A46BCu) [[unlikely]] return; }
L_004A46BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A4730; } }
L_004A46C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_004A472C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A46E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A46E0u) [[unlikely]] return; }
L_004A46E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A472C; } }
L_004A46E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A472C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004A472C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_004A472C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4718u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4718u) [[unlikely]] return; }
L_004A4718:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A472Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A472Cu) [[unlikely]] return; }
L_004A472C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A4730:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A4740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4760u); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00132910u; return; } if (c.pc != 0x004A4760u) [[unlikely]] return; }
L_004A4760:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A476Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 69u, depth + 1u); else { c.pc = 0x001A4E90u; return; } if (c.pc != 0x004A476Cu) [[unlikely]] return; }
L_004A476C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004A4774u) [[unlikely]] return; }
L_004A4774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A477Cu); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x004A477Cu) [[unlikely]] return; }
L_004A477C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A4790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    set32(c.r[19], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A4840; } }
L_004A47C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A47D4; } }
    set32(c.r[4], c.r[4].w[0] + 68u);
    c.budget -= 1;
L_004A47D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A47DCu);  if (depth < kMaxDepth) unit_00CD(c, 82u, depth + 1u); else { c.pc = 0x004348B0u; return; } if (c.pc != 0x004A47DCu) [[unlikely]] return; }
L_004A47DC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A47F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A47F0u) [[unlikely]] return; }
L_004A47F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 80u));  goto L_004A4804; }
    st32((c.r[18].w[0] + 88u), c.r[16].w[0]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
L_004A4804:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[19].d[0] << 32;  goto L_004A4838; }
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 92u), c.r[16].w[0]);  goto L_004A4830; }
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004A4834; }
    st32((c.r[18].w[0] + 92u), c.r[16].w[0]);
    c.budget -= 1;
L_004A4830:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004A4834:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_004A4838:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004A4840:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A47C0u | kUnwind; return; } goto L_004A47C0; }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004A48C4; }
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 68u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  goto L_004A489C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4894u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 39u, depth + 1u); else { c.pc = 0x001A4750u; return; } if (c.pc != 0x004A4894u) [[unlikely]] return; }
L_004A4894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A48C0; } }
L_004A489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A48A4u); set32(c.r[5], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_0027(c, 42u, depth + 1u); else { c.pc = 0x0019C940u; return; } if (c.pc != 0x004A48A4u) [[unlikely]] return; }
L_004A48A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[18].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A48B4u); set32(c.r[4], c.r[4].w[0] - 6283u);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x004A48B4u) [[unlikely]] return; }
L_004A48B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A48C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004A48C0u) [[unlikely]] return; }
L_004A48C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A48C4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A48E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 271u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004A4974; } }
    set32(c.r[2], 0u + 72u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    mmi::divu(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A4938; } }
L_004A4920:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4934u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E8(c, 525u, depth + 1u); else { c.pc = 0x004A3DA0u; return; } if (c.pc != 0x004A4934u) [[unlikely]] return; }
L_004A4934:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004A4938:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4920u | kUnwind; return; } goto L_004A4920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A4960; } }
L_004A494C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A495Cu); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E8(c, 500u, depth + 1u); else { c.pc = 0x004A3B10u; return; } if (c.pc != 0x004A495Cu) [[unlikely]] return; }
L_004A495C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004A4960:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A494Cu | kUnwind; return; } goto L_004A494C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4974u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A4974u) [[unlikely]] return; }
L_004A4974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A4990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A49B0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A49B0u) [[unlikely]] return; }
L_004A49B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 180u)));  goto L_004A49F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A49D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A49D0u) [[unlikely]] return; }
L_004A49D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 27040u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 8;
L_004A49F0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_004A4A50; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6238u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A1Cu); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004A4A1Cu) [[unlikely]] return; }
L_004A4A1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A40u); set32(c.r[4], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_00E9(c, 90u, depth + 1u); else { c.pc = 0x004A4C30u; return; } if (c.pc != 0x004A4A40u) [[unlikely]] return; }
L_004A4A40:
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_004A4A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A58u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A4A58u) [[unlikely]] return; }
L_004A4A58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 180u)));  goto L_004A4A98; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A78u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A4A78u) [[unlikely]] return; }
L_004A4A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 27040u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27104u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 8;
L_004A4A98:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_004A4AF8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6231u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4AC4u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004A4AC4u) [[unlikely]] return; }
L_004A4AC4:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4AE8u); set32(c.r[4], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_00E9(c, 90u, depth + 1u); else { c.pc = 0x004A4C30u; return; } if (c.pc != 0x004A4AE8u) [[unlikely]] return; }
L_004A4AE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_004A4AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B00u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A4B00u) [[unlikely]] return; }
L_004A4B00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_004A4B40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B20u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A4B20u) [[unlikely]] return; }
L_004A4B20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27040u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 27136u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 8;
L_004A4B40:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004A4BA0; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6222u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B6Cu); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004A4B6Cu) [[unlikely]] return; }
L_004A4B6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B90u); set32(c.r[4], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_00E9(c, 90u, depth + 1u); else { c.pc = 0x004A4C30u; return; } if (c.pc != 0x004A4B90u) [[unlikely]] return; }
L_004A4B90:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 180u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_004A4BA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A4BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A4C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A4BF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A4BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4BF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A4BF8u) [[unlikely]] return; }
L_004A4BF8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A4C14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4C10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A4C10u) [[unlikely]] return; }
L_004A4C10:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A4C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A4C30:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[6].w[0] + 1u);  goto L_004A4C58; }
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_004A4C58:
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_004A4C84; } }
L_004A4C64:
    set32(c.r[7], c.r[11].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[11], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_004A4C84; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[11].d[0] = c.r[11].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_004A4C84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4C64u | kUnwind; return; } goto L_004A4C64; }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004A4CC0; } }
L_004A4CAC:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_004A4CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_004A4CC0; } }
L_004A4CC0:
    set32(c.r[8], c.r[12].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4CACu | kUnwind; return; } goto L_004A4CAC; }
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));  c.pc = t; return; }
L_004A4D00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5B50u | kUnwind; return; } [[clang::musttail]] return unit_0029(c, 108u, depth); }
L_004A4D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A4EC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 27216u);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4D58u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019DB50u; return; } if (c.pc != 0x004A4D58u) [[unlikely]] return; }
L_004A4D58:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), 0u);  goto L_004A4D78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4D74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4D74u) [[unlikely]] return; }
L_004A4D74:
    st32((c.r[18].w[0] + 60u), 0u);
    c.budget -= 1;
L_004A4D78:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4D84u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019DB50u; return; } if (c.pc != 0x004A4D84u) [[unlikely]] return; }
L_004A4D84:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 72u);  goto L_004A4DA4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4DA0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4DA0u) [[unlikely]] return; }
L_004A4DA0:
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 1;
L_004A4DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4DACu); st32((c.r[18].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00E9(c, 295u, depth + 1u); else { c.pc = 0x004A62D0u; return; } if (c.pc != 0x004A4DACu) [[unlikely]] return; }
L_004A4DAC:
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4DB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 228u, depth + 1u); else { c.pc = 0x00132970u; return; } if (c.pc != 0x004A4DB8u) [[unlikely]] return; }
L_004A4DB8:
    set32(c.r[2], c.r[18].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 72u);  goto L_004A4E64; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27160u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_004A4E08; } }
L_004A4DD8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 116u);  if (t) { goto L_004A4E00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4E00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A4E00u) [[unlikely]] return; }
L_004A4E00:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004A4E08:
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4DD8u | kUnwind; return; } goto L_004A4DD8; }
    set32(c.r[2], c.r[18].w[0] + 184u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 180u), 0u);  if (t) { goto L_004A4E48; } }
    set32(c.r[4], c.r[18].w[0] + 188u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4E48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4E48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4E48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4E48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 302u, depth + 1u); else { c.pc = 0x004A63C0u; return; } if (c.pc != 0x004A4E48u) [[unlikely]] return; }
L_004A4E48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[18].w[0] + 100u);
    set32(c.r[5], c.r[5].w[0] + 20192u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4E60u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004A4E60u) [[unlikely]] return; }
L_004A4E60:
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 1;
L_004A4E64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 56u);  goto L_004A4E88; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4E84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 298u, depth + 1u); else { c.pc = 0x004A6350u; return; } if (c.pc != 0x004A4E84u) [[unlikely]] return; }
L_004A4E84:
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.budget -= 1;
L_004A4E88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004A4EA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_004A4EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 99u, depth + 1u); else { c.pc = 0x001A5930u; return; } if (c.pc != 0x004A4EA8u) [[unlikely]] return; }
L_004A4EA8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_004A4EC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4EC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A4EC0u) [[unlikely]] return; }
L_004A4EC0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A4EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A4EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A4F24; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A4F10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4F0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A4F0Cu) [[unlikely]] return; }
L_004A4F0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A4F10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A4F28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4F24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A4F24u) [[unlikely]] return; }
L_004A4F24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A4F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A4F40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4F64u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0029(c, 103u, depth + 1u); else { c.pc = 0x001A5A30u; return; } if (c.pc != 0x004A4F64u) [[unlikely]] return; }
L_004A4F64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[3], c.r[3].w[0] - 27216u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[16], c.r[18].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 60u), 0u);  if (t) { goto L_004A4FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4FA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004A4FA4u) [[unlikely]] return; }
L_004A4FA4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004A4FBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4FB8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004A4FB8u) [[unlikely]] return; }
L_004A4FB8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004A4FBC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004A4FD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4FCCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004A4FCCu) [[unlikely]] return; }
L_004A4FCC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004A4FD0:
    set32(c.r[19], c.r[18].w[0] + 96u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 27160u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 21344u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20192u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 13;
L_004A5004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A500Cu); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004A500Cu) [[unlikely]] return; }
L_004A500C:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 88u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5020u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00E9(c, 144u, depth + 1u); else { c.pc = 0x004A52A0u; return; } if (c.pc != 0x004A5020u) [[unlikely]] return; }
L_004A5020:
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A502Cu); st32((c.r[19].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_000C(c, 231u, depth + 1u); else { c.pc = 0x001329D0u; return; } if (c.pc != 0x004A502Cu) [[unlikely]] return; }
L_004A502C:
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5038u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_00E9(c, 277u, depth + 1u); else { c.pc = 0x004A6080u; return; } if (c.pc != 0x004A5038u) [[unlikely]] return; }
L_004A5038:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004A50C0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5050u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A5050u) [[unlikely]] return; }
L_004A5050:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  goto L_004A5068; }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 431u, depth + 1u); else { c.pc = 0x00487690u; return; } if (c.pc != 0x004A5064u) [[unlikely]] return; }
L_004A5064:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_004A5068:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A507Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A507Cu) [[unlikely]] return; }
L_004A507C:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5090u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5090u) [[unlikely]] return; }
L_004A5090:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A509Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004A509Cu) [[unlikely]] return; }
L_004A509C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 6432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50B0u); set32(c.r[4], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A50B0u) [[unlikely]] return; }
L_004A50B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50BCu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0019E000u; return; } if (c.pc != 0x004A50BCu) [[unlikely]] return; }
L_004A50BC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004A50C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50C8u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A50C8u) [[unlikely]] return; }
L_004A50C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  goto L_004A50E0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004A50DCu) [[unlikely]] return; }
L_004A50DC:
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_004A50E0:
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50FCu); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0029(c, 118u, depth + 1u); else { c.pc = 0x001A5F20u; return; } if (c.pc != 0x004A50FCu) [[unlikely]] return; }
L_004A50FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 6448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5110u); set32(c.r[4], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A5110u) [[unlikely]] return; }
L_004A5110:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A511Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004A511Cu) [[unlikely]] return; }
L_004A511C:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5130u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5130u) [[unlikely]] return; }
L_004A5130:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A513Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A513Cu) [[unlikely]] return; }
L_004A513C:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5150u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5150u) [[unlikely]] return; }
L_004A5150:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 301u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5168u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0019E000u; return; } if (c.pc != 0x004A5168u) [[unlikely]] return; }
L_004A5168:
    st32((c.r[18].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 92u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A517Cu); st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00E9(c, 74u, depth + 1u); else { c.pc = 0x004A4990u; return; } if (c.pc != 0x004A517Cu) [[unlikely]] return; }
L_004A517C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A51A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A5278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27160u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5208; } }
L_004A51D8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 20u);  if (t) { goto L_004A5200; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5200u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5200u) [[unlikely]] return; }
L_004A5200:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004A5208:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A51D8u | kUnwind; return; } goto L_004A51D8; }
    set32(c.r[2], c.r[18].w[0] + 88u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_004A5248; } }
    set32(c.r[4], c.r[18].w[0] + 92u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A5248; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A5248; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A5248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 302u, depth + 1u); else { c.pc = 0x004A63C0u; return; } if (c.pc != 0x004A5248u) [[unlikely]] return; }
L_004A5248:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 20192u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5260u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004A5260u) [[unlikely]] return; }
L_004A5260:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_004A527C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5278u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A5278u) [[unlikely]] return; }
L_004A5278:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A527C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A52A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[19].w[0] + 4u);  if (t) { goto L_004A530C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A52D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004A52D8u) [[unlikely]] return; }
L_004A52D8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004A52F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A52F0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004A52F0u) [[unlikely]] return; }
L_004A52F0:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004A52F8:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[7].w[0]);  goto L_004A5310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5308u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004A5308u) [[unlikely]] return; }
L_004A5308:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004A530C:
    st32((c.r[16].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_004A5310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[29].w[0] + 88u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 32512u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A533Cu); st64((c.r[29].w[0] + 88u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00E9(c, 292u, depth + 1u); else { c.pc = 0x004A6260u; return; } if (c.pc != 0x004A533Cu) [[unlikely]] return; }
L_004A533C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A5360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A5374u) [[unlikely]] return; }
L_004A5374:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A5390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28804u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004A53C4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 28804u), 0u);  goto L_004A53C0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A53BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A53BCu) [[unlikely]] return; }
L_004A53BC:
    st32((c.r[28].w[0] - 28804u), 0u);
    c.budget -= 1;
L_004A53C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A53C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A53D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A5410; } }
    set32(c.r[4], 0u + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A53F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A53F4u) [[unlikely]] return; }
L_004A53F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 28804u), c.r[4].w[0]);  goto L_004A5410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5408u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 111u, depth + 1u); else { c.pc = 0x004A4F40u; return; } if (c.pc != 0x004A5408u) [[unlikely]] return; }
L_004A5408:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 28804u), c.r[4].w[0]);
    c.budget -= 2;
L_004A5410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A5420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A5490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27136u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A5478u) [[unlikely]] return; }
L_004A5478:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A5494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A5490u) [[unlikely]] return; }
L_004A5490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A5494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A54B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A5520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27104u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5508; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5508; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A5508u) [[unlikely]] return; }
L_004A5508:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A5524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A5520u) [[unlikely]] return; }
L_004A5520:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A5524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A5540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A55B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27072u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A5598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A5598u) [[unlikely]] return; }
L_004A5598:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A55B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A55B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A55B0u) [[unlikely]] return; }
L_004A55B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A55B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A55D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A55F8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004A55F0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004A55F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A55FC; } }
L_004A55F8:
    set32(c.r[2], c.r[2].w[0] - 6214u);
    c.budget -= 1;
L_004A55FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A5610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6213u);  c.pc = t; return; }
L_004A5620:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A5648; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004A5640; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004A5640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A564C; } }
L_004A5648:
    set32(c.r[2], c.r[2].w[0] - 6214u);
    c.budget -= 1;
L_004A564C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A5660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6213u);  c.pc = t; return; }
L_004A5670:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A5698; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004A5690; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004A5690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A569C; } }
L_004A5698:
    set32(c.r[2], c.r[2].w[0] - 6214u);
    c.budget -= 1;
L_004A569C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A56B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6213u);  c.pc = t; return; }
L_004A56C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004A5E38; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_004A573C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5730u); set32(c.r[5], c.r[5].w[0] - 6149u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004A5730u) [[unlikely]] return; }
L_004A5730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5738u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004A5738u) [[unlikely]] return; }
L_004A5738:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004A573C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_004A5AB0; }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 200u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_004A5958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004A5860; } }
L_004A5790:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_004A5850; }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A57D4u); st32((c.r[21].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A57D4u) [[unlikely]] return; }
L_004A57D4:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A57E0u); set32(c.r[5], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A57E0u) [[unlikely]] return; }
L_004A57E0:
    set32(c.r[4], c.r[21].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A57ECu); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A57ECu) [[unlikely]] return; }
L_004A57EC:
    set32(c.r[4], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A57F8u); set32(c.r[5], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A57F8u) [[unlikely]] return; }
L_004A57F8:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5804u); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5804u) [[unlikely]] return; }
L_004A5804:
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5810u); set32(c.r[5], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5810u) [[unlikely]] return; }
L_004A5810:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A581Cu); set32(c.r[5], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A581Cu) [[unlikely]] return; }
L_004A581C:
    set32(c.r[4], c.r[21].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5828u); set32(c.r[5], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5828u) [[unlikely]] return; }
L_004A5828:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5834u); set32(c.r[5], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5834u) [[unlikely]] return; }
L_004A5834:
    set32(c.r[4], c.r[21].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5840u); set32(c.r[5], c.r[16].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5840u) [[unlikely]] return; }
L_004A5840:
    set32(c.r[4], c.r[21].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A584Cu); set32(c.r[5], c.r[16].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A584Cu) [[unlikely]] return; }
L_004A584C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004A5850:
    set32(c.r[21], c.r[21].w[0] + 200u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_004A5860:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5790u | kUnwind; return; } goto L_004A5790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004A5944; } }
L_004A5874:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_004A5934; }
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[22].w[0] + 24u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[22].w[0] + 16u));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A58B8u); st32((c.r[21].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A58B8u) [[unlikely]] return; }
L_004A58B8:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A58C4u); set32(c.r[5], c.r[22].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A58C4u) [[unlikely]] return; }
L_004A58C4:
    set32(c.r[4], c.r[21].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A58D0u); set32(c.r[5], c.r[22].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A58D0u) [[unlikely]] return; }
L_004A58D0:
    set32(c.r[4], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A58DCu); set32(c.r[5], c.r[22].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A58DCu) [[unlikely]] return; }
L_004A58DC:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A58E8u); set32(c.r[5], c.r[22].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A58E8u) [[unlikely]] return; }
L_004A58E8:
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A58F4u); set32(c.r[5], c.r[22].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A58F4u) [[unlikely]] return; }
L_004A58F4:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5900u); set32(c.r[5], c.r[22].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5900u) [[unlikely]] return; }
L_004A5900:
    set32(c.r[4], c.r[21].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A590Cu); set32(c.r[5], c.r[22].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A590Cu) [[unlikely]] return; }
L_004A590C:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5918u); set32(c.r[5], c.r[22].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5918u) [[unlikely]] return; }
L_004A5918:
    set32(c.r[4], c.r[21].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5924u); set32(c.r[5], c.r[22].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5924u) [[unlikely]] return; }
L_004A5924:
    set32(c.r[4], c.r[21].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5930u); set32(c.r[5], c.r[22].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5930u) [[unlikely]] return; }
L_004A5930:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004A5934:
    set32(c.r[22], c.r[22].w[0] + 200u);
    set32(c.r[21], c.r[21].w[0] + 200u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_004A5944:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5874u | kUnwind; return; } goto L_004A5874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004A5A9C; } }
L_004A5958:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[30], c.r[2].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[30].w[0]);  if (t) { goto L_004A5A44; } }
L_004A5974:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_004A5A34; }
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[22].w[0] + 24u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[22].w[0] + 16u));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A59B8u); st32((c.r[21].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A59B8u) [[unlikely]] return; }
L_004A59B8:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A59C4u); set32(c.r[5], c.r[22].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A59C4u) [[unlikely]] return; }
L_004A59C4:
    set32(c.r[4], c.r[21].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A59D0u); set32(c.r[5], c.r[22].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A59D0u) [[unlikely]] return; }
L_004A59D0:
    set32(c.r[4], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A59DCu); set32(c.r[5], c.r[22].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A59DCu) [[unlikely]] return; }
L_004A59DC:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A59E8u); set32(c.r[5], c.r[22].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A59E8u) [[unlikely]] return; }
L_004A59E8:
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A59F4u); set32(c.r[5], c.r[22].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A59F4u) [[unlikely]] return; }
L_004A59F4:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A00u); set32(c.r[5], c.r[22].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5A00u) [[unlikely]] return; }
L_004A5A00:
    set32(c.r[4], c.r[21].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A0Cu); set32(c.r[5], c.r[22].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5A0Cu) [[unlikely]] return; }
L_004A5A0C:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A18u); set32(c.r[5], c.r[22].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5A18u) [[unlikely]] return; }
L_004A5A18:
    set32(c.r[4], c.r[21].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A24u); set32(c.r[5], c.r[22].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5A24u) [[unlikely]] return; }
L_004A5A24:
    set32(c.r[4], c.r[21].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A30u); set32(c.r[5], c.r[22].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5A30u) [[unlikely]] return; }
L_004A5A30:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004A5A34:
    set32(c.r[22], c.r[22].w[0] + 200u);
    set32(c.r[21], c.r[21].w[0] + 200u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_004A5A44:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5974u | kUnwind; return; } goto L_004A5974; } }
    set32(c.r[3], c.r[23].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);  goto L_004A5A8C; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A5A88; } }
    set32(c.r[16], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_004A5A88:
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_004A5A8C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 264u, depth + 1u); else { c.pc = 0x004A5F70u; return; } if (c.pc != 0x004A5A98u) [[unlikely]] return; }
L_004A5A98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A5A9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5AA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 251u, depth + 1u); else { c.pc = 0x004A5E70u; return; } if (c.pc != 0x004A5AA8u) [[unlikely]] return; }
L_004A5AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_004A5E3C; } }
L_004A5AB0:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_004A5ACC; }
L_004A5ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004A5AE8; } }
L_004A5AD4:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_004A5AE8; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_004A5AE8:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5AD4u | kUnwind; return; } goto L_004A5AD4; }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B10u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004A5B10u) [[unlikely]] return; }
L_004A5B10:
    st32((c.r[29].w[0] + 164u), c.r[20].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_004A5C10; } }
L_004A5B40:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_004A5C00; }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[20].w[0] + 24u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B84u); st32((c.r[21].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5B84u) [[unlikely]] return; }
L_004A5B84:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B90u); set32(c.r[5], c.r[20].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5B90u) [[unlikely]] return; }
L_004A5B90:
    set32(c.r[4], c.r[21].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B9Cu); set32(c.r[5], c.r[20].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5B9Cu) [[unlikely]] return; }
L_004A5B9C:
    set32(c.r[4], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BA8u); set32(c.r[5], c.r[20].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BA8u) [[unlikely]] return; }
L_004A5BA8:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BB4u); set32(c.r[5], c.r[20].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BB4u) [[unlikely]] return; }
L_004A5BB4:
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BC0u); set32(c.r[5], c.r[20].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BC0u) [[unlikely]] return; }
L_004A5BC0:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BCCu); set32(c.r[5], c.r[20].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BCCu) [[unlikely]] return; }
L_004A5BCC:
    set32(c.r[4], c.r[21].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BD8u); set32(c.r[5], c.r[20].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BD8u) [[unlikely]] return; }
L_004A5BD8:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BE4u); set32(c.r[5], c.r[20].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BE4u) [[unlikely]] return; }
L_004A5BE4:
    set32(c.r[4], c.r[21].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BF0u); set32(c.r[5], c.r[20].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BF0u) [[unlikely]] return; }
L_004A5BF0:
    set32(c.r[4], c.r[21].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5BFCu); set32(c.r[5], c.r[20].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5BFCu) [[unlikely]] return; }
L_004A5BFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004A5C00:
    set32(c.r[20], c.r[20].w[0] + 200u);
    set32(c.r[21], c.r[21].w[0] + 200u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_004A5C10:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5B40u | kUnwind; return; } goto L_004A5B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5CF4; } }
L_004A5C24:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_004A5CE4; }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C68u); st32((c.r[21].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5C68u) [[unlikely]] return; }
L_004A5C68:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C74u); set32(c.r[5], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5C74u) [[unlikely]] return; }
L_004A5C74:
    set32(c.r[4], c.r[21].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C80u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5C80u) [[unlikely]] return; }
L_004A5C80:
    set32(c.r[4], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C8Cu); set32(c.r[5], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5C8Cu) [[unlikely]] return; }
L_004A5C8C:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C98u); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5C98u) [[unlikely]] return; }
L_004A5C98:
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5CA4u); set32(c.r[5], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5CA4u) [[unlikely]] return; }
L_004A5CA4:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5CB0u); set32(c.r[5], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5CB0u) [[unlikely]] return; }
L_004A5CB0:
    set32(c.r[4], c.r[21].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5CBCu); set32(c.r[5], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5CBCu) [[unlikely]] return; }
L_004A5CBC:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5CC8u); set32(c.r[5], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5CC8u) [[unlikely]] return; }
L_004A5CC8:
    set32(c.r[4], c.r[21].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5CD4u); set32(c.r[5], c.r[16].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5CD4u) [[unlikely]] return; }
L_004A5CD4:
    set32(c.r[4], c.r[21].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5CE0u); set32(c.r[5], c.r[16].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5CE0u) [[unlikely]] return; }
L_004A5CE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004A5CE4:
    set32(c.r[21], c.r[21].w[0] + 200u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_004A5CF4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5C24u | kUnwind; return; } goto L_004A5C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_004A5DD8; } }
L_004A5D04:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_004A5DC4; }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[20].w[0] + 24u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D48u); st32((c.r[21].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D48u) [[unlikely]] return; }
L_004A5D48:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D54u); set32(c.r[5], c.r[20].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D54u) [[unlikely]] return; }
L_004A5D54:
    set32(c.r[4], c.r[21].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D60u); set32(c.r[5], c.r[20].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D60u) [[unlikely]] return; }
L_004A5D60:
    set32(c.r[4], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D6Cu); set32(c.r[5], c.r[20].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D6Cu) [[unlikely]] return; }
L_004A5D6C:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D78u); set32(c.r[5], c.r[20].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D78u) [[unlikely]] return; }
L_004A5D78:
    set32(c.r[4], c.r[21].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D84u); set32(c.r[5], c.r[20].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D84u) [[unlikely]] return; }
L_004A5D84:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D90u); set32(c.r[5], c.r[20].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D90u) [[unlikely]] return; }
L_004A5D90:
    set32(c.r[4], c.r[21].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D9Cu); set32(c.r[5], c.r[20].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5D9Cu) [[unlikely]] return; }
L_004A5D9C:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5DA8u); set32(c.r[5], c.r[20].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5DA8u) [[unlikely]] return; }
L_004A5DA8:
    set32(c.r[4], c.r[21].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5DB4u); set32(c.r[5], c.r[20].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5DB4u) [[unlikely]] return; }
L_004A5DB4:
    set32(c.r[4], c.r[21].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5DC0u); set32(c.r[5], c.r[20].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A5DC0u) [[unlikely]] return; }
L_004A5DC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004A5DC4:
    set32(c.r[20], c.r[20].w[0] + 200u);
    set32(c.r[21], c.r[21].w[0] + 200u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_004A5DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5D04u | kUnwind; return; } goto L_004A5D04; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004A5E30; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_004A5E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5E38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E9(c, 298u, depth + 1u); else { c.pc = 0x004A6350u; return; } if (c.pc != 0x004A5E38u) [[unlikely]] return; }
L_004A5E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004A5E3C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004A5E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004A5F4C; } }
L_004A5E94:
    set32(c.r[4], c.r[18].w[0] + 24u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5ECCu); st32((c.r[18].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5ECCu) [[unlikely]] return; }
L_004A5ECC:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5ED8u); set32(c.r[5], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5ED8u) [[unlikely]] return; }
L_004A5ED8:
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5EE4u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5EE4u) [[unlikely]] return; }
L_004A5EE4:
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5EF0u); set32(c.r[5], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5EF0u) [[unlikely]] return; }
L_004A5EF0:
    set32(c.r[4], c.r[18].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5EFCu); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5EFCu) [[unlikely]] return; }
L_004A5EFC:
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F08u); set32(c.r[5], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5F08u) [[unlikely]] return; }
L_004A5F08:
    set32(c.r[4], c.r[18].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F14u); set32(c.r[5], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5F14u) [[unlikely]] return; }
L_004A5F14:
    set32(c.r[4], c.r[18].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F20u); set32(c.r[5], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5F20u) [[unlikely]] return; }
L_004A5F20:
    set32(c.r[4], c.r[18].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F2Cu); set32(c.r[5], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5F2Cu) [[unlikely]] return; }
L_004A5F2C:
    set32(c.r[4], c.r[18].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F38u); set32(c.r[5], c.r[16].w[0] + 168u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5F38u) [[unlikely]] return; }
L_004A5F38:
    set32(c.r[4], c.r[18].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F44u); set32(c.r[5], c.r[16].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5F44u) [[unlikely]] return; }
L_004A5F44:
    set32(c.r[18], c.r[18].w[0] + 200u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_004A5F4C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5E94u | kUnwind; return; } goto L_004A5E94; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A5F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004A604C; } }
L_004A5F94:
    set32(c.r[16], c.r[16].w[0] - 200u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[5], c.r[17].w[0] + 24u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FD4u); st32((c.r[16].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5FD4u) [[unlikely]] return; }
L_004A5FD4:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FE0u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5FE0u) [[unlikely]] return; }
L_004A5FE0:
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FECu); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5FECu) [[unlikely]] return; }
L_004A5FEC:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FF8u); set32(c.r[5], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A5FF8u) [[unlikely]] return; }
L_004A5FF8:
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6004u); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A6004u) [[unlikely]] return; }
L_004A6004:
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6010u); set32(c.r[5], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A6010u) [[unlikely]] return; }
L_004A6010:
    set32(c.r[4], c.r[16].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A601Cu); set32(c.r[5], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A601Cu) [[unlikely]] return; }
L_004A601C:
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6028u); set32(c.r[5], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A6028u) [[unlikely]] return; }
L_004A6028:
    set32(c.r[4], c.r[16].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6034u); set32(c.r[5], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A6034u) [[unlikely]] return; }
L_004A6034:
    set32(c.r[4], c.r[16].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6040u); set32(c.r[5], c.r[17].w[0] + 168u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A6040u) [[unlikely]] return; }
L_004A6040:
    set32(c.r[4], c.r[16].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A604Cu); set32(c.r[5], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x004A604Cu) [[unlikely]] return; }
L_004A604C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 200u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5F94u | kUnwind; return; } goto L_004A5F94; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A6080:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A623C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A60D8u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004A60D8u) [[unlikely]] return; }
L_004A60D8:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_004A61D8; } }
L_004A6108:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_004A61C8; }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], c.r[18].w[0] + 24u);
    set32(c.r[5], c.r[17].w[0] + 24u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A614Cu); st32((c.r[18].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A614Cu) [[unlikely]] return; }
L_004A614C:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6158u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A6158u) [[unlikely]] return; }
L_004A6158:
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6164u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A6164u) [[unlikely]] return; }
L_004A6164:
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6170u); set32(c.r[5], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A6170u) [[unlikely]] return; }
L_004A6170:
    set32(c.r[4], c.r[18].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A617Cu); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A617Cu) [[unlikely]] return; }
L_004A617C:
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6188u); set32(c.r[5], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A6188u) [[unlikely]] return; }
L_004A6188:
    set32(c.r[4], c.r[18].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6194u); set32(c.r[5], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A6194u) [[unlikely]] return; }
L_004A6194:
    set32(c.r[4], c.r[18].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A61A0u); set32(c.r[5], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A61A0u) [[unlikely]] return; }
L_004A61A0:
    set32(c.r[4], c.r[18].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A61ACu); set32(c.r[5], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A61ACu) [[unlikely]] return; }
L_004A61AC:
    set32(c.r[4], c.r[18].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A61B8u); set32(c.r[5], c.r[17].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A61B8u) [[unlikely]] return; }
L_004A61B8:
    set32(c.r[4], c.r[18].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A61C4u); set32(c.r[5], c.r[17].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A61C4u) [[unlikely]] return; }
L_004A61C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004A61C8:
    set32(c.r[17], c.r[17].w[0] + 200u);
    set32(c.r[18], c.r[18].w[0] + 200u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_004A61D8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6108u | kUnwind; return; } goto L_004A6108; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004A6234; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_004A6234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A623Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E9(c, 298u, depth + 1u); else { c.pc = 0x004A6350u; return; } if (c.pc != 0x004A623Cu) [[unlikely]] return; }
L_004A623C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A6260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004A6298; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6290u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00E9(c, 356u, depth + 1u); else { c.pc = 0x004A6A00u; return; } if (c.pc != 0x004A6290u) [[unlikely]] return; }
L_004A6290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A62C4; } }
L_004A6298:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A62C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A62C0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E9(c, 354u, depth + 1u); else { c.pc = 0x004A6960u; return; } if (c.pc != 0x004A62C0u) [[unlikely]] return; }
L_004A62C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A62C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A62D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_004A631C; } }
L_004A630C:
    set32(c.r[18], c.r[18].w[0] - 200u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A631Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 417u, depth + 1u); else { c.pc = 0x004A3290u; return; } if (c.pc != 0x004A631Cu) [[unlikely]] return; }
L_004A631C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A630Cu | kUnwind; return; } goto L_004A630C; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A6350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A63A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6374u);  if (depth < kMaxDepth) unit_00E9(c, 295u, depth + 1u); else { c.pc = 0x004A62D0u; return; } if (c.pc != 0x004A6374u) [[unlikely]] return; }
L_004A6374:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A6394; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6390u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6390u) [[unlikely]] return; }
L_004A6390:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A6394:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A63AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A63A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A63A8u) [[unlikely]] return; }
L_004A63A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A63AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A63C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A6418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A63E4u);  if (depth < kMaxDepth) unit_00E9(c, 370u, depth + 1u); else { c.pc = 0x004A6DC0u; return; } if (c.pc != 0x004A63E4u) [[unlikely]] return; }
L_004A63E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A6404; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6400u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6400u) [[unlikely]] return; }
L_004A6400:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A6404:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A641C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A6418u) [[unlikely]] return; }
L_004A6418:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A641C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A6430:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[4], 0u + 372u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6454u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A6454u) [[unlikely]] return; }
L_004A6454:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004A6474; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A646Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EB(c, 13u, depth + 1u); else { c.pc = 0x004AC120u; return; } if (c.pc != 0x004A646Cu) [[unlikely]] return; }
L_004A646C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004A6474:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A6480; } }
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 1;
L_004A6480:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004A6490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A649C; } }
L_004A6490:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A649Cu); set32(c.r[5], ld32((c.r[28].w[0] - 29636u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A649Cu) [[unlikely]] return; }
L_004A649C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A64ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A64ACu) [[unlikely]] return; }
L_004A64AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A64BCu); set32(c.r[5], c.r[5].w[0] - 6560u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A64BCu) [[unlikely]] return; }
L_004A64BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A64C8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A64C8u) [[unlikely]] return; }
L_004A64C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 6568u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A64E4u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004A64E4u) [[unlikely]] return; }
L_004A64E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_004A650C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6508u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6508u) [[unlikely]] return; }
L_004A6508:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_004A650C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A652C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A652C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A652Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A652Cu) [[unlikely]] return; }
L_004A652C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A653Cu); set32(c.r[5], c.r[5].w[0] - 6592u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A653Cu) [[unlikely]] return; }
L_004A653C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004A65BC; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6550u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004A6550u) [[unlikely]] return; }
L_004A6550:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004A6564; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004A6564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A656Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004A656Cu) [[unlikely]] return; }
L_004A656C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6594; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6594u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6594u) [[unlikely]] return; }
L_004A6594:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A65B8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A65B8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A65B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A65B8u) [[unlikely]] return; }
L_004A65B8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004A65BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A65C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A65C4u) [[unlikely]] return; }
L_004A65C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A65E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[4], 0u + 368u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6604u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A6604u) [[unlikely]] return; }
L_004A6604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004A6640; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 408u, depth + 1u); else { c.pc = 0x004A31A0u; return; } if (c.pc != 0x004A6618u) [[unlikely]] return; }
L_004A6618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26512u);
    set32(c.r[3], c.r[3].w[0] - 26488u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26476u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 10;
L_004A6640:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A664C; } }
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_004A664C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004A665C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A6668; } }
L_004A665C:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6668u); set32(c.r[5], ld32((c.r[28].w[0] - 29636u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6668u) [[unlikely]] return; }
L_004A6668:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6678u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A6678u) [[unlikely]] return; }
L_004A6678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6688u); set32(c.r[5], c.r[5].w[0] - 6512u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A6688u) [[unlikely]] return; }
L_004A6688:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6694u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A6694u) [[unlikely]] return; }
L_004A6694:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 6520u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A66B0u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004A66B0u) [[unlikely]] return; }
L_004A66B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_004A66D8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A66D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A66D4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A66D4u) [[unlikely]] return; }
L_004A66D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_004A66D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A66F8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A66F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A66F8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A66F8u) [[unlikely]] return; }
L_004A66F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6708u); set32(c.r[5], c.r[5].w[0] - 6544u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A6708u) [[unlikely]] return; }
L_004A6708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004A6788; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A671Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004A671Cu) [[unlikely]] return; }
L_004A671C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004A6730; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004A6730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6738u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004A6738u) [[unlikely]] return; }
L_004A6738:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6760; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6760u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6760u) [[unlikely]] return; }
L_004A6760:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A6784; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A6784; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6784u) [[unlikely]] return; }
L_004A6784:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004A6788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6790u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A6790u) [[unlikely]] return; }
L_004A6790:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A67B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[4], 0u + 464u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A67D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A67D4u) [[unlikely]] return; }
L_004A67D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004A67F4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A67ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 372u, depth + 1u); else { c.pc = 0x00492570u; return; } if (c.pc != 0x004A67ECu) [[unlikely]] return; }
L_004A67EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004A67F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A6800; } }
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 1;
L_004A6800:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004A6810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A681C; } }
L_004A6810:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A681Cu); set32(c.r[5], ld32((c.r[28].w[0] - 29636u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A681Cu) [[unlikely]] return; }
L_004A681C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A682Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A682Cu) [[unlikely]] return; }
L_004A682C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A683Cu); set32(c.r[5], c.r[5].w[0] - 6464u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A683Cu) [[unlikely]] return; }
L_004A683C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6848u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A6848u) [[unlikely]] return; }
L_004A6848:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 6472u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6864u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004A6864u) [[unlikely]] return; }
L_004A6864:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_004A688C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6888u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6888u) [[unlikely]] return; }
L_004A6888:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_004A688C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A68AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A68AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A68ACu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A68ACu) [[unlikely]] return; }
L_004A68AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A68BCu); set32(c.r[5], c.r[5].w[0] - 6496u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A68BCu) [[unlikely]] return; }
L_004A68BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004A693C; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A68D0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004A68D0u) [[unlikely]] return; }
L_004A68D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004A68E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004A68E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A68ECu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004A68ECu) [[unlikely]] return; }
L_004A68EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6914; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6914u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6914u) [[unlikely]] return; }
L_004A6914:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A6938; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A6938; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6938u) [[unlikely]] return; }
L_004A6938:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004A693C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6944u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A6944u) [[unlikely]] return; }
L_004A6944:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A6960:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_004A6970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A69F0; } }
L_004A6970:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_004A6990; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_004A6990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_004A69D0; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004A69C0; } }
L_004A69A4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_004A69C0:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A69A4u | kUnwind; return; } goto L_004A69A4; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_004A69D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_004A69E0; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_004A69E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004A69F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A6A00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004A6DA0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_004A6A6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6A60u); set32(c.r[5], c.r[5].w[0] - 6149u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004A6A60u) [[unlikely]] return; }
L_004A6A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6A68u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004A6A68u) [[unlikely]] return; }
L_004A6A68:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_004A6A6C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_004A6C08; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_004A6AA0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_004A6AA0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_004A6B34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004A6AE0; } }
L_004A6AB4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_004A6AD0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_004A6AD0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004A6AE0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6AB4u | kUnwind; return; } goto L_004A6AB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004A6B20; } }
L_004A6AF4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_004A6B10; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_004A6B10:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004A6B20:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6AF4u | kUnwind; return; } goto L_004A6AF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6BD4; } }
L_004A6B34:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_004A6B6C; } }
L_004A6B40:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_004A6B5C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_004A6B5C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004A6B6C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6B40u | kUnwind; return; } goto L_004A6B40; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_004A6BC8; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A6BA0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_004A6BA0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6BC8; } }
L_004A6BAC:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_004A6BC8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6BACu | kUnwind; return; } goto L_004A6BAC; }
L_004A6BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6BF8; } }
L_004A6BDC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_004A6BF8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6BDCu | kUnwind; return; } goto L_004A6BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004A6DA4; } }
L_004A6C08:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_004A6C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004A6C30; } }
L_004A6C28:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004A6C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_004A6C50; } }
L_004A6C38:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_004A6C4C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_004A6C4C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004A6C50:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6C38u | kUnwind; return; } goto L_004A6C38; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6C64u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004A6C64u) [[unlikely]] return; }
L_004A6C64:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_004A6CB0; } }
L_004A6C84:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_004A6CA0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_004A6CA0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_004A6CB0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6C84u | kUnwind; return; } goto L_004A6C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6CF0; } }
L_004A6CC4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_004A6CE0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_004A6CE0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_004A6CF0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6CC4u | kUnwind; return; } goto L_004A6CC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_004A6D30; } }
L_004A6D00:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_004A6D1C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_004A6D1C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_004A6D30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6D00u | kUnwind; return; } goto L_004A6D00; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_004A6D88; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_004A6D88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_004A6DA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6DA0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A6DA0u) [[unlikely]] return; }
L_004A6DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004A6DA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A6DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_004A6DD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A48E0u | kUnwind; return; } goto L_004A48E0; }
L_004A6DE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4D10u | kUnwind; return; } goto L_004A4D10; }
L_004A6DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A6E80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A6E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A6E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6E44u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A6E44u) [[unlikely]] return; }
L_004A6E44:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A6E6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A6E68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004A6E68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A6E6C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A6E84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A6E80u) [[unlikely]] return; }
L_004A6E80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A6E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A6EA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004822D0u | kUnwind; return; } [[clang::musttail]] return unit_00E0(c, 267u, depth); }
L_004A6EB0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 6064u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6EF4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A6EF4u) [[unlikely]] return; }
L_004A6EF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F00u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004A6F00u) [[unlikely]] return; }
L_004A6F00:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_004A6F14; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004A6F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F1Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004A6F1Cu) [[unlikely]] return; }
L_004A6F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F24u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004A6F24u) [[unlikely]] return; }
L_004A6F24:
    set32(c.r[23], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F38u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00D0(c, 484u, depth + 1u); else { c.pc = 0x004434D0u; return; } if (c.pc != 0x004A6F38u) [[unlikely]] return; }
L_004A6F38:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[22].sd[0] <= 0) { set32(c.r[3], ld32((c.r[18].w[0] + 64u)));  goto L_004A721C; }
    set32(c.r[2], ld32((c.r[23].w[0] + 108u)));
    set32(c.r[3], c.r[22].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[20], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 48u);  if (t) { goto L_004A6F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004A6F78; } }
L_004A6F74:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004A6F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F80u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004A6F80u) [[unlikely]] return; }
L_004A6F80:
    set32(c.r[19], c.r[2].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F8Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A6F8Cu) [[unlikely]] return; }
L_004A6F8C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_004A6FF0; }
    set32(c.r[2], ld32((c.r[23].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004A6FEC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6FBCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x004A6FBCu) [[unlikely]] return; }
L_004A6FBC:
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[19].w[0] + 1u);  goto L_004A6FD4; }
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004A6FD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6FE4u); set32(c.r[5], c.r[5].w[0] - 6056u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A6FE4u) [[unlikely]] return; }
L_004A6FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_004A700C; } }
L_004A6FEC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_004A6FF0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 1u);  goto L_004A7000; }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004A7000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7008u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A7008u) [[unlikely]] return; }
L_004A7008:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_004A700C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 193u);  goto L_004A701C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004A701C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7028u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A7028u) [[unlikely]] return; }
L_004A7028:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_004A7040; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7040; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_004A7040:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A7054; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 6096u);  if (t) { goto L_004A7058; } }
L_004A7054:
    set32(c.r[6], c.r[6].w[0] - 6112u);
    c.budget -= 1;
L_004A7058:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A7064u) [[unlikely]] return; }
L_004A7064:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[21].w[0] + 28u));  goto L_004A7094; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A708Cu); set32(c.r[6], c.r[6].w[0] - 6032u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A708Cu) [[unlikely]] return; }
L_004A708C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[21].w[0] + 20u));  if (t) { goto L_004A70E4; } }
L_004A7094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A70A0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A70A0u) [[unlikely]] return; }
L_004A70A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004A70E0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A70C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A70C0u) [[unlikely]] return; }
L_004A70C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A70E0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A70E0u); set32(c.r[6], c.r[6].w[0] - 6023u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x004A70E0u) [[unlikely]] return; }
L_004A70E0:
    c.f[20] = ld32((c.r[21].w[0] + 20u));
    c.budget -= 1;
L_004A70E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A7114; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A710Cu); set32(c.r[6], c.r[6].w[0] - 6022u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A710Cu) [[unlikely]] return; }
L_004A710C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A715C; } }
L_004A7114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A711Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A711Cu) [[unlikely]] return; }
L_004A711C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004A715C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A713Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A713Cu) [[unlikely]] return; }
L_004A713C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A715C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A715Cu); set32(c.r[6], c.r[6].w[0] - 6023u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x004A715Cu) [[unlikely]] return; }
L_004A715C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 6016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7174u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004A7174u) [[unlikely]] return; }
L_004A7174:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_004A7188; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004A7188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7190u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A7190u) [[unlikely]] return; }
L_004A7190:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A71A8u); set32(c.r[6], c.r[6].w[0] - 6003u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004A71A8u) [[unlikely]] return; }
L_004A71A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_004A71BC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004A71BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A71C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A71C8u) [[unlikely]] return; }
L_004A71C8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004A71F4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A71F0u); set32(c.r[6], c.r[6].w[0] - 6080u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A71F0u) [[unlikely]] return; }
L_004A71F0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_004A71F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A71FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A71FCu) [[unlikely]] return; }
L_004A71FC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7208u) [[unlikely]] return; }
L_004A7208:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7214u) [[unlikely]] return; }
L_004A7214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A72A4; } }
L_004A721C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_004A7230; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7230; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_004A7230:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A7244; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 6096u);  if (t) { goto L_004A7248; } }
L_004A7244:
    set32(c.r[6], c.r[6].w[0] - 6112u);
    c.budget -= 1;
L_004A7248:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A7254u) [[unlikely]] return; }
L_004A7254:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7268u); set32(c.r[6], c.r[6].w[0] - 6022u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A7268u) [[unlikely]] return; }
L_004A7268:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A727Cu); set32(c.r[6], c.r[6].w[0] - 6000u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A727Cu) [[unlikely]] return; }
L_004A727C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7290u); set32(c.r[6], c.r[6].w[0] - 6022u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A7290u) [[unlikely]] return; }
L_004A7290:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A72A4u); set32(c.r[6], c.r[6].w[0] - 6022u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A72A4u) [[unlikely]] return; }
L_004A72A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A72B4u); set32(c.r[5], c.r[5].w[0] - 5974u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A72B4u) [[unlikely]] return; }
L_004A72B4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 239u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A72C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004A72C4u) [[unlikely]] return; }
L_004A72C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));  goto L_004A72EC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A72E8; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A72E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004A72E8u) [[unlikely]] return; }
L_004A72E8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 1;
L_004A72EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  goto L_004A7334; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004A7304; }
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004A7304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A730Cu);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004A730Cu) [[unlikely]] return; }
L_004A730C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A731Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004A731Cu) [[unlikely]] return; }
L_004A731C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7330u) [[unlikely]] return; }
L_004A7330:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_004A7334:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7348u); st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7348u) [[unlikely]] return; }
L_004A7348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004A7380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A739Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004A739Cu) [[unlikely]] return; }
L_004A739C:
    set32(c.r[6], ld32((c.r[2].w[0] + 320u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] + 104u)));
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { goto L_004A7410; } }
L_004A73B8:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_004A7410; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_004A7404; }
    set32(c.r[2], c.r[7].w[0] + 1u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004A740C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A7420; } }
L_004A7404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_004A741C; } }
L_004A740C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_004A7410:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A73B8u | kUnwind; return; } goto L_004A73B8; }
L_004A741C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A7420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7428u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 268u, depth + 1u); else { c.pc = 0x004822E0u; return; } if (c.pc != 0x004A7428u) [[unlikely]] return; }
L_004A7428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A7440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7470u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7470u) [[unlikely]] return; }
L_004A7470:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004A7544; }
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_004A74AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_004A74B4; } }
L_004A74AC:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_004A74B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A7540; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 25180u)));
    set32(c.r[5], c.r[5].w[0] - 5904u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A74D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 114u, depth + 1u); else { c.pc = 0x00434B60u; return; } if (c.pc != 0x004A74D4u) [[unlikely]] return; }
L_004A74D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_004A7500; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004A7500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x004A7508u) [[unlikely]] return; }
L_004A7508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A751Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 114u, depth + 1u); else { c.pc = 0x00434B60u; return; } if (c.pc != 0x004A751Cu) [[unlikely]] return; }
L_004A751C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] - 5892u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7540u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A7540u) [[unlikely]] return; }
L_004A7540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A7544:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A7560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A758Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A758Cu) [[unlikely]] return; }
L_004A758C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_004A759C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A7654; } }
L_004A759C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A75ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A75ACu) [[unlikely]] return; }
L_004A75AC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A75C4u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x004A75C4u) [[unlikely]] return; }
L_004A75C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_004A7634; } }
L_004A75CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A75D4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x004A75D4u) [[unlikely]] return; }
L_004A75D4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A75E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A75E8u) [[unlikely]] return; }
L_004A75E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_004A7628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A75F8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x004A75F8u) [[unlikely]] return; }
L_004A75F8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_004A7618; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7614u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7614u) [[unlikely]] return; }
L_004A7614:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004A7618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7620u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x004A7620u) [[unlikely]] return; }
L_004A7620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7630; } }
L_004A7628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7630u);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x004A7630u) [[unlikely]] return; }
L_004A7630:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_004A7634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A763Cu);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x004A763Cu) [[unlikely]] return; }
L_004A763C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A75CCu | kUnwind; return; } goto L_004A75CC; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7650u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x004A7650u) [[unlikely]] return; }
L_004A7650:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004A7654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A7670:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A76D0u); set32(c.r[6], c.r[29].w[0] + 360u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A76D0u) [[unlikely]] return; }
L_004A76D0:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A76E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A76E4u) [[unlikely]] return; }
L_004A76E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A76FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_004A7C78; } }
L_004A76FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[6].w[0] - 5891u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7714u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004A7714u) [[unlikely]] return; }
L_004A7714:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[5].w[0] - 5889u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A772Cu); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A772Cu) [[unlikely]] return; }
L_004A772C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004A778C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7740u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A7740u) [[unlikely]] return; }
L_004A7740:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A774Cu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A774Cu) [[unlikely]] return; }
L_004A774C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_004A7774; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A7770; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7770u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A7770u) [[unlikely]] return; }
L_004A7770:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_004A7774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A777Cu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A777Cu) [[unlikely]] return; }
L_004A777C:
    c.f[21] = ld32((c.r[29].w[0] + 340u));
    c.f[22] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 336u));  if (t) { goto L_004A77B0; } }
L_004A778C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A779Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A779Cu) [[unlikely]] return; }
L_004A779C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A77A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A77A8u) [[unlikely]] return; }
L_004A77A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004A7C74; } }
L_004A77B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A77C0u); set32(c.r[5], c.r[5].w[0] - 5877u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A77C0u) [[unlikely]] return; }
L_004A77C0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.f[25] = ld32((c.r[28].w[0] - 32564u));  goto L_004A7800; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A77D8u); set32(c.r[5], c.r[29].w[0] + 356u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004A77D8u) [[unlikely]] return; }
L_004A77D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[25] = ld32((c.r[29].w[0] + 356u));  goto L_004A7800; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A77FC; } }
    c.f[12] = ld32((c.r[29].w[0] + 356u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A77FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004A77FCu) [[unlikely]] return; }
L_004A77FC:
    c.f[25] = ld32((c.r[29].w[0] + 356u));
    c.budget -= 1;
L_004A7800:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7810u); set32(c.r[5], c.r[5].w[0] - 5868u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A7810u) [[unlikely]] return; }
L_004A7810:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004A7858; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7828u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004A7828u) [[unlikely]] return; }
L_004A7828:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[24] = ld32((c.r[29].w[0] + 352u));  goto L_004A785C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A784C; } }
    c.f[12] = ld32((c.r[29].w[0] + 352u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A784Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004A784Cu) [[unlikely]] return; }
L_004A784C:
    c.f[24] = ld32((c.r[29].w[0] + 352u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A785C; } }
L_004A7858:
    c.f[24] = 0u;
    c.budget -= 1;
L_004A785C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A786Cu); set32(c.r[5], c.r[5].w[0] - 5857u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A786Cu) [[unlikely]] return; }
L_004A786C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);  goto L_004A78B4; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7884u); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004A7884u) [[unlikely]] return; }
L_004A7884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[23] = ld32((c.r[29].w[0] + 348u));  goto L_004A78B8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A78A8; } }
    c.f[12] = ld32((c.r[29].w[0] + 348u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A78A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004A78A8u) [[unlikely]] return; }
L_004A78A8:
    c.f[23] = ld32((c.r[29].w[0] + 348u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A78B8; } }
L_004A78B4:
    c.f[23] = c.r[2].w[0];
    c.budget -= 1;
L_004A78B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A78C8u); set32(c.r[5], c.r[5].w[0] - 5839u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A78C8u) [[unlikely]] return; }
L_004A78C8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004A7908; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A78E0u); set32(c.r[5], c.r[29].w[0] + 367u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004A78E0u) [[unlikely]] return; }
L_004A78E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = ld8((c.r[29].w[0] + 367u));  goto L_004A7908; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A7904; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 367u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7904u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004A7904u) [[unlikely]] return; }
L_004A7904:
    c.r[21].d[0] = ld8((c.r[29].w[0] + 367u));
    c.budget -= 1;
L_004A7908:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7918u); set32(c.r[5], c.r[5].w[0] - 5829u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A7918u) [[unlikely]] return; }
L_004A7918:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_004A795C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7930u); set32(c.r[5], c.r[29].w[0] + 366u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004A7930u) [[unlikely]] return; }
L_004A7930:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld8((c.r[29].w[0] + 366u));  goto L_004A7958; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A7954; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 366u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7954u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004A7954u) [[unlikely]] return; }
L_004A7954:
    c.r[16].d[0] = ld8((c.r[29].w[0] + 366u));
    c.budget -= 1;
L_004A7958:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_004A795C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7964u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A7964u) [[unlikely]] return; }
L_004A7964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7974u); set32(c.r[5], c.r[5].w[0] - 5817u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004A7974u) [[unlikely]] return; }
L_004A7974:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[18].w[0] + 80u)));  goto L_004A79B4; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7988u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004A7988u) [[unlikely]] return; }
L_004A7988:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_004A799C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004A799C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A79A4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A79A4u) [[unlikely]] return; }
L_004A79A4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A79B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A79B0u) [[unlikely]] return; }
L_004A79B0:
    set32(c.r[20], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004A79B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A79BCu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A79BCu) [[unlikely]] return; }
L_004A79BC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  goto L_004A7AC0; }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A79D0u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A79D0u) [[unlikely]] return; }
L_004A79D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[20];  goto L_004A7A6C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] - 24576u);
    c.budget -= 3;
L_004A79E4:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 30368u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[11], c.r[2].w[0] + 44u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[10], c.r[10].w[0] - 30400u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[9], c.r[2].w[0] + 68u);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[8], c.r[8].w[0] - 26864u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[7], c.r[7].w[0] - 26768u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] + 72u);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), c.r[9].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[7].w[0]);
    st16((c.r[2].w[0] + 92u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 94u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[2].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[18].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 34;
L_004A7A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7A74u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7A74u) [[unlikely]] return; }
L_004A7A74:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7A80u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7A80u) [[unlikely]] return; }
L_004A7A80:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7A8Cu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7A8Cu) [[unlikely]] return; }
L_004A7A8C:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7A98u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7A98u) [[unlikely]] return; }
L_004A7A98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7AB8u); set32(c.r[5], c.r[5].w[0] - 5806u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A7AB8u) [[unlikely]] return; }
L_004A7AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_004A7BD4; } }
L_004A7AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7AC8u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A7AC8u) [[unlikely]] return; }
L_004A7AC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[20];  goto L_004A7B64; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] - 24576u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 30464u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[11], c.r[2].w[0] + 52u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[10], c.r[10].w[0] - 30496u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[9], c.r[2].w[0] + 76u);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[8], c.r[8].w[0] - 26896u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[7], c.r[7].w[0] - 26768u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[11].w[0]);
    set32(c.r[3], c.r[2].w[0] + 80u);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[7].w[0]);
    st16((c.r[2].w[0] + 100u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 102u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[18].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 37;
L_004A7B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B6Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7B6Cu) [[unlikely]] return; }
L_004A7B6C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B78u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7B78u) [[unlikely]] return; }
L_004A7B78:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B84u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7B84u) [[unlikely]] return; }
L_004A7B84:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B90u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7B90u) [[unlikely]] return; }
L_004A7B90:
    c.f[12] = c.f[24];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B9Cu); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7B9Cu) [[unlikely]] return; }
L_004A7B9C:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BA8u); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004A7BA8u) [[unlikely]] return; }
L_004A7BA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[10].d[0] = c.r[30].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BD0u); set32(c.r[5], c.r[5].w[0] - 5772u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A7BD0u) [[unlikely]] return; }
L_004A7BD0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_004A7BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BDCu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A7BDCu) [[unlikely]] return; }
L_004A7BDC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BF0u); set32(c.r[5], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7BF0u) [[unlikely]] return; }
L_004A7BF0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7BFCu) [[unlikely]] return; }
L_004A7BFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 212u, depth + 1u); else { c.pc = 0x00145D40u; return; } if (c.pc != 0x004A7C0Cu) [[unlikely]] return; }
L_004A7C0C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[18], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);  if (t) { goto L_004A7C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 248u)));  if (t) { goto L_004A7C38; } }
L_004A7C34:
    set32(c.r[5], c.r[29].w[0] + 241u);
    c.budget -= 1;
L_004A7C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C40u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A7C40u) [[unlikely]] return; }
L_004A7C40:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C58u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7C58u) [[unlikely]] return; }
L_004A7C58:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7C64u) [[unlikely]] return; }
L_004A7C64:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A7C70u) [[unlikely]] return; }
L_004A7C70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A7C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_004A7C78:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_004A7CC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7D28; } }
L_004A7CE0:
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004A7D28; }
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7D00u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0011(c, 194u, depth + 1u); else { c.pc = 0x001459A0u; return; } if (c.pc != 0x004A7D00u) [[unlikely]] return; }
L_004A7D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A7D24; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7D24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7D24u) [[unlikely]] return; }
L_004A7D24:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004A7D28:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7CE0u | kUnwind; return; } goto L_004A7CE0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A7D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A7DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 26944u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7D88u); set32(c.r[5], c.r[5].w[0] + 32208u);  if (depth < kMaxDepth) unit_00A5(c, 160u, depth + 1u); else { c.pc = 0x00397F00u; return; } if (c.pc != 0x004A7D88u) [[unlikely]] return; }
L_004A7D88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7D94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 107u, depth + 1u); else { c.pc = 0x004A0FB0u; return; } if (c.pc != 0x004A7D94u) [[unlikely]] return; }
L_004A7D94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A7DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7DACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A7DACu) [[unlikely]] return; }
L_004A7DAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A7DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A7DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A7E14; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A7E00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7DFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7DFCu) [[unlikely]] return; }
L_004A7DFC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A7E00:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A7E18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A7E14u) [[unlikely]] return; }
L_004A7E14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A7E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A7E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E5Cu); set32(c.r[5], c.r[5].w[0] - 5703u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A7E5Cu) [[unlikely]] return; }
L_004A7E5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E70u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00E8(c, 112u, depth + 1u); else { c.pc = 0x004A1040u; return; } if (c.pc != 0x004A7E70u) [[unlikely]] return; }
L_004A7E70:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A7E7Cu) [[unlikely]] return; }
L_004A7E7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26944u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7EA4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A7EA4u) [[unlikely]] return; }
L_004A7EA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32560u);
    set32(c.r[6], c.r[6].w[0] + 32208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7EC4u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004A7EC4u) [[unlikely]] return; }
L_004A7EC4:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004A7F00; } }
L_004A7ED0:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 5892u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7EECu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A7EECu) [[unlikely]] return; }
L_004A7EEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_004A7F00:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7ED0u | kUnwind; return; } goto L_004A7ED0; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A7F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7F44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A7F44u) [[unlikely]] return; }
L_004A7F44:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A7F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00EA(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[17].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] - 26896u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004A7FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 102u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A7FC4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004A7FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7FC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A7FC4u) [[unlikely]] return; }
L_004A7FC4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A7FFC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30496u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A7FF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A7FF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004A7FF8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A7FFC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 1;
    [[clang::musttail]] return unit_00EA(c, 1u, depth);
}

}
