#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156,
    0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0,
    0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0,
    0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371,
    372, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0,
    442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0,
    0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0,
    0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
};

void unit_000A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00128000;
    case 2u: goto L_0012803C;
    case 3u: goto L_00128070;
    case 4u: goto L_00128080;
    case 5u: goto L_001280B0;
    case 6u: goto L_001280C0;
    case 7u: goto L_00128100;
    case 8u: goto L_00128120;
    case 9u: goto L_00128140;
    case 10u: goto L_00128174;
    case 11u: goto L_0012818C;
    case 12u: goto L_001281B0;
    case 13u: goto L_001281E8;
    case 14u: goto L_001281F0;
    case 15u: goto L_00128200;
    case 16u: goto L_0012821C;
    case 17u: goto L_00128230;
    case 18u: goto L_00128260;
    case 19u: goto L_00128294;
    case 20u: goto L_001282C8;
    case 21u: goto L_001282F0;
    case 22u: goto L_0012831C;
    case 23u: goto L_00128330;
    case 24u: goto L_00128340;
    case 25u: goto L_00128348;
    case 26u: goto L_00128380;
    case 27u: goto L_001283AC;
    case 28u: goto L_001283E4;
    case 29u: goto L_0012840C;
    case 30u: goto L_00128420;
    case 31u: goto L_0012844C;
    case 32u: goto L_001284A0;
    case 33u: goto L_001284B8;
    case 34u: goto L_00128550;
    case 35u: goto L_00128558;
    case 36u: goto L_001285D0;
    case 37u: goto L_00128600;
    case 38u: goto L_00128620;
    case 39u: goto L_00128638;
    case 40u: goto L_0012863C;
    case 41u: goto L_00128650;
    case 42u: goto L_0012867C;
    case 43u: goto L_001286A0;
    case 44u: goto L_001286E0;
    case 45u: goto L_001286F0;
    case 46u: goto L_00128710;
    case 47u: goto L_0012873C;
    case 48u: goto L_00128780;
    case 49u: goto L_00128790;
    case 50u: goto L_00128810;
    case 51u: goto L_00128820;
    case 52u: goto L_0012883C;
    case 53u: goto L_00128840;
    case 54u: goto L_00128850;
    case 55u: goto L_00128870;
    case 56u: goto L_00128880;
    case 57u: goto L_00128890;
    case 58u: goto L_001288B0;
    case 59u: goto L_001288C0;
    case 60u: goto L_001288D0;
    case 61u: goto L_00128900;
    case 62u: goto L_00128914;
    case 63u: goto L_0012895C;
    case 64u: goto L_00128984;
    case 65u: goto L_001289A0;
    case 66u: goto L_001289B0;
    case 67u: goto L_001289E8;
    case 68u: goto L_001289FC;
    case 69u: goto L_00128A0C;
    case 70u: goto L_00128AA8;
    case 71u: goto L_00128AB8;
    case 72u: goto L_00128AF0;
    case 73u: goto L_00128B10;
    case 74u: goto L_00128B20;
    case 75u: goto L_00128B40;
    case 76u: goto L_00128B60;
    case 77u: goto L_00128B80;
    case 78u: goto L_00128BA4;
    case 79u: goto L_00128BBC;
    case 80u: goto L_00128BD0;
    case 81u: goto L_00128BE0;
    case 82u: goto L_00128C00;
    case 83u: goto L_00128C30;
    case 84u: goto L_00128C3C;
    case 85u: goto L_00128C8C;
    case 86u: goto L_00128C98;
    case 87u: goto L_00128CAC;
    case 88u: goto L_00128CB4;
    case 89u: goto L_00128CCC;
    case 90u: goto L_00128CE8;
    case 91u: goto L_00128D1C;
    case 92u: goto L_00128D34;
    case 93u: goto L_00128D5C;
    case 94u: goto L_00128D70;
    case 95u: goto L_00128D84;
    case 96u: goto L_00128DC0;
    case 97u: goto L_00128DD4;
    case 98u: goto L_00128DF0;
    case 99u: goto L_00128E1C;
    case 100u: goto L_00128E28;
    case 101u: goto L_00128E50;
    case 102u: goto L_00128E94;
    case 103u: goto L_00128EB0;
    case 104u: goto L_00128EBC;
    case 105u: goto L_00128EE8;
    case 106u: goto L_00128F00;
    case 107u: goto L_00128F38;
    case 108u: goto L_00128F50;
    case 109u: goto L_00128F94;
    case 110u: goto L_00128FA0;
    case 111u: goto L_00128FA8;
    case 112u: goto L_00128FC4;
    case 113u: goto L_00129000;
    case 114u: goto L_0012903C;
    case 115u: goto L_00129040;
    case 116u: goto L_00129080;
    case 117u: goto L_001290A8;
    case 118u: goto L_001290C0;
    case 119u: goto L_001290C8;
    case 120u: goto L_001290E4;
    case 121u: goto L_001290F4;
    case 122u: goto L_00129108;
    case 123u: goto L_00129124;
    case 124u: goto L_00129130;
    case 125u: goto L_0012913C;
    case 126u: goto L_00129148;
    case 127u: goto L_00129154;
    case 128u: goto L_00129168;
    case 129u: goto L_00129184;
    case 130u: goto L_00129194;
    case 131u: goto L_001291B0;
    case 132u: goto L_001291BC;
    case 133u: goto L_001291C8;
    case 134u: goto L_001291D4;
    case 135u: goto L_001291FC;
    case 136u: goto L_0012921C;
    case 137u: goto L_0012922C;
    case 138u: goto L_00129250;
    case 139u: goto L_00129274;
    case 140u: goto L_00129284;
    case 141u: goto L_001292A0;
    case 142u: goto L_001292AC;
    case 143u: goto L_001292B8;
    case 144u: goto L_001292E0;
    case 145u: goto L_00129300;
    case 146u: goto L_00129320;
    case 147u: goto L_00129390;
    case 148u: goto L_001293C4;
    case 149u: goto L_001293E8;
    case 150u: goto L_001293F8;
    case 151u: goto L_00129434;
    case 152u: goto L_0012943C;
    case 153u: goto L_00129444;
    case 154u: goto L_00129460;
    case 155u: goto L_00129474;
    case 156u: goto L_0012947C;
    case 157u: goto L_00129484;
    case 158u: goto L_00129490;
    case 159u: goto L_001294AC;
    case 160u: goto L_001294B4;
    case 161u: goto L_001294D0;
    case 162u: goto L_001294E0;
    case 163u: goto L_001294F4;
    case 164u: goto L_00129504;
    case 165u: goto L_00129514;
    case 166u: goto L_00129530;
    case 167u: goto L_0012953C;
    case 168u: goto L_0012954C;
    case 169u: goto L_0012955C;
    case 170u: goto L_0012956C;
    case 171u: goto L_00129578;
    case 172u: goto L_001295C8;
    case 173u: goto L_00129600;
    case 174u: goto L_00129610;
    case 175u: goto L_00129618;
    case 176u: goto L_00129628;
    case 177u: goto L_00129634;
    case 178u: goto L_00129644;
    case 179u: goto L_00129668;
    case 180u: goto L_00129690;
    case 181u: goto L_001296C4;
    case 182u: goto L_0012972C;
    case 183u: goto L_00129738;
    case 184u: goto L_00129780;
    case 185u: goto L_001297FC;
    case 186u: goto L_0012983C;
    case 187u: goto L_00129880;
    case 188u: goto L_00129890;
    case 189u: goto L_001298A0;
    case 190u: goto L_001298B0;
    case 191u: goto L_001298C0;
    case 192u: goto L_001298D0;
    case 193u: goto L_001298E0;
    case 194u: goto L_001298F0;
    case 195u: goto L_00129900;
    case 196u: goto L_00129910;
    case 197u: goto L_00129920;
    case 198u: goto L_00129930;
    case 199u: goto L_00129940;
    case 200u: goto L_00129990;
    case 201u: goto L_001299B8;
    case 202u: goto L_001299DC;
    case 203u: goto L_001299E4;
    case 204u: goto L_00129A08;
    case 205u: goto L_00129A34;
    case 206u: goto L_00129A60;
    case 207u: goto L_00129A90;
    case 208u: goto L_00129AB0;
    case 209u: goto L_00129AE0;
    case 210u: goto L_00129B30;
    case 211u: goto L_00129B60;
    case 212u: goto L_00129B80;
    case 213u: goto L_00129B90;
    case 214u: goto L_00129BA0;
    case 215u: goto L_00129BB0;
    case 216u: goto L_00129BD0;
    case 217u: goto L_00129BE0;
    case 218u: goto L_00129BF0;
    case 219u: goto L_00129C00;
    case 220u: goto L_00129C38;
    case 221u: goto L_00129C70;
    case 222u: goto L_00129C80;
    case 223u: goto L_00129CB0;
    case 224u: goto L_00129CC0;
    case 225u: goto L_00129CD0;
    case 226u: goto L_00129CE0;
    case 227u: goto L_00129CF0;
    case 228u: goto L_00129D00;
    case 229u: goto L_00129D40;
    case 230u: goto L_00129E00;
    case 231u: goto L_00129E10;
    case 232u: goto L_00129E30;
    case 233u: goto L_00129F00;
    case 234u: goto L_00129F10;
    case 235u: goto L_00129F28;
    case 236u: goto L_00129F40;
    case 237u: goto L_00129F58;
    case 238u: goto L_00129F70;
    case 239u: goto L_00129F88;
    case 240u: goto L_00129FA0;
    case 241u: goto L_00129FB8;
    case 242u: goto L_00129FDC;
    case 243u: goto L_0012A020;
    case 244u: goto L_0012A050;
    case 245u: goto L_0012A060;
    case 246u: goto L_0012A070;
    case 247u: goto L_0012A080;
    case 248u: goto L_0012A090;
    case 249u: goto L_0012A0C0;
    case 250u: goto L_0012A0E0;
    case 251u: goto L_0012A0F0;
    case 252u: goto L_0012A108;
    case 253u: goto L_0012A120;
    case 254u: goto L_0012A1F0;
    case 255u: goto L_0012A200;
    case 256u: goto L_0012A218;
    case 257u: goto L_0012A230;
    case 258u: goto L_0012A248;
    case 259u: goto L_0012A260;
    case 260u: goto L_0012A278;
    case 261u: goto L_0012A290;
    case 262u: goto L_0012A2A8;
    case 263u: goto L_0012A2CC;
    case 264u: goto L_0012A310;
    case 265u: goto L_0012A340;
    case 266u: goto L_0012A350;
    case 267u: goto L_0012A360;
    case 268u: goto L_0012A370;
    case 269u: goto L_0012A380;
    case 270u: goto L_0012A3A0;
    case 271u: goto L_0012A3B0;
    case 272u: goto L_0012A3C0;
    case 273u: goto L_0012A3E0;
    case 274u: goto L_0012A3F0;
    case 275u: goto L_0012A4C0;
    case 276u: goto L_0012A4D0;
    case 277u: goto L_0012A4E8;
    case 278u: goto L_0012A500;
    case 279u: goto L_0012A518;
    case 280u: goto L_0012A530;
    case 281u: goto L_0012A548;
    case 282u: goto L_0012A560;
    case 283u: goto L_0012A578;
    case 284u: goto L_0012A59C;
    case 285u: goto L_0012A5E0;
    case 286u: goto L_0012A610;
    case 287u: goto L_0012A620;
    case 288u: goto L_0012A630;
    case 289u: goto L_0012A640;
    case 290u: goto L_0012A650;
    case 291u: goto L_0012A660;
    case 292u: goto L_0012A680;
    case 293u: goto L_0012A6B0;
    case 294u: goto L_0012A6D0;
    case 295u: goto L_0012A6E0;
    case 296u: goto L_0012A710;
    case 297u: goto L_0012A71C;
    case 298u: goto L_0012A738;
    case 299u: goto L_0012A744;
    case 300u: goto L_0012A750;
    case 301u: goto L_0012A770;
    case 302u: goto L_0012A798;
    case 303u: goto L_0012A7AC;
    case 304u: goto L_0012A7D0;
    case 305u: goto L_0012A800;
    case 306u: goto L_0012A874;
    case 307u: goto L_0012A880;
    case 308u: goto L_0012A890;
    case 309u: goto L_0012A8B0;
    case 310u: goto L_0012A930;
    case 311u: goto L_0012A938;
    case 312u: goto L_0012A980;
    case 313u: goto L_0012A9B0;
    case 314u: goto L_0012AA04;
    case 315u: goto L_0012AA0C;
    case 316u: goto L_0012AAA4;
    case 317u: goto L_0012AAB4;
    case 318u: goto L_0012AAE4;
    case 319u: goto L_0012AB00;
    case 320u: goto L_0012ABA0;
    case 321u: goto L_0012ABB8;
    case 322u: goto L_0012ABD4;
    case 323u: goto L_0012ABE0;
    case 324u: goto L_0012AC00;
    case 325u: goto L_0012AC10;
    case 326u: goto L_0012AC38;
    case 327u: goto L_0012AC5C;
    case 328u: goto L_0012AC80;
    case 329u: goto L_0012ACA8;
    case 330u: goto L_0012ACB4;
    case 331u: goto L_0012ACF0;
    case 332u: goto L_0012ACFC;
    case 333u: goto L_0012AD08;
    case 334u: goto L_0012AD30;
    case 335u: goto L_0012AD40;
    case 336u: goto L_0012AD54;
    case 337u: goto L_0012AD68;
    case 338u: goto L_0012AD74;
    case 339u: goto L_0012AD84;
    case 340u: goto L_0012AD90;
    case 341u: goto L_0012ADA0;
    case 342u: goto L_0012ADAC;
    case 343u: goto L_0012ADBC;
    case 344u: goto L_0012ADC8;
    case 345u: goto L_0012ADF0;
    case 346u: goto L_0012AE00;
    case 347u: goto L_0012AE14;
    case 348u: goto L_0012AE28;
    case 349u: goto L_0012AE34;
    case 350u: goto L_0012AE44;
    case 351u: goto L_0012AE50;
    case 352u: goto L_0012AE70;
    case 353u: goto L_0012AE90;
    case 354u: goto L_0012AE9C;
    case 355u: goto L_0012AEF0;
    case 356u: goto L_0012AF18;
    case 357u: goto L_0012AF24;
    case 358u: goto L_0012AF38;
    case 359u: goto L_0012AF4C;
    case 360u: goto L_0012AF58;
    case 361u: goto L_0012AF68;
    case 362u: goto L_0012AF80;
    case 363u: goto L_0012AFA8;
    case 364u: goto L_0012AFB0;
    case 365u: goto L_0012AFC0;
    case 366u: goto L_0012AFF8;
    case 367u: goto L_0012B004;
    case 368u: goto L_0012B02C;
    case 369u: goto L_0012B054;
    case 370u: goto L_0012B068;
    case 371u: goto L_0012B07C;
    case 372u: goto L_0012B080;
    case 373u: goto L_0012B090;
    case 374u: goto L_0012B09C;
    case 375u: goto L_0012B0AC;
    case 376u: goto L_0012B0C0;
    case 377u: goto L_0012B0D4;
    case 378u: goto L_0012B100;
    case 379u: goto L_0012B124;
    case 380u: goto L_0012B130;
    case 381u: goto L_0012B13C;
    case 382u: goto L_0012B148;
    case 383u: goto L_0012B160;
    case 384u: goto L_0012B190;
    case 385u: goto L_0012B1A4;
    case 386u: goto L_0012B1BC;
    case 387u: goto L_0012B1E0;
    case 388u: goto L_0012B204;
    case 389u: goto L_0012B220;
    case 390u: goto L_0012B22C;
    case 391u: goto L_0012B240;
    case 392u: goto L_0012B260;
    case 393u: goto L_0012B280;
    case 394u: goto L_0012B2B8;
    case 395u: goto L_0012B2D0;
    case 396u: goto L_0012B2F8;
    case 397u: goto L_0012B310;
    case 398u: goto L_0012B320;
    case 399u: goto L_0012B350;
    case 400u: goto L_0012B35C;
    case 401u: goto L_0012B36C;
    case 402u: goto L_0012B390;
    case 403u: goto L_0012B3A0;
    case 404u: goto L_0012B3C0;
    case 405u: goto L_0012B3E0;
    case 406u: goto L_0012B3F4;
    case 407u: goto L_0012B418;
    case 408u: goto L_0012B430;
    case 409u: goto L_0012B450;
    case 410u: goto L_0012B498;
    case 411u: goto L_0012B4A4;
    case 412u: goto L_0012B4B0;
    case 413u: goto L_0012B4C4;
    case 414u: goto L_0012B4D0;
    case 415u: goto L_0012B500;
    case 416u: goto L_0012B54C;
    case 417u: goto L_0012B58C;
    case 418u: goto L_0012B5A4;
    case 419u: goto L_0012B5BC;
    case 420u: goto L_0012B5DC;
    case 421u: goto L_0012B630;
    case 422u: goto L_0012B658;
    case 423u: goto L_0012B66C;
    case 424u: goto L_0012B674;
    case 425u: goto L_0012B688;
    case 426u: goto L_0012B6A8;
    case 427u: goto L_0012B6C4;
    case 428u: goto L_0012B6D4;
    case 429u: goto L_0012B700;
    case 430u: goto L_0012B724;
    case 431u: goto L_0012B77C;
    case 432u: goto L_0012B7A8;
    case 433u: goto L_0012B7D0;
    case 434u: goto L_0012B7E4;
    case 435u: goto L_0012B800;
    case 436u: goto L_0012B820;
    case 437u: goto L_0012B878;
    case 438u: goto L_0012B8B8;
    case 439u: goto L_0012B8C8;
    case 440u: goto L_0012B8E4;
    case 441u: goto L_0012B8F8;
    case 442u: goto L_0012B900;
    case 443u: goto L_0012B910;
    case 444u: goto L_0012B944;
    case 445u: goto L_0012B980;
    case 446u: goto L_0012B9A8;
    case 447u: goto L_0012B9C4;
    case 448u: goto L_0012B9D0;
    case 449u: goto L_0012B9F4;
    case 450u: goto L_0012BA0C;
    case 451u: goto L_0012BA2C;
    case 452u: goto L_0012BA78;
    case 453u: goto L_0012BA88;
    case 454u: goto L_0012BA98;
    case 455u: goto L_0012BAC0;
    case 456u: goto L_0012BAE8;
    case 457u: goto L_0012BB04;
    case 458u: goto L_0012BB10;
    case 459u: goto L_0012BB34;
    case 460u: goto L_0012BB4C;
    case 461u: goto L_0012BB6C;
    case 462u: goto L_0012BBB8;
    case 463u: goto L_0012BBC8;
    case 464u: goto L_0012BBD8;
    case 465u: goto L_0012BC00;
    case 466u: goto L_0012BC30;
    case 467u: goto L_0012BC40;
    case 468u: goto L_0012BC64;
    case 469u: goto L_0012BC74;
    case 470u: goto L_0012BC94;
    case 471u: goto L_0012BCBC;
    case 472u: goto L_0012BCD8;
    case 473u: goto L_0012BCE4;
    case 474u: goto L_0012BD08;
    case 475u: goto L_0012BD20;
    case 476u: goto L_0012BD40;
    case 477u: goto L_0012BD90;
    case 478u: goto L_0012BDA0;
    case 479u: goto L_0012BDAC;
    case 480u: goto L_0012BDBC;
    case 481u: goto L_0012BDC8;
    case 482u: goto L_0012BDF0;
    case 483u: goto L_0012BE20;
    case 484u: goto L_0012BE40;
    case 485u: goto L_0012BE70;
    case 486u: goto L_0012BEA0;
    case 487u: goto L_0012BEC0;
    case 488u: goto L_0012BEE4;
    case 489u: goto L_0012BF10;
    case 490u: goto L_0012BF30;
    case 491u: goto L_0012BF54;
    case 492u: goto L_0012BF64;
    case 493u: goto L_0012BF84;
    case 494u: goto L_0012BFB0;
    case 495u: goto L_0012BFD0;
    case 496u: goto L_0012BFF0;
    default: bad_entry(c, 0x00128000u); return;
    }
L_00128000:
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0]), 0u);  goto L_0012805C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
L_0012803C:
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_00128064; } }
L_0012805C:
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 2;
L_00128064:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128070:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 4;
L_00128080:
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[4]);  c.pc = t; return; }
L_001280B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31264u), c.f[12]);  c.pc = t; return; }
L_001280C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001280E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_001280F0; } }
L_001280E4:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001280F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_00128108; }
L_00128100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00128110; } }
L_00128108:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00128110:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00128130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128120u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00128120u) [[unlikely]] return; }
L_00128120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012812C; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0012812C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00128130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00128140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012818C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 26288u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128174u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 468u, depth + 1u); else { c.pc = 0x0014B8D0u; return; } if (c.pc != 0x00128174u) [[unlikely]] return; }
L_00128174:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00128190; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012818Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012818Cu) [[unlikely]] return; }
L_0012818C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00128190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001281B0:
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
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001281E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x001281E8u) [[unlikely]] return; }
L_001281E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001282B4; } }
L_001281F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128200u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128200u) [[unlikely]] return; }
L_00128200:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld32((c.r[18].w[0] + 8u));  goto L_0012823C; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012821Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012821Cu) [[unlikely]] return; }
L_0012821C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00128238; } }
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128230u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x00128230u) [[unlikely]] return; }
L_00128230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001282CC; } }
L_00128238:
    c.r[5].d[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 1;
L_0012823C:
    c.r[4].d[0] = ld64((c.r[2].w[0]));
    c.r[3].d[0] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[5].d[0] - c.r[4].d[0];
    c.r[16].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { c.r[1].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;  goto L_00128268; }
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x00128260u) [[unlikely]] return; }
L_00128260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001282CC; } }
L_00128268:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00128274; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00128274:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128294u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00128294u) [[unlikely]] return; }
L_00128294:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[17].d[0] = c.r[17].d[0] + c.r[16].d[0];
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = c.r[19].d[0] - c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
L_001282B4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001281F0u | kUnwind; return; } goto L_001281F0; }
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001282C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x001282C8u) [[unlikely]] return; }
L_001282C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001282CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001282F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 26288u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012831Cu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 471u, depth + 1u); else { c.pc = 0x0014B930u; return; } if (c.pc != 0x0012831Cu) [[unlikely]] return; }
L_0012831C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00128330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00128370; } }
L_00128348:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 12u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00128370; }
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_00128378; } }
L_00128370:
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00128348u | kUnwind; return; } goto L_00128348; }
L_00128378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128380:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 32u, depth + 1u); else { c.pc = 0x001284A0u; return; } if (c.pc != 0x001283ACu) [[unlikely]] return; }
L_001283AC:
    set32(c.r[17], c.r[2].w[0] << 5);
    set32(c.r[18], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[19], c.r[3].w[0] + 16u);  if (t) { goto L_001283EC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001283E4u); set32(c.r[5], ld32((c.r[20].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001283E4u) [[unlikely]] return; }
L_001283E4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_00128430; }
L_001283EC:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[6].d[0] = c.r[18].d[0] << 32;
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012840Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012840Cu) [[unlikely]] return; }
L_0012840C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128420u); set32(c.r[5], ld32((c.r[20].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128420u) [[unlikely]] return; }
L_00128420:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
L_00128430:
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012844Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012844Cu) [[unlikely]] return; }
L_0012844C:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st64((c.r[19].w[0]), c.r[2].d[0]);
    st32((c.r[16].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0012846C; }
L_0012846C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001284A0:
    set32(c.r[11], 0u - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00128520; } }
L_001284B8:
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001284D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00128544; } }
L_001284D0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] << 5);  goto L_001284E0; }
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] << 5);
    c.budget -= 2;
L_001284E0:
    set32(c.r[8], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 40u)));
    set32(c.r[7], c.r[6].w[0] - 1u);
    st32((c.r[8].w[0] + 40u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);  if (t) { goto L_00128508; } }
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012851C; } }
L_00128508:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00128520; }
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0012851C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00128520:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[6], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001284B8u | kUnwind; return; } goto L_001284B8; }
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] < 0;  if (t) { goto L_00128538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00128544; } }
L_00128538:
    c.budget -= 2;
    if (c.r[10].sd[0] < 0) { set32(c.r[10], 0u + 1u);  goto L_00128540; }
L_00128540:
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_00128544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00128550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001285BC; } }
L_00128558:
    set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001285BC; }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001285B8; } }
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[3].d[0] = ld32((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001285B8; } }
    c.r[2].d[0] = ld32((c.r[7].w[0] + 28u));
    c.r[2].d[0] = c.r[6].d[0] + c.r[2].d[0];
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001285B8; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[2], c.r[7].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_001285C8; } }
L_001285B8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001285BC:
    c.budget -= 2;
    if (c.r[8].sd[0] <= 0) { set32(c.r[2], c.r[8].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00128558u | kUnwind; return; } goto L_00128558; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001285C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001285D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00128638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26256u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128600u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x00128600u) [[unlikely]] return; }
L_00128600:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00128624; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 26288u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128620u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 468u, depth + 1u); else { c.pc = 0x0014B8D0u; return; } if (c.pc != 0x00128620u) [[unlikely]] return; }
L_00128620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00128624:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0012863C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00128638u) [[unlikely]] return; }
L_00128638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012863C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00128650:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012867Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 21u, depth + 1u); else { c.pc = 0x001282F0u; return; } if (c.pc != 0x0012867Cu) [[unlikely]] return; }
L_0012867C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26256u);
    set32(c.r[4], 0u + 64u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001286A0u); st32((c.r[19].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x001286A0u) [[unlikely]] return; }
L_001286A0:
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    st64((c.r[19].w[0] + 16u), 0ull);
    st32((c.r[19].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001286E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001286F0:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012873Cu); c.r[17].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012873Cu) [[unlikely]] return; }
L_0012873C:
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 12u);  if (t) { goto L_00128760; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_00128760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00128780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  c.pc = t; return; }
L_00128790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001287D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld32((c.r[5].w[0] + 8u));  goto L_001287C8; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = c.r[6].d[0] << 32;  goto L_001287C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001287EC; } }
L_001287C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_001287E8; } }
L_001287C8:
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_001287E8; } }
L_001287D8:
    c.r[2].d[0] = ld32((c.r[5].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
L_001287E8:
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_001287EC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00128814; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128810u); set32(c.r[5], ld32((c.r[5].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128810u) [[unlikely]] return; }
L_00128810:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00128814:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00128820:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0012883C:
    c.budget -= 1;
L_00128840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  c.pc = t; return; }
L_00128850:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128870:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128880:
    c.budget -= 1;
    c.pc = 0x00128884u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00128890:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_0012889C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012889C:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001288B0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
L_001288C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001288D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
L_00128900:
    set32(c.r[4], c.r[29].w[0] + 136u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[22].w[0] + 780u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128914u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x00128914u) [[unlikely]] return; }
L_00128914:
    mmi::mult(c, 0, c.r[20].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] + c.r[18].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00128954; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    c.budget -= 3;
L_00128954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00128A94; } }
L_0012895C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(0u));  goto L_001289D0; }
    set32(c.r[4], ld32((c.r[22].w[0] + 776u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128984u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128984u) [[unlikely]] return; }
L_00128984:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);  goto L_001289BC; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x001289A0u) [[unlikely]] return; }
L_001289A0:
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289B0u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x001289B0u) [[unlikely]] return; }
L_001289B0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_00128AC0; } }
L_001289BC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[18].d[0] = c.r[18].d[0] - c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] + c.r[2].d[0];  if (t) { goto L_00128A94; } }
L_001289D0:
    set32(c.r[5], c.r[29].w[0] + 143u);
    set32(c.r[4], ld32((c.r[22].w[0] + 776u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001289E8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001289E8u) [[unlikely]] return; }
L_001289E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[29].w[0] + 143u));  goto L_00128A18; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x001289FCu) [[unlikely]] return; }
L_001289FC:
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A0Cu); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x00128A0Cu) [[unlikely]] return; }
L_00128A0C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_00128AC0; } }
L_00128A18:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 13u);  goto L_00128A3C; }
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00128A94; } }
L_00128A3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00128A64; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00128A94; } }
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(-1ll);  if (t) { goto L_00128A94; } }
L_00128A64:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 143u));  goto L_00128A80; }
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 143u));
    c.budget -= 5;
L_00128A80:
    c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 5;
L_00128A94:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012895Cu | kUnwind; return; } goto L_0012895C; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128AA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x00128AA8u) [[unlikely]] return; }
L_00128AA8:
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128AB8u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x00128AB8u) [[unlikely]] return; }
L_00128AB8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_00128AC0:
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
L_00128AF0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00128B20:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128B40:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128B60:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00128B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128BA4u); set32(c.r[5], c.r[17].w[0] + 780u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x00128BA4u) [[unlikely]] return; }
L_00128BA4:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 776u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128BBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128BBCu) [[unlikely]] return; }
L_00128BBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128BD0u); set32(c.r[5], ld32((c.r[16].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128BD0u) [[unlikely]] return; }
L_00128BD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128BE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x00128BE0u) [[unlikely]] return; }
L_00128BE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00128C00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[5], c.r[19].w[0] + 780u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C30u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x00128C30u) [[unlikely]] return; }
L_00128C30:
    set32(c.r[16], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00128C5C; } }
L_00128C3C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00128C5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00128C68; } }
L_00128C5C:
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00128C3Cu | kUnwind; return; } goto L_00128C3C; }
L_00128C68:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00128CA0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 8976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C8Cu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00128C8Cu) [[unlikely]] return; }
L_00128C8C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x00128C98u) [[unlikely]] return; }
L_00128C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00128E2C; } }
L_00128CA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00128CACu) [[unlikely]] return; }
L_00128CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00128CB4u) [[unlikely]] return; }
L_00128CB4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CCCu); set32(c.r[5], c.r[5].w[0] - 8946u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x00128CCCu) [[unlikely]] return; }
L_00128CCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_00128D10; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CE8u); set32(c.r[5], c.r[5].w[0] - 8944u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x00128CE8u) [[unlikely]] return; }
L_00128CE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  goto L_00128CFC; }
    set32(c.r[2], 0u + 98u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 3;
L_00128CFC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { goto L_00128D4C; } }
L_00128D10:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D1Cu); set32(c.r[5], c.r[5].w[0] - 8942u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x00128D1Cu) [[unlikely]] return; }
L_00128D1C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  goto L_00128D38; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D34u); set32(c.r[5], c.r[5].w[0] - 8942u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x00128D34u) [[unlikely]] return; }
L_00128D34:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00128D38:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_00128D4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D5Cu); set32(c.r[5], c.r[5].w[0] - 8940u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x00128D5Cu) [[unlikely]] return; }
L_00128D5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_00128D78; }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x00128D70u) [[unlikely]] return; }
L_00128D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00128E2C; } }
L_00128D78:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D84u); set32(c.r[5], c.r[5].w[0] - 8944u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x00128D84u) [[unlikely]] return; }
L_00128D84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);  goto L_00128D9C; }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00128DA0; } }
L_00128D9C:
    st32((c.r[2].w[0] + 28u), 0u);
    c.budget -= 1;
L_00128DA0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 8u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DC0u); set32(c.r[6], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128DC0u) [[unlikely]] return; }
L_00128DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00128DDC; } }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x00128DD4u) [[unlikely]] return; }
L_00128DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00128E2C; } }
L_00128DDC:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128DF0u) [[unlikely]] return; }
L_00128DF0:
    set32(c.r[4], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 776u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128E1Cu) [[unlikely]] return; }
L_00128E1C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x00128E28u) [[unlikely]] return; }
L_00128E28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00128E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00128E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00128EE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26224u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 776u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00128E98; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128E94u) [[unlikely]] return; }
L_00128E94:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00128E98:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 780u);  goto L_00128EB4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128EB0u) [[unlikely]] return; }
L_00128EB0:
    set32(c.r[4], c.r[17].w[0] + 780u);
    c.budget -= 1;
L_00128EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 228u, depth + 1u); else { c.pc = 0x00132970u; return; } if (c.pc != 0x00128EBCu) [[unlikely]] return; }
L_00128EBC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00128ED4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00128ED4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00128EEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00128EE8u) [[unlikely]] return; }
L_00128EE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00128EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00128F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00128F3C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26128u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00128F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F38u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00128F38u) [[unlikely]] return; }
L_00128F38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00128F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00128F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 26128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 26224u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[6].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F94u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128F94u) [[unlikely]] return; }
L_00128F94:
    st32((c.r[17].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FA0u); set32(c.r[4], c.r[17].w[0] + 780u);  if (depth < kMaxDepth) unit_000C(c, 231u, depth + 1u); else { c.pc = 0x001329D0u; return; } if (c.pc != 0x00128FA0u) [[unlikely]] return; }
L_00128FA0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 2;
L_00128FA8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 24u);
    set32(c.r[18], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FC4u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00128FC4u) [[unlikely]] return; }
L_00128FC4:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00128FA8u | kUnwind; return; } goto L_00128FA8; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00129000:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00129018; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129038; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00129038; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129058; } }
    goto L_00129040;
L_0012903C:
    c.budget -= 1;
L_00129040:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00129058; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129078; } }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00129078; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129080:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290A8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001290A8u) [[unlikely]] return; }
L_001290A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012915C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001290C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290C8u); set32(c.r[5], c.r[5].w[0] - 8600u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001290C8u) [[unlikely]] return; }
L_001290C8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 1u);  goto L_001290DC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001290DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290E4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x001290E4u) [[unlikely]] return; }
L_001290E4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290F4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x001290F4u) [[unlikely]] return; }
L_001290F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129108u); set32(c.r[6], c.r[6].w[0] - 8587u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00129108u) [[unlikely]] return; }
L_00129108:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_0012911C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0012911C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129124u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00129124u) [[unlikely]] return; }
L_00129124:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00129130u) [[unlikely]] return; }
L_00129130:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012913Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012913Cu) [[unlikely]] return; }
L_0012913C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00129148u) [[unlikely]] return; }
L_00129148:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00129154u) [[unlikely]] return; }
L_00129154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_001291D8; } }
L_0012915C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129168u); set32(c.r[5], c.r[5].w[0] - 8584u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00129168u) [[unlikely]] return; }
L_00129168:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 1u);  goto L_0012917C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0012917C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129184u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F1B0u; return; } if (c.pc != 0x00129184u) [[unlikely]] return; }
L_00129184:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129194u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x00129194u) [[unlikely]] return; }
L_00129194:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_001291A8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_001291A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291B0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001291B0u) [[unlikely]] return; }
L_001291B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001291BCu) [[unlikely]] return; }
L_001291BC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001291C8u) [[unlikely]] return; }
L_001291C8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001291D4u) [[unlikely]] return; }
L_001291D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001291D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 177u);  goto L_001291E8; }
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_001291E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291FCu); set32(c.r[6], c.r[6].w[0] - 8558u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x001291FCu) [[unlikely]] return; }
L_001291FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 177u);  goto L_00129210; }
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00129210:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012921Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 180u, depth + 1u); else { c.pc = 0x003A2020u; return; } if (c.pc != 0x0012921Cu) [[unlikely]] return; }
L_0012921C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012922Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012922Cu) [[unlikely]] return; }
L_0012922C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00129250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129274u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00129274u) [[unlikely]] return; }
L_00129274:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129284u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00129284u) [[unlikely]] return; }
L_00129284:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_00129298; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00129298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001292A0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001292A0u) [[unlikely]] return; }
L_001292A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001292ACu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x001292ACu) [[unlikely]] return; }
L_001292AC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001292B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001292B8u) [[unlikely]] return; }
L_001292B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001292E0:
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { set32(c.r[4], c.r[2].w[0] << 3);  [[clang::musttail]] return unit_00A6(c, 293u, depth); }
L_00129300:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6656u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 8;
L_00129320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129320u | kUnwind; return; } goto L_00129320; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 264u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    set32(c.r[3], c.r[2].w[0] + 68u);
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 252u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00129378; } }
L_00129374:
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00129378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] - 8480u);
    set32(c.r[7], c.r[29].w[0] + 264u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129390u); set32(c.r[8], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x00129390u) [[unlikely]] return; }
L_00129390:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], c.r[2].w[0] + 84u);
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_001293AC; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_001293AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[5].w[0] - 8471u);
    set32(c.r[7], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001293C4u); set32(c.r[8], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x001293C4u) [[unlikely]] return; }
L_001293C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00129408; }
    set32(c.r[2], c.r[2].w[0] - 2000u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129408; } }
L_001293E8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001293F8u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001293F8u) [[unlikely]] return; }
L_001293F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00129408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 1u);  if (t) { goto L_00129414; } }
L_00129408:
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001293E8u | kUnwind; return; } goto L_001293E8; }
L_00129414:
    set32(c.r[6], ld32((c.r[29].w[0] + 268u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129434u); set32(c.r[5], c.r[5].w[0] - 8462u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x00129434u) [[unlikely]] return; }
L_00129434:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0012943C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129444u); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00129444u) [[unlikely]] return; }
L_00129444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00129460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129474u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 364u, depth + 1u); else { c.pc = 0x00142D10u; return; } if (c.pc != 0x00129474u) [[unlikely]] return; }
L_00129474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012947Cu);  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x00130170u; return; } if (c.pc != 0x0012947Cu) [[unlikely]] return; }
L_0012947C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129484u);  if (depth < kMaxDepth) unit_000B(c, 31u, depth + 1u); else { c.pc = 0x0012C490u; return; } if (c.pc != 0x00129484u) [[unlikely]] return; }
L_00129484:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00129490:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001294ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00142760u; return; } if (c.pc != 0x001294ACu) [[unlikely]] return; }
L_001294AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001294B4u);  if (depth < kMaxDepth) unit_000A(c, 145u, depth + 1u); else { c.pc = 0x00129300u; return; } if (c.pc != 0x001294B4u) [[unlikely]] return; }
L_001294B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_001294EC; }
    set32(c.r[4], 0u + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001294D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x001294D0u) [[unlikely]] return; }
L_001294D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_00129508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001294E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 216u, depth + 1u); else { c.pc = 0x001497C0u; return; } if (c.pc != 0x001294E0u) [[unlikely]] return; }
L_001294E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129508; } }
L_001294EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001294F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x001294F4u) [[unlikely]] return; }
L_001294F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_00129508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129504u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 378u, depth + 1u); else { c.pc = 0x0014AEA0u; return; } if (c.pc != 0x00129504u) [[unlikely]] return; }
L_00129504:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00129508:
    set32(c.r[4], 0u + 792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129514u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00129514u) [[unlikely]] return; }
L_00129514:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00129534; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129530u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 108u, depth + 1u); else { c.pc = 0x00128F50u; return; } if (c.pc != 0x00129530u) [[unlikely]] return; }
L_00129530:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00129534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012953Cu);  if (depth < kMaxDepth) unit_000B(c, 37u, depth + 1u); else { c.pc = 0x0012C520u; return; } if (c.pc != 0x0012953Cu) [[unlikely]] return; }
L_0012953C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012954Cu); set32(c.r[4], c.r[4].w[0] - 8445u);  if (depth < kMaxDepth) unit_000B(c, 14u, depth + 1u); else { c.pc = 0x0012C190u; return; } if (c.pc != 0x0012954Cu) [[unlikely]] return; }
L_0012954C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012955Cu); set32(c.r[5], c.r[2].w[0] + 116u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0012955Cu) [[unlikely]] return; }
L_0012955C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012956Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 14u, depth + 1u); else { c.pc = 0x001301A0u; return; } if (c.pc != 0x0012956Cu) [[unlikely]] return; }
L_0012956C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129578u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00129578u) [[unlikely]] return; }
L_00129578:
    set32(c.r[4], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 52u);  if (t) { goto L_00129594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00129598; } }
L_00129594:
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00129598:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 36u);  if (t) { goto L_001295B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_001295B4; } }
L_001295B0:
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001295B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001295C8u); set32(c.r[6], c.r[6].w[0] - 8442u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x001295C8u) [[unlikely]] return; }
L_001295C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], c.r[2].w[0] + 100u);
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_001295E4; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_001295E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8425u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129600u); set32(c.r[8], c.r[8].w[0] - 8408u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00129600u) [[unlikely]] return; }
L_00129600:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129610u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 474u, depth + 1u); else { c.pc = 0x0014B990u; return; } if (c.pc != 0x00129610u) [[unlikely]] return; }
L_00129610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 93u, depth + 1u); else { c.pc = 0x001390E0u; return; } if (c.pc != 0x00129618u) [[unlikely]] return; }
L_00129618:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 98u, depth + 1u); else { c.pc = 0x0012CC90u; return; } if (c.pc != 0x00129628u) [[unlikely]] return; }
L_00129628:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129634u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00129634u) [[unlikely]] return; }
L_00129634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00129644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 367u, depth + 1u); else { c.pc = 0x00142D70u; return; } if (c.pc != 0x00129644u) [[unlikely]] return; }
L_00129644:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8404u);
    set32(c.r[7], c.r[7].w[0] - 8372u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129668u); set32(c.r[8], c.r[8].w[0] - 8368u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00129668u) [[unlikely]] return; }
L_00129668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00129690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 400u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 100u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] - 1u);  if (t) { goto L_00129714; } }
L_001296C4:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[4].d[0] = c.r[7].d[0] & 3ull;  if (t) { goto L_001296D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001296D8; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_001296D8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00129704; }
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  goto L_00129704; }
    mmi::div(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00129704; }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00129704:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 365u);  goto L_00129710; }
    set32(c.r[16], c.r[16].w[0] + 366u);
    c.budget -= 1;
L_00129710:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 1;
L_00129714:
    c.r[1].d[0] = c.r[7].sd[0] < 2003ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001296C4u | kUnwind; return; } goto L_001296C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { goto L_00129740; } }
L_0012972C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129738u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 184u, depth + 1u); else { c.pc = 0x00129780u; return; } if (c.pc != 0x00129738u) [[unlikely]] return; }
L_00129738:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00129740:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012972Cu | kUnwind; return; } goto L_0012972C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00129780:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 31u);  goto L_00129870; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001297D4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001297D4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001297D4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001297D4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001297D4; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001297E0; }
L_001297D4:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129870; } }
L_001297E0:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00129870; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012980C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012980C; } }
    goto L_00129800;
L_001297FC:
    c.budget -= 1;
L_00129800:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[5].d[0] & 3ull;  goto L_00129818; }
L_0012980C:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00129870; } }
L_00129818:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0012982C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012982C; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0012982C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00129860; }
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 2;
L_0012983C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00129860; }
    set32(c.r[2], 0u + 400u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00129860; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00129860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 28u);  goto L_00129870; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_00129870; } }
L_00129870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 12u));  c.pc = t; return; }
L_00129890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));  c.pc = t; return; }
L_001298A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));  c.pc = t; return; }
L_001298B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_001298C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));  c.pc = t; return; }
L_001298D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_001298E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[12]);  c.pc = t; return; }
L_001298F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00129900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00129910:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129690u | kUnwind; return; } goto L_00129690; }
L_00129920:
    c.budget -= 2;
    { st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129690u | kUnwind; return; } goto L_00129690; }
L_00129930:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129690u | kUnwind; return; } goto L_00129690; }
L_00129940:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[20].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[19].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.r[17].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[1], c.f[12]);  if (t) { goto L_00129998; } }
L_00129990:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_00129998:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129990u | kUnwind; return; } goto L_00129990; } }
    set32(c.r[20], c.r[20].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_001299C8; } }
L_001299B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[20].w[0] - 60u);  if (t) { goto L_001299C8; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001299C8:
    c.r[1].d[0] = c.r[20].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001299B8u | kUnwind; return; } goto L_001299B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[6].w[0]);  if (t) { goto L_001299FC; } }
L_001299DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001299E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 184u, depth + 1u); else { c.pc = 0x00129780u; return; } if (c.pc != 0x001299E4u) [[unlikely]] return; }
L_001299E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);  if (t) { goto L_001299FC; } }
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001299FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129A08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 184u, depth + 1u); else { c.pc = 0x00129780u; return; } if (c.pc != 0x00129A08u) [[unlikely]] return; }
L_00129A08:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001299DCu | kUnwind; return; } goto L_001299DC; }
    st32((c.r[21].w[0] + 12u), c.f[20]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129A34u); st32((c.r[21].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 180u, depth + 1u); else { c.pc = 0x00129690u; return; } if (c.pc != 0x00129A34u) [[unlikely]] return; }
L_00129A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00129A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00129A94; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00129A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129A90u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00129A90u) [[unlikely]] return; }
L_00129A90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00129A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00129AB0:
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_00129AE0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00129B30:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00129B60:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00129B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129BB0:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[1]);  c.pc = t; return; }
L_00129BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C38u); set32(c.r[8], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x00129C38u) [[unlikely]] return; }
L_00129C38:
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00129C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129C80:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_00129CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129CC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129CF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[5], c.r[5].w[0] - 8256u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[8], c.r[29].w[0] + 36u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129D40u); set32(c.r[9], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x00129D40u) [[unlikely]] return; }
L_00129D40:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 44u));  goto L_00129DA8; }
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[5] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.f[4] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 4u, c.f[4], c.f[5]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.f[0] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[0], c.f[5]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 8u), c.f[3]);  if (t) { goto L_00129DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[4]);  if (t) { goto L_00129DE4; } }
L_00129DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 15;
L_00129DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00129E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129E10u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00129E10u) [[unlikely]] return; }
L_00129E10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00129E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00129E70; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_00129E70; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00129E70:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_00129FC8; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129FB0; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129F98; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129F80; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129F68; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129F50; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129F38; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[29].w[0] + 95u);  goto L_00129F20; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00129EF8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F00u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x00129F00u) [[unlikely]] return; }
L_00129F00:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F10u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012A0F0u; return; } if (c.pc != 0x00129F10u) [[unlikely]] return; }
L_00129F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F28u);  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012A0F0u; return; } if (c.pc != 0x00129F28u) [[unlikely]] return; }
L_00129F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F40u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 250u, depth + 1u); else { c.pc = 0x0012A0E0u; return; } if (c.pc != 0x00129F40u) [[unlikely]] return; }
L_00129F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F58u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 249u, depth + 1u); else { c.pc = 0x0012A0C0u; return; } if (c.pc != 0x00129F58u) [[unlikely]] return; }
L_00129F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F70u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 248u, depth + 1u); else { c.pc = 0x0012A090u; return; } if (c.pc != 0x00129F70u) [[unlikely]] return; }
L_00129F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F88u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 247u, depth + 1u); else { c.pc = 0x0012A080u; return; } if (c.pc != 0x00129F88u) [[unlikely]] return; }
L_00129F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FA0u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 246u, depth + 1u); else { c.pc = 0x0012A070u; return; } if (c.pc != 0x00129FA0u) [[unlikely]] return; }
L_00129FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FB8u); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012A060u; return; } if (c.pc != 0x00129FB8u) [[unlikely]] return; }
L_00129FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129FE8; } }
L_00129FC8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 95u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FDCu); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 244u, depth + 1u); else { c.pc = 0x0012A050u; return; } if (c.pc != 0x00129FDCu) [[unlikely]] return; }
L_00129FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00129FE8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129FE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));  goto L_0012A030; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012A02C; } }
    c.r[19].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[18], c.r[17].w[0] + 4u);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; set32(c.r[16], c.r[17].w[0] + 20u);  if (t) { goto L_0012A024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A020u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0012A020u) [[unlikely]] return; }
L_0012A020:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0012A024:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 2;
L_0012A02C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 1;
L_0012A030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012A050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A090:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0012A0AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012A0AC:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0012A0C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0012A0E0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0012A0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A108u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x0012A108u) [[unlikely]] return; }
L_0012A108:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A120:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012A160; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_0012A160; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0012A160:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0012A2B8; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A2A0; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A288; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A270; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A258; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A240; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A228; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[29].w[0] + 92u);  goto L_0012A210; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A1E8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A1F0u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012A1F0u) [[unlikely]] return; }
L_0012A1F0:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A200u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 272u, depth + 1u); else { c.pc = 0x0012A3C0u; return; } if (c.pc != 0x0012A200u) [[unlikely]] return; }
L_0012A200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A218u);  if (depth < kMaxDepth) unit_000A(c, 272u, depth + 1u); else { c.pc = 0x0012A3C0u; return; } if (c.pc != 0x0012A218u) [[unlikely]] return; }
L_0012A218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A230u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 271u, depth + 1u); else { c.pc = 0x0012A3B0u; return; } if (c.pc != 0x0012A230u) [[unlikely]] return; }
L_0012A230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A248u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 270u, depth + 1u); else { c.pc = 0x0012A3A0u; return; } if (c.pc != 0x0012A248u) [[unlikely]] return; }
L_0012A248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A260u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 269u, depth + 1u); else { c.pc = 0x0012A380u; return; } if (c.pc != 0x0012A260u) [[unlikely]] return; }
L_0012A260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A278u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 268u, depth + 1u); else { c.pc = 0x0012A370u; return; } if (c.pc != 0x0012A278u) [[unlikely]] return; }
L_0012A278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A290u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 267u, depth + 1u); else { c.pc = 0x0012A360u; return; } if (c.pc != 0x0012A290u) [[unlikely]] return; }
L_0012A290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A2A8u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0012A350u; return; } if (c.pc != 0x0012A2A8u) [[unlikely]] return; }
L_0012A2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A2D8; } }
L_0012A2B8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A2CCu); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 265u, depth + 1u); else { c.pc = 0x0012A340u; return; } if (c.pc != 0x0012A2CCu) [[unlikely]] return; }
L_0012A2CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A2D8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012A2D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  goto L_0012A320; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012A31C; } }
    set32(c.r[19], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], c.r[17].w[0] + 4u);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; set32(c.r[16], c.r[17].w[0] + 20u);  if (t) { goto L_0012A314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A310u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0012A310u) [[unlikely]] return; }
L_0012A310:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0012A314:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 2;
L_0012A31C:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_0012A320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012A340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A380:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0012A3A0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0012A3B0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0012A3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3E0u); set32(c.r[5], c.r[5].w[0] - 13432u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0012A3E0u) [[unlikely]] return; }
L_0012A3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012A3F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012A430; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_0012A430; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0012A430:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0012A588; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A570; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A558; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A540; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A528; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A510; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A4F8; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[29].w[0] + 92u);  goto L_0012A4E0; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012A4B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4C0u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012A4C0u) [[unlikely]] return; }
L_0012A4C0:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4D0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A6B0u; return; } if (c.pc != 0x0012A4D0u) [[unlikely]] return; }
L_0012A4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4E8u);  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A6B0u; return; } if (c.pc != 0x0012A4E8u) [[unlikely]] return; }
L_0012A4E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A500u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 292u, depth + 1u); else { c.pc = 0x0012A680u; return; } if (c.pc != 0x0012A500u) [[unlikely]] return; }
L_0012A500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A518u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 291u, depth + 1u); else { c.pc = 0x0012A660u; return; } if (c.pc != 0x0012A518u) [[unlikely]] return; }
L_0012A518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A530u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 290u, depth + 1u); else { c.pc = 0x0012A650u; return; } if (c.pc != 0x0012A530u) [[unlikely]] return; }
L_0012A530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A548u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 289u, depth + 1u); else { c.pc = 0x0012A640u; return; } if (c.pc != 0x0012A548u) [[unlikely]] return; }
L_0012A548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A560u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 288u, depth + 1u); else { c.pc = 0x0012A630u; return; } if (c.pc != 0x0012A560u) [[unlikely]] return; }
L_0012A560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A578u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000A(c, 287u, depth + 1u); else { c.pc = 0x0012A620u; return; } if (c.pc != 0x0012A578u) [[unlikely]] return; }
L_0012A578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A5A8; } }
L_0012A588:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A59Cu); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 286u, depth + 1u); else { c.pc = 0x0012A610u; return; } if (c.pc != 0x0012A59Cu) [[unlikely]] return; }
L_0012A59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A5A8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012A5A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 92u));  goto L_0012A5F0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012A5EC; } }
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[18], c.r[17].w[0] + 4u);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; set32(c.r[16], c.r[17].w[0] + 20u);  if (t) { goto L_0012A5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0012A5E0u) [[unlikely]] return; }
L_0012A5E0:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0012A5E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.f[20]);
    c.budget -= 2;
L_0012A5EC:
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 1;
L_0012A5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012A610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A650:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0012A660:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0012A680:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A69C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0012A6A4; } }
L_0012A69C:
    c.f[0] = 0u;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0012A6A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0012A6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6D0u); set32(c.r[5], c.r[5].w[0] - 12168u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0012A6D0u) [[unlikely]] return; }
L_0012A6D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012A6E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A710u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012A710u) [[unlikely]] return; }
L_0012A710:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A71Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 273u, depth + 1u); else { c.pc = 0x0013EAD0u; return; } if (c.pc != 0x0012A71Cu) [[unlikely]] return; }
L_0012A71C:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A738u); set32(c.r[8], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000A(c, 304u, depth + 1u); else { c.pc = 0x0012A7D0u; return; } if (c.pc != 0x0012A738u) [[unlikely]] return; }
L_0012A738:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A744u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 253u, depth + 1u); else { c.pc = 0x0013E850u; return; } if (c.pc != 0x0012A744u) [[unlikely]] return; }
L_0012A744:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A750u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012A750u) [[unlikely]] return; }
L_0012A750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0012A770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012A798u) [[unlikely]] return; }
L_0012A798:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A7ACu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 469u, depth + 1u); else { c.pc = 0x0011B740u; return; } if (c.pc != 0x0012A7ACu) [[unlikely]] return; }
L_0012A7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012A7D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 12;
L_0012A800:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A800u | kUnwind; return; } goto L_0012A800; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0012A834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0012A83C; } }
L_0012A834:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0012A83C:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0012A86C; }
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0012A864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 76u);  if (t) { goto L_0012A868; } }
L_0012A864:
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_0012A868:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0012A86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A874u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x0012A874u) [[unlikely]] return; }
L_0012A874:
    set32(c.r[9], ld32((c.r[29].w[0] + 72u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0012A880:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A890u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 309u, depth + 1u); else { c.pc = 0x0012A8B0u; return; } if (c.pc != 0x0012A890u) [[unlikely]] return; }
L_0012A890:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012A8B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 116u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0012A904; } }
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[17], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0012A90C; } }
L_0012A904:
    set32(c.r[17], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 2;
L_0012A90C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_0012A93C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A930u); set32(c.r[5], c.r[5].w[0] - 8177u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0012A930u) [[unlikely]] return; }
L_0012A930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A938u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0012A938u) [[unlikely]] return; }
L_0012A938:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_0012A93C:
    set32(c.r[3], c.r[16].w[0] - c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_0012A958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 124u);  if (t) { goto L_0012A95C; } }
L_0012A958:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0012A95C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 120u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A980u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0012A980u) [[unlikely]] return; }
L_0012A980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012A9B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012AA0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA04u); set32(c.r[5], c.r[5].w[0] - 8097u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0012AA04u) [[unlikely]] return; }
L_0012AA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA0Cu);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0012AA0Cu) [[unlikely]] return; }
L_0012AA0C:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.r[22].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[22].d[0] != 0ull) { set32(c.r[20], ld32((c.r[21].w[0] + 4u)));  goto L_0012AA34; }
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[5], 0u + 11u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] >> 57;  if (t) { goto L_0012AA3C; } }
L_0012AA34:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 2;
L_0012AA3C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_0012AA50; }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0012AA50:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0012AA64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 11u);  if (t) { goto L_0012AA6C; } }
L_0012AA64:
    set32(c.r[3], 0u - 16u);
    c.r[16].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0012AA6C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0012AB74; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[1].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;  goto L_0012AA90; }
    set32(c.r[18], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[19], c.r[21].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0012AAD4; } }
L_0012AA90:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 12u)));  goto L_0012AAAC; }
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AAA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0012AAA4u) [[unlikely]] return; }
L_0012AAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012AAC0; } }
L_0012AAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AAB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0012AAB4u) [[unlikely]] return; }
L_0012AAB4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0012AB70; } }
L_0012AAC0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012AAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 8u)));  if (t) { goto L_0012AAD4; } }
L_0012AAD0:
    set32(c.r[18], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0012AAD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AAE4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0012AAE4u) [[unlikely]] return; }
L_0012AAE4:
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012AB00; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0])));  goto L_0012AB04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012AB00u) [[unlikely]] return; }
L_0012AB00:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0012AB04:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { goto L_0012AB3C; } }
    c.r[3].d[0] = c.r[20].d[0] & 127ull;
    c.r[5].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0012AB70; } }
L_0012AB3C:
    c.r[3].d[0] = c.r[16].d[0] << 33;
    st32((c.r[21].w[0] + 8u), c.r[19].w[0]);
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[21].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 13;
L_0012AB70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0012AB74:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012ABA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABB8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012ABB8u) [[unlikely]] return; }
L_0012ABB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0012ABCC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0012ABCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012ABD4u) [[unlikely]] return; }
L_0012ABD4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012ABE0u) [[unlikely]] return; }
L_0012ABE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012AC00:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 29200u)));  [[clang::musttail]] return unit_0010(c, 117u, depth); }
L_0012AC10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AC38u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0012AC38u) [[unlikely]] return; }
L_0012AC38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 29200u), c.r[4].w[0]);  goto L_0012AC64; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AC5Cu); set32(c.r[8], c.r[8].w[0] - 8048u);  if (depth < kMaxDepth) unit_0010(c, 209u, depth + 1u); else { c.pc = 0x001416F0u; return; } if (c.pc != 0x0012AC5Cu) [[unlikely]] return; }
L_0012AC5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 29200u), c.r[4].w[0]);
    c.budget -= 2;
L_0012AC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012AC80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012ACA8u) [[unlikely]] return; }
L_0012ACA8:
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_0012ACC8; } }
L_0012ACB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_0012ACC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0012ACD4; } }
L_0012ACC8:
    c.budget -= 2;
    if (c.r[4].sd[0] > 0) { set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012ACB4u | kUnwind; return; } goto L_0012ACB4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0012ACD4:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0012AD98; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACF0u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0012ACF0u) [[unlikely]] return; }
L_0012ACF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACFCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0012ACFCu) [[unlikely]] return; }
L_0012ACFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD08u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0012AD08u) [[unlikely]] return; }
L_0012AD08:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 81u);  goto L_0012AD1C; }
    set32(c.r[16], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0012AD1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012AD38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD30u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012AD30u) [[unlikely]] return; }
L_0012AD30:
    st32((c.r[17].w[0] + 20u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0012AD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD40u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012AD40u) [[unlikely]] return; }
L_0012AD40:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012AD7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012AD54u) [[unlikely]] return; }
L_0012AD54:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012AD6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD68u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012AD68u) [[unlikely]] return; }
L_0012AD68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012AD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 397u, depth + 1u); else { c.pc = 0x0013FD00u; return; } if (c.pc != 0x0012AD74u) [[unlikely]] return; }
L_0012AD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0012AD84; } }
L_0012AD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012AD84u) [[unlikely]] return; }
L_0012AD84:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012AD90u) [[unlikely]] return; }
L_0012AD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012AE54; } }
L_0012AD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADA0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0012ADA0u) [[unlikely]] return; }
L_0012ADA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0012ADACu) [[unlikely]] return; }
L_0012ADAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADBCu); set32(c.r[5], c.r[5].w[0] - 8036u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0012ADBCu) [[unlikely]] return; }
L_0012ADBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADC8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0012ADC8u) [[unlikely]] return; }
L_0012ADC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 65u);  goto L_0012ADDC; }
    set32(c.r[16], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0012ADDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012ADF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012ADF0u) [[unlikely]] return; }
L_0012ADF0:
    st32((c.r[17].w[0] + 20u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0012ADF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE00u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012AE00u) [[unlikely]] return; }
L_0012AE00:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012AE3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012AE14u) [[unlikely]] return; }
L_0012AE14:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012AE2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE28u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012AE28u) [[unlikely]] return; }
L_0012AE28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012AE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 397u, depth + 1u); else { c.pc = 0x0013FD00u; return; } if (c.pc != 0x0012AE34u) [[unlikely]] return; }
L_0012AE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0012AE44; } }
L_0012AE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012AE44u) [[unlikely]] return; }
L_0012AE44:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012AE50u) [[unlikely]] return; }
L_0012AE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012AE54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012AE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012AE90u) [[unlikely]] return; }
L_0012AE90:
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_0012AEB0; } }
L_0012AE9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_0012AEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0012AEBC; } }
L_0012AEB0:
    c.budget -= 2;
    if (c.r[4].sd[0] > 0) { set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012AE9Cu | kUnwind; return; } goto L_0012AE9C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0012AEBC:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012AED0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0012AED4; } }
L_0012AED0:
    set32(c.r[2], c.r[2].w[0] - 8034u);
    c.budget -= 1;
L_0012AED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012AEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[17].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012AF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF18u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012AF18u) [[unlikely]] return; }
L_0012AF18:
    st32((c.r[17].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_0012AF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012AF24u) [[unlikely]] return; }
L_0012AF24:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012AF60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012AF38u) [[unlikely]] return; }
L_0012AF38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012AF50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF4Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012AF4Cu) [[unlikely]] return; }
L_0012AF4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012AF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 397u, depth + 1u); else { c.pc = 0x0013FD00u; return; } if (c.pc != 0x0012AF58u) [[unlikely]] return; }
L_0012AF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0012AF68; } }
L_0012AF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012AF68u) [[unlikely]] return; }
L_0012AF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012AF80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AFA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012AFA8u) [[unlikely]] return; }
L_0012AFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AFB0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012AFB0u) [[unlikely]] return; }
L_0012AFB0:
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[3], 0u + 47u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_0012AFE0; } }
L_0012AFC0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[5].w[0] + 1u);  goto L_0012AFEC; }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_0012AFE0; }
    set32(c.r[18], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012AFEC; } }
L_0012AFE0:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[4], c.r[5].w[0] + c.r[29].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012AFC0u | kUnwind; return; } goto L_0012AFC0; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012AFEC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AFF8u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012AFF8u) [[unlikely]] return; }
L_0012AFF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0012B034; } }
L_0012B004:
    set32(c.r[2], 0u + 92u);
    set32(c.r[16], c.r[3].w[0] + 96u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012B024; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012B030; } }
L_0012B024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B02Cu);  if (depth < kMaxDepth) unit_000F(c, 405u, depth + 1u); else { c.pc = 0x0013FE30u; return; } if (c.pc != 0x0012B02Cu) [[unlikely]] return; }
L_0012B02C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0012B030:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0012B034:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B004u | kUnwind; return; } goto L_0012B004; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[20].d[0]) { set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);  goto L_0012B05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B054u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012B054u) [[unlikely]] return; }
L_0012B054:
    st32((c.r[20].w[0] + 20u), c.r[20].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    c.budget -= 2;
L_0012B05C:
    set32(c.r[16], c.r[2].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012B068u) [[unlikely]] return; }
L_0012B068:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0012B0A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B07Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012B07Cu) [[unlikely]] return; }
L_0012B07C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0012B080:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012B094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B090u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012B090u) [[unlikely]] return; }
L_0012B090:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012B094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B09Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 397u, depth + 1u); else { c.pc = 0x0013FD00u; return; } if (c.pc != 0x0012B09Cu) [[unlikely]] return; }
L_0012B09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0012B0AC; } }
L_0012B0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B0ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012B0ACu) [[unlikely]] return; }
L_0012B0AC:
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 29200u)));  goto L_0012B0C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B0C0u); set32(c.r[4], ld32((c.r[28].w[0] - 29200u)));  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0012B0C0u) [[unlikely]] return; }
L_0012B0C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29200u)));
    c.budget -= 1;
L_0012B0C4:
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B0D4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0012B0D4u) [[unlikely]] return; }
L_0012B0D4:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0012B100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B124u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0012B124u) [[unlikely]] return; }
L_0012B124:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B130u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0012B130u) [[unlikely]] return; }
L_0012B130:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B13Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0012B13Cu) [[unlikely]] return; }
L_0012B13C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012B148u) [[unlikely]] return; }
L_0012B148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012B160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012B1BC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012B194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B190u); set32(c.r[4], ld32((c.r[28].w[0] - 29200u)));  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0012B190u) [[unlikely]] return; }
L_0012B190:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0012B194:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0012B1A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B1A4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012B1A4u) [[unlikely]] return; }
L_0012B1A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0012B1A8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0012B1C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B1BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012B1BCu) [[unlikely]] return; }
L_0012B1BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012B1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012B1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B204u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012B204u) [[unlikely]] return; }
L_0012B204:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0012B218; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0012B218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B220u) [[unlikely]] return; }
L_0012B220:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B22Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012B22Cu) [[unlikely]] return; }
L_0012B22C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012B240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B260u); st32((c.r[4].w[0] + 20u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B260u) [[unlikely]] return; }
L_0012B260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012B280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0012B2B0; }
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_0012B2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B2B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B2B8u) [[unlikely]] return; }
L_0012B2B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012B2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 8034u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B2F8u); st32((c.r[4].w[0] + 20u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B2F8u) [[unlikely]] return; }
L_0012B2F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012B310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012B320:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B350u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0012B350u) [[unlikely]] return; }
L_0012B350:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B35Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x0012B35Cu) [[unlikely]] return; }
L_0012B35C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B36Cu); st8((c.r[28].w[0] - 31260u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012B36Cu) [[unlikely]] return; }
L_0012B36C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_0012B380; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0012B380:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B390u); set32(c.r[5], c.r[5].w[0] - 7964u);  if (depth < kMaxDepth) unit_000A(c, 415u, depth + 1u); else { c.pc = 0x0012B500u; return; } if (c.pc != 0x0012B390u) [[unlikely]] return; }
L_0012B390:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012B3A0u) [[unlikely]] return; }
L_0012B3A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[28].w[0] - 31260u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012B3D0; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3C0u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B3C0u) [[unlikely]] return; }
L_0012B3C0:
    st32((c.r[17].w[0]), 0u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0012B3D4; } }
L_0012B3D0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B3D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012B3E0u) [[unlikely]] return; }
L_0012B3E0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012B4B8; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3F4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012B3F4u) [[unlikely]] return; }
L_0012B3F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[29].w[0] + 161u);  goto L_0012B408; }
    set32(c.r[20], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0012B408:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B418u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012B418u) [[unlikely]] return; }
L_0012B418:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[2].w[0] - c.r[20].w[0]);  goto L_0012B428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012B484; } }
L_0012B428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0012B474; } }
L_0012B430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[17], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B450u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012B450u) [[unlikely]] return; }
L_0012B450:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0012B474; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_0012B484; } }
L_0012B474:
    c.r[2].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B430u | kUnwind; return; } goto L_0012B430; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B484:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B498u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B498u) [[unlikely]] return; }
L_0012B498:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012B4A4u) [[unlikely]] return; }
L_0012B4A4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012B4B0u) [[unlikely]] return; }
L_0012B4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012B4D4; } }
L_0012B4B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4C4u); set32(c.r[5], c.r[5].w[0] - 7961u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0012B4C4u) [[unlikely]] return; }
L_0012B4C4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012B4D0u) [[unlikely]] return; }
L_0012B4D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0012B500:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 2704u);  if (t) { goto L_0012B564; } }
L_0012B54C:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0012B564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0012B570; } }
L_0012B564:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B54Cu | kUnwind; return; } goto L_0012B54C; }
L_0012B570:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012B580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012B948; } }
L_0012B580:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B58Cu); set32(c.r[5], c.r[5].w[0] - 7960u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x0012B58Cu) [[unlikely]] return; }
L_0012B58C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0012B794; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B5A4u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012B5A4u) [[unlikely]] return; }
L_0012B5A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[2].w[0] - c.r[20].w[0]);  goto L_0012B5B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012B610; } }
L_0012B5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012B600; } }
L_0012B5BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[22], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B5DCu); set32(c.r[5], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012B5DCu) [[unlikely]] return; }
L_0012B5DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0012B600; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_0012B610; } }
L_0012B600:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B5BCu | kUnwind; return; } goto L_0012B5BC; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B610:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0012B630; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 7958u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B630u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0012B630u) [[unlikely]] return; }
L_0012B630:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[18].w[0]), c.r[16].w[0]);  goto L_0012B640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012B948; } }
L_0012B640:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B658u) [[unlikely]] return; }
L_0012B658:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012B910; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B66Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B66Cu) [[unlikely]] return; }
L_0012B66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0012B914; } }
L_0012B674:
    set32(c.r[22], c.r[21].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 3040u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B688u); set32(c.r[5], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0012B688u) [[unlikely]] return; }
L_0012B688:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0012B794; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 3040u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[2].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B6A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012B6A8u) [[unlikely]] return; }
L_0012B6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012B790; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0012B6C8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B6C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B6C4u) [[unlikely]] return; }
L_0012B6C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012B6C8:
    set32(c.r[5], 0u + 58u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B6D4u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012B6D4u) [[unlikely]] return; }
L_0012B6D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);  goto L_0012B6E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012B75C; } }
L_0012B6E4:
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 3040u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_0012B74C; } }
L_0012B700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 2496u);
    set32(c.r[22], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[22].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B724u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012B724u) [[unlikely]] return; }
L_0012B724:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0012B74C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0012B75C; } }
L_0012B74C:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B700u | kUnwind; return; } goto L_0012B700; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B75C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012B790; } }
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B77Cu); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B77Cu) [[unlikely]] return; }
L_0012B77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012B78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0012B948; } }
L_0012B78C:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_0012B790:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0012B794:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B674u | kUnwind; return; } goto L_0012B674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012B880; } }
L_0012B7A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3036u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 127u);
    set32(c.r[6], c.r[6].w[0] - 7922u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B7D0u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 120u, depth + 1u); else { c.pc = 0x003B9478u; return; } if (c.pc != 0x0012B7D0u) [[unlikely]] return; }
L_0012B7D0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 58u);
    st8((c.r[29].w[0] + 319u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B7E4u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012B7E4u) [[unlikely]] return; }
L_0012B7E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[29].w[0] + 192u);  goto L_0012B7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012B858; } }
L_0012B7F4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0012B848; } }
L_0012B800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[23], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B820u); set32(c.r[5], c.r[2].w[0] + c.r[23].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012B820u) [[unlikely]] return; }
L_0012B820:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0012B848; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[3].w[0] + 192u);  if (t) { goto L_0012B858; } }
L_0012B848:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B800u | kUnwind; return; } goto L_0012B800; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B858:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0012B880; }
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B878u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B878u) [[unlikely]] return; }
L_0012B878:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0012B880:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012B8A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3032u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B7A8u | kUnwind; return; } goto L_0012B7A8; }
L_0012B8A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 3296u);
    set32(c.r[5], c.r[5].w[0] + 3040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8B8u); set32(c.r[6], 0u + 2304u);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x0012B8B8u) [[unlikely]] return; }
L_0012B8B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8C8u); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012B8C8u) [[unlikely]] return; }
L_0012B8C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0012B900; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8E4u); set32(c.r[4], c.r[4].w[0] + 3168u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012B8E4u) [[unlikely]] return; }
L_0012B8E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0012B910; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8F8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AF80u; return; } if (c.pc != 0x0012B8F8u) [[unlikely]] return; }
L_0012B8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012B910; } }
L_0012B900:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 3168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B910u); set32(c.r[5], c.r[5].w[0] - 7961u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0012B910u) [[unlikely]] return; }
L_0012B910:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0012B914:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0012B948; }
    st32((c.r[18].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31260u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012B948; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B944u); set32(c.r[6], c.r[6].w[0] - 7917u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0012B944u) [[unlikely]] return; }
L_0012B944:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B948:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0012B980:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012B9A8u) [[unlikely]] return; }
L_0012B9A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0012B9BC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0012B9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0012B9C4u) [[unlikely]] return; }
L_0012B9C4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012B9D0u) [[unlikely]] return; }
L_0012B9D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[29].w[0] + 113u);  goto L_0012B9E4; }
    set32(c.r[19], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0012B9E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9F4u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012B9F4u) [[unlikely]] return; }
L_0012B9F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[2].w[0] - c.r[19].w[0]);  goto L_0012BA04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012BA60; } }
L_0012BA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012BA50; } }
L_0012BA0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA2Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012BA2Cu) [[unlikely]] return; }
L_0012BA2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0012BA50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_0012BA60; } }
L_0012BA50:
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BA0Cu | kUnwind; return; } goto L_0012BA0C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BA60:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0012BA90; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA78u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BA78u) [[unlikely]] return; }
L_0012BA78:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BA88u) [[unlikely]] return; }
L_0012BA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012BA9C; } }
L_0012BA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BA98u) [[unlikely]] return; }
L_0012BA98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012BAC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BAE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012BAE8u) [[unlikely]] return; }
L_0012BAE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0012BAFC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0012BAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB04u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0012BB04u) [[unlikely]] return; }
L_0012BB04:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BB10u) [[unlikely]] return; }
L_0012BB10:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[29].w[0] + 113u);  goto L_0012BB24; }
    set32(c.r[19], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0012BB24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB34u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012BB34u) [[unlikely]] return; }
L_0012BB34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[2].w[0] - c.r[19].w[0]);  goto L_0012BB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012BBA0; } }
L_0012BB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012BB90; } }
L_0012BB4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB6Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012BB6Cu) [[unlikely]] return; }
L_0012BB6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0012BB90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_0012BBA0; } }
L_0012BB90:
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BB4Cu | kUnwind; return; } goto L_0012BB4C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BBA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0012BBD0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBB8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BBB8u) [[unlikely]] return; }
L_0012BBB8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BBC8u) [[unlikely]] return; }
L_0012BBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012BBDC; } }
L_0012BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BBD8u) [[unlikely]] return; }
L_0012BBD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012BC00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC30u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0012BC30u) [[unlikely]] return; }
L_0012BC30:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC40u); st8((c.r[28].w[0] - 31260u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012BC40u) [[unlikely]] return; }
L_0012BC40:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_0012BC54; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0012BC54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC64u); set32(c.r[5], c.r[5].w[0] - 7964u);  if (depth < kMaxDepth) unit_000A(c, 415u, depth + 1u); else { c.pc = 0x0012B500u; return; } if (c.pc != 0x0012BC64u) [[unlikely]] return; }
L_0012BC64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BC74u) [[unlikely]] return; }
L_0012BC74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[28].w[0] - 31260u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012BCA4; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC94u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BC94u) [[unlikely]] return; }
L_0012BC94:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0012BCA8; } }
L_0012BCA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BCA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0012BDC0; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCBCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012BCBCu) [[unlikely]] return; }
L_0012BCBC:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0012BCD0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0012BCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCD8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0012BCD8u) [[unlikely]] return; }
L_0012BCD8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BCE4u) [[unlikely]] return; }
L_0012BCE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[29].w[0] + 145u);  goto L_0012BCF8; }
    set32(c.r[20], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0012BCF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD08u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0012BD08u) [[unlikely]] return; }
L_0012BD08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[2].w[0] - c.r[20].w[0]);  goto L_0012BD18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012BD74; } }
L_0012BD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0012BD64; } }
L_0012BD20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[17], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD40u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0012BD40u) [[unlikely]] return; }
L_0012BD40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0012BD64; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_0012BD74; } }
L_0012BD64:
    c.r[2].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BD20u | kUnwind; return; } goto L_0012BD20; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BD74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0012BDB4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD90u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BD90u) [[unlikely]] return; }
L_0012BD90:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BDA0u) [[unlikely]] return; }
L_0012BDA0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012BDACu) [[unlikely]] return; }
L_0012BDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012BDCC; } }
L_0012BDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BDBCu) [[unlikely]] return; }
L_0012BDBC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0012BDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012BDC8u) [[unlikely]] return; }
L_0012BDC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0012BDF0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012BE20:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012BE40:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012BE70:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012BEA0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012BEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BEE4u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BEE4u) [[unlikely]] return; }
L_0012BEE4:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012BF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[28].w[0] - 31260u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF30u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012BF30u) [[unlikely]] return; }
L_0012BF30:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 33u);  goto L_0012BF44; }
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0012BF44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF54u); set32(c.r[5], c.r[5].w[0] - 7964u);  if (depth < kMaxDepth) unit_000A(c, 415u, depth + 1u); else { c.pc = 0x0012B500u; return; } if (c.pc != 0x0012BF54u) [[unlikely]] return; }
L_0012BF54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012BF64u) [[unlikely]] return; }
L_0012BF64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[28].w[0] - 31260u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012BF94; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF84u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BF84u) [[unlikely]] return; }
L_0012BF84:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0012BF98; } }
L_0012BF94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BF98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012BFB0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00128000u < 16384u) { entry = entries_000A[(t - 0x00128000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012BFD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BFF0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0012BFF0u) [[unlikely]] return; }
L_0012BFF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C000u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 415u, depth + 1u); else { c.pc = 0x0012B500u; return; } if (c.pc != 0x0012C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_000B(c, 1u, depth);
}

}
