#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0102[4096] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0,
    33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0,
    45, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69,
    0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0,
    0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141,
    0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 359,
    0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0102(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00508000;
    case 2u: goto L_00508004;
    case 3u: goto L_00508014;
    case 4u: goto L_0050801C;
    case 5u: goto L_00508024;
    case 6u: goto L_00508038;
    case 7u: goto L_00508078;
    case 8u: goto L_0050808C;
    case 9u: goto L_005080A0;
    case 10u: goto L_005080B8;
    case 11u: goto L_005080C8;
    case 12u: goto L_005080E0;
    case 13u: goto L_00508100;
    case 14u: goto L_0050811C;
    case 15u: goto L_00508130;
    case 16u: goto L_0050814C;
    case 17u: goto L_00508170;
    case 18u: goto L_005081A0;
    case 19u: goto L_005081B0;
    case 20u: goto L_005081CC;
    case 21u: goto L_005081E0;
    case 22u: goto L_00508244;
    case 23u: goto L_00508258;
    case 24u: goto L_0050826C;
    case 25u: goto L_00508280;
    case 26u: goto L_00508290;
    case 27u: goto L_005082B4;
    case 28u: goto L_005082C4;
    case 29u: goto L_005082CC;
    case 30u: goto L_005082D4;
    case 31u: goto L_005082E4;
    case 32u: goto L_005082F8;
    case 33u: goto L_00508300;
    case 34u: goto L_00508314;
    case 35u: goto L_0050831C;
    case 36u: goto L_00508334;
    case 37u: goto L_0050833C;
    case 38u: goto L_00508354;
    case 39u: goto L_0050835C;
    case 40u: goto L_00508370;
    case 41u: goto L_005083CC;
    case 42u: goto L_005083D8;
    case 43u: goto L_005083EC;
    case 44u: goto L_005083F8;
    case 45u: goto L_00508400;
    case 46u: goto L_00508404;
    case 47u: goto L_0050841C;
    case 48u: goto L_00508438;
    case 49u: goto L_00508498;
    case 50u: goto L_005084C4;
    case 51u: goto L_005084E0;
    case 52u: goto L_0050851C;
    case 53u: goto L_00508530;
    case 54u: goto L_00508544;
    case 55u: goto L_00508560;
    case 56u: goto L_005085C4;
    case 57u: goto L_005085F0;
    case 58u: goto L_00508600;
    case 59u: goto L_00508630;
    case 60u: goto L_0050864C;
    case 61u: goto L_00508670;
    case 62u: goto L_00508680;
    case 63u: goto L_00508690;
    case 64u: goto L_005086B0;
    case 65u: goto L_005086CC;
    case 66u: goto L_005086D8;
    case 67u: goto L_005086E4;
    case 68u: goto L_005086F0;
    case 69u: goto L_005086FC;
    case 70u: goto L_00508708;
    case 71u: goto L_00508714;
    case 72u: goto L_00508730;
    case 73u: goto L_00508740;
    case 74u: goto L_00508750;
    case 75u: goto L_0050876C;
    case 76u: goto L_00508778;
    case 77u: goto L_00508784;
    case 78u: goto L_00508790;
    case 79u: goto L_0050879C;
    case 80u: goto L_005087A8;
    case 81u: goto L_005087B4;
    case 82u: goto L_005087D0;
    case 83u: goto L_005087EC;
    case 84u: goto L_005088C0;
    case 85u: goto L_005088D8;
    case 86u: goto L_005088E8;
    case 87u: goto L_00508920;
    case 88u: goto L_00508988;
    case 89u: goto L_00508994;
    case 90u: goto L_005089D0;
    case 91u: goto L_005089E0;
    case 92u: goto L_00508A34;
    case 93u: goto L_00508A40;
    case 94u: goto L_00508A7C;
    case 95u: goto L_00508A8C;
    case 96u: goto L_00508AC8;
    case 97u: goto L_00508AD4;
    case 98u: goto L_00508B10;
    case 99u: goto L_00508B20;
    case 100u: goto L_00508B44;
    case 101u: goto L_00508B54;
    case 102u: goto L_00508B70;
    case 103u: goto L_00508B84;
    case 104u: goto L_00508B94;
    case 105u: goto L_00508BA8;
    case 106u: goto L_00508BB8;
    case 107u: goto L_00508BCC;
    case 108u: goto L_00508BDC;
    case 109u: goto L_00508BF0;
    case 110u: goto L_00508C00;
    case 111u: goto L_00508C1C;
    case 112u: goto L_00508C30;
    case 113u: goto L_00508C40;
    case 114u: goto L_00508C5C;
    case 115u: goto L_00508C70;
    case 116u: goto L_00508C80;
    case 117u: goto L_00508C9C;
    case 118u: goto L_00508CB0;
    case 119u: goto L_00508CC0;
    case 120u: goto L_00508CDC;
    case 121u: goto L_00508D00;
    case 122u: goto L_00508D78;
    case 123u: goto L_00508D88;
    case 124u: goto L_00508D9C;
    case 125u: goto L_00508DB4;
    case 126u: goto L_00508DC4;
    case 127u: goto L_00508DD0;
    case 128u: goto L_00508DE4;
    case 129u: goto L_00508DF4;
    case 130u: goto L_00508E10;
    case 131u: goto L_00508E20;
    case 132u: goto L_00508E60;
    case 133u: goto L_00508E70;
    case 134u: goto L_00508E8C;
    case 135u: goto L_00508EA0;
    case 136u: goto L_00508EB0;
    case 137u: goto L_00508EBC;
    case 138u: goto L_00508EC8;
    case 139u: goto L_00508ED8;
    case 140u: goto L_00508EEC;
    case 141u: goto L_00508EFC;
    case 142u: goto L_00508F08;
    case 143u: goto L_00508F14;
    case 144u: goto L_00508F1C;
    case 145u: goto L_00508F38;
    case 146u: goto L_00508F88;
    case 147u: goto L_00508FAC;
    case 148u: goto L_00508FBC;
    case 149u: goto L_00508FD8;
    case 150u: goto L_00508FEC;
    case 151u: goto L_00508FFC;
    case 152u: goto L_00509018;
    case 153u: goto L_00509060;
    case 154u: goto L_005090A8;
    case 155u: goto L_0050914C;
    case 156u: goto L_0050917C;
    case 157u: goto L_00509190;
    case 158u: goto L_005091A0;
    case 159u: goto L_005091B4;
    case 160u: goto L_005091C4;
    case 161u: goto L_005091D8;
    case 162u: goto L_005091E8;
    case 163u: goto L_00509204;
    case 164u: goto L_00509224;
    case 165u: goto L_00509234;
    case 166u: goto L_00509250;
    case 167u: goto L_00509264;
    case 168u: goto L_00509274;
    case 169u: goto L_005092B8;
    case 170u: goto L_005092C8;
    case 171u: goto L_005092E4;
    case 172u: goto L_005092F8;
    case 173u: goto L_00509308;
    case 174u: goto L_00509318;
    case 175u: goto L_00509328;
    case 176u: goto L_00509340;
    case 177u: goto L_00509358;
    case 178u: goto L_00509368;
    case 179u: goto L_00509374;
    case 180u: goto L_00509384;
    case 181u: goto L_005093A4;
    case 182u: goto L_005093B4;
    case 183u: goto L_005093D0;
    case 184u: goto L_005093E4;
    case 185u: goto L_005093F4;
    case 186u: goto L_00509434;
    case 187u: goto L_00509444;
    case 188u: goto L_00509464;
    case 189u: goto L_00509474;
    case 190u: goto L_00509490;
    case 191u: goto L_005094A4;
    case 192u: goto L_005094B4;
    case 193u: goto L_005094F4;
    case 194u: goto L_00509514;
    case 195u: goto L_00509524;
    case 196u: goto L_00509540;
    case 197u: goto L_00509554;
    case 198u: goto L_00509564;
    case 199u: goto L_00509578;
    case 200u: goto L_00509588;
    case 201u: goto L_005095A4;
    case 202u: goto L_005095CC;
    case 203u: goto L_005095E8;
    case 204u: goto L_005095F0;
    case 205u: goto L_00509614;
    case 206u: goto L_00509640;
    case 207u: goto L_00509658;
    case 208u: goto L_00509668;
    case 209u: goto L_00509684;
    case 210u: goto L_00509698;
    case 211u: goto L_005096A8;
    case 212u: goto L_005096C4;
    case 213u: goto L_005096D8;
    case 214u: goto L_005096E8;
    case 215u: goto L_00509704;
    case 216u: goto L_00509734;
    case 217u: goto L_00509748;
    case 218u: goto L_00509758;
    case 219u: goto L_00509770;
    case 220u: goto L_00509780;
    case 221u: goto L_00509794;
    case 222u: goto L_005097A4;
    case 223u: goto L_005097C0;
    case 224u: goto L_005097D4;
    case 225u: goto L_005097E4;
    case 226u: goto L_00509800;
    case 227u: goto L_00509814;
    case 228u: goto L_00509824;
    case 229u: goto L_00509840;
    case 230u: goto L_00509890;
    case 231u: goto L_005098D0;
    case 232u: goto L_005098E0;
    case 233u: goto L_005098F8;
    case 234u: goto L_00509908;
    case 235u: goto L_00509920;
    case 236u: goto L_00509940;
    case 237u: goto L_00509970;
    case 238u: goto L_005099A0;
    case 239u: goto L_005099BC;
    case 240u: goto L_005099C4;
    case 241u: goto L_005099CC;
    case 242u: goto L_005099E0;
    case 243u: goto L_00509A14;
    case 244u: goto L_00509A30;
    case 245u: goto L_00509A64;
    case 246u: goto L_00509A84;
    case 247u: goto L_00509A90;
    case 248u: goto L_00509A98;
    case 249u: goto L_00509AA0;
    case 250u: goto L_00509AA8;
    case 251u: goto L_00509AD0;
    case 252u: goto L_00509B1C;
    case 253u: goto L_00509B28;
    case 254u: goto L_00509B30;
    case 255u: goto L_00509B3C;
    case 256u: goto L_00509B48;
    case 257u: goto L_00509B5C;
    case 258u: goto L_00509B90;
    case 259u: goto L_00509BAC;
    case 260u: goto L_00509BE0;
    case 261u: goto L_00509C00;
    case 262u: goto L_00509C0C;
    case 263u: goto L_00509C30;
    case 264u: goto L_00509C58;
    case 265u: goto L_00509C88;
    case 266u: goto L_00509C9C;
    case 267u: goto L_00509D00;
    case 268u: goto L_00509D0C;
    case 269u: goto L_00509D18;
    case 270u: goto L_00509D24;
    case 271u: goto L_00509D40;
    case 272u: goto L_00509D68;
    case 273u: goto L_00509D98;
    case 274u: goto L_00509DAC;
    case 275u: goto L_00509E10;
    case 276u: goto L_00509E1C;
    case 277u: goto L_00509E28;
    case 278u: goto L_00509E34;
    case 279u: goto L_00509E50;
    case 280u: goto L_00509E88;
    case 281u: goto L_00509EA4;
    case 282u: goto L_00509EBC;
    case 283u: goto L_00509EE0;
    case 284u: goto L_00509F18;
    case 285u: goto L_00509F28;
    case 286u: goto L_00509F38;
    case 287u: goto L_00509F48;
    case 288u: goto L_00509F60;
    case 289u: goto L_00509F70;
    case 290u: goto L_00509FA0;
    case 291u: goto L_00509FE0;
    case 292u: goto L_0050A020;
    case 293u: goto L_0050A080;
    case 294u: goto L_0050A094;
    case 295u: goto L_0050A304;
    case 296u: goto L_0050A474;
    case 297u: goto L_0050A4E4;
    case 298u: goto L_0050A4F8;
    case 299u: goto L_0050A508;
    case 300u: goto L_0050A5C8;
    case 301u: goto L_0050A72C;
    case 302u: goto L_0050A78C;
    case 303u: goto L_0050A7AC;
    case 304u: goto L_0050A7C0;
    case 305u: goto L_0050A7CC;
    case 306u: goto L_0050A7D4;
    case 307u: goto L_0050A7DC;
    case 308u: goto L_0050A8DC;
    case 309u: goto L_0050A934;
    case 310u: goto L_0050A9AC;
    case 311u: goto L_0050AA40;
    case 312u: goto L_0050AB08;
    case 313u: goto L_0050AB9C;
    case 314u: goto L_0050ABAC;
    case 315u: goto L_0050ABB8;
    case 316u: goto L_0050ABCC;
    case 317u: goto L_0050AC0C;
    case 318u: goto L_0050AD34;
    case 319u: goto L_0050AD48;
    case 320u: goto L_0050AD58;
    case 321u: goto L_0050AD74;
    case 322u: goto L_0050ADF4;
    case 323u: goto L_0050AE08;
    case 324u: goto L_0050AE84;
    case 325u: goto L_0050AED0;
    case 326u: goto L_0050AFEC;
    case 327u: goto L_0050B098;
    case 328u: goto L_0050B0E8;
    case 329u: goto L_0050B188;
    case 330u: goto L_0050B214;
    case 331u: goto L_0050B228;
    case 332u: goto L_0050B238;
    case 333u: goto L_0050B254;
    case 334u: goto L_0050B290;
    case 335u: goto L_0050B2B8;
    case 336u: goto L_0050B2C8;
    case 337u: goto L_0050B2E0;
    case 338u: goto L_0050B418;
    case 339u: goto L_0050B438;
    case 340u: goto L_0050B474;
    case 341u: goto L_0050B494;
    case 342u: goto L_0050B660;
    case 343u: goto L_0050B69C;
    case 344u: goto L_0050B6B0;
    case 345u: goto L_0050B9BC;
    case 346u: goto L_0050B9D0;
    case 347u: goto L_0050B9F0;
    case 348u: goto L_0050BA2C;
    case 349u: goto L_0050BA3C;
    case 350u: goto L_0050BA58;
    case 351u: goto L_0050BA6C;
    case 352u: goto L_0050BA7C;
    case 353u: goto L_0050BA98;
    case 354u: goto L_0050BAA8;
    case 355u: goto L_0050BAC4;
    case 356u: goto L_0050BAD8;
    case 357u: goto L_0050BAE8;
    case 358u: goto L_0050BAF4;
    case 359u: goto L_0050BAFC;
    case 360u: goto L_0050BB04;
    case 361u: goto L_0050BB0C;
    case 362u: goto L_0050BB14;
    case 363u: goto L_0050BB1C;
    case 364u: goto L_0050BB24;
    case 365u: goto L_0050BB2C;
    case 366u: goto L_0050BB34;
    case 367u: goto L_0050BB3C;
    case 368u: goto L_0050BB44;
    case 369u: goto L_0050BB4C;
    case 370u: goto L_0050BB54;
    case 371u: goto L_0050BB6C;
    case 372u: goto L_0050BB88;
    case 373u: goto L_0050BBA4;
    case 374u: goto L_0050BBC0;
    case 375u: goto L_0050BBDC;
    case 376u: goto L_0050BBF4;
    case 377u: goto L_0050BC0C;
    case 378u: goto L_0050BC30;
    case 379u: goto L_0050BC80;
    case 380u: goto L_0050BCD0;
    case 381u: goto L_0050BD04;
    case 382u: goto L_0050BD34;
    case 383u: goto L_0050BD58;
    case 384u: goto L_0050BD7C;
    case 385u: goto L_0050BDA0;
    case 386u: goto L_0050BDC4;
    case 387u: goto L_0050BDE8;
    case 388u: goto L_0050BE0C;
    case 389u: goto L_0050BE30;
    case 390u: goto L_0050BE40;
    case 391u: goto L_0050BE50;
    case 392u: goto L_0050BE60;
    case 393u: goto L_0050BE70;
    case 394u: goto L_0050BE80;
    case 395u: goto L_0050BE8C;
    case 396u: goto L_0050BE98;
    case 397u: goto L_0050BEB0;
    case 398u: goto L_0050BEC0;
    case 399u: goto L_0050BED0;
    case 400u: goto L_0050BEDC;
    case 401u: goto L_0050BEE8;
    case 402u: goto L_0050BF00;
    case 403u: goto L_0050BF14;
    case 404u: goto L_0050BF20;
    case 405u: goto L_0050BF2C;
    default: bad_entry(c, 0x00508000u); return;
    }
L_00508000:
    c.budget -= 1;
L_00508004:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508014u); set32(c.r[5], c.r[5].w[0] + 26028u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00508014u) [[unlikely]] return; }
L_00508014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0050802C; }
L_0050801C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508024u);  if (depth < kMaxDepth) unit_0103(c, 452u, depth + 1u); else { c.pc = 0x0050F380u; return; } if (c.pc != 0x00508024u) [[unlikely]] return; }
L_00508024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_0050814C; } }
L_0050802C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508038u); set32(c.r[5], c.r[5].w[0] + 26055u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00508038u) [[unlikely]] return; }
L_00508038:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00508094; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00508080; }
    set32(c.r[7], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 20u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508078u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508078u) [[unlikely]] return; }
L_00508078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00508150; } }
L_00508080:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050808Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050808Cu) [[unlikely]] return; }
L_0050808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050814C; } }
L_00508094:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005080A0u); set32(c.r[5], c.r[5].w[0] + 26077u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x005080A0u) [[unlikely]] return; }
L_005080A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00508124; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00508114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005080B8u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005080B8u) [[unlikely]] return; }
L_005080B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005080C8u); set32(c.r[5], c.r[5].w[0] + 25984u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x005080C8u) [[unlikely]] return; }
L_005080C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_005080D8; }
    set32(c.r[2], c.r[2].w[0] + 68u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_005080D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005080E0u);  if (depth < kMaxDepth) unit_0101(c, 364u, depth + 1u); else { c.pc = 0x00506880u; return; } if (c.pc != 0x005080E0u) [[unlikely]] return; }
L_005080E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_00508104; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508100u); set32(c.r[5], c.r[5].w[0] + 26098u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508100u) [[unlikely]] return; }
L_00508100:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00508104:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0050814C; } }
L_00508114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050811Cu);  if (depth < kMaxDepth) unit_0103(c, 452u, depth + 1u); else { c.pc = 0x0050F380u; return; } if (c.pc != 0x0050811Cu) [[unlikely]] return; }
L_0050811C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_0050814C; } }
L_00508124:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508130u); set32(c.r[5], c.r[5].w[0] + 26125u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00508130u) [[unlikely]] return; }
L_00508130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050814C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050814Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050814Cu) [[unlikely]] return; }
L_0050814C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00508150:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00508170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_005081BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005081A0u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x005081A0u) [[unlikely]] return; }
L_005081A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005081B0u); set32(c.r[5], c.r[5].w[0] + 25984u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x005081B0u) [[unlikely]] return; }
L_005081B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_005081CC; } }
L_005081BC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005081CCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005081CCu) [[unlikely]] return; }
L_005081CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005081E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00508274; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00508260; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0050824C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  goto L_0050822C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00508284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508280; } }
L_0050822C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00508280; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508244u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508244u) [[unlikely]] return; }
L_00508244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508280; } }
L_0050824C:
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508258u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508258u) [[unlikely]] return; }
L_00508258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508280; } }
L_00508260:
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050826Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050826Cu) [[unlikely]] return; }
L_0050826C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508280; } }
L_00508274:
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508280u) [[unlikely]] return; }
L_00508280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00508284:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00508290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005082B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005082B4u) [[unlikely]] return; }
L_005082B4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005082C4u); st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x005082C4u) [[unlikely]] return; }
L_005082C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005082CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x005082CCu) [[unlikely]] return; }
L_005082CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005082D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x005082D4u) [[unlikely]] return; }
L_005082D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005082E4u); set32(c.r[5], c.r[5].w[0] + 26001u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x005082E4u) [[unlikely]] return; }
L_005082E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  goto L_00508308; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005082F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 460u, depth + 1u); else { c.pc = 0x004379E0u; return; } if (c.pc != 0x005082F8u) [[unlikely]] return; }
L_005082F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508300u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_00D5(c, 29u, depth + 1u); else { c.pc = 0x00454300u; return; } if (c.pc != 0x00508300u) [[unlikely]] return; }
L_00508300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));  if (t) { goto L_00508320; } }
L_00508308:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508314u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 451u, depth + 1u); else { c.pc = 0x004378F0u; return; } if (c.pc != 0x00508314u) [[unlikely]] return; }
L_00508314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050831Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_00D5(c, 29u, depth + 1u); else { c.pc = 0x00454300u; return; } if (c.pc != 0x0050831Cu) [[unlikely]] return; }
L_0050831C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 1;
L_00508320:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508334u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508334u) [[unlikely]] return; }
L_00508334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050833Cu); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_000A(c, 144u, depth + 1u); else { c.pc = 0x001292E0u; return; } if (c.pc != 0x0050833Cu) [[unlikely]] return; }
L_0050833C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508354u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508354u) [[unlikely]] return; }
L_00508354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050835Cu); set32(c.r[4], 0u + 900u);  if (depth < kMaxDepth) unit_000A(c, 144u, depth + 1u); else { c.pc = 0x001292E0u; return; } if (c.pc != 0x0050835Cu) [[unlikely]] return; }
L_0050835C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00508370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005084C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22240u);
    set32(c.r[2], c.r[2].w[0] - 22212u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_005083B4; } }
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.budget -= 1;
L_005083B4:
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005083CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 433u, depth + 1u); else { c.pc = 0x00506EC0u; return; } if (c.pc != 0x005083CCu) [[unlikely]] return; }
L_005083CC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005083D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 541u, depth + 1u); else { c.pc = 0x00507C80u; return; } if (c.pc != 0x005083D8u) [[unlikely]] return; }
L_005083D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005083ECu); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0101(c, 539u, depth + 1u); else { c.pc = 0x00507C30u; return; } if (c.pc != 0x005083ECu) [[unlikely]] return; }
L_005083EC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005083F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0101(c, 541u, depth + 1u); else { c.pc = 0x00507C80u; return; } if (c.pc != 0x005083F8u) [[unlikely]] return; }
L_005083F8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508404u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0101(c, 538u, depth + 1u); else { c.pc = 0x00507C10u; return; } if (c.pc != 0x00508404u) [[unlikely]] return; }
    goto L_00508404;
L_00508400:
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_00508404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_00508420; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050841Cu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0101(c, 536u, depth + 1u); else { c.pc = 0x00507BE0u; return; } if (c.pc != 0x0050841Cu) [[unlikely]] return; }
L_0050841C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00508420:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_0050843C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508438u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508438u) [[unlikely]] return; }
L_00508438:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_0050843C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00508450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00508450:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508498; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00508498; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00508498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508498u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00508498u) [[unlikely]] return; }
L_00508498:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_005084B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_005084B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_005084C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005084C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x005084C4u) [[unlikely]] return; }
L_005084C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_005084C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_005084E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28496u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050851Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0050851Cu) [[unlikely]] return; }
L_0050851C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00508534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508530u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00508530u) [[unlikely]] return; }
L_00508530:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00508534:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00508548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508544u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00508544u) [[unlikely]] return; }
L_00508544:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00508548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508560u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00508560u) [[unlikely]] return; }
L_00508560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 28480u);
    set32(c.r[3], c.r[3].w[0] - 22240u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22212u);
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[17].w[0]);
    st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0] + 28u), c.r[18].w[0]);  if (t) { goto L_0050859C; } }
    set32(c.r[3], c.r[19].w[0] + 20u);
    c.budget -= 1;
L_0050859C:
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[7], c.r[29].w[0] + 92u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005085C4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x005085C4u) [[unlikely]] return; }
L_005085C4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_005085F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00508370u | kUnwind; return; } goto L_00508370; }
L_00508600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050864C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508630u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x00508630u) [[unlikely]] return; }
L_00508630:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00508650; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050864Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0050864Cu) [[unlikely]] return; }
L_0050864C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00508650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00508670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 26208u);  c.pc = t; return; }
L_00508680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 26224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A390u | kUnwind; return; } [[clang::musttail]] return unit_0082(c, 252u, depth); }
L_00508690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 26224u);
    c.budget -= 5;
    { set32(c.r[5], c.r[5].w[0] - 30528u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A520u | kUnwind; return; } [[clang::musttail]] return unit_0082(c, 262u, depth); }
L_005086B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005086CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x005086CCu) [[unlikely]] return; }
L_005086CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005086D8u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x005086D8u) [[unlikely]] return; }
L_005086D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005086E4u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x005086E4u) [[unlikely]] return; }
L_005086E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005086F0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x005086F0u) [[unlikely]] return; }
L_005086F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005086FCu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x005086FCu) [[unlikely]] return; }
L_005086FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508708u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00508708u) [[unlikely]] return; }
L_00508708:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508714u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x00508714u) [[unlikely]] return; }
L_00508714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00508730:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2E0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_00508740:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB310u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_00508750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050876Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0050876Cu) [[unlikely]] return; }
L_0050876C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508778u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00508778u) [[unlikely]] return; }
L_00508778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508784u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00508784u) [[unlikely]] return; }
L_00508784:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508790u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00508790u) [[unlikely]] return; }
L_00508790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050879Cu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0050879Cu) [[unlikely]] return; }
L_0050879C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005087A8u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x005087A8u) [[unlikely]] return; }
L_005087A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005087B4u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x005087B4u) [[unlikely]] return; }
L_005087B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005087D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005087ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x005087ECu) [[unlikely]] return; }
L_005087EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_005087FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005088A8; } }
L_005087FC:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00508810; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508830; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00508830; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508850; } }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00508850; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508870; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00508870; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00508890; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00508890; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005088A8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 28u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_005088A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005088C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005088D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x005088D8u) [[unlikely]] return; }
L_005088D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0050890C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005088E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x005088E8u) [[unlikely]] return; }
L_005088E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22176u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0050890C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00508920:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00508978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_005089C0; } }
L_00508978:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508988u) [[unlikely]] return; }
L_00508988:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 26208u);  if (t) { goto L_005089A4; } }
L_00508994:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_005089A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005089B0; } }
L_005089A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00508994u | kUnwind; return; } goto L_00508994; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005089B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_005089C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005089C0; } }
L_005089C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  if (t) { goto L_005089E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005089D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005089D0u) [[unlikely]] return; }
L_005089D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005089E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005089E0u) [[unlikely]] return; }
L_005089E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 16;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00508A28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00508A6C; } }
L_00508A28:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508A34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508A34u) [[unlikely]] return; }
L_00508A34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_00508A50; } }
L_00508A40:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00508A50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00508A5C; } }
L_00508A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00508A40u | kUnwind; return; } goto L_00508A40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508A5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00508A6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508A6C; } }
L_00508A6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[17].w[0]);  if (t) { goto L_00508A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508A7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508A7Cu) [[unlikely]] return; }
L_00508A7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508A8Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508A8Cu) [[unlikely]] return; }
L_00508A8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00508ABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00508B00; } }
L_00508ABC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508AC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508AC8u) [[unlikely]] return; }
L_00508AC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20904u);  if (t) { goto L_00508AE4; } }
L_00508AD4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00508AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00508AF0; } }
L_00508AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00508AD4u | kUnwind; return; } goto L_00508AD4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00508AF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00508B00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508B00; } }
L_00508B00:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 100u), c.r[17].w[0]);  if (t) { goto L_00508B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508B10u) [[unlikely]] return; }
L_00508B10:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B20u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508B20u) [[unlikely]] return; }
L_00508B20:
    set32(c.r[17], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 104u)));  goto L_00508B98; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 288u), c.r[18].w[0]);  goto L_00508B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508B44u) [[unlikely]] return; }
L_00508B44:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B54u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508B54u) [[unlikely]] return; }
L_00508B54:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508B70; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508B70u) [[unlikely]] return; }
L_00508B70:
    st32((c.r[17].w[0] + 288u), c.r[18].w[0]);
    c.budget -= 1;
L_00508B74:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00508B94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508B84u) [[unlikely]] return; }
L_00508B84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508B94u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508B94u) [[unlikely]] return; }
L_00508B94:
    set32(c.r[17], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00508B98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[17].w[0]);  if (t) { goto L_00508BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508BA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508BA8u) [[unlikely]] return; }
L_00508BA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508BB8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508BB8u) [[unlikely]] return; }
L_00508BB8:
    set32(c.r[17], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_00508BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508BCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508BCCu) [[unlikely]] return; }
L_00508BCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508BDCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508BDCu) [[unlikely]] return; }
L_00508BDC:
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 100u)));  goto L_00508C20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508BF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508BF0u) [[unlikely]] return; }
L_00508BF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508C00u) [[unlikely]] return; }
L_00508C00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508C1C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508C1Cu) [[unlikely]] return; }
L_00508C1C:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_00508C20:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  goto L_00508C60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508C30u) [[unlikely]] return; }
L_00508C30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C40u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508C40u) [[unlikely]] return; }
L_00508C40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508C5C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508C5Cu) [[unlikely]] return; }
L_00508C5C:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00508C60:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_00508CA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508C70u) [[unlikely]] return; }
L_00508C70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508C80u) [[unlikely]] return; }
L_00508C80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508C9C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508C9Cu) [[unlikely]] return; }
L_00508C9C:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_00508CA0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00508CE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508CB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508CB0u) [[unlikely]] return; }
L_00508CB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508CC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508CC0u) [[unlikely]] return; }
L_00508CC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508CDC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508CDCu) [[unlikely]] return; }
L_00508CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00508CE0:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00508D00:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st8((c.r[29].w[0] + 195u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508D78u); st32((c.r[29].w[0] + 228u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00508D78u) [[unlikely]] return; }
L_00508D78:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], 0u + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00508D88u) [[unlikely]] return; }
L_00508D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 268u), c.r[16].w[0]);  goto L_00508DA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508D9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 448u, depth + 1u); else { c.pc = 0x002AB930u; return; } if (c.pc != 0x00508D9Cu) [[unlikely]] return; }
L_00508D9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 268u), c.r[16].w[0]);
    c.budget -= 2;
L_00508DA4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 224u)));  goto L_00508DC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508DB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508DB4u) [[unlikely]] return; }
L_00508DB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508DC4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508DC4u) [[unlikely]] return; }
L_00508DC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_00508DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508DD0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00508DD0u) [[unlikely]] return; }
L_00508DD0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 264u), 0u);  if (t) { goto L_00508DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508DE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508DE4u) [[unlikely]] return; }
L_00508DE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508DF4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508DF4u) [[unlikely]] return; }
L_00508DF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_00508EC0; }
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508E10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00508E10u) [[unlikely]] return; }
L_00508E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00508E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508E20u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00508E20u) [[unlikely]] return; }
L_00508E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22176u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    st32((c.r[20].w[0] + 12u), 0u);
    st32((c.r[20].w[0] + 16u), 0u);
    st32((c.r[20].w[0] + 20u), 0u);
    st32((c.r[20].w[0] + 24u), 0u);
    st8((c.r[20].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00508E44:
    set32(c.r[16], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00508EB4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 264u), c.r[20].w[0]);  goto L_00508E90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508E60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508E60u) [[unlikely]] return; }
L_00508E60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508E70u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508E70u) [[unlikely]] return; }
L_00508E70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508E8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508E8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508E8Cu) [[unlikely]] return; }
L_00508E8C:
    st32((c.r[29].w[0] + 264u), c.r[20].w[0]);
    c.budget -= 1;
L_00508E90:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00508EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508EA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508EA0u) [[unlikely]] return; }
L_00508EA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508EB0u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508EB0u) [[unlikely]] return; }
L_00508EB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00508EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508EBCu); set32(c.r[5], ld32((c.r[29].w[0] + 264u)));  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x00508EBCu) [[unlikely]] return; }
L_00508EBC:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00508EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508EC8u); st32((c.r[29].w[0] + 220u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00508EC8u) [[unlikely]] return; }
L_00508EC8:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00508ED8u) [[unlikely]] return; }
L_00508ED8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  goto L_00508EF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508EECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 20u, depth + 1u); else { c.pc = 0x00424310u; return; } if (c.pc != 0x00508EECu) [[unlikely]] return; }
L_00508EEC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 2;
L_00508EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508EFCu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00508EFCu) [[unlikely]] return; }
L_00508EFC:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508F08u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 305u, depth + 1u); else { c.pc = 0x00423F70u; return; } if (c.pc != 0x00508F08u) [[unlikely]] return; }
L_00508F08:
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00508F5C; } }
L_00508F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 92u, depth + 1u); else { c.pc = 0x00448EF0u; return; } if (c.pc != 0x00508F1Cu) [[unlikely]] return; }
L_00508F1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_00508F38; } }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508F38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 305u, depth + 1u); else { c.pc = 0x00423F70u; return; } if (c.pc != 0x00508F38u) [[unlikely]] return; }
L_00508F38:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.f[21] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.budget -= 9;
L_00508F5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00508F14u | kUnwind; return; } goto L_00508F14; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 268u)));  goto L_00508F90; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508F88u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x00508F88u) [[unlikely]] return; }
L_00508F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00508FFC; } }
L_00508F90:
    set32(c.r[16], ld32((c.r[21].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_00508FFC; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[21].w[0] + 288u), c.r[20].w[0]);  goto L_00508FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508FACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508FACu) [[unlikely]] return; }
L_00508FAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508FBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508FBCu) [[unlikely]] return; }
L_00508FBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00508FD8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00508FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00508FD8u) [[unlikely]] return; }
L_00508FD8:
    st32((c.r[21].w[0] + 288u), c.r[20].w[0]);
    c.budget -= 1;
L_00508FDC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00508FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508FECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00508FECu) [[unlikely]] return; }
L_00508FEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00508FFCu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00508FFCu) [[unlikely]] return; }
L_00508FFC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_0050900C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00509010; } }
L_0050900C:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00509010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0050970C; } }
L_00509018:
    st32((c.r[29].w[0] + 260u), 0u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 256u), 0u);  if (t) { goto L_00509030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_00509034; } }
L_00509030:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00509034:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], c.r[29].w[0] + 260u);
    set32(c.r[6], ld32((c.r[23].w[0])));
    set32(c.r[7], c.r[23].w[0] + 4u);
    c.r[10].d[0] = ld8((c.r[29].w[0] + 195u));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[23].w[0] + 36u)));
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509060u); c.f[14] = c.f[22];  if (depth < kMaxDepth) unit_00D1(c, 269u, depth + 1u); else { c.pc = 0x00445D40u; return; } if (c.pc != 0x00509060u) [[unlikely]] return; }
L_00509060:
    set32(c.r[2], ld32((c.r[22].w[0] + 32u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 4u));  goto L_005090AC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], ld32((c.r[22].w[0])));
    c.f[15] = c.r[2].w[0];
    c.r[10].d[0] = ld8((c.r[29].w[0] + 195u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[11], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[7], c.r[22].w[0] + 4u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.f[12] = c.f[24];
    c.f[13] = c.f[23];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005090A8u); c.f[14] = c.f[22];  if (depth < kMaxDepth) unit_00D1(c, 269u, depth + 1u); else { c.pc = 0x00445D40u; return; } if (c.pc != 0x005090A8u) [[unlikely]] return; }
L_005090A8:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 1;
L_005090AC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 17;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  goto L_00509120; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 12;
L_00509120:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00509180; }
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[6], 0u + 48u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[9], c.r[7].w[0] + 12u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050914Cu); set32(c.r[11], c.r[7].w[0] + 32u);  if (depth < kMaxDepth) unit_00C8(c, 18u, depth + 1u); else { c.pc = 0x00420590u; return; } if (c.pc != 0x0050914Cu) [[unlikely]] return; }
L_0050914C:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050917C; } }
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], c.r[7].w[0] + 12u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050917Cu); set32(c.r[11], c.r[7].w[0] + 32u);  if (depth < kMaxDepth) unit_00C8(c, 18u, depth + 1u); else { c.pc = 0x00420590u; return; } if (c.pc != 0x0050917Cu) [[unlikely]] return; }
L_0050917C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00509180:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 252u), 0u);  if (t) { goto L_005091A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509190u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509190u) [[unlikely]] return; }
L_00509190:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005091A0u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005091A0u) [[unlikely]] return; }
L_005091A0:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 248u), 0u);  if (t) { goto L_005091C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005091B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005091B4u) [[unlikely]] return; }
L_005091B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005091C4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005091C4u) [[unlikely]] return; }
L_005091C4:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 244u), 0u);  if (t) { goto L_005091E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005091D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005091D8u) [[unlikely]] return; }
L_005091D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005091E8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005091E8u) [[unlikely]] return; }
L_005091E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_00509310; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509204u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 184u, depth + 1u); else { c.pc = 0x00449770u; return; } if (c.pc != 0x00509204u) [[unlikely]] return; }
L_00509204:
    set32(c.r[20], ld32((c.r[29].w[0] + 248u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 248u)));  goto L_00509278; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 248u), c.r[21].w[0]);  goto L_00509254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509224u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509224u) [[unlikely]] return; }
L_00509224:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509234u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509234u) [[unlikely]] return; }
L_00509234:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509250; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509250u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509250u) [[unlikely]] return; }
L_00509250:
    st32((c.r[29].w[0] + 248u), c.r[21].w[0]);
    c.budget -= 1;
L_00509254:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00509274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509264u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509264u) [[unlikely]] return; }
L_00509264:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509274u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509274u) [[unlikely]] return; }
L_00509274:
    set32(c.r[21], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_00509278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[20], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], 0u + 63u);
    set32(c.r[5], ld32((c.r[21].w[0] + 220u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 220u)));
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == c.r[21].d[0]; st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_005095A4; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 252u), c.r[21].w[0]);  goto L_005092E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005092B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005092B8u) [[unlikely]] return; }
L_005092B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005092C8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005092C8u) [[unlikely]] return; }
L_005092C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005092E4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005092E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005092E4u) [[unlikely]] return; }
L_005092E4:
    st32((c.r[29].w[0] + 252u), c.r[21].w[0]);
    c.budget -= 1;
L_005092E8:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_005095A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005092F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005092F8u) [[unlikely]] return; }
L_005092F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509308u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509308u) [[unlikely]] return; }
L_00509308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005095A4; } }
L_00509310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509318u); st32((c.r[29].w[0] + 212u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00509318u) [[unlikely]] return; }
L_00509318:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00509328u) [[unlikely]] return; }
L_00509328:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 240u), c.r[20].w[0]);  goto L_00509348; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509340u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x00509340u) [[unlikely]] return; }
L_00509340:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.r[20].w[0]);
    c.budget -= 2;
L_00509348:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 208u)));  goto L_0050936C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509358u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509358u) [[unlikely]] return; }
L_00509358:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509368u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509368u) [[unlikely]] return; }
L_00509368:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 1;
L_0050936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509374u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00509374u) [[unlikely]] return; }
L_00509374:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509384u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 184u, depth + 1u); else { c.pc = 0x00449770u; return; } if (c.pc != 0x00509384u) [[unlikely]] return; }
L_00509384:
    set32(c.r[20], ld32((c.r[29].w[0] + 248u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 248u)));  goto L_005093F8; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 248u), c.r[21].w[0]);  goto L_005093D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005093A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005093A4u) [[unlikely]] return; }
L_005093A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005093B4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005093B4u) [[unlikely]] return; }
L_005093B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005093D0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005093D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005093D0u) [[unlikely]] return; }
L_005093D0:
    st32((c.r[29].w[0] + 248u), c.r[21].w[0]);
    c.budget -= 1;
L_005093D4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_005093F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005093E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005093E4u) [[unlikely]] return; }
L_005093E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005093F4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005093F4u) [[unlikely]] return; }
L_005093F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_005093F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], 0u + 63u);
    set32(c.r[8], ld32((c.r[5].w[0] + 220u)));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 52u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[8].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 220u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509434u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509434u) [[unlikely]] return; }
L_00509434:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509444u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 184u, depth + 1u); else { c.pc = 0x00449770u; return; } if (c.pc != 0x00509444u) [[unlikely]] return; }
L_00509444:
    set32(c.r[20], ld32((c.r[29].w[0] + 244u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 244u)));  goto L_005094B8; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 244u), c.r[21].w[0]);  goto L_00509494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509464u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509464u) [[unlikely]] return; }
L_00509464:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509474u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509474u) [[unlikely]] return; }
L_00509474:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509490; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509490u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509490u) [[unlikely]] return; }
L_00509490:
    st32((c.r[29].w[0] + 244u), c.r[21].w[0]);
    c.budget -= 1;
L_00509494:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_005094B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005094A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005094A4u) [[unlikely]] return; }
L_005094A4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005094B4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005094B4u) [[unlikely]] return; }
L_005094B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_005094B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], 0u + 63u);
    set32(c.r[8], ld32((c.r[5].w[0] + 220u)));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 52u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[8].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 220u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005094F4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005094F4u) [[unlikely]] return; }
L_005094F4:
    set32(c.r[21], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 240u)));  goto L_00509568; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[29].w[0] + 252u), c.r[21].w[0]);  goto L_00509544; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509514u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509514u) [[unlikely]] return; }
L_00509514:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509524u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509524u) [[unlikely]] return; }
L_00509524:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509540; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509540u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509540u) [[unlikely]] return; }
L_00509540:
    st32((c.r[29].w[0] + 252u), c.r[21].w[0]);
    c.budget -= 1;
L_00509544:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00509564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509554u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509554u) [[unlikely]] return; }
L_00509554:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509564u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509564u) [[unlikely]] return; }
L_00509564:
    set32(c.r[20], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_00509568:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_005095A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509578u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509578u) [[unlikely]] return; }
L_00509578:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509588u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509588u) [[unlikely]] return; }
L_00509588:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005095A4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005095A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005095A4u) [[unlikely]] return; }
L_005095A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_005095A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_005095C4; }
    c.f[0] = ld32((c.r[30].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
L_005095C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005095CCu); st32((c.r[29].w[0] + 204u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x005095CCu) [[unlikely]] return; }
L_005095CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 268u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005095E8u); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005095E8u) [[unlikely]] return; }
L_005095E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005095F0u); set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x005095F0u) [[unlikely]] return; }
L_005095F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  goto L_00509618; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509614u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509614u) [[unlikely]] return; }
L_00509614:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 1;
L_00509618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 260u), 0u);  if (t) { goto L_00509644; } }
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 256u), 0u);  goto L_00509644; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509640u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509640u) [[unlikely]] return; }
L_00509640:
    st32((c.r[29].w[0] + 256u), 0u);
    c.budget -= 1;
L_00509644:
    set32(c.r[20], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[29].w[0] + 248u)));  goto L_00509688; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509658u) [[unlikely]] return; }
L_00509658:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509668u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509668u) [[unlikely]] return; }
L_00509668:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509684; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509684u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509684u) [[unlikely]] return; }
L_00509684:
    set32(c.r[20], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_00509688:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[29].w[0] + 252u)));  goto L_005096C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509698u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509698u) [[unlikely]] return; }
L_00509698:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005096A8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005096A8u) [[unlikely]] return; }
L_005096A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005096C4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005096C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005096C4u) [[unlikely]] return; }
L_005096C4:
    set32(c.r[20], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 1;
L_005096C8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00509708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005096D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005096D8u) [[unlikely]] return; }
L_005096D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005096E8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005096E8u) [[unlikely]] return; }
L_005096E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509704; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509704u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509704u) [[unlikely]] return; }
L_00509704:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00509708:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0050970C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00509018u | kUnwind; return; } goto L_00509018; }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 268u)));  goto L_00509738; }
    set32(c.r[5], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509734u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x00509734u) [[unlikely]] return; }
L_00509734:
    set32(c.r[16], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 1;
L_00509738:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 236u), c.r[16].w[0]);  if (t) { goto L_00509758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509748u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509748u) [[unlikely]] return; }
L_00509748:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509758u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509758u) [[unlikely]] return; }
L_00509758:
    set32(c.r[16], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_00509780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509770u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509770u) [[unlikely]] return; }
L_00509770:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509780u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509780u) [[unlikely]] return; }
L_00509780:
    set32(c.r[16], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 264u)));  goto L_005097C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509794u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509794u) [[unlikely]] return; }
L_00509794:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005097A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005097A4u) [[unlikely]] return; }
L_005097A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005097C0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005097C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005097C0u) [[unlikely]] return; }
L_005097C0:
    set32(c.r[16], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_005097C4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 268u)));  goto L_00509804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005097D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005097D4u) [[unlikely]] return; }
L_005097D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005097E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005097E4u) [[unlikely]] return; }
L_005097E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509800; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509800u) [[unlikely]] return; }
L_00509800:
    set32(c.r[16], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 1;
L_00509804:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  goto L_00509844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509814u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00509814u) [[unlikely]] return; }
L_00509814:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509824u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509824u) [[unlikely]] return; }
L_00509824:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00509840; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509840u) [[unlikely]] return; }
L_00509840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_00509844:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00509890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[12], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[12].d[0] == c.r[3].d[0]) { c.r[6].d[0] = c.r[9].d[0] + 0ull;  goto L_005098D8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[3].d[0];  if (t) { goto L_005098C8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_005098C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_005098E8; } }
L_005098C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005098D0u);  if (depth < kMaxDepth) unit_0102(c, 121u, depth + 1u); else { c.pc = 0x00508D00u; return; } if (c.pc != 0x005098D0u) [[unlikely]] return; }
L_005098D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0050990C; } }
L_005098D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005098E0u); c.r[7].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 87u, depth + 1u); else { c.pc = 0x00508920u; return; } if (c.pc != 0x005098E0u) [[unlikely]] return; }
L_005098E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00509908; } }
L_005098E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00509908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005098F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005098F8u) [[unlikely]] return; }
L_005098F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509908u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00509908u) [[unlikely]] return; }
L_00509908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0050990C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00509920:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.f[12]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_00509940:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00509970:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_005099A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005099BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0102(c, 63u, depth + 1u); else { c.pc = 0x00508690u; return; } if (c.pc != 0x005099BCu) [[unlikely]] return; }
L_005099BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005099C4u);  if (depth < kMaxDepth) unit_00C8(c, 259u, depth + 1u); else { c.pc = 0x004238E0u; return; } if (c.pc != 0x005099C4u) [[unlikely]] return; }
L_005099C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005099CCu);  if (depth < kMaxDepth) unit_0103(c, 31u, depth + 1u); else { c.pc = 0x0050C300u; return; } if (c.pc != 0x005099CCu) [[unlikely]] return; }
L_005099CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005099E0u); set32(c.r[6], c.r[6].w[0] + 26256u);  if (depth < kMaxDepth) unit_0102(c, 263u, depth + 1u); else { c.pc = 0x00509C30u; return; } if (c.pc != 0x005099E0u) [[unlikely]] return; }
L_005099E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_005099FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_00509A00; } }
L_005099FC:
    set32(c.r[5], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_00509A00:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509A14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509A14u) [[unlikely]] return; }
L_00509A14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00509A70; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509A30u); set32(c.r[6], c.r[6].w[0] + 26260u);  if (depth < kMaxDepth) unit_0102(c, 263u, depth + 1u); else { c.pc = 0x00509C30u; return; } if (c.pc != 0x00509A30u) [[unlikely]] return; }
L_00509A30:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[17], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 64u);  if (t) { goto L_00509A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_00509A50; } }
L_00509A4C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00509A50:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509A64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509A64u) [[unlikely]] return; }
L_00509A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00509A70; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00509A70:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00509A88; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509A84u) [[unlikely]] return; }
L_00509A84:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00509A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509A90u) [[unlikely]] return; }
L_00509A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509A98u);  if (depth < kMaxDepth) unit_0103(c, 30u, depth + 1u); else { c.pc = 0x0050C2F0u; return; } if (c.pc != 0x00509A98u) [[unlikely]] return; }
L_00509A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509AA0u);  if (depth < kMaxDepth) unit_00C8(c, 258u, depth + 1u); else { c.pc = 0x004238D0u; return; } if (c.pc != 0x00509AA0u) [[unlikely]] return; }
L_00509AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509AA8u);  if (depth < kMaxDepth) unit_0102(c, 62u, depth + 1u); else { c.pc = 0x00508680u; return; } if (c.pc != 0x00509AA8u) [[unlikely]] return; }
L_00509AA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00509AD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 124u);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00509B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00509B08; } }
L_00509B04:
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00509B08:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B1Cu); set32(c.r[6], c.r[6].w[0] + 26264u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00509B1Cu) [[unlikely]] return; }
L_00509B1C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B28u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00509B28u) [[unlikely]] return; }
L_00509B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B30u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 455u, depth + 1u); else { c.pc = 0x0012BAC0u; return; } if (c.pc != 0x00509B30u) [[unlikely]] return; }
L_00509B30:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00509B3Cu) [[unlikely]] return; }
L_00509B3C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509B48u) [[unlikely]] return; }
L_00509B48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B5Cu); set32(c.r[6], c.r[6].w[0] + 26256u);  if (depth < kMaxDepth) unit_0102(c, 271u, depth + 1u); else { c.pc = 0x00509D40u; return; } if (c.pc != 0x00509B5Cu) [[unlikely]] return; }
L_00509B5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00509B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_00509B7C; } }
L_00509B78:
    set32(c.r[5], c.r[29].w[0] + 129u);
    c.budget -= 1;
L_00509B7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509B90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509B90u) [[unlikely]] return; }
L_00509B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00509BEC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509BACu); set32(c.r[6], c.r[6].w[0] + 26260u);  if (depth < kMaxDepth) unit_0102(c, 271u, depth + 1u); else { c.pc = 0x00509D40u; return; } if (c.pc != 0x00509BACu) [[unlikely]] return; }
L_00509BAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[17], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_00509BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_00509BCC; } }
L_00509BC8:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00509BCC:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509BE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509BE0u) [[unlikely]] return; }
L_00509BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00509BEC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00509BEC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00509C04; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509C00u) [[unlikely]] return; }
L_00509C00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00509C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509C0Cu) [[unlikely]] return; }
L_00509C0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00509C30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509C58u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00509C58u) [[unlikely]] return; }
L_00509C58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00509C90; }
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00509C80; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00509C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509C88u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00509C88u) [[unlikely]] return; }
L_00509C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_00509CA0; } }
L_00509C90:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509C9Cu); set32(c.r[5], c.r[5].w[0] + 26307u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00509C9Cu) [[unlikely]] return; }
L_00509C9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_00509CA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], c.r[29].w[0] + 81u);  goto L_00509CB0; }
    set32(c.r[9], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00509CB0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00509CC8; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 26312u);  if (t) { goto L_00509CCC; } }
L_00509CC8:
    set32(c.r[8], c.r[8].w[0] + 26316u);
    c.budget -= 1;
L_00509CCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 124u);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_00509CE8; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00509CE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509D00u); set32(c.r[6], c.r[6].w[0] + 26320u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00509D00u) [[unlikely]] return; }
L_00509D00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509D0Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00509D0Cu) [[unlikely]] return; }
L_00509D0C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509D18u) [[unlikely]] return; }
L_00509D18:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509D24u) [[unlikely]] return; }
L_00509D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00509D40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509D68u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00509D68u) [[unlikely]] return; }
L_00509D68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00509DA0; }
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00509D90; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00509D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509D98u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00509D98u) [[unlikely]] return; }
L_00509D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_00509DB0; } }
L_00509DA0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509DACu); set32(c.r[5], c.r[5].w[0] + 26307u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00509DACu) [[unlikely]] return; }
L_00509DAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_00509DB0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], c.r[29].w[0] + 81u);  goto L_00509DC0; }
    set32(c.r[9], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00509DC0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00509DD8; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 26312u);  if (t) { goto L_00509DDC; } }
L_00509DD8:
    set32(c.r[8], c.r[8].w[0] + 26316u);
    c.budget -= 1;
L_00509DDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 124u);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_00509DF8; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00509DF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509E10u); set32(c.r[6], c.r[6].w[0] + 26343u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00509E10u) [[unlikely]] return; }
L_00509E10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509E1Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00509E1Cu) [[unlikely]] return; }
L_00509E1C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509E28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509E28u) [[unlikely]] return; }
L_00509E28:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00509E34u) [[unlikely]] return; }
L_00509E34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00509E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00509EBC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00509E8C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509E88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509E88u) [[unlikely]] return; }
L_00509E88:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00509E8C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00509EA8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00509EA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00509EA4u) [[unlikely]] return; }
L_00509EA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00509EA8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00509EC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509EBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00509EBCu) [[unlikely]] return; }
L_00509EBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00509EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00509EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509F18u); set32(c.r[4], 0u + 1036u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00509F18u) [[unlikely]] return; }
L_00509F18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  goto L_00509F2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509F28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030DD30u; return; } if (c.pc != 0x00509F28u) [[unlikely]] return; }
L_00509F28:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00509F2C:
    set32(c.r[4], 0u + 1036u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509F38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00509F38u) [[unlikely]] return; }
L_00509F38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  goto L_00509F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00509F48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030DD30u; return; } if (c.pc != 0x00509F48u) [[unlikely]] return; }
L_00509F48:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00509F4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00509F60:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00469970u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 139u, depth); }
L_00509F70:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 328u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));  goto L_00509F88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));  if (t) { goto L_00509F90; } }
L_00509F88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_00509F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00509FA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 328u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 324u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00509FC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00509FC4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 1;
L_00509FC4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00509FD0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00509FD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00509FE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 328u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 324u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050A004; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050A004; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 1;
L_0050A004:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0050A010; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050A010:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0050A020:
    set32(c.r[29], c.r[29].w[0] - 1040u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A080u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050A080u) [[unlikely]] return; }
L_0050A080:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A094u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050A094u) [[unlikely]] return; }
L_0050A094:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.f[3] = ld32((c.r[18].w[0]));  if (t) { goto L_0050A0A8; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050A0C4; } }
L_0050A0A8:
    set32(c.r[4], c.r[16].w[0] >> 1);
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050A0C4:
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050A0F0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[22], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[18].w[0] + 8u));  if (t) { goto L_0050A108; } }
L_0050A0F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[22], c.f[0]);
    c.r[22].d[0] = c.r[22].d[0] | c.r[3].d[0];
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 6;
L_0050A108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0050A124; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050A140; } }
L_0050A124:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050A140:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050A16C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[23], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 4u));  if (t) { goto L_0050A184; } }
L_0050A16C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[23], c.f[0]);
    c.r[23].d[0] = c.r[23].d[0] | c.r[3].d[0];
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 6;
L_0050A184:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[3]);  if (t) { goto L_0050A198; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050A1B4; } }
L_0050A198:
    set32(c.r[4], c.r[16].w[0] >> 1);
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050A1B4:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050A1E0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 12u));  if (t) { goto L_0050A1F8; } }
L_0050A1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 6;
L_0050A1F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0050A20C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050A228; } }
L_0050A20C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050A228:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050A254; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[21], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[19].w[0] + 96u));  if (t) { goto L_0050A26C; } }
L_0050A254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[0]);
    c.r[21].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.f[1] = ld32((c.r[19].w[0] + 96u));
    c.budget -= 6;
L_0050A26C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 32544u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0050A284; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050A284:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = ld32((c.r[28].w[0] - 32544u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_0050A2AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050A2AC:
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = ld32((c.r[28].w[0] - 32544u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_0050A2D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050A2D4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A304u); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 325u, depth + 1u); else { c.pc = 0x0050AED0u; return; } if (c.pc != 0x0050A304u) [[unlikely]] return; }
L_0050A304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 26544u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 26548u)));
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26552u)));
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26556u)));
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26560u)));
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26564u)));
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26568u)));
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26572u)));
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26576u)));
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26580u)));
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26584u)));
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26588u)));
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26592u)));
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26596u)));
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 26600u)));
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 26604u)));
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 26608u));
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[20].w[0] + 968u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 26609u));
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 944u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 948u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 952u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 956u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 960u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 964u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 968u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 972u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 976u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 980u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 984u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 988u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 992u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 996u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1000u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1004u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 1008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 92;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A474u); st8((c.r[29].w[0] + 1009u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 126u, depth + 1u); else { c.pc = 0x001B55E0u; return; } if (c.pc != 0x0050A474u) [[unlikely]] return; }
L_0050A474:
    set32(c.r[2], c.r[22].w[0] << 4);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[23].w[0] << 4);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 944u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 4);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 948u), c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] << 4);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1012u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 1016u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    st32((c.r[29].w[0] + 1020u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    st8((c.r[29].w[0] + 1009u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    st32((c.r[29].w[0] + 992u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1024u), c.r[3].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A4E4u); st32((c.r[29].w[0] + 1004u), 0u);  if (depth < kMaxDepth) unit_002F(c, 33u, depth + 1u); else { c.pc = 0x001BC590u; return; } if (c.pc != 0x0050A4E4u) [[unlikely]] return; }
L_0050A4E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A4F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 44u, depth + 1u); else { c.pc = 0x001B9B90u; return; } if (c.pc != 0x0050A4F8u) [[unlikely]] return; }
L_0050A4F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 864u);
    set32(c.r[6], c.r[6].w[0] + 26464u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_0050A508:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050A508u | kUnwind; return; } goto L_0050A508; } }
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 31832u));
    st32((c.r[5].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0050A5C8; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], 0u + 9u);
    st32((c.r[29].w[0] + 944u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 632u);
    set32(c.r[8], ld32((c.r[20].w[0] + 636u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[20].w[0] + 112u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[2], c.r[17].w[0] + 1u);
    st32((c.r[29].w[0] + 1004u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 944u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[29].w[0] + 948u), c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 980u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 632u)));
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 1016u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 1012u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 1020u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A5C8u); st32((c.r[29].w[0] + 1024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 44u, depth + 1u); else { c.pc = 0x001B9B90u; return; } if (c.pc != 0x0050A5C8u) [[unlikely]] return; }
L_0050A5C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 26548u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 26544u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[7].w[0] + 26560u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 868u), c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 26556u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 26552u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[15], ld32((c.r[5].w[0] + 26568u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 880u), c.r[7].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 26576u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 872u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 864u), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[3]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[14], ld32((c.r[4].w[0] + 26572u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 26564u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    st32((c.r[29].w[0] + 876u), c.r[8].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[10].w[0] + 26588u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 884u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[12], ld32((c.r[12].w[0] + 26580u)));
    st32((c.r[29].w[0] + 908u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 26600u)));
    set32(c.r[11], ld32((c.r[11].w[0] + 26584u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 26592u)));
    st32((c.r[29].w[0] + 920u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 26609u));
    set32(c.r[8], ld32((c.r[8].w[0] + 26596u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 26604u)));
    st8((c.r[29].w[0] + 929u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 26608u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 888u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 892u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 896u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 900u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 904u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 912u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 916u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 924u), c.r[6].w[0]);
    c.budget -= 59;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 928u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0050A72C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1000u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050A6D8; } }
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[17].w[0] << 1);  goto L_0050A730; }
L_0050A6D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[19].w[0] + 128u));  goto L_0050A6E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_0050A6E8:
    set32(c.r[3], c.r[17].w[0] + 7u);
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 560u), 0u);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0] + 564u), 0u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 568u), 0u);
    st32((c.r[29].w[0] + 572u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A72Cu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_002D(c, 197u, depth + 1u); else { c.pc = 0x001B6B60u; return; } if (c.pc != 0x0050A72Cu) [[unlikely]] return; }
L_0050A72C:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.budget -= 1;
L_0050A730:
    set32(c.r[5], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 828u)));
    c.r[3].d[0] = c.r[3].d[0] & 10ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_0050A9AC; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], 0u + 128u);
    st32((c.r[29].w[0] + 880u), c.r[7].w[0]);
    set32(c.r[4], c.r[20].w[0] + 112u);
    st32((c.r[29].w[0] + 900u), c.r[2].w[0]);
    set32(c.r[5], c.r[20].w[0] + 216u);
    set32(c.r[6], c.r[29].w[0] + 864u);
    st32((c.r[29].w[0] + 924u), 0u);
    st32((c.r[29].w[0] + 864u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A78Cu); st32((c.r[29].w[0] + 868u), 0u);  if (depth < kMaxDepth) unit_002E(c, 115u, depth + 1u); else { c.pc = 0x001BACE0u; return; } if (c.pc != 0x0050A78Cu) [[unlikely]] return; }
L_0050A78C:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 944u);  goto L_0050A7C4; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A7ACu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 337u, depth + 1u); else { c.pc = 0x0050B2E0u; return; } if (c.pc != 0x0050A7ACu) [[unlikely]] return; }
L_0050A7AC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 992u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A7C0u); set32(c.r[5], c.r[20].w[0] + 980u);  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B51A0u; return; } if (c.pc != 0x0050A7C0u) [[unlikely]] return; }
L_0050A7C0:
    set32(c.r[4], c.r[20].w[0] + 944u);
    c.budget -= 1;
L_0050A7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A7CCu);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B53C0u; return; } if (c.pc != 0x0050A7CCu) [[unlikely]] return; }
L_0050A7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_0050A7E0; } }
L_0050A7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A7DCu); set32(c.r[4], c.r[20].w[0] + 956u);  if (depth < kMaxDepth) unit_002D(c, 126u, depth + 1u); else { c.pc = 0x001B55E0u; return; } if (c.pc != 0x0050A7DCu) [[unlikely]] return; }
L_0050A7DC:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_0050A7E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050A7D4u | kUnwind; return; } goto L_0050A7D4; } }
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 788u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 800u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 832u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 792u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 796u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 804u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 808u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 816u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 820u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 824u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 836u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 840u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 844u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 848u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 849u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32208u));
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31720u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 45;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[19].w[0] + 116u));  goto L_0050A8E0; }
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[20].w[0] + 216u);
    st32((c.r[29].w[0] + 924u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[6], c.r[29].w[0] + 864u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 880u), 0u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A8DCu); st32((c.r[29].w[0] + 900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 115u, depth + 1u); else { c.pc = 0x001BACE0u; return; } if (c.pc != 0x0050A8DCu) [[unlikely]] return; }
L_0050A8DC:
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    c.budget -= 1;
L_0050A8E0:
    c.f[1] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 832u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 216u);
    set32(c.r[5], c.r[20].w[0] + 632u);
    set32(c.r[6], c.r[29].w[0] + 784u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 844u), 0u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A934u); st32((c.r[29].w[0] + 820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 115u, depth + 1u); else { c.pc = 0x001BACE0u; return; } if (c.pc != 0x0050A934u) [[unlikely]] return; }
L_0050A934:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0050A9AC; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 844u), c.r[2].w[0]);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[17].w[0] + 7u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 216u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 784u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 8u);
    set32(c.r[2], c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050A9ACu); st32((c.r[29].w[0] + 820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 115u, depth + 1u); else { c.pc = 0x001BACE0u; return; } if (c.pc != 0x0050A9ACu) [[unlikely]] return; }
L_0050A9AC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0050AA44; } }
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050A9C4; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0050A9C4:
    st32((c.r[29].w[0] + 924u), c.r[2].w[0]);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[19].w[0] + 136u));
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], c.r[17].w[0] + 7u);
    st32((c.r[29].w[0] + 912u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 880u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[20].w[0] + 632u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 864u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0] + 864u), 0u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 868u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8u);
    set32(c.r[2], c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AA40u); st32((c.r[29].w[0] + 900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 115u, depth + 1u); else { c.pc = 0x001BACE0u; return; } if (c.pc != 0x0050AA40u) [[unlikely]] return; }
L_0050AA40:
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050AA44:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { ld128((c.r[29].w[0] + 544u) & ~15u, c.r[3]);  goto L_0050AE0C; }
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[29].w[0] + 704u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 736u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[29].w[0] + 696u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 688u), 0u);
    st32((c.r[29].w[0] + 692u), 0u);
    st32((c.r[29].w[0] + 700u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 708u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 712u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 716u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 724u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 728u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 744u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 39;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[20].w[0] + 632u)));  goto L_0050AD78; }
    c.f[0] = ld32((c.r[28].w[0] - 29052u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 156u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 5u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AB08u); mmi::pminw(c.r[17], c.r[4], c.r[3]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0050AB08u) [[unlikely]] return; }
L_0050AB08:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_0050AB1C; }
    c.f[1] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0050AB34; } }
L_0050AB1C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0050AB34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 4u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[28].w[0] - 32252u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    c.f[0] = ld32((c.r[28].w[0] - 31832u));
    c.f[20] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0050AD74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 660u), 0u);  if (t) { goto L_0050ABAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AB9Cu); set32(c.r[17], ld32((c.r[29].w[0] + 660u)));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050AB9Cu) [[unlikely]] return; }
L_0050AB9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ABACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050ABACu) [[unlikely]] return; }
L_0050ABAC:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ABB8u); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_002F(c, 27u, depth + 1u); else { c.pc = 0x001BC4C0u; return; } if (c.pc != 0x0050ABB8u) [[unlikely]] return; }
L_0050ABB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ABCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050ABCCu) [[unlikely]] return; }
L_0050ABCC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0050ABE0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050ABF8; } }
L_0050ABE0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[21]);
    c.budget -= 6;
L_0050ABF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AC0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050AC0Cu) [[unlikely]] return; }
L_0050AC0C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0050AC20; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050AC38; } }
L_0050AC20:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0050AC38:
    fpu_div(c, 4u, c.f[21], c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 636u)));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::mul(c.f[0], c.f[4]);  if (t) { goto L_0050AC80; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050AC9C; } }
L_0050AC80:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050AC9C:
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 580u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], 0u + 128u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], c.r[4].w[0] << 4);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 4);
    st32((c.r[29].w[0] + 756u), c.r[6].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 760u), c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 632u)));
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[20].w[0] + 632u);
    set32(c.r[6], c.r[29].w[0] + 688u);
    st32((c.r[29].w[0] + 700u), 0u);
    set32(c.r[11], c.f[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[10], c.r[9].w[0] - c.r[11].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[9], c.r[11].w[0] << 4);
    st32((c.r[29].w[0] + 764u), c.r[9].w[0]);
    set32(c.r[9], c.r[10].w[0] >> 1);
    set32(c.r[9], c.r[9].w[0] << 4);
    st32((c.r[29].w[0] + 696u), c.r[9].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 636u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 716u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 748u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 768u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 724u), c.r[2].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AD34u); st32((c.r[29].w[0] + 708u), 0u);  if (depth < kMaxDepth) unit_002E(c, 44u, depth + 1u); else { c.pc = 0x001B9B90u; return; } if (c.pc != 0x0050AD34u) [[unlikely]] return; }
L_0050AD34:
    set32(c.r[17], ld32((c.r[29].w[0] + 660u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0050AD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AD48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050AD48u) [[unlikely]] return; }
L_0050AD48:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AD58u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050AD58u) [[unlikely]] return; }
L_0050AD58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050AD74; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AD74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050AD74u) [[unlikely]] return; }
L_0050AD74:
    set32(c.r[3], ld32((c.r[20].w[0] + 632u)));
    c.budget -= 1;
L_0050AD78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 756u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[20].w[0] + 636u)));
    c.f[1] = 0u;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[3] = ld32((c.r[28].w[0] - 32076u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 748u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 696u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    st32((c.r[29].w[0] + 760u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 700u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 768u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    st32((c.r[29].w[0] + 708u), c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050ADF4u); st32((c.r[29].w[0] + 724u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 33u, depth + 1u); else { c.pc = 0x001BC590u; return; } if (c.pc != 0x0050ADF4u) [[unlikely]] return; }
L_0050ADF4:
    set32(c.r[4], c.r[20].w[0] + 632u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AE08u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 44u, depth + 1u); else { c.pc = 0x001B9B90u; return; } if (c.pc != 0x0050AE08u) [[unlikely]] return; }
L_0050AE08:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[3]);
    c.budget -= 1;
L_0050AE0C:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);  goto L_0050AE88; }
    c.f[12] = ld32((c.r[19].w[0] + 96u));
    c.f[0] = ld32((c.r[28].w[0] - 31832u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0050AE84; } }
    c.f[1] = ld32((c.r[19].w[0] + 92u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050AE58; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0050AE70; } }
L_0050AE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
L_0050AE70:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050AE84u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 141u, depth + 1u); else { c.pc = 0x001BB6C0u; return; } if (c.pc != 0x0050AE84u) [[unlikely]] return; }
L_0050AE84:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 1;
L_0050AE88:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[20].w[0] + 1000u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1040u);  c.pc = t; return; }
L_0050AED0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[7], ld32((c.r[3].w[0] + 26544u)));
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[4].w[0] + 26556u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 26548u)));
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[9], ld32((c.r[9].w[0] + 26584u)));
    c.f[20] = ld32((c.r[28].w[0] - 29044u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 300u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[12], ld32((c.r[4].w[0] + 26576u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 26552u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 292u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 288u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 26560u)));
    st32((c.r[29].w[0] + 296u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 26568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[10], ld32((c.r[5].w[0] + 26572u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 26580u)));
    st32((c.r[29].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[8].w[0] + 26588u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 26592u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 26596u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 26600u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 26608u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 26609u));
    st32((c.r[29].w[0] + 316u), c.r[10].w[0]);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 320u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 348u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 332u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 336u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 340u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[5].w[0]);
    st8((c.r[29].w[0] + 352u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 71;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 353u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0050B0C8; } }
L_0050AFEC:
    set32(c.r[5], c.r[17].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0050B0C8; }
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[4], c.r[18].w[0] >> 1);  goto L_0050B020; }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050B038; } }
L_0050B020:
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0050B038:
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[14], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0050B0C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B098u); c.f[15] = c.f[20];  if (depth < kMaxDepth) unit_002E(c, 18u, depth + 1u); else { c.pc = 0x001B8B40u; return; } if (c.pc != 0x0050B098u) [[unlikely]] return; }
L_0050B098:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0050B0C4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[4], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] >> 2);
    set32(c.r[21], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0050B0C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0050B0C8:
    set32(c.r[3], ld32((c.r[22].w[0] + 144u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[22].w[0] + 140u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050AFECu | kUnwind; return; } goto L_0050AFEC; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0050B258; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B0E8u);  if (depth < kMaxDepth) unit_002F(c, 33u, depth + 1u); else { c.pc = 0x001BC590u; return; } if (c.pc != 0x0050B0E8u) [[unlikely]] return; }
L_0050B0E8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[16].w[0] + 84u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 56u));
    st64((c.r[29].w[0] + 232u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 64u));
    st64((c.r[29].w[0] + 240u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    st64((c.r[29].w[0] + 248u), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 80u));
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 81u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B188u); st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0102(c, 334u, depth + 1u); else { c.pc = 0x0050B290u; return; } if (c.pc != 0x0050B188u) [[unlikely]] return; }
L_0050B188:
    c.f[0] = c.r[21].w[0];
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[9], c.r[2].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[20].w[0] + c.r[23].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[10], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 264u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[11], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[0] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 268u), c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[19].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B214u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 197u, depth + 1u); else { c.pc = 0x001B6B60u; return; } if (c.pc != 0x0050B214u) [[unlikely]] return; }
L_0050B214:
    set32(c.r[16], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0050B254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B228u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050B228u) [[unlikely]] return; }
L_0050B228:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B238u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050B238u) [[unlikely]] return; }
L_0050B238:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050B254; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050B254u) [[unlikely]] return; }
L_0050B254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0050B258:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0050B290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_0050B2C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B2B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050B2B8u) [[unlikely]] return; }
L_0050B2B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B2C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050B2C8u) [[unlikely]] return; }
L_0050B2C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0050B2E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[3].w[0] + 992u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[3].w[0] + 992u)));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.f[20] = ld32((c.r[5].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 20u)));
    c.f[2] = c.r[3].w[0];
    set32(c.r[21], ld32((c.r[6].w[0] + 64u)));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0050B374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_0050B378; } }
L_0050B374:
    c.f[23] = 0u;
    c.budget -= 1;
L_0050B378:
    c.f[21] = ld32((c.r[19].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0050B39C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[24] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_0050B3A0; } }
L_0050B39C:
    c.f[24] = 0u;
    c.budget -= 1;
L_0050B3A0:
    c.f[22] = ld32((c.r[19].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0050B3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[25] = fp::sub(c.f[22], c.f[0]);  if (t) { goto L_0050B3C8; } }
L_0050B3C4:
    c.f[25] = 0u;
    c.budget -= 1;
L_0050B3C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = c.f[0];  goto L_0050B3E0; }
L_0050B3E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[21] = c.f[0];  goto L_0050B3F8; }
L_0050B3F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[22] = c.f[0];  goto L_0050B410; }
L_0050B410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0050B44C; } }
L_0050B418:
    set32(c.r[3], c.r[20].w[0] << 3);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B438u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 228u, depth + 1u); else { c.pc = 0x002C5EF0u; return; } if (c.pc != 0x0050B438u) [[unlikely]] return; }
L_0050B438:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 5;
L_0050B44C:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050B418u | kUnwind; return; } goto L_0050B418; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], c.r[19].w[0] + 56u);
    set32(c.r[5], c.r[19].w[0] + 40u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    c.budget -= 6;
L_0050B474:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.f[5] = c.f[2];
    c.f[4] = c.f[2];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[2];  if (t) { goto L_0050B5B0; } }
L_0050B494:
    set32(c.r[10], c.r[7].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[29].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0] + 144u)));
    set32(c.r[9], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    c.budget -= 10;
    { const bool t = c.r[9].sd[0] < 0; c.f[8] = ld32((c.r[6].w[0]));  if (t) { goto L_0050B4C8; } }
    c.f[6] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[6]);  if (t) { goto L_0050B4E4; } }
L_0050B4C8:
    set32(c.r[10], c.r[9].w[0] >> 1);
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.f[6] = c.r[10].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[6] = fp::add(c.f[6], c.f[6]);
    c.budget -= 7;
L_0050B4E4:
    c.facc = fp::add(c.f[2], c.f[23]);
    c.r[9].d[0] = ld8((c.r[11].w[0] + 1u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[20], c.f[6]));
    c.f[7] = fp::sub(c.f[6], c.f[8]);
    c.f[6] = ld32((c.r[5].w[0]));
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[8] = ld32((c.r[6].w[0] + 4u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.facc = fp::add(c.f[2], c.f[5]);
    c.budget -= 11;
    { const bool t = c.r[9].sd[0] < 0; c.f[5] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));  if (t) { goto L_0050B51C; } }
    c.f[6] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[6]);  if (t) { goto L_0050B538; } }
L_0050B51C:
    set32(c.r[10], c.r[9].w[0] >> 1);
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.f[6] = c.r[10].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[6] = fp::add(c.f[6], c.f[6]);
    c.budget -= 7;
L_0050B538:
    c.facc = fp::add(c.f[2], c.f[24]);
    c.r[9].d[0] = ld8((c.r[11].w[0] + 2u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[21], c.f[6]));
    c.f[7] = fp::sub(c.f[6], c.f[8]);
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[8] = ld32((c.r[6].w[0] + 8u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.facc = fp::add(c.f[2], c.f[4]);
    c.budget -= 11;
    { const bool t = c.r[9].sd[0] < 0; c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));  if (t) { goto L_0050B570; } }
    c.f[6] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[6]);  if (t) { goto L_0050B58C; } }
L_0050B570:
    set32(c.r[10], c.r[9].w[0] >> 1);
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.f[6] = c.r[10].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[6] = fp::add(c.f[6], c.f[6]);
    c.budget -= 7;
L_0050B58C:
    c.facc = fp::add(c.f[2], c.f[25]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[22], c.f[6]));
    c.f[7] = fp::sub(c.f[6], c.f[8]);
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.budget -= 9;
L_0050B5B0:
    c.r[9].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { set32(c.r[9], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050B494u | kUnwind; return; } goto L_0050B494; }
    c.f[0] = fp::max(c.f[5], c.f[2]);
    c.f[5] = fp::min(c.f[0], c.f[1]);
    c.f[0] = fp::max(c.f[4], c.f[2]);
    c.f[4] = fp::min(c.f[0], c.f[1]);
    c.f[0] = fp::max(c.f[3], c.f[2]);
    c.f[3] = fp::min(c.f[0], c.f[1]);
    set32(c.r[3], c.r[8].w[0] << 2);
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[7], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[4]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[3]);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.f[0]);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050B474u | kUnwind; return; } goto L_0050B474; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
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
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0050B660:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B69Cu); c.r[17].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050B69Cu) [[unlikely]] return; }
L_0050B69C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B6B0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050B6B0u) [[unlikely]] return; }
L_0050B6B0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.f[3] = ld32((c.r[18].w[0]));  if (t) { goto L_0050B6C4; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050B6E0; } }
L_0050B6C4:
    set32(c.r[4], c.r[16].w[0] >> 1);
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050B6E0:
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050B70C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[18].w[0] + 8u));  if (t) { goto L_0050B724; } }
L_0050B70C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 6;
L_0050B724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0050B740; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050B75C; } }
L_0050B740:
    set32(c.r[5], c.r[2].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050B75C:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050B788; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 4u));  if (t) { goto L_0050B7A0; } }
L_0050B788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 6;
L_0050B7A0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[3]);  if (t) { goto L_0050B7B4; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050B7D0; } }
L_0050B7B4:
    set32(c.r[5], c.r[16].w[0] >> 1);
    c.r[4].d[0] = c.r[16].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050B7D0:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050B7FC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 12u));  if (t) { goto L_0050B814; } }
L_0050B7FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 6;
L_0050B814:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0050B828; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0050B844; } }
L_0050B828:
    set32(c.r[5], c.r[2].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0050B844:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_0050B870; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[19].w[0] + 120u));  if (t) { goto L_0050B888; } }
L_0050B870:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = ld32((c.r[19].w[0] + 120u));
    c.budget -= 6;
L_0050B888:
    c.f[0] = ld32((c.r[28].w[0] - 31832u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0050B9D4; }
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[12], ld32((c.r[9].w[0] + 26584u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 26552u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 26564u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 26556u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 26560u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 104u), c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 26568u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 26576u)));
    set32(c.r[11], c.r[17].w[0] + 1u);
    set32(c.r[13], ld32((c.r[2].w[0] + 26580u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 26572u)));
    st32((c.r[29].w[0] + 116u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 120u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 124u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[8].w[0] + 26588u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 26592u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 26596u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 26600u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 26604u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 26608u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26609u));
    st32((c.r[29].w[0] + 128u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[13].w[0]);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 136u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 636u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[2].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 632u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    st8((c.r[29].w[0] + 161u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 73;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B9BCu); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 33u, depth + 1u); else { c.pc = 0x001BC590u; return; } if (c.pc != 0x0050B9BCu) [[unlikely]] return; }
L_0050B9BC:
    set32(c.r[5], c.r[20].w[0] + 632u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050B9D0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 44u, depth + 1u); else { c.pc = 0x001B9B90u; return; } if (c.pc != 0x0050B9D0u) [[unlikely]] return; }
L_0050B9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0050B9D4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0050B9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050BC0C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 992u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 996u)));  goto L_0050BA80; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050BA5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BA2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050BA2Cu) [[unlikely]] return; }
L_0050BA2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BA3Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050BA3Cu) [[unlikely]] return; }
L_0050BA3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050BA58; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BA58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050BA58u) [[unlikely]] return; }
L_0050BA58:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050BA5C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 992u), 0u);  if (t) { goto L_0050BA7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BA6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050BA6Cu) [[unlikely]] return; }
L_0050BA6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BA7Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050BA7Cu) [[unlikely]] return; }
L_0050BA7C:
    set32(c.r[18], ld32((c.r[17].w[0] + 996u)));
    c.budget -= 1;
L_0050BA80:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 968u);  goto L_0050BAEC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0050BAC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BA98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050BA98u) [[unlikely]] return; }
L_0050BA98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BAA8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050BAA8u) [[unlikely]] return; }
L_0050BAA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050BAC4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BAC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050BAC4u) [[unlikely]] return; }
L_0050BAC4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050BAC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 996u), 0u);  if (t) { goto L_0050BAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BAD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050BAD8u) [[unlikely]] return; }
L_0050BAD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BAE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050BAE8u) [[unlikely]] return; }
L_0050BAE8:
    set32(c.r[4], c.r[17].w[0] + 968u);
    c.budget -= 1;
L_0050BAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BAF4u);  if (depth < kMaxDepth) unit_002F(c, 79u, depth + 1u); else { c.pc = 0x001BD570u; return; } if (c.pc != 0x0050BAF4u) [[unlikely]] return; }
L_0050BAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BAFCu); set32(c.r[4], c.r[17].w[0] + 956u);  if (depth < kMaxDepth) unit_002F(c, 79u, depth + 1u); else { c.pc = 0x001BD570u; return; } if (c.pc != 0x0050BAFCu) [[unlikely]] return; }
L_0050BAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB04u); set32(c.r[4], c.r[17].w[0] + 944u);  if (depth < kMaxDepth) unit_002F(c, 79u, depth + 1u); else { c.pc = 0x001BD570u; return; } if (c.pc != 0x0050BB04u) [[unlikely]] return; }
L_0050BB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB0Cu); set32(c.r[4], c.r[17].w[0] + 980u);  if (depth < kMaxDepth) unit_002F(c, 79u, depth + 1u); else { c.pc = 0x001BD570u; return; } if (c.pc != 0x0050BB0Cu) [[unlikely]] return; }
L_0050BB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB14u); set32(c.r[4], c.r[17].w[0] + 528u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB14u) [[unlikely]] return; }
L_0050BB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB1Cu); set32(c.r[4], c.r[17].w[0] + 424u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB1Cu) [[unlikely]] return; }
L_0050BB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB24u); set32(c.r[4], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB24u) [[unlikely]] return; }
L_0050BB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB2Cu); set32(c.r[4], c.r[17].w[0] + 216u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB2Cu) [[unlikely]] return; }
L_0050BB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB34u); set32(c.r[4], c.r[17].w[0] + 632u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB34u) [[unlikely]] return; }
L_0050BB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB3Cu); set32(c.r[4], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB3Cu) [[unlikely]] return; }
L_0050BB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB44u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB44u) [[unlikely]] return; }
L_0050BB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB4Cu); set32(c.r[4], c.r[17].w[0] + 840u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB4Cu) [[unlikely]] return; }
L_0050BB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB54u); set32(c.r[4], c.r[17].w[0] + 736u);  if (depth < kMaxDepth) unit_002E(c, 165u, depth + 1u); else { c.pc = 0x001BBD70u; return; } if (c.pc != 0x0050BB54u) [[unlikely]] return; }
L_0050BB54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[17].w[0] + 992u);
    set32(c.r[5], c.r[5].w[0] + 21024u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB6Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0050BB6Cu) [[unlikely]] return; }
L_0050BB6C:
    set32(c.r[4], c.r[17].w[0] + 980u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 968u);  goto L_0050BB8C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0050BB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BB88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x0050BB88u) [[unlikely]] return; }
L_0050BB88:
    set32(c.r[4], c.r[17].w[0] + 968u);
    c.budget -= 1;
L_0050BB8C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 956u);  goto L_0050BBA8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0050BBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BBA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x0050BBA4u) [[unlikely]] return; }
L_0050BBA4:
    set32(c.r[4], c.r[17].w[0] + 956u);
    c.budget -= 1;
L_0050BBA8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 944u);  goto L_0050BBC4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0050BBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BBC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x0050BBC0u) [[unlikely]] return; }
L_0050BBC0:
    set32(c.r[4], c.r[17].w[0] + 944u);
    c.budget -= 1;
L_0050BBC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0050BBDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0050BBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BBDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x0050BBDCu) [[unlikely]] return; }
L_0050BBDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 10624u);
    set32(c.r[6], 0u + 104u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BBF4u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0050BBF4u) [[unlikely]] return; }
L_0050BBF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0050BC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BC0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050BC0Cu) [[unlikely]] return; }
L_0050BC0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050BC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0050BC30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[8], 0u + 9u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 104u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6640u);
    set32(c.r[6], c.r[6].w[0] - 10624u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BC80u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0050BC80u) [[unlikely]] return; }
L_0050BC80:
    st32((c.r[16].w[0] + 944u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 948u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    st32((c.r[16].w[0] + 952u), 0u);
    set32(c.r[4], c.r[16].w[0] + 992u);
    st32((c.r[16].w[0] + 956u), 0u);
    set32(c.r[5], c.r[5].w[0] - 15856u);
    st32((c.r[16].w[0] + 960u), 0u);
    set32(c.r[6], c.r[6].w[0] + 21024u);
    st32((c.r[16].w[0] + 964u), 0u);
    set32(c.r[7], 0u + 4u);
    st32((c.r[16].w[0] + 968u), 0u);
    set32(c.r[8], 0u + 2u);
    st32((c.r[16].w[0] + 972u), 0u);
    st32((c.r[16].w[0] + 976u), 0u);
    st32((c.r[16].w[0] + 980u), 0u);
    st32((c.r[16].w[0] + 984u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BCD0u); st32((c.r[16].w[0] + 988u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0050BCD0u) [[unlikely]] return; }
L_0050BCD0:
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], 0u + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[19].w[0]);
    st8((c.r[16].w[0] + 1000u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 736u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 2u);
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BD04u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BD04u) [[unlikely]] return; }
L_0050BD04:
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], 0u + 256u);  goto L_0050BD38; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 840u);
    set32(c.r[5], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BD34u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BD34u) [[unlikely]] return; }
L_0050BD34:
    set32(c.r[5], 0u + 256u);
    c.budget -= 1;
L_0050BD38:
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BD58u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BD58u) [[unlikely]] return; }
L_0050BD58:
    set32(c.r[5], 0u + 128u);
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BD7Cu); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BD7Cu) [[unlikely]] return; }
L_0050BD7C:
    set32(c.r[5], 0u + 128u);
    set32(c.r[4], c.r[16].w[0] + 632u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BDA0u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BDA0u) [[unlikely]] return; }
L_0050BDA0:
    set32(c.r[5], 0u + 64u);
    set32(c.r[4], c.r[16].w[0] + 216u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 128u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BDC4u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BDC4u) [[unlikely]] return; }
L_0050BDC4:
    set32(c.r[5], 0u + 64u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 128u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BDE8u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BDE8u) [[unlikely]] return; }
L_0050BDE8:
    set32(c.r[5], 0u + 64u);
    set32(c.r[8], 0u + 128u);
    set32(c.r[4], c.r[16].w[0] + 424u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE0Cu); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BE0Cu) [[unlikely]] return; }
L_0050BE0C:
    set32(c.r[5], 0u + 64u);
    set32(c.r[4], c.r[16].w[0] + 528u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    set32(c.r[8], 0u + 192u);
    set32(c.r[9], 0u + 128u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE30u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 172u, depth + 1u); else { c.pc = 0x001BBFA0u; return; } if (c.pc != 0x0050BE30u) [[unlikely]] return; }
L_0050BE30:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE40u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 171u, depth + 1u); else { c.pc = 0x001BBE00u; return; } if (c.pc != 0x0050BE40u) [[unlikely]] return; }
L_0050BE40:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 171u, depth + 1u); else { c.pc = 0x001BBE00u; return; } if (c.pc != 0x0050BE50u) [[unlikely]] return; }
L_0050BE50:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 171u, depth + 1u); else { c.pc = 0x001BBE00u; return; } if (c.pc != 0x0050BE60u) [[unlikely]] return; }
L_0050BE60:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 171u, depth + 1u); else { c.pc = 0x001BBE00u; return; } if (c.pc != 0x0050BE70u) [[unlikely]] return; }
L_0050BE70:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 171u, depth + 1u); else { c.pc = 0x001BBE00u; return; } if (c.pc != 0x0050BE80u) [[unlikely]] return; }
L_0050BE80:
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE8Cu); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_002E(c, 171u, depth + 1u); else { c.pc = 0x001BBE00u; return; } if (c.pc != 0x0050BE8Cu) [[unlikely]] return; }
L_0050BE8C:
    set32(c.r[4], c.r[16].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BE98u); set32(c.r[5], 0u + 1583u);  if (depth < kMaxDepth) unit_002D(c, 108u, depth + 1u); else { c.pc = 0x001B5110u; return; } if (c.pc != 0x0050BE98u) [[unlikely]] return; }
L_0050BE98:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 944u);
    set32(c.r[5], c.r[16].w[0] + 216u);
    set32(c.r[6], c.r[16].w[0] + 424u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BEB0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002D(c, 176u, depth + 1u); else { c.pc = 0x001B6430u; return; } if (c.pc != 0x0050BEB0u) [[unlikely]] return; }
L_0050BEB0:
    set32(c.r[4], c.r[16].w[0] + 944u);
    set32(c.r[5], c.r[16].w[0] + 216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BEC0u); set32(c.r[6], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_002D(c, 153u, depth + 1u); else { c.pc = 0x001B5DE0u; return; } if (c.pc != 0x0050BEC0u) [[unlikely]] return; }
L_0050BEC0:
    set32(c.r[4], c.r[16].w[0] + 944u);
    set32(c.r[5], c.r[16].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BED0u); set32(c.r[6], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_002D(c, 153u, depth + 1u); else { c.pc = 0x001B5DE0u; return; } if (c.pc != 0x0050BED0u) [[unlikely]] return; }
L_0050BED0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BEDCu); set32(c.r[4], c.r[16].w[0] + 944u);  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B5080u; return; } if (c.pc != 0x0050BEDCu) [[unlikely]] return; }
L_0050BEDC:
    set32(c.r[4], c.r[16].w[0] + 980u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BEE8u); set32(c.r[5], 0u + 805u);  if (depth < kMaxDepth) unit_002D(c, 108u, depth + 1u); else { c.pc = 0x001B5110u; return; } if (c.pc != 0x0050BEE8u) [[unlikely]] return; }
L_0050BEE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 980u);
    set32(c.r[5], c.r[16].w[0] + 216u);
    set32(c.r[6], c.r[16].w[0] + 320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BF00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002D(c, 176u, depth + 1u); else { c.pc = 0x001B6430u; return; } if (c.pc != 0x0050BF00u) [[unlikely]] return; }
L_0050BF00:
    set32(c.r[4], c.r[16].w[0] + 980u);
    set32(c.r[5], c.r[16].w[0] + 320u);
    set32(c.r[6], c.r[16].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BF14u); c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_002D(c, 130u, depth + 1u); else { c.pc = 0x001B5770u; return; } if (c.pc != 0x0050BF14u) [[unlikely]] return; }
L_0050BF14:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BF20u); set32(c.r[4], c.r[16].w[0] + 980u);  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B5080u; return; } if (c.pc != 0x0050BF20u) [[unlikely]] return; }
L_0050BF20:
    set32(c.r[4], c.r[16].w[0] + 956u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050BF2Cu); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_002D(c, 108u, depth + 1u); else { c.pc = 0x001B5110u; return; } if (c.pc != 0x0050BF2Cu) [[unlikely]] return; }
L_0050BF2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 26476u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 26464u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[13], ld32((c.r[7].w[0] + 26500u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 92u), c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 26468u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[12], ld32((c.r[8].w[0] + 26504u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[11], ld32((c.r[11].w[0] + 26508u)));
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 26472u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 26484u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[10], ld32((c.r[10].w[0] + 26516u)));
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 80u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 26480u)));
    st32((c.r[29].w[0] + 100u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 26488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 26492u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 26496u)));
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[9].w[0] + 26520u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 26528u));
    set32(c.r[5], 0u + 6u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26529u));
    set32(c.r[6], 0u - 256u);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + 956u);
    st32((c.r[29].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[5], c.r[16].w[0] + 320u);
    set32(c.r[6], c.r[16].w[0] + 216u);
    st32((c.r[29].w[0] + 116u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[12].w[0]);
    c.budget -= 53;
    [[clang::musttail]] return unit_0103(c, 1u, depth);
}

}
