#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0052[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0,
    190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291,
    0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0,
    0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0,
    0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0,
};

void unit_0052(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00248000;
    case 2u: goto L_00248020;
    case 3u: goto L_002480B8;
    case 4u: goto L_00248110;
    case 5u: goto L_0024813C;
    case 6u: goto L_00248158;
    case 7u: goto L_00248178;
    case 8u: goto L_00248188;
    case 9u: goto L_00248190;
    case 10u: goto L_002481A4;
    case 11u: goto L_002481B8;
    case 12u: goto L_002481C8;
    case 13u: goto L_002481E0;
    case 14u: goto L_002481F0;
    case 15u: goto L_0024820C;
    case 16u: goto L_00248230;
    case 17u: goto L_0024824C;
    case 18u: goto L_00248260;
    case 19u: goto L_00248294;
    case 20u: goto L_002482A4;
    case 21u: goto L_002482C0;
    case 22u: goto L_002482D4;
    case 23u: goto L_002482E4;
    case 24u: goto L_00248300;
    case 25u: goto L_00248324;
    case 26u: goto L_0024834C;
    case 27u: goto L_0024835C;
    case 28u: goto L_00248378;
    case 29u: goto L_0024838C;
    case 30u: goto L_0024839C;
    case 31u: goto L_002483EC;
    case 32u: goto L_00248440;
    case 33u: goto L_00248450;
    case 34u: goto L_0024846C;
    case 35u: goto L_00248480;
    case 36u: goto L_00248490;
    case 37u: goto L_002484B0;
    case 38u: goto L_002484E0;
    case 39u: goto L_00248500;
    case 40u: goto L_00248520;
    case 41u: goto L_00248530;
    case 42u: goto L_00248550;
    case 43u: goto L_00248570;
    case 44u: goto L_00248580;
    case 45u: goto L_00248590;
    case 46u: goto L_002485B0;
    case 47u: goto L_002485D4;
    case 48u: goto L_002485E4;
    case 49u: goto L_00248610;
    case 50u: goto L_0024862C;
    case 51u: goto L_00248654;
    case 52u: goto L_00248664;
    case 53u: goto L_00248680;
    case 54u: goto L_0024869C;
    case 55u: goto L_002486B0;
    case 56u: goto L_002486D0;
    case 57u: goto L_002486F4;
    case 58u: goto L_00248700;
    case 59u: goto L_00248720;
    case 60u: goto L_00248730;
    case 61u: goto L_00248740;
    case 62u: goto L_0024875C;
    case 63u: goto L_00248790;
    case 64u: goto L_002487E4;
    case 65u: goto L_00248800;
    case 66u: goto L_00248850;
    case 67u: goto L_002488CC;
    case 68u: goto L_002488E0;
    case 69u: goto L_002488F0;
    case 70u: goto L_00248900;
    case 71u: goto L_00248910;
    case 72u: goto L_00248920;
    case 73u: goto L_00248930;
    case 74u: goto L_00248A20;
    case 75u: goto L_00248A30;
    case 76u: goto L_00248A40;
    case 77u: goto L_00248A50;
    case 78u: goto L_00248AA8;
    case 79u: goto L_00248AB8;
    case 80u: goto L_00248AD4;
    case 81u: goto L_00248AE0;
    case 82u: goto L_00248AFC;
    case 83u: goto L_00248B20;
    case 84u: goto L_00248B30;
    case 85u: goto L_00248B44;
    case 86u: goto L_00248B50;
    case 87u: goto L_00248B64;
    case 88u: goto L_00248B80;
    case 89u: goto L_00248B90;
    case 90u: goto L_00248BA0;
    case 91u: goto L_00248BB0;
    case 92u: goto L_00248BC0;
    case 93u: goto L_00248BD0;
    case 94u: goto L_00248BE8;
    case 95u: goto L_00248BFC;
    case 96u: goto L_00248C30;
    case 97u: goto L_00248C58;
    case 98u: goto L_00248C6C;
    case 99u: goto L_00248C90;
    case 100u: goto L_00248CB0;
    case 101u: goto L_00248D68;
    case 102u: goto L_00248DAC;
    case 103u: goto L_00248DE4;
    case 104u: goto L_00248E20;
    case 105u: goto L_00248EB0;
    case 106u: goto L_00248EC4;
    case 107u: goto L_00248EF0;
    case 108u: goto L_00248F00;
    case 109u: goto L_00248F14;
    case 110u: goto L_00248F20;
    case 111u: goto L_00248F34;
    case 112u: goto L_00248F50;
    case 113u: goto L_00248F6C;
    case 114u: goto L_00248FA0;
    case 115u: goto L_00248FBC;
    case 116u: goto L_00248FC8;
    case 117u: goto L_00248FE0;
    case 118u: goto L_00248FF0;
    case 119u: goto L_00249000;
    case 120u: goto L_0024901C;
    case 121u: goto L_00249028;
    case 122u: goto L_00249040;
    case 123u: goto L_00249058;
    case 124u: goto L_00249068;
    case 125u: goto L_002490A0;
    case 126u: goto L_002490C8;
    case 127u: goto L_002490D8;
    case 128u: goto L_0024910C;
    case 129u: goto L_00249170;
    case 130u: goto L_00249180;
    case 131u: goto L_002491B0;
    case 132u: goto L_002491CC;
    case 133u: goto L_002491F0;
    case 134u: goto L_00249220;
    case 135u: goto L_0024923C;
    case 136u: goto L_00249260;
    case 137u: goto L_00249270;
    case 138u: goto L_0024928C;
    case 139u: goto L_00249298;
    case 140u: goto L_002492AC;
    case 141u: goto L_002492BC;
    case 142u: goto L_002492D0;
    case 143u: goto L_002492F0;
    case 144u: goto L_0024930C;
    case 145u: goto L_002493D0;
    case 146u: goto L_002493EC;
    case 147u: goto L_002493F8;
    case 148u: goto L_00249404;
    case 149u: goto L_00249420;
    case 150u: goto L_00249430;
    case 151u: goto L_00249440;
    case 152u: goto L_0024945C;
    case 153u: goto L_00249468;
    case 154u: goto L_00249474;
    case 155u: goto L_00249490;
    case 156u: goto L_002494A8;
    case 157u: goto L_002494C0;
    case 158u: goto L_00249500;
    case 159u: goto L_0024951C;
    case 160u: goto L_00249560;
    case 161u: goto L_00249588;
    case 162u: goto L_002495A0;
    case 163u: goto L_002495D4;
    case 164u: goto L_00249620;
    case 165u: goto L_00249640;
    case 166u: goto L_00249660;
    case 167u: goto L_00249680;
    case 168u: goto L_002496A0;
    case 169u: goto L_002496C0;
    case 170u: goto L_002496E0;
    case 171u: goto L_00249778;
    case 172u: goto L_002497E0;
    case 173u: goto L_002497F0;
    case 174u: goto L_00249800;
    case 175u: goto L_00249820;
    case 176u: goto L_00249860;
    case 177u: goto L_002498A0;
    case 178u: goto L_002498BC;
    case 179u: goto L_002498E0;
    case 180u: goto L_002498F0;
    case 181u: goto L_00249904;
    case 182u: goto L_00249910;
    case 183u: goto L_00249924;
    case 184u: goto L_00249940;
    case 185u: goto L_0024995C;
    case 186u: goto L_0024996C;
    case 187u: goto L_002499C0;
    case 188u: goto L_002499DC;
    case 189u: goto L_002499EC;
    case 190u: goto L_00249A00;
    case 191u: goto L_00249A10;
    case 192u: goto L_00249A20;
    case 193u: goto L_00249A3C;
    case 194u: goto L_00249A4C;
    case 195u: goto L_00249A60;
    case 196u: goto L_00249A78;
    case 197u: goto L_00249A94;
    case 198u: goto L_00249AA8;
    case 199u: goto L_00249AE0;
    case 200u: goto L_00249B08;
    case 201u: goto L_00249B24;
    case 202u: goto L_00249B38;
    case 203u: goto L_00249B64;
    case 204u: goto L_00249B68;
    case 205u: goto L_00249BB0;
    case 206u: goto L_00249BC0;
    case 207u: goto L_00249C58;
    case 208u: goto L_00249CC0;
    case 209u: goto L_00249D00;
    case 210u: goto L_00249D1C;
    case 211u: goto L_00249D40;
    case 212u: goto L_00249D50;
    case 213u: goto L_00249D64;
    case 214u: goto L_00249D70;
    case 215u: goto L_00249D84;
    case 216u: goto L_00249DA0;
    case 217u: goto L_00249DBC;
    case 218u: goto L_00249DCC;
    case 219u: goto L_00249E20;
    case 220u: goto L_00249E3C;
    case 221u: goto L_00249E4C;
    case 222u: goto L_00249E60;
    case 223u: goto L_00249E70;
    case 224u: goto L_00249E80;
    case 225u: goto L_00249E9C;
    case 226u: goto L_00249EAC;
    case 227u: goto L_00249EC0;
    case 228u: goto L_00249ED8;
    case 229u: goto L_00249EF4;
    case 230u: goto L_00249F08;
    case 231u: goto L_00249F40;
    case 232u: goto L_00249F70;
    case 233u: goto L_00249F8C;
    case 234u: goto L_00249FB0;
    case 235u: goto L_00249FD8;
    case 236u: goto L_00249FF4;
    case 237u: goto L_0024A008;
    case 238u: goto L_0024A034;
    case 239u: goto L_0024A038;
    case 240u: goto L_0024A080;
    case 241u: goto L_0024A090;
    case 242u: goto L_0024A110;
    case 243u: goto L_0024A140;
    case 244u: goto L_0024A180;
    case 245u: goto L_0024A19C;
    case 246u: goto L_0024A1C0;
    case 247u: goto L_0024A1D0;
    case 248u: goto L_0024A1E4;
    case 249u: goto L_0024A1F0;
    case 250u: goto L_0024A204;
    case 251u: goto L_0024A220;
    case 252u: goto L_0024A23C;
    case 253u: goto L_0024A24C;
    case 254u: goto L_0024A2A0;
    case 255u: goto L_0024A2BC;
    case 256u: goto L_0024A2CC;
    case 257u: goto L_0024A2E0;
    case 258u: goto L_0024A2F0;
    case 259u: goto L_0024A300;
    case 260u: goto L_0024A31C;
    case 261u: goto L_0024A32C;
    case 262u: goto L_0024A340;
    case 263u: goto L_0024A358;
    case 264u: goto L_0024A374;
    case 265u: goto L_0024A388;
    case 266u: goto L_0024A3C0;
    case 267u: goto L_0024A3F0;
    case 268u: goto L_0024A40C;
    case 269u: goto L_0024A430;
    case 270u: goto L_0024A458;
    case 271u: goto L_0024A474;
    case 272u: goto L_0024A488;
    case 273u: goto L_0024A4B4;
    case 274u: goto L_0024A4B8;
    case 275u: goto L_0024A500;
    case 276u: goto L_0024A510;
    case 277u: goto L_0024A5A0;
    case 278u: goto L_0024A5F0;
    case 279u: goto L_0024A630;
    case 280u: goto L_0024A64C;
    case 281u: goto L_0024A670;
    case 282u: goto L_0024A680;
    case 283u: goto L_0024A694;
    case 284u: goto L_0024A6A0;
    case 285u: goto L_0024A6B4;
    case 286u: goto L_0024A6D0;
    case 287u: goto L_0024A6EC;
    case 288u: goto L_0024A6FC;
    case 289u: goto L_0024A750;
    case 290u: goto L_0024A76C;
    case 291u: goto L_0024A77C;
    case 292u: goto L_0024A790;
    case 293u: goto L_0024A7A0;
    case 294u: goto L_0024A7B0;
    case 295u: goto L_0024A7CC;
    case 296u: goto L_0024A7DC;
    case 297u: goto L_0024A7F0;
    case 298u: goto L_0024A808;
    case 299u: goto L_0024A82C;
    case 300u: goto L_0024A840;
    case 301u: goto L_0024A870;
    case 302u: goto L_0024A8A0;
    case 303u: goto L_0024A8BC;
    case 304u: goto L_0024A8E0;
    case 305u: goto L_0024A908;
    case 306u: goto L_0024A92C;
    case 307u: goto L_0024A940;
    case 308u: goto L_0024A96C;
    case 309u: goto L_0024A970;
    case 310u: goto L_0024A9B0;
    case 311u: goto L_0024A9C0;
    case 312u: goto L_0024AAC4;
    case 313u: goto L_0024AB0C;
    case 314u: goto L_0024AB24;
    case 315u: goto L_0024AB2C;
    case 316u: goto L_0024AB7C;
    case 317u: goto L_0024AC40;
    case 318u: goto L_0024AC50;
    case 319u: goto L_0024AC6C;
    case 320u: goto L_0024AC78;
    case 321u: goto L_0024AC8C;
    case 322u: goto L_0024AC9C;
    case 323u: goto L_0024ACB0;
    case 324u: goto L_0024ACC0;
    case 325u: goto L_0024ACD4;
    case 326u: goto L_0024ACF0;
    case 327u: goto L_0024AD0C;
    case 328u: goto L_0024AD50;
    case 329u: goto L_0024AD6C;
    case 330u: goto L_0024AD78;
    case 331u: goto L_0024AD90;
    case 332u: goto L_0024AD9C;
    case 333u: goto L_0024ADB4;
    case 334u: goto L_0024ADD0;
    case 335u: goto L_0024ADE0;
    case 336u: goto L_0024ADF0;
    case 337u: goto L_0024AE0C;
    case 338u: goto L_0024AE18;
    case 339u: goto L_0024AE30;
    case 340u: goto L_0024AE44;
    case 341u: goto L_0024AE50;
    case 342u: goto L_0024AE68;
    case 343u: goto L_0024AE7C;
    case 344u: goto L_0024AE90;
    case 345u: goto L_0024AEA8;
    case 346u: goto L_0024AEB8;
    case 347u: goto L_0024AEF0;
    case 348u: goto L_0024AF44;
    case 349u: goto L_0024B4B0;
    case 350u: goto L_0024B4C0;
    case 351u: goto L_0024B4FC;
    case 352u: goto L_0024B50C;
    case 353u: goto L_0024B590;
    case 354u: goto L_0024B5C8;
    case 355u: goto L_0024BB24;
    case 356u: goto L_0024BB58;
    case 357u: goto L_0024BB68;
    case 358u: goto L_0024BBD0;
    case 359u: goto L_0024BC04;
    case 360u: goto L_0024BC10;
    case 361u: goto L_0024BC1C;
    case 362u: goto L_0024BC38;
    case 363u: goto L_0024BC50;
    case 364u: goto L_0024BC60;
    case 365u: goto L_0024BC70;
    case 366u: goto L_0024BC80;
    case 367u: goto L_0024BC9C;
    case 368u: goto L_0024BCA8;
    case 369u: goto L_0024BCBC;
    case 370u: goto L_0024BCCC;
    case 371u: goto L_0024BCE0;
    case 372u: goto L_0024BCF0;
    case 373u: goto L_0024BD04;
    case 374u: goto L_0024BD20;
    case 375u: goto L_0024BD3C;
    case 376u: goto L_0024BD90;
    case 377u: goto L_0024BDAC;
    case 378u: goto L_0024BDB8;
    case 379u: goto L_0024BDC4;
    case 380u: goto L_0024BDE0;
    case 381u: goto L_0024BDF0;
    case 382u: goto L_0024BE00;
    case 383u: goto L_0024BE1C;
    case 384u: goto L_0024BE28;
    case 385u: goto L_0024BE34;
    case 386u: goto L_0024BE50;
    case 387u: goto L_0024BE68;
    case 388u: goto L_0024BE80;
    case 389u: goto L_0024BEB0;
    case 390u: goto L_0024BECC;
    case 391u: goto L_0024BEF0;
    case 392u: goto L_0024BF18;
    case 393u: goto L_0024BF30;
    case 394u: goto L_0024BF54;
    case 395u: goto L_0024BF80;
    case 396u: goto L_0024BFA0;
    case 397u: goto L_0024BFC0;
    case 398u: goto L_0024BFE0;
    case 399u: goto L_0024BFF0;
    default: bad_entry(c, 0x00248000u); return;
    }
L_00248000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00248020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00248078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13592u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_0024806C; }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002480F0; } }
L_0024806C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002480F0; } }
L_00248078:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_00248098; }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002480A4; } }
L_00248098:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002480A4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002480C4; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480B8u); set32(c.r[7], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0052(c, 65u, depth + 1u); else { c.pc = 0x00248800u; return; } if (c.pc != 0x002480B8u) [[unlikely]] return; }
L_002480B8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002480C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13592u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_002480E4; }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002480F0; } }
L_002480E4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 3;
L_002480F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024813Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 223u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x0024813Cu) [[unlikely]] return; }
L_0024813C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024820C; } }
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248158u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002471E0u; return; } if (c.pc != 0x00248158u) [[unlikely]] return; }
L_00248158:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 20u), 0u);  goto L_002481CC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_002481A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248178u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00248178u) [[unlikely]] return; }
L_00248178:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248188u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00248188u) [[unlikely]] return; }
L_00248188:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002481A4; } }
    goto L_00248194;
L_00248190:
    c.budget -= 1;
L_00248194:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002481A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002481A4u) [[unlikely]] return; }
L_002481A4:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_002481A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002481C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002481B8u) [[unlikely]] return; }
L_002481B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002481C8u) [[unlikely]] return; }
L_002481C8:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_002481CC:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00248210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002481E0u) [[unlikely]] return; }
L_002481E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481F0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002481F0u) [[unlikely]] return; }
L_002481F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024820C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024820Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024820Cu) [[unlikely]] return; }
L_0024820C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00248230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00248250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024824Cu);  if (depth < kMaxDepth) unit_0051(c, 327u, depth + 1u); else { c.pc = 0x00247470u; return; } if (c.pc != 0x0024824Cu) [[unlikely]] return; }
L_0024824C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00248250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00248260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002482E4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002482C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248294u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00248294u) [[unlikely]] return; }
L_00248294:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482A4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002482A4u) [[unlikely]] return; }
L_002482A4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002482C0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002482C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002482C0u) [[unlikely]] return; }
L_002482C0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002482C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_002482E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002482D4u) [[unlikely]] return; }
L_002482D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002482E4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002482E4u) [[unlikely]] return; }
L_002482E4:
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00248494; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00248324:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_002483AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024839C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024837C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024834Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024834Cu) [[unlikely]] return; }
L_0024834C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024835Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024835Cu) [[unlikely]] return; }
L_0024835C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00248378; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248378u) [[unlikely]] return; }
L_00248378:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024837C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 16u), 0u);  if (t) { goto L_0024839C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024838Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024838Cu) [[unlikely]] return; }
L_0024838C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024839Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024839Cu) [[unlikely]] return; }
L_0024839C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 13592u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00248494; } }
L_002483AC:
    c.r[16].d[0] = ld8((c.r[6].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002483C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00248420; } }
L_002483C4:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[4].d[0] & 255ull;  goto L_002483DC; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00248420; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_002483DC:
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00248404; } }
L_002483EC:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00248404; }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_00248404:
    c.r[3].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00248420; } }
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x002483ECu | kUnwind; return; } goto L_002483EC; }
L_00248420:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00248498; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));  goto L_00248494; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00248470; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248440u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00248440u) [[unlikely]] return; }
L_00248440:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248450u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00248450u) [[unlikely]] return; }
L_00248450:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024846C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024846Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024846Cu) [[unlikely]] return; }
L_0024846C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00248470:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 16u), 0u);  if (t) { goto L_00248490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248480u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00248480u) [[unlikely]] return; }
L_00248480:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248490u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00248490u) [[unlikely]] return; }
L_00248490:
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00248494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00248498:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002484B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002484C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002484D4; } }
L_002484C4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13592u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002484D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002484E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002484F0; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_002484F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248500:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00248510; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_00248510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 5u);  c.pc = t; return; }
L_00248530:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00248540; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00248540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248550:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00248560; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00248560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00248580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00248590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002485B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x002485B0u) [[unlikely]] return; }
L_002485B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2704u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 16u), 0u);  if (t) { goto L_002485E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002485D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002485D4u) [[unlikely]] return; }
L_002485D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002485E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002485E4u) [[unlikely]] return; }
L_002485E4:
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024862Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0024862Cu) [[unlikely]] return; }
L_0024862C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13592u));
    set32(c.r[3], c.r[3].w[0] - 2704u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (t) { goto L_00248664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248654u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00248654u) [[unlikely]] return; }
L_00248654:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248664u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00248664u) [[unlikely]] return; }
L_00248664:
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024869Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 289u, depth + 1u); else { c.pc = 0x0023B020u; return; } if (c.pc != 0x0024869Cu) [[unlikely]] return; }
L_0024869C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002486B0u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002486B0u) [[unlikely]] return; }
L_002486B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002486D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002486F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002486F4u) [[unlikely]] return; }
L_002486F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248700u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00248700u) [[unlikely]] return; }
L_00248700:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00248740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024875Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 288u, depth + 1u); else { c.pc = 0x0023B000u; return; } if (c.pc != 0x0024875Cu) [[unlikely]] return; }
L_0024875C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00248774; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00248774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002487EC; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[6].w[0] - 1u);  goto L_002487B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));  if (t) { goto L_002487F0; } }
L_002487B8:
    c.r[2].d[0] = c.r[8].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[29].w[0] + 28u);  goto L_002487DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));  if (t) { goto L_002487F0; } }
L_002487DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002487E4u); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0052(c, 65u, depth + 1u); else { c.pc = 0x00248800u; return; } if (c.pc != 0x002487E4u) [[unlikely]] return; }
L_002487E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002487F4; } }
L_002487EC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28288u));
    c.budget -= 1;
L_002487F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002487F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00248818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));  if (t) { goto L_002488D0; } }
L_00248818:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[6].w[0] - 1u);  if (t) { goto L_00248840; } }
    st32((c.r[7].w[0]), 0u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.budget -= 2;
L_00248840:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 1u);  if (t) { goto L_00248878; } }
L_00248850:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_00248888; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.f[1] = c.f[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00248878:
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248850u | kUnwind; return; } goto L_00248850; }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 1;
L_00248888:
    set32(c.r[7], ld32((c.r[7].w[0])));
    mmi::mult(c, 1, c.r[6].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 31u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + 13640u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002488CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002488CCu) [[unlikely]] return; }
L_002488CC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.budget -= 1;
L_002488D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002488E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002488F0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28288u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00248900:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28288u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00248910:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28288u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00248920:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248930:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28292u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);  goto L_00248944; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00248A0C; } }
L_00248944:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] - 30928u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13352u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 30944u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14216u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] - 30144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14360u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[5], c.r[5].w[0] - 30160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14504u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] - 30176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14648u), c.r[4].w[0]);
    set32(c.r[5], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st8((c.r[3].w[0] + 14990u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 13496u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 30448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 13640u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 30464u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 13784u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 30480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 13928u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 30912u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 14072u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 30496u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 14936u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 14792u), 0u);
    c.budget -= 50;
L_00248A0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00248A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00248A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00248AFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 2512u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00248AE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 2704u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00248AD4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00248AD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248AA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00248AA8u) [[unlikely]] return; }
L_00248AA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248AB8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00248AB8u) [[unlikely]] return; }
L_00248AB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00248AD4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00248AD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00248AD4u) [[unlikely]] return; }
L_00248AD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248AE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 274u, depth + 1u); else { c.pc = 0x002622E0u; return; } if (c.pc != 0x00248AE0u) [[unlikely]] return; }
L_00248AE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00248B00; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248AFCu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00248AFCu) [[unlikely]] return; }
L_00248AFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00248B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11280u);  c.pc = t; return; }
L_00248B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B44u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 378u, depth + 1u); else { c.pc = 0x00247AD0u; return; } if (c.pc != 0x00248B44u) [[unlikely]] return; }
L_00248B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B50u); set32(c.r[4], ld32((c.r[2].w[0] + 11280u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00248B50u) [[unlikely]] return; }
L_00248B50:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B64u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00248B64u) [[unlikely]] return; }
L_00248B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248B80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247B70u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 386u, depth); }
L_00248B90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247C20u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 389u, depth); }
L_00248BA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247C70u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 393u, depth); }
L_00248BB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247CD0u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 396u, depth); }
L_00248BC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247CE0u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 397u, depth); }
L_00248BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248BE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00248BE8u) [[unlikely]] return; }
L_00248BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00248C10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248BFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0052(c, 49u, depth + 1u); else { c.pc = 0x00248610u; return; } if (c.pc != 0x00248BFCu) [[unlikely]] return; }
L_00248BFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 2512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00248C10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00248C58u) [[unlikely]] return; }
L_00248C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00248C80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0052(c, 49u, depth + 1u); else { c.pc = 0x00248610u; return; } if (c.pc != 0x00248C6Cu) [[unlikely]] return; }
L_00248C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 2512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00248C80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248C90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 411u, depth + 1u); else { c.pc = 0x00247E30u; return; } if (c.pc != 0x00248C90u) [[unlikely]] return; }
L_00248C90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00248CB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00248D14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13592u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_00248D08; }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00248E8C; } }
L_00248D08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00248E8C; } }
L_00248D14:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00248D34; }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.r[17].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00248D40; } }
L_00248D34:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00248D40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00248E60; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[20].w[0] + 20u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D68u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 65u, depth + 1u); else { c.pc = 0x00248800u; return; } if (c.pc != 0x00248D68u) [[unlikely]] return; }
L_00248D68:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 28u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00248E50; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 24u)));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00248E10; } }
    set32(c.r[9], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], c.r[6].w[0] + 1u);  goto L_00248E14; }
    c.r[7].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00248DC4; } }
L_00248DAC:
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[6].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_00248DC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00248DD0; } }
L_00248DC4:
    c.r[6].d[0] = c.r[9].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { mmi::mult(c, 0, c.r[9].w[0], c.r[7].w[0]); c.r[6].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248DACu | kUnwind; return; } goto L_00248DAC; }
L_00248DD0:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[8].d[0]) { c.r[2].d[0] = c.r[5].d[0] & 255ull;  goto L_00248E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00248DFC; } }
L_00248DE4:
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[6].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_00248DFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00248E50; } }
L_00248DFC:
    c.r[6].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { mmi::mult(c, 0, c.r[9].w[0], c.r[7].w[0]); c.r[6].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248DE4u | kUnwind; return; } goto L_00248DE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248E50; } }
L_00248E10:
    set32(c.r[9], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00248E14:
    c.r[8].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00248E38; } }
L_00248E20:
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_00248E38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00248E50; } }
L_00248E38:
    c.r[1].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00248E50; } }
    c.r[6].d[0] = c.r[9].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { mmi::mult(c, 0, c.r[9].w[0], c.r[8].w[0]); c.r[6].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248E20u | kUnwind; return; } goto L_00248E20; }
L_00248E50:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_00248E54:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00248E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13592u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_00248E80; }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00248E8C; } }
L_00248E80:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 8u), c.f[20]);
    c.budget -= 3;
L_00248E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00248EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 49u, depth + 1u); else { c.pc = 0x00248610u; return; } if (c.pc != 0x00248EC4u) [[unlikely]] return; }
L_00248EC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2512u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11328u);  c.pc = t; return; }
L_00248F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F14u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x00248F14u) [[unlikely]] return; }
L_00248F14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F20u); set32(c.r[4], ld32((c.r[2].w[0] + 11328u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00248F20u) [[unlikely]] return; }
L_00248F20:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F34u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00248F34u) [[unlikely]] return; }
L_00248F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248F6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x00248F6Cu) [[unlikely]] return; }
L_00248F6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00248F84; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00248F84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248FBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x00248FBCu) [[unlikely]] return; }
L_00248FBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248FC8u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 356u, depth + 1u); else { c.pc = 0x001F6DD0u; return; } if (c.pc != 0x00248FC8u) [[unlikely]] return; }
L_00248FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00248FE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_00248FF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_00249000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024901Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0024901Cu) [[unlikely]] return; }
L_0024901C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249028u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x00249028u) [[unlikely]] return; }
L_00249028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249058u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00249058u) [[unlikely]] return; }
L_00249058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024908C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00249068u) [[unlikely]] return; }
L_00249068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[2], c.r[2].w[0] - 2320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
L_0024908C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002490A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002490C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002490C8u) [[unlikely]] return; }
L_002490C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002490FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002490D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002490D8u) [[unlikely]] return; }
L_002490D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[2], c.r[2].w[0] - 2320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
L_002490FC:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024910Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x0024910Cu) [[unlikely]] return; }
L_0024910C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 12u), c.f[3]);
    st32((c.r[16].w[0] + 16u), c.f[2]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00249180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002491CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002491B0u) [[unlikely]] return; }
L_002491B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002491D0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002491CCu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002491CCu) [[unlikely]] return; }
L_002491CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002491D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002491F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024923C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249220u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x00249220u) [[unlikely]] return; }
L_00249220:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00249240; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024923Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024923Cu) [[unlikely]] return; }
L_0024923C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00249240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11368u);  c.pc = t; return; }
L_00249270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024928Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C160u; return; } if (c.pc != 0x0024928Cu) [[unlikely]] return; }
L_0024928C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249298u); set32(c.r[4], ld32((c.r[2].w[0] + 11368u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00249298u) [[unlikely]] return; }
L_00249298:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492ACu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002492ACu) [[unlikely]] return; }
L_002492AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492BCu); set32(c.r[4], c.r[4].w[0] + 11376u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x002492BCu) [[unlikely]] return; }
L_002492BC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002492D0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002492D0u) [[unlikely]] return; }
L_002492D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002492F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024930Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0024C230u; return; } if (c.pc != 0x0024930Cu) [[unlikely]] return; }
L_0024930C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 32u));  goto L_0024931C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002493B0; } }
L_0024931C:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00249330; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249350; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00249350; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00249370; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00249370; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249370:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00249394; }
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00249390; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249390:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00249394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 48u)));  goto L_002493A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002493B0; } }
L_002493A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002493B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002493D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002493ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 25u, depth + 1u); else { c.pc = 0x0024C340u; return; } if (c.pc != 0x002493ECu) [[unlikely]] return; }
L_002493EC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002493F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x002493F8u) [[unlikely]] return; }
L_002493F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249404u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00249404u) [[unlikely]] return; }
L_00249404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249420:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 31u, depth); }
L_00249430:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 35u, depth); }
L_00249440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024945Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 36u, depth + 1u); else { c.pc = 0x0024C440u; return; } if (c.pc != 0x0024945Cu) [[unlikely]] return; }
L_0024945C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249468u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289600u; return; } if (c.pc != 0x00249468u) [[unlikely]] return; }
L_00249468:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249474u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00249474u) [[unlikely]] return; }
L_00249474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002494A8u) [[unlikely]] return; }
L_002494A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002494E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x002494C0u) [[unlikely]] return; }
L_002494C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] - 2240u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 9;
L_002494E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024951Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024951Cu) [[unlikely]] return; }
L_0024951C:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249588u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00249588u) [[unlikely]] return; }
L_00249588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002495C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x002495A0u) [[unlikely]] return; }
L_002495A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] - 2240u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 9;
L_002495C4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002495D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x002495D4u) [[unlikely]] return; }
L_002495D4:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249620:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  goto L_0024962C; }
L_0024962C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00249640:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_00249650; }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_00249650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00249660:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00249670; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00249670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00249680:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00249690; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00249690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002496A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002496CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002496C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002496C0u) [[unlikely]] return; }
L_002496C0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002496D0; } }
L_002496CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002496D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002496E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00249734; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_002497C0; } }
L_00249734:
    set32(c.r[8], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 32u));  goto L_0024979C; }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249778u);  if (depth < kMaxDepth) unit_0052(c, 353u, depth + 1u); else { c.pc = 0x0024B590u; return; } if (c.pc != 0x00249778u) [[unlikely]] return; }
L_00249778:
    c.f[3] = ld32((c.r[29].w[0] + 76u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[2]);
    st32((c.r[17].w[0] + 44u), c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 9;
L_0024979C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 9;
L_002497C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002497E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002497F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00249800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249820u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x00249820u) [[unlikely]] return; }
L_00249820:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2240u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002498BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 2048u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002498A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x002498A0u) [[unlikely]] return; }
L_002498A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002498C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002498BCu); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002498BCu) [[unlikely]] return; }
L_002498BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002498C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002498E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11424u);  c.pc = t; return; }
L_002498F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249904u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 137u, depth + 1u); else { c.pc = 0x00249270u; return; } if (c.pc != 0x00249904u) [[unlikely]] return; }
L_00249904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249910u); set32(c.r[4], ld32((c.r[2].w[0] + 11424u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00249910u) [[unlikely]] return; }
L_00249910:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249924u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00249924u) [[unlikely]] return; }
L_00249924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024995Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 143u, depth + 1u); else { c.pc = 0x002492F0u; return; } if (c.pc != 0x0024995Cu) [[unlikely]] return; }
L_0024995C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00249990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002499A0; } }
L_0024996C:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00249990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002499A0; } }
L_00249990:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024996Cu | kUnwind; return; } goto L_0024996C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002499A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002499C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002499DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 145u, depth + 1u); else { c.pc = 0x002493D0u; return; } if (c.pc != 0x002499DCu) [[unlikely]] return; }
L_002499DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002499ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002499ECu) [[unlikely]] return; }
L_002499EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249A00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00249420u | kUnwind; return; } goto L_00249420; }
L_00249A10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00249430u | kUnwind; return; } goto L_00249430; }
L_00249A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 151u, depth + 1u); else { c.pc = 0x00249440u; return; } if (c.pc != 0x00249A3Cu) [[unlikely]] return; }
L_00249A3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A4Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x00249A4Cu) [[unlikely]] return; }
L_00249A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00249A78u) [[unlikely]] return; }
L_00249A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00249AC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249A94u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0052(c, 174u, depth + 1u); else { c.pc = 0x00249800u; return; } if (c.pc != 0x00249A94u) [[unlikely]] return; }
L_00249A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2048u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00249AA8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249AA8u | kUnwind; return; } goto L_00249AA8; } }
L_00249AC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00249B08u) [[unlikely]] return; }
L_00249B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00249B54; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0052(c, 174u, depth + 1u); else { c.pc = 0x00249800u; return; } if (c.pc != 0x00249B24u) [[unlikely]] return; }
L_00249B24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2048u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00249B38:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249B38u | kUnwind; return; } goto L_00249B38; } }
L_00249B54:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 158u, depth + 1u); else { c.pc = 0x00249500u; return; } if (c.pc != 0x00249B64u) [[unlikely]] return; }
L_00249B64:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00249B68:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249B68u | kUnwind; return; } goto L_00249B68; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00249BC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00249C14; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00249CA0; } }
L_00249C14:
    set32(c.r[8], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 32u));  goto L_00249C7C; }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.f[14] = ld32((c.r[17].w[0] + 68u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249C58u); c.f[13] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_0052(c, 347u, depth + 1u); else { c.pc = 0x0024AEF0u; return; } if (c.pc != 0x00249C58u) [[unlikely]] return; }
L_00249C58:
    c.f[3] = ld32((c.r[29].w[0] + 76u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[2]);
    st32((c.r[17].w[0] + 44u), c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 9;
L_00249C7C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 9;
L_00249CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00249CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00249D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1856u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00249D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x00249D00u) [[unlikely]] return; }
L_00249D00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00249D20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D1Cu); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00249D1Cu) [[unlikely]] return; }
L_00249D1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00249D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11472u);  c.pc = t; return; }
L_00249D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D64u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 366u, depth + 1u); else { c.pc = 0x0024BC80u; return; } if (c.pc != 0x00249D64u) [[unlikely]] return; }
L_00249D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D70u); set32(c.r[4], ld32((c.r[2].w[0] + 11472u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00249D70u) [[unlikely]] return; }
L_00249D70:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249D84u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00249D84u) [[unlikely]] return; }
L_00249D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249DBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 374u, depth + 1u); else { c.pc = 0x0024BD20u; return; } if (c.pc != 0x00249DBCu) [[unlikely]] return; }
L_00249DBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00249DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00249E00; } }
L_00249DCC:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00249DF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00249E00; } }
L_00249DF0:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00249DCCu | kUnwind; return; } goto L_00249DCC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00249E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249E3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 376u, depth + 1u); else { c.pc = 0x0024BD90u; return; } if (c.pc != 0x00249E3Cu) [[unlikely]] return; }
L_00249E3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249E4Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x00249E4Cu) [[unlikely]] return; }
L_00249E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249E60:
    c.budget -= 2;
    {  goto L_0024BDE0; }
L_00249E70:
    c.budget -= 2;
    {  goto L_0024BDF0; }
L_00249E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249E9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 382u, depth + 1u); else { c.pc = 0x0024BE00u; return; } if (c.pc != 0x00249E9Cu) [[unlikely]] return; }
L_00249E9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249EACu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x00249EACu) [[unlikely]] return; }
L_00249EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249ED8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00249ED8u) [[unlikely]] return; }
L_00249ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00249F24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249EF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C100u; return; } if (c.pc != 0x00249EF4u) [[unlikely]] return; }
L_00249EF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1856u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00249F08:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249F08u | kUnwind; return; } goto L_00249F08; } }
L_00249F24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00249F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00249F8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x00249F70u) [[unlikely]] return; }
L_00249F70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00249F90; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249F8Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00249F8Cu) [[unlikely]] return; }
L_00249F8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00249F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00249FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 44u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249FD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00249FD8u) [[unlikely]] return; }
L_00249FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024A024; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249FF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C100u; return; } if (c.pc != 0x00249FF4u) [[unlikely]] return; }
L_00249FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1856u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0024A008:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A008u | kUnwind; return; } goto L_0024A008; } }
L_0024A024:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A034u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 389u, depth + 1u); else { c.pc = 0x0024BEB0u; return; } if (c.pc != 0x0024A034u) [[unlikely]] return; }
L_0024A034:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A038:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 36u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A038u | kUnwind; return; } goto L_0024A038; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024A090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024A0CC; } }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0024A120; } }
L_0024A0CC:
    set32(c.r[8], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 28u));  goto L_0024A114; }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[5], c.r[17].w[0] + 28u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A110u); c.f[13] = ld32((c.r[17].w[0] + 36u));  if (depth < kMaxDepth) unit_0052(c, 347u, depth + 1u); else { c.pc = 0x0024AEF0u; return; } if (c.pc != 0x0024A110u) [[unlikely]] return; }
L_0024A110:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 1;
L_0024A114:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 3;
L_0024A120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024A19C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1664u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0024A180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A180u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x0024A180u) [[unlikely]] return; }
L_0024A180:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024A1A0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A19Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024A19Cu) [[unlikely]] return; }
L_0024A19C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024A1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11520u);  c.pc = t; return; }
L_0024A1D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A1E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0024CA80u; return; } if (c.pc != 0x0024A1E4u) [[unlikely]] return; }
L_0024A1E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A1F0u); set32(c.r[4], ld32((c.r[2].w[0] + 11520u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024A1F0u) [[unlikely]] return; }
L_0024A1F0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A204u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024A204u) [[unlikely]] return; }
L_0024A204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A23Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 102u, depth + 1u); else { c.pc = 0x0024CB00u; return; } if (c.pc != 0x0024A23Cu) [[unlikely]] return; }
L_0024A23C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0024A270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A280; } }
L_0024A24C:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0024A270; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A280; } }
L_0024A270:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A24Cu | kUnwind; return; } goto L_0024A24C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024A280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A2BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 104u, depth + 1u); else { c.pc = 0x0024CBC0u; return; } if (c.pc != 0x0024A2BCu) [[unlikely]] return; }
L_0024A2BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A2CCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x0024A2CCu) [[unlikely]] return; }
L_0024A2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A2E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 108u, depth); }
L_0024A2F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 109u, depth); }
L_0024A300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A31Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 110u, depth + 1u); else { c.pc = 0x0024CC30u; return; } if (c.pc != 0x0024A31Cu) [[unlikely]] return; }
L_0024A31C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A32Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x0024A32Cu) [[unlikely]] return; }
L_0024A32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 52u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A358u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024A358u) [[unlikely]] return; }
L_0024A358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024A3A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A374u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 133u, depth + 1u); else { c.pc = 0x0024CF90u; return; } if (c.pc != 0x0024A374u) [[unlikely]] return; }
L_0024A374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1664u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0024A388:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A388u | kUnwind; return; } goto L_0024A388; } }
L_0024A3A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024A3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024A40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A3F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x0024A3F0u) [[unlikely]] return; }
L_0024A3F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024A410; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A40Cu); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024A40Cu) [[unlikely]] return; }
L_0024A40C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024A410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A458u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024A458u) [[unlikely]] return; }
L_0024A458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024A4A4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A474u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 133u, depth + 1u); else { c.pc = 0x0024CF90u; return; } if (c.pc != 0x0024A474u) [[unlikely]] return; }
L_0024A474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1664u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0024A488:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A488u | kUnwind; return; } goto L_0024A488; } }
L_0024A4A4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A4B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CCE0u; return; } if (c.pc != 0x0024A4B4u) [[unlikely]] return; }
L_0024A4B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A4B8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 44u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A4B8u | kUnwind; return; } goto L_0024A4B8; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024A510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024A55C; } }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_0024A5D8; } }
L_0024A55C:
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 28u));  goto L_0024A5BC; }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.f[14] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A5A0u); c.f[13] = ld32((c.r[17].w[0] + 44u));  if (depth < kMaxDepth) unit_0052(c, 347u, depth + 1u); else { c.pc = 0x0024AEF0u; return; } if (c.pc != 0x0024A5A0u) [[unlikely]] return; }
L_0024A5A0:
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 7;
L_0024A5BC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 7;
L_0024A5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024A5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024A64C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0024A630; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A630u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x0024A630u) [[unlikely]] return; }
L_0024A630:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024A650; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A64Cu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024A64Cu) [[unlikely]] return; }
L_0024A64C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024A650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11568u);  c.pc = t; return; }
L_0024A680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A694u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 136u, depth + 1u); else { c.pc = 0x0024CFF0u; return; } if (c.pc != 0x0024A694u) [[unlikely]] return; }
L_0024A694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A6A0u); set32(c.r[4], ld32((c.r[2].w[0] + 11568u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024A6A0u) [[unlikely]] return; }
L_0024A6A0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A6B4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024A6B4u) [[unlikely]] return; }
L_0024A6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A6ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 147u, depth + 1u); else { c.pc = 0x0024D0C0u; return; } if (c.pc != 0x0024A6ECu) [[unlikely]] return; }
L_0024A6EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0024A720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A730; } }
L_0024A6FC:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 96u));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0024A720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024A730; } }
L_0024A720:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A6FCu | kUnwind; return; } goto L_0024A6FC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024A730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A76Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 149u, depth + 1u); else { c.pc = 0x0024D240u; return; } if (c.pc != 0x0024A76Cu) [[unlikely]] return; }
L_0024A76C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A77Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x0024A77Cu) [[unlikely]] return; }
L_0024A77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A790:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 155u, depth); }
L_0024A7A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 156u, depth); }
L_0024A7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A7CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 157u, depth + 1u); else { c.pc = 0x0024D2C0u; return; } if (c.pc != 0x0024A7CCu) [[unlikely]] return; }
L_0024A7CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A7DCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x0024A7DCu) [[unlikely]] return; }
L_0024A7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A808u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024A808u) [[unlikely]] return; }
L_0024A808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024A85C; } }
    c.r[6].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A82Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 188u, depth + 1u); else { c.pc = 0x0024D9C0u; return; } if (c.pc != 0x0024A82Cu) [[unlikely]] return; }
L_0024A82C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0024A840:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A840u | kUnwind; return; } goto L_0024A840; } }
L_0024A85C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024A870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024A8BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A8A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C8C0u; return; } if (c.pc != 0x0024A8A0u) [[unlikely]] return; }
L_0024A8A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024A8C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A8BCu); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024A8BCu) [[unlikely]] return; }
L_0024A8BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024A8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024A8E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A908u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024A908u) [[unlikely]] return; }
L_0024A908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024A95C; } }
    c.r[6].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A92Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 188u, depth + 1u); else { c.pc = 0x0024D9C0u; return; } if (c.pc != 0x0024A92Cu) [[unlikely]] return; }
L_0024A92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0024A940:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A940u | kUnwind; return; } goto L_0024A940; } }
L_0024A95C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A96Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 166u, depth + 1u); else { c.pc = 0x0024D3E0u; return; } if (c.pc != 0x0024A96Cu) [[unlikely]] return; }
L_0024A96C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024A970:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 96u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A970u | kUnwind; return; } goto L_0024A970; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024A9B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024A9C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024AA78; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024AA30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024AA50; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024AA50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AA50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024AC24; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024AA70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AC20; } }
L_0024AA78:
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0024AADC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[13] = ld32((c.r[17].w[0] + 96u));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.f[14] = ld32((c.r[17].w[0] + 100u));
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AAC4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0052(c, 347u, depth + 1u); else { c.pc = 0x0024AEF0u; return; } if (c.pc != 0x0024AAC4u) [[unlikely]] return; }
L_0024AAC4:
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[2]);
    c.budget -= 6;
L_0024AADC:
    set32(c.r[8], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { set32(c.r[8], ld32((c.r[17].w[0] + 88u)));  goto L_0024AB50; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[13] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.f[14] = ld32((c.r[17].w[0] + 108u));
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB0Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0052(c, 347u, depth + 1u); else { c.pc = 0x0024AEF0u; return; } if (c.pc != 0x0024AB0Cu) [[unlikely]] return; }
L_0024AB0C:
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[15] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB24u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x0024AB24u) [[unlikely]] return; }
L_0024AB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB2Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005F(c, 110u, depth + 1u); else { c.pc = 0x0027E0D0u; return; } if (c.pc != 0x0024AB2Cu) [[unlikely]] return; }
L_0024AB2C:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 9;
L_0024AB50:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[3] = ld32((c.r[17].w[0] + 32u));  goto L_0024AB88; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[13] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.f[14] = ld32((c.r[17].w[0] + 116u));
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AB7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0052(c, 347u, depth + 1u); else { c.pc = 0x0024AEF0u; return; } if (c.pc != 0x0024AB7Cu) [[unlikely]] return; }
L_0024AB7C:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 3;
L_0024AB88:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024ABC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024ABC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024ABE4; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024ABE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024ABE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0024AC08; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024AC04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AC04:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0024AC08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.f[20]);  goto L_0024AC1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024AC20; } }
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_0024AC1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024AC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024AC24:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024AC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11624u);  c.pc = t; return; }
L_0024AC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0024AC6Cu) [[unlikely]] return; }
L_0024AC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC78u); set32(c.r[4], ld32((c.r[2].w[0] + 11624u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024AC78u) [[unlikely]] return; }
L_0024AC78:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC8Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024AC8Cu) [[unlikely]] return; }
L_0024AC8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AC9Cu); set32(c.r[4], c.r[4].w[0] + 11632u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024AC9Cu) [[unlikely]] return; }
L_0024AC9C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACB0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024ACB0u) [[unlikely]] return; }
L_0024ACB0:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACC0u); set32(c.r[4], c.r[4].w[0] + 11654u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024ACC0u) [[unlikely]] return; }
L_0024ACC0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ACD4u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024ACD4u) [[unlikely]] return; }
L_0024ACD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024ACF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x0024AD0Cu) [[unlikely]] return; }
L_0024AD0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_0024AD1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024AD3C; } }
L_0024AD1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024AD3C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0024AD3C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024AD3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024AD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0024AD6Cu) [[unlikely]] return; }
L_0024AD6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD78u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024AD78u) [[unlikely]] return; }
L_0024AD78:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024AD94; }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x0024AD90u) [[unlikely]] return; }
L_0024AD90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024AD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AD9Cu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024AD9Cu) [[unlikely]] return; }
L_0024AD9C:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024ADB8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ADB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 363u, depth + 1u); else { c.pc = 0x0024BC50u; return; } if (c.pc != 0x0024ADB4u) [[unlikely]] return; }
L_0024ADB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024ADB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024ADD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0024ADE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0024ADF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0024AE0Cu) [[unlikely]] return; }
L_0024AE0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE18u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024AE18u) [[unlikely]] return; }
L_0024AE18:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024AE48; }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0024AE30u) [[unlikely]] return; }
L_0024AE30:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x0024AE44u) [[unlikely]] return; }
L_0024AE44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024AE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE50u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024AE50u) [[unlikely]] return; }
L_0024AE50:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024AE80; }
    set32(c.r[4], c.r[3].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0024AE68u) [[unlikely]] return; }
L_0024AE68:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AE7Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 364u, depth + 1u); else { c.pc = 0x0024BC60u; return; } if (c.pc != 0x0024AE7Cu) [[unlikely]] return; }
L_0024AE7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024AE80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024AE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AEA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024AEA8u) [[unlikely]] return; }
L_0024AEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024AED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AEB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0024AEB8u) [[unlikely]] return; }
L_0024AEB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1280u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 7;
L_0024AED4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024AEF0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AF44u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_0052(c, 129u, depth + 1u); else { c.pc = 0x00249170u; return; } if (c.pc != 0x0024AF44u) [[unlikely]] return; }
L_0024AF44:
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[3].w[0] - 3u);  if (t) { goto L_0024AF68; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0024B480; } }
L_0024AF68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 20u), c.f[22]);  if (t) { goto L_0024AFA0; } }
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 3u);  if (t) { goto L_0024AFA8; } }
L_0024AFA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_0024AFA8:
    c.f[0] = c.r[6].w[0];
    set32(c.r[18], c.r[17].w[0] - 3u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = fp::mul(c.f[0], c.f[22]);  if (t) { goto L_0024B19C; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0024AFEC; } }
    set32(c.r[4], c.r[17].w[0] - 5u);
    c.f[1] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024AFF0; } }
L_0024AFEC:
    c.f[12] = 0u;
    c.budget -= 1;
L_0024AFF0:
    c.r[1].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B00C; } }
    set32(c.r[4], c.r[17].w[0] - 4u);
    c.f[1] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B010; } }
L_0024B00C:
    c.f[6] = 0u;
    c.budget -= 1;
L_0024B010:
    set32(c.r[5], c.r[17].w[0] - 3u);
    set32(c.r[4], c.r[17].w[0] - 2u);
    c.f[1] = c.r[5].w[0];
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[8] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.f[7] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B040; } }
    set32(c.r[4], c.r[17].w[0] - 1u);
    c.f[1] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B04C; } }
L_0024B040:
    c.f[1] = c.r[6].w[0];
    c.f[5] = fp::cvt_s_w(c.f[1]);
    c.budget -= 3;
L_0024B04C:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024B064; } }
    c.f[1] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[11] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B070; } }
L_0024B064:
    c.f[1] = c.r[6].w[0];
    c.f[11] = fp::cvt_s_w(c.f[1]);
    c.budget -= 3;
L_0024B070:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[4].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0024B08C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B090; } }
L_0024B08C:
    c.f[4] = c.r[4].w[0];
    c.budget -= 1;
L_0024B090:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0024B0A8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0024B0B0; } }
L_0024B0A8:
    c.f[3] = c.r[4].w[0];
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0024B0B0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 4u);  goto L_0024B0C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0024B0E4; } }
L_0024B0C8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[4].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32588u));  goto L_0024B0E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B0E0; } }
L_0024B0E0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0024B0E4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[4].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0024B100; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0024B0FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[10] = ld32((c.r[28].w[0] - 32588u));  if (t) { goto L_0024B104; } }
L_0024B0FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0024B100:
    c.f[10] = c.r[4].w[0];
    c.budget -= 1;
L_0024B104:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0024B11C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[9] = fp::sub(c.f[0], c.f[6]);  if (t) { goto L_0024B138; } }
L_0024B11C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.f[2] = ld32((c.r[28].w[0] - 32588u));  goto L_0024B134; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B134; } }
L_0024B134:
    c.f[9] = fp::sub(c.f[0], c.f[6]);
    c.budget -= 1;
L_0024B138:
    c.f[7] = fp::sub(c.f[7], c.f[0]);
    c.f[6] = fp::sub(c.f[5], c.f[0]);
    c.f[5] = fp::mul(c.f[7], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[8] = fp::sub(c.f[0], c.f[8]);
    c.f[4] = fp::mul(c.f[5], c.f[1]);
    c.f[3] = fp::mul(c.f[8], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[8]);
    c.f[2] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[5]));
    c.f[3] = fp::mul(c.f[10], c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = fp::sub(c.f[0], c.f[12]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = fp::sub(c.f[11], c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.f[0] = fp::mul(c.f[8], c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_0024B480; } }
L_0024B19C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0024B344; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0024B230; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[7] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::mul(c.f[3], c.f[0]);
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[4] = fp::mul(c.f[7], c.f[7]);
    c.f[2] = fp::mul(c.f[7], c.f[4]);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::mul(c.f[6], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[28].w[0] - 32588u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_0024B480; } }
L_0024B230:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0024B2C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = 0u;
    c.f[5] = fp::sub(c.f[0], c.f[4]);
    c.f[3] = c.r[3].w[0];
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[3] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[5] = fp::mul(c.f[4], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[28].w[0] - 32588u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[4] = fp::mul(c.f[2], c.f[4]);
    c.facc = fp::mul(c.f[6], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[1]);  if (t) { goto L_0024B480; } }
L_0024B2C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[8] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[7] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::mul(c.f[2], c.f[2]);
    c.f[4] = c.r[2].w[0];
    c.f[6] = fp::mul(c.f[4], c.f[7]);
    c.f[1] = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::mul(c.f[7], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[8], c.f[6]));
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[28].w[0] - 32588u));
    c.facc = fp::mul(c.f[7], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[7]);
    c.f[3] = fp::mul(c.f[6], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[3] = fp::mul(c.f[7], c.f[3]);
    c.facc = fp::mul(c.f[7], c.f[5]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[1]);  if (t) { goto L_0024B480; } }
L_0024B344:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0024B430; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_0024B3C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[5] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::mul(c.f[6], c.f[6]);
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_0024B480; } }
L_0024B3C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[7] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[3] = fp::mul(c.f[2], c.f[1]);
    c.f[4] = fp::mul(c.f[2], c.f[2]);
    c.f[5] = fp::mul(c.f[7], c.f[7]);
    c.f[2] = fp::mul(c.f[6], c.f[4]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[1] = fp::mul(c.f[7], c.f[5]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[1]);  if (t) { goto L_0024B480; } }
L_0024B430:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  goto L_0024B484; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    c.f[5] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[5], c.f[5]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[4] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 18;
L_0024B480:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0024B484:
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[5], c.r[19].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.f[12] = c.f[21];
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[13] = c.f[20];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B4B0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 213u, depth + 1u); else { c.pc = 0x00289BE0u; return; } if (c.pc != 0x0024B4B0u) [[unlikely]] return; }
L_0024B4B0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024B4E0; } }
L_0024B4C0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 8;
L_0024B4E0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B4C0u | kUnwind; return; } goto L_0024B4C0; }
    set32(c.r[7], c.r[18].w[0] + 1u);
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0024B548; } }
L_0024B4FC:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024B534; } }
L_0024B50C:
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[2] = ld32((c.r[4].w[0] + 144u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 10;
L_0024B534:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B50Cu | kUnwind; return; } goto L_0024B50C; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0024B548:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B4FCu | kUnwind; return; } goto L_0024B4FC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0024B590:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B5C8u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 129u, depth + 1u); else { c.pc = 0x00249170u; return; } if (c.pc != 0x0024B5C8u) [[unlikely]] return; }
L_0024B5C8:
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[9], c.r[3].w[0] - 3u);  if (t) { goto L_0024B5E8; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_0024BB00; } }
L_0024B5E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 20u), c.f[20]);  if (t) { goto L_0024B620; } }
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 3u);  if (t) { goto L_0024B628; } }
L_0024B620:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.budget -= 2;
L_0024B628:
    c.f[0] = c.r[9].w[0];
    set32(c.r[6], c.r[5].w[0] - 3u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.f[0] = fp::mul(c.f[0], c.f[20]);  if (t) { goto L_0024B81C; } }
    set32(c.r[4], c.r[9].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0024B66C; } }
    set32(c.r[7], c.r[5].w[0] - 5u);
    c.f[1] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B670; } }
L_0024B66C:
    c.f[12] = 0u;
    c.budget -= 1;
L_0024B670:
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024B68C; } }
    set32(c.r[7], c.r[5].w[0] - 4u);
    c.f[1] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B690; } }
L_0024B68C:
    c.f[6] = 0u;
    c.budget -= 1;
L_0024B690:
    set32(c.r[8], c.r[5].w[0] - 3u);
    set32(c.r[7], c.r[5].w[0] - 2u);
    c.f[1] = c.r[8].w[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.f[8] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[7].w[0];
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.f[7] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B6C0; } }
    set32(c.r[7], c.r[5].w[0] - 1u);
    c.f[1] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B6CC; } }
L_0024B6C0:
    c.f[1] = c.r[9].w[0];
    c.f[5] = fp::cvt_s_w(c.f[1]);
    c.budget -= 3;
L_0024B6CC:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024B6E4; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[11] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0024B6F0; } }
L_0024B6E4:
    c.f[1] = c.r[9].w[0];
    c.f[11] = fp::cvt_s_w(c.f[1]);
    c.budget -= 3;
L_0024B6F0:
    set32(c.r[7], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[7].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0024B70C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B710; } }
L_0024B70C:
    c.f[4] = c.r[7].w[0];
    c.budget -= 1;
L_0024B710:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0024B728; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_0024B730; } }
L_0024B728:
    c.f[3] = c.r[7].w[0];
    set32(c.r[7], 0u + 3u);
    c.budget -= 2;
L_0024B730:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[7].d[0]) { set32(c.r[7], 0u + 4u);  goto L_0024B748; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_0024B764; } }
L_0024B748:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[7].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32588u));  goto L_0024B760; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[7].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B760; } }
L_0024B760:
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_0024B764:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[7].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0024B780; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024B77C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[10] = ld32((c.r[28].w[0] - 32588u));  if (t) { goto L_0024B784; } }
L_0024B77C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0024B780:
    c.f[10] = c.r[7].w[0];
    c.budget -= 1;
L_0024B784:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024B79C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[9] = fp::sub(c.f[0], c.f[6]);  if (t) { goto L_0024B7B8; } }
L_0024B79C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.f[2] = ld32((c.r[28].w[0] - 32588u));  goto L_0024B7B4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024B7B4; } }
L_0024B7B4:
    c.f[9] = fp::sub(c.f[0], c.f[6]);
    c.budget -= 1;
L_0024B7B8:
    c.f[7] = fp::sub(c.f[7], c.f[0]);
    c.f[6] = fp::sub(c.f[5], c.f[0]);
    c.f[5] = fp::mul(c.f[7], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[8] = fp::sub(c.f[0], c.f[8]);
    c.f[4] = fp::mul(c.f[5], c.f[1]);
    c.f[3] = fp::mul(c.f[8], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[8]);
    c.f[2] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[5]));
    c.f[3] = fp::mul(c.f[10], c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[4]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.f[1] = fp::sub(c.f[0], c.f[12]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = fp::sub(c.f[11], c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[9], c.f[3]));
    c.f[0] = fp::mul(c.f[8], c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.f[0]);  if (t) { goto L_0024BB00; } }
L_0024B81C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_0024B9C4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0024B8B0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[7] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[4].w[0];
    c.f[1] = c.r[7].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::mul(c.f[3], c.f[0]);
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[4] = fp::mul(c.f[7], c.f[7]);
    c.f[2] = fp::mul(c.f[7], c.f[4]);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::mul(c.f[6], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[28].w[0] - 32588u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[1]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.f[0]);  if (t) { goto L_0024BB00; } }
L_0024B8B0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0024B944; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = 0u;
    c.f[5] = fp::sub(c.f[0], c.f[4]);
    c.f[3] = c.r[4].w[0];
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[3] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[5] = fp::mul(c.f[4], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[28].w[0] - 32588u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[4] = fp::mul(c.f[2], c.f[4]);
    c.facc = fp::mul(c.f[6], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.f[1]);  if (t) { goto L_0024BB00; } }
L_0024B944:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[8] = fp::sub(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[7].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[7] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::mul(c.f[2], c.f[2]);
    c.f[4] = c.r[3].w[0];
    c.f[6] = fp::mul(c.f[4], c.f[7]);
    c.f[1] = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::mul(c.f[7], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[8], c.f[6]));
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[28].w[0] - 32588u));
    c.facc = fp::mul(c.f[7], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[7]);
    c.f[3] = fp::mul(c.f[6], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[3] = fp::mul(c.f[7], c.f[3]);
    c.facc = fp::mul(c.f[7], c.f[5]);
    st32((c.r[2].w[0] + 4u), c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.f[1]);  if (t) { goto L_0024BB00; } }
L_0024B9C4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0024BAB0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_0024BA48; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[5] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::mul(c.f[6], c.f[6]);
    c.f[1] = fp::mul(c.f[6], c.f[4]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[1]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.f[0]);  if (t) { goto L_0024BB00; } }
L_0024BA48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[7] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[3] = fp::mul(c.f[2], c.f[1]);
    c.f[4] = fp::mul(c.f[2], c.f[2]);
    c.f[5] = fp::mul(c.f[7], c.f[7]);
    c.f[2] = fp::mul(c.f[6], c.f[4]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[1] = fp::mul(c.f[7], c.f[5]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.f[1]);  if (t) { goto L_0024BB00; } }
L_0024BAB0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { mmi::mult(c, 0, c.r[6].w[0], c.r[17].w[0]); c.r[3].d[0] = c.lo.d[0];  goto L_0024BB04; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[4].w[0];
    c.f[5] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[5], c.f[5]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = c.r[3].w[0];
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[4] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[2].w[0] + 12u), c.f[1]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 18;
L_0024BB00:
    mmi::mult(c, 0, c.r[6].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0024BB04:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] << 2);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0024BB3C; } }
L_0024BB24:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 6;
L_0024BB3C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[9].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BB24u | kUnwind; return; } goto L_0024BB24; }
    set32(c.r[7], c.r[6].w[0] + 1u);
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0024BB9C; } }
L_0024BB58:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024BB88; } }
L_0024BB68:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[9].w[0]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    set32(c.r[9], c.r[9].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 8;
L_0024BB88:
    c.r[3].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BB68u | kUnwind; return; } goto L_0024BB68; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0024BB9C:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024BB58u | kUnwind; return; } goto L_0024BB58; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024BBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024BC38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1280u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0024BC04u) [[unlikely]] return; }
L_0024BC04:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0024BC10u) [[unlikely]] return; }
L_0024BC10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0024BC1Cu) [[unlikely]] return; }
L_0024BC1C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024BC3C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC38u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024BC38u) [[unlikely]] return; }
L_0024BC38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024BC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BC50:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD340u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 94u, depth); }
L_0024BC60:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD390u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 96u, depth); }
L_0024BC70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11704u);  c.pc = t; return; }
L_0024BC80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BC9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C160u; return; } if (c.pc != 0x0024BC9Cu) [[unlikely]] return; }
L_0024BC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCA8u); set32(c.r[4], ld32((c.r[2].w[0] + 11704u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024BCA8u) [[unlikely]] return; }
L_0024BCA8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCBCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024BCBCu) [[unlikely]] return; }
L_0024BCBC:
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCCCu); set32(c.r[4], c.r[4].w[0] + 11712u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0024BCCCu) [[unlikely]] return; }
L_0024BCCC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCE0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024BCE0u) [[unlikely]] return; }
L_0024BCE0:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BCF0u); set32(c.r[4], c.r[4].w[0] + 11726u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024BCF0u) [[unlikely]] return; }
L_0024BCF0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD04u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024BD04u) [[unlikely]] return; }
L_0024BD04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024BD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BD3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0024C230u; return; } if (c.pc != 0x0024BD3Cu) [[unlikely]] return; }
L_0024BD3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 28u));  goto L_0024BD4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BD70; } }
L_0024BD4C:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[16].w[0] + 32u)));  goto L_0024BD64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024BD70; } }
L_0024BD64:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0024BD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BDACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 25u, depth + 1u); else { c.pc = 0x0024C340u; return; } if (c.pc != 0x0024BDACu) [[unlikely]] return; }
L_0024BDAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BDB8u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0024BDB8u) [[unlikely]] return; }
L_0024BDB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BDC4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024BDC4u) [[unlikely]] return; }
L_0024BDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BDE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 31u, depth); }
L_0024BDF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0053(c, 35u, depth); }
L_0024BE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 36u, depth + 1u); else { c.pc = 0x0024C440u; return; } if (c.pc != 0x0024BE1Cu) [[unlikely]] return; }
L_0024BE1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE28u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0024BE28u) [[unlikely]] return; }
L_0024BE28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE34u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024BE34u) [[unlikely]] return; }
L_0024BE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 36u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024BE68u) [[unlikely]] return; }
L_0024BE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024BE94; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BE80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024BE80u) [[unlikely]] return; }
L_0024BE80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] - 1200u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_0024BE94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024BEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BECCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024BECCu) [[unlikely]] return; }
L_0024BECC:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 36u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024BF18u) [[unlikely]] return; }
L_0024BF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024BF44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024BF30u) [[unlikely]] return; }
L_0024BF30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] - 1200u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_0024BF44:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BF54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024BF54u) [[unlikely]] return; }
L_0024BF54:
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024BF80:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  goto L_0024BF8C; }
L_0024BF8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024BFA0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_0024BFB0; }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_0024BFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024BFC0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024BFD0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0024BFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024BFE0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0024BFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { [[clang::musttail]] return unit_0053(c, 3u, depth); } }
    [[clang::musttail]] return unit_0053(c, 1u, depth);
}

}
