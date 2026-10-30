#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003C[4096] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 9, 0, 10, 0, 11, 0, 0,
    12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0,
    188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0,
    255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0,
    0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 302,
    0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0,
    0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0,
    0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351,
    0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 361,
    0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0,
    371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0,
    381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
};

void unit_003C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F0000;
    case 2u: goto L_001F0004;
    case 3u: goto L_001F000C;
    case 4u: goto L_001F0018;
    case 5u: goto L_001F0024;
    case 6u: goto L_001F0030;
    case 7u: goto L_001F0058;
    case 8u: goto L_001F005C;
    case 9u: goto L_001F0064;
    case 10u: goto L_001F006C;
    case 11u: goto L_001F0074;
    case 12u: goto L_001F0080;
    case 13u: goto L_001F008C;
    case 14u: goto L_001F0098;
    case 15u: goto L_001F00A4;
    case 16u: goto L_001F00B0;
    case 17u: goto L_001F00BC;
    case 18u: goto L_001F00C8;
    case 19u: goto L_001F00F8;
    case 20u: goto L_001F0128;
    case 21u: goto L_001F0134;
    case 22u: goto L_001F0138;
    case 23u: goto L_001F0190;
    case 24u: goto L_001F01DC;
    case 25u: goto L_001F01FC;
    case 26u: goto L_001F0208;
    case 27u: goto L_001F0224;
    case 28u: goto L_001F0250;
    case 29u: goto L_001F025C;
    case 30u: goto L_001F0294;
    case 31u: goto L_001F02A0;
    case 32u: goto L_001F02B4;
    case 33u: goto L_001F02C4;
    case 34u: goto L_001F02D0;
    case 35u: goto L_001F0340;
    case 36u: goto L_001F0360;
    case 37u: goto L_001F0398;
    case 38u: goto L_001F03B8;
    case 39u: goto L_001F03C4;
    case 40u: goto L_001F03E0;
    case 41u: goto L_001F0418;
    case 42u: goto L_001F0424;
    case 43u: goto L_001F0448;
    case 44u: goto L_001F0454;
    case 45u: goto L_001F0464;
    case 46u: goto L_001F0474;
    case 47u: goto L_001F0480;
    case 48u: goto L_001F04C8;
    case 49u: goto L_001F050C;
    case 50u: goto L_001F052C;
    case 51u: goto L_001F0540;
    case 52u: goto L_001F0568;
    case 53u: goto L_001F0578;
    case 54u: goto L_001F0588;
    case 55u: goto L_001F05A0;
    case 56u: goto L_001F05E0;
    case 57u: goto L_001F0600;
    case 58u: goto L_001F060C;
    case 59u: goto L_001F0620;
    case 60u: goto L_001F0660;
    case 61u: goto L_001F0680;
    case 62u: goto L_001F068C;
    case 63u: goto L_001F06A8;
    case 64u: goto L_001F06D4;
    case 65u: goto L_001F06E0;
    case 66u: goto L_001F06FC;
    case 67u: goto L_001F0720;
    case 68u: goto L_001F072C;
    case 69u: goto L_001F0740;
    case 70u: goto L_001F0760;
    case 71u: goto L_001F076C;
    case 72u: goto L_001F077C;
    case 73u: goto L_001F07B4;
    case 74u: goto L_001F07C8;
    case 75u: goto L_001F0800;
    case 76u: goto L_001F0814;
    case 77u: goto L_001F0838;
    case 78u: goto L_001F0860;
    case 79u: goto L_001F0898;
    case 80u: goto L_001F08B4;
    case 81u: goto L_001F08D0;
    case 82u: goto L_001F08E0;
    case 83u: goto L_001F08EC;
    case 84u: goto L_001F0A2C;
    case 85u: goto L_001F0A50;
    case 86u: goto L_001F0AC4;
    case 87u: goto L_001F0ACC;
    case 88u: goto L_001F0AF8;
    case 89u: goto L_001F0B0C;
    case 90u: goto L_001F0B18;
    case 91u: goto L_001F0B34;
    case 92u: goto L_001F0B4C;
    case 93u: goto L_001F0B5C;
    case 94u: goto L_001F0B6C;
    case 95u: goto L_001F0BA8;
    case 96u: goto L_001F0BF0;
    case 97u: goto L_001F0C08;
    case 98u: goto L_001F0C18;
    case 99u: goto L_001F0C28;
    case 100u: goto L_001F0C38;
    case 101u: goto L_001F0C64;
    case 102u: goto L_001F0C7C;
    case 103u: goto L_001F0C88;
    case 104u: goto L_001F0C98;
    case 105u: goto L_001F0CA8;
    case 106u: goto L_001F0CB4;
    case 107u: goto L_001F0CCC;
    case 108u: goto L_001F0D38;
    case 109u: goto L_001F0D5C;
    case 110u: goto L_001F0D74;
    case 111u: goto L_001F0D80;
    case 112u: goto L_001F0D9C;
    case 113u: goto L_001F0DB4;
    case 114u: goto L_001F0DC4;
    case 115u: goto L_001F0DD4;
    case 116u: goto L_001F0DE8;
    case 117u: goto L_001F0DF8;
    case 118u: goto L_001F0E18;
    case 119u: goto L_001F0E24;
    case 120u: goto L_001F0E70;
    case 121u: goto L_001F0EA0;
    case 122u: goto L_001F0EB4;
    case 123u: goto L_001F0EC4;
    case 124u: goto L_001F0EF0;
    case 125u: goto L_001F0F00;
    case 126u: goto L_001F0F50;
    case 127u: goto L_001F0FDC;
    case 128u: goto L_001F0FF4;
    case 129u: goto L_001F1020;
    case 130u: goto L_001F1044;
    case 131u: goto L_001F1054;
    case 132u: goto L_001F1070;
    case 133u: goto L_001F10A0;
    case 134u: goto L_001F1114;
    case 135u: goto L_001F1130;
    case 136u: goto L_001F1154;
    case 137u: goto L_001F1160;
    case 138u: goto L_001F1170;
    case 139u: goto L_001F11A0;
    case 140u: goto L_001F11AC;
    case 141u: goto L_001F11C4;
    case 142u: goto L_001F11DC;
    case 143u: goto L_001F1250;
    case 144u: goto L_001F12AC;
    case 145u: goto L_001F12C8;
    case 146u: goto L_001F12F0;
    case 147u: goto L_001F12FC;
    case 148u: goto L_001F1308;
    case 149u: goto L_001F1334;
    case 150u: goto L_001F1348;
    case 151u: goto L_001F1358;
    case 152u: goto L_001F1370;
    case 153u: goto L_001F1398;
    case 154u: goto L_001F1410;
    case 155u: goto L_001F1468;
    case 156u: goto L_001F1474;
    case 157u: goto L_001F148C;
    case 158u: goto L_001F14B0;
    case 159u: goto L_001F14F0;
    case 160u: goto L_001F1534;
    case 161u: goto L_001F1550;
    case 162u: goto L_001F15E8;
    case 163u: goto L_001F15FC;
    case 164u: goto L_001F1614;
    case 165u: goto L_001F1620;
    case 166u: goto L_001F1644;
    case 167u: goto L_001F166C;
    case 168u: goto L_001F1698;
    case 169u: goto L_001F16B8;
    case 170u: goto L_001F16F0;
    case 171u: goto L_001F1714;
    case 172u: goto L_001F1738;
    case 173u: goto L_001F176C;
    case 174u: goto L_001F1800;
    case 175u: goto L_001F186C;
    case 176u: goto L_001F1880;
    case 177u: goto L_001F1890;
    case 178u: goto L_001F189C;
    case 179u: goto L_001F18B4;
    case 180u: goto L_001F18C8;
    case 181u: goto L_001F1920;
    case 182u: goto L_001F19A0;
    case 183u: goto L_001F19AC;
    case 184u: goto L_001F19C4;
    case 185u: goto L_001F19D8;
    case 186u: goto L_001F19E4;
    case 187u: goto L_001F19F4;
    case 188u: goto L_001F1A00;
    case 189u: goto L_001F1A10;
    case 190u: goto L_001F1A18;
    case 191u: goto L_001F1A3C;
    case 192u: goto L_001F1A54;
    case 193u: goto L_001F1A64;
    case 194u: goto L_001F1A98;
    case 195u: goto L_001F1AA0;
    case 196u: goto L_001F1AAC;
    case 197u: goto L_001F1AB8;
    case 198u: goto L_001F1AC4;
    case 199u: goto L_001F1AD0;
    case 200u: goto L_001F1ADC;
    case 201u: goto L_001F1AE8;
    case 202u: goto L_001F1AF4;
    case 203u: goto L_001F1B20;
    case 204u: goto L_001F1B50;
    case 205u: goto L_001F1B84;
    case 206u: goto L_001F1BA0;
    case 207u: goto L_001F1BE8;
    case 208u: goto L_001F1BF8;
    case 209u: goto L_001F1C10;
    case 210u: goto L_001F1C24;
    case 211u: goto L_001F1C70;
    case 212u: goto L_001F1C78;
    case 213u: goto L_001F1CB0;
    case 214u: goto L_001F1CF0;
    case 215u: goto L_001F1D5C;
    case 216u: goto L_001F1D74;
    case 217u: goto L_001F1D8C;
    case 218u: goto L_001F1DA8;
    case 219u: goto L_001F1DC0;
    case 220u: goto L_001F1DD8;
    case 221u: goto L_001F1DF0;
    case 222u: goto L_001F1E0C;
    case 223u: goto L_001F1E24;
    case 224u: goto L_001F1E3C;
    case 225u: goto L_001F1E5C;
    case 226u: goto L_001F1E6C;
    case 227u: goto L_001F1E84;
    case 228u: goto L_001F1EB4;
    case 229u: goto L_001F1ECC;
    case 230u: goto L_001F1F30;
    case 231u: goto L_001F1F70;
    case 232u: goto L_001F1FEC;
    case 233u: goto L_001F203C;
    case 234u: goto L_001F2088;
    case 235u: goto L_001F20C4;
    case 236u: goto L_001F211C;
    case 237u: goto L_001F2138;
    case 238u: goto L_001F2150;
    case 239u: goto L_001F217C;
    case 240u: goto L_001F21DC;
    case 241u: goto L_001F21FC;
    case 242u: goto L_001F22A0;
    case 243u: goto L_001F22C8;
    case 244u: goto L_001F2350;
    case 245u: goto L_001F239C;
    case 246u: goto L_001F23B0;
    case 247u: goto L_001F23BC;
    case 248u: goto L_001F23D4;
    case 249u: goto L_001F23E8;
    case 250u: goto L_001F2450;
    case 251u: goto L_001F24B0;
    case 252u: goto L_001F24D0;
    case 253u: goto L_001F24E4;
    case 254u: goto L_001F24F4;
    case 255u: goto L_001F2500;
    case 256u: goto L_001F2508;
    case 257u: goto L_001F2530;
    case 258u: goto L_001F2550;
    case 259u: goto L_001F2590;
    case 260u: goto L_001F25A8;
    case 261u: goto L_001F25B4;
    case 262u: goto L_001F25C4;
    case 263u: goto L_001F25D0;
    case 264u: goto L_001F25E0;
    case 265u: goto L_001F25E8;
    case 266u: goto L_001F260C;
    case 267u: goto L_001F2624;
    case 268u: goto L_001F2640;
    case 269u: goto L_001F26F8;
    case 270u: goto L_001F270C;
    case 271u: goto L_001F271C;
    case 272u: goto L_001F2728;
    case 273u: goto L_001F2738;
    case 274u: goto L_001F2748;
    case 275u: goto L_001F2754;
    case 276u: goto L_001F2764;
    case 277u: goto L_001F2774;
    case 278u: goto L_001F2780;
    case 279u: goto L_001F2790;
    case 280u: goto L_001F27A0;
    case 281u: goto L_001F27AC;
    case 282u: goto L_001F27BC;
    case 283u: goto L_001F27CC;
    case 284u: goto L_001F27D8;
    case 285u: goto L_001F27E8;
    case 286u: goto L_001F27F8;
    case 287u: goto L_001F2804;
    case 288u: goto L_001F2814;
    case 289u: goto L_001F2824;
    case 290u: goto L_001F2830;
    case 291u: goto L_001F2840;
    case 292u: goto L_001F2850;
    case 293u: goto L_001F285C;
    case 294u: goto L_001F2874;
    case 295u: goto L_001F28A8;
    case 296u: goto L_001F28B8;
    case 297u: goto L_001F28C4;
    case 298u: goto L_001F28CC;
    case 299u: goto L_001F28D8;
    case 300u: goto L_001F28E8;
    case 301u: goto L_001F28F4;
    case 302u: goto L_001F28FC;
    case 303u: goto L_001F2908;
    case 304u: goto L_001F2918;
    case 305u: goto L_001F2924;
    case 306u: goto L_001F292C;
    case 307u: goto L_001F2938;
    case 308u: goto L_001F2948;
    case 309u: goto L_001F2954;
    case 310u: goto L_001F295C;
    case 311u: goto L_001F2968;
    case 312u: goto L_001F2978;
    case 313u: goto L_001F2984;
    case 314u: goto L_001F298C;
    case 315u: goto L_001F2998;
    case 316u: goto L_001F29A8;
    case 317u: goto L_001F29B4;
    case 318u: goto L_001F29BC;
    case 319u: goto L_001F29C8;
    case 320u: goto L_001F29D8;
    case 321u: goto L_001F29E4;
    case 322u: goto L_001F29EC;
    case 323u: goto L_001F29F8;
    case 324u: goto L_001F2A08;
    case 325u: goto L_001F2A14;
    case 326u: goto L_001F2A1C;
    case 327u: goto L_001F2A60;
    case 328u: goto L_001F2AD0;
    case 329u: goto L_001F2AE4;
    case 330u: goto L_001F2AF8;
    case 331u: goto L_001F2B0C;
    case 332u: goto L_001F2B20;
    case 333u: goto L_001F2B34;
    case 334u: goto L_001F2B48;
    case 335u: goto L_001F2B5C;
    case 336u: goto L_001F2B74;
    case 337u: goto L_001F2B88;
    case 338u: goto L_001F2B9C;
    case 339u: goto L_001F2BB0;
    case 340u: goto L_001F2BC4;
    case 341u: goto L_001F2BD8;
    case 342u: goto L_001F2BEC;
    case 343u: goto L_001F2C00;
    case 344u: goto L_001F2C14;
    case 345u: goto L_001F2C2C;
    case 346u: goto L_001F2C40;
    case 347u: goto L_001F2C4C;
    case 348u: goto L_001F2C58;
    case 349u: goto L_001F2C64;
    case 350u: goto L_001F2C70;
    case 351u: goto L_001F2C7C;
    case 352u: goto L_001F2C88;
    case 353u: goto L_001F2C94;
    case 354u: goto L_001F2CA4;
    case 355u: goto L_001F2CB0;
    case 356u: goto L_001F2CC0;
    case 357u: goto L_001F2CC8;
    case 358u: goto L_001F2CD8;
    case 359u: goto L_001F2CE4;
    case 360u: goto L_001F2CF4;
    case 361u: goto L_001F2CFC;
    case 362u: goto L_001F2D0C;
    case 363u: goto L_001F2D18;
    case 364u: goto L_001F2D28;
    case 365u: goto L_001F2D30;
    case 366u: goto L_001F2D40;
    case 367u: goto L_001F2D4C;
    case 368u: goto L_001F2D5C;
    case 369u: goto L_001F2D64;
    case 370u: goto L_001F2D74;
    case 371u: goto L_001F2D80;
    case 372u: goto L_001F2D90;
    case 373u: goto L_001F2D98;
    case 374u: goto L_001F2DA8;
    case 375u: goto L_001F2DB4;
    case 376u: goto L_001F2DC4;
    case 377u: goto L_001F2DCC;
    case 378u: goto L_001F2DDC;
    case 379u: goto L_001F2DE8;
    case 380u: goto L_001F2DF8;
    case 381u: goto L_001F2E00;
    case 382u: goto L_001F2E10;
    case 383u: goto L_001F2E1C;
    case 384u: goto L_001F2E2C;
    case 385u: goto L_001F2E34;
    case 386u: goto L_001F2E80;
    case 387u: goto L_001F2EB4;
    case 388u: goto L_001F2ED0;
    case 389u: goto L_001F2F04;
    case 390u: goto L_001F2F3C;
    case 391u: goto L_001F2F84;
    case 392u: goto L_001F2FCC;
    case 393u: goto L_001F3010;
    case 394u: goto L_001F3050;
    case 395u: goto L_001F3084;
    case 396u: goto L_001F30E0;
    case 397u: goto L_001F312C;
    case 398u: goto L_001F31D0;
    case 399u: goto L_001F31F4;
    case 400u: goto L_001F3238;
    case 401u: goto L_001F3264;
    case 402u: goto L_001F32C0;
    case 403u: goto L_001F3324;
    case 404u: goto L_001F3350;
    case 405u: goto L_001F33A8;
    case 406u: goto L_001F33D0;
    case 407u: goto L_001F33E8;
    case 408u: goto L_001F3430;
    case 409u: goto L_001F347C;
    case 410u: goto L_001F34B0;
    case 411u: goto L_001F34C0;
    case 412u: goto L_001F34E0;
    case 413u: goto L_001F3500;
    case 414u: goto L_001F3530;
    case 415u: goto L_001F3544;
    case 416u: goto L_001F3570;
    case 417u: goto L_001F35A0;
    case 418u: goto L_001F35D0;
    case 419u: goto L_001F35E0;
    case 420u: goto L_001F3600;
    case 421u: goto L_001F3650;
    case 422u: goto L_001F365C;
    case 423u: goto L_001F36A0;
    case 424u: goto L_001F36B0;
    case 425u: goto L_001F36D4;
    case 426u: goto L_001F36EC;
    case 427u: goto L_001F3704;
    case 428u: goto L_001F3720;
    case 429u: goto L_001F37AC;
    case 430u: goto L_001F37CC;
    case 431u: goto L_001F37DC;
    case 432u: goto L_001F37FC;
    case 433u: goto L_001F3824;
    case 434u: goto L_001F3884;
    case 435u: goto L_001F3890;
    case 436u: goto L_001F38B0;
    case 437u: goto L_001F38C4;
    case 438u: goto L_001F38F0;
    case 439u: goto L_001F3928;
    case 440u: goto L_001F3934;
    case 441u: goto L_001F3998;
    case 442u: goto L_001F39AC;
    case 443u: goto L_001F39E0;
    case 444u: goto L_001F39F0;
    case 445u: goto L_001F3A10;
    case 446u: goto L_001F3A74;
    case 447u: goto L_001F3A9C;
    case 448u: goto L_001F3AAC;
    case 449u: goto L_001F3ACC;
    case 450u: goto L_001F3AF4;
    case 451u: goto L_001F3B2C;
    case 452u: goto L_001F3B74;
    case 453u: goto L_001F3B88;
    case 454u: goto L_001F3BB4;
    case 455u: goto L_001F3C30;
    case 456u: goto L_001F3C5C;
    case 457u: goto L_001F3C78;
    case 458u: goto L_001F3C90;
    case 459u: goto L_001F3CF0;
    case 460u: goto L_001F3D10;
    case 461u: goto L_001F3D30;
    case 462u: goto L_001F3D50;
    case 463u: goto L_001F3D60;
    case 464u: goto L_001F3DAC;
    case 465u: goto L_001F3DE0;
    case 466u: goto L_001F3E04;
    case 467u: goto L_001F3E1C;
    case 468u: goto L_001F3E40;
    case 469u: goto L_001F3E54;
    case 470u: goto L_001F3ED0;
    case 471u: goto L_001F3EE0;
    case 472u: goto L_001F3F0C;
    case 473u: goto L_001F3F30;
    case 474u: goto L_001F3F98;
    case 475u: goto L_001F3FAC;
    case 476u: goto L_001F3FF4;
    default: bad_entry(c, 0x001F0000u); return;
    }
L_001F0000:
    set32(c.r[5], c.r[5].w[0] - 17371u);
    c.budget -= 1;
L_001F0004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F000Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F000Cu) [[unlikely]] return; }
L_001F000C:
    c.f[12] = c.f[27];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0018u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0018u) [[unlikely]] return; }
L_001F0018:
    c.f[12] = c.f[26];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0024u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0024u) [[unlikely]] return; }
L_001F0024:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0030u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0030u) [[unlikely]] return; }
L_001F0030:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0058u); set32(c.r[5], c.r[5].w[0] - 17343u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001F0058u) [[unlikely]] return; }
L_001F0058:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001F005C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F0064u) [[unlikely]] return; }
L_001F0064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0134; } }
L_001F006C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0074u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0074u) [[unlikely]] return; }
L_001F0074:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0080u); st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0080u) [[unlikely]] return; }
L_001F0080:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F008Cu); st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F008Cu) [[unlikely]] return; }
L_001F008C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0098u); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0098u) [[unlikely]] return; }
L_001F0098:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00A4u); st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F00A4u) [[unlikely]] return; }
L_001F00A4:
    c.f[12] = c.f[27];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00B0u); st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F00B0u) [[unlikely]] return; }
L_001F00B0:
    c.f[12] = c.f[26];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00BCu); st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F00BCu) [[unlikely]] return; }
L_001F00BC:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00C8u); st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F00C8u) [[unlikely]] return; }
L_001F00C8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[6]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[7]);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[9]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[10]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[11]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00F8u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_003C(c, 327u, depth + 1u); else { c.pc = 0x001F2A60u; return; } if (c.pc != 0x001F00F8u) [[unlikely]] return; }
L_001F00F8:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[10].d[0] = c.r[30].d[0] + 0ull;
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0128u); st64((c.r[29].w[0] + 8u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_003C(c, 268u, depth + 1u); else { c.pc = 0x001F2640u; return; } if (c.pc != 0x001F0128u) [[unlikely]] return; }
L_001F0128:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F0134u) [[unlikely]] return; }
L_001F0134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_001F0138:
    c.f[27] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001F0190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F01E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01DCu); set32(c.r[5], c.r[5].w[0] - 17315u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F01DCu) [[unlikely]] return; }
L_001F01DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 506u));  if (t) { goto L_001F0268; } }
L_001F01E4:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001F0210; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01FCu); set32(c.r[5], c.r[5].w[0] - 17290u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F01FCu) [[unlikely]] return; }
L_001F01FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0208u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F0208u) [[unlikely]] return; }
L_001F0208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001F0344; } }
L_001F0210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F022C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0224u); set32(c.r[5], c.r[5].w[0] - 17266u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0224u) [[unlikely]] return; }
L_001F0224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0264; } }
L_001F022C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F0264; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0264; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0250u); set32(c.r[5], c.r[5].w[0] - 17242u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0250u) [[unlikely]] return; }
L_001F0250:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F025Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F025Cu) [[unlikely]] return; }
L_001F025C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0340; } }
L_001F0264:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 506u));
    c.budget -= 1;
L_001F0268:
    set32(c.r[19], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[19].d[0] = ld8((c.r[18].w[0] + 510u));  goto L_001F0274; }
L_001F0274:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F02A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0294u); set32(c.r[5], c.r[5].w[0] - 17221u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0294u) [[unlikely]] return; }
L_001F0294:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F02A0u) [[unlikely]] return; }
L_001F02A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0340; } }
L_001F02A8:
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02B4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F02B4u) [[unlikely]] return; }
L_001F02B4:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02C4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F02C4u) [[unlikely]] return; }
L_001F02C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F02D0u) [[unlikely]] return; }
L_001F02D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0340; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 506u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));  goto L_001F030C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    st8((c.r[18].w[0] + 604u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 93u));
    st8((c.r[18].w[0] + 605u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    st8((c.r[18].w[0] + 606u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 608u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F0330; } }
L_001F030C:
    st8((c.r[18].w[0] + 607u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    st8((c.r[18].w[0] + 604u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    st8((c.r[18].w[0] + 605u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 92u));
    st8((c.r[18].w[0] + 606u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 93u));
    st8((c.r[18].w[0] + 608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_001F0330:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0340u); set32(c.r[6], c.r[18].w[0] + 604u);  if (depth < kMaxDepth) unit_003C(c, 204u, depth + 1u); else { c.pc = 0x001F1B50u; return; } if (c.pc != 0x001F0340u) [[unlikely]] return; }
L_001F0340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001F0344:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F0360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F03A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0398u); set32(c.r[5], c.r[5].w[0] - 17193u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0398u) [[unlikely]] return; }
L_001F0398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_001F0430; } }
L_001F03A0:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001F03CC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03B8u); set32(c.r[5], c.r[5].w[0] - 17168u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F03B8u) [[unlikely]] return; }
L_001F03B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F03C4u) [[unlikely]] return; }
L_001F03C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F058C; } }
L_001F03CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F03E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03E0u); set32(c.r[5], c.r[5].w[0] - 17144u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F03E0u) [[unlikely]] return; }
L_001F03E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F042C; } }
L_001F03E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F042C; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F042C; } }
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F042C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0418u); set32(c.r[5], c.r[5].w[0] - 17120u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0418u) [[unlikely]] return; }
L_001F0418:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0424u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F0424u) [[unlikely]] return; }
L_001F0424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0588; } }
L_001F042C:
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_001F0430:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F045C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0448u); set32(c.r[5], c.r[5].w[0] - 17099u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0448u) [[unlikely]] return; }
L_001F0448:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0454u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F0454u) [[unlikely]] return; }
L_001F0454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0588; } }
L_001F045C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0464u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F0464u) [[unlikely]] return; }
L_001F0464:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0474u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F0474u) [[unlikely]] return; }
L_001F0474:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F0480u) [[unlikely]] return; }
L_001F0480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0588; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 77u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[6].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[4].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[16].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 12;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));  goto L_001F04D0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04C8u); set32(c.r[5], c.r[5].w[0] - 17071u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F04C8u) [[unlikely]] return; }
L_001F04C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0588; } }
L_001F04D0:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F0538; }
    c.r[2].d[0] = 0ull | 45000ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F04FC; } }
    c.r[1].d[0] = 0ull | 46001ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F0534; } }
L_001F04FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F050Cu); set32(c.r[5], c.r[5].w[0] - 17732u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F050Cu) [[unlikely]] return; }
L_001F050C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F052Cu); set32(c.r[5], c.r[5].w[0] - 17038u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001F052Cu) [[unlikely]] return; }
L_001F052C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0588; } }
L_001F0534:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F0538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0540u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001F0540u) [[unlikely]] return; }
L_001F0540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0568u); st32((c.r[18].w[0] + 572u), c.f[12]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F0568u) [[unlikely]] return; }
L_001F0568:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0578u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 258u, depth + 1u); else { c.pc = 0x001F2550u; return; } if (c.pc != 0x001F0578u) [[unlikely]] return; }
L_001F0578:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0588u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 250u, depth + 1u); else { c.pc = 0x001F2450u; return; } if (c.pc != 0x001F0588u) [[unlikely]] return; }
L_001F0588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F058C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F05A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F05D0; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[17].w[0] + 248u));  goto L_001F05E4; }
L_001F05D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F05E0u); set32(c.r[5], c.r[5].w[0] - 17017u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F05E0u) [[unlikely]] return; }
L_001F05E0:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 248u));
    c.budget -= 1;
L_001F05E4:
    c.r[2].d[0] = c.r[2].d[0] | 24ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[17].w[0] + 248u), c.r[2].d[0]);  if (t) { goto L_001F0600; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0600u); set32(c.r[5], c.r[5].w[0] - 17000u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0600u) [[unlikely]] return; }
L_001F0600:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F060Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F060Cu) [[unlikely]] return; }
L_001F060C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0620:
    set32(c.r[29], c.r[29].w[0] - 880u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F0668; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0660u); set32(c.r[5], c.r[5].w[0] - 16972u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0660u) [[unlikely]] return; }
L_001F0660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[20].w[0] + 248u));  if (t) { goto L_001F06AC; } }
L_001F0668:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001F0694; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0680u); set32(c.r[5], c.r[5].w[0] - 16947u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0680u) [[unlikely]] return; }
L_001F0680:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F068Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F068Cu) [[unlikely]] return; }
L_001F068C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001F0840; } }
L_001F0694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F06A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06A8u); set32(c.r[5], c.r[5].w[0] - 16923u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F06A8u) [[unlikely]] return; }
L_001F06A8:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 248u));
    c.budget -= 1;
L_001F06AC:
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st64((c.r[20].w[0] + 248u), c.r[2].d[0]);
    c.r[17].d[0] = ld8((c.r[20].w[0] + 506u));
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(769ll) ? 1ull : 0ull;  goto L_001F06E8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06D4u); set32(c.r[5], c.r[5].w[0] - 16902u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F06D4u) [[unlikely]] return; }
L_001F06D4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F06E0u) [[unlikely]] return; }
L_001F06E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F083C; } }
L_001F06E8:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_001F0708; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x001F06FCu) [[unlikely]] return; }
L_001F06FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_001F0744; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F0708:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001F0734; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0720u); set32(c.r[5], c.r[5].w[0] - 16865u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0720u) [[unlikely]] return; }
L_001F0720:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F072Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F072Cu) [[unlikely]] return; }
L_001F072C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F083C; } }
L_001F0734:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0740u); set32(c.r[5], c.r[5].w[0] - 16865u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0740u) [[unlikely]] return; }
L_001F0740:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_001F0744:
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[17].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + 96u);  if (t) { goto L_001F079C; } }
L_001F0760:
    set32(c.r[5], c.r[29].w[0] + 876u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F076Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F076Cu) [[unlikely]] return; }
L_001F076C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 876u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F077Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F077Cu) [[unlikely]] return; }
L_001F077C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 876u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 877u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 878u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 3u);
    c.budget -= 8;
L_001F079C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0760u | kUnwind; return; } goto L_001F0760; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F07B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F07B4u) [[unlikely]] return; }
L_001F07B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F07C8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 206u, depth + 1u); else { c.pc = 0x001F1BA0u; return; } if (c.pc != 0x001F07C8u) [[unlikely]] return; }
L_001F07C8:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 506u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F083C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001F083C; } }
    c.r[3].d[0] = ld64((c.r[19].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F083C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 494u));
    c.r[16].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 38u));  goto L_001F081C; }
    goto L_001F0804;
L_001F0800:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 38u));
    c.budget -= 1;
L_001F0804:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0814u); set32(c.r[5], c.r[5].w[0] - 16843u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0814u) [[unlikely]] return; }
L_001F0814:
    st16((c.r[20].w[0] + 494u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 38u));
    c.budget -= 2;
L_001F081C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F083C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0838u); set32(c.r[5], c.r[5].w[0] - 16804u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0838u) [[unlikely]] return; }
L_001F0838:
    st16((c.r[19].w[0] + 38u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001F083C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001F0840:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 880u);  c.pc = t; return; }
L_001F0860:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F0898; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0898u); set32(c.r[5], c.r[5].w[0] - 16760u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0898u) [[unlikely]] return; }
L_001F0898:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld64((c.r[17].w[0] + 248u));  goto L_001F08B8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08B4u); set32(c.r[5], c.r[5].w[0] - 16742u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F08B4u) [[unlikely]] return; }
L_001F08B4:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 248u));
    c.budget -= 1;
L_001F08B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 13u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08D0u); st64((c.r[17].w[0] + 248u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F08D0u) [[unlikely]] return; }
L_001F08D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08E0u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F08E0u) [[unlikely]] return; }
L_001F08E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001F08ECu) [[unlikely]] return; }
L_001F08EC:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 80u));
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 81u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 82u));
    c.r[7].d[0] = c.r[5].d[0] << 24;
    c.r[8].d[0] = ld8((c.r[29].w[0] + 88u));
    c.r[6].d[0] = c.r[4].d[0] << 16;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 83u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 84u));
    c.r[6].d[0] = c.r[7].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[9].d[0] = ld8((c.r[29].w[0] + 89u));
    c.r[6].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[11].d[0] = ld8((c.r[29].w[0] + 90u));
    c.r[7].d[0] = c.r[4].d[0] << 24;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 85u));
    c.r[6].d[0] = c.r[5].d[0] + c.r[6].d[0];
    c.r[4].d[0] = ld8((c.r[29].w[0] + 86u));
    c.r[10].d[0] = ld8((c.r[29].w[0] + 92u));
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 87u));
    c.r[5].d[0] = c.r[7].d[0] + c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 8;
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    c.r[7].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = ld8((c.r[29].w[0] + 91u));
    st64((c.r[17].w[0] + 360u), c.r[6].d[0]);
    st64((c.r[17].w[0] + 368u), c.r[7].d[0]);
    st8((c.r[17].w[0] + 507u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 503u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[17].w[0] + 506u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[17].w[0] + 816u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 506u));
    c.budget -= 35;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_001F09C8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_001F09C0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_001F09B8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_001F09B0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F09AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = ld8((c.r[17].w[0] + 507u));  if (t) { goto L_001F09D0; } }
L_001F09AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F09B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 510u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F09CC; } }
L_001F09B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 510u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F09CC; } }
L_001F09C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 510u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F09CC; } }
L_001F09C8:
    st8((c.r[17].w[0] + 510u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F09CC:
    c.r[12].d[0] = ld8((c.r[17].w[0] + 507u));
    c.budget -= 1;
L_001F09D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 510u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[17].w[0] + 509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld64((c.r[17].w[0] + 360u));
    c.r[14].d[0] = ld8((c.r[17].w[0] + 509u));
    c.r[12].d[0] = c.r[3].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 1, c.r[12].w[0], c.r[14].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.hi.d[1];
    mmi::pextlw(c.r[12], c.r[12], c.r[13]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[17].w[0] + 392u), c.r[3].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A2Cu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x001F1F70u; return; } if (c.pc != 0x001F0A2Cu) [[unlikely]] return; }
L_001F0A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F0A50:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001F0E04; } }
    set32(c.r[2], c.r[20].w[0] + c.r[19].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 272u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[23].w[0] - c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 328u)));
    st32((c.r[21].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 332u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_001F0D00; } }
L_001F0AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0ACCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A4(c, 106u, depth + 1u); else { c.pc = 0x003934E0u; return; } if (c.pc != 0x001F0ACCu) [[unlikely]] return; }
L_001F0ACC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 288u)));  goto L_001F0BB4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F0BB0; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_001F0B00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AF8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0AF8u) [[unlikely]] return; }
L_001F0AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 272u);  if (t) { goto L_001F0B10; } }
L_001F0B00:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B0Cu); set32(c.r[5], c.r[5].w[0] - 5728u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0B0Cu) [[unlikely]] return; }
L_001F0B0C:
    set32(c.r[4], c.r[21].w[0] + 272u);
    c.budget -= 1;
L_001F0B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B18u);  if (depth < kMaxDepth) unit_00A5(c, 53u, depth + 1u); else { c.pc = 0x00394F70u; return; } if (c.pc != 0x001F0B18u) [[unlikely]] return; }
L_001F0B18:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[21].w[0] + 276u), 0u);  if (t) { goto L_001F0B6C; } }
    set32(c.r[16], c.r[19].w[0] + 32u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B34u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F0B34u) [[unlikely]] return; }
L_001F0B34:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F0B60; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B4Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0B4Cu) [[unlikely]] return; }
L_001F0B4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B5Cu); set32(c.r[5], c.r[5].w[0] - 16723u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0B5Cu) [[unlikely]] return; }
L_001F0B5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F0B60:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B6Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0B6Cu) [[unlikely]] return; }
L_001F0B6C:
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[23].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F0B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0B94; } }
L_001F0B90:
    set32(c.r[16], 0u + 31u);
    c.budget -= 1;
L_001F0B94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BA8u); set32(c.r[5], c.r[5].w[0] - 5728u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0BA8u) [[unlikely]] return; }
L_001F0BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F0D10; } }
L_001F0BB0:
    set32(c.r[3], ld32((c.r[21].w[0] + 288u)));
    c.budget -= 1;
L_001F0BB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0BC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 276u)));  goto L_001F0D04; }
L_001F0BC8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 332u)));  goto L_001F0C44; }
    set32(c.r[2], ld32((c.r[21].w[0] + 332u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BF0u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F0BF0u) [[unlikely]] return; }
L_001F0BF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 328u)));  goto L_001F0C1C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C08u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0C08u) [[unlikely]] return; }
L_001F0C08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C18u); set32(c.r[5], c.r[5].w[0] - 16685u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0C18u) [[unlikely]] return; }
L_001F0C18:
    set32(c.r[5], ld32((c.r[21].w[0] + 328u)));
    c.budget -= 1;
L_001F0C1C:
    set32(c.r[4], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C28u); set32(c.r[6], c.r[16].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0C28u) [[unlikely]] return; }
L_001F0C28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C38u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0C38u) [[unlikely]] return; }
L_001F0C38:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F0CE4; } }
L_001F0C44:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C64u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F0C64u) [[unlikely]] return; }
L_001F0C64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F0C9C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C7Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0C7Cu) [[unlikely]] return; }
L_001F0C7C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C88u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0C88u) [[unlikely]] return; }
L_001F0C88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C98u); set32(c.r[5], c.r[5].w[0] - 16646u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0C98u) [[unlikely]] return; }
L_001F0C98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F0C9C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0CA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0CA8u) [[unlikely]] return; }
L_001F0CA8:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0CB4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0CB4u) [[unlikely]] return; }
L_001F0CB4:
    set32(c.r[3], ld32((c.r[21].w[0] + 332u)));
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 288u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 328u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0CCCu); set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0CCCu) [[unlikely]] return; }
L_001F0CCC:
    set32(c.r[3], ld32((c.r[21].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 288u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001F0CE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F0D0C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 328u)));
    st32((c.r[21].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 332u)));
    st32((c.r[21].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 4;
L_001F0D00:
    set32(c.r[2], ld32((c.r[21].w[0] + 276u)));
    c.budget -= 1;
L_001F0D04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0AC4u | kUnwind; return; } goto L_001F0AC4; }
L_001F0D0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F0D10:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[21].w[0] + 272u);  goto L_001F0DE0; }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 3u);  goto L_001F0D40; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 16606u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D38u); set32(c.r[6], c.r[21].w[0] + 496u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001F0D38u) [[unlikely]] return; }
L_001F0D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001F0D78; } }
L_001F0D40:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001F0D64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 16556u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D5Cu); set32(c.r[6], c.r[21].w[0] + 496u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001F0D5Cu) [[unlikely]] return; }
L_001F0D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0D74; } }
L_001F0D64:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 16508u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D74u); set32(c.r[6], c.r[21].w[0] + 496u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001F0D74u) [[unlikely]] return; }
L_001F0D74:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001F0D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D80u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0D80u) [[unlikely]] return; }
L_001F0D80:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F0DD4; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D9Cu); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F0D9Cu) [[unlikely]] return; }
L_001F0D9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F0DC8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DB4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0DB4u) [[unlikely]] return; }
L_001F0DB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DC4u); set32(c.r[5], c.r[5].w[0] - 16463u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F0DC4u) [[unlikely]] return; }
L_001F0DC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F0DC8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DD4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F0DD4u) [[unlikely]] return; }
L_001F0DD4:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[21].w[0] + 272u);
    c.budget -= 3;
L_001F0DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DE8u);  if (depth < kMaxDepth) unit_00A5(c, 53u, depth + 1u); else { c.pc = 0x00394F70u; return; } if (c.pc != 0x001F0DE8u) [[unlikely]] return; }
L_001F0DE8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DF8u); st32((c.r[21].w[0] + 276u), 0u);  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F0DF8u) [[unlikely]] return; }
L_001F0DF8:
    st32((c.r[30].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F0E30; } }
L_001F0E04:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E18u); set32(c.r[5], c.r[5].w[0] - 16435u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001F0E18u) [[unlikely]] return; }
L_001F0E18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E24u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F0E24u) [[unlikely]] return; }
L_001F0E24:
    set32(c.r[2], c.r[20].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[30].w[0]), c.r[19].w[0]);
    c.budget -= 3;
L_001F0E30:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001F0E70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] << 32;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 332u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F0EC8; } }
L_001F0EA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0] + 328u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EB4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F0EB4u) [[unlikely]] return; }
L_001F0EB4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F0EC4u) [[unlikely]] return; }
L_001F0EC4:
    set32(c.r[20], c.r[20].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_001F0EC8:
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 332u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0EA0u | kUnwind; return; } goto L_001F0EA0; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 496u));  goto L_001F0F04; }
    set32(c.r[16], ld32((c.r[17].w[0] + 328u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EF0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F0EF0u) [[unlikely]] return; }
L_001F0EF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F0F00u) [[unlikely]] return; }
L_001F0F00:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 496u));
    c.budget -= 1;
L_001F0F04:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F0F2C; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 256u));
    set32(c.r[2], 0u + 768u);
    c.r[3].d[0] = c.r[3].d[0] & 768ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F0F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F0F40; } }
L_001F0F2C:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0F40; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F0F40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F0F44:
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F50u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F0F50u) [[unlikely]] return; }
L_001F0F50:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F0F8C; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 108u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 109u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 110u));
    c.r[6].d[0] = c.r[3].d[0] << 24;
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 111u));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 480u));
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 8;
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
L_001F0F8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F0FF8; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 496u));
    c.r[3].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0FB4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0FCC; } }
L_001F0FB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0FE4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0FE4; } }
L_001F0FCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FDCu); set32(c.r[5], c.r[5].w[0] - 16402u);  if (depth < kMaxDepth) unit_0038(c, 510u, depth + 1u); else { c.pc = 0x001E3990u; return; } if (c.pc != 0x001F0FDCu) [[unlikely]] return; }
L_001F0FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F0FF8; } }
L_001F0FE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FF4u); set32(c.r[5], c.r[5].w[0] - 16402u);  if (depth < kMaxDepth) unit_0038(c, 515u, depth + 1u); else { c.pc = 0x001E3A40u; return; } if (c.pc != 0x001F0FF4u) [[unlikely]] return; }
L_001F0FF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F0FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F1020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1044u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001F1044u) [[unlikely]] return; }
L_001F1044:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1054u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001F1054u) [[unlikely]] return; }
L_001F1054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F1070:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].d[0] = c.r[2].d[0] << 24;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[4].d[0] = c.r[5].d[0] << 16;
    c.r[4].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];  c.pc = t; return; }
L_001F10A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001F1218; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_001F121C; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 252u)));  goto L_001F10F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1218; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    c.budget -= 1;
L_001F10F8:
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1114u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1114u) [[unlikely]] return; }
L_001F1114:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 252u)));  goto L_001F113C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1130u); set32(c.r[5], c.r[5].w[0] - 16384u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F1130u) [[unlikely]] return; }
L_001F1130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1218; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 252u)));
    c.budget -= 1;
L_001F113C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 248u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1154u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1154u) [[unlikely]] return; }
L_001F1154:
    set32(c.r[5], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1160u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F1160u) [[unlikely]] return; }
L_001F1160:
    st32((c.r[20].w[0] + 248u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F11F0; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_001F1170:
    set32(c.r[3], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[23].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11A0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001F11A0u) [[unlikely]] return; }
L_001F11A0:
    c.r[5].d[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11ACu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F11ACu) [[unlikely]] return; }
L_001F11AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[22].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F11CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11C4u); set32(c.r[5], c.r[5].w[0] - 16384u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F11C4u) [[unlikely]] return; }
L_001F11C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001F11F0; } }
L_001F11CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F11DCu) [[unlikely]] return; }
L_001F11DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[22].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[21].w[0] + 248u));
    st8((c.r[22].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
L_001F11F0:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1170u | kUnwind; return; } goto L_001F1170; }
    st32((c.r[20].w[0] + 248u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[20].w[0] + 252u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st64((c.r[20].w[0] + 240u), c.r[3].d[0]);
    c.budget -= 7;
L_001F1218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001F121C:
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
L_001F1250:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[5].w[0] + 280u));
    c.r[23].d[0] = c.r[17].d[0] << 32;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] + c.r[23].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12ACu); c.r[5].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F12ACu) [[unlikely]] return; }
L_001F12AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 280u));  goto L_001F12D0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12C8u); set32(c.r[5], c.r[5].w[0] - 16338u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F12C8u) [[unlikely]] return; }
L_001F12C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001F13E4; } }
L_001F12D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 276u)));
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 3;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12F0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F12F0u) [[unlikely]] return; }
L_001F12F0:
    set32(c.r[5], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F12FCu) [[unlikely]] return; }
L_001F12FC:
    st32((c.r[18].w[0] + 276u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001F13AC; } }
L_001F1308:
    set32(c.r[3], ld32((c.r[18].w[0] + 280u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[20], c.r[30].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1334u); set32(c.r[21], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F1334u) [[unlikely]] return; }
L_001F1334:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1348u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F1348u) [[unlikely]] return; }
L_001F1348:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1358u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001F1358u) [[unlikely]] return; }
L_001F1358:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1370u); c.r[5].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F1370u) [[unlikely]] return; }
L_001F1370:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[20].w[0] + 16u));
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 3;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1398u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1398u) [[unlikely]] return; }
L_001F1398:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 16u));
    set32(c.r[22], c.r[22].w[0] + 1u);
    st64((c.r[21].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 4u));
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001F13AC:
    c.r[3].d[0] = c.r[22].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1308u | kUnwind; return; } goto L_001F1308; }
    st32((c.r[18].w[0] + 276u), c.r[16].w[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 280u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[23].d[0];
    st64((c.r[18].w[0] + 280u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st64((c.r[18].w[0] + 240u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 11;
L_001F13E4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F1410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F14CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001F1454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001F14D0; } }
L_001F1454:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001F1498; } }
    set32(c.r[6], 0u + 8192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1468u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F1468u) [[unlikely]] return; }
L_001F1468:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1474u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F1474u) [[unlikely]] return; }
L_001F1474:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 616u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F148Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F148Cu) [[unlikely]] return; }
L_001F148C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st64((c.r[16].w[0] + 240u), c.r[3].d[0]);
    c.budget -= 3;
L_001F1498:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[18].w[0]));  goto L_001F14C0; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F14B0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F14B0u) [[unlikely]] return; }
L_001F14B0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001F14BC; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001F14BC:
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001F14C0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 3;
L_001F14CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001F14D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F14F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1540; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F1544; }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_001F1528; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1540; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001F1528:
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1534u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1534u) [[unlikely]] return; }
L_001F1534:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 3;
L_001F1540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F1544:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1550:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001F15A0; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F17CC; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_001F15AC; }
L_001F15A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F17CC; } }
L_001F15AC:
    set32(c.r[16], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_001F17BC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 8u);  goto L_001F1628; }
    set32(c.r[2], c.r[3].w[0] + 8u);
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15E8u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F15E8u) [[unlikely]] return; }
L_001F15E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_001F1604; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F15FCu) [[unlikely]] return; }
L_001F15FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F17CC; } }
L_001F1604:
    set32(c.r[6], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1614u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1614u) [[unlikely]] return; }
L_001F1614:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1620u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F1620u) [[unlikely]] return; }
L_001F1620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1660; } }
L_001F1628:
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1644u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1644u) [[unlikely]] return; }
L_001F1644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_001F1654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F17CC; } }
L_001F1654:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 240u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st64((c.r[20].w[0] + 240u), c.r[2].d[0]);
    c.budget -= 3;
L_001F1660:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F17BC; } }
L_001F166C:
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[16], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001F17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1698u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F1698u) [[unlikely]] return; }
L_001F1698:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_001F16C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16B8u); set32(c.r[5], c.r[5].w[0] - 16309u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F16B8u) [[unlikely]] return; }
L_001F16B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_001F17BC; } }
L_001F16C0:
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_001F16D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F16E8; } }
L_001F16D8:
    set32(c.r[2], 0u - 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F16FC; } }
L_001F16E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16F0u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F16F0u) [[unlikely]] return; }
L_001F16F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F16FC:
    set32(c.r[2], c.r[23].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1714u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1714u) [[unlikely]] return; }
L_001F1714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001F1724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F17CC; } }
L_001F1724:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1738u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1738u) [[unlikely]] return; }
L_001F1738:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F176C; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F176Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F176Cu) [[unlikely]] return; }
L_001F176C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.f[3] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 19;
L_001F17B8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001F17BC:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F166Cu | kUnwind; return; } goto L_001F166C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F17CC:
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
L_001F1800:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F18F0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_001F18F4; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F18F0; } }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F1864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F18F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F186Cu);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F186Cu) [[unlikely]] return; }
L_001F186C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1880u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F1880u) [[unlikely]] return; }
L_001F1880:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1890u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001F1890u) [[unlikely]] return; }
L_001F1890:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F189Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F189Cu) [[unlikely]] return; }
L_001F189C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F18B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F18B4u) [[unlikely]] return; }
L_001F18B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F18C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F18C8u) [[unlikely]] return; }
L_001F18C8:
    st64((c.r[16].w[0] + 264u), c.r[20].d[0]);
    st32((c.r[16].w[0] + 256u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[18].w[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st64((c.r[16].w[0] + 240u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 10;
L_001F18F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001F18F4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001F1920:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1B20; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001F1968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_001F1B24; } }
L_001F1968:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F1988; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F1988; } }
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 4;
L_001F1988:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F1A58; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F1A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19A0u); c.f[12] = ld32((c.r[28].w[0] - 32512u));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F19A0u) [[unlikely]] return; }
L_001F19A0:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F19ACu) [[unlikely]] return; }
L_001F19AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32512u));  goto L_001F19D0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19C4u); set32(c.r[5], c.r[5].w[0] - 16249u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F19C4u) [[unlikely]] return; }
L_001F19C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[28].w[0] - 32728u));  if (t) { goto L_001F19DC; } }
    c.f[12] = ld32((c.r[28].w[0] - 32512u));
    c.budget -= 1;
L_001F19D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19D8u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F19D8u) [[unlikely]] return; }
L_001F19D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F19DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F19E4u) [[unlikely]] return; }
L_001F19E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19F4u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F19F4u) [[unlikely]] return; }
L_001F19F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A00u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F1A00u) [[unlikely]] return; }
L_001F1A00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A10u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F1A10u) [[unlikely]] return; }
L_001F1A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x001F1A18u) [[unlikely]] return; }
L_001F1A18:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[16].w[0] + 328u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A3Cu); st64((c.r[16].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AF(c, 220u, depth + 1u); else { c.pc = 0x003BDD80u; return; } if (c.pc != 0x001F1A3Cu) [[unlikely]] return; }
L_001F1A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1A54; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A54u); set32(c.r[5], c.r[5].w[0] - 16222u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F1A54u) [[unlikely]] return; }
L_001F1A54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F1A58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A64u); c.r[6].d[0] = 0ull | 45455ull;  if (depth < kMaxDepth) unit_003C(c, 250u, depth + 1u); else { c.pc = 0x001F2450u; return; } if (c.pc != 0x001F1A64u) [[unlikely]] return; }
L_001F1A64:
    set32(c.r[3], 0u + 15000u);
    set32(c.r[2], 0u + 6000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 31270u);
    c.r[7].d[0] = 0ull | 32900ull;
    c.r[8].d[0] = 0ull | 64000ull;
    c.r[9].d[0] = 0ull | 33000ull;
    set32(c.r[10], 0u + 30000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A98u); c.r[11].d[0] = 0ull | 60000ull;  if (depth < kMaxDepth) unit_003C(c, 268u, depth + 1u); else { c.pc = 0x001F2640u; return; } if (c.pc != 0x001F1A98u) [[unlikely]] return; }
L_001F1A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AA0u); c.f[12] = ld32((c.r[28].w[0] - 32508u));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AA0u) [[unlikely]] return; }
L_001F1AA0:
    c.f[12] = ld32((c.r[28].w[0] - 32504u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AACu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AACu) [[unlikely]] return; }
L_001F1AAC:
    c.f[12] = ld32((c.r[28].w[0] - 32500u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AB8u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AB8u) [[unlikely]] return; }
L_001F1AB8:
    c.f[12] = ld32((c.r[28].w[0] - 32496u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AC4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AC4u) [[unlikely]] return; }
L_001F1AC4:
    c.f[12] = ld32((c.r[28].w[0] - 32528u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AD0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AD0u) [[unlikely]] return; }
L_001F1AD0:
    c.f[12] = ld32((c.r[28].w[0] - 32620u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1ADCu); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1ADCu) [[unlikely]] return; }
L_001F1ADC:
    c.f[12] = ld32((c.r[28].w[0] - 32492u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AE8u); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AE8u) [[unlikely]] return; }
L_001F1AE8:
    c.f[12] = ld32((c.r[28].w[0] - 32488u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AF4u); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001F1AF4u) [[unlikely]] return; }
L_001F1AF4:
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B20u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_003C(c, 327u, depth + 1u); else { c.pc = 0x001F2A60u; return; } if (c.pc != 0x001F1B20u) [[unlikely]] return; }
L_001F1B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_001F1B24:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F1B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1B90; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_001F1B78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F1B94; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001F1B78:
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B84u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1B84u) [[unlikely]] return; }
L_001F1B84:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 3;
L_001F1B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F1B94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1C4C; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], 0u + 4096u);  goto L_001F1BE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001F1C50; } }
    set32(c.r[6], 0u + 4096u);
    c.budget -= 1;
L_001F1BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F1BE8u) [[unlikely]] return; }
L_001F1BE8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BF8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_003C(c, 463u, depth + 1u); else { c.pc = 0x001F3D60u; return; } if (c.pc != 0x001F1BF8u) [[unlikely]] return; }
L_001F1BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 488u), c.r[2].w[0]);  if (t) { goto L_001F1C10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C10u); set32(c.r[5], c.r[5].w[0] - 16206u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F1C10u) [[unlikely]] return; }
L_001F1C10:
    set32(c.r[4], ld32((c.r[19].w[0] + 488u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C24u); set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1C24u) [[unlikely]] return; }
L_001F1C24:
    set32(c.r[3], ld32((c.r[19].w[0] + 488u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st16((c.r[19].w[0] + 492u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st64((c.r[16].w[0] + 240u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 10;
L_001F1C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001F1C50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F1C70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F1CA0; } }
L_001F1C78:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st64((c.r[5].w[0] + 144u), c.r[6].d[0]);  goto L_001F1C8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1CA0; } }
    st64((c.r[5].w[0] + 144u), c.r[6].d[0]);
    c.budget -= 1;
L_001F1C8C:
    st64((c.r[5].w[0] + 152u), c.r[7].d[0]);
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 5;
L_001F1CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1CB0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F1CE0; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st8((c.r[5].w[0] + 288u), static_cast<std::uint8_t>(c.r[6].w[0]));  goto L_001F1CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1CE0; } }
    st8((c.r[5].w[0] + 288u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_001F1CCC:
    st64((c.r[5].w[0] + 296u), c.r[7].d[0]);
    st64((c.r[5].w[0] + 304u), c.r[8].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 5;
L_001F1CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1CF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const bool t = c.r[21].d[0] == 0ull; c.r[17].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_001F1EF4; } }
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F1D54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001F1EF8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D5Cu);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F1D5Cu) [[unlikely]] return; }
L_001F1D5C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1D74u) [[unlikely]] return; }
L_001F1D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_001F1D94; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D8Cu); set32(c.r[5], c.r[5].w[0] - 16181u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F1D8Cu) [[unlikely]] return; }
L_001F1D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1EF4; } }
L_001F1D94:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DA8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1DA8u) [[unlikely]] return; }
L_001F1DA8:
    st64((c.r[20].w[0] + 208u), c.r[22].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[20].w[0] + 216u), c.r[23].d[0]);
    st8((c.r[20].w[0] + 232u), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DC0u); st8((c.r[20].w[0] + 233u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F1DC0u) [[unlikely]] return; }
L_001F1DC0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DD8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1DD8u) [[unlikely]] return; }
L_001F1DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_001F1DF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DF0u); set32(c.r[5], c.r[5].w[0] - 16143u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F1DF0u) [[unlikely]] return; }
L_001F1DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1EF4; } }
L_001F1DF8:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E0Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1E0Cu) [[unlikely]] return; }
L_001F1E0C:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E24u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1E24u) [[unlikely]] return; }
L_001F1E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_001F1E44; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E3Cu); set32(c.r[5], c.r[5].w[0] - 16107u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F1E3Cu) [[unlikely]] return; }
L_001F1E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1EF4; } }
L_001F1E44:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_001F1ED0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_001F1E5C:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E6Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001F1E6Cu) [[unlikely]] return; }
L_001F1E6C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = c.r[22].d[0] >> 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E84u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F1E84u) [[unlikely]] return; }
L_001F1E84:
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_001F1EC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EB4u); set32(c.r[5], c.r[5].w[0] - 16070u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F1EB4u) [[unlikely]] return; }
L_001F1EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1EF4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001F1EC0:
    c.r[6].d[0] = c.r[22].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1ECCu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F1ECCu) [[unlikely]] return; }
L_001F1ECC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F1ED0:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1E5Cu | kUnwind; return; } goto L_001F1E5C; }
    c.r[3].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st64((c.r[20].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st64((c.r[20].w[0] + 240u), c.r[3].d[0]);
    c.budget -= 6;
L_001F1EF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001F1EF8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F1F30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F1F60; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st64((c.r[5].w[0] + 120u), c.r[6].d[0]);  goto L_001F1F4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1F60; } }
    st64((c.r[5].w[0] + 120u), c.r[6].d[0]);
    c.budget -= 1;
L_001F1F4C:
    st64((c.r[5].w[0] + 128u), c.r[7].d[0]);
    st8((c.r[5].w[0] + 136u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 5;
L_001F1F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1F70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[21].d[0] == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_001F2320; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001F1FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_001F2324; } }
L_001F1FCC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001F1FDC; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[1].d[0] = 0ull | 0ull;  goto L_001F1FF0; }
L_001F1FDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FECu); set32(c.r[5], c.r[5].w[0] - 16030u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F1FECu) [[unlikely]] return; }
L_001F1FEC:
    c.r[1].d[0] = 0ull | 0ull;
    c.budget -= 1;
L_001F1FF0:
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[19].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F202C; } }
    c.r[1].d[0] = 0ull | 0ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F2040; }
L_001F202C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F203Cu); set32(c.r[5], c.r[5].w[0] - 15992u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F203Cu) [[unlikely]] return; }
L_001F203C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F2040:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F2088; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F2088; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F2088; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F2088; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F2088; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2088u); set32(c.r[5], c.r[5].w[0] - 15965u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F2088u) [[unlikely]] return; }
L_001F2088:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001F20B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F20B4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F20B4; } }
    c.r[1].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_001F20C8; }
L_001F20B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20C4u); set32(c.r[5], c.r[5].w[0] - 15939u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F20C4u) [[unlikely]] return; }
L_001F20C4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F20C8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001F20E0; }
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F210C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001F20E0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  goto L_001F2104; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F2100; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;  goto L_001F2120; }
L_001F2100:
    c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_001F2104:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F211C; } }
L_001F210C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F211Cu); set32(c.r[5], c.r[5].w[0] - 15912u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F211Cu) [[unlikely]] return; }
L_001F211C:
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001F2120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2138; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2138u); set32(c.r[5], c.r[5].w[0] - 15863u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F2138u) [[unlikely]] return; }
L_001F2138:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[21].w[0] + 248u));  goto L_001F2154; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2150u); set32(c.r[5], c.r[5].w[0] - 15830u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F2150u) [[unlikely]] return; }
L_001F2150:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 248u));
    c.budget -= 1;
L_001F2154:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 144u)));  goto L_001F2180; }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 800u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F217C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F217Cu); set32(c.r[5], c.r[5].w[0] - 15795u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F217Cu) [[unlikely]] return; }
L_001F217C:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_001F2180:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st64((c.r[20].w[0]), c.r[19].d[0]);  goto L_001F2200; }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 800u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F21CC; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F21CC; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F21CC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld64((c.r[21].w[0] + 248u));  goto L_001F21E0; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F21DC; } }
L_001F21CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21DCu); set32(c.r[5], c.r[5].w[0] - 15745u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F21DCu) [[unlikely]] return; }
L_001F21DC:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 248u));
    c.budget -= 1;
L_001F21E0:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F21FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21FCu); set32(c.r[5], c.r[5].w[0] - 15715u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F21FCu) [[unlikely]] return; }
L_001F21FC:
    st64((c.r[20].w[0]), c.r[19].d[0]);
    c.budget -= 1;
L_001F2200:
    set32(c.r[3], 0u + 3u);
    st64((c.r[20].w[0] + 8u), c.r[18].d[0]);
    st8((c.r[20].w[0] + 40u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 41u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st8((c.r[20].w[0] + 42u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[20].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 41u));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[2].d[0] & 2ull;  goto L_001F223C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F2254; } }
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 1;
L_001F223C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F2250; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F2254; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F2250:
    st8((c.r[20].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F2254:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 41u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  goto L_001F2274; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 45u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
L_001F2274:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 45u));
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 40u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st8((c.r[20].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld8((c.r[20].w[0] + 46u));
    set32(c.r[2], c.r[16].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22A0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x001F22A0u) [[unlikely]] return; }
L_001F22A0:
    set32(c.r[3], 0u - 64u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[20].w[0]));  goto L_001F22D4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22C8u); set32(c.r[5], c.r[5].w[0] - 15685u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F22C8u) [[unlikely]] return; }
L_001F22C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[20].w[0] + 24u), 0ull);  if (t) { goto L_001F2320; } }
    c.r[3].d[0] = ld64((c.r[20].w[0]));
    c.budget -= 1;
L_001F22D4:
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[20].w[0] + 24u), c.r[3].d[0]);
    c.budget -= 19;
L_001F2320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001F2324:
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
L_001F2350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F2430; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));  goto L_001F2388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F2434; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_001F2388:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 8u);  goto L_001F23A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F239Cu); set32(c.r[5], c.r[5].w[0] - 15622u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F239Cu) [[unlikely]] return; }
L_001F239C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2430; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 1;
L_001F23A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F23B0u) [[unlikely]] return; }
L_001F23B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23BCu); set32(c.r[5], 0u + 512u);  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001F23BCu) [[unlikely]] return; }
L_001F23BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 736u), c.r[2].w[0]);  if (t) { goto L_001F23DC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23D4u); set32(c.r[5], c.r[5].w[0] - 15581u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F23D4u) [[unlikely]] return; }
L_001F23D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2430; } }
L_001F23DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F2400; } }
    set32(c.r[5], c.r[6].w[0] << 1);
    c.budget -= 1;
L_001F23E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 736u)));
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
L_001F2400:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F23E8u | kUnwind; return; } goto L_001F23E8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 736u)));
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st64((c.r[17].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 240u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[17].w[0] + 240u), c.r[3].d[0]);
    c.budget -= 8;
L_001F2430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F2434:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F2450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F2530; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[1].d[0] = 0ull | 0ull;  goto L_001F2488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001F2534; } }
    c.r[1].d[0] = 0ull | 0ull;
    c.budget -= 1;
L_001F2488:
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F24BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24B0u); set32(c.r[5], c.r[5].w[0] - 16249u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F24B0u) [[unlikely]] return; }
L_001F24B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_001F24DC; } }
L_001F24BC:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { c.r[16].d[0] = c.r[6].d[0] + 0ull;  goto L_001F24DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24D0u); set32(c.r[5], c.r[5].w[0] - 15540u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F24D0u) [[unlikely]] return; }
L_001F24D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F24DC; } }
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001F24DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F24E4u) [[unlikely]] return; }
L_001F24E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24F4u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F24F4u) [[unlikely]] return; }
L_001F24F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2500u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F2500u) [[unlikely]] return; }
L_001F2500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2508u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2508u) [[unlikely]] return; }
L_001F2508:
    st32((c.r[17].w[0] + 56u), c.f[0]);
    st64((c.r[17].w[0] + 328u), c.r[16].d[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[17].w[0] + 16u), c.r[3].d[0]);  if (t) { goto L_001F2530; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2530u); set32(c.r[5], c.r[5].w[0] - 16222u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F2530u) [[unlikely]] return; }
L_001F2530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001F2534:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F2550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F2624; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));  goto L_001F2588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F2628; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 1;
L_001F2588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2590u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2590u) [[unlikely]] return; }
L_001F2590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F25AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25A8u); set32(c.r[5], c.r[5].w[0] - 16249u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F25A8u) [[unlikely]] return; }
L_001F25A8:
    c.r[18].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 1;
L_001F25AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F25B4u) [[unlikely]] return; }
L_001F25B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25C4u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F25C4u) [[unlikely]] return; }
L_001F25C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F25D0u) [[unlikely]] return; }
L_001F25D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25E0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F25E0u) [[unlikely]] return; }
L_001F25E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x001F25E8u) [[unlikely]] return; }
L_001F25E8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[16].w[0] + 328u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F260Cu); st64((c.r[16].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AF(c, 220u, depth + 1u); else { c.pc = 0x003BDD80u; return; } if (c.pc != 0x001F260Cu) [[unlikely]] return; }
L_001F260C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2624; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2624u); set32(c.r[5], c.r[5].w[0] - 16222u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F2624u) [[unlikely]] return; }
L_001F2624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F2628:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F2640:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[30].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 21;
    { const bool t = c.r[23].d[0] == 0ull; c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_001F2A2C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001F26A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001F2A30; } }
L_001F26A4:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] < 0;  if (t) { goto L_001F26E8; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 296u));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2704; }
L_001F26E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26F8u); set32(c.r[5], c.r[5].w[0] - 15509u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F26F8u) [[unlikely]] return; }
L_001F26F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2A2C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F270Cu);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F270Cu) [[unlikely]] return; }
L_001F270C:
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F271Cu); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F271Cu) [[unlikely]] return; }
L_001F271C:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2728u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2728u) [[unlikely]] return; }
L_001F2728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2738u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2738u) [[unlikely]] return; }
L_001F2738:
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2748u); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2748u) [[unlikely]] return; }
L_001F2748:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2754u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2754u) [[unlikely]] return; }
L_001F2754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2764u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2764u) [[unlikely]] return; }
L_001F2764:
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2774u); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2774u) [[unlikely]] return; }
L_001F2774:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2780u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2780u) [[unlikely]] return; }
L_001F2780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2790u) [[unlikely]] return; }
L_001F2790:
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27A0u); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F27A0u) [[unlikely]] return; }
L_001F27A0:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F27ACu) [[unlikely]] return; }
L_001F27AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F27BCu) [[unlikely]] return; }
L_001F27BC:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27CCu); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F27CCu) [[unlikely]] return; }
L_001F27CC:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F27D8u) [[unlikely]] return; }
L_001F27D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27E8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F27E8u) [[unlikely]] return; }
L_001F27E8:
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27F8u); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F27F8u) [[unlikely]] return; }
L_001F27F8:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2804u) [[unlikely]] return; }
L_001F2804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2814u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2814u) [[unlikely]] return; }
L_001F2814:
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2824u); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2824u) [[unlikely]] return; }
L_001F2824:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2830u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2830u) [[unlikely]] return; }
L_001F2830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2840u); c.r[4].d[0] = ld64((c.r[29].w[0] + 296u));  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2840u) [[unlikely]] return; }
L_001F2840:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2850u); c.r[4].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2850u) [[unlikely]] return; }
L_001F2850:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F285Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F285Cu) [[unlikely]] return; }
L_001F285C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st64((c.r[21].w[0] + 336u), c.r[20].d[0]);  goto L_001F2880; }
L_001F2864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2874u); set32(c.r[5], c.r[5].w[0] - 15457u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F2874u) [[unlikely]] return; }
L_001F2874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2A2C; } }
    st64((c.r[21].w[0] + 336u), c.r[20].d[0]);
    c.budget -= 1;
L_001F2880:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[21].w[0] + 344u), c.r[19].d[0]);
    st64((c.r[21].w[0] + 352u), c.r[18].d[0]);
    st64((c.r[21].w[0] + 360u), c.r[17].d[0]);
    st64((c.r[21].w[0] + 368u), c.r[16].d[0]);
    st64((c.r[21].w[0] + 376u), c.r[22].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 296u));
    st64((c.r[21].w[0] + 384u), c.r[30].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28A8u); st64((c.r[21].w[0] + 392u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F28A8u) [[unlikely]] return; }
L_001F28A8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28B8u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F28B8u) [[unlikely]] return; }
L_001F28B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28C4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F28C4u) [[unlikely]] return; }
L_001F28C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F28CCu) [[unlikely]] return; }
L_001F28CC:
    st32((c.r[21].w[0] + 168u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F28D8u) [[unlikely]] return; }
L_001F28D8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28E8u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F28E8u) [[unlikely]] return; }
L_001F28E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F28F4u) [[unlikely]] return; }
L_001F28F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F28FCu) [[unlikely]] return; }
L_001F28FC:
    st32((c.r[21].w[0] + 172u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2908u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2908u) [[unlikely]] return; }
L_001F2908:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2918u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2918u) [[unlikely]] return; }
L_001F2918:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2924u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F2924u) [[unlikely]] return; }
L_001F2924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F292Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F292Cu) [[unlikely]] return; }
L_001F292C:
    st32((c.r[21].w[0] + 176u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2938u) [[unlikely]] return; }
L_001F2938:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2948u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2948u) [[unlikely]] return; }
L_001F2948:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2954u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F2954u) [[unlikely]] return; }
L_001F2954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F295Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F295Cu) [[unlikely]] return; }
L_001F295C:
    st32((c.r[21].w[0] + 180u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2968u) [[unlikely]] return; }
L_001F2968:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2978u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2978u) [[unlikely]] return; }
L_001F2978:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2984u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F2984u) [[unlikely]] return; }
L_001F2984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F298Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F298Cu) [[unlikely]] return; }
L_001F298C:
    st32((c.r[21].w[0] + 184u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2998u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F2998u) [[unlikely]] return; }
L_001F2998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29A8u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F29A8u) [[unlikely]] return; }
L_001F29A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F29B4u) [[unlikely]] return; }
L_001F29B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F29BCu) [[unlikely]] return; }
L_001F29BC:
    st32((c.r[21].w[0] + 188u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29C8u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F29C8u) [[unlikely]] return; }
L_001F29C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29D8u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F29D8u) [[unlikely]] return; }
L_001F29D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F29E4u) [[unlikely]] return; }
L_001F29E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F29ECu) [[unlikely]] return; }
L_001F29EC:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 296u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29F8u); st32((c.r[21].w[0] + 192u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x001F29F8u) [[unlikely]] return; }
L_001F29F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A08u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2A08u) [[unlikely]] return; }
L_001F2A08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001F2A14u) [[unlikely]] return; }
L_001F2A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2A1Cu) [[unlikely]] return; }
L_001F2A1C:
    st32((c.r[21].w[0] + 196u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[21].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st64((c.r[21].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 4;
L_001F2A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001F2A30:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001F2A60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 21;
    { const bool t = c.r[23].d[0] == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_001F2E44; } }
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001F2AC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001F2E48; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F2AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2AD0u) [[unlikely]] return; }
L_001F2AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2AE4u) [[unlikely]] return; }
L_001F2AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2AF8u) [[unlikely]] return; }
L_001F2AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2B0Cu) [[unlikely]] return; }
L_001F2B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2B20u) [[unlikely]] return; }
L_001F2B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2B34u) [[unlikely]] return; }
L_001F2B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2B48u) [[unlikely]] return; }
L_001F2B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2B64; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001F2B5Cu) [[unlikely]] return; }
L_001F2B5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));  goto L_001F2B80; }
L_001F2B64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B74u); set32(c.r[5], c.r[5].w[0] - 15509u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F2B74u) [[unlikely]] return; }
L_001F2B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2E44; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 1;
L_001F2B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2B88u) [[unlikely]] return; }
L_001F2B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2B9Cu) [[unlikely]] return; }
L_001F2B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2BB0u) [[unlikely]] return; }
L_001F2BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2BC4u) [[unlikely]] return; }
L_001F2BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BD8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2BD8u) [[unlikely]] return; }
L_001F2BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BECu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2BECu) [[unlikely]] return; }
L_001F2BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C00u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2C00u) [[unlikely]] return; }
L_001F2C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C1C; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C14u); c.r[5].d[0] = ld64((c.r[28].w[0] - 32728u));  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001F2C14u) [[unlikely]] return; }
L_001F2C14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001F2C38; }
L_001F2C1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C2Cu); set32(c.r[5], c.r[5].w[0] - 15457u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001F2C2Cu) [[unlikely]] return; }
L_001F2C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2E44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F2C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C40u);  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C40u) [[unlikely]] return; }
L_001F2C40:
    st32((c.r[20].w[0] + 168u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C4Cu) [[unlikely]] return; }
L_001F2C4C:
    st32((c.r[20].w[0] + 172u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C58u) [[unlikely]] return; }
L_001F2C58:
    st32((c.r[20].w[0] + 176u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C64u) [[unlikely]] return; }
L_001F2C64:
    st32((c.r[20].w[0] + 180u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C70u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C70u) [[unlikely]] return; }
L_001F2C70:
    st32((c.r[20].w[0] + 184u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C7Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C7Cu) [[unlikely]] return; }
L_001F2C7C:
    st32((c.r[20].w[0] + 188u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C88u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C88u) [[unlikely]] return; }
L_001F2C88:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C94u); st32((c.r[20].w[0] + 192u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001F2C94u) [[unlikely]] return; }
L_001F2C94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[20].w[0] + 196u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CA4u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2CA4u) [[unlikely]] return; }
L_001F2CA4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2CB0u) [[unlikely]] return; }
L_001F2CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CC0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2CC0u) [[unlikely]] return; }
L_001F2CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2CC8u) [[unlikely]] return; }
L_001F2CC8:
    st64((c.r[20].w[0] + 336u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CD8u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2CD8u) [[unlikely]] return; }
L_001F2CD8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2CE4u) [[unlikely]] return; }
L_001F2CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CF4u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2CF4u) [[unlikely]] return; }
L_001F2CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2CFCu) [[unlikely]] return; }
L_001F2CFC:
    st64((c.r[20].w[0] + 344u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D0Cu); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2D0Cu) [[unlikely]] return; }
L_001F2D0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2D18u) [[unlikely]] return; }
L_001F2D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D28u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2D28u) [[unlikely]] return; }
L_001F2D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2D30u) [[unlikely]] return; }
L_001F2D30:
    st64((c.r[20].w[0] + 352u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D40u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2D40u) [[unlikely]] return; }
L_001F2D40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2D4Cu) [[unlikely]] return; }
L_001F2D4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D5Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2D5Cu) [[unlikely]] return; }
L_001F2D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2D64u) [[unlikely]] return; }
L_001F2D64:
    st64((c.r[20].w[0] + 360u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D74u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2D74u) [[unlikely]] return; }
L_001F2D74:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2D80u) [[unlikely]] return; }
L_001F2D80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D90u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2D90u) [[unlikely]] return; }
L_001F2D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2D98u) [[unlikely]] return; }
L_001F2D98:
    st64((c.r[20].w[0] + 368u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DA8u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2DA8u) [[unlikely]] return; }
L_001F2DA8:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2DB4u) [[unlikely]] return; }
L_001F2DB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DC4u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2DC4u) [[unlikely]] return; }
L_001F2DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2DCCu) [[unlikely]] return; }
L_001F2DCC:
    st64((c.r[20].w[0] + 376u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DDCu); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2DDCu) [[unlikely]] return; }
L_001F2DDC:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2DE8u) [[unlikely]] return; }
L_001F2DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DF8u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2DF8u) [[unlikely]] return; }
L_001F2DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2E00u) [[unlikely]] return; }
L_001F2E00:
    st64((c.r[20].w[0] + 384u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E10u); c.r[4].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001F2E10u) [[unlikely]] return; }
L_001F2E10:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001F2E1Cu) [[unlikely]] return; }
L_001F2E1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E2Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001F2E2Cu) [[unlikely]] return; }
L_001F2E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x001F2E34u) [[unlikely]] return; }
L_001F2E34:
    st64((c.r[20].w[0] + 392u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st64((c.r[20].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 4;
L_001F2E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001F2E48:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F2E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F2EC0; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_001F2EA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F2EC4; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001F2EA8:
    set32(c.r[4], c.r[16].w[0] + 106u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EB4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001F2EB4u) [[unlikely]] return; }
L_001F2EB4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 3;
L_001F2EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F2EC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F2ED0:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[8].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2FFC; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001F2F64; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 6u);  goto L_001F2F2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F2F18; } }
L_001F2F04:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 5;
L_001F2F18:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2F04u | kUnwind; return; } goto L_001F2F04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2FFC; } }
L_001F2F2C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_001F2FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F2F50; } }
L_001F2F3C:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 5;
L_001F2F50:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2F3Cu | kUnwind; return; } goto L_001F2F3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2FFC; } }
L_001F2F64:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_001F2FFC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 6u);  goto L_001F2FBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F2FA8; } }
L_001F2F84:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 9;
L_001F2FA8:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2F84u | kUnwind; return; } goto L_001F2F84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2FFC; } }
L_001F2FBC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_001F2FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F2FF0; } }
L_001F2FCC:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 9;
L_001F2FF0:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2FCCu | kUnwind; return; } goto L_001F2FCC; }
L_001F2FFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3010:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[8], 0u + 4u);
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0]; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F31A0; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[8], 0u + 8u);
    c.budget -= 4;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[6].d[0] = c.r[6].d[0] & 128ull;  goto L_001F30C8; }
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_001F30A4; }
    set32(c.r[7], c.r[7].w[0] + 3u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001F3070; } }
L_001F3050:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 8;
L_001F3070:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3050u | kUnwind; return; } goto L_001F3050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 24u);  if (t) { goto L_001F30B4; } }
L_001F3084:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 8;
L_001F30A4:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3084u | kUnwind; return; } goto L_001F3084; }
    set32(c.r[6], 0u + 24u);
    c.budget -= 1;
L_001F30B4:
    c.r[5].d[0] = c.r[3].d[0] << 1;
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001F3188; } }
L_001F30C8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_001F3164; }
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001F3118; } }
L_001F30E0:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 5u));
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 6u);
    c.budget -= 14;
L_001F3118:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F30E0u | kUnwind; return; } goto L_001F30E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] << 1;  if (t) { goto L_001F3174; } }
L_001F312C:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 5u));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 6u));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 7u));
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 6u);
    c.budget -= 14;
L_001F3164:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F312Cu | kUnwind; return; } goto L_001F312C; }
    c.r[5].d[0] = c.r[3].d[0] << 1;
    c.budget -= 1;
L_001F3174:
    set32(c.r[6], 0u + 48u);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 1;
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 5;
L_001F3188:
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F32AC; } }
L_001F31A0:
    set32(c.r[8], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_001F32AC; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[8], 0u + 8u);
    c.budget -= 4;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[6].d[0] = c.r[6].d[0] & 128ull;  goto L_001F3220; }
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_001F3204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001F31E0; } }
L_001F31D0:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
L_001F31E0:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F31D0u | kUnwind; return; } goto L_001F31D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_001F3214; } }
L_001F31F4:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
L_001F3204:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F31F4u | kUnwind; return; } goto L_001F31F4; }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_001F3214:
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001F3298; } }
L_001F3220:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_001F327C; }
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001F3250; } }
L_001F3238:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 6;
L_001F3250:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3238u | kUnwind; return; } goto L_001F3238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_001F328C; } }
L_001F3264:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 6;
L_001F327C:
    c.r[6].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3264u | kUnwind; return; } goto L_001F3264; }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_001F328C:
    c.r[3].d[0] = c.r[3].d[0] << 1;
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 3;
L_001F3298:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001F32AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F32C0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3340; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_001F32EC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 5696u);  if (t) { goto L_001F3318; } }
L_001F32EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_001F3308; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 5440u);  if (t) { goto L_001F3318; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_001F3308:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F3340; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[6].w[0] - 5184u);
    c.budget -= 2;
L_001F3318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3338; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 1;
L_001F3324:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_001F3338:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3324u | kUnwind; return; } goto L_001F3324; }
L_001F3340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3350:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F33C8; } }
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + c.r[6].d[0];  if (t) { goto L_001F33BC; } }
L_001F33A8:
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 5;
L_001F33BC:
    c.r[3].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F33A8u | kUnwind; return; } goto L_001F33A8; }
L_001F33C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F33D0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_001F340C; }
    c.r[4].d[0] = ld64((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F33F8; } }
L_001F33E8:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_001F33F8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F33E8u | kUnwind; return; } goto L_001F33E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F34A4; } }
L_001F340C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_001F3458; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F3454; } }
    c.r[4].d[0] = ld64((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F3440; } }
L_001F3430:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 4;
L_001F3440:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3430u | kUnwind; return; } goto L_001F3430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F34A4; } }
L_001F3454:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_001F3458:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001F34A4; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F34A4; } }
    c.r[4].d[0] = ld64((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F3498; } }
L_001F347C:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
L_001F3498:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F347Cu | kUnwind; return; } goto L_001F347C; }
L_001F34A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F34B0:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001F34C0:
    c.r[5].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001F34E0:
    c.r[5].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001F3500:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 503u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F351C; }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st64((c.r[4].w[0] + 264u), c.r[3].d[0]);
    c.budget -= 4;
L_001F351C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3530:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    set32(c.r[7], c.r[4].w[0] + 609u);
    set32(c.r[6], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[4].w[0] + 264u), c.r[3].d[0]);
    c.budget -= 5;
L_001F3544:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3544u | kUnwind; return; } goto L_001F3544; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3570:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 507u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3590; } }
    c.r[5].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 264u), c.r[3].d[0]);
    c.budget -= 4;
L_001F3590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F35A0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 507u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F35BC; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st64((c.r[4].w[0] + 264u), c.r[3].d[0]);
    c.budget -= 3;
L_001F35BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F35D0:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001F35E0:
    st64((c.r[4].w[0] + 824u), 0ull);
    set32(c.r[3], 0u - 256u);
    st8((c.r[4].w[0] + 817u), static_cast<std::uint8_t>(0u));
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 832u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 832u), c.r[3].d[0]);  c.pc = t; return; }
L_001F3600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F3624; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F367C; }
L_001F3624:
    set32(c.r[16], ld32((c.r[4].w[0] + 784u)));
    c.budget -= 3;
    if (c.r[16].sd[0] > 0) { set32(c.r[2], ld32((c.r[4].w[0] + 788u)));  goto L_001F363C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F367C; } }
L_001F363C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 5u);  if (t) { goto L_001F3670; } }
L_001F3650:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F365Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001F365Cu) [[unlikely]] return; }
L_001F365C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_001F366C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));  if (t) { goto L_001F367C; } }
L_001F366C:
    set32(c.r[18], c.r[18].w[0] - 5u);
    c.budget -= 1;
L_001F3670:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3650u | kUnwind; return; } goto L_001F3650; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F367C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F36A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 228u)));  c.pc = t; return; }
L_001F36B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 32767u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36D4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F36D4u) [[unlikely]] return; }
L_001F36D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 784u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F36F8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F36ECu) [[unlikely]] return; }
L_001F36EC:
    st32((c.r[17].w[0] + 788u), 0u);
    st32((c.r[17].w[0] + 784u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001F36F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3704u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001F3704u) [[unlikely]] return; }
L_001F3704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3720:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001F3C0C; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3768; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001F3C10; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 1;
L_001F3768:
    c.r[5].d[0] = c.r[17].d[0] & 16384ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3808; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[20].d[0] = 0ull + 0ull;  goto L_001F37E0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3804; } }
    set32(c.r[20], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F3804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37ACu);  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F37ACu) [[unlikely]] return; }
L_001F37AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_001F3804; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F37E0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F37CC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 16384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37DCu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F37DCu) [[unlikely]] return; }
L_001F37DC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001F37E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F37CCu | kUnwind; return; } goto L_001F37CC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F37FCu) [[unlikely]] return; }
L_001F37FC:
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 2;
L_001F3804:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 1;
L_001F3808:
    c.r[4].d[0] = c.r[17].d[0] & 8192ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3840; }
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3824u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3824u) [[unlikely]] return; }
L_001F3824:
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    set32(c.r[3], 0u - 17u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[18].w[0] + 92u), 0u);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 7;
L_001F3840:
    c.r[4].d[0] = c.r[17].d[0] & 256ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3868; }
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    set32(c.r[3], 0u - 16385u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 6;
L_001F3868:
    c.r[4].d[0] = c.r[17].d[0] & 128ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F390C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3884u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3884u) [[unlikely]] return; }
L_001F3884:
    set32(c.r[5], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3890u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3890u) [[unlikely]] return; }
L_001F3890:
    st32((c.r[18].w[0] + 200u), 0u);
    st32((c.r[18].w[0] + 224u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));  goto L_001F38F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001F38D4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 1;
L_001F38B0:
    set32(c.r[20], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F38C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F38C4u) [[unlikely]] return; }
L_001F38C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001F38D4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 233u));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F38B0u | kUnwind; return; } goto L_001F38B0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F38F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F38F0u) [[unlikely]] return; }
L_001F38F0:
    st32((c.r[18].w[0] + 228u), 0u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    c.budget -= 2;
L_001F38F8:
    set32(c.r[3], 0u - 1025u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 5;
L_001F390C:
    c.r[4].d[0] = c.r[17].d[0] & 16ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3954; }
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3928u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3928u) [[unlikely]] return; }
L_001F3928:
    set32(c.r[5], ld32((c.r[18].w[0] + 260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3934u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3934u) [[unlikely]] return; }
L_001F3934:
    st32((c.r[18].w[0] + 256u), 0u);
    set32(c.r[3], 0u - 4097u);
    st32((c.r[18].w[0] + 260u), 0u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 8;
L_001F3954:
    c.r[4].d[0] = c.r[17].d[0] & 32ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3A30; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld64((c.r[18].w[0] + 280u));  goto L_001F39CC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3A2C; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3998u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3998u) [[unlikely]] return; }
L_001F3998:
    set32(c.r[2], ld32((c.r[18].w[0] + 276u)));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F39ACu) [[unlikely]] return; }
L_001F39AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 276u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 276u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_001F3A2C; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 280u));
    c.budget -= 1;
L_001F39CC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));  goto L_001F3A1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F39F4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F39E0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39F0u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F39F0u) [[unlikely]] return; }
L_001F39F0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001F39F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 280u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F39E0u | kUnwind; return; } goto L_001F39E0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3A10u) [[unlikely]] return; }
L_001F3A10:
    st32((c.r[18].w[0] + 276u), 0u);
    st64((c.r[18].w[0] + 280u), 0ull);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    c.budget -= 3;
L_001F3A1C:
    set32(c.r[3], 0u - 8193u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 4;
L_001F3A2C:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 1;
L_001F3A30:
    c.r[4].d[0] = c.r[17].d[0] & 512ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3AD8; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 252u)));  goto L_001F3A88; }
    set32(c.r[3], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3AD4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3A74u) [[unlikely]] return; }
L_001F3A74:
    set32(c.r[3], ld32((c.r[18].w[0] + 248u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_001F3AD4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 252u)));
    c.budget -= 1;
L_001F3A88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F3AB0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F3A9C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3AACu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001F3AACu) [[unlikely]] return; }
L_001F3AAC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001F3AB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3A9Cu | kUnwind; return; } goto L_001F3A9C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3ACCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3ACCu) [[unlikely]] return; }
L_001F3ACC:
    st32((c.r[18].w[0] + 248u), 0u);
    st32((c.r[18].w[0] + 252u), 0u);
    c.budget -= 2;
L_001F3AD4:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 1;
L_001F3AD8:
    c.r[4].d[0] = c.r[17].d[0] & 8ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3B10; }
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3AF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3AF4u) [[unlikely]] return; }
L_001F3AF4:
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 7;
L_001F3B10:
    c.r[4].d[0] = c.r[17].d[0] & 4096ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));  goto L_001F3B4C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B2Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3B2Cu) [[unlikely]] return; }
L_001F3B2C:
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    st16((c.r[18].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.budget -= 8;
L_001F3B4C:
    c.r[4].d[0] = c.r[17].d[0] & 64ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_001F3BD4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  goto L_001F3BBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001F3B98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 1;
L_001F3B74:
    set32(c.r[20], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3B88u) [[unlikely]] return; }
L_001F3B88:
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001F3B98:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3B74u | kUnwind; return; } goto L_001F3B74; }
    set32(c.r[5], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3BB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001F3BB4u) [[unlikely]] return; }
L_001F3BB4:
    st32((c.r[18].w[0] + 320u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 2;
L_001F3BBC:
    c.r[4].d[0] = ld64((c.r[18].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_001F3BD4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u - 16929u);  goto L_001F3BF4; }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    c.r[4].d[0] = ~(c.r[17].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 240u), c.r[3].d[0]);  if (t) { goto L_001F3C0C; } }
    set32(c.r[4], 0u - 16929u);
    c.budget -= 1;
L_001F3BF4:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 240u));
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    c.r[4].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st64((c.r[18].w[0] + 240u), c.r[3].d[0]);
    c.budget -= 6;
L_001F3C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001F3C10:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F3C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001F3C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3C7C; } }
L_001F3C4C:
    set32(c.r[5], ld32((c.r[2].w[0] + 844u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C5Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0039(c, 12u, depth + 1u); else { c.pc = 0x001E4140u; return; } if (c.pc != 0x001F3C5Cu) [[unlikely]] return; }
L_001F3C5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F3C7C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C78u); set32(c.r[6], 0u + 400u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001F3C78u) [[unlikely]] return; }
L_001F3C78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F3C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 496u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3CCC; } }
    c.r[4].d[0] = ld64((c.r[16].w[0] + 256u));
    set32(c.r[3], 0u + 768u);
    c.r[4].d[0] = c.r[4].d[0] & 768ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F3CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F3CE0; } }
L_001F3CCC:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3CE0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3CE0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F3D00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3CF0u); set32(c.r[4], ld32((c.r[16].w[0] + 480u)));  if (depth < kMaxDepth) unit_00A4(c, 11u, depth + 1u); else { c.pc = 0x003907E0u; return; } if (c.pc != 0x001F3CF0u) [[unlikely]] return; }
L_001F3CF0:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[16].w[0] + 480u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_001F3D00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 11u, depth + 1u); else { c.pc = 0x003907E0u; return; } if (c.pc != 0x001F3D30u) [[unlikely]] return; }
L_001F3D30:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[16].w[0] + 480u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3D50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3FC0u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 545u, depth); }
L_001F3D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[6].d[0] << 32;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::multu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = ld64((c.r[4].w[0] + 256u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st64((c.r[4].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[18], c.r[2], c.r[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001F3DACu) [[unlikely]] return; }
L_001F3DAC:
    st64((c.r[16].w[0] + 256u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { c.r[1].d[0] = 0ull | 32769ull;  goto L_001F3DC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F3E24; } }
L_001F3DC4:
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] << 32;  goto L_001F3E0C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DE0u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001F3DE0u) [[unlikely]] return; }
L_001F3DE0:
    set32(c.r[2], 0u - 32768u);
    c.r[1].d[0] = 0ull | 32768ull;
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[2].d[0] = c.r[18].d[0] + c.r[2].d[0];
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3E04u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001F3E04u) [[unlikely]] return; }
L_001F3E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F3E20; } }
L_001F3E0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3E1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001F3E1Cu) [[unlikely]] return; }
L_001F3E1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F3E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F3E24:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F3E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[9], c.r[28].w[0] - 30808u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 24u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
L_001F3E54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3E54u | kUnwind; return; } goto L_001F3E54; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_001F3E98; } }
L_001F3E88:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  goto L_001F3E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3ED0; } }
L_001F3E98:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001F3E9C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);  goto L_001F3EAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3ED0; } }
L_001F3EAC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  goto L_001F3EC4; }
    set32(c.r[2], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_001F3EC4:
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3ED0u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001F3ED0u) [[unlikely]] return; }
L_001F3ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3F0C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F0Cu); set32(c.r[5], c.r[5].w[0] - 14684u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001F3F0Cu) [[unlikely]] return; }
L_001F3F0C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001F3F18; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3F18:
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15440u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F3FF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F3FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_001F3FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 264u)));  if (t) { goto L_001F3FAC; } }
L_001F3F98:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3FACu); set32(c.r[4], c.r[17].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F3FACu) [[unlikely]] return; }
L_001F3FAC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 260u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3F98u | kUnwind; return; } goto L_001F3F98; }
    st32((c.r[17].w[0] + 272u), 0u);
    set32(c.r[2], c.r[17].w[0] + 260u);
    st32((c.r[17].w[0] + 264u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 268u), 0u);  if (t) { goto L_001F3FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15264u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
L_001F3FD4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001F3FF8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12928u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3FF4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 225u, depth + 1u); else { c.pc = 0x002A5BA0u; return; } if (c.pc != 0x001F3FF4u) [[unlikely]] return; }
L_001F3FF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001F3FF8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_003D(c, 4u, depth); }
    [[clang::musttail]] return unit_003D(c, 2u, depth);
}

}
