#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F0[4096] = {
    1, 0, 2, 3, 4, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180,
    0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0,
    0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277,
    0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0,
    0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0,
    0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0,
    0, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
};

void unit_00F0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004C0000;
    case 2u: goto L_004C0008;
    case 3u: goto L_004C000C;
    case 4u: goto L_004C0010;
    case 5u: goto L_004C0018;
    case 6u: goto L_004C001C;
    case 7u: goto L_004C002C;
    case 8u: goto L_004C003C;
    case 9u: goto L_004C005C;
    case 10u: goto L_004C006C;
    case 11u: goto L_004C0088;
    case 12u: goto L_004C009C;
    case 13u: goto L_004C00AC;
    case 14u: goto L_004C0108;
    case 15u: goto L_004C0168;
    case 16u: goto L_004C01B0;
    case 17u: goto L_004C0254;
    case 18u: goto L_004C0274;
    case 19u: goto L_004C02A0;
    case 20u: goto L_004C02DC;
    case 21u: goto L_004C0304;
    case 22u: goto L_004C0330;
    case 23u: goto L_004C0370;
    case 24u: goto L_004C0398;
    case 25u: goto L_004C03A4;
    case 26u: goto L_004C03C0;
    case 27u: goto L_004C03E0;
    case 28u: goto L_004C0400;
    case 29u: goto L_004C0420;
    case 30u: goto L_004C0444;
    case 31u: goto L_004C0464;
    case 32u: goto L_004C0484;
    case 33u: goto L_004C0494;
    case 34u: goto L_004C04A4;
    case 35u: goto L_004C04C4;
    case 36u: goto L_004C04DC;
    case 37u: goto L_004C04F8;
    case 38u: goto L_004C0518;
    case 39u: goto L_004C0528;
    case 40u: goto L_004C0544;
    case 41u: goto L_004C0558;
    case 42u: goto L_004C0568;
    case 43u: goto L_004C057C;
    case 44u: goto L_004C0588;
    case 45u: goto L_004C05BC;
    case 46u: goto L_004C05C8;
    case 47u: goto L_004C05E0;
    case 48u: goto L_004C0604;
    case 49u: goto L_004C0620;
    case 50u: goto L_004C0630;
    case 51u: goto L_004C0650;
    case 52u: goto L_004C0680;
    case 53u: goto L_004C0698;
    case 54u: goto L_004C06B0;
    case 55u: goto L_004C06D0;
    case 56u: goto L_004C06E0;
    case 57u: goto L_004C06FC;
    case 58u: goto L_004C0710;
    case 59u: goto L_004C0724;
    case 60u: goto L_004C0744;
    case 61u: goto L_004C075C;
    case 62u: goto L_004C0780;
    case 63u: goto L_004C07B8;
    case 64u: goto L_004C07D4;
    case 65u: goto L_004C07E8;
    case 66u: goto L_004C0800;
    case 67u: goto L_004C0828;
    case 68u: goto L_004C083C;
    case 69u: goto L_004C084C;
    case 70u: goto L_004C0858;
    case 71u: goto L_004C08C0;
    case 72u: goto L_004C08E0;
    case 73u: goto L_004C08E8;
    case 74u: goto L_004C0908;
    case 75u: goto L_004C092C;
    case 76u: goto L_004C0A54;
    case 77u: goto L_004C0A5C;
    case 78u: goto L_004C0A78;
    case 79u: goto L_004C0B00;
    case 80u: goto L_004C0B54;
    case 81u: goto L_004C0B64;
    case 82u: goto L_004C0B74;
    case 83u: goto L_004C0B90;
    case 84u: goto L_004C0BA0;
    case 85u: goto L_004C0BB8;
    case 86u: goto L_004C0BC8;
    case 87u: goto L_004C0BE0;
    case 88u: goto L_004C0BF0;
    case 89u: goto L_004C0C00;
    case 90u: goto L_004C0C10;
    case 91u: goto L_004C0C1C;
    case 92u: goto L_004C0C28;
    case 93u: goto L_004C0C38;
    case 94u: goto L_004C0C48;
    case 95u: goto L_004C0C54;
    case 96u: goto L_004C0C60;
    case 97u: goto L_004C0C70;
    case 98u: goto L_004C0C80;
    case 99u: goto L_004C0C8C;
    case 100u: goto L_004C0C98;
    case 101u: goto L_004C0CA8;
    case 102u: goto L_004C0CB8;
    case 103u: goto L_004C0CC4;
    case 104u: goto L_004C0CD0;
    case 105u: goto L_004C0CE4;
    case 106u: goto L_004C0CFC;
    case 107u: goto L_004C0D0C;
    case 108u: goto L_004C0D20;
    case 109u: goto L_004C0D34;
    case 110u: goto L_004C0DF4;
    case 111u: goto L_004C0E00;
    case 112u: goto L_004C0E1C;
    case 113u: goto L_004C0E30;
    case 114u: goto L_004C0E3C;
    case 115u: goto L_004C0E60;
    case 116u: goto L_004C0EA8;
    case 117u: goto L_004C0ED0;
    case 118u: goto L_004C0F08;
    case 119u: goto L_004C0F20;
    case 120u: goto L_004C0F30;
    case 121u: goto L_004C0F3C;
    case 122u: goto L_004C0F44;
    case 123u: goto L_004C0F60;
    case 124u: goto L_004C0F68;
    case 125u: goto L_004C0F84;
    case 126u: goto L_004C0F9C;
    case 127u: goto L_004C0FAC;
    case 128u: goto L_004C0FB8;
    case 129u: goto L_004C0FC0;
    case 130u: goto L_004C0FCC;
    case 131u: goto L_004C1024;
    case 132u: goto L_004C1060;
    case 133u: goto L_004C10B8;
    case 134u: goto L_004C10D0;
    case 135u: goto L_004C10F0;
    case 136u: goto L_004C1130;
    case 137u: goto L_004C1140;
    case 138u: goto L_004C1164;
    case 139u: goto L_004C117C;
    case 140u: goto L_004C11B0;
    case 141u: goto L_004C11C0;
    case 142u: goto L_004C11D0;
    case 143u: goto L_004C11E0;
    case 144u: goto L_004C120C;
    case 145u: goto L_004C121C;
    case 146u: goto L_004C124C;
    case 147u: goto L_004C1274;
    case 148u: goto L_004C1280;
    case 149u: goto L_004C12A0;
    case 150u: goto L_004C12C4;
    case 151u: goto L_004C12F4;
    case 152u: goto L_004C1318;
    case 153u: goto L_004C1340;
    case 154u: goto L_004C1368;
    case 155u: goto L_004C1378;
    case 156u: goto L_004C13A8;
    case 157u: goto L_004C13D0;
    case 158u: goto L_004C13E0;
    case 159u: goto L_004C1434;
    case 160u: goto L_004C1440;
    case 161u: goto L_004C1450;
    case 162u: goto L_004C1488;
    case 163u: goto L_004C1494;
    case 164u: goto L_004C14B8;
    case 165u: goto L_004C14D0;
    case 166u: goto L_004C14DC;
    case 167u: goto L_004C14E8;
    case 168u: goto L_004C14FC;
    case 169u: goto L_004C1528;
    case 170u: goto L_004C1534;
    case 171u: goto L_004C1540;
    case 172u: goto L_004C1548;
    case 173u: goto L_004C156C;
    case 174u: goto L_004C157C;
    case 175u: goto L_004C15A0;
    case 176u: goto L_004C15B0;
    case 177u: goto L_004C15C8;
    case 178u: goto L_004C15E4;
    case 179u: goto L_004C15F0;
    case 180u: goto L_004C15FC;
    case 181u: goto L_004C1610;
    case 182u: goto L_004C161C;
    case 183u: goto L_004C1670;
    case 184u: goto L_004C167C;
    case 185u: goto L_004C16B0;
    case 186u: goto L_004C16E8;
    case 187u: goto L_004C1714;
    case 188u: goto L_004C1744;
    case 189u: goto L_004C1750;
    case 190u: goto L_004C1768;
    case 191u: goto L_004C1790;
    case 192u: goto L_004C17C0;
    case 193u: goto L_004C17EC;
    case 194u: goto L_004C1818;
    case 195u: goto L_004C1848;
    case 196u: goto L_004C1854;
    case 197u: goto L_004C186C;
    case 198u: goto L_004C1890;
    case 199u: goto L_004C18C0;
    case 200u: goto L_004C18E0;
    case 201u: goto L_004C1900;
    case 202u: goto L_004C1920;
    case 203u: goto L_004C193C;
    case 204u: goto L_004C1954;
    case 205u: goto L_004C195C;
    case 206u: goto L_004C1970;
    case 207u: goto L_004C1984;
    case 208u: goto L_004C199C;
    case 209u: goto L_004C19B0;
    case 210u: goto L_004C19C4;
    case 211u: goto L_004C19E0;
    case 212u: goto L_004C19F8;
    case 213u: goto L_004C1A20;
    case 214u: goto L_004C1A2C;
    case 215u: goto L_004C1A48;
    case 216u: goto L_004C1A54;
    case 217u: goto L_004C1A60;
    case 218u: goto L_004C1A78;
    case 219u: goto L_004C1A80;
    case 220u: goto L_004C1A9C;
    case 221u: goto L_004C1AA8;
    case 222u: goto L_004C1AB4;
    case 223u: goto L_004C1AD0;
    case 224u: goto L_004C1AF4;
    case 225u: goto L_004C1B04;
    case 226u: goto L_004C1B10;
    case 227u: goto L_004C1B24;
    case 228u: goto L_004C1B38;
    case 229u: goto L_004C1B48;
    case 230u: goto L_004C1B54;
    case 231u: goto L_004C1B5C;
    case 232u: goto L_004C1B6C;
    case 233u: goto L_004C1BA0;
    case 234u: goto L_004C1BC0;
    case 235u: goto L_004C1BD4;
    case 236u: goto L_004C1BE8;
    case 237u: goto L_004C1BF8;
    case 238u: goto L_004C1C04;
    case 239u: goto L_004C1C14;
    case 240u: goto L_004C1C34;
    case 241u: goto L_004C1C60;
    case 242u: goto L_004C1C70;
    case 243u: goto L_004C1C7C;
    case 244u: goto L_004C1C8C;
    case 245u: goto L_004C1CAC;
    case 246u: goto L_004C1CD0;
    case 247u: goto L_004C1CE0;
    case 248u: goto L_004C1CEC;
    case 249u: goto L_004C1CFC;
    case 250u: goto L_004C1D1C;
    case 251u: goto L_004C1D48;
    case 252u: goto L_004C1D58;
    case 253u: goto L_004C1D64;
    case 254u: goto L_004C1D74;
    case 255u: goto L_004C1D94;
    case 256u: goto L_004C1DB4;
    case 257u: goto L_004C1DC4;
    case 258u: goto L_004C1DD0;
    case 259u: goto L_004C1DE0;
    case 260u: goto L_004C1E00;
    case 261u: goto L_004C1E20;
    case 262u: goto L_004C1E30;
    case 263u: goto L_004C1E3C;
    case 264u: goto L_004C1E4C;
    case 265u: goto L_004C1E6C;
    case 266u: goto L_004C1E94;
    case 267u: goto L_004C1EA4;
    case 268u: goto L_004C1EB0;
    case 269u: goto L_004C1EC0;
    case 270u: goto L_004C1EE0;
    case 271u: goto L_004C1F00;
    case 272u: goto L_004C1F10;
    case 273u: goto L_004C1F1C;
    case 274u: goto L_004C1F2C;
    case 275u: goto L_004C1F4C;
    case 276u: goto L_004C1F6C;
    case 277u: goto L_004C1F7C;
    case 278u: goto L_004C1F88;
    case 279u: goto L_004C1F98;
    case 280u: goto L_004C1FB8;
    case 281u: goto L_004C1FD8;
    case 282u: goto L_004C1FE8;
    case 283u: goto L_004C1FF4;
    case 284u: goto L_004C2004;
    case 285u: goto L_004C2024;
    case 286u: goto L_004C2044;
    case 287u: goto L_004C2054;
    case 288u: goto L_004C2060;
    case 289u: goto L_004C2070;
    case 290u: goto L_004C2090;
    case 291u: goto L_004C20B0;
    case 292u: goto L_004C20C0;
    case 293u: goto L_004C20CC;
    case 294u: goto L_004C20DC;
    case 295u: goto L_004C20FC;
    case 296u: goto L_004C2118;
    case 297u: goto L_004C2128;
    case 298u: goto L_004C2134;
    case 299u: goto L_004C2144;
    case 300u: goto L_004C2164;
    case 301u: goto L_004C2184;
    case 302u: goto L_004C2194;
    case 303u: goto L_004C21A4;
    case 304u: goto L_004C21C4;
    case 305u: goto L_004C21D0;
    case 306u: goto L_004C21DC;
    case 307u: goto L_004C21F0;
    case 308u: goto L_004C2210;
    case 309u: goto L_004C2250;
    case 310u: goto L_004C2280;
    case 311u: goto L_004C22A8;
    case 312u: goto L_004C22E0;
    case 313u: goto L_004C2314;
    case 314u: goto L_004C2330;
    case 315u: goto L_004C2354;
    case 316u: goto L_004C2370;
    case 317u: goto L_004C2394;
    case 318u: goto L_004C23AC;
    case 319u: goto L_004C23D0;
    case 320u: goto L_004C23E0;
    case 321u: goto L_004C2404;
    case 322u: goto L_004C2410;
    case 323u: goto L_004C2420;
    case 324u: goto L_004C2430;
    case 325u: goto L_004C2440;
    case 326u: goto L_004C245C;
    case 327u: goto L_004C2470;
    case 328u: goto L_004C24A0;
    case 329u: goto L_004C2500;
    case 330u: goto L_004C2510;
    case 331u: goto L_004C2520;
    case 332u: goto L_004C2540;
    case 333u: goto L_004C2554;
    case 334u: goto L_004C2570;
    case 335u: goto L_004C258C;
    case 336u: goto L_004C2610;
    case 337u: goto L_004C2630;
    case 338u: goto L_004C2648;
    case 339u: goto L_004C2670;
    case 340u: goto L_004C26AC;
    case 341u: goto L_004C26C4;
    case 342u: goto L_004C26E0;
    case 343u: goto L_004C2714;
    case 344u: goto L_004C2724;
    case 345u: goto L_004C2740;
    case 346u: goto L_004C2788;
    case 347u: goto L_004C27AC;
    case 348u: goto L_004C27BC;
    case 349u: goto L_004C286C;
    case 350u: goto L_004C2874;
    case 351u: goto L_004C288C;
    case 352u: goto L_004C28A0;
    case 353u: goto L_004C28C8;
    case 354u: goto L_004C28E8;
    case 355u: goto L_004C2910;
    case 356u: goto L_004C2950;
    case 357u: goto L_004C29B0;
    case 358u: goto L_004C2A50;
    case 359u: goto L_004C2AB0;
    case 360u: goto L_004C2AC0;
    case 361u: goto L_004C2AE0;
    case 362u: goto L_004C2B38;
    case 363u: goto L_004C2B64;
    case 364u: goto L_004C2B84;
    case 365u: goto L_004C2C08;
    case 366u: goto L_004C2C5C;
    case 367u: goto L_004C2C94;
    case 368u: goto L_004C2CB8;
    case 369u: goto L_004C2CE8;
    case 370u: goto L_004C2D00;
    case 371u: goto L_004C2D14;
    case 372u: goto L_004C2D20;
    case 373u: goto L_004C2D34;
    case 374u: goto L_004C2D3C;
    case 375u: goto L_004C2D50;
    case 376u: goto L_004C2D58;
    case 377u: goto L_004C2D88;
    case 378u: goto L_004C2D98;
    case 379u: goto L_004C2DA0;
    case 380u: goto L_004C2DA8;
    case 381u: goto L_004C2DB0;
    case 382u: goto L_004C2DC0;
    case 383u: goto L_004C2DCC;
    case 384u: goto L_004C2DD4;
    case 385u: goto L_004C2DE4;
    case 386u: goto L_004C2E04;
    case 387u: goto L_004C2E2C;
    case 388u: goto L_004C2E3C;
    case 389u: goto L_004C2E48;
    case 390u: goto L_004C2E54;
    case 391u: goto L_004C2E64;
    case 392u: goto L_004C2E70;
    case 393u: goto L_004C2E7C;
    case 394u: goto L_004C2F00;
    case 395u: goto L_004C2F0C;
    case 396u: goto L_004C2F30;
    case 397u: goto L_004C2F3C;
    case 398u: goto L_004C3028;
    case 399u: goto L_004C3044;
    case 400u: goto L_004C304C;
    case 401u: goto L_004C3060;
    case 402u: goto L_004C3068;
    case 403u: goto L_004C307C;
    case 404u: goto L_004C30F8;
    case 405u: goto L_004C3114;
    case 406u: goto L_004C3120;
    case 407u: goto L_004C3128;
    case 408u: goto L_004C3138;
    case 409u: goto L_004C3148;
    case 410u: goto L_004C3158;
    case 411u: goto L_004C3168;
    case 412u: goto L_004C3178;
    case 413u: goto L_004C3198;
    case 414u: goto L_004C31A4;
    case 415u: goto L_004C31C8;
    case 416u: goto L_004C31E4;
    case 417u: goto L_004C31F0;
    case 418u: goto L_004C3214;
    case 419u: goto L_004C3220;
    case 420u: goto L_004C342C;
    case 421u: goto L_004C3434;
    case 422u: goto L_004C3444;
    case 423u: goto L_004C3454;
    case 424u: goto L_004C3464;
    case 425u: goto L_004C3474;
    case 426u: goto L_004C3484;
    case 427u: goto L_004C34A4;
    case 428u: goto L_004C358C;
    case 429u: goto L_004C359C;
    case 430u: goto L_004C35AC;
    case 431u: goto L_004C35BC;
    case 432u: goto L_004C35CC;
    case 433u: goto L_004C35DC;
    case 434u: goto L_004C35FC;
    case 435u: goto L_004C361C;
    case 436u: goto L_004C3640;
    case 437u: goto L_004C364C;
    case 438u: goto L_004C366C;
    case 439u: goto L_004C3690;
    case 440u: goto L_004C369C;
    case 441u: goto L_004C36D0;
    case 442u: goto L_004C3700;
    case 443u: goto L_004C3720;
    case 444u: goto L_004C3744;
    case 445u: goto L_004C3760;
    case 446u: goto L_004C3798;
    case 447u: goto L_004C37B8;
    case 448u: goto L_004C37DC;
    case 449u: goto L_004C3800;
    case 450u: goto L_004C3810;
    case 451u: goto L_004C3858;
    case 452u: goto L_004C38A0;
    case 453u: goto L_004C38E8;
    case 454u: goto L_004C3938;
    case 455u: goto L_004C3944;
    case 456u: goto L_004C3968;
    case 457u: goto L_004C3974;
    case 458u: goto L_004C39D0;
    case 459u: goto L_004C3A20;
    case 460u: goto L_004C3A8C;
    case 461u: goto L_004C3A98;
    case 462u: goto L_004C3ABC;
    case 463u: goto L_004C3AC8;
    case 464u: goto L_004C3CCC;
    case 465u: goto L_004C3D44;
    case 466u: goto L_004C3DA0;
    case 467u: goto L_004C3DE4;
    case 468u: goto L_004C3DF0;
    case 469u: goto L_004C3E28;
    case 470u: goto L_004C3E58;
    case 471u: goto L_004C3E60;
    case 472u: goto L_004C3E84;
    case 473u: goto L_004C3E98;
    case 474u: goto L_004C3EA8;
    case 475u: goto L_004C3EB0;
    case 476u: goto L_004C3ED8;
    case 477u: goto L_004C3EF0;
    case 478u: goto L_004C3EF8;
    case 479u: goto L_004C3F1C;
    case 480u: goto L_004C3F28;
    case 481u: goto L_004C3F4C;
    case 482u: goto L_004C3F6C;
    case 483u: goto L_004C3F74;
    case 484u: goto L_004C3F88;
    case 485u: goto L_004C3F90;
    case 486u: goto L_004C3FA4;
    case 487u: goto L_004C3FAC;
    case 488u: goto L_004C3FD4;
    case 489u: goto L_004C3FF0;
    default: bad_entry(c, 0x004C0000u); return;
    }
L_004C0000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0008u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0008u) [[unlikely]] return; }
L_004C0008:
    st32((c.r[16].w[0] + 464u), c.r[23].w[0]);
    c.budget -= 1;
L_004C000C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_004C002C; } }
    goto L_004C0014;
L_004C0010:
    c.budget -= 1;
L_004C0014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C001Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C001Cu) [[unlikely]] return; }
    goto L_004C001C;
L_004C0018:
    c.budget -= 1;
L_004C001C:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C002Cu); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C002Cu) [[unlikely]] return; }
L_004C002C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C003Cu); set32(c.r[5], c.r[5].w[0] - 165u);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004C003Cu) [[unlikely]] return; }
L_004C003C:
    set32(c.r[18], ld32((c.r[16].w[0] + 496u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[21].d[0]; set32(c.r[23], c.r[16].w[0] + 496u);  if (t) { goto L_004C00AC; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 496u), c.r[21].w[0]);  goto L_004C008C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C005Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C005Cu) [[unlikely]] return; }
L_004C005C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C006Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C006Cu) [[unlikely]] return; }
L_004C006C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C0088; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0088u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0088u) [[unlikely]] return; }
L_004C0088:
    st32((c.r[16].w[0] + 496u), c.r[21].w[0]);
    c.budget -= 1;
L_004C008C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  goto L_004C00B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C009Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C009Cu) [[unlikely]] return; }
L_004C009C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C00ACu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C00ACu) [[unlikely]] return; }
L_004C00AC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 1;
L_004C00B0:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[23].w[0])));  goto L_004C00CC; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 4;
L_004C00CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C00E0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C00E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004C0250; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] << 6);
    set32(c.r[7], c.r[6].w[0] + 48u);
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 528u);
    c.budget -= 8;
L_004C0108:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0108u | kUnwind; return; } goto L_004C0108; } }
    c.f[2] = ld32((c.r[7].w[0] + 48u));
    c.f[1] = ld32((c.r[7].w[0] + 52u));
    c.f[0] = ld32((c.r[7].w[0] + 56u));
    st32((c.r[16].w[0] + 576u), c.f[2]);
    st32((c.r[16].w[0] + 580u), c.f[1]);
    st32((c.r[16].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 60u));
    st32((c.r[16].w[0] + 588u), c.f[0]);
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_004C0154; }
    set32(c.r[7], c.r[3].w[0] + 48u);
    c.budget -= 1;
L_004C0154:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 784u);  goto L_004C01A8; }
    set32(c.r[5], c.r[16].w[0] + 784u);
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_004C0168:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0168u | kUnwind; return; } goto L_004C0168; } }
    c.f[2] = ld32((c.r[7].w[0] + 48u));
    c.f[1] = ld32((c.r[7].w[0] + 52u));
    c.f[0] = ld32((c.r[7].w[0] + 56u));
    st32((c.r[16].w[0] + 832u), c.f[2]);
    st32((c.r[16].w[0] + 836u), c.f[1]);
    st32((c.r[16].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 844u), c.f[0]);  if (t) { goto L_004C01B0; } }
L_004C01A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C01B0u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x004C01B0u) [[unlikely]] return; }
L_004C01B0:
    c.f[1] = ld32((c.r[16].w[0] + 580u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[3].w[0] - 1348u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 304u), c.r[6].w[0]);
    set32(c.r[3], c.r[17].w[0] << 1);
    st32((c.r[29].w[0] + 312u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 324u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 328u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 576u));
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[3] = ld32((c.r[16].w[0] + 584u));
    st32((c.r[29].w[0] + 336u), 0u);
    c.f[0] = ld32((c.r[3].w[0] - 1352u));
    st32((c.r[29].w[0] + 340u), 0u);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 344u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    c.f[2] = ld32((c.r[4].w[0] - 1344u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 1040u), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[5].w[0] + 1044u), c.f[4]);
    st32((c.r[5].w[0] + 1048u), c.f[2]);
    c.budget -= 40;
L_004C0250:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004C0254:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_004C0264; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_004C0264:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BF6DCu | kUnwind; return; } [[clang::musttail]] return unit_00EF(c, 342u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004C0274:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_004C02A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C02C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C0358; } }
L_004C02C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));  goto L_004C02F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C02DCu);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x004C02DCu) [[unlikely]] return; }
L_004C02DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C02EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004C0358; } }
L_004C02EC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.budget -= 1;
L_004C02F0:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004C0358; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004C0344; } }
L_004C0304:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_004C0314; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004C0320; } }
L_004C0314:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004C0320:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004C0344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0330u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004C0330u) [[unlikely]] return; }
L_004C0330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004C035C; } }
L_004C0340:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004C0344:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 218u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0304u | kUnwind; return; } goto L_004C0304; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004C035C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C0370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1204u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004C039C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0398u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004C0398u) [[unlikely]] return; }
L_004C0398:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C039C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C03A4u);  if (depth < kMaxDepth) unit_00EF(c, 89u, depth + 1u); else { c.pc = 0x004BD1F0u; return; } if (c.pc != 0x004C03A4u) [[unlikely]] return; }
L_004C03A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 132u), 0u);  goto L_004C03C4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C03C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C03C0u) [[unlikely]] return; }
L_004C03C0:
    st32((c.r[16].w[0] + 132u), 0u);
    c.budget -= 1;
L_004C03C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 420u), 0u);  goto L_004C03E4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C03E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C03E0u) [[unlikely]] return; }
L_004C03E0:
    st32((c.r[16].w[0] + 420u), 0u);
    c.budget -= 1;
L_004C03E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 416u), 0u);  goto L_004C0404; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0400u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0400u) [[unlikely]] return; }
L_004C0400:
    st32((c.r[16].w[0] + 416u), 0u);
    c.budget -= 1;
L_004C0404:
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 412u), 0u);  goto L_004C0424; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0420u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0420u) [[unlikely]] return; }
L_004C0420:
    st32((c.r[16].w[0] + 412u), 0u);
    c.budget -= 1;
L_004C0424:
    set32(c.r[6], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 432u)));  goto L_004C044C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0444u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 553u, depth + 1u); else { c.pc = 0x004F7860u; return; } if (c.pc != 0x004C0444u) [[unlikely]] return; }
L_004C0444:
    st32((c.r[16].w[0] + 428u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 2;
L_004C044C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 432u), 0u);  goto L_004C0468; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0464u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0464u) [[unlikely]] return; }
L_004C0464:
    st32((c.r[16].w[0] + 432u), 0u);
    c.budget -= 1;
L_004C0468:
    set32(c.r[4], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 436u), 0u);  goto L_004C0488; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0484u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0484u) [[unlikely]] return; }
L_004C0484:
    st32((c.r[16].w[0] + 436u), 0u);
    c.budget -= 1;
L_004C0488:
    set32(c.r[4], ld32((c.r[16].w[0] + 440u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0494u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F4(c, 101u, depth + 1u); else { c.pc = 0x004D0E60u; return; } if (c.pc != 0x004C0494u) [[unlikely]] return; }
L_004C0494:
    st32((c.r[16].w[0] + 440u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 444u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C04A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F9(c, 23u, depth + 1u); else { c.pc = 0x004E4730u; return; } if (c.pc != 0x004C04A4u) [[unlikely]] return; }
L_004C04A4:
    st32((c.r[16].w[0] + 444u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 448u), 0u);  goto L_004C04C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C04C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C04C4u) [[unlikely]] return; }
L_004C04C4:
    st32((c.r[16].w[0] + 448u), 0u);
    c.budget -= 1;
L_004C04C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 172u)));  goto L_004C0500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C04DCu);  if (depth < kMaxDepth) unit_00AF(c, 271u, depth + 1u); else { c.pc = 0x003BE440u; return; } if (c.pc != 0x004C04DCu) [[unlikely]] return; }
L_004C04DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 176u), 0u);  goto L_004C04FC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C04F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C04F8u) [[unlikely]] return; }
L_004C04F8:
    st32((c.r[16].w[0] + 176u), 0u);
    c.budget -= 1;
L_004C04FC:
    set32(c.r[17], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_004C0500:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_004C056C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004C0548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0518u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C0518u) [[unlikely]] return; }
L_004C0518:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0528u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C0528u) [[unlikely]] return; }
L_004C0528:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0544; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0544u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0544u) [[unlikely]] return; }
L_004C0544:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0548:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 172u), 0u);  if (t) { goto L_004C0568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0558u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C0558u) [[unlikely]] return; }
L_004C0558:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0568u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C0568u) [[unlikely]] return; }
L_004C0568:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_004C056C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 128u)));  goto L_004C0590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C057Cu);  if (depth < kMaxDepth) unit_00F5(c, 83u, depth + 1u); else { c.pc = 0x004D48F0u; return; } if (c.pc != 0x004C057Cu) [[unlikely]] return; }
L_004C057C:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0588u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00F5(c, 560u, depth + 1u); else { c.pc = 0x004D77F0u; return; } if (c.pc != 0x004C0588u) [[unlikely]] return; }
L_004C0588:
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 2;
L_004C0590:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), 0u);  goto L_004C05CC; }
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004C05C0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C05BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C05BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C05BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 172u, depth + 1u); else { c.pc = 0x00402710u; return; } if (c.pc != 0x004C05BCu) [[unlikely]] return; }
L_004C05BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004C05C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C05C8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C05C8u) [[unlikely]] return; }
L_004C05C8:
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 1;
L_004C05CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 68u)));  goto L_004C05E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C05E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 486u, depth + 1u); else { c.pc = 0x003BFDD0u; return; } if (c.pc != 0x004C05E0u) [[unlikely]] return; }
L_004C05E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_004C05E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  goto L_004C05F4; }
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_004C05F4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  goto L_004C0628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0604u); set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));  if (depth < kMaxDepth) unit_00BE(c, 31u, depth + 1u); else { c.pc = 0x003F8880u; return; } if (c.pc != 0x004C0604u) [[unlikely]] return; }
L_004C0604:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), 0u);  goto L_004C0624; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0620u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0620u) [[unlikely]] return; }
L_004C0620:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_004C0624:
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 1;
L_004C0628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0630u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x004C0630u) [[unlikely]] return; }
L_004C0630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C0650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C075C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0680u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F0(c, 23u, depth + 1u); else { c.pc = 0x004C0370u; return; } if (c.pc != 0x004C0680u) [[unlikely]] return; }
L_004C0680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[17].w[0] + 484u);
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0698u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004C0698u) [[unlikely]] return; }
L_004C0698:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[17].w[0] + 452u);
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C06B0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004C06B0u) [[unlikely]] return; }
L_004C06B0:
    set32(c.r[2], c.r[17].w[0] + 172u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 156u);  goto L_004C0700; }
    set32(c.r[18], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004C06FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C06D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C06D0u) [[unlikely]] return; }
L_004C06D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C06E0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C06E0u) [[unlikely]] return; }
L_004C06E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C06FC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C06FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C06FCu) [[unlikely]] return; }
L_004C06FC:
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.budget -= 1;
L_004C0700:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 48u);  goto L_004C0714; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C0710u) [[unlikely]] return; }
L_004C0710:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_004C0714:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C0724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C0724u) [[unlikely]] return; }
L_004C0724:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004C0748; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0744u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x004C0744u) [[unlikely]] return; }
L_004C0744:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004C0748:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004C0760; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C075Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C075Cu) [[unlikely]] return; }
L_004C075C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004C0760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C0780:
    set32(c.r[29], c.r[29].w[0] - 272u);
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
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C07B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x004C07B8u) [[unlikely]] return; }
L_004C07B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C07D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x004C07D4u) [[unlikely]] return; }
L_004C07D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 24416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C07E8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004C07E8u) [[unlikely]] return; }
L_004C07E8:
    st32((c.r[19].w[0] + 76u), 0u);
    set32(c.r[4], c.r[19].w[0] + 156u);
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 84u), 0u);
    st32((c.r[19].w[0] + 88u), 0u);
    st32((c.r[19].w[0] + 96u), 0u);
    c.budget -= 6;
L_004C0800:
    st32((c.r[19].w[0] + 100u), 0u);
    st32((c.r[19].w[0] + 104u), 0u);
    st32((c.r[19].w[0] + 108u), 0u);
    st32((c.r[19].w[0] + 112u), 0u);
    st32((c.r[19].w[0] + 116u), 0u);
    st32((c.r[19].w[0] + 136u), 0u);
    st32((c.r[19].w[0] + 140u), 0u);
    st32((c.r[19].w[0] + 144u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0828u); st32((c.r[19].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004C0828u) [[unlikely]] return; }
L_004C0828:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 172u), 0u);  if (t) { goto L_004C084C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C083Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C083Cu) [[unlikely]] return; }
L_004C083C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C084Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C084Cu) [[unlikely]] return; }
L_004C084C:
    set32(c.r[4], c.r[19].w[0] + 196u);
    set32(c.r[3], c.r[19].w[0] + 244u);
    c.f[0] = 0u;
    c.budget -= 3;
L_004C0858:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0858u | kUnwind; return; } goto L_004C0858; } }
    st32((c.r[19].w[0] + 244u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st32((c.r[19].w[0] + 248u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st32((c.r[19].w[0] + 252u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 256u), c.f[0]);
    set32(c.r[4], c.r[19].w[0] + 452u);
    st32((c.r[19].w[0] + 260u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 22944u);
    st32((c.r[19].w[0] + 264u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    st32((c.r[19].w[0] + 268u), c.f[0]);
    set32(c.r[7], 0u + 4u);
    st32((c.r[19].w[0] + 272u), c.f[0]);
    set32(c.r[8], 0u + 8u);
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C08C0u); st32((c.r[19].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004C08C0u) [[unlikely]] return; }
L_004C08C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[19].w[0] + 484u);
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C08E0u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004C08E0u) [[unlikely]] return; }
L_004C08E0:
    set32(c.r[4], c.r[19].w[0] + 528u);
    set32(c.r[3], c.r[19].w[0] + 784u);
    c.budget -= 2;
L_004C08E8:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C08E8u | kUnwind; return; } goto L_004C08E8; } }
    set32(c.r[4], c.r[19].w[0] + 1040u);
    c.budget -= 1;
L_004C0908:
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0908u | kUnwind; return; } goto L_004C0908; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[19].w[0] + 1088u);
    c.budget -= 2;
L_004C092C:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C092Cu | kUnwind; return; } goto L_004C092C; } }
    st32((c.r[19].w[0] + 1108u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[19].w[0] + 1112u), 0u);
    set32(c.r[4], 0u - 3u);
    st32((c.r[19].w[0] + 1116u), c.f[0]);
    set32(c.r[10], c.r[2].w[0] << 1);
    c.r[9].d[0] = ld8((c.r[19].w[0] + 1200u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 65u);
    set32(c.r[5], c.r[2].w[0] << 6);
    c.r[9].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    st8((c.r[19].w[0] + 1200u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[19].w[0] + 1204u), 0u);
    st32((c.r[19].w[0] + 284u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 288u), c.f[0]);
    st32((c.r[19].w[0] + 292u), c.f[0]);
    st32((c.r[19].w[0] + 296u), c.f[0]);
    st32((c.r[19].w[0] + 300u), c.f[0]);
    st32((c.r[19].w[0] + 304u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 308u), c.f[0]);
    st32((c.r[19].w[0] + 312u), c.f[0]);
    st32((c.r[19].w[0] + 316u), c.f[0]);
    st32((c.r[19].w[0] + 320u), c.f[0]);
    st32((c.r[19].w[0] + 324u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 328u), c.f[0]);
    st32((c.r[19].w[0] + 332u), c.f[0]);
    st32((c.r[19].w[0] + 336u), c.f[0]);
    st32((c.r[19].w[0] + 340u), c.f[0]);
    st32((c.r[19].w[0] + 344u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 176u), 0u);
    st32((c.r[19].w[0] + 440u), 0u);
    st32((c.r[19].w[0] + 444u), 0u);
    st32((c.r[19].w[0] + 124u), 0u);
    st32((c.r[19].w[0] + 132u), 0u);
    st32((c.r[19].w[0] + 372u), 0u);
    st32((c.r[19].w[0] + 356u), 0u);
    st32((c.r[19].w[0] + 360u), 0u);
    st32((c.r[19].w[0] + 68u), 0u);
    st32((c.r[19].w[0] + 152u), 0u);
    st32((c.r[19].w[0] + 428u), 0u);
    st32((c.r[19].w[0] + 432u), 0u);
    st32((c.r[19].w[0] + 436u), 0u);
    st32((c.r[19].w[0] + 448u), 0u);
    st32((c.r[19].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 396u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 1201u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[19].w[0] + 1201u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 1200u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 1200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[19].w[0] + 1202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 67;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A54u); st8((c.r[19].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004C0A54u) [[unlikely]] return; }
L_004C0A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A5Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004C0A5Cu) [[unlikely]] return; }
L_004C0A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A78u); st32((c.r[29].w[0] + 152u), 0u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004C0A78u) [[unlikely]] return; }
L_004C0A78:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[19].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[19].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[19].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[19].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[19].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[19].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[19].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[19].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[19].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[19].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[19].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[19].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[19].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[19].w[0] + 344u), c.f[0]);
    c.f[0] = 0u;
    c.budget -= 34;
L_004C0B00:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 180u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0B00u | kUnwind; return; } goto L_004C0B00; } }
    st32((c.r[19].w[0] + 244u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[4], 0u + 160u);
    st32((c.r[19].w[0] + 252u), c.f[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 256u), c.f[0]);
    st32((c.r[19].w[0] + 260u), c.f[0]);
    st32((c.r[19].w[0] + 264u), c.f[0]);
    st32((c.r[19].w[0] + 364u), 0u);
    st32((c.r[19].w[0] + 352u), 0u);
    st32((c.r[19].w[0] + 368u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0B54u); st32((c.r[19].w[0] + 392u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C0B54u) [[unlikely]] return; }
L_004C0B54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 412u), c.r[2].w[0]);  goto L_004C0B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0B64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 79u, depth + 1u); else { c.pc = 0x003ED0E0u; return; } if (c.pc != 0x004C0B64u) [[unlikely]] return; }
L_004C0B64:
    st32((c.r[19].w[0] + 412u), c.r[2].w[0]);
    c.budget -= 1;
L_004C0B68:
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0B74u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C0B74u) [[unlikely]] return; }
L_004C0B74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 416u), c.r[2].w[0]);  goto L_004C0B94; }
    set32(c.r[6], ld32((c.r[19].w[0] + 412u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0B90u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 58u, depth + 1u); else { c.pc = 0x004D0600u; return; } if (c.pc != 0x004C0B90u) [[unlikely]] return; }
L_004C0B90:
    st32((c.r[19].w[0] + 416u), c.r[2].w[0]);
    c.budget -= 1;
L_004C0B94:
    set32(c.r[4], 0u + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BA0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C0BA0u) [[unlikely]] return; }
L_004C0BA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 420u), c.r[2].w[0]);  goto L_004C0BBC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BB8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 182u, depth + 1u); else { c.pc = 0x004E5A20u; return; } if (c.pc != 0x004C0BB8u) [[unlikely]] return; }
L_004C0BB8:
    st32((c.r[19].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 1;
L_004C0BBC:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C0BC8u) [[unlikely]] return; }
L_004C0BC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 132u), c.r[2].w[0]);  goto L_004C0BE4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BE0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 192u, depth + 1u); else { c.pc = 0x004E5D30u; return; } if (c.pc != 0x004C0BE0u) [[unlikely]] return; }
L_004C0BE0:
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_004C0BE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BF0u); st32((c.r[29].w[0] + 268u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0BF0u) [[unlikely]] return; }
L_004C0BF0:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C0C00u) [[unlikely]] return; }
L_004C0C00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 264u)));  goto L_004C0C14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 11u, depth + 1u); else { c.pc = 0x004040C0u; return; } if (c.pc != 0x004C0C10u) [[unlikely]] return; }
L_004C0C10:
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_004C0C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C1Cu); st32((c.r[19].w[0] + 372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0C1Cu) [[unlikely]] return; }
L_004C0C1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C28u); st32((c.r[29].w[0] + 260u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0C28u) [[unlikely]] return; }
L_004C0C28:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C0C38u) [[unlikely]] return; }
L_004C0C38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 256u)));  goto L_004C0C4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 11u, depth + 1u); else { c.pc = 0x004040C0u; return; } if (c.pc != 0x004C0C48u) [[unlikely]] return; }
L_004C0C48:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 1;
L_004C0C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C54u); st32((c.r[19].w[0] + 356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0C54u) [[unlikely]] return; }
L_004C0C54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C60u); st32((c.r[29].w[0] + 252u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0C60u) [[unlikely]] return; }
L_004C0C60:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C0C70u) [[unlikely]] return; }
L_004C0C70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  goto L_004C0C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 11u, depth + 1u); else { c.pc = 0x004040C0u; return; } if (c.pc != 0x004C0C80u) [[unlikely]] return; }
L_004C0C80:
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004C0C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C8Cu); st32((c.r[19].w[0] + 360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0C8Cu) [[unlikely]] return; }
L_004C0C8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C98u); st32((c.r[29].w[0] + 244u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0C98u) [[unlikely]] return; }
L_004C0C98:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C0CA8u) [[unlikely]] return; }
L_004C0CA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 240u)));  goto L_004C0CBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 11u, depth + 1u); else { c.pc = 0x004040C0u; return; } if (c.pc != 0x004C0CB8u) [[unlikely]] return; }
L_004C0CB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_004C0CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CC4u); st32((c.r[19].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C0CC4u) [[unlikely]] return; }
L_004C0CC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CD0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x004C0CD0u) [[unlikely]] return; }
L_004C0CD0:
    set32(c.r[2], 0u + 13u);
    set32(c.r[4], 0u + 2352u);
    st32((c.r[19].w[0] + 424u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CE4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C0CE4u) [[unlikely]] return; }
L_004C0CE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  goto L_004C0D00; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CFCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F5(c, 565u, depth + 1u); else { c.pc = 0x004D78C0u; return; } if (c.pc != 0x004C0CFCu) [[unlikely]] return; }
L_004C0CFC:
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_004C0D00:
    set32(c.r[4], 0u + 252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C0D0Cu) [[unlikely]] return; }
L_004C0D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0D20; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 23u, depth + 1u); else { c.pc = 0x004E8740u; return; } if (c.pc != 0x004C0D20u) [[unlikely]] return; }
L_004C0D20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D34u); set32(c.r[5], c.r[5].w[0] - 159u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004C0D34u) [[unlikely]] return; }
L_004C0D34:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 1200u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 17u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[9], 0u - 3u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[10], c.r[4].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[4].w[0] << 2);
    st8((c.r[19].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0] + 380u), c.r[11].w[0]);
    set32(c.r[3], 0u - 5u);
    c.r[8].d[0] = ld8((c.r[19].w[0] + 1201u));
    c.f[0] = ld32((c.r[28].w[0] - 31716u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 151u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    st8((c.r[19].w[0] + 1201u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 1201u));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 1201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 1140u), c.f[0]);
    st32((c.r[19].w[0] + 1136u), c.f[0]);
    st32((c.r[19].w[0] + 1132u), c.f[0]);
    st32((c.r[19].w[0] + 72u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1202u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st8((c.r[19].w[0] + 1202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 1144u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 1152u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 1148u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 388u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 384u), 0u);
    st32((c.r[19].w[0] + 1156u), 0u);
    st32((c.r[19].w[0] + 1160u), c.r[11].w[0]);
    st32((c.r[19].w[0] + 1164u), c.r[11].w[0]);
    st32((c.r[19].w[0] + 1168u), c.r[11].w[0]);
    st32((c.r[19].w[0] + 1172u), c.r[11].w[0]);
    st32((c.r[19].w[0] + 1176u), c.r[11].w[0]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0DF4u); st32((c.r[19].w[0] + 348u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004C0DF4u) [[unlikely]] return; }
L_004C0DF4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E00u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004C0E00u) [[unlikely]] return; }
L_004C0E00:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 225u);  goto L_004C0E14; }
    set32(c.r[4], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_004C0E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E1Cu);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004C0E1Cu) [[unlikely]] return; }
L_004C0E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 1204u), c.r[2].w[0]);  if (t) { goto L_004C0E30; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004C0E30u) [[unlikely]] return; }
L_004C0E30:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C0E3Cu) [[unlikely]] return; }
L_004C0E3C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004C0E60:
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
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004C0EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C1030; } }
L_004C0EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0EA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0EA8u) [[unlikely]] return; }
L_004C0EA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_004C0EB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C1030; } }
L_004C0EB8:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004C1030; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004C1020; } }
L_004C0ED0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 212u)));  goto L_004C0EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004C0EF0; } }
L_004C0EE4:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004C0EF0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004C0F00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004C1010; } }
L_004C0F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0F08u) [[unlikely]] return; }
L_004C0F08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004C0F18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C1010; } }
L_004C0F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F20u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x004C0F20u) [[unlikely]] return; }
L_004C0F20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004C1010; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F30u); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x004C0F30u) [[unlikely]] return; }
L_004C0F30:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004C1000; } }
L_004C0F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F44u); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x004C0F44u) [[unlikely]] return; }
L_004C0F44:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 208u);  goto L_004C0F58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C0F6C; } }
L_004C0F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F60u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x004C0F60u) [[unlikely]] return; }
L_004C0F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x004C0F68u) [[unlikely]] return; }
L_004C0F68:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004C0F6C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004C0F7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004C0FF0; } }
L_004C0F7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0F84u) [[unlikely]] return; }
L_004C0F84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004C0F94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C0FF0; } }
L_004C0F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0F9Cu);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x004C0F9Cu) [[unlikely]] return; }
L_004C0F9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004C0FF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0FACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x004C0FACu) [[unlikely]] return; }
L_004C0FAC:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004C0FDC; } }
L_004C0FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0FC0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x004C0FC0u) [[unlikely]] return; }
L_004C0FC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0FCCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 115u, depth + 1u); else { c.pc = 0x004C0E60u; return; } if (c.pc != 0x004C0FCCu) [[unlikely]] return; }
L_004C0FCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_004C0FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C0FF0; } }
L_004C0FDC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0FB8u | kUnwind; return; } goto L_004C0FB8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004C0FF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004C1000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C1010; } }
L_004C1000:
    c.r[2].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0F3Cu | kUnwind; return; } goto L_004C0F3C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004C1010:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004C1020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C1030; } }
L_004C1020:
    c.r[2].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004C1024:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0ED0u | kUnwind; return; } goto L_004C0ED0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004C1030:
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
L_004C1060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C10D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004C10B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004C10B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004C10B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C10B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C10B8u) [[unlikely]] return; }
L_004C10B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004C10D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C10D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C10D0u) [[unlikely]] return; }
L_004C10D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004C10D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C10F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004C1118; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004C1110; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004C1110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C111C; } }
L_004C1118:
    set32(c.r[2], c.r[2].w[0] + 240u);
    c.budget -= 1;
L_004C111C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C1130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 304u);  c.pc = t; return; }
L_004C1140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1164u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_00B9(c, 179u, depth + 1u); else { c.pc = 0x003E5520u; return; } if (c.pc != 0x004C1164u) [[unlikely]] return; }
L_004C1164:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C117Cu); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C117Cu) [[unlikely]] return; }
L_004C117C:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C11B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C11C0u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C11C0u) [[unlikely]] return; }
L_004C11C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004C11D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C11D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 234u, depth + 1u); else { c.pc = 0x004C1BC0u; return; } if (c.pc != 0x004C11D0u) [[unlikely]] return; }
L_004C11D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004C11D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C11E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 1684u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C120Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x004C120Cu) [[unlikely]] return; }
L_004C120C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C121Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C121Cu) [[unlikely]] return; }
L_004C121C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C123C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 26656u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_004C123C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C124Cu); set32(c.r[4], c.r[4].w[0] + 1709u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x004C124Cu) [[unlikely]] return; }
L_004C124C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1726u);
    set32(c.r[6], c.r[6].w[0] + 1709u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1274u); set32(c.r[9], c.r[9].w[0] + 1740u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x004C1274u) [[unlikely]] return; }
L_004C1274:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1280u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C1280u) [[unlikely]] return; }
L_004C1280:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C12BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C12A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004C12A0u) [[unlikely]] return; }
L_004C12A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_004C12BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C12C4u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x004C12C4u) [[unlikely]] return; }
L_004C12C4:
    set32(c.r[4], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[2].w[0] + 4u);  if (t) { goto L_004C1324; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C12F4u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004C12F4u) [[unlikely]] return; }
L_004C12F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1318u); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x004C1318u) [[unlikely]] return; }
L_004C1318:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[3].w[0]);
    c.budget -= 3;
L_004C1324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C1340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 1741u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1368u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x004C1368u) [[unlikely]] return; }
L_004C1368:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C1378u) [[unlikely]] return; }
L_004C1378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C1398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 24288u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_004C1398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C13A8u); set32(c.r[4], c.r[4].w[0] + 1771u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x004C13A8u) [[unlikely]] return; }
L_004C13A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1793u);
    set32(c.r[6], c.r[6].w[0] + 1771u);
    set32(c.r[7], 0u + 776u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C13D0u); set32(c.r[9], c.r[9].w[0] + 1740u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x004C13D0u) [[unlikely]] return; }
L_004C13D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C13E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[7].d[0] = c.r[5].d[0] << 32;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 8192u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1434u); set32(c.r[6], c.r[6].w[0] + 1808u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004C1434u) [[unlikely]] return; }
L_004C1434:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x004C1440u) [[unlikely]] return; }
L_004C1440:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1450u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004C1450u) [[unlikely]] return; }
L_004C1450:
    set32(c.r[2], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004C146C; }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1846u);  if (t) { goto L_004C1470; } }
L_004C146C:
    set32(c.r[21], c.r[21].w[0] + 1860u);
    c.budget -= 1;
L_004C1470:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 788u)));  goto L_004C162C; }
    set32(c.r[4], c.r[20].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1488u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004C1488u) [[unlikely]] return; }
L_004C1488:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1494u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001E(c, 291u, depth + 1u); else { c.pc = 0x0017B980u; return; } if (c.pc != 0x004C1494u) [[unlikely]] return; }
L_004C1494:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 209u);  goto L_004C14A8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004C14A8:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 788u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C162C; } }
L_004C14B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] + 1874u);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C14D0u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004C14D0u) [[unlikely]] return; }
L_004C14D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C14DCu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004C14DCu) [[unlikely]] return; }
L_004C14DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C14E8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004C14E8u) [[unlikely]] return; }
L_004C14E8:
    c.r[22].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C14FCu); c.r[22].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C14FCu) [[unlikely]] return; }
L_004C14FC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_004C1624; }
    st32((c.r[17].w[0] + 772u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 772u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 772u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1528u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C1528u) [[unlikely]] return; }
L_004C1528:
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1534u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C1534u) [[unlikely]] return; }
L_004C1534:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1540u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 199u, depth + 1u); else { c.pc = 0x004C18C0u; return; } if (c.pc != 0x004C1540u) [[unlikely]] return; }
L_004C1540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1548u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x0012A3F0u; return; } if (c.pc != 0x004C1548u) [[unlikely]] return; }
L_004C1548:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.f[0]);  if (t) { goto L_004C1558; } }
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 2;
L_004C1558:
    set32(c.r[2], ld32((c.r[17].w[0] + 772u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 1879u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C156Cu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004C156Cu) [[unlikely]] return; }
L_004C156C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C157Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004C157Cu) [[unlikely]] return; }
L_004C157C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 232u)));  goto L_004C15A4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C15A0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C15A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004C15A0u) [[unlikely]] return; }
L_004C15A0:
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_004C15A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C15B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 466u, depth + 1u); else { c.pc = 0x004C3DA0u; return; } if (c.pc != 0x004C15B0u) [[unlikely]] return; }
L_004C15B0:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_004C1614; }
    set32(c.r[16], c.r[20].w[0] + 28u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C15C8u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004C15C8u) [[unlikely]] return; }
L_004C15C8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004C1604; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 156u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C15E4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00F0(c, 191u, depth + 1u); else { c.pc = 0x004C1790u; return; } if (c.pc != 0x004C15E4u) [[unlikely]] return; }
L_004C15E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C15F0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C15F0u) [[unlikely]] return; }
L_004C15F0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C15FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C15FCu) [[unlikely]] return; }
L_004C15FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C1610; } }
L_004C1604:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1610u); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_00F0(c, 185u, depth + 1u); else { c.pc = 0x004C16B0u; return; } if (c.pc != 0x004C1610u) [[unlikely]] return; }
L_004C1610:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_004C1614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C161Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C161Cu) [[unlikely]] return; }
L_004C161C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004C1680; } }
L_004C1624:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004C162C:
    set32(c.r[4], ld32((c.r[17].w[0] + 784u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 788u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C14B8u | kUnwind; return; } goto L_004C14B8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1884u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1670u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C1670u) [[unlikely]] return; }
L_004C1670:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C167Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C167Cu) [[unlikely]] return; }
L_004C167C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004C1680:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004C16B0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C16E8u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004C16E8u) [[unlikely]] return; }
L_004C16E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_004C171C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_004C171C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1714u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1714u) [[unlikely]] return; }
L_004C1714:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004C171C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_004C1760; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_004C1748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1744u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1744u) [[unlikely]] return; }
L_004C1744:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_004C1748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1750u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004C1750u) [[unlikely]] return; }
L_004C1750:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_004C1760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1768u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004C1768u) [[unlikely]] return; }
L_004C1768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C1790:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C17C0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004C17C0u) [[unlikely]] return; }
L_004C17C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C17ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004C17ECu) [[unlikely]] return; }
L_004C17EC:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_004C1820; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 4u)));  goto L_004C1820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1818u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1818u) [[unlikely]] return; }
L_004C1818:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004C1820:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_004C1864; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_004C184C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1848u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1848u) [[unlikely]] return; }
L_004C1848:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_004C184C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1854u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004C1854u) [[unlikely]] return; }
L_004C1854:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_004C1864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C186Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004C186Cu) [[unlikely]] return; }
L_004C186C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1890u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C1890u) [[unlikely]] return; }
L_004C1890:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004C18C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_004C18E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1900u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0013C580u; return; } if (c.pc != 0x004C1900u) [[unlikely]] return; }
L_004C1900:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22876u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C1944; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1920u); set32(c.r[5], c.r[5].w[0] + 1893u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004C1920u) [[unlikely]] return; }
L_004C1920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 20128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C193Cu); set32(c.r[6], c.r[6].w[0] - 1336u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x004C193Cu) [[unlikely]] return; }
L_004C193C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22876u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004C1944:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1954u); set32(c.r[5], c.r[5].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x004C1954u) [[unlikely]] return; }
L_004C1954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C195Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004C195Cu) [[unlikely]] return; }
L_004C195C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1970u); set32(c.r[5], c.r[5].w[0] + 1518u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004C1970u) [[unlikely]] return; }
L_004C1970:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 28u);  goto L_004C19A8; }
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1984u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C1984u) [[unlikely]] return; }
L_004C1984:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_004C19C8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C199Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x004C199Cu) [[unlikely]] return; }
L_004C199C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C19C8; } }
L_004C19A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C19B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004C19B0u) [[unlikely]] return; }
L_004C19B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_004C19C8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C19C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 196u, depth + 1u); else { c.pc = 0x00121740u; return; } if (c.pc != 0x004C19C4u) [[unlikely]] return; }
L_004C19C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004C19C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C19E0u); set32(c.r[6], c.r[6].w[0] + 1603u);  if (depth < kMaxDepth) unit_000F(c, 23u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x004C19E0u) [[unlikely]] return; }
L_004C19E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_004C1A68; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C19F8u); set32(c.r[5], c.r[5].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x004C19F8u) [[unlikely]] return; }
L_004C19F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 65u);  goto L_004C1A0C; }
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004C1A0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A20u); set32(c.r[6], c.r[6].w[0] + 1605u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004C1A20u) [[unlikely]] return; }
L_004C1A20:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C1A2Cu) [[unlikely]] return; }
L_004C1A2C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004C1A4C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C1A48u) [[unlikely]] return; }
L_004C1A48:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_004C1A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C1A54u) [[unlikely]] return; }
L_004C1A54:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x004C1A60u) [[unlikely]] return; }
L_004C1A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004C1AB8; } }
L_004C1A68:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A78u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x004C1A78u) [[unlikely]] return; }
L_004C1A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A80u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 37u, depth + 1u); else { c.pc = 0x0013C420u; return; } if (c.pc != 0x004C1A80u) [[unlikely]] return; }
L_004C1A80:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004C1AA0; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C1A9Cu) [[unlikely]] return; }
L_004C1A9C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_004C1AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C1AA8u) [[unlikely]] return; }
L_004C1AA8:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1AB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x004C1AB4u) [[unlikely]] return; }
L_004C1AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004C1AB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004C1AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C1AF4u) [[unlikely]] return; }
L_004C1AF4:
    set32(c.r[25], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B04u); set32(c.r[4], c.r[16].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C1B04u) [[unlikely]] return; }
L_004C1B04:
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B10u); set32(c.r[4], ld32((c.r[2].w[0] + 412u)));  if (depth < kMaxDepth) unit_00BB(c, 75u, depth + 1u); else { c.pc = 0x003ED040u; return; } if (c.pc != 0x004C1B10u) [[unlikely]] return; }
L_004C1B10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 92u);
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 73u, depth + 1u); else { c.pc = 0x003ED010u; return; } if (c.pc != 0x004C1B24u) [[unlikely]] return; }
L_004C1B24:
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 412u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B38u); set32(c.r[4], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_00BB(c, 71u, depth + 1u); else { c.pc = 0x003ECF40u; return; } if (c.pc != 0x004C1B38u) [[unlikely]] return; }
L_004C1B38:
    set32(c.r[2], 0u + 258u);
    st32((c.r[16].w[0] + 768u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B48u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C1B48u) [[unlikely]] return; }
L_004C1B48:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B54u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 199u, depth + 1u); else { c.pc = 0x004C18C0u; return; } if (c.pc != 0x004C1B54u) [[unlikely]] return; }
L_004C1B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x0012A3F0u; return; } if (c.pc != 0x004C1B5Cu) [[unlikely]] return; }
L_004C1B5C:
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1B6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 276u, depth + 1u); else { c.pc = 0x00127060u; return; } if (c.pc != 0x004C1B6Cu) [[unlikely]] return; }
L_004C1B6C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.f[0] = ld32((c.r[3].w[0] + 500u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 504u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 508u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1BA0u); st32((c.r[16].w[0] + 752u), 0u);  if (depth < kMaxDepth) unit_00F1(c, 4u, depth + 1u); else { c.pc = 0x004C4030u; return; } if (c.pc != 0x004C1BA0u) [[unlikely]] return; }
L_004C1BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C1BC0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1BD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x004C1BD4u) [[unlikely]] return; }
L_004C1BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 24256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1BE8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C1BE8u) [[unlikely]] return; }
L_004C1BE8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1BF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x004C1BF8u) [[unlikely]] return; }
L_004C1BF8:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1C04u) [[unlikely]] return; }
L_004C1C04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C14u); set32(c.r[5], c.r[5].w[0] + 1910u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1C14u) [[unlikely]] return; }
L_004C1C14:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    st16((c.r[29].w[0] + 474u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 452u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 468u)));  goto L_004C1C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C34u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1C34u) [[unlikely]] return; }
L_004C1C34:
    set32(c.r[2], c.r[29].w[0] + 452u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 3;
L_004C1C40:
    c.f[0] = ld32((c.r[28].w[0] - 31716u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C60u); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1C60u) [[unlikely]] return; }
L_004C1C60:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1C70u) [[unlikely]] return; }
L_004C1C70:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1C7Cu) [[unlikely]] return; }
L_004C1C7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1C8Cu); set32(c.r[5], c.r[5].w[0] + 1921u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1C8Cu) [[unlikely]] return; }
L_004C1C8C:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    st16((c.r[29].w[0] + 442u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 420u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 436u)));  goto L_004C1CB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1CACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1CACu) [[unlikely]] return; }
L_004C1CAC:
    set32(c.r[2], c.r[29].w[0] + 420u);
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 3;
L_004C1CB8:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1CD0u); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1CD0u) [[unlikely]] return; }
L_004C1CD0:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1CE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1CE0u) [[unlikely]] return; }
L_004C1CE0:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1CECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1CECu) [[unlikely]] return; }
L_004C1CEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1CFCu); set32(c.r[5], c.r[5].w[0] + 1932u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1CFCu) [[unlikely]] return; }
L_004C1CFC:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 404u)));
    st16((c.r[29].w[0] + 410u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 388u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 404u)));  goto L_004C1D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1D1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1D1Cu) [[unlikely]] return; }
L_004C1D1C:
    set32(c.r[2], c.r[29].w[0] + 388u);
    st32((c.r[29].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 404u)));
    c.budget -= 3;
L_004C1D28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1D48u); st32((c.r[6].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1D48u) [[unlikely]] return; }
L_004C1D48:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1D58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1D58u) [[unlikely]] return; }
L_004C1D58:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1D64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1D64u) [[unlikely]] return; }
L_004C1D64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1D74u); set32(c.r[5], c.r[5].w[0] + 1941u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1D74u) [[unlikely]] return; }
L_004C1D74:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 372u)));
    st16((c.r[29].w[0] + 378u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 356u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 372u)));  goto L_004C1DA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1D94u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1D94u) [[unlikely]] return; }
L_004C1D94:
    set32(c.r[2], c.r[29].w[0] + 356u);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    c.budget -= 3;
L_004C1DA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1DB4u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1DB4u) [[unlikely]] return; }
L_004C1DB4:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1DC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1DC4u) [[unlikely]] return; }
L_004C1DC4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1DD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1DD0u) [[unlikely]] return; }
L_004C1DD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1DE0u); set32(c.r[5], c.r[5].w[0] + 1949u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1DE0u) [[unlikely]] return; }
L_004C1DE0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    st16((c.r[29].w[0] + 346u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32564u));  goto L_004C1E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1E00u) [[unlikely]] return; }
L_004C1E00:
    set32(c.r[2], c.r[29].w[0] + 324u);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 3;
L_004C1E0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E20u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1E20u) [[unlikely]] return; }
L_004C1E20:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1E30u) [[unlikely]] return; }
L_004C1E30:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1E3Cu) [[unlikely]] return; }
L_004C1E3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E4Cu); set32(c.r[5], c.r[5].w[0] + 1959u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1E4Cu) [[unlikely]] return; }
L_004C1E4C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    st16((c.r[29].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 292u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 5000u);  goto L_004C1E78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E6Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1E6Cu) [[unlikely]] return; }
L_004C1E6C:
    set32(c.r[2], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[3], 0u + 5000u);
    c.budget -= 3;
L_004C1E78:
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E94u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1E94u) [[unlikely]] return; }
L_004C1E94:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1EA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1EA4u) [[unlikely]] return; }
L_004C1EA4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1EB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1EB0u) [[unlikely]] return; }
L_004C1EB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1EC0u); set32(c.r[5], c.r[5].w[0] + 1968u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1EC0u) [[unlikely]] return; }
L_004C1EC0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    st16((c.r[29].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32076u));  goto L_004C1EEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1EE0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1EE0u) [[unlikely]] return; }
L_004C1EE0:
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    c.budget -= 3;
L_004C1EEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F00u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1F00u) [[unlikely]] return; }
L_004C1F00:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1F10u) [[unlikely]] return; }
L_004C1F10:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1F1Cu) [[unlikely]] return; }
L_004C1F1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F2Cu); set32(c.r[5], c.r[5].w[0] + 1978u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1F2Cu) [[unlikely]] return; }
L_004C1F2C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 244u)));  goto L_004C1F58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1F4Cu) [[unlikely]] return; }
L_004C1F4C:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
L_004C1F58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F6Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1F6Cu) [[unlikely]] return; }
L_004C1F6C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1F7Cu) [[unlikely]] return; }
L_004C1F7C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1F88u) [[unlikely]] return; }
L_004C1F88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F98u); set32(c.r[5], c.r[5].w[0] + 1989u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C1F98u) [[unlikely]] return; }
L_004C1F98:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_004C1FC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1FB8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C1FB8u) [[unlikely]] return; }
L_004C1FB8:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
L_004C1FC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1FD8u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C1FD8u) [[unlikely]] return; }
L_004C1FD8:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1FE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C1FE8u) [[unlikely]] return; }
L_004C1FE8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1FF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C1FF4u) [[unlikely]] return; }
L_004C1FF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2004u); set32(c.r[5], c.r[5].w[0] + 1998u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C2004u) [[unlikely]] return; }
L_004C2004:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  goto L_004C2030; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2024u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C2024u) [[unlikely]] return; }
L_004C2024:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
L_004C2030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2044u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C2044u) [[unlikely]] return; }
L_004C2044:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2054u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C2054u) [[unlikely]] return; }
L_004C2054:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2060u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C2060u) [[unlikely]] return; }
L_004C2060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2070u); set32(c.r[5], c.r[5].w[0] + 2006u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C2070u) [[unlikely]] return; }
L_004C2070:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 132u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 148u)));  goto L_004C209C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2090u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C2090u) [[unlikely]] return; }
L_004C2090:
    set32(c.r[2], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
L_004C209C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C20B0u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C20B0u) [[unlikely]] return; }
L_004C20B0:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C20C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C20C0u) [[unlikely]] return; }
L_004C20C0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C20CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C20CCu) [[unlikely]] return; }
L_004C20CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C20DCu); set32(c.r[5], c.r[5].w[0] + 2025u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C20DCu) [[unlikely]] return; }
L_004C20DC:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 100u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_004C2108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C20FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C20FCu) [[unlikely]] return; }
L_004C20FC:
    set32(c.r[2], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
L_004C2108:
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2118u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C2118u) [[unlikely]] return; }
L_004C2118:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2128u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C2128u) [[unlikely]] return; }
L_004C2128:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2134u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004C2134u) [[unlikely]] return; }
L_004C2134:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2144u); set32(c.r[5], c.r[5].w[0] + 2036u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004C2144u) [[unlikely]] return; }
L_004C2144:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 68u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_004C2170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2164u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C2164u) [[unlikely]] return; }
L_004C2164:
    set32(c.r[2], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
L_004C2170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2184u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C2184u) [[unlikely]] return; }
L_004C2184:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2194u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C2194u) [[unlikely]] return; }
L_004C2194:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21A4u); set32(c.r[5], c.r[5].w[0] + 1879u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x004C21A4u) [[unlikely]] return; }
L_004C21A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_004C21E4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 1879u);
    set32(c.r[6], c.r[28].w[0] - 29492u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21C4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00F0(c, 310u, depth + 1u); else { c.pc = 0x004C2280u; return; } if (c.pc != 0x004C21C4u) [[unlikely]] return; }
L_004C21C4:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21D0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004C21D0u) [[unlikely]] return; }
L_004C21D0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004C21DCu) [[unlikely]] return; }
L_004C21DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004C21F4; } }
L_004C21E4:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21F0u); set32(c.r[6], c.r[28].w[0] - 29492u);  if (depth < kMaxDepth) unit_00F0(c, 308u, depth + 1u); else { c.pc = 0x004C2210u; return; } if (c.pc != 0x004C21F0u) [[unlikely]] return; }
L_004C21F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C21F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_004C2210:
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
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_004C225C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2250u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C2250u) [[unlikely]] return; }
L_004C2250:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_004C225C:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C2280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C22A8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004C22A8u) [[unlikely]] return; }
L_004C22A8:
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
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_004C22EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C22E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004C22E0u) [[unlikely]] return; }
L_004C22E0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_004C22EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2314u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C2314u) [[unlikely]] return; }
L_004C2314:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C2330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29496u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004C234C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004C235C; } }
L_004C234C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2354u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x004C2354u) [[unlikely]] return; }
L_004C2354:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004C235C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C2370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2394u); set32(c.r[4], c.r[4].w[0] + 176u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004C2394u) [[unlikely]] return; }
L_004C2394:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004C23A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004C23B4; } }
L_004C23A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C23ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x004C23ACu) [[unlikely]] return; }
L_004C23AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004C23B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C23D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004C23E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29496u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004C23FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C2404; } }
L_004C23FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2404u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x004C2404u) [[unlikely]] return; }
L_004C2404:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C2410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29496u)));  c.pc = t; return; }
L_004C2420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004C2430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004C2440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22880u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004C245C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C245Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00EE(c, 310u, depth + 1u); else { c.pc = 0x004BAB00u; return; } if (c.pc != 0x004C245Cu) [[unlikely]] return; }
L_004C245C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C2470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C24A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C24A0u) [[unlikely]] return; }
L_004C24A0:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 31976u));
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C2500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004C2510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004C2520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2540u); set32(c.r[4], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C2540u) [[unlikely]] return; }
L_004C2540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2554u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C1B0u; return; } if (c.pc != 0x004C2554u) [[unlikely]] return; }
L_004C2554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C2570:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C258Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00EE(c, 310u, depth + 1u); else { c.pc = 0x004BAB00u; return; } if (c.pc != 0x004C258Cu) [[unlikely]] return; }
L_004C258C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[11] = ld32((c.r[3].w[0] - 2568u));
    c.f[8] = ld32((c.r[29].w[0] + 32u));
    c.f[10] = ld32((c.r[4].w[0] - 2564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[7] = ld32((c.r[29].w[0] + 48u));
    c.f[9] = ld32((c.r[3].w[0] - 2560u));
    c.f[6] = ld32((c.r[29].w[0] + 64u));
    c.f[5] = ld32((c.r[29].w[0] + 36u));
    c.f[4] = ld32((c.r[29].w[0] + 52u));
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.facc = fp::mul(c.f[11], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[7]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.facc = fp::mul(c.f[11], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.facc = fp::mul(c.f[11], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[9], c.f[0]));
    st32((c.r[16].w[0]), c.f[6]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004C2610:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.f[0] = ld32((c.r[3].w[0] + 108u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_004C2630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2648u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004C2648u) [[unlikely]] return; }
L_004C2648:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C2670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C26C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 24192u);
    set32(c.r[2], c.r[2].w[0] - 24160u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C26ACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 338u, depth + 1u); else { c.pc = 0x001279D0u; return; } if (c.pc != 0x004C26ACu) [[unlikely]] return; }
L_004C26AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004C26C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C26C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C26C4u) [[unlikely]] return; }
L_004C26C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004C26C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C26E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 252u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2714u); set32(c.r[4], ld32((c.r[4].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C2714u) [[unlikely]] return; }
L_004C2714:
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 71u, depth + 1u); else { c.pc = 0x003ECF40u; return; } if (c.pc != 0x004C2724u) [[unlikely]] return; }
L_004C2724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C2740:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 772u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2788u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C2788u) [[unlikely]] return; }
L_004C2788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[29].w[0] + 108u));  goto L_004C27B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C27AC; } }
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C27ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C27ACu) [[unlikely]] return; }
L_004C27AC:
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 1;
L_004C27B0:
    set32(c.r[4], c.r[18].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C27BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 50u, depth + 1u); else { c.pc = 0x003EC9C0u; return; } if (c.pc != 0x004C27BCu) [[unlikely]] return; }
L_004C27BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.f[3] = ld32((c.r[2].w[0] + 500u));
    c.f[2] = ld32((c.r[2].w[0] + 488u));
    c.f[5] = ld32((c.r[2].w[0] + 504u));
    c.f[1] = ld32((c.r[2].w[0] + 492u));
    c.f[4] = ld32((c.r[2].w[0] + 508u));
    c.f[0] = ld32((c.r[2].w[0] + 496u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.f[0] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 256u);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 200u)));
    c.f[12] = ld32((c.r[18].w[0] + 208u));
    set32(c.r[6], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C286Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 200u, depth + 1u); else { c.pc = 0x00473EE0u; return; } if (c.pc != 0x004C286Cu) [[unlikely]] return; }
L_004C286C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2874u); set32(c.r[4], c.r[18].w[0] + 256u);  if (depth < kMaxDepth) unit_00DC(c, 165u, depth + 1u); else { c.pc = 0x004731A0u; return; } if (c.pc != 0x004C2874u) [[unlikely]] return; }
L_004C2874:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 748u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C288Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_009C(c, 18u, depth + 1u); else { c.pc = 0x00370700u; return; } if (c.pc != 0x004C288Cu) [[unlikely]] return; }
L_004C288C:
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C28A0u); set32(c.r[4], ld32((c.r[18].w[0] + 748u)));  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004C28A0u) [[unlikely]] return; }
L_004C28A0:
    set32(c.r[16], ld32((c.r[18].w[0] + 748u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 748u)));  goto L_004C28FC; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004C28DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C28C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004C28C8u) [[unlikely]] return; }
L_004C28C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_004C28DC:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C28E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C28E8u) [[unlikely]] return; }
L_004C28E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 748u)));
    c.budget -= 5;
L_004C28FC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[18].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2910u); set32(c.r[7], c.r[7].w[0] + 10576u);  if (depth < kMaxDepth) unit_00DC(c, 160u, depth + 1u); else { c.pc = 0x004730B0u; return; } if (c.pc != 0x004C2910u) [[unlikely]] return; }
L_004C2910:
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004C2950:
    c.f[0] = ld32((c.r[6].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[6].w[0] + 64u);
    c.budget -= 7;
    { c.f[12] = c.f[0] ^ fp::kSign;  goto L_004C2970; }
L_004C2970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[20] = fp::mul(c.f[2], c.f[12]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[21] = fp::mul(c.f[1], c.f[12]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C29B0u); c.f[22] = fp::mul(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_002F(c, 94u, depth + 1u); else { c.pc = 0x001BD7D0u; return; } if (c.pc != 0x004C29B0u) [[unlikely]] return; }
L_004C29B0:
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[20], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[22], c.f[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[0] = fp::mul(c.f[20], c.f[5]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.facc = fp::sub(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[5]);
    c.f[3] = fp::sub(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::mul(c.f[22], c.f[5]);
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[4] = fp::sub(c.f[22], c.f[0]);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[4], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C2A50:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.f[24] = c.f[12];  if (t) { goto L_004C2B70; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 252u)));  goto L_004C2B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2AB0u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x004C2AB0u) [[unlikely]] return; }
L_004C2AB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2AC0u); set32(c.r[5], c.r[5].w[0] + 2061u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x004C2AC0u) [[unlikely]] return; }
L_004C2AC0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C2B70; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2AE0u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x004C2AE0u) [[unlikely]] return; }
L_004C2AE0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_004C2AF0; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_004C2AF0:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 66u));  goto L_004C2B48; }
    set32(c.r[3], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004C2B44; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 66u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C2B70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2074u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B38u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C2B38u) [[unlikely]] return; }
L_004C2B38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 66u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004C2B70; } }
L_004C2B44:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 66u));
    c.budget -= 1;
L_004C2B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C2B70; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C2B64u) [[unlikely]] return; }
L_004C2B64:
    set32(c.r[2], 0u + 258u);
    st32((c.r[20].w[0] + 768u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_004C2B70:
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    c.budget -= 1;
L_004C2B74:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B84u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x004C2B84u) [[unlikely]] return; }
L_004C2B84:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_004C2B94; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_004C2B94:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2BBC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_004C2BB4; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_004C2BB4:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 2;
L_004C2BBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004C2D18; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C2D14; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C2D14; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 784u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 788u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_004C2C10; } }
L_004C2C08:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004C2C10:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_004C2C34; }
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 772u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2C08u | kUnwind; return; } goto L_004C2C08; }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_004C2C34:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004C2C54; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004C2C54:
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 784u)));
    c.budget -= 2;
L_004C2C5C:
    set32(c.r[4], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 788u)));
    set32(c.r[5], c.r[29].w[0] + 591u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2C94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004C2C94u) [[unlikely]] return; }
L_004C2C94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 591u));  goto L_004C2CBC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C2CB8; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 591u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2CB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004C2CB8u) [[unlikely]] return; }
L_004C2CB8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 591u));
    c.budget -= 1;
L_004C2CBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 788u)));  goto L_004C2CD0; }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 784u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2C5Cu | kUnwind; return; } goto L_004C2C5C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 788u)));
    c.budget -= 1;
L_004C2CD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 1874u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2CE8u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004C2CE8u) [[unlikely]] return; }
L_004C2CE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 568u);
    set32(c.r[2], c.r[29].w[0] + 572u);
    st32((c.r[29].w[0] + 572u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D00u); st32((c.r[29].w[0] + 568u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 419u, depth + 1u); else { c.pc = 0x00442D90u; return; } if (c.pc != 0x004C2D00u) [[unlikely]] return; }
L_004C2D00:
    set32(c.r[5], ld32((c.r[29].w[0] + 572u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D14u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C2D14u) [[unlikely]] return; }
L_004C2D14:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004C2D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D20u);  if (depth < kMaxDepth) unit_0009(c, 276u, depth + 1u); else { c.pc = 0x00127060u; return; } if (c.pc != 0x004C2D20u) [[unlikely]] return; }
L_004C2D20:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D34u); c.f[12] = c.f[24];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C2D34u) [[unlikely]] return; }
L_004C2D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D3Cu); set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C2D3Cu) [[unlikely]] return; }
L_004C2D3C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D50u); c.f[12] = c.f[24];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C2D50u) [[unlikely]] return; }
L_004C2D50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.budget -= 2;
L_004C2D58:
    set32(c.r[6], c.r[29].w[0] + 528u);
    set32(c.r[7], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 544u), 0u);
    st32((c.r[29].w[0] + 548u), 0u);
    st32((c.r[29].w[0] + 552u), 0u);
    st32((c.r[29].w[0] + 528u), 0u);
    st32((c.r[29].w[0] + 532u), 0u);
    st32((c.r[29].w[0] + 536u), 0u);
    st32((c.r[29].w[0] + 512u), 0u);
    st32((c.r[29].w[0] + 516u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D88u); st32((c.r[29].w[0] + 520u), 0u);  if (depth < kMaxDepth) unit_00F0(c, 450u, depth + 1u); else { c.pc = 0x004C3810u; return; } if (c.pc != 0x004C2D88u) [[unlikely]] return; }
L_004C2D88:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D98u); set32(c.r[16], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004C2D98u) [[unlikely]] return; }
L_004C2D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DA0u); set32(c.r[4], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C2DA0u) [[unlikely]] return; }
L_004C2DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DA8u); set32(c.r[4], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C2DA8u) [[unlikely]] return; }
L_004C2DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DB0u); set32(c.r[4], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C2DB0u) [[unlikely]] return; }
L_004C2DB0:
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DC0u); set32(c.r[6], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x004C2DC0u) [[unlikely]] return; }
L_004C2DC0:
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DCCu); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004C2DCCu) [[unlikely]] return; }
L_004C2DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DD4u); set32(c.r[4], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x004C2DD4u) [[unlikely]] return; }
L_004C2DD4:
    c.f[20] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x004C2DE4u) [[unlikely]] return; }
L_004C2DE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004C2E0C; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E04u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x004C2E04u) [[unlikely]] return; }
L_004C2E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004C2E30; } }
L_004C2E0C:
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E2Cu);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x004C2E2Cu) [[unlikely]] return; }
L_004C2E2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C2E30:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E3Cu); set32(c.r[6], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x004C2E3Cu) [[unlikely]] return; }
L_004C2E3C:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E48u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x004C2E48u) [[unlikely]] return; }
L_004C2E48:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E54u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004C2E54u) [[unlikely]] return; }
L_004C2E54:
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E64u); set32(c.r[6], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x004C2E64u) [[unlikely]] return; }
L_004C2E64:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E70u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x004C2E70u) [[unlikely]] return; }
L_004C2E70:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2E7Cu); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004C2E7Cu) [[unlikely]] return; }
L_004C2E7C:
    c.f[2] = ld32((c.r[29].w[0] + 328u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    st32((c.r[29].w[0] + 140u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[29].w[0] + 180u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[29].w[0] + 184u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 348u));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 772u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2F00u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C2F00u) [[unlikely]] return; }
L_004C2F00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2F0Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004C2F0Cu) [[unlikely]] return; }
L_004C2F0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 392u);  goto L_004C2F34; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C2F30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2F30u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004C2F30u) [[unlikely]] return; }
L_004C2F30:
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 1;
L_004C2F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2F3Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004C2F3Cu) [[unlikely]] return; }
L_004C2F3C:
    c.f[8] = ld32((c.r[29].w[0] + 176u));
    c.f[14] = ld32((c.r[29].w[0] + 392u));
    c.f[11] = ld32((c.r[29].w[0] + 128u));
    c.f[15] = 0u;
    c.f[13] = ld32((c.r[29].w[0] + 396u));
    c.f[10] = ld32((c.r[29].w[0] + 144u));
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    c.f[9] = ld32((c.r[29].w[0] + 160u));
    c.f[7] = ld32((c.r[29].w[0] + 132u));
    c.f[6] = ld32((c.r[29].w[0] + 148u));
    c.f[5] = ld32((c.r[29].w[0] + 164u));
    c.f[4] = ld32((c.r[29].w[0] + 180u));
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::add(c.f[15], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[12], c.f[9]));
    c.facc = fp::add(c.f[15], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[12], c.f[5]));
    c.facc = fp::add(c.f[15], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[2]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.f[2] = fp::add(c.f[2], c.f[8]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 528u), c.f[2]);
    st32((c.r[29].w[0] + 532u), c.f[1]);
    st32((c.r[29].w[0] + 536u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 496u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 500u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[29].w[0] + 504u), c.f[0]);
    c.f[21] = ld32((c.r[2].w[0] + 48u));
    c.f[22] = ld32((c.r[2].w[0] + 52u));
    c.f[23] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[29].w[0] + 484u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 488u), c.f[0]);
    c.f[20] = ld32((c.r[20].w[0] + 752u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[15]));
    c.budget -= 57;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004C30F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3028u); set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 271u, depth + 1u); else { c.pc = 0x00127020u; return; } if (c.pc != 0x004C3028u) [[unlikely]] return; }
L_004C3028:
    c.f[0] = ld32((c.r[20].w[0] + 756u));
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[24];
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3044u); c.f[13] = fp::mul(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C3044u) [[unlikely]] return; }
L_004C3044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C304Cu); set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 271u, depth + 1u); else { c.pc = 0x00127020u; return; } if (c.pc != 0x004C304Cu) [[unlikely]] return; }
L_004C304C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3060u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C3060u) [[unlikely]] return; }
L_004C3060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3068u); set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 271u, depth + 1u); else { c.pc = 0x00127020u; return; } if (c.pc != 0x004C3068u) [[unlikely]] return; }
L_004C3068:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C307Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C307Cu) [[unlikely]] return; }
L_004C307C:
    c.f[2] = ld32((c.r[29].w[0] + 480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    c.f[5] = ld32((c.r[29].w[0] + 468u));
    c.f[3] = ld32((c.r[29].w[0] + 484u));
    c.f[4] = fp::add(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 488u));
    c.f[1] = ld32((c.r[29].w[0] + 456u));
    c.f[3] = fp::add(c.f[3], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 452u), c.f[5]);
    st32((c.r[29].w[0] + 480u), c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[3]);
    st32((c.r[29].w[0] + 488u), c.f[2]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    st32((c.r[29].w[0] + 488u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 752u));
    c.f[0] = fp::sub(c.f[0], c.f[24]);
    st32((c.r[20].w[0] + 752u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 29;
L_004C30F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C30F8u);  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x004C30F8u) [[unlikely]] return; }
L_004C30F8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3114u); set32(c.r[6], c.r[29].w[0] + 496u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C3114u) [[unlikely]] return; }
L_004C3114:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3120u); c.f[12] = ld32((c.r[4].w[0] + 72u));  if (depth < kMaxDepth) unit_002F(c, 109u, depth + 1u); else { c.pc = 0x001BDA00u; return; } if (c.pc != 0x004C3120u) [[unlikely]] return; }
L_004C3120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3128u); c.f[12] = ld32((c.r[29].w[0] + 528u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C3128u) [[unlikely]] return; }
L_004C3128:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 528u), 0u);  goto L_004C3184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3138u); c.f[12] = ld32((c.r[29].w[0] + 528u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C3138u) [[unlikely]] return; }
L_004C3138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3148u); c.f[12] = ld32((c.r[29].w[0] + 532u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C3148u) [[unlikely]] return; }
L_004C3148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C3180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3158u); c.f[12] = ld32((c.r[29].w[0] + 532u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C3158u) [[unlikely]] return; }
L_004C3158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3168u); c.f[12] = ld32((c.r[29].w[0] + 536u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C3168u) [[unlikely]] return; }
L_004C3168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C3180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3178u); c.f[12] = ld32((c.r[29].w[0] + 536u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C3178u) [[unlikely]] return; }
L_004C3178:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_004C3190; }
L_004C3180:
    st32((c.r[29].w[0] + 528u), 0u);
    c.budget -= 1;
L_004C3184:
    st32((c.r[29].w[0] + 532u), 0u);
    st32((c.r[29].w[0] + 536u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_004C3190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3198u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_002F(c, 98u, depth + 1u); else { c.pc = 0x001BD840u; return; } if (c.pc != 0x004C3198u) [[unlikely]] return; }
L_004C3198:
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C31A4u); set32(c.r[4], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_00B9(c, 179u, depth + 1u); else { c.pc = 0x003E5520u; return; } if (c.pc != 0x004C31A4u) [[unlikely]] return; }
L_004C31A4:
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[12] = fp::mul(c.f[0], c.f[13]);
    st32((c.r[29].w[0] + 444u), c.f[13]);
    st32((c.r[29].w[0] + 440u), c.f[12]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C31C8u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_002F(c, 115u, depth + 1u); else { c.pc = 0x001BDB00u; return; } if (c.pc != 0x004C31C8u) [[unlikely]] return; }
L_004C31C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 772u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C31E4u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C31E4u) [[unlikely]] return; }
L_004C31E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C31F0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004C31F0u) [[unlikely]] return; }
L_004C31F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 424u);  goto L_004C3218; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C3214; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3214u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004C3214u) [[unlikely]] return; }
L_004C3214:
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 1;
L_004C3218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3220u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004C3220u) [[unlikely]] return; }
L_004C3220:
    c.f[2] = ld32((c.r[29].w[0] + 424u));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.f[3] = fp::mul(c.f[2], c.f[24]);
    c.f[20] = fp::mul(c.f[1], c.f[24]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[11] = fp::mul(c.f[0], c.f[24]);  if (t) { goto L_004C3258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[20] = c.f[3];
    c.f[11] = c.f[3];
    c.budget -= 5;
L_004C3258:
    c.f[8] = ld32((c.r[29].w[0] + 504u));
    c.f[1] = ld32((c.r[29].w[0] + 496u));
    c.f[0] = ld32((c.r[29].w[0] + 500u));
    c.f[14] = fp::sub(c.f[8], c.f[23]);
    c.f[9] = fp::sub(c.f[1], c.f[21]);
    c.f[13] = fp::sub(c.f[0], c.f[22]);
    c.f[7] = ld32((c.r[29].w[0] + 544u));
    c.f[6] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.f[5] = ld32((c.r[29].w[0] + 548u));
    c.f[8] = fp::sub(c.f[7], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.f[4] = ld32((c.r[29].w[0] + 552u));
    c.f[7] = fp::sub(c.f[5], c.f[1]);
    c.f[6] = fp::sub(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.facc = fp::mul(c.f[9], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[14], c.f[14]));
    c.f[5] = fp::sqrt(c.f[5]);
    c.f[10] = 0u;
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.facc = fp::add(c.f[10], c.f[5]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[11], c.f[4]));
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[11] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[11] = fp::sqrt(c.f[11]);
    c.f[5] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[11]) <= fp::key(c.f[5]));
    c.budget -= 37;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[11] = c.f[10];  goto L_004C330C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    fpu_div(c, 5u, c.f[5], c.f[11]);
    c.f[10] = fp::mul(c.f[8], c.f[5]);
    c.f[11] = fp::mul(c.f[7], c.f[5]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[12] = fp::mul(c.f[6], c.f[5]);  if (t) { goto L_004C3310; } }
L_004C330C:
    c.f[12] = c.f[10];
    c.budget -= 1;
L_004C3310:
    c.facc = fp::mul(c.f[9], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[14], c.f[14]));
    c.f[6] = fp::sqrt(c.f[6]);
    c.f[5] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[5]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C3354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    fpu_div(c, 5u, c.f[5], c.f[6]);
    c.f[6] = fp::mul(c.f[9], c.f[5]);
    c.f[8] = fp::mul(c.f[13], c.f[5]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[9] = fp::mul(c.f[14], c.f[5]);  if (t) { goto L_004C3364; } }
L_004C3354:
    c.f[6] = 0u;
    c.f[8] = c.f[6];
    c.f[9] = c.f[6];
    c.budget -= 4;
L_004C3364:
    c.f[5] = fp::sub(c.f[10], c.f[6]);
    c.f[5] = fp::mul(c.f[5], c.f[3]);
    c.f[7] = fp::add(c.f[6], c.f[5]);
    c.f[5] = fp::sub(c.f[11], c.f[8]);
    c.f[5] = fp::mul(c.f[5], c.f[3]);
    c.f[6] = fp::add(c.f[8], c.f[5]);
    c.f[5] = fp::sub(c.f[12], c.f[9]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[3] = fp::add(c.f[9], c.f[3]);
    st32((c.r[29].w[0] + 376u), c.f[7]);
    st32((c.r[29].w[0] + 380u), c.f[6]);
    st32((c.r[29].w[0] + 384u), c.f[3]);
    c.facc = fp::mul(c.f[7], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[7] = fp::sqrt(c.f[7]);
    c.f[3] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C33E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    fpu_div(c, 7u, c.f[3], c.f[7]);
    c.f[6] = ld32((c.r[29].w[0] + 376u));
    c.f[5] = ld32((c.r[29].w[0] + 380u));
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[7]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[7] = fp::mul(c.f[3], c.f[7]);  if (t) { goto L_004C33F4; } }
L_004C33E4:
    c.f[6] = 0u;
    c.f[5] = c.f[6];
    c.f[7] = c.f[6];
    c.budget -= 4;
L_004C33F4:
    c.f[3] = fp::mul(c.f[4], c.f[6]);
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 496u);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 496u), c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[5]);
    c.f[2] = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[7]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[12] = c.f[24];
    st32((c.r[29].w[0] + 500u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C342Cu); st32((c.r[29].w[0] + 504u), c.f[0]);  if (depth < kMaxDepth) unit_00F0(c, 345u, depth + 1u); else { c.pc = 0x004C2740u; return; } if (c.pc != 0x004C342Cu) [[unlikely]] return; }
L_004C342C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3434u); c.f[12] = ld32((c.r[29].w[0] + 408u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C3434u) [[unlikely]] return; }
L_004C3434:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 408u), 0u);  goto L_004C3490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3444u); c.f[12] = ld32((c.r[29].w[0] + 408u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C3444u) [[unlikely]] return; }
L_004C3444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C348C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3454u); c.f[12] = ld32((c.r[29].w[0] + 412u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C3454u) [[unlikely]] return; }
L_004C3454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C348C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3464u); c.f[12] = ld32((c.r[29].w[0] + 412u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C3464u) [[unlikely]] return; }
L_004C3464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C348C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3474u); c.f[12] = ld32((c.r[29].w[0] + 416u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C3474u) [[unlikely]] return; }
L_004C3474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C348C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3484u); c.f[12] = ld32((c.r[29].w[0] + 416u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C3484u) [[unlikely]] return; }
L_004C3484:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_004C349C; }
L_004C348C:
    st32((c.r[29].w[0] + 408u), 0u);
    c.budget -= 1;
L_004C3490:
    st32((c.r[29].w[0] + 412u), 0u);
    st32((c.r[29].w[0] + 416u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_004C349C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C34A4u); set32(c.r[5], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_002F(c, 95u, depth + 1u); else { c.pc = 0x001BD800u; return; } if (c.pc != 0x004C34A4u) [[unlikely]] return; }
L_004C34A4:
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[20].w[0] + 724u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[20].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[20].w[0] + 732u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[20].w[0] + 736u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[20].w[0] + 740u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[20].w[0] + 744u), c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 484u));
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    c.f[4] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[5], c.f[1]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 480u));
    c.f[2] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[29].w[0] + 364u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[2]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 39;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C356C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 360u));
    c.f[1] = ld32((c.r[29].w[0] + 364u));
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.f[12] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_004C357C; } }
L_004C356C:
    c.f[12] = 0u;
    c.f[1] = c.f[12];
    c.f[0] = c.f[12];
    c.budget -= 4;
L_004C357C:
    st32((c.r[29].w[0] + 484u), c.f[1]);
    st32((c.r[29].w[0] + 488u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C358Cu); st32((c.r[29].w[0] + 480u), c.f[12]);  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C358Cu) [[unlikely]] return; }
L_004C358C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 480u), 0u);  goto L_004C35E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C359Cu); c.f[12] = ld32((c.r[29].w[0] + 480u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C359Cu) [[unlikely]] return; }
L_004C359C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C35E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C35ACu); c.f[12] = ld32((c.r[29].w[0] + 484u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C35ACu) [[unlikely]] return; }
L_004C35AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C35E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C35BCu); c.f[12] = ld32((c.r[29].w[0] + 484u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C35BCu) [[unlikely]] return; }
L_004C35BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C35E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C35CCu); c.f[12] = ld32((c.r[29].w[0] + 488u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004C35CCu) [[unlikely]] return; }
L_004C35CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C35E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C35DCu); c.f[12] = ld32((c.r[29].w[0] + 488u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004C35DCu) [[unlikely]] return; }
L_004C35DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_004C35F4; }
L_004C35E4:
    st32((c.r[29].w[0] + 480u), 0u);
    c.budget -= 1;
L_004C35E8:
    st32((c.r[29].w[0] + 484u), 0u);
    st32((c.r[29].w[0] + 488u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_004C35F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C35FCu); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_002F(c, 101u, depth + 1u); else { c.pc = 0x001BD880u; return; } if (c.pc != 0x004C35FCu) [[unlikely]] return; }
L_004C35FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 564u);
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C361Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C361Cu) [[unlikely]] return; }
L_004C361C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_004C3644; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C3640; } }
    c.f[12] = ld32((c.r[29].w[0] + 564u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C3640u) [[unlikely]] return; }
L_004C3640:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_004C3644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C364Cu); c.f[12] = ld32((c.r[29].w[0] + 564u));  if (depth < kMaxDepth) unit_002F(c, 109u, depth + 1u); else { c.pc = 0x001BDA00u; return; } if (c.pc != 0x004C364Cu) [[unlikely]] return; }
L_004C364C:
    set32(c.r[2], ld32((c.r[20].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C366Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C366Cu) [[unlikely]] return; }
L_004C366C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_004C3694; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C3690; } }
    c.f[12] = ld32((c.r[29].w[0] + 560u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C3690u) [[unlikely]] return; }
L_004C3690:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_004C3694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C369Cu); c.f[12] = ld32((c.r[29].w[0] + 560u));  if (depth < kMaxDepth) unit_002F(c, 112u, depth + 1u); else { c.pc = 0x001BDA80u; return; } if (c.pc != 0x004C369Cu) [[unlikely]] return; }
L_004C369C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_004C36D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 258u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 768u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3700u); st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3700u) [[unlikely]] return; }
L_004C3700:
    set32(c.r[2], ld32((c.r[16].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C3720u) [[unlikely]] return; }
L_004C3720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 60u));  goto L_004C3748; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004C3744; } }
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C3744u) [[unlikely]] return; }
L_004C3744:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 1;
L_004C3748:
    st32((c.r[16].w[0] + 760u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C3760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 259u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 2087u);
    st32((c.r[4].w[0] + 768u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3798u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3798u) [[unlikely]] return; }
L_004C3798:
    set32(c.r[2], ld32((c.r[16].w[0] + 772u)));
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C37B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004C37B8u) [[unlikely]] return; }
L_004C37B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 60u));  goto L_004C37E0; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004C37DC; } }
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C37DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004C37DCu) [[unlikely]] return; }
L_004C37DC:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 1;
L_004C37E0:
    st32((c.r[16].w[0] + 760u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C3800:
    st32((c.r[4].w[0] + 752u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 756u), c.f[13]);  c.pc = t; return; }
L_004C3810:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 768u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004C3904; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3858u); set32(c.r[4], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C3858u) [[unlikely]] return; }
L_004C3858:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[18].w[0] + 712u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[18].w[0] + 716u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[18].w[0] + 720u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C38A0u); set32(c.r[4], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C38A0u) [[unlikely]] return; }
L_004C38A0:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 700u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 704u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 708u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C38E8u); set32(c.r[4], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C38E8u) [[unlikely]] return; }
L_004C38E8:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_004C39B4; } }
L_004C3904:
    c.f[0] = ld32((c.r[18].w[0] + 712u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 716u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 720u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 772u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3938u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C3938u) [[unlikely]] return; }
L_004C3938:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3944u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004C3944u) [[unlikely]] return; }
L_004C3944:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_004C396C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C3968; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3968u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004C3968u) [[unlikely]] return; }
L_004C3968:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_004C396C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3974u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004C3974u) [[unlikely]] return; }
L_004C3974:
    c.f[1] = ld32((c.r[18].w[0] + 700u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[5] = ld32((c.r[18].w[0] + 704u));
    c.f[4] = ld32((c.r[29].w[0] + 100u));
    c.f[3] = ld32((c.r[18].w[0] + 708u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 16;
L_004C39B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004C39D0:
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  goto L_004C39FC; }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_004C3A18; } }
L_004C39FC:
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.f[0] = ld32((c.r[3].w[0] + 368u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 372u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 376u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_004C3A18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C3A20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[28]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.f[20] = 0u;
    c.f[21] = c.f[20];
    c.f[22] = c.f[20];
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3A8Cu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004C3A8Cu) [[unlikely]] return; }
L_004C3A8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3A98u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004C3A98u) [[unlikely]] return; }
L_004C3A98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_004C3AC0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004C3ABC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3ABCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004C3ABCu) [[unlikely]] return; }
L_004C3ABC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_004C3AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3AC8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004C3AC8u) [[unlikely]] return; }
L_004C3AC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_004C3D28; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_004C3AE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[20]);  if (t) { goto L_004C3D54; } }
L_004C3AE8:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.f[6] = ld32((c.r[3].w[0] + 108u));
    c.f[5] = ld32((c.r[3].w[0] + 112u));
    c.f[4] = ld32((c.r[3].w[0] + 116u));
    c.f[0] = ld32((c.r[2].w[0] + 476u));
    c.f[1] = ld32((c.r[2].w[0] + 480u));
    c.f[2] = ld32((c.r[2].w[0] + 484u));
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[3]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004C3B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_004C3B4C; } }
L_004C3B30:
    c.facc = fp::mul(c.f[0], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[4]));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 7;
L_004C3B4C:
    c.f[6] = ld32((c.r[16].w[0] + 20u));
    c.f[7] = ld32((c.r[16].w[0] + 16u));
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[7]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[6]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[23] = 0u;
    st32((c.r[29].w[0] + 176u), c.f[5]);
    st32((c.r[29].w[0] + 180u), c.f[4]);
    st32((c.r[29].w[0] + 184u), c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[6] = fp::sqrt(c.f[6]);
    c.f[3] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[3]));
    c.budget -= 21;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[24] = c.f[23];  goto L_004C3BCC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    fpu_div(c, 6u, c.f[3], c.f[6]);
    c.f[5] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[29].w[0] + 180u));
    c.f[3] = ld32((c.r[29].w[0] + 184u));
    c.f[23] = fp::mul(c.f[5], c.f[6]);
    c.f[24] = fp::mul(c.f[4], c.f[6]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[25] = fp::mul(c.f[3], c.f[6]);  if (t) { goto L_004C3BD0; } }
L_004C3BCC:
    c.f[25] = c.f[23];
    c.budget -= 1;
L_004C3BD0:
    c.facc = fp::mul(c.f[24], c.f[2]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[25], c.f[1]));
    c.facc = fp::mul(c.f[25], c.f[0]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[23], c.f[2]));
    c.facc = fp::mul(c.f[23], c.f[1]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[24], c.f[0]));
    c.f[20] = 0u;
    st32((c.r[29].w[0] + 160u), c.f[5]);
    st32((c.r[29].w[0] + 164u), c.f[4]);
    st32((c.r[29].w[0] + 168u), c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[6] = fp::sqrt(c.f[6]);
    c.f[3] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[3]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = c.f[20];  goto L_004C3C48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    fpu_div(c, 6u, c.f[3], c.f[6]);
    c.f[5] = ld32((c.r[29].w[0] + 160u));
    c.f[4] = ld32((c.r[29].w[0] + 164u));
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    c.f[20] = fp::mul(c.f[5], c.f[6]);
    c.f[21] = fp::mul(c.f[4], c.f[6]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[3], c.f[6]);  if (t) { goto L_004C3C4C; } }
L_004C3C48:
    c.f[22] = c.f[20];
    c.budget -= 1;
L_004C3C4C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[3] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 144u), 0u);  goto L_004C3CA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.f[3] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_004C3CAC; } }
L_004C3CA0:
    set32(c.r[3], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 3;
L_004C3CAC:
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[26] = c.f[2] ^ fp::kSign;
    c.f[27] = c.f[1] ^ fp::kSign;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3CCCu); c.f[28] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004C3CCCu) [[unlikely]] return; }
L_004C3CCC:
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.f[3] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::add(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[23]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.facc = fp::add(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[24]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[27]));
    c.facc = fp::add(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[25]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[22]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[28]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[20] = fp::add(c.f[5], c.f[2]);
    c.f[21] = fp::add(c.f[4], c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[22] = fp::add(c.f[3], c.f[0]);  if (t) { goto L_004C3D50; } }
L_004C3D28:
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.f[13] = ld32((c.r[29].w[0] + 196u));
    c.f[14] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3D44u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x004C3D44u) [[unlikely]] return; }
L_004C3D44:
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 116u));
    c.f[22] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 3;
L_004C3D50:
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 1;
L_004C3D54:
    st32((c.r[17].w[0] + 4u), c.f[21]);
    st32((c.r[17].w[0] + 8u), c.f[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004C3DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  goto L_004C3DC4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
L_004C3DC4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004C3DD4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_004C3DD4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004C3DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3DE4u);  if (depth < kMaxDepth) unit_00F1(c, 4u, depth + 1u); else { c.pc = 0x004C4030u; return; } if (c.pc != 0x004C3DE4u) [[unlikely]] return; }
L_004C3DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004C3DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C3DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C3FD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004C0000u < 16384u) { entry = entries_00F0[(t - 0x004C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004C3E28:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004C3FD8; }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 2096u);
    st32((c.r[16].w[0] + 768u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3E58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3E58u) [[unlikely]] return; }
L_004C3E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3FD4; } }
L_004C3E60:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004C3FD4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3E84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3E84u) [[unlikely]] return; }
L_004C3E84:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 65u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 258u);  goto L_004C3E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 441u, depth + 1u); else { c.pc = 0x004C36D0u; return; } if (c.pc != 0x004C3E98u) [[unlikely]] return; }
L_004C3E98:
    set32(c.r[2], 0u + 258u);
    c.budget -= 1;
L_004C3E9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3EA8u); st32((c.r[16].w[0] + 768u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F0(c, 223u, depth + 1u); else { c.pc = 0x004C1AD0u; return; } if (c.pc != 0x004C3EA8u) [[unlikely]] return; }
L_004C3EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3FD4; } }
L_004C3EB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004C3FD4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3ED8u);  if (depth < kMaxDepth) unit_00F0(c, 441u, depth + 1u); else { c.pc = 0x004C36D0u; return; } if (c.pc != 0x004C3ED8u) [[unlikely]] return; }
L_004C3ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2108u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3EF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3EF0u) [[unlikely]] return; }
L_004C3EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3FD4; } }
L_004C3EF8:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004C3FD4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3F1Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3F1Cu) [[unlikely]] return; }
L_004C3F1C:
    set32(c.r[3], 0u + 258u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 768u), c.r[3].w[0]);  if (t) { goto L_004C3FD4; } }
L_004C3F28:
    set32(c.r[3], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C3FD4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 65u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004C3F50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3F4Cu);  if (depth < kMaxDepth) unit_00F0(c, 441u, depth + 1u); else { c.pc = 0x004C36D0u; return; } if (c.pc != 0x004C3F4Cu) [[unlikely]] return; }
L_004C3F4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004C3F50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 768u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2125u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3F6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3F6Cu) [[unlikely]] return; }
L_004C3F6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3FD4; } }
L_004C3F74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C3FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3F88u);  if (depth < kMaxDepth) unit_00F0(c, 445u, depth + 1u); else { c.pc = 0x004C3760u; return; } if (c.pc != 0x004C3F88u) [[unlikely]] return; }
L_004C3F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3FD4; } }
L_004C3F90:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C3FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3FA4u);  if (depth < kMaxDepth) unit_00F0(c, 441u, depth + 1u); else { c.pc = 0x004C36D0u; return; } if (c.pc != 0x004C3FA4u) [[unlikely]] return; }
L_004C3FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3FD4; } }
L_004C3FAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[5], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004C3FD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2074u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3FD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 158u, depth + 1u); else { c.pc = 0x004C13E0u; return; } if (c.pc != 0x004C3FD4u) [[unlikely]] return; }
L_004C3FD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004C3FD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C3FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_00F1(c, 1u, depth);
}

}
