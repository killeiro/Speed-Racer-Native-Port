#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003E[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0,
    0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0,
    261, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0,
    0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F8000;
    case 2u: goto L_001F800C;
    case 3u: goto L_001F8010;
    case 4u: goto L_001F8020;
    case 5u: goto L_001F8030;
    case 6u: goto L_001F806C;
    case 7u: goto L_001F8080;
    case 8u: goto L_001F80A0;
    case 9u: goto L_001F80CC;
    case 10u: goto L_001F80EC;
    case 11u: goto L_001F80FC;
    case 12u: goto L_001F8118;
    case 13u: goto L_001F812C;
    case 14u: goto L_001F813C;
    case 15u: goto L_001F8170;
    case 16u: goto L_001F81A4;
    case 17u: goto L_001F81B4;
    case 18u: goto L_001F81D0;
    case 19u: goto L_001F81EC;
    case 20u: goto L_001F8210;
    case 21u: goto L_001F8238;
    case 22u: goto L_001F8248;
    case 23u: goto L_001F82B8;
    case 24u: goto L_001F82E0;
    case 25u: goto L_001F8360;
    case 26u: goto L_001F8374;
    case 27u: goto L_001F83F8;
    case 28u: goto L_001F8410;
    case 29u: goto L_001F8424;
    case 30u: goto L_001F8430;
    case 31u: goto L_001F84AC;
    case 32u: goto L_001F84E0;
    case 33u: goto L_001F8514;
    case 34u: goto L_001F8520;
    case 35u: goto L_001F8540;
    case 36u: goto L_001F8574;
    case 37u: goto L_001F8580;
    case 38u: goto L_001F85A0;
    case 39u: goto L_001F85CC;
    case 40u: goto L_001F85DC;
    case 41u: goto L_001F8600;
    case 42u: goto L_001F8624;
    case 43u: goto L_001F863C;
    case 44u: goto L_001F8660;
    case 45u: goto L_001F86A4;
    case 46u: goto L_001F86B8;
    case 47u: goto L_001F86C8;
    case 48u: goto L_001F86EC;
    case 49u: goto L_001F86FC;
    case 50u: goto L_001F8718;
    case 51u: goto L_001F872C;
    case 52u: goto L_001F873C;
    case 53u: goto L_001F8778;
    case 54u: goto L_001F878C;
    case 55u: goto L_001F87AC;
    case 56u: goto L_001F87B8;
    case 57u: goto L_001F87DC;
    case 58u: goto L_001F87F0;
    case 59u: goto L_001F8800;
    case 60u: goto L_001F8824;
    case 61u: goto L_001F8834;
    case 62u: goto L_001F8850;
    case 63u: goto L_001F8864;
    case 64u: goto L_001F8874;
    case 65u: goto L_001F88B0;
    case 66u: goto L_001F88C4;
    case 67u: goto L_001F88E4;
    case 68u: goto L_001F8920;
    case 69u: goto L_001F8934;
    case 70u: goto L_001F8944;
    case 71u: goto L_001F8968;
    case 72u: goto L_001F8978;
    case 73u: goto L_001F8994;
    case 74u: goto L_001F89A8;
    case 75u: goto L_001F89B8;
    case 76u: goto L_001F89F4;
    case 77u: goto L_001F8A08;
    case 78u: goto L_001F8A28;
    case 79u: goto L_001F8A3C;
    case 80u: goto L_001F8A60;
    case 81u: goto L_001F8A8C;
    case 82u: goto L_001F8AA4;
    case 83u: goto L_001F8AB8;
    case 84u: goto L_001F8AC8;
    case 85u: goto L_001F8AE4;
    case 86u: goto L_001F8AF4;
    case 87u: goto L_001F8B38;
    case 88u: goto L_001F8B60;
    case 89u: goto L_001F8B80;
    case 90u: goto L_001F8BB4;
    case 91u: goto L_001F8BDC;
    case 92u: goto L_001F8C04;
    case 93u: goto L_001F8C24;
    case 94u: goto L_001F8C60;
    case 95u: goto L_001F8CC8;
    case 96u: goto L_001F8CE4;
    case 97u: goto L_001F8CFC;
    case 98u: goto L_001F8D14;
    case 99u: goto L_001F8D28;
    case 100u: goto L_001F8D40;
    case 101u: goto L_001F8D50;
    case 102u: goto L_001F8D64;
    case 103u: goto L_001F8DE0;
    case 104u: goto L_001F8E1C;
    case 105u: goto L_001F8E38;
    case 106u: goto L_001F8E44;
    case 107u: goto L_001F8ED0;
    case 108u: goto L_001F8F00;
    case 109u: goto L_001F8F1C;
    case 110u: goto L_001F8F40;
    case 111u: goto L_001F8F50;
    case 112u: goto L_001F8F60;
    case 113u: goto L_001F8F7C;
    case 114u: goto L_001F8F88;
    case 115u: goto L_001F8F9C;
    case 116u: goto L_001F8FAC;
    case 117u: goto L_001F8FC0;
    case 118u: goto L_001F8FE4;
    case 119u: goto L_001F8FF8;
    case 120u: goto L_001F9010;
    case 121u: goto L_001F902C;
    case 122u: goto L_001F909C;
    case 123u: goto L_001F90D0;
    case 124u: goto L_001F90EC;
    case 125u: goto L_001F9100;
    case 126u: goto L_001F9114;
    case 127u: goto L_001F9130;
    case 128u: goto L_001F9140;
    case 129u: goto L_001F915C;
    case 130u: goto L_001F9164;
    case 131u: goto L_001F9180;
    case 132u: goto L_001F919C;
    case 133u: goto L_001F91A8;
    case 134u: goto L_001F91BC;
    case 135u: goto L_001F91D0;
    case 136u: goto L_001F91E8;
    case 137u: goto L_001F91F8;
    case 138u: goto L_001F9220;
    case 139u: goto L_001F923C;
    case 140u: goto L_001F926C;
    case 141u: goto L_001F92B0;
    case 142u: goto L_001F92F0;
    case 143u: goto L_001F9318;
    case 144u: goto L_001F9328;
    case 145u: goto L_001F934C;
    case 146u: goto L_001F9370;
    case 147u: goto L_001F93B4;
    case 148u: goto L_001F9418;
    case 149u: goto L_001F942C;
    case 150u: goto L_001F9454;
    case 151u: goto L_001F94A0;
    case 152u: goto L_001F94E0;
    case 153u: goto L_001F9520;
    case 154u: goto L_001F9534;
    case 155u: goto L_001F9560;
    case 156u: goto L_001F9570;
    case 157u: goto L_001F9590;
    case 158u: goto L_001F95D0;
    case 159u: goto L_001F9610;
    case 160u: goto L_001F962C;
    case 161u: goto L_001F9650;
    case 162u: goto L_001F9660;
    case 163u: goto L_001F9670;
    case 164u: goto L_001F9680;
    case 165u: goto L_001F9690;
    case 166u: goto L_001F96A4;
    case 167u: goto L_001F96B0;
    case 168u: goto L_001F96C4;
    case 169u: goto L_001F96E0;
    case 170u: goto L_001F96F0;
    case 171u: goto L_001F9700;
    case 172u: goto L_001F9710;
    case 173u: goto L_001F9720;
    case 174u: goto L_001F9730;
    case 175u: goto L_001F9748;
    case 176u: goto L_001F9758;
    case 177u: goto L_001F9780;
    case 178u: goto L_001F97B0;
    case 179u: goto L_001F97CC;
    case 180u: goto L_001F97F0;
    case 181u: goto L_001F9818;
    case 182u: goto L_001F9828;
    case 183u: goto L_001F9844;
    case 184u: goto L_001F9860;
    case 185u: goto L_001F9890;
    case 186u: goto L_001F98A0;
    case 187u: goto L_001F98BC;
    case 188u: goto L_001F98CC;
    case 189u: goto L_001F9914;
    case 190u: goto L_001F9920;
    case 191u: goto L_001F9960;
    case 192u: goto L_001F99A0;
    case 193u: goto L_001F99BC;
    case 194u: goto L_001F99E0;
    case 195u: goto L_001F99F0;
    case 196u: goto L_001F9A04;
    case 197u: goto L_001F9A10;
    case 198u: goto L_001F9A24;
    case 199u: goto L_001F9A40;
    case 200u: goto L_001F9A50;
    case 201u: goto L_001F9A60;
    case 202u: goto L_001F9A70;
    case 203u: goto L_001F9A80;
    case 204u: goto L_001F9A90;
    case 205u: goto L_001F9AA8;
    case 206u: goto L_001F9AB8;
    case 207u: goto L_001F9AE0;
    case 208u: goto L_001F9B08;
    case 209u: goto L_001F9B18;
    case 210u: goto L_001F9B34;
    case 211u: goto L_001F9B50;
    case 212u: goto L_001F9B80;
    case 213u: goto L_001F9B90;
    case 214u: goto L_001F9BAC;
    case 215u: goto L_001F9BBC;
    case 216u: goto L_001F9C04;
    case 217u: goto L_001F9C10;
    case 218u: goto L_001F9C50;
    case 219u: goto L_001F9C90;
    case 220u: goto L_001F9CAC;
    case 221u: goto L_001F9CD0;
    case 222u: goto L_001F9CE0;
    case 223u: goto L_001F9CFC;
    case 224u: goto L_001F9D08;
    case 225u: goto L_001F9D1C;
    case 226u: goto L_001F9D2C;
    case 227u: goto L_001F9D40;
    case 228u: goto L_001F9D50;
    case 229u: goto L_001F9D64;
    case 230u: goto L_001F9D74;
    case 231u: goto L_001F9D88;
    case 232u: goto L_001F9D98;
    case 233u: goto L_001F9DAC;
    case 234u: goto L_001F9DBC;
    case 235u: goto L_001F9DD0;
    case 236u: goto L_001F9DE0;
    case 237u: goto L_001F9DF4;
    case 238u: goto L_001F9E04;
    case 239u: goto L_001F9E18;
    case 240u: goto L_001F9E28;
    case 241u: goto L_001F9E3C;
    case 242u: goto L_001F9E50;
    case 243u: goto L_001F9E6C;
    case 244u: goto L_001F9EF0;
    case 245u: goto L_001F9F0C;
    case 246u: goto L_001F9F18;
    case 247u: goto L_001F9F24;
    case 248u: goto L_001F9F30;
    case 249u: goto L_001F9F44;
    case 250u: goto L_001F9F58;
    case 251u: goto L_001F9F6C;
    case 252u: goto L_001F9F78;
    case 253u: goto L_001F9F90;
    case 254u: goto L_001F9FA0;
    case 255u: goto L_001F9FB0;
    case 256u: goto L_001F9FCC;
    case 257u: goto L_001F9FD8;
    case 258u: goto L_001F9FE4;
    case 259u: goto L_001F9FF0;
    case 260u: goto L_001F9FF8;
    case 261u: goto L_001FA000;
    case 262u: goto L_001FA008;
    case 263u: goto L_001FA018;
    case 264u: goto L_001FA020;
    case 265u: goto L_001FA02C;
    case 266u: goto L_001FA038;
    case 267u: goto L_001FA044;
    case 268u: goto L_001FA05C;
    case 269u: goto L_001FA074;
    case 270u: goto L_001FA08C;
    case 271u: goto L_001FA0A0;
    case 272u: goto L_001FA100;
    case 273u: goto L_001FA150;
    case 274u: goto L_001FA170;
    case 275u: goto L_001FA184;
    case 276u: goto L_001FA194;
    case 277u: goto L_001FA1A0;
    case 278u: goto L_001FA1BC;
    case 279u: goto L_001FA1EC;
    case 280u: goto L_001FA230;
    case 281u: goto L_001FA270;
    case 282u: goto L_001FA28C;
    case 283u: goto L_001FA298;
    case 284u: goto L_001FA2A4;
    case 285u: goto L_001FA2AC;
    case 286u: goto L_001FA2BC;
    case 287u: goto L_001FA2D4;
    case 288u: goto L_001FA2F0;
    case 289u: goto L_001FA318;
    case 290u: goto L_001FA32C;
    case 291u: goto L_001FA340;
    case 292u: goto L_001FA360;
    case 293u: goto L_001FA4A0;
    case 294u: goto L_001FA4D4;
    case 295u: goto L_001FA4DC;
    case 296u: goto L_001FA55C;
    case 297u: goto L_001FA594;
    case 298u: goto L_001FA5C8;
    case 299u: goto L_001FA6A0;
    case 300u: goto L_001FA730;
    case 301u: goto L_001FA750;
    case 302u: goto L_001FA89C;
    case 303u: goto L_001FA8D0;
    case 304u: goto L_001FA8D8;
    case 305u: goto L_001FA958;
    case 306u: goto L_001FA990;
    case 307u: goto L_001FA9C8;
    case 308u: goto L_001FAAF0;
    case 309u: goto L_001FABA8;
    case 310u: goto L_001FABB8;
    case 311u: goto L_001FACCC;
    case 312u: goto L_001FAD00;
    case 313u: goto L_001FAD08;
    case 314u: goto L_001FAD88;
    case 315u: goto L_001FADAC;
    case 316u: goto L_001FAF48;
    case 317u: goto L_001FAF58;
    case 318u: goto L_001FB124;
    case 319u: goto L_001FB1D0;
    case 320u: goto L_001FB1E4;
    case 321u: goto L_001FB22C;
    case 322u: goto L_001FB238;
    case 323u: goto L_001FB240;
    case 324u: goto L_001FB250;
    case 325u: goto L_001FB268;
    case 326u: goto L_001FB2B0;
    case 327u: goto L_001FB2E0;
    case 328u: goto L_001FB2FC;
    case 329u: goto L_001FB320;
    case 330u: goto L_001FB360;
    case 331u: goto L_001FB37C;
    case 332u: goto L_001FB3A0;
    case 333u: goto L_001FB3B0;
    case 334u: goto L_001FB3C4;
    case 335u: goto L_001FB3D0;
    case 336u: goto L_001FB3E4;
    case 337u: goto L_001FB400;
    case 338u: goto L_001FB410;
    case 339u: goto L_001FB420;
    case 340u: goto L_001FB430;
    case 341u: goto L_001FB440;
    case 342u: goto L_001FB450;
    case 343u: goto L_001FB468;
    case 344u: goto L_001FB478;
    case 345u: goto L_001FB4A0;
    case 346u: goto L_001FB4C8;
    case 347u: goto L_001FB4D8;
    case 348u: goto L_001FB4F4;
    case 349u: goto L_001FB510;
    case 350u: goto L_001FB540;
    case 351u: goto L_001FB550;
    case 352u: goto L_001FB56C;
    case 353u: goto L_001FB57C;
    case 354u: goto L_001FB5C4;
    case 355u: goto L_001FB5D0;
    case 356u: goto L_001FB610;
    case 357u: goto L_001FB640;
    case 358u: goto L_001FB65C;
    case 359u: goto L_001FB680;
    case 360u: goto L_001FB690;
    case 361u: goto L_001FB6AC;
    case 362u: goto L_001FB6B8;
    case 363u: goto L_001FB6CC;
    case 364u: goto L_001FB6F0;
    case 365u: goto L_001FB704;
    case 366u: goto L_001FB714;
    case 367u: goto L_001FB728;
    case 368u: goto L_001FB738;
    case 369u: goto L_001FB74C;
    case 370u: goto L_001FB75C;
    case 371u: goto L_001FB770;
    case 372u: goto L_001FB7C4;
    case 373u: goto L_001FB7D8;
    case 374u: goto L_001FB82C;
    case 375u: goto L_001FB840;
    case 376u: goto L_001FB860;
    case 377u: goto L_001FB87C;
    case 378u: goto L_001FB8D8;
    case 379u: goto L_001FB9B0;
    case 380u: goto L_001FB9CC;
    case 381u: goto L_001FB9E0;
    case 382u: goto L_001FB9EC;
    case 383u: goto L_001FB9F8;
    case 384u: goto L_001FBA04;
    case 385u: goto L_001FBA10;
    case 386u: goto L_001FBA1C;
    case 387u: goto L_001FBA30;
    case 388u: goto L_001FBA40;
    case 389u: goto L_001FBA5C;
    case 390u: goto L_001FBA64;
    case 391u: goto L_001FBA80;
    case 392u: goto L_001FBA9C;
    case 393u: goto L_001FBAA4;
    case 394u: goto L_001FBAB0;
    case 395u: goto L_001FBABC;
    case 396u: goto L_001FBAC8;
    case 397u: goto L_001FBAD4;
    case 398u: goto L_001FBAE0;
    case 399u: goto L_001FBB00;
    case 400u: goto L_001FBB18;
    case 401u: goto L_001FBB28;
    case 402u: goto L_001FBB80;
    case 403u: goto L_001FBB9C;
    case 404u: goto L_001FBBCC;
    case 405u: goto L_001FBC0C;
    case 406u: goto L_001FBC50;
    case 407u: goto L_001FBC78;
    case 408u: goto L_001FBC88;
    case 409u: goto L_001FBCDC;
    case 410u: goto L_001FBD30;
    case 411u: goto L_001FBE78;
    case 412u: goto L_001FBED4;
    case 413u: goto L_001FBF08;
    case 414u: goto L_001FBF10;
    case 415u: goto L_001FBF90;
    case 416u: goto L_001FBFB8;
    default: bad_entry(c, 0x001F8000u); return;
    }
L_001F8000:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F800Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F800Cu) [[unlikely]] return; }
L_001F800C:
    set32(c.r[20], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_001F8010:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[22].w[0]), c.r[20].w[0]);  if (t) { goto L_001F8030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8020u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F8020u) [[unlikely]] return; }
L_001F8020:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8030u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8030u) [[unlikely]] return; }
L_001F8030:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 268u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 268u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 264u), c.r[21].w[0]);  goto L_001F804C; }
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_001F804C:
    st32((c.r[18].w[0] + 268u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_001F80A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F806Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F806Cu) [[unlikely]] return; }
L_001F806C:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8080u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8080u) [[unlikely]] return; }
L_001F8080:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F80A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F80A0u) [[unlikely]] return; }
L_001F80A0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7F74u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 556u, depth); }
    c.f[0] = ld32((c.r[19].w[0] + 276u));
    st32((c.r[18].w[0] + 276u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 281u));
    st8((c.r[18].w[0] + 281u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F80CCu) [[unlikely]] return; }
L_001F80CC:
    set32(c.r[17], ld32((c.r[18].w[0] + 220u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_001F8140; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 220u), c.r[16].w[0]);  goto L_001F811C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F80ECu) [[unlikely]] return; }
L_001F80EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80FCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F80FCu) [[unlikely]] return; }
L_001F80FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8118; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8118u) [[unlikely]] return; }
L_001F8118:
    st32((c.r[18].w[0] + 220u), c.r[16].w[0]);
    c.budget -= 1;
L_001F811C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F813C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F812Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F812Cu) [[unlikely]] return; }
L_001F812C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F813Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F813Cu) [[unlikely]] return; }
L_001F813C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001F8140:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F8170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F81EC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001F81D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F81A4u) [[unlikely]] return; }
L_001F81A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F81B4u) [[unlikely]] return; }
L_001F81B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F81D0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F81D0u) [[unlikely]] return; }
L_001F81D0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001F81D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F81F0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81ECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F81ECu) [[unlikely]] return; }
L_001F81EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F81F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8238u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F8238u) [[unlikely]] return; }
L_001F8238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F82A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 406u, depth + 1u); else { c.pc = 0x002C3550u; return; } if (c.pc != 0x001F8248u) [[unlikely]] return; }
L_001F8248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 15264u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15232u);
    st32((c.r[16].w[0] + 272u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 264u), 0u);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    st32((c.r[16].w[0] + 268u), 0u);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 276u), c.f[0]);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 316u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    c.budget -= 24;
L_001F82A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 554u, depth + 1u); else { c.pc = 0x001F7F30u; return; } if (c.pc != 0x001F82B8u) [[unlikely]] return; }
L_001F82B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F82E0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));  goto L_001F8308; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F8310; } }
L_001F8308:
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F8310:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));  goto L_001F8344; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F834C; } }
L_001F8344:
    c.r[3].d[0] = c.r[3].d[0] & 65519ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F834C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 136u, depth + 1u); else { c.pc = 0x002A5110u; return; } if (c.pc != 0x001F8374u) [[unlikely]] return; }
L_001F8374:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 256u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F83FC; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 281u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 220u)));  goto L_001F83E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[16].w[0] + 32u), c.f[2]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[4] = ld32((c.r[16].w[0] + 172u));
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[3] = fp::mul(c.f[4], c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[2]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[3]);  if (t) { goto L_001F83F8; } }
L_001F83E8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F83F8u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x001F83F8u) [[unlikely]] return; }
L_001F83F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F83FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 20u, depth + 1u); else { c.pc = 0x0027C310u; return; } if (c.pc != 0x001F8424u) [[unlikely]] return; }
L_001F8424:
    set32(c.r[6], c.r[16].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_001F8430:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8430u | kUnwind; return; } goto L_001F8430; } }
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.f[1] = ld32((c.r[16].w[0] + 164u));
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[16].w[0] + 336u), c.f[2]);
    st32((c.r[16].w[0] + 340u), c.f[1]);
    st32((c.r[16].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 172u));
    st32((c.r[16].w[0] + 348u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 256u));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F84CC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] + 15184u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.budget -= 13;
L_001F84AC:
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F84ACu | kUnwind; return; } goto L_001F84AC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F84CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F84E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001F8514; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8514u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8514u) [[unlikely]] return; }
L_001F8514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8520u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0060(c, 558u, depth + 1u); else { c.pc = 0x00283990u; return; } if (c.pc != 0x001F8520u) [[unlikely]] return; }
L_001F8520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001F8574; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8574u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8574u) [[unlikely]] return; }
L_001F8574:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8580u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0060(c, 565u, depth + 1u); else { c.pc = 0x00283A60u; return; } if (c.pc != 0x001F8580u) [[unlikely]] return; }
L_001F8580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F85A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85CCu); c.f[20] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F85CCu) [[unlikely]] return; }
L_001F85CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85DCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0060(c, 575u, depth + 1u); else { c.pc = 0x00283B80u; return; } if (c.pc != 0x001F85DCu) [[unlikely]] return; }
L_001F85DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F863C; } }
L_001F8624:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F863Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F863Cu) [[unlikely]] return; }
L_001F863C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8624u | kUnwind; return; } goto L_001F8624; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F8900; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_001F86B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F86A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F86A4u) [[unlikely]] return; }
L_001F86A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F86B8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F86B8u) [[unlikely]] return; }
L_001F86B8:
    set32(c.r[25], ld32((c.r[18].w[0] + 260u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F86C8u); set32(c.r[4], c.r[18].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F86C8u) [[unlikely]] return; }
L_001F86C8:
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[21].w[0] + 8u);  if (t) { goto L_001F873C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 124u)));  goto L_001F871C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F86ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F86ECu) [[unlikely]] return; }
L_001F86EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F86FCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F86FCu) [[unlikely]] return; }
L_001F86FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8718; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8718u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8718u) [[unlikely]] return; }
L_001F8718:
    set32(c.r[19], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001F871C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_001F873C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F872Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F872Cu) [[unlikely]] return; }
L_001F872C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F873Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F873Cu) [[unlikely]] return; }
L_001F873C:
    st32((c.r[21].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 268u), c.r[21].w[0]);  goto L_001F8758; }
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_001F8758:
    st32((c.r[18].w[0] + 264u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_001F87AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8778u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F8778u) [[unlikely]] return; }
L_001F8778:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F878Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F878Cu) [[unlikely]] return; }
L_001F878C:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_001F8900; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F87ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F87ACu) [[unlikely]] return; }
L_001F87AC:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8900; } }
L_001F87B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F88F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 120u), c.r[17].w[0]);  if (t) { goto L_001F87F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F87DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F87DCu) [[unlikely]] return; }
L_001F87DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F87F0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F87F0u) [[unlikely]] return; }
L_001F87F0:
    set32(c.r[25], ld32((c.r[18].w[0] + 260u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8800u); set32(c.r[4], c.r[18].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8800u) [[unlikely]] return; }
L_001F8800:
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[21].w[0] + 8u);  if (t) { goto L_001F8874; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 120u)));  goto L_001F8854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8824u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F8824u) [[unlikely]] return; }
L_001F8824:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8834u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8834u) [[unlikely]] return; }
L_001F8834:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8850; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8850u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8850u) [[unlikely]] return; }
L_001F8850:
    set32(c.r[19], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_001F8854:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_001F8874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8864u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F8864u) [[unlikely]] return; }
L_001F8864:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8874u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8874u) [[unlikely]] return; }
L_001F8874:
    st32((c.r[21].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 264u), c.r[21].w[0]);  goto L_001F8890; }
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_001F8890:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_001F88E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F88B0u) [[unlikely]] return; }
L_001F88B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88C4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F88C4u) [[unlikely]] return; }
L_001F88C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_001F8908; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F88E4u) [[unlikely]] return; }
L_001F88E4:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8908; } }
L_001F88F0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001F8900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_001F8900; } }
L_001F8900:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F87B8u | kUnwind; return; } goto L_001F87B8; }
L_001F8908:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_001F8A2C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 116u), c.r[17].w[0]);  if (t) { goto L_001F8934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8920u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F8920u) [[unlikely]] return; }
L_001F8920:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8934u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8934u) [[unlikely]] return; }
L_001F8934:
    set32(c.r[25], ld32((c.r[18].w[0] + 260u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8944u); set32(c.r[4], c.r[18].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8944u) [[unlikely]] return; }
L_001F8944:
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[19], c.r[20].w[0] + 8u);  if (t) { goto L_001F89B8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 116u)));  goto L_001F8998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8968u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F8968u) [[unlikely]] return; }
L_001F8968:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8978u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8978u) [[unlikely]] return; }
L_001F8978:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8994; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8994u) [[unlikely]] return; }
L_001F8994:
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_001F8998:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0]), c.r[16].w[0]);  if (t) { goto L_001F89B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F89A8u) [[unlikely]] return; }
L_001F89A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F89B8u) [[unlikely]] return; }
L_001F89B8:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 268u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 268u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 264u), c.r[20].w[0]);  goto L_001F89D4; }
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_001F89D4:
    st32((c.r[18].w[0] + 268u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_001F8A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F89F4u) [[unlikely]] return; }
L_001F89F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8A08u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F8A08u) [[unlikely]] return; }
L_001F8A08:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8A28; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8A28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8A28u) [[unlikely]] return; }
L_001F8A28:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001F8A2C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8A3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8A3Cu) [[unlikely]] return; }
L_001F8A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001F8A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8A8Cu) [[unlikely]] return; }
L_001F8A8C:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st16((c.r[16].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 122u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 276u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 264u)));  if (t) { goto L_001F8AB8; } }
L_001F8AA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AB8u); set32(c.r[16], ld32((c.r[16].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8AB8u) [[unlikely]] return; }
L_001F8AB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8AA4u | kUnwind; return; } goto L_001F8AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_001F8B3C; } }
L_001F8AC8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_001F8AD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F8B20; } }
L_001F8AD8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8AE4u) [[unlikely]] return; }
L_001F8AE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 10152u);  if (t) { goto L_001F8B04; } }
L_001F8AF4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_001F8B04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F8B10; } }
L_001F8B04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8AF4u | kUnwind; return; } goto L_001F8AF4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F8B10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001F8B20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F8B20; } }
L_001F8B20:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 48u)));  goto L_001F8B3C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8B38u) [[unlikely]] return; }
L_001F8B38:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_001F8B3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8AC8u | kUnwind; return; } goto L_001F8AC8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8B60:
    c.r[6].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[6].w[0]));  goto L_001F8B78; }
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_001F8B78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 220u)));
    c.f[20] = c.f[12];
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8BB4u) [[unlikely]] return; }
L_001F8BB4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F8BD4; }
    c.f[0] = ld32((c.r[17].w[0] + 276u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 276u));  goto L_001F8BE4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F8BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BDCu);  if (depth < kMaxDepth) unit_003E(c, 80u, depth + 1u); else { c.pc = 0x001F8A60u; return; } if (c.pc != 0x001F8BDCu) [[unlikely]] return; }
L_001F8BDC:
    st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[17].w[0] + 276u));
    c.budget -= 2;
L_001F8BE4:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[18], ld32((c.r[17].w[0] + 264u)));  goto L_001F8C24; }
    st32((c.r[17].w[0] + 276u), c.f[20]);
    set32(c.r[18], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8C24; } }
L_001F8C04:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { goto L_001F8C24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8C24u) [[unlikely]] return; }
L_001F8C24:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8C04u | kUnwind; return; } goto L_001F8C04; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 7ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 276u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F8C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28728u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001F8D14; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27628u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F8CA0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 140u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8CA0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001F8CA0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_001F8D18; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F8D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CC8u);  if (depth < kMaxDepth) unit_0046(c, 102u, depth + 1u); else { c.pc = 0x00219130u; return; } if (c.pc != 0x001F8CC8u) [[unlikely]] return; }
L_001F8CC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F8D14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0046(c, 96u, depth + 1u); else { c.pc = 0x00219080u; return; } if (c.pc != 0x001F8CE4u) [[unlikely]] return; }
L_001F8CE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 27628u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30796u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8CFCu) [[unlikely]] return; }
L_001F8CFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001F8D2C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8D14u) [[unlikely]] return; }
L_001F8D14:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001F8D18:
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F8D28u) [[unlikely]] return; }
L_001F8D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F8D2C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8D40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0069(c, 141u, depth); }
L_001F8D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 406u, depth + 1u); else { c.pc = 0x002C3550u; return; } if (c.pc != 0x001F8D64u) [[unlikely]] return; }
L_001F8D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 15232u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 15264u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0] + 272u), 0u);
    set32(c.r[3], c.r[3].w[0] - 15200u);
    st32((c.r[16].w[0] + 264u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 268u), 0u);
    st32((c.r[16].w[0] + 260u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.f[0]);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 316u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8DE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E1Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F8E1Cu) [[unlikely]] return; }
L_001F8E1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_001F8E3C; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 21u, depth + 1u); else { c.pc = 0x00200260u; return; } if (c.pc != 0x001F8E38u) [[unlikely]] return; }
L_001F8E38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F8E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 408u, depth + 1u); else { c.pc = 0x002C3590u; return; } if (c.pc != 0x001F8E44u) [[unlikely]] return; }
L_001F8E44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 14992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15264u);
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 15232u);
    st32((c.r[16].w[0] + 272u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0] + 264u), 0u);
    set32(c.r[3], c.r[3].w[0] - 15200u);
    st32((c.r[16].w[0] + 268u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 260u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.f[0]);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 316u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F8ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F8F1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001F8F00u) [[unlikely]] return; }
L_001F8F00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F8F20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F1Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F8F1Cu) [[unlikely]] return; }
L_001F8F1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F8F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13328u);  c.pc = t; return; }
L_001F8F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001F8F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x001F8F7Cu) [[unlikely]] return; }
L_001F8F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F88u); set32(c.r[4], ld32((c.r[2].w[0] - 13328u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F8F88u) [[unlikely]] return; }
L_001F8F88:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F9Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F8F9Cu) [[unlikely]] return; }
L_001F8F9C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FACu); set32(c.r[4], c.r[4].w[0] - 13312u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001F8FACu) [[unlikely]] return; }
L_001F8FAC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FC0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F8FC0u) [[unlikely]] return; }
L_001F8FC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001F8FD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_001F8FD8; } }
L_001F8FD4:
    set32(c.r[5], c.r[5].w[0] - 13282u);
    c.budget -= 1;
L_001F8FD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FE4u); set32(c.r[4], c.r[4].w[0] - 13297u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x001F8FE4u) [[unlikely]] return; }
L_001F8FE4:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FF8u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F8FF8u) [[unlikely]] return; }
L_001F8FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F9010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F902Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x001F902Cu) [[unlikely]] return; }
L_001F902C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  goto L_001F903C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F90B4; } }
L_001F903C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 24u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_001F9050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F90B4; } }
L_001F9050:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F9064; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F90B4; }
L_001F9064:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F9078; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F90A4; } }
L_001F9078:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F90B4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F90B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F909Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F909Cu) [[unlikely]] return; }
L_001F909C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F90B0; } }
L_001F90A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F90B4; } }
L_001F90B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F90B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F90D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x001F90ECu) [[unlikely]] return; }
L_001F90EC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9100u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001F9100u) [[unlikely]] return; }
L_001F9100:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F9114u) [[unlikely]] return; }
L_001F9114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F9130:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_001F9140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F915Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x001F915Cu) [[unlikely]] return; }
L_001F915C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9164u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001F9164u) [[unlikely]] return; }
L_001F9164:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F919Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x001F919Cu) [[unlikely]] return; }
L_001F919C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91A8u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001F91A8u) [[unlikely]] return; }
L_001F91A8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91BCu); st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001F91BCu) [[unlikely]] return; }
L_001F91BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F91D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F91E8u) [[unlikely]] return; }
L_001F91E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F920C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001F91F8u) [[unlikely]] return; }
L_001F91F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14816u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 5;
L_001F920C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F923Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x001F923Cu) [[unlikely]] return; }
L_001F923C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_001F9258; } }
    breakpoint(c, 0x001F9254u);
    c.budget -= 1;
L_001F9258:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_001F927C; } }
L_001F926C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_001F927C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001F9284; } }
L_001F927C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F926Cu | kUnwind; return; } goto L_001F926C; }
L_001F9284:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001F92DC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_001F929C; } }
    breakpoint(c, 0x001F9298u);
    c.budget -= 1;
L_001F929C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_001F92C4; } }
L_001F92B0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_001F92C4; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F92D0; } }
L_001F92C4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F92B0u | kUnwind; return; } goto L_001F92B0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F92D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 28u), c.r[4].w[0]);  goto L_001F92DC; }
    st32((c.r[7].w[0] + 28u), c.r[8].w[0]);
    c.budget -= 1;
L_001F92DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F92F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9318u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F9318u) [[unlikely]] return; }
L_001F9318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F933C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001F9328u) [[unlikely]] return; }
L_001F9328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14816u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 5;
L_001F933C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F934Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x001F934Cu) [[unlikely]] return; }
L_001F934C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F9370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001F9448; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[18].w[0] + 48u));  goto L_001F94A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[18].w[0] + 48u));  if (t) { goto L_001F9434; } }
L_001F93B4:
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[17].w[0] - 1u);  goto L_001F9430; }
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.f[0] = fp::add(c.f[20], c.f[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[13] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9418u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F9418u) [[unlikely]] return; }
L_001F9418:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F942Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F942Cu) [[unlikely]] return; }
L_001F942C:
    set32(c.r[3], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_001F9430:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001F9434:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[4], c.r[3].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F93B4u | kUnwind; return; } goto L_001F93B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001F94B8; } }
L_001F9448:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F94A8; } }
L_001F9454:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[16].w[0] - 1u);  goto L_001F94A4; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F94A0u) [[unlikely]] return; }
L_001F94A0:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_001F94A4:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001F94A8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[4], c.r[3].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9454u | kUnwind; return; } goto L_001F9454; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001F94B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F94E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001F9518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_001F9520; } }
L_001F9518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9520u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x001F9520u) [[unlikely]] return; }
L_001F9520:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9534u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x001F9534u) [[unlikely]] return; }
L_001F9534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F9590; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9560u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F9560u) [[unlikely]] return; }
L_001F9560:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9570u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F9570u) [[unlikely]] return; }
L_001F9570:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9590; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9590u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x001F9590u) [[unlikely]] return; }
L_001F9590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 14816u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st8((c.r[20].w[0] + 24u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[20].w[0] + 28u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F95D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F962C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14704u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F9610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9610u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x001F9610u) [[unlikely]] return; }
L_001F9610:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F9630; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F962Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F962Cu) [[unlikely]] return; }
L_001F962C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F9630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13248u);  c.pc = t; return; }
L_001F9660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001F9670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001F9680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001F9690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96A4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x001F96A4u) [[unlikely]] return; }
L_001F96A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96B0u); set32(c.r[4], ld32((c.r[2].w[0] - 13248u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F96B0u) [[unlikely]] return; }
L_001F96B0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96C4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F96C4u) [[unlikely]] return; }
L_001F96C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F96E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_001F96F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_001F9700:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_001F9710:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_001F9720:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_001F9730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9748u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F9748u) [[unlikely]] return; }
L_001F9748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F9764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9758u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x001F9758u) [[unlikely]] return; }
L_001F9758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14704u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F9764:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F97CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F97B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x001F97B0u) [[unlikely]] return; }
L_001F97B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F97D0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F97CCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F97CCu) [[unlikely]] return; }
L_001F97CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F97D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F97F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9818u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F9818u) [[unlikely]] return; }
L_001F9818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F9834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x001F9828u) [[unlikely]] return; }
L_001F9828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14704u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F9834:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9844u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x001F9844u) [[unlikely]] return; }
L_001F9844:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F9860:
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 88u), c.f[0]);  c.pc = t; return; }
L_001F9890:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 88u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_001F98A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F98BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x001F98BCu) [[unlikely]] return; }
L_001F98BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_001F98EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F9940; } }
L_001F98CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_001F98EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F98EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F98F8; } }
L_001F98EC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F98CCu | kUnwind; return; } goto L_001F98CC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F98F8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_001F9908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F9940; } }
L_001F9908:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9914u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F9914u) [[unlikely]] return; }
L_001F9914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13144u);  if (t) { goto L_001F9930; } }
L_001F9920:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_001F9930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F993C; } }
L_001F9930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9920u | kUnwind; return; } goto L_001F9920; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F993C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001F9940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F99BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14512u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F99A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F99A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x001F99A0u) [[unlikely]] return; }
L_001F99A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F99C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F99BCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F99BCu) [[unlikely]] return; }
L_001F99BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F99C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F99E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13200u);  c.pc = t; return; }
L_001F99F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A04u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x001F9A04u) [[unlikely]] return; }
L_001F9A04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A10u); set32(c.r[4], ld32((c.r[2].w[0] - 13200u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F9A10u) [[unlikely]] return; }
L_001F9A10:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A24u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9A24u) [[unlikely]] return; }
L_001F9A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9A40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_001F9A50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_001F9A60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_001F9A70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_001F9A80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_001F9A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9AA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F9AA8u) [[unlikely]] return; }
L_001F9AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F9AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9AB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x001F9AB8u) [[unlikely]] return; }
L_001F9AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F9AC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9B08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F9B08u) [[unlikely]] return; }
L_001F9B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F9B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9B18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x001F9B18u) [[unlikely]] return; }
L_001F9B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F9B24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9B34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x001F9B34u) [[unlikely]] return; }
L_001F9B34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F9B50:
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 92u), c.f[0]);  c.pc = t; return; }
L_001F9B80:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_001F9B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9BACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x001F9BACu) [[unlikely]] return; }
L_001F9BAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_001F9BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F9C30; } }
L_001F9BBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_001F9BDC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9BE8; } }
L_001F9BDC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9BBCu | kUnwind; return; } goto L_001F9BBC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F9BE8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_001F9BF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F9C30; } }
L_001F9BF8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F9C04u) [[unlikely]] return; }
L_001F9C04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13144u);  if (t) { goto L_001F9C20; } }
L_001F9C10:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_001F9C20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F9C2C; } }
L_001F9C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9C10u | kUnwind; return; } goto L_001F9C10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F9C2C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001F9C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F9CAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F9C90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C90u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001F9C90u) [[unlikely]] return; }
L_001F9C90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F9CB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9CACu); set32(c.r[5], 0u + 104u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F9CACu) [[unlikely]] return; }
L_001F9CAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F9CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13144u);  c.pc = t; return; }
L_001F9CE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9CFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00206DB0u; return; } if (c.pc != 0x001F9CFCu) [[unlikely]] return; }
L_001F9CFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D08u); set32(c.r[4], ld32((c.r[2].w[0] - 13144u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F9D08u) [[unlikely]] return; }
L_001F9D08:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D1Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9D1Cu) [[unlikely]] return; }
L_001F9D1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D2Cu); set32(c.r[5], c.r[5].w[0] - 13136u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x001F9D2Cu) [[unlikely]] return; }
L_001F9D2C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D40u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9D40u) [[unlikely]] return; }
L_001F9D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D50u); set32(c.r[5], c.r[5].w[0] - 13126u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x001F9D50u) [[unlikely]] return; }
L_001F9D50:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D64u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9D64u) [[unlikely]] return; }
L_001F9D64:
    c.f[12] = ld32((c.r[17].w[0] + 88u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D74u); set32(c.r[4], c.r[4].w[0] - 13111u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001F9D74u) [[unlikely]] return; }
L_001F9D74:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D88u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9D88u) [[unlikely]] return; }
L_001F9D88:
    c.f[12] = ld32((c.r[17].w[0] + 92u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D98u); set32(c.r[4], c.r[4].w[0] - 13099u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001F9D98u) [[unlikely]] return; }
L_001F9D98:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DACu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9DACu) [[unlikely]] return; }
L_001F9DAC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 96u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DBCu); set32(c.r[4], c.r[4].w[0] - 13082u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001F9DBCu) [[unlikely]] return; }
L_001F9DBC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DD0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9DD0u) [[unlikely]] return; }
L_001F9DD0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 97u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DE0u); set32(c.r[4], c.r[4].w[0] - 13065u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001F9DE0u) [[unlikely]] return; }
L_001F9DE0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DF4u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9DF4u) [[unlikely]] return; }
L_001F9DF4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 98u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E04u); set32(c.r[4], c.r[4].w[0] - 13050u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001F9E04u) [[unlikely]] return; }
L_001F9E04:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E18u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9E18u) [[unlikely]] return; }
L_001F9E18:
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E28u); set32(c.r[4], c.r[4].w[0] - 13036u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001F9E28u) [[unlikely]] return; }
L_001F9E28:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E3Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F9E3Cu) [[unlikely]] return; }
L_001F9E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F9E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 388u, depth + 1u); else { c.pc = 0x00206ED0u; return; } if (c.pc != 0x001F9E6Cu) [[unlikely]] return; }
L_001F9E6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 64u));  goto L_001F9E7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F9ED0; } }
L_001F9E7C:
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F9E90; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F9E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9EB0; } }
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F9EB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F9EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9ED0; } }
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F9ED0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F9ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 391u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x001F9F0Cu) [[unlikely]] return; }
L_001F9F0C:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x001F9F18u) [[unlikely]] return; }
L_001F9F18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F24u); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001F9F24u) [[unlikely]] return; }
L_001F9F24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F30u); set32(c.r[5], c.r[17].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001F9F30u) [[unlikely]] return; }
L_001F9F30:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 96u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F44u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001F9F44u) [[unlikely]] return; }
L_001F9F44:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 97u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F58u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001F9F58u) [[unlikely]] return; }
L_001F9F58:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 98u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F6Cu); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001F9F6Cu) [[unlikely]] return; }
L_001F9F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F78u); set32(c.r[5], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001F9F78u) [[unlikely]] return; }
L_001F9F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F9F90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0041(c, 398u, depth); }
L_001F9FA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0041(c, 399u, depth); }
L_001F9FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 402u, depth + 1u); else { c.pc = 0x00207090u; return; } if (c.pc != 0x001F9FCCu) [[unlikely]] return; }
L_001F9FCC:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x001F9FD8u) [[unlikely]] return; }
L_001F9FD8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FE4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001F9FE4u) [[unlikely]] return; }
L_001F9FE4:
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FF0u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001F9FF0u) [[unlikely]] return; }
L_001F9FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FF8u); set32(c.r[4], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x001F9FF8u) [[unlikely]] return; }
L_001F9FF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 2;
L_001FA000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA008u); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x001FA008u) [[unlikely]] return; }
L_001FA008:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FA024; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 2;
L_001FA018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA020u); set32(c.r[5], c.r[5].w[0] + 31040u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FA020u) [[unlikely]] return; }
L_001FA020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FA024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA02Cu); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FA02Cu) [[unlikely]] return; }
L_001FA02C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA038u); set32(c.r[5], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FA038u) [[unlikely]] return; }
L_001FA038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA044u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001FA044u) [[unlikely]] return; }
L_001FA044:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA05Cu); st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001FA05Cu) [[unlikely]] return; }
L_001FA05C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA074u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001FA074u) [[unlikely]] return; }
L_001FA074:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 100u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA08Cu); st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FA08Cu) [[unlikely]] return; }
L_001FA08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FA0A0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA0B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA0D8; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA0D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA0D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA0F8; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA0F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA0F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FA100:
    c.f[3] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[1]);  c.pc = t; return; }
L_001FA150:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_001FA170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 104u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA184u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FA184u) [[unlikely]] return; }
L_001FA184:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001FA198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 319u, depth + 1u); else { c.pc = 0x001FB1D0u; return; } if (c.pc != 0x001FA194u) [[unlikely]] return; }
L_001FA194:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001FA198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FA1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA1BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x001FA1BCu) [[unlikely]] return; }
L_001FA1BC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_001FA1D8; } }
    breakpoint(c, 0x001FA1D4u);
    c.budget -= 1;
L_001FA1D8:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_001FA1FC; } }
L_001FA1EC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_001FA1FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001FA204; } }
L_001FA1FC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA1ECu | kUnwind; return; } goto L_001FA1EC; }
L_001FA204:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001FA25C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_001FA21C; } }
    breakpoint(c, 0x001FA218u);
    c.budget -= 1;
L_001FA21C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_001FA244; } }
L_001FA230:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_001FA244; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FA250; } }
L_001FA244:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA230u | kUnwind; return; } goto L_001FA230; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA250:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  goto L_001FA25C; }
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 1;
L_001FA25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FA270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA28Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 413u, depth + 1u); else { c.pc = 0x002071E0u; return; } if (c.pc != 0x001FA28Cu) [[unlikely]] return; }
L_001FA28C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA298u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FA298u) [[unlikely]] return; }
L_001FA298:
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA2A4u); set32(c.r[4], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FA2A4u) [[unlikely]] return; }
L_001FA2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA2ACu); set32(c.r[4], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x001FA2ACu) [[unlikely]] return; }
L_001FA2AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA2BCu); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x001FA2BCu) [[unlikely]] return; }
L_001FA2BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001FA2D8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA2D4u); set32(c.r[5], c.r[5].w[0] + 31040u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FA2D4u) [[unlikely]] return; }
L_001FA2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FA2D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FA2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 104u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA318u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FA318u) [[unlikely]] return; }
L_001FA318:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001FA334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA32Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 319u, depth + 1u); else { c.pc = 0x001FB1D0u; return; } if (c.pc != 0x001FA32Cu) [[unlikely]] return; }
L_001FA32C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001FA334:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA340u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 281u, depth + 1u); else { c.pc = 0x001FA270u; return; } if (c.pc != 0x001FA340u) [[unlikely]] return; }
L_001FA340:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FA360:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[12];  if (t) { goto L_001FA67C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 348u), c.f[2]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 360u), c.f[2]);
    st32((c.r[29].w[0] + 364u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.budget -= 68;
L_001FA4A0:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA4A0u | kUnwind; return; } goto L_001FA4A0; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA4D4u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x001FA4D4u) [[unlikely]] return; }
L_001FA4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA4DCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x001FA4DCu) [[unlikely]] return; }
L_001FA4DC:
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA55Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x001FA55Cu) [[unlikely]] return; }
L_001FA55C:
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[20]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 76u));  goto L_001FA5A4; }
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA594u); set32(c.r[6], c.r[17].w[0] + 76u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FA594u) [[unlikely]] return; }
L_001FA594:
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    c.f[3] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 384u));  if (t) { goto L_001FA5AC; } }
L_001FA5A4:
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    c.f[3] = ld32((c.r[17].w[0] + 84u));
    c.budget -= 2;
L_001FA5AC:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[4] = 0u;
    c.f[6] = fp::mul(c.f[0], c.f[1]);
    c.f[7] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[8] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_001FA668; } }
L_001FA5C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[5] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[5]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[6].w[0] + 1u);  goto L_001FA664; }
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[6]);
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[0] = fp::sub(c.f[0], c.f[8]);
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FA660; } }
    c.f[3] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[3], c.f[6]);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[7]);
    c.f[2] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[8]);
    c.f[1] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 16;
L_001FA660:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001FA664:
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001FA668:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA5C8u | kUnwind; return; } goto L_001FA5C8; }
L_001FA67C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_001FA6A0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 16u), c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.f[0]);  c.pc = t; return; }
L_001FA730:
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), 0u);  c.pc = t; return; }
L_001FA750:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[23] = c.f[12];  if (t) { goto L_001FAAC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 348u), c.f[2]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 360u), c.f[2]);
    st32((c.r[29].w[0] + 364u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.budget -= 68;
L_001FA89C:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA89Cu | kUnwind; return; } goto L_001FA89C; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8D0u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x001FA8D0u) [[unlikely]] return; }
L_001FA8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8D8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x001FA8D8u) [[unlikely]] return; }
L_001FA8D8:
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA958u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x001FA958u) [[unlikely]] return; }
L_001FA958:
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 180u));
    c.f[22] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[17].w[0] + 48u), c.f[20]);
    st32((c.r[17].w[0] + 52u), c.f[21]);
    st32((c.r[17].w[0] + 56u), c.f[22]);
    st32((c.r[17].w[0] + 60u), c.f[23]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 76u));  goto L_001FA9A0; }
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA990u); set32(c.r[6], c.r[17].w[0] + 76u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FA990u) [[unlikely]] return; }
L_001FA990:
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    c.f[4] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 384u));  if (t) { goto L_001FA9A8; } }
L_001FA9A0:
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    c.f[4] = ld32((c.r[17].w[0] + 84u));
    c.budget -= 2;
L_001FA9A8:
    c.f[3] = ld32((c.r[17].w[0] + 28u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[3] = fp::mul(c.f[3], c.f[4]);  if (t) { goto L_001FAAB0; } }
L_001FA9C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[5].w[0] + 20u));
    c.f[8] = fp::sub(c.f[23], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[8]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[7].w[0] + 1u);  goto L_001FAAAC; }
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[6] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[6] = fp::sub(c.f[6], c.f[20]);
    c.f[5] = fp::sub(c.f[5], c.f[21]);
    c.f[4] = fp::sub(c.f[4], c.f[22]);
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[4] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FAAA8; } }
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = fp::sub(c.f[6], c.f[1]);
    c.f[5] = fp::sub(c.f[5], c.f[2]);
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[5]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FAAA8; } }
    c.f[7] = ld32((c.r[17].w[0] + 88u));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[5] = fp::mul(c.f[7], c.f[1]);
    c.f[5] = fp::mul(c.f[8], c.f[5]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    st32((c.r[5].w[0]), c.f[4]);
    c.f[4] = fp::mul(c.f[7], c.f[2]);
    c.f[6] = fp::mul(c.f[8], c.f[4]);
    c.f[4] = fp::mul(c.f[7], c.f[3]);
    c.f[5] = fp::mul(c.f[8], c.f[4]);
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = fp::add(c.f[4], c.f[6]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = fp::add(c.f[4], c.f[5]);
    st32((c.r[5].w[0] + 8u), c.f[4]);
    c.budget -= 16;
L_001FAAA8:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001FAAAC:
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001FAAB0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA9C8u | kUnwind; return; } goto L_001FA9C8; }
L_001FAAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_001FAAF0:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 48u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.f[25] = c.f[12];  if (t) { goto L_001FB184; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 32u));  goto L_001FAB64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001FB188; } }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 1;
L_001FAB64:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[3].w[0] + 112u));  goto L_001FABC4; }
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FABC0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 98u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FABC0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FABB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABA8u);  if (depth < kMaxDepth) unit_003E(c, 301u, depth + 1u); else { c.pc = 0x001FA750u; return; } if (c.pc != 0x001FABA8u) [[unlikely]] return; }
L_001FABA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FABB8; } }
L_001FABB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABB8u);  if (depth < kMaxDepth) unit_003E(c, 292u, depth + 1u); else { c.pc = 0x001FA360u; return; } if (c.pc != 0x001FABB8u) [[unlikely]] return; }
L_001FABB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB184; } }
L_001FABC0:
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.budget -= 1;
L_001FABC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 420u), c.f[2]);
    st32((c.r[29].w[0] + 424u), c.f[1]);
    st32((c.r[29].w[0] + 428u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 432u), c.f[2]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 444u), c.f[2]);
    st32((c.r[29].w[0] + 448u), c.f[1]);
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 456u), c.f[2]);
    st32((c.r[29].w[0] + 460u), c.f[1]);
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 468u), c.f[2]);
    st32((c.r[29].w[0] + 472u), c.f[1]);
    st32((c.r[29].w[0] + 476u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 352u), c.f[3]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    st32((c.r[29].w[0] + 364u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 368u), c.f[3]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 384u), c.f[3]);
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 396u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 412u), c.f[0]);
    c.budget -= 66;
L_001FACCC:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FACCCu | kUnwind; return; } goto L_001FACCC; } }
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 316u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD00u); st32((c.r[29].w[0] + 332u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x001FAD00u) [[unlikely]] return; }
L_001FAD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD08u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x001FAD08u) [[unlikely]] return; }
L_001FAD08:
    set32(c.r[3], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD88u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x001FAD88u) [[unlikely]] return; }
L_001FAD88:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 276u));
    c.f[22] = ld32((c.r[29].w[0] + 280u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = ld32((c.r[29].w[0] + 272u));  if (t) { goto L_001FADBC; } }
    set32(c.r[4], c.r[29].w[0] + 488u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADACu); set32(c.r[6], c.r[19].w[0] + 76u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FADACu) [[unlikely]] return; }
L_001FADAC:
    c.f[8] = ld32((c.r[29].w[0] + 492u));
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[7] = ld32((c.r[29].w[0] + 488u));  if (t) { goto L_001FADC8; } }
L_001FADBC:
    c.f[7] = ld32((c.r[19].w[0] + 76u));
    c.f[8] = ld32((c.r[19].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    c.budget -= 3;
L_001FADC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[29] = ld32((c.r[3].w[0] + 31024u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[30] = ld32((c.r[4].w[0] + 31028u));
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[31] = ld32((c.r[3].w[0] + 31032u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[3].w[0] + 11480u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001FAE18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 11484u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FAE18; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001FAE18:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_001FAE40; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[2] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 11488u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FAE3C; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001FAE3C:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001FAE40:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 48u), c.f[20]);  goto L_001FAEB4; }
    c.f[2] = ld32((c.r[19].w[0] + 60u));
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAEB0; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAEB0; } }
    c.f[4] = fp::sub(c.f[20], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::sub(c.f[25], c.f[2]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[1], c.f[2]);
    c.f[6] = ld32((c.r[19].w[0] + 92u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[5] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    c.f[2] = fp::sub(c.f[21], c.f[2]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    c.f[29] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::sub(c.f[22], c.f[5]);
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    c.f[30] = fp::mul(c.f[3], c.f[2]);
    c.f[31] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 17;
L_001FAEB0:
    st32((c.r[19].w[0] + 48u), c.f[20]);
    c.budget -= 1;
L_001FAEB4:
    st32((c.r[19].w[0] + 52u), c.f[21]);
    st32((c.r[19].w[0] + 56u), c.f[22]);
    st32((c.r[19].w[0] + 60u), c.f[25]);
    c.f[2] = ld32((c.r[19].w[0] + 28u));
    c.f[1] = fp::mul(c.f[2], c.f[7]);
    c.f[29] = fp::add(c.f[29], c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[8]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[30] = fp::add(c.f[30], c.f[1]);
    c.f[31] = fp::add(c.f[31], c.f[0]);
    c.facc = fp::mul(c.f[29], c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[30]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[31], c.f[31]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FB184; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::mul(c.f[29], c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[30]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[31], c.f[31]));
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 98u));
    fpu_div(c, 24u, c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[29], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = fp::mul(c.f[30], c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[1] = fp::mul(c.f[31], c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 152u), c.f[1]);  if (t) { goto L_001FAF48; } }
    c.f[1] = ld32((c.r[28].w[0] - 32608u));
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF48u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x001FAF48u) [[unlikely]] return; }
L_001FAF48:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FB170; } }
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 1;
L_001FAF58:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    c.f[23] = fp::sub(c.f[25], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_001FB16C; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::sub(c.f[0], c.f[20]);
    c.f[3] = fp::sub(c.f[1], c.f[21]);
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 36u));
    c.budget -= 17;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[19].w[0] + 98u));  goto L_001FAFE0; }
    c.f[1] = ld32((c.r[19].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB168; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 98u));
    c.budget -= 1;
L_001FAFE0:
    c.f[26] = c.f[29];
    c.f[27] = c.f[30];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.f[28] = c.f[31];  if (t) { goto L_001FB048; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 5u, c.f[1], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FB168; } }
    c.f[26] = fp::mul(c.f[4], c.f[24]);
    c.f[27] = fp::mul(c.f[3], c.f[24]);
    c.f[28] = fp::mul(c.f[2], c.f[24]);
    c.budget -= 3;
L_001FB048:
    c.f[1] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 140u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = fp::sub(c.f[1], c.f[26]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::sub(c.f[1], c.f[27]);
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = fp::sub(c.f[1], c.f[28]);
    c.facc = fp::mul(c.f[26], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[28], c.f[1]));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB168; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[2] = ld32((c.r[19].w[0] + 88u));  goto L_001FB12C; }
    c.f[13] = ld32((c.r[19].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FB128; } }
    st32((c.r[29].w[0] + 508u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 508u)));
    c.r[5].d[0] = c.r[2].d[0] | 23007ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 504u), c.r[4].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 504u));
    c.f[2] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::add(c.f[4], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 508u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB124u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x001FB124u) [[unlikely]] return; }
L_001FB124:
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    c.budget -= 1;
L_001FB128:
    c.f[2] = ld32((c.r[19].w[0] + 88u));
    c.budget -= 1;
L_001FB12C:
    c.f[0] = fp::mul(c.f[2], c.f[26]);
    c.f[1] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[28]);
    c.f[0] = fp::mul(c.f[2], c.f[27]);
    c.f[2] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = fp::mul(c.f[23], c.f[1]);
    c.f[2] = fp::add(c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_001FB168:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FB16C:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001FB170:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FAF58u | kUnwind; return; } goto L_001FAF58; }
L_001FB184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001FB188:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_001FB1D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB1E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 415u, depth + 1u); else { c.pc = 0x00207240u; return; } if (c.pc != 0x001FB1E4u) [[unlikely]] return; }
L_001FB1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 14320u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[2].w[0] + 31040u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 31044u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB22Cu); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FB22Cu) [[unlikely]] return; }
L_001FB22C:
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB238u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FB238u) [[unlikely]] return; }
L_001FB238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB240u); set32(c.r[4], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x001FB240u) [[unlikely]] return; }
L_001FB240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB250u); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x001FB250u) [[unlikely]] return; }
L_001FB250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FB268; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB268u); set32(c.r[5], c.r[5].w[0] + 31040u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x001FB268u) [[unlikely]] return; }
L_001FB268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[2].w[0] + 11480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 11484u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 11488u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FB2FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FB2E0u) [[unlikely]] return; }
L_001FB2E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FB300; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2FCu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FB2FCu) [[unlikely]] return; }
L_001FB2FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FB300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FB37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001FB360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB360u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x001FB360u) [[unlikely]] return; }
L_001FB360:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FB380; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB37Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FB37Cu) [[unlikely]] return; }
L_001FB37C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FB380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB3A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13000u);  c.pc = t; return; }
L_001FB3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x001FB3C4u) [[unlikely]] return; }
L_001FB3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3D0u); set32(c.r[4], ld32((c.r[2].w[0] - 13000u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FB3D0u) [[unlikely]] return; }
L_001FB3D0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3E4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB3E4u) [[unlikely]] return; }
L_001FB3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB400:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_001FB410:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_001FB420:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_001FB430:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_001FB440:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_001FB450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB468u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FB468u) [[unlikely]] return; }
L_001FB468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x001FB478u) [[unlikely]] return; }
L_001FB478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001FB484:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FB4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FB4C8u) [[unlikely]] return; }
L_001FB4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x001FB4D8u) [[unlikely]] return; }
L_001FB4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001FB4E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x001FB4F4u) [[unlikely]] return; }
L_001FB4F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FB510:
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 100u), c.f[0]);  c.pc = t; return; }
L_001FB540:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_001FB550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB56Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x001FB56Cu) [[unlikely]] return; }
L_001FB56C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_001FB59C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FB5F0; } }
L_001FB57C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_001FB59C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FB59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB5A8; } }
L_001FB59C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FB57Cu | kUnwind; return; } goto L_001FB57C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB5A8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_001FB5B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FB5F0; } }
L_001FB5B8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FB5C4u) [[unlikely]] return; }
L_001FB5C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13144u);  if (t) { goto L_001FB5E0; } }
L_001FB5D0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_001FB5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FB5EC; } }
L_001FB5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FB5D0u | kUnwind; return; } goto L_001FB5D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB5EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001FB5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FB65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB640u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x001FB640u) [[unlikely]] return; }
L_001FB640:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FB660; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB65Cu); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001FB65Cu) [[unlikely]] return; }
L_001FB65C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FB660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12960u);  c.pc = t; return; }
L_001FB690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x001FB6ACu) [[unlikely]] return; }
L_001FB6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6B8u); set32(c.r[4], ld32((c.r[2].w[0] - 12960u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001FB6B8u) [[unlikely]] return; }
L_001FB6B8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6CCu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB6CCu) [[unlikely]] return; }
L_001FB6CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB6E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_001FB6E4; } }
L_001FB6E0:
    set32(c.r[5], c.r[5].w[0] - 12932u);
    c.budget -= 1;
L_001FB6E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6F0u); set32(c.r[4], c.r[4].w[0] - 12944u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x001FB6F0u) [[unlikely]] return; }
L_001FB6F0:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB704u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB704u) [[unlikely]] return; }
L_001FB704:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB714u); set32(c.r[5], c.r[5].w[0] - 12927u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x001FB714u) [[unlikely]] return; }
L_001FB714:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB728u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB728u) [[unlikely]] return; }
L_001FB728:
    c.f[12] = ld32((c.r[17].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB738u); set32(c.r[4], c.r[4].w[0] - 12917u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FB738u) [[unlikely]] return; }
L_001FB738:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB74Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB74Cu) [[unlikely]] return; }
L_001FB74C:
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB75Cu); set32(c.r[4], c.r[4].w[0] - 12911u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x001FB75Cu) [[unlikely]] return; }
L_001FB75C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB770u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB770u) [[unlikely]] return; }
L_001FB770:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB7AC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB7A4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FB7B4; } }
L_001FB79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 12904u);  if (t) { goto L_001FB7B8; } }
L_001FB7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 12899u);  if (t) { goto L_001FB7B8; } }
L_001FB7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 12892u);  if (t) { goto L_001FB7B8; } }
L_001FB7B4:
    set32(c.r[5], c.r[5].w[0] - 12880u);
    c.budget -= 1;
L_001FB7B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7C4u); set32(c.r[4], c.r[4].w[0] - 12872u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x001FB7C4u) [[unlikely]] return; }
L_001FB7C4:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7D8u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB7D8u) [[unlikely]] return; }
L_001FB7D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB814; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB80C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001FB804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001FB81C; } }
L_001FB804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 12861u);  if (t) { goto L_001FB820; } }
L_001FB80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 12851u);  if (t) { goto L_001FB820; } }
L_001FB814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 12839u);  if (t) { goto L_001FB820; } }
L_001FB81C:
    set32(c.r[5], c.r[5].w[0] - 12880u);
    c.budget -= 1;
L_001FB820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB82Cu); set32(c.r[4], c.r[4].w[0] - 12832u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x001FB82Cu) [[unlikely]] return; }
L_001FB82C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB840u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001FB840u) [[unlikely]] return; }
L_001FB840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FB860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB87Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x001FB87Cu) [[unlikely]] return; }
L_001FB87C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_001FB88C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FB99C; } }
L_001FB88C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FB8A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FB99C; }
L_001FB8A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001FB8B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FB8E0; } }
L_001FB8B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 28u));  goto L_001FB8F0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FB8EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FB8D8u) [[unlikely]] return; }
L_001FB8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FB8EC; } }
L_001FB8E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB99C; } }
L_001FB8EC:
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 1;
L_001FB8F0:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FB904; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FB924; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FB924; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB924:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_001FB948; }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FB944; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB944:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001FB948:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FB99C; }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB998; } }
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB998; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FB998; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001FB99C; }
L_001FB998:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FB9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x001FB9CCu) [[unlikely]] return; }
L_001FB9CC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FB9E0u) [[unlikely]] return; }
L_001FB9E0:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x001FB9ECu) [[unlikely]] return; }
L_001FB9EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9F8u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FB9F8u) [[unlikely]] return; }
L_001FB9F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA04u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001FBA04u) [[unlikely]] return; }
L_001FBA04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA10u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 7u, depth + 1u); else { c.pc = 0x001FC2E0u; return; } if (c.pc != 0x001FBA10u) [[unlikely]] return; }
L_001FBA10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA1Cu); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003F(c, 6u, depth + 1u); else { c.pc = 0x001FC2D0u; return; } if (c.pc != 0x001FBA1Cu) [[unlikely]] return; }
L_001FBA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FBA30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_001FBA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x001FBA5Cu) [[unlikely]] return; }
L_001FBA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001FBA64u) [[unlikely]] return; }
L_001FBA64:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FBA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x001FBA9Cu) [[unlikely]] return; }
L_001FBA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001FBAA4u) [[unlikely]] return; }
L_001FBAA4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x001FBAB0u) [[unlikely]] return; }
L_001FBAB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBABCu); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FBABCu) [[unlikely]] return; }
L_001FBABC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAC8u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001FBAC8u) [[unlikely]] return; }
L_001FBAC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAD4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 9u, depth + 1u); else { c.pc = 0x001FC300u; return; } if (c.pc != 0x001FBAD4u) [[unlikely]] return; }
L_001FBAD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAE0u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003F(c, 8u, depth + 1u); else { c.pc = 0x001FC2F0u; return; } if (c.pc != 0x001FBAE0u) [[unlikely]] return; }
L_001FBAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FBB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FBB18u) [[unlikely]] return; }
L_001FBB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FBB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FBB28u) [[unlikely]] return; }
L_001FBB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 14016u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31040u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31044u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 17;
L_001FBB6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FBB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x001FBB9Cu) [[unlikely]] return; }
L_001FBB9C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_001FBBB8; } }
    breakpoint(c, 0x001FBBB4u);
    c.budget -= 1;
L_001FBBB8:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_001FBBDC; } }
L_001FBBCC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_001FBBDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001FBBE4; } }
L_001FBBDC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBBCCu | kUnwind; return; } goto L_001FBBCC; }
L_001FBBE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_001FBBF8; } }
    breakpoint(c, 0x001FBBF4u);
    c.budget -= 1;
L_001FBBF8:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_001FBC20; } }
L_001FBC0C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_001FBC20; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FBC2C; } }
L_001FBC20:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBC0Cu | kUnwind; return; } goto L_001FBC0C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FBC2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  goto L_001FBC38; }
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 1;
L_001FBC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FBC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001FBC78u) [[unlikely]] return; }
L_001FBC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FBCCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x001FBC88u) [[unlikely]] return; }
L_001FBC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 14016u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31040u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31044u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 17;
L_001FBCCC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBCDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x001FBCDCu) [[unlikely]] return; }
L_001FBCDC:
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FBD30:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[3].w[0] + 31024u));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 48u));
    c.f[28] = c.f[12];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[29].w[0] + 496u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[29].w[0] + 500u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[29].w[0] + 504u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[29].w[0] + 480u), c.f[2]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    c.budget -= 35;
    { const bool t = c.r[5].sd[0] <= 0; st32((c.r[29].w[0] + 488u), c.f[0]);  if (t) { [[clang::musttail]] return unit_003F(c, 1u, depth); } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[24] = ld32((c.r[29].w[0] + 484u));  [[clang::musttail]] return unit_003F(c, 2u, depth); }
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 396u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 400u), c.f[2]);
    st32((c.r[29].w[0] + 404u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 412u), c.f[2]);
    st32((c.r[29].w[0] + 416u), c.f[1]);
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 424u), c.f[2]);
    st32((c.r[29].w[0] + 428u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 436u), c.f[2]);
    st32((c.r[29].w[0] + 440u), c.f[1]);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 320u), c.f[3]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.budget -= 44;
L_001FBE78:
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 352u), c.f[3]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    st32((c.r[29].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.budget -= 23;
L_001FBED4:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBED4u | kUnwind; return; } goto L_001FBED4; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 268u), 0u);
    st32((c.r[29].w[0] + 284u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF08u); st32((c.r[29].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x001FBF08u) [[unlikely]] return; }
L_001FBF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF10u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x001FBF10u) [[unlikely]] return; }
L_001FBF10:
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF90u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x001FBF90u) [[unlikely]] return; }
L_001FBF90:
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[6], c.r[19].w[0] + 28u);
    st32((c.r[29].w[0] + 496u), c.f[2]);
    st32((c.r[29].w[0] + 500u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBFB8u); st32((c.r[29].w[0] + 504u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x001FBFB8u) [[unlikely]] return; }
L_001FBFB8:
    c.f[3] = ld32((c.r[29].w[0] + 448u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    c.f[2] = ld32((c.r[29].w[0] + 456u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 480u), c.f[3]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    st32((c.r[29].w[0] + 488u), c.f[2]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    st32((c.r[29].w[0] + 488u), c.f[0]);
    c.budget -= 18;
    [[clang::musttail]] return unit_003F(c, 1u, depth);
}

}
