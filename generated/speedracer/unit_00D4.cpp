#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D4[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0,
    198, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0,
    210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 218, 0, 0, 0, 219, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269,
    0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290,
    0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0,
    0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0,
    0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0,
    0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    354, 355, 0, 356, 0, 357, 358, 0, 359, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0,
    0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0,
    0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0,
    0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0,
    0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520,
    0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0,
    0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00450000;
    case 2u: goto L_00450018;
    case 3u: goto L_00450024;
    case 4u: goto L_00450074;
    case 5u: goto L_00450084;
    case 6u: goto L_0045009C;
    case 7u: goto L_004500AC;
    case 8u: goto L_004500D0;
    case 9u: goto L_004500DC;
    case 10u: goto L_004500E8;
    case 11u: goto L_00450110;
    case 12u: goto L_00450124;
    case 13u: goto L_00450148;
    case 14u: goto L_0045014C;
    case 15u: goto L_00450150;
    case 16u: goto L_00450170;
    case 17u: goto L_00450188;
    case 18u: goto L_004501A0;
    case 19u: goto L_004501AC;
    case 20u: goto L_004501B8;
    case 21u: goto L_004501C4;
    case 22u: goto L_004501D0;
    case 23u: goto L_004501D8;
    case 24u: goto L_004501EC;
    case 25u: goto L_00450214;
    case 26u: goto L_00450224;
    case 27u: goto L_00450240;
    case 28u: goto L_00450254;
    case 29u: goto L_00450264;
    case 30u: goto L_00450280;
    case 31u: goto L_00450290;
    case 32u: goto L_004502AC;
    case 33u: goto L_004502C0;
    case 34u: goto L_004502D0;
    case 35u: goto L_004502EC;
    case 36u: goto L_004502FC;
    case 37u: goto L_00450318;
    case 38u: goto L_0045032C;
    case 39u: goto L_0045033C;
    case 40u: goto L_00450354;
    case 41u: goto L_00450360;
    case 42u: goto L_00450380;
    case 43u: goto L_004503B4;
    case 44u: goto L_004503C4;
    case 45u: goto L_004503E0;
    case 46u: goto L_004503FC;
    case 47u: goto L_00450420;
    case 48u: goto L_0045043C;
    case 49u: goto L_00450448;
    case 50u: goto L_00450458;
    case 51u: goto L_0045046C;
    case 52u: goto L_0045048C;
    case 53u: goto L_0045049C;
    case 54u: goto L_004504B8;
    case 55u: goto L_004504CC;
    case 56u: goto L_004504DC;
    case 57u: goto L_004504E8;
    case 58u: goto L_0045051C;
    case 59u: goto L_0045052C;
    case 60u: goto L_00450544;
    case 61u: goto L_00450564;
    case 62u: goto L_00450574;
    case 63u: goto L_00450590;
    case 64u: goto L_004505A4;
    case 65u: goto L_004505B4;
    case 66u: goto L_004505C0;
    case 67u: goto L_004505D4;
    case 68u: goto L_004505F4;
    case 69u: goto L_00450604;
    case 70u: goto L_00450620;
    case 71u: goto L_00450634;
    case 72u: goto L_00450644;
    case 73u: goto L_0045065C;
    case 74u: goto L_00450680;
    case 75u: goto L_004506B4;
    case 76u: goto L_004506F0;
    case 77u: goto L_00450760;
    case 78u: goto L_00450780;
    case 79u: goto L_004507B4;
    case 80u: goto L_004507E0;
    case 81u: goto L_00450800;
    case 82u: goto L_00450814;
    case 83u: goto L_00450834;
    case 84u: goto L_00450860;
    case 85u: goto L_00450888;
    case 86u: goto L_00450898;
    case 87u: goto L_004508C4;
    case 88u: goto L_004508D8;
    case 89u: goto L_004508F8;
    case 90u: goto L_00450908;
    case 91u: goto L_00450934;
    case 92u: goto L_0045093C;
    case 93u: goto L_00450980;
    case 94u: goto L_00450988;
    case 95u: goto L_00450998;
    case 96u: goto L_004509AC;
    case 97u: goto L_004509CC;
    case 98u: goto L_004509E0;
    case 99u: goto L_004509F4;
    case 100u: goto L_00450A14;
    case 101u: goto L_00450A3C;
    case 102u: goto L_00450A44;
    case 103u: goto L_00450A54;
    case 104u: goto L_00450A74;
    case 105u: goto L_00450A80;
    case 106u: goto L_00450AA0;
    case 107u: goto L_00450ADC;
    case 108u: goto L_00450B00;
    case 109u: goto L_00450B34;
    case 110u: goto L_00450B40;
    case 111u: goto L_00450B54;
    case 112u: goto L_00450B64;
    case 113u: goto L_00450B80;
    case 114u: goto L_00450BA0;
    case 115u: goto L_00450BA8;
    case 116u: goto L_00450BD0;
    case 117u: goto L_00450BD8;
    case 118u: goto L_00450BF8;
    case 119u: goto L_00450C0C;
    case 120u: goto L_00450C20;
    case 121u: goto L_00450C40;
    case 122u: goto L_00450C4C;
    case 123u: goto L_00450C70;
    case 124u: goto L_00450CAC;
    case 125u: goto L_00450CBC;
    case 126u: goto L_00450CFC;
    case 127u: goto L_00450D10;
    case 128u: goto L_00450D50;
    case 129u: goto L_00450D60;
    case 130u: goto L_00450D84;
    case 131u: goto L_00450D94;
    case 132u: goto L_00450DB0;
    case 133u: goto L_00450DC4;
    case 134u: goto L_00450DD4;
    case 135u: goto L_00450E0C;
    case 136u: goto L_00450E24;
    case 137u: goto L_00450E48;
    case 138u: goto L_00450E58;
    case 139u: goto L_00451018;
    case 140u: goto L_00451020;
    case 141u: goto L_00451024;
    case 142u: goto L_00451050;
    case 143u: goto L_0045108C;
    case 144u: goto L_004510B8;
    case 145u: goto L_004510DC;
    case 146u: goto L_00451100;
    case 147u: goto L_00451114;
    case 148u: goto L_00451130;
    case 149u: goto L_00451170;
    case 150u: goto L_004511A4;
    case 151u: goto L_004511B4;
    case 152u: goto L_004511D0;
    case 153u: goto L_004511E4;
    case 154u: goto L_004511F4;
    case 155u: goto L_0045120C;
    case 156u: goto L_00451220;
    case 157u: goto L_0045123C;
    case 158u: goto L_00451250;
    case 159u: goto L_00451270;
    case 160u: goto L_00451280;
    case 161u: goto L_0045129C;
    case 162u: goto L_004512B0;
    case 163u: goto L_004512C0;
    case 164u: goto L_004512E4;
    case 165u: goto L_004512F4;
    case 166u: goto L_00451310;
    case 167u: goto L_00451324;
    case 168u: goto L_00451334;
    case 169u: goto L_0045135C;
    case 170u: goto L_0045137C;
    case 171u: goto L_004513AC;
    case 172u: goto L_004513BC;
    case 173u: goto L_004513D4;
    case 174u: goto L_004513F4;
    case 175u: goto L_00451420;
    case 176u: goto L_004514C0;
    case 177u: goto L_004514D0;
    case 178u: goto L_004514EC;
    case 179u: goto L_00451500;
    case 180u: goto L_00451510;
    case 181u: goto L_0045152C;
    case 182u: goto L_0045153C;
    case 183u: goto L_00451558;
    case 184u: goto L_0045156C;
    case 185u: goto L_0045157C;
    case 186u: goto L_00451598;
    case 187u: goto L_004515A8;
    case 188u: goto L_004515C4;
    case 189u: goto L_004515D8;
    case 190u: goto L_004515E8;
    case 191u: goto L_00451604;
    case 192u: goto L_00451614;
    case 193u: goto L_00451630;
    case 194u: goto L_00451644;
    case 195u: goto L_00451654;
    case 196u: goto L_00451668;
    case 197u: goto L_00451674;
    case 198u: goto L_00451680;
    case 199u: goto L_0045168C;
    case 200u: goto L_00451698;
    case 201u: goto L_004516A0;
    case 202u: goto L_004516B0;
    case 203u: goto L_004516D0;
    case 204u: goto L_004516FC;
    case 205u: goto L_00451714;
    case 206u: goto L_00451730;
    case 207u: goto L_00451754;
    case 208u: goto L_00451764;
    case 209u: goto L_00451778;
    case 210u: goto L_00451780;
    case 211u: goto L_0045178C;
    case 212u: goto L_00451798;
    case 213u: goto L_004517A0;
    case 214u: goto L_004517AC;
    case 215u: goto L_004517B4;
    case 216u: goto L_004517BC;
    case 217u: goto L_004517F4;
    case 218u: goto L_00451804;
    case 219u: goto L_00451814;
    case 220u: goto L_00451818;
    case 221u: goto L_00451824;
    case 222u: goto L_00451840;
    case 223u: goto L_00451854;
    case 224u: goto L_00451864;
    case 225u: goto L_00451870;
    case 226u: goto L_0045187C;
    case 227u: goto L_0045188C;
    case 228u: goto L_004518B0;
    case 229u: goto L_004518C0;
    case 230u: goto L_004518D4;
    case 231u: goto L_004518E8;
    case 232u: goto L_00451908;
    case 233u: goto L_00451918;
    case 234u: goto L_00451934;
    case 235u: goto L_00451948;
    case 236u: goto L_00451958;
    case 237u: goto L_00451964;
    case 238u: goto L_00451980;
    case 239u: goto L_004519A0;
    case 240u: goto L_004519C8;
    case 241u: goto L_004519D8;
    case 242u: goto L_004519F0;
    case 243u: goto L_00451A18;
    case 244u: goto L_00451A28;
    case 245u: goto L_00451A40;
    case 246u: goto L_00451A68;
    case 247u: goto L_00451A78;
    case 248u: goto L_00451A90;
    case 249u: goto L_00451AB8;
    case 250u: goto L_00451AC8;
    case 251u: goto L_00451AE0;
    case 252u: goto L_00451B10;
    case 253u: goto L_00451B30;
    case 254u: goto L_00451B40;
    case 255u: goto L_00451B5C;
    case 256u: goto L_00451B7C;
    case 257u: goto L_00451B8C;
    case 258u: goto L_00451BA8;
    case 259u: goto L_00451BC8;
    case 260u: goto L_00451BD8;
    case 261u: goto L_00451BF4;
    case 262u: goto L_00451C24;
    case 263u: goto L_00451C3C;
    case 264u: goto L_00451C60;
    case 265u: goto L_00451C94;
    case 266u: goto L_00451CAC;
    case 267u: goto L_00451CC4;
    case 268u: goto L_00451CE8;
    case 269u: goto L_00451CFC;
    case 270u: goto L_00451D0C;
    case 271u: goto L_00451D20;
    case 272u: goto L_00451D30;
    case 273u: goto L_00451D44;
    case 274u: goto L_00451D54;
    case 275u: goto L_00451D60;
    case 276u: goto L_00451D80;
    case 277u: goto L_00451DD8;
    case 278u: goto L_00451DEC;
    case 279u: goto L_00451E34;
    case 280u: goto L_00451E44;
    case 281u: goto L_00451E60;
    case 282u: goto L_00451E6C;
    case 283u: goto L_00451E88;
    case 284u: goto L_00451EB0;
    case 285u: goto L_00451ED4;
    case 286u: goto L_00451F3C;
    case 287u: goto L_00451F50;
    case 288u: goto L_00451F5C;
    case 289u: goto L_00451FB0;
    case 290u: goto L_00451FFC;
    case 291u: goto L_00452004;
    case 292u: goto L_00452014;
    case 293u: goto L_0045203C;
    case 294u: goto L_00452058;
    case 295u: goto L_00452068;
    case 296u: goto L_004520A4;
    case 297u: goto L_004520C0;
    case 298u: goto L_004520E8;
    case 299u: goto L_00452120;
    case 300u: goto L_00452168;
    case 301u: goto L_00452184;
    case 302u: goto L_004521BC;
    case 303u: goto L_004521C8;
    case 304u: goto L_004521D8;
    case 305u: goto L_004521E4;
    case 306u: goto L_004521EC;
    case 307u: goto L_00452208;
    case 308u: goto L_00452210;
    case 309u: goto L_0045222C;
    case 310u: goto L_00452238;
    case 311u: goto L_00452248;
    case 312u: goto L_00452254;
    case 313u: goto L_0045225C;
    case 314u: goto L_00452268;
    case 315u: goto L_004522D0;
    case 316u: goto L_0045232C;
    case 317u: goto L_0045233C;
    case 318u: goto L_00452378;
    case 319u: goto L_00452394;
    case 320u: goto L_004523D4;
    case 321u: goto L_004523E8;
    case 322u: goto L_004523F4;
    case 323u: goto L_00452404;
    case 324u: goto L_00452410;
    case 325u: goto L_00452418;
    case 326u: goto L_00452434;
    case 327u: goto L_0045243C;
    case 328u: goto L_0045245C;
    case 329u: goto L_00452468;
    case 330u: goto L_00452478;
    case 331u: goto L_00452484;
    case 332u: goto L_0045248C;
    case 333u: goto L_00452498;
    case 334u: goto L_00452500;
    case 335u: goto L_00452534;
    case 336u: goto L_00452544;
    case 337u: goto L_00452584;
    case 338u: goto L_004525A0;
    case 339u: goto L_004525F8;
    case 340u: goto L_00452608;
    case 341u: goto L_0045264C;
    case 342u: goto L_0045265C;
    case 343u: goto L_004526C8;
    case 344u: goto L_004526E4;
    case 345u: goto L_0045270C;
    case 346u: goto L_00452740;
    case 347u: goto L_00452788;
    case 348u: goto L_0045279C;
    case 349u: goto L_004527A8;
    case 350u: goto L_004527B4;
    case 351u: goto L_004527BC;
    case 352u: goto L_004527CC;
    case 353u: goto L_004527EC;
    case 354u: goto L_00452800;
    case 355u: goto L_00452804;
    case 356u: goto L_0045280C;
    case 357u: goto L_00452814;
    case 358u: goto L_00452818;
    case 359u: goto L_00452820;
    case 360u: goto L_00452824;
    case 361u: goto L_00452830;
    case 362u: goto L_0045283C;
    case 363u: goto L_00452844;
    case 364u: goto L_00452854;
    case 365u: goto L_00452880;
    case 366u: goto L_00452894;
    case 367u: goto L_004528A0;
    case 368u: goto L_004528AC;
    case 369u: goto L_004528B4;
    case 370u: goto L_004528C4;
    case 371u: goto L_004528E4;
    case 372u: goto L_004528F8;
    case 373u: goto L_00452904;
    case 374u: goto L_00452910;
    case 375u: goto L_00452918;
    case 376u: goto L_00452928;
    case 377u: goto L_00452934;
    case 378u: goto L_0045293C;
    case 379u: goto L_0045294C;
    case 380u: goto L_0045295C;
    case 381u: goto L_00452980;
    case 382u: goto L_00452994;
    case 383u: goto L_004529A0;
    case 384u: goto L_004529B0;
    case 385u: goto L_004529C0;
    case 386u: goto L_004529D0;
    case 387u: goto L_00452A04;
    case 388u: goto L_00452A28;
    case 389u: goto L_00452A5C;
    case 390u: goto L_00452A6C;
    case 391u: goto L_00452A90;
    case 392u: goto L_00452AC0;
    case 393u: goto L_00452B30;
    case 394u: goto L_00452B38;
    case 395u: goto L_00452B84;
    case 396u: goto L_00452BA0;
    case 397u: goto L_00452BB0;
    case 398u: goto L_00452BE0;
    case 399u: goto L_00452BFC;
    case 400u: goto L_00452C0C;
    case 401u: goto L_00452C4C;
    case 402u: goto L_00452C68;
    case 403u: goto L_00452C78;
    case 404u: goto L_00452CD8;
    case 405u: goto L_00452CFC;
    case 406u: goto L_00452D0C;
    case 407u: goto L_00452D28;
    case 408u: goto L_00452D3C;
    case 409u: goto L_00452D4C;
    case 410u: goto L_00452D68;
    case 411u: goto L_00452D84;
    case 412u: goto L_00452D94;
    case 413u: goto L_00452DB0;
    case 414u: goto L_00452DC4;
    case 415u: goto L_00452DD4;
    case 416u: goto L_00452E18;
    case 417u: goto L_00452E44;
    case 418u: goto L_00452E64;
    case 419u: goto L_00452E80;
    case 420u: goto L_00452E90;
    case 421u: goto L_00452EC0;
    case 422u: goto L_00452EDC;
    case 423u: goto L_00452EEC;
    case 424u: goto L_00452F18;
    case 425u: goto L_00452F34;
    case 426u: goto L_00452F44;
    case 427u: goto L_00452FC4;
    case 428u: goto L_00452FE0;
    case 429u: goto L_00453010;
    case 430u: goto L_0045305C;
    case 431u: goto L_0045307C;
    case 432u: goto L_00453098;
    case 433u: goto L_004530A8;
    case 434u: goto L_00453128;
    case 435u: goto L_00453144;
    case 436u: goto L_00453170;
    case 437u: goto L_004531AC;
    case 438u: goto L_004531BC;
    case 439u: goto L_004531E0;
    case 440u: goto L_004531F4;
    case 441u: goto L_00453208;
    case 442u: goto L_00453228;
    case 443u: goto L_00453258;
    case 444u: goto L_00453270;
    case 445u: goto L_004532E0;
    case 446u: goto L_004532E8;
    case 447u: goto L_00453334;
    case 448u: goto L_00453350;
    case 449u: goto L_00453360;
    case 450u: goto L_00453388;
    case 451u: goto L_004533A4;
    case 452u: goto L_004533B4;
    case 453u: goto L_004533EC;
    case 454u: goto L_00453408;
    case 455u: goto L_00453418;
    case 456u: goto L_00453470;
    case 457u: goto L_00453494;
    case 458u: goto L_004534A4;
    case 459u: goto L_004534C0;
    case 460u: goto L_004534D4;
    case 461u: goto L_004534E4;
    case 462u: goto L_004534F8;
    case 463u: goto L_00453514;
    case 464u: goto L_00453524;
    case 465u: goto L_00453540;
    case 466u: goto L_00453554;
    case 467u: goto L_00453564;
    case 468u: goto L_004535A0;
    case 469u: goto L_004535CC;
    case 470u: goto L_004535EC;
    case 471u: goto L_00453608;
    case 472u: goto L_00453618;
    case 473u: goto L_00453640;
    case 474u: goto L_0045365C;
    case 475u: goto L_0045366C;
    case 476u: goto L_00453690;
    case 477u: goto L_004536AC;
    case 478u: goto L_004536BC;
    case 479u: goto L_00453734;
    case 480u: goto L_00453750;
    case 481u: goto L_00453780;
    case 482u: goto L_004537CC;
    case 483u: goto L_004537EC;
    case 484u: goto L_00453808;
    case 485u: goto L_00453818;
    case 486u: goto L_00453890;
    case 487u: goto L_004538AC;
    case 488u: goto L_004538D0;
    case 489u: goto L_004538F4;
    case 490u: goto L_00453910;
    case 491u: goto L_00453928;
    case 492u: goto L_00453940;
    case 493u: goto L_00453964;
    case 494u: goto L_00453980;
    case 495u: goto L_00453998;
    case 496u: goto L_004539B0;
    case 497u: goto L_00453A08;
    case 498u: goto L_00453A10;
    case 499u: goto L_00453A1C;
    case 500u: goto L_00453A7C;
    case 501u: goto L_00453AB0;
    case 502u: goto L_00453B28;
    case 503u: goto L_00453B44;
    case 504u: goto L_00453B54;
    case 505u: goto L_00453B70;
    case 506u: goto L_00453B84;
    case 507u: goto L_00453B94;
    case 508u: goto L_00453BBC;
    case 509u: goto L_00453BE0;
    case 510u: goto L_00453BF0;
    case 511u: goto L_00453C0C;
    case 512u: goto L_00453C70;
    case 513u: goto L_00453CA0;
    case 514u: goto L_00453CC4;
    case 515u: goto L_00453CD4;
    case 516u: goto L_00453CF0;
    case 517u: goto L_00453D20;
    case 518u: goto L_00453D50;
    case 519u: goto L_00453D6C;
    case 520u: goto L_00453D7C;
    case 521u: goto L_00453D98;
    case 522u: goto L_00453DD0;
    case 523u: goto L_00453DFC;
    case 524u: goto L_00453E4C;
    case 525u: goto L_00453E6C;
    case 526u: goto L_00453E7C;
    case 527u: goto L_00453EB0;
    case 528u: goto L_00453ECC;
    case 529u: goto L_00453ED8;
    case 530u: goto L_00453EF8;
    case 531u: goto L_00453F0C;
    case 532u: goto L_00453F24;
    case 533u: goto L_00453F2C;
    case 534u: goto L_00453F38;
    case 535u: goto L_00453F44;
    case 536u: goto L_00453F60;
    case 537u: goto L_00453F94;
    case 538u: goto L_00453FC0;
    case 539u: goto L_00453FCC;
    case 540u: goto L_00453FE0;
    default: bad_entry(c, 0x00450000u); return;
    }
L_00450000:
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 6;
L_00450018:
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450024u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450024u) [[unlikely]] return; }
L_00450024:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24704u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00450060; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 28464u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 28468u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 28472u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 28476u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 12;
L_00450060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450074u); set32(c.r[5], c.r[5].w[0] + 28464u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450074u) [[unlikely]] return; }
L_00450074:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450084u) [[unlikely]] return; }
L_00450084:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045009Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045009Cu) [[unlikely]] return; }
L_0045009C:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[19], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_004500E8; } }
L_004500AC:
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004500C8; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 208u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 108u);  goto L_004500E0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004500C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004500D0u);  if (depth < kMaxDepth) unit_00D3(c, 405u, depth + 1u); else { c.pc = 0x0044F900u; return; } if (c.pc != 0x004500D0u) [[unlikely]] return; }
L_004500D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004500DCu); set32(c.r[4], c.r[4].w[0] - 1512u);  if (depth < kMaxDepth) unit_002D(c, 126u, depth + 1u); else { c.pc = 0x001B55E0u; return; } if (c.pc != 0x004500DCu) [[unlikely]] return; }
L_004500DC:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 1;
L_004500E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004500E8u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004500E8u) [[unlikely]] return; }
L_004500E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004500ACu | kUnwind; return; } goto L_004500AC; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450110u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450110u) [[unlikely]] return; }
L_00450110:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450124u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450124u) [[unlikely]] return; }
L_00450124:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045014C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450148u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450148u) [[unlikely]] return; }
L_00450148:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_0045014C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00450150:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00450170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004501EC; } }
L_00450188:
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_004501DC; }
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D4(c, 42u, depth + 1u); else { c.pc = 0x00450380u; return; } if (c.pc != 0x004501A0u) [[unlikely]] return; }
L_004501A0:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 88u, depth + 1u); else { c.pc = 0x001BD680u; return; } if (c.pc != 0x004501ACu) [[unlikely]] return; }
L_004501AC:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 66u, depth + 1u); else { c.pc = 0x002D87E0u; return; } if (c.pc != 0x004501B8u) [[unlikely]] return; }
L_004501B8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004C(c, 153u, depth + 1u); else { c.pc = 0x00231F90u; return; } if (c.pc != 0x004501C4u) [[unlikely]] return; }
L_004501C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 212u, depth + 1u); else { c.pc = 0x001F5BD0u; return; } if (c.pc != 0x004501D0u) [[unlikely]] return; }
L_004501D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004501D8u) [[unlikely]] return; }
L_004501D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004501DC:
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004501ECu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 386u, depth + 1u); else { c.pc = 0x004529D0u; return; } if (c.pc != 0x004501ECu) [[unlikely]] return; }
L_004501EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00450188u | kUnwind; return; } goto L_00450188; }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 32u)));  goto L_00450268; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00450244; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450214u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450214u) [[unlikely]] return; }
L_00450214:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450224u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450224u) [[unlikely]] return; }
L_00450224:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00450240; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450240u) [[unlikely]] return; }
L_00450240:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450244:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_00450264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450254u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450254u) [[unlikely]] return; }
L_00450254:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450264u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450264u) [[unlikely]] return; }
L_00450264:
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_00450268:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 36u)));  goto L_004502D4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004502B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450280u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450280u) [[unlikely]] return; }
L_00450280:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450290u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450290u) [[unlikely]] return; }
L_00450290:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004502AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004502ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004502ACu) [[unlikely]] return; }
L_004502AC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004502B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_004502D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004502C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004502C0u) [[unlikely]] return; }
L_004502C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004502D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004502D0u) [[unlikely]] return; }
L_004502D0:
    set32(c.r[17], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004502D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 40u)));  goto L_00450340; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0045031C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004502ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004502ECu) [[unlikely]] return; }
L_004502EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004502FCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004502FCu) [[unlikely]] return; }
L_004502FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00450318; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450318u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450318u) [[unlikely]] return; }
L_00450318:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045031C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0045033C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045032Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045032Cu) [[unlikely]] return; }
L_0045032C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045033Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045033Cu) [[unlikely]] return; }
L_0045033C:
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00450340:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), 0u);  goto L_00450364; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00450354u) [[unlikely]] return; }
L_00450354:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450360u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00450360u) [[unlikely]] return; }
L_00450360:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00450364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00450380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004503FC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004503E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004503B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004503B4u) [[unlikely]] return; }
L_004503B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004503C4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004503C4u) [[unlikely]] return; }
L_004503C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004503E0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004503E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004503E0u) [[unlikely]] return; }
L_004503E0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_004503E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00450400; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004503FCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x004503FCu) [[unlikely]] return; }
L_004503FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00450400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00450420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045043Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0045043Cu) [[unlikely]] return; }
L_0045043C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450448u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00450448u) [[unlikely]] return; }
L_00450448:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00450458u) [[unlikely]] return; }
L_00450458:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 32u)));  goto L_00450474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045046Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 351u, depth + 1u); else { c.pc = 0x0044F1F0u; return; } if (c.pc != 0x0045046Cu) [[unlikely]] return; }
L_0045046C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 2;
L_00450474:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], 0u + 16u);  goto L_004504E0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  goto L_004504BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045048Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045048Cu) [[unlikely]] return; }
L_0045048C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045049Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045049Cu) [[unlikely]] return; }
L_0045049C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004504B8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004504B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004504B8u) [[unlikely]] return; }
L_004504B8:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_004504BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004504DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004504CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004504CCu) [[unlikely]] return; }
L_004504CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004504DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004504DCu) [[unlikely]] return; }
L_004504DC:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_004504E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004504E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004504E8u) [[unlikely]] return; }
L_004504E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045051C; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u + 32u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00450510; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00450510:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045051Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0088(c, 262u, depth + 1u); else { c.pc = 0x00321ED0u; return; } if (c.pc != 0x0045051Cu) [[unlikely]] return; }
L_0045051C:
    set32(c.r[4], 0u + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045052Cu); st32((c.r[17].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045052Cu) [[unlikely]] return; }
L_0045052C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 36u)));  goto L_0045054C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 235u, depth + 1u); else { c.pc = 0x0028A050u; return; } if (c.pc != 0x00450544u) [[unlikely]] return; }
L_00450544:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_0045054C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], 0u + 336u);  goto L_004505B8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 36u), c.r[16].w[0]);  goto L_00450594; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450564u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450564u) [[unlikely]] return; }
L_00450564:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450574u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450574u) [[unlikely]] return; }
L_00450574:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450590; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450590u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450590u) [[unlikely]] return; }
L_00450590:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 1;
L_00450594:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004505B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004505A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004505A4u) [[unlikely]] return; }
L_004505A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004505B4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004505B4u) [[unlikely]] return; }
L_004505B4:
    set32(c.r[4], 0u + 336u);
    c.budget -= 1;
L_004505B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004505C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004505C0u) [[unlikely]] return; }
L_004505C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  goto L_004505DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004505D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 142u, depth + 1u); else { c.pc = 0x002893C0u; return; } if (c.pc != 0x004505D4u) [[unlikely]] return; }
L_004505D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 2;
L_004505DC:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_00450648; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  goto L_00450624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004505F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004505F4u) [[unlikely]] return; }
L_004505F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450604u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450604u) [[unlikely]] return; }
L_00450604:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450620; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450620u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450620u) [[unlikely]] return; }
L_00450620:
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_00450624:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00450644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450634u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450634u) [[unlikely]] return; }
L_00450634:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450644u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450644u) [[unlikely]] return; }
L_00450644:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00450648:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045065Cu); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045065Cu) [[unlikely]] return; }
L_0045065C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00450680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 92u), c.r[5].w[0]);  if (t) { goto L_004506A4; } }
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    c.budget -= 1;
L_004506A4:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004506B4u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x004506B4u) [[unlikely]] return; }
L_004506B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 16u)));  goto L_004506C8; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004506C8:
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004506F0u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 83u, depth + 1u); else { c.pc = 0x00114AA0u; return; } if (c.pc != 0x004506F0u) [[unlikely]] return; }
L_004506F0:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 28u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[4].w[0] + 496u), c.f[2]);
    st32((c.r[4].w[0] + 500u), c.f[1]);
    st32((c.r[4].w[0] + 504u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450760u); st32((c.r[4].w[0] + 508u), c.f[3]);  if (depth < kMaxDepth) unit_0085(c, 216u, depth + 1u); else { c.pc = 0x00316760u; return; } if (c.pc != 0x00450760u) [[unlikely]] return; }
L_00450760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00450780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_004507A4; } }
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 1;
L_004507A4:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004507B4u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x004507B4u) [[unlikely]] return; }
L_004507B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_004507C8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004507C8:
    st32((c.r[3].w[0] + 208u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004507E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_00450800:
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450814u); st32((c.r[29].w[0] + 116u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00450814u) [[unlikely]] return; }
L_00450814:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[29].w[0] + 136u), c.r[17].w[0]);  if (t) { goto L_00450824; } }
    st32((c.r[29].w[0] + 136u), c.r[16].w[0]);
    c.budget -= 1;
L_00450824:
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450834u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x00450834u) [[unlikely]] return; }
L_00450834:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[18].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[3].w[0] + 16u)));  goto L_00450848; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450848:
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 144u)));  goto L_0045090C; }
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0045089C; } }
L_00450860:
    set32(c.r[7], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + 120u);
    set32(c.r[2], c.r[5].w[0] + 12u);
    set32(c.r[18], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450888u); set32(c.r[7], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x00450888u) [[unlikely]] return; }
L_00450888:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450898u); set32(c.r[5], c.r[5].w[0] + 3184u);  if (depth < kMaxDepth) unit_00D4(c, 299u, depth + 1u); else { c.pc = 0x00452120u; return; } if (c.pc != 0x00450898u) [[unlikely]] return; }
L_00450898:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0045089C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 240u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00450860u | kUnwind; return; } goto L_00450860; }
    set32(c.r[18], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 240u)));  goto L_004508FC; }
    set32(c.r[16], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004508DC; } }
L_004508C4:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004508D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 382u, depth + 1u); else { c.pc = 0x0031B570u; return; } if (c.pc != 0x004508D8u) [[unlikely]] return; }
L_004508D8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_004508DC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004508C4u | kUnwind; return; } goto L_004508C4; }
    set32(c.r[4], c.r[18].w[0] + 140u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004508F8u); set32(c.r[6], c.r[28].w[0] - 29988u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x00114C70u; return; } if (c.pc != 0x004508F8u) [[unlikely]] return; }
L_004508F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 1;
L_004508FC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450908u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00D4(c, 436u, depth + 1u); else { c.pc = 0x00453170u; return; } if (c.pc != 0x00450908u) [[unlikely]] return; }
L_00450908:
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_0045090C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 112u)));  goto L_00450A78; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 144u)));  goto L_0045095C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 232u)));  if (t) { goto L_0045093C; } }
L_00450934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045093Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00D4(c, 315u, depth + 1u); else { c.pc = 0x004522D0u; return; } if (c.pc != 0x0045093Cu) [[unlikely]] return; }
L_0045093C:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450958; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00450934u | kUnwind; return; } goto L_00450934; } }
L_00450958:
    set32(c.r[3], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_0045095C:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[5], ld32((c.r[3].w[0] + 240u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450980u); set32(c.r[16], c.r[3].w[0] + 228u);  if (depth < kMaxDepth) unit_00D4(c, 481u, depth + 1u); else { c.pc = 0x00453780u; return; } if (c.pc != 0x00450980u) [[unlikely]] return; }
L_00450980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00450A14; } }
L_00450988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_004509AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450998u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450998u) [[unlikely]] return; }
L_00450998:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004509ACu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004509ACu) [[unlikely]] return; }
L_004509AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 140u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004509CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 444u, depth + 1u); else { c.pc = 0x00453270u; return; } if (c.pc != 0x004509CCu) [[unlikely]] return; }
L_004509CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_00450A18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004509E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004509E0u) [[unlikely]] return; }
L_004509E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004509F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004509F4u) [[unlikely]] return; }
L_004509F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450A14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450A14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450A14u) [[unlikely]] return; }
L_00450A14:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00450A18:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 144u)));  goto L_00450A34; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00450988u | kUnwind; return; } goto L_00450988; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 1;
L_00450A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450A3Cu);  if (depth < kMaxDepth) unit_0066(c, 304u, depth + 1u); else { c.pc = 0x0029B850u; return; } if (c.pc != 0x00450A3Cu) [[unlikely]] return; }
L_00450A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00450A58; } }
L_00450A44:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450A54u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x00450A54u) [[unlikely]] return; }
L_00450A54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00450A58:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00450A44u | kUnwind; return; } goto L_00450A44; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450A74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 492u, depth + 1u); else { c.pc = 0x00453940u; return; } if (c.pc != 0x00450A74u) [[unlikely]] return; }
L_00450A74:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_00450A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450A80u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00450A80u) [[unlikely]] return; }
L_00450A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00450AA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450ADCu); st32((c.r[29].w[0] + 140u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00450ADCu) [[unlikely]] return; }
L_00450ADC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_00450C40; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 152u), c.r[19].w[0]);  if (t) { goto L_00450AF0; } }
    st32((c.r[29].w[0] + 152u), c.r[16].w[0]);
    c.budget -= 1;
L_00450AF0:
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[5], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450B00u); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x00450B00u) [[unlikely]] return; }
L_00450B00:
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], c.r[20].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 16u)));  goto L_00450B14; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450B14:
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));  goto L_00450B88; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450B34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 127u, depth + 1u); else { c.pc = 0x00450D10u; return; } if (c.pc != 0x00450B34u) [[unlikely]] return; }
L_00450B34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450B40u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00D4(c, 289u, depth + 1u); else { c.pc = 0x00451FB0u; return; } if (c.pc != 0x00450B40u) [[unlikely]] return; }
L_00450B40:
    set32(c.r[16], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  goto L_00450C44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450B54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450B54u) [[unlikely]] return; }
L_00450B54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450B64u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450B64u) [[unlikely]] return; }
L_00450B64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450C40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450B80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450B80u) [[unlikely]] return; }
L_00450B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00450C40; } }
L_00450B88:
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_00450BC8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 232u)));  if (t) { goto L_00450BA8; } }
L_00450BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450BA8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00D4(c, 315u, depth + 1u); else { c.pc = 0x004522D0u; return; } if (c.pc != 0x00450BA8u) [[unlikely]] return; }
L_00450BA8:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450BC4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00450BA0u | kUnwind; return; } goto L_00450BA0; } }
L_00450BC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_00450BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450BD0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 313u, depth + 1u); else { c.pc = 0x0029B960u; return; } if (c.pc != 0x00450BD0u) [[unlikely]] return; }
L_00450BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450BD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x00450BD8u) [[unlikely]] return; }
L_00450BD8:
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00450C40; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450BF8u); set32(c.r[4], c.r[29].w[0] + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450BF8u) [[unlikely]] return; }
L_00450BF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00450C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450C0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450C0Cu) [[unlikely]] return; }
L_00450C0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450C20u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450C20u) [[unlikely]] return; }
L_00450C20:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450C40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450C40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450C40u) [[unlikely]] return; }
L_00450C40:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00450C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450C4Cu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00450C4Cu) [[unlikely]] return; }
L_00450C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00450C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00450CFC; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00450CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00450CE8; } }
L_00450CA0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450CACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450CACu) [[unlikely]] return; }
L_00450CAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_00450CCC; } }
L_00450CBC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00450CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00450CD8; } }
L_00450CCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00450CBCu | kUnwind; return; } goto L_00450CBC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450CD8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00450CE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00450CE8; } }
L_00450CE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00450D00; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450CFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x00450CFCu) [[unlikely]] return; }
L_00450CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00450D00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00450D10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00450D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450D50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450D50u) [[unlikely]] return; }
L_00450D50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450D60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450D60u) [[unlikely]] return; }
L_00450D60:
    st32((c.r[20].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 240u)));  goto L_00450DD8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[19].w[0]);  goto L_00450DB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450D84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450D84u) [[unlikely]] return; }
L_00450D84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450D94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450D94u) [[unlikely]] return; }
L_00450D94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00450DB0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00450DB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00450DB0u) [[unlikely]] return; }
L_00450DB0:
    st32((c.r[20].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00450DB4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00450DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450DC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00450DC4u) [[unlikely]] return; }
L_00450DC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450DD4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00450DD4u) [[unlikely]] return; }
L_00450DD4:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 1;
L_00450DD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 24u);  goto L_00450E1C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[5], c.r[2].w[0] + 120u);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450E0Cu); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110490u; return; } if (c.pc != 0x00450E0Cu) [[unlikely]] return; }
L_00450E0C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00450EE0; } }
L_00450E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450E24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00450E24u) [[unlikely]] return; }
L_00450E24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  goto L_00450E4C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450E48u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 15u, depth + 1u); else { c.pc = 0x003181E0u; return; } if (c.pc != 0x00450E48u) [[unlikely]] return; }
L_00450E48:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00450E4C:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00450E58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00450E58u) [[unlikely]] return; }
L_00450E58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  goto L_00450EB4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31000u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[4], 0u + 2u);
    c.f[0] = ld32((c.r[3].w[0] + 31004u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 21;
L_00450EB4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 28u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_00450ED0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00450ED0:
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_00450EE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  goto L_00450EF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 20u));  if (t) { goto L_00450EF8; } }
L_00450EF4:
    c.f[1] = c.r[2].w[0];
    c.budget -= 1;
L_00450EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; fpu_div(c, 3u, c.f[0], c.f[1]);  if (t) { goto L_00450F28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00450F30; } }
L_00450F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_00450F30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00450F48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_00450F50; } }
L_00450F48:
    c.f[2] = 0u;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 2;
L_00450F50:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00450F98; }
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00450F74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450F74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00450F94; }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00450F90; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450F90:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00450F94:
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00450F98:
    st32((c.r[3].w[0] + 12u), c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[3]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00450FF0; } }
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00450FD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450FD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00450FF0; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00450FEC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00450FEC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00450FF0:
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    st32((c.r[3].w[0]), c.f[2]);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
L_00451018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451020u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 392u, depth + 1u); else { c.pc = 0x00452AC0u; return; } if (c.pc != 0x00451020u) [[unlikely]] return; }
L_00451020:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00451024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00451050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[5].w[0]);  if (t) { goto L_0045107C; } }
    st32((c.r[29].w[0] + 88u), c.r[17].w[0]);
    c.budget -= 1;
L_0045107C:
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045108Cu); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x0045108Cu) [[unlikely]] return; }
L_0045108C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], c.r[18].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[4].w[0] + 16u)));  goto L_004510A0; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004510A0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00451118; }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004510B8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 80u, depth + 1u); else { c.pc = 0x004507E0u; return; } if (c.pc != 0x004510B8u) [[unlikely]] return; }
L_004510B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_004510E4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 240u), 0u);  goto L_004510E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004510DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004510DCu) [[unlikely]] return; }
L_004510DC:
    st32((c.r[16].w[0] + 240u), 0u);
    c.budget -= 1;
L_004510E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_004510E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 92u);  goto L_004510F4; }
    st32((c.r[29].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 2;
L_004510F4:
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451100u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00D4(c, 287u, depth + 1u); else { c.pc = 0x00451F50u; return; } if (c.pc != 0x00451100u) [[unlikely]] return; }
L_00451100:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451114u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 386u, depth + 1u); else { c.pc = 0x004529D0u; return; } if (c.pc != 0x00451114u) [[unlikely]] return; }
L_00451114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00451118:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00451130:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451170u); st32((c.r[29].w[0] + 148u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00451170u) [[unlikely]] return; }
L_00451170:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[28].w[0] - 24708u);
    set32(c.r[20], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[21].d[0] == c.r[20].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  goto L_004511F8; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[20].w[0]);  goto L_004511D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004511A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004511A4u) [[unlikely]] return; }
L_004511A4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004511B4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004511B4u) [[unlikely]] return; }
L_004511B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004511D0; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004511D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004511D0u) [[unlikely]] return; }
L_004511D0:
    st32((c.r[16].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_004511D4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004511F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004511E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004511E4u) [[unlikely]] return; }
L_004511E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004511F4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004511F4u) [[unlikely]] return; }
L_004511F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_004511F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  goto L_00451214; }
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045120Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00D4(c, 284u, depth + 1u); else { c.pc = 0x00451EB0u; return; } if (c.pc != 0x0045120Cu) [[unlikely]] return; }
L_0045120C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00451224; } }
L_00451214:
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451220u); st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 284u, depth + 1u); else { c.pc = 0x00451EB0u; return; } if (c.pc != 0x00451220u) [[unlikely]] return; }
L_00451220:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00451224:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 160u);  goto L_004513B4; }
    set32(c.r[4], 0u + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045123Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045123Cu) [[unlikely]] return; }
L_0045123C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 144u)));  goto L_00451258; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451250u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 268u, depth + 1u); else { c.pc = 0x00316ED0u; return; } if (c.pc != 0x00451250u) [[unlikely]] return; }
L_00451250:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 2;
L_00451258:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[20].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 144u)));  goto L_004512C4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), c.r[20].w[0]);  goto L_004512A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451270u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451270u) [[unlikely]] return; }
L_00451270:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451280u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451280u) [[unlikely]] return; }
L_00451280:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045129C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045129Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045129Cu) [[unlikely]] return; }
L_0045129C:
    st32((c.r[16].w[0] + 144u), c.r[20].w[0]);
    c.budget -= 1;
L_004512A0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004512C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004512B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004512B0u) [[unlikely]] return; }
L_004512B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004512C0u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004512C0u) [[unlikely]] return; }
L_004512C0:
    set32(c.r[18], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_004512C4:
    set32(c.r[20], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 460u)));
    c.budget -= 4;
    if (c.r[21].d[0] == c.r[20].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 144u)));  goto L_00451338; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[18].w[0] + 460u), c.r[20].w[0]);  goto L_00451314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004512E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004512E4u) [[unlikely]] return; }
L_004512E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004512F4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004512F4u) [[unlikely]] return; }
L_004512F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451310; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451310u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451310u) [[unlikely]] return; }
L_00451310:
    st32((c.r[18].w[0] + 460u), c.r[20].w[0]);
    c.budget -= 1;
L_00451314:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00451334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451324u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451324u) [[unlikely]] return; }
L_00451324:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451334u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451334u) [[unlikely]] return; }
L_00451334:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_00451338:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    st32((c.r[2].w[0] + 468u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    st32((c.r[2].w[0] + 472u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045135Cu); st32((c.r[4].w[0] + 476u), 0u);  if (depth < kMaxDepth) unit_0085(c, 216u, depth + 1u); else { c.pc = 0x00316760u; return; } if (c.pc != 0x0045135Cu) [[unlikely]] return; }
L_0045135C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[2].w[0] + 480u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045137Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 317u, depth + 1u); else { c.pc = 0x0029BA10u; return; } if (c.pc != 0x0045137Cu) [[unlikely]] return; }
L_0045137C:
    st32((c.r[16].w[0] + 240u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 244u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004513ACu); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_00D4(c, 74u, depth + 1u); else { c.pc = 0x00450680u; return; } if (c.pc != 0x004513ACu) [[unlikely]] return; }
L_004513AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_004513DC; } }
L_004513B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004513BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004513BCu) [[unlikely]] return; }
L_004513BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  goto L_004513D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004513D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 297u, depth + 1u); else { c.pc = 0x0044EB00u; return; } if (c.pc != 0x004513D4u) [[unlikely]] return; }
L_004513D4:
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 1;
L_004513D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004513DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004513F4u); st32((c.r[16].w[0] + 244u), 0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004513F4u) [[unlikely]] return; }
L_004513F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00451420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 1512u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 72u), 0u);  if (t) { goto L_00451494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] - 1512u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 1512u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 1504u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1508u)));
    st32((c.r[29].w[0] + 64u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[2].w[0] - 1504u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 1508u), c.r[4].w[0]);
    c.budget -= 17;
L_00451494:
    set32(c.r[16], c.r[28].w[0] - 24708u);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_004516A8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 32u)));  goto L_00451514; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004514F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004514C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004514C0u) [[unlikely]] return; }
L_004514C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004514D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004514D0u) [[unlikely]] return; }
L_004514D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004514EC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004514ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004514ECu) [[unlikely]] return; }
L_004514EC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004514F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_00451510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451500u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451500u) [[unlikely]] return; }
L_00451500:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451510u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451510u) [[unlikely]] return; }
L_00451510:
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00451514:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 144u)));  goto L_00451580; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0045155C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045152Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045152Cu) [[unlikely]] return; }
L_0045152C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045153Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045153Cu) [[unlikely]] return; }
L_0045153C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451558; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451558u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451558u) [[unlikely]] return; }
L_00451558:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045155C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0045157C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045156Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045156Cu) [[unlikely]] return; }
L_0045156C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045157Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045157Cu) [[unlikely]] return; }
L_0045157C:
    set32(c.r[18], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_00451580:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0])));  goto L_004515EC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004515C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451598u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451598u) [[unlikely]] return; }
L_00451598:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004515A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004515A8u) [[unlikely]] return; }
L_004515A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004515C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004515C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004515C4u) [[unlikely]] return; }
L_004515C4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004515C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 144u), 0u);  if (t) { goto L_004515E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004515D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004515D8u) [[unlikely]] return; }
L_004515D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004515E8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004515E8u) [[unlikely]] return; }
L_004515E8:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004515EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00451654; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00451634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451604u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451604u) [[unlikely]] return; }
L_00451604:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451614u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451614u) [[unlikely]] return; }
L_00451614:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451630; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451630u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451630u) [[unlikely]] return; }
L_00451630:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00451634:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_00451654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451644u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451644u) [[unlikely]] return; }
L_00451644:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451654u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451654u) [[unlikely]] return; }
L_00451654:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_004516A4; }
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451668u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D4(c, 42u, depth + 1u); else { c.pc = 0x00450380u; return; } if (c.pc != 0x00451668u) [[unlikely]] return; }
L_00451668:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 88u, depth + 1u); else { c.pc = 0x001BD680u; return; } if (c.pc != 0x00451674u) [[unlikely]] return; }
L_00451674:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 66u, depth + 1u); else { c.pc = 0x002D87E0u; return; } if (c.pc != 0x00451680u) [[unlikely]] return; }
L_00451680:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045168Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004C(c, 153u, depth + 1u); else { c.pc = 0x00231F90u; return; } if (c.pc != 0x0045168Cu) [[unlikely]] return; }
L_0045168C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451698u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 212u, depth + 1u); else { c.pc = 0x001F5BD0u; return; } if (c.pc != 0x00451698u) [[unlikely]] return; }
L_00451698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004516A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004516A0u) [[unlikely]] return; }
L_004516A0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_004516A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_004516A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004516B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x004516B0u) [[unlikely]] return; }
L_004516B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004516D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00451714; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00451700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004516FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BD500u; return; } if (c.pc != 0x004516FCu) [[unlikely]] return; }
L_004516FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00451700:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00451718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451714u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00451714u) [[unlikely]] return; }
L_00451714:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00451718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00451730:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451754u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00451754u) [[unlikely]] return; }
L_00451754:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00451764u) [[unlikely]] return; }
L_00451764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004517BC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 248u, depth + 1u); else { c.pc = 0x00451A90u; return; } if (c.pc != 0x00451778u) [[unlikely]] return; }
L_00451778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451780u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x00451780u) [[unlikely]] return; }
L_00451780:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045178Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 474u, depth + 1u); else { c.pc = 0x002D72C0u; return; } if (c.pc != 0x0045178Cu) [[unlikely]] return; }
L_0045178C:
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 245u, depth + 1u); else { c.pc = 0x00451A40u; return; } if (c.pc != 0x00451798u) [[unlikely]] return; }
L_00451798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004517A0u); set32(c.r[4], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_00D4(c, 242u, depth + 1u); else { c.pc = 0x004519F0u; return; } if (c.pc != 0x004517A0u) [[unlikely]] return; }
L_004517A0:
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004517ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 239u, depth + 1u); else { c.pc = 0x004519A0u; return; } if (c.pc != 0x004517ACu) [[unlikely]] return; }
L_004517AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004517B4u); set32(c.r[4], c.r[19].w[0] + 160u);  if (depth < kMaxDepth) unit_00D4(c, 238u, depth + 1u); else { c.pc = 0x00451980u; return; } if (c.pc != 0x004517B4u) [[unlikely]] return; }
L_004517B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004517BCu); set32(c.r[4], c.r[19].w[0] + 224u);  if (depth < kMaxDepth) unit_003F(c, 43u, depth + 1u); else { c.pc = 0x001FC7B0u; return; } if (c.pc != 0x004517BCu) [[unlikely]] return; }
L_004517BC:
    set32(c.r[2], c.r[28].w[0] - 24708u);
    set32(c.r[4], 0u + 256u);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 88u);
    set32(c.r[2], 0u + 2u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004517F4u); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0072(c, 328u, depth + 1u); else { c.pc = 0x002CAC60u; return; } if (c.pc != 0x004517F4u) [[unlikely]] return; }
L_004517F4:
    set32(c.r[18], ld32((c.r[19].w[0] + 36u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  goto L_00451868; }
L_00451804:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 36u), c.r[16].w[0]);  goto L_00451844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451814u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451814u) [[unlikely]] return; }
L_00451814:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00451818:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451824u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451824u) [[unlikely]] return; }
L_00451824:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451840; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451840u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451840u) [[unlikely]] return; }
L_00451840:
    st32((c.r[19].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 1;
L_00451844:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00451864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451854u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451854u) [[unlikely]] return; }
L_00451854:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451864u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451864u) [[unlikely]] return; }
L_00451864:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00451868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451870u);  if (depth < kMaxDepth) unit_002F(c, 31u, depth + 1u); else { c.pc = 0x001BC540u; return; } if (c.pc != 0x00451870u) [[unlikely]] return; }
L_00451870:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045187Cu); set32(c.r[5], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_002F(c, 27u, depth + 1u); else { c.pc = 0x001BC4C0u; return; } if (c.pc != 0x0045187Cu) [[unlikely]] return; }
L_0045187C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 114u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045188Cu); set32(c.r[4], c.r[4].w[0] - 1512u);  if (depth < kMaxDepth) unit_002D(c, 108u, depth + 1u); else { c.pc = 0x001B5110u; return; } if (c.pc != 0x0045188Cu) [[unlikely]] return; }
L_0045188C:
    c.f[12] = ld32((c.r[28].w[0] - 32620u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[19].w[0] + 40u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1512u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004518B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002D(c, 191u, depth + 1u); else { c.pc = 0x001B6860u; return; } if (c.pc != 0x004518B0u) [[unlikely]] return; }
L_004518B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004518C0u); set32(c.r[4], c.r[4].w[0] - 1512u);  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B5080u; return; } if (c.pc != 0x004518C0u) [[unlikely]] return; }
L_004518C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004518D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004518D4u) [[unlikely]] return; }
L_004518D4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004518E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 31u, depth + 1u); else { c.pc = 0x002CC3D0u; return; } if (c.pc != 0x004518E8u) [[unlikely]] return; }
L_004518E8:
    set32(c.r[17], ld32((c.r[19].w[0] + 32u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_0045195C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 32u), c.r[16].w[0]);  goto L_00451938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451908u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451908u) [[unlikely]] return; }
L_00451908:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451918u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451918u) [[unlikely]] return; }
L_00451918:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451934; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451934u) [[unlikely]] return; }
L_00451934:
    st32((c.r[19].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_00451938:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00451958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451948u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451948u) [[unlikely]] return; }
L_00451948:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451958u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451958u) [[unlikely]] return; }
L_00451958:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0045195C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451964u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00451964u) [[unlikely]] return; }
L_00451964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00451980:
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), 0u);  c.pc = t; return; }
L_004519A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_004519D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004519C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004519C8u) [[unlikely]] return; }
L_004519C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004519D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004519D8u) [[unlikely]] return; }
L_004519D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004519F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 84u), 0u);  if (t) { goto L_00451A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451A18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451A18u) [[unlikely]] return; }
L_00451A18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451A28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451A28u) [[unlikely]] return; }
L_00451A28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00451A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_00451A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451A68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451A68u) [[unlikely]] return; }
L_00451A68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451A78u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451A78u) [[unlikely]] return; }
L_00451A78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00451A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_00451AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451AB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451AB8u) [[unlikely]] return; }
L_00451AB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451AC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451AC8u) [[unlikely]] return; }
L_00451AC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00451AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00451C3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451B10u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 16u, depth + 1u); else { c.pc = 0x00450170u; return; } if (c.pc != 0x00451B10u) [[unlikely]] return; }
L_00451B10:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 32u);  goto L_00451B60; }
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00451B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451B30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451B30u) [[unlikely]] return; }
L_00451B30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451B40u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451B40u) [[unlikely]] return; }
L_00451B40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451B5C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451B5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451B5Cu) [[unlikely]] return; }
L_00451B5C:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00451B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 28u);  goto L_00451BAC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00451BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451B7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451B7Cu) [[unlikely]] return; }
L_00451B7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451B8Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451B8Cu) [[unlikely]] return; }
L_00451B8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451BA8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451BA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451BA8u) [[unlikely]] return; }
L_00451BA8:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_00451BAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_00451BF8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00451BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451BC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451BC8u) [[unlikely]] return; }
L_00451BC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451BD8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451BD8u) [[unlikely]] return; }
L_00451BD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451BF4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451BF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451BF4u) [[unlikely]] return; }
L_00451BF4:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00451BF8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00451C28; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00451C24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00451C24; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00451C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451C24u);  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x00451C24u) [[unlikely]] return; }
L_00451C24:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00451C28:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00451C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451C3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00451C3Cu) [[unlikely]] return; }
L_00451C3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00451C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00451C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28992u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 4u);  if (t) { goto L_00451CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451C94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00451C94u) [[unlikely]] return; }
L_00451C94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00451CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451CACu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00451CACu) [[unlikely]] return; }
L_00451CAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00451CB4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 60u);  goto L_00451CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451CC4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00451CC4u) [[unlikely]] return; }
L_00451CC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00451CC8:
    set32(c.r[2], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_00451CCC:
    st32((c.r[29].w[0] + 56u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 52u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451CE8u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D4(c, 391u, depth + 1u); else { c.pc = 0x00452A90u; return; } if (c.pc != 0x00451CE8u) [[unlikely]] return; }
L_00451CE8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_00451D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451CFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451CFCu) [[unlikely]] return; }
L_00451CFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451D0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451D0Cu) [[unlikely]] return; }
L_00451D0C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_00451D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451D20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451D20u) [[unlikely]] return; }
L_00451D20:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451D30u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451D30u) [[unlikely]] return; }
L_00451D30:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_00451D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451D44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451D44u) [[unlikely]] return; }
L_00451D44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451D54u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451D54u) [[unlikely]] return; }
L_00451D54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451D60u); st32((c.r[28].w[0] - 24712u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 47u, depth + 1u); else { c.pc = 0x00450420u; return; } if (c.pc != 0x00451D60u) [[unlikely]] return; }
L_00451D60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00451D80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00451E88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 60u);
    set32(c.r[2], c.r[2].w[0] + 28896u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00451E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00451E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7360u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 64u)));  if (t) { goto L_00451DEC; } }
L_00451DD8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451DECu); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451DECu) [[unlikely]] return; }
L_00451DEC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00451DD8u | kUnwind; return; } goto L_00451DD8; }
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[2], c.r[17].w[0] + 60u);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 68u), 0u);  if (t) { goto L_00451E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_00451E14:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00451E64; }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00451E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451E34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00451E34u) [[unlikely]] return; }
L_00451E34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451E44u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00451E44u) [[unlikely]] return; }
L_00451E44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00451E60; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00451E60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00451E60u) [[unlikely]] return; }
L_00451E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00451E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 200u, depth + 1u); else { c.pc = 0x002813D0u; return; } if (c.pc != 0x00451E6Cu) [[unlikely]] return; }
L_00451E6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00451E8C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451E88u); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00451E88u) [[unlikely]] return; }
L_00451E88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00451E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00451EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00451F00; } }
L_00451ED4:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00451EF0; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00451F00; } }
L_00451EF0:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00451F00:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00451ED4u | kUnwind; return; } goto L_00451ED4; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_00451F28; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_00451F40; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_00451F28:
    set32(c.r[8], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451F3Cu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00D4(c, 496u, depth + 1u); else { c.pc = 0x004539B0u; return; } if (c.pc != 0x00451F3Cu) [[unlikely]] return; }
L_00451F3C:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00451F40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00451F50:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_00451F74; } }
L_00451F5C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_00451F74; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_00451F74:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00451F5Cu | kUnwind; return; } goto L_00451F5C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_00451FA0; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_00451FA4; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_00451FA0:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00451FA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00451FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004520F8; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));  goto L_004520A8; }
    c.f[1] = ld32((c.r[19].w[0] + 44u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004520A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00451FFCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x00451FFCu) [[unlikely]] return; }
L_00451FFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0045203C; } }
    goto L_00452008;
L_00452004:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_00452008:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452014u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 382u, depth + 1u); else { c.pc = 0x0031B570u; return; } if (c.pc != 0x00452014u) [[unlikely]] return; }
L_00452014:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 92u);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[4], c.r[2].w[0] + 140u);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045203Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0045203Cu) [[unlikely]] return; }
L_0045203C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_0045204C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00452094; } }
L_0045204C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00452058u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00452058u) [[unlikely]] return; }
L_00452058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_00452078; } }
L_00452068:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00452078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00452084; } }
L_00452078:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452068u | kUnwind; return; } goto L_00452068; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00452084:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00452094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00452094; } }
L_00452094:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004520A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004520A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x004520A4u) [[unlikely]] return; }
L_004520A4:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));
    c.budget -= 1;
L_004520A8:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004520FC; }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004520EC; } }
L_004520C0:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_004520D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004520E0; } }
L_004520D4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004520E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004520E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 289u, depth + 1u); else { c.pc = 0x00451FB0u; return; } if (c.pc != 0x004520E8u) [[unlikely]] return; }
L_004520E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004520EC:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004520C0u | kUnwind; return; } goto L_004520C0; }
L_004520F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004520FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00452120:
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
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0045229C; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_0045216C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00452168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00452168u) [[unlikely]] return; }
L_00452168:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_0045216C:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_004522A0; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00452290; } }
L_00452184:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_00452198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004521A4; } }
L_00452198:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_004521A4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00452290; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004521C0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004521BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004521BCu) [[unlikely]] return; }
L_004521BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004521C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004521C8u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x004521C8u) [[unlikely]] return; }
L_004521C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045228C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004521D8u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x004521D8u) [[unlikely]] return; }
L_004521D8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00452280; } }
L_004521E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004521ECu); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x004521ECu) [[unlikely]] return; }
L_004521EC:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_00452200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00452214; } }
L_00452200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452208u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x00452208u) [[unlikely]] return; }
L_00452208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452210u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x00452210u) [[unlikely]] return; }
L_00452210:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00452214:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00452280; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00452230; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045222Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045222Cu) [[unlikely]] return; }
L_0045222C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00452230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452238u);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x00452238u) [[unlikely]] return; }
L_00452238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045227C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x00452248u) [[unlikely]] return; }
L_00452248:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0045226C; } }
L_00452254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045225Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x0045225Cu) [[unlikely]] return; }
L_0045225C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452268u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 299u, depth + 1u); else { c.pc = 0x00452120u; return; } if (c.pc != 0x00452268u) [[unlikely]] return; }
L_00452268:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0045226C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452254u | kUnwind; return; } goto L_00452254; }
L_0045227C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00452280:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004521E4u | kUnwind; return; } goto L_004521E4; } }
L_0045228C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00452290:
    c.r[3].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452184u | kUnwind; return; } goto L_00452184; }
L_0045229C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004522A0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004522D0:
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
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004524CC; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_0045237C; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00452320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00452368; } }
L_00452320:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045232Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045232Cu) [[unlikely]] return; }
L_0045232C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_0045234C; } }
L_0045233C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0045234C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00452358; } }
L_0045234C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045233Cu | kUnwind; return; } goto L_0045233C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00452358:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00452368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00452368; } }
L_00452368:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00452378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452378u); c.r[5].d[0] = ld8((c.r[20].w[0]));  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x00452378u) [[unlikely]] return; }
L_00452378:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_0045237C:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_004524D0; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004524C0; } }
L_00452394:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_004523A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004523B4; } }
L_004523A8:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_004523B4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004524C0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004523EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004523D4u); set32(c.r[4], c.r[4].w[0] + 19952u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x004523D4u) [[unlikely]] return; }
L_004523D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004523E8; } }
    c.r[5].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004523E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x004523E8u) [[unlikely]] return; }
L_004523E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004523EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004523F4u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x004523F4u) [[unlikely]] return; }
L_004523F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004524BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452404u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x00452404u) [[unlikely]] return; }
L_00452404:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004524B0; } }
L_00452410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452418u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x00452418u) [[unlikely]] return; }
L_00452418:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_0045242C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00452440; } }
L_0045242C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452434u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x00452434u) [[unlikely]] return; }
L_00452434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045243Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x0045243Cu) [[unlikely]] return; }
L_0045243C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00452440:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004524B0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00452460; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045245Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 334u, depth + 1u); else { c.pc = 0x00452500u; return; } if (c.pc != 0x0045245Cu) [[unlikely]] return; }
L_0045245C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00452460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452468u);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x00452468u) [[unlikely]] return; }
L_00452468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004524AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x00452478u) [[unlikely]] return; }
L_00452478:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0045249C; } }
L_00452484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045248Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x0045248Cu) [[unlikely]] return; }
L_0045248C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452498u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 315u, depth + 1u); else { c.pc = 0x004522D0u; return; } if (c.pc != 0x00452498u) [[unlikely]] return; }
L_00452498:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0045249C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452484u | kUnwind; return; } goto L_00452484; }
L_004524AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004524B0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452410u | kUnwind; return; } goto L_00452410; } }
L_004524BC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004524C0:
    c.r[3].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452394u | kUnwind; return; } goto L_00452394; }
L_004524CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004524D0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00452500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00452524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00452570; } }
L_00452524:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00452534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00452534u) [[unlikely]] return; }
L_00452534:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_00452554; } }
L_00452544:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00452554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00452560; } }
L_00452554:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452544u | kUnwind; return; } goto L_00452544; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00452560:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00452570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00452570; } }
L_00452570:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00452588; }
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452584u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x00452584u) [[unlikely]] return; }
L_00452584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00452588:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004525A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0045271C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));  goto L_004526CC; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004526C8; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004525EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00452628; } }
L_004525EC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004525F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004525F8u) [[unlikely]] return; }
L_004525F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_00452618; } }
L_00452608:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00452618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00452624; } }
L_00452618:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452608u | kUnwind; return; } goto L_00452608; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00452624:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00452628:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004526C8; } }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00452640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0045267C; } }
L_00452640:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045264Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045264Cu) [[unlikely]] return; }
L_0045264C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13368u);  if (t) { goto L_0045266C; } }
L_0045265C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0045266C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00452678; } }
L_0045266C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045265Cu | kUnwind; return; } goto L_0045265C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00452678:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0045267C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004526C8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_004526BC; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[3].w[0]), c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_004526C8; } }
L_004526BC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004526C8u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x004526C8u) [[unlikely]] return; }
L_004526C8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));
    c.budget -= 1;
L_004526CC:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00452720; }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00452710; } }
L_004526E4:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_004526F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00452704; } }
L_004526F8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00452704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045270Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 338u, depth + 1u); else { c.pc = 0x004525A0u; return; } if (c.pc != 0x0045270Cu) [[unlikely]] return; }
L_0045270C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00452710:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004526E4u | kUnwind; return; } goto L_004526E4; }
L_0045271C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00452720:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00452740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00452854; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004527D0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0045278C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452788u);  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x00452788u) [[unlikely]] return; }
L_00452788:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0045278C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004527A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045279Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x0045279Cu) [[unlikely]] return; }
L_0045279C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004527A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004527A8u);  if (depth < kMaxDepth) unit_00D4(c, 385u, depth + 1u); else { c.pc = 0x004529C0u; return; } if (c.pc != 0x004527A8u) [[unlikely]] return; }
L_004527A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004527B4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D4(c, 384u, depth + 1u); else { c.pc = 0x004529B0u; return; } if (c.pc != 0x004527B4u) [[unlikely]] return; }
L_004527B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004527BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 383u, depth + 1u); else { c.pc = 0x004529A0u; return; } if (c.pc != 0x004527BCu) [[unlikely]] return; }
L_004527BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004527CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 381u, depth + 1u); else { c.pc = 0x00452980u; return; } if (c.pc != 0x004527CCu) [[unlikely]] return; }
L_004527CC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004527D0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00452834; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004527F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004527ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x004527ECu) [[unlikely]] return; }
L_004527EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004527F0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00452804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452800u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x00452800u) [[unlikely]] return; }
L_00452800:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00452804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045280Cu);  if (depth < kMaxDepth) unit_00D4(c, 385u, depth + 1u); else { c.pc = 0x004529C0u; return; } if (c.pc != 0x0045280Cu) [[unlikely]] return; }
L_0045280C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452818u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D4(c, 384u, depth + 1u); else { c.pc = 0x004529B0u; return; } if (c.pc != 0x00452818u) [[unlikely]] return; }
    goto L_00452818;
L_00452814:
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 1;
L_00452818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 383u, depth + 1u); else { c.pc = 0x004529A0u; return; } if (c.pc != 0x00452820u) [[unlikely]] return; }
L_00452820:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00452824:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452830u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 381u, depth + 1u); else { c.pc = 0x00452980u; return; } if (c.pc != 0x00452830u) [[unlikely]] return; }
L_00452830:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00452834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045283Cu);  if (depth < kMaxDepth) unit_00D4(c, 385u, depth + 1u); else { c.pc = 0x004529C0u; return; } if (c.pc != 0x0045283Cu) [[unlikely]] return; }
L_0045283C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 383u, depth + 1u); else { c.pc = 0x004529A0u; return; } if (c.pc != 0x00452844u) [[unlikely]] return; }
L_00452844:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_00452858; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452854u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00452854u) [[unlikely]] return; }
L_00452854:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00452858:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0045294C; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004528C8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00452884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x00452880u) [[unlikely]] return; }
L_00452880:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00452884:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00452898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x00452894u) [[unlikely]] return; }
L_00452894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00452898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004528A0u);  if (depth < kMaxDepth) unit_00D4(c, 385u, depth + 1u); else { c.pc = 0x004529C0u; return; } if (c.pc != 0x004528A0u) [[unlikely]] return; }
L_004528A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004528ACu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D4(c, 384u, depth + 1u); else { c.pc = 0x004529B0u; return; } if (c.pc != 0x004528ACu) [[unlikely]] return; }
L_004528AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004528B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 383u, depth + 1u); else { c.pc = 0x004529A0u; return; } if (c.pc != 0x004528B4u) [[unlikely]] return; }
L_004528B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004528C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 381u, depth + 1u); else { c.pc = 0x00452980u; return; } if (c.pc != 0x004528C4u) [[unlikely]] return; }
L_004528C4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004528C8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045292C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004528E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004528E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x004528E4u) [[unlikely]] return; }
L_004528E4:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004528E8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004528FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004528F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 346u, depth + 1u); else { c.pc = 0x00452740u; return; } if (c.pc != 0x004528F8u) [[unlikely]] return; }
L_004528F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004528FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452904u);  if (depth < kMaxDepth) unit_00D4(c, 385u, depth + 1u); else { c.pc = 0x004529C0u; return; } if (c.pc != 0x00452904u) [[unlikely]] return; }
L_00452904:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452910u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D4(c, 384u, depth + 1u); else { c.pc = 0x004529B0u; return; } if (c.pc != 0x00452910u) [[unlikely]] return; }
L_00452910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 383u, depth + 1u); else { c.pc = 0x004529A0u; return; } if (c.pc != 0x00452918u) [[unlikely]] return; }
L_00452918:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452928u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D4(c, 381u, depth + 1u); else { c.pc = 0x00452980u; return; } if (c.pc != 0x00452928u) [[unlikely]] return; }
L_00452928:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045292C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452934u);  if (depth < kMaxDepth) unit_00D4(c, 385u, depth + 1u); else { c.pc = 0x004529C0u; return; } if (c.pc != 0x00452934u) [[unlikely]] return; }
L_00452934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045293Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 383u, depth + 1u); else { c.pc = 0x004529A0u; return; } if (c.pc != 0x0045293Cu) [[unlikely]] return; }
L_0045293C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0045294C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045294Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045294Cu) [[unlikely]] return; }
L_0045294C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00452960; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045295Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045295Cu) [[unlikely]] return; }
L_0045295C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00452960:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00452980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00452994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452994u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00452994u) [[unlikely]] return; }
L_00452994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004529A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_004529B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004529C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004529D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00452A50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_00452A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_00452A0C; } }
L_00452A04:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00452A0C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452A04u | kUnwind; return; } goto L_00452A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00452A48; } }
L_00452A28:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452A28u | kUnwind; return; } goto L_00452A28; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00452A48:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00452A50:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452A5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x00452A5Cu) [[unlikely]] return; }
L_00452A5C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00452A70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00452A6Cu) [[unlikely]] return; }
L_00452A6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00452A70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00452A90:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00452AC0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00452FE0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_00452B3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452B30u); set32(c.r[5], c.r[5].w[0] + 29929u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00452B30u) [[unlikely]] return; }
L_00452B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452B38u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00452B38u) [[unlikely]] return; }
L_00452B38:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00452B3C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_00452DF4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00452B70; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_00452B70:
    c.r[1].d[0] = c.r[30].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 3);  goto L_00452C3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00452BCC; } }
L_00452B84:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00452BBC; }
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[22].w[0]), c.r[21].w[0]);  if (t) { goto L_00452BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452BA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452BA0u) [[unlikely]] return; }
L_00452BA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452BB0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452BB0u) [[unlikely]] return; }
L_00452BB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[22].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_00452BBC:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00452BCC:
    c.r[1].d[0] = c.r[30].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452B84u | kUnwind; return; } goto L_00452B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00452C28; } }
L_00452BE0:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00452C18; }
    set32(c.r[23], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[22].w[0]), c.r[23].w[0]);  if (t) { goto L_00452C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452BFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452BFCu) [[unlikely]] return; }
L_00452BFC:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452C0Cu); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452C0Cu) [[unlikely]] return; }
L_00452C0C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[22].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_00452C18:
    set32(c.r[21], c.r[21].w[0] + 8u);
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00452C28:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452BE0u | kUnwind; return; } goto L_00452BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00452D60; } }
L_00452C3C:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[3].w[0]);  if (t) { goto L_00452C94; } }
L_00452C4C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00452C84; }
    set32(c.r[23], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[21].w[0]), c.r[23].w[0]);  if (t) { goto L_00452C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452C68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452C68u) [[unlikely]] return; }
L_00452C68:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452C78u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452C78u) [[unlikely]] return; }
L_00452C78:
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_00452C84:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00452C94:
    c.r[3].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452C4Cu | kUnwind; return; } goto L_00452C4C; } }
    set32(c.r[3], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[20].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[18].w[0] + c.r[4].w[0]);  goto L_00452D54; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00452CCC; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00452CCC:
    set32(c.r[21], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00452D54; } }
L_00452CD8:
    set32(c.r[20], c.r[20].w[0] - 8u);
    set32(c.r[19], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00452D50; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[21].w[0])));  goto L_00452D2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452CFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452CFCu) [[unlikely]] return; }
L_00452CFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452D0Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452D0Cu) [[unlikely]] return; }
L_00452D0C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00452D28; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00452D28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00452D28u) [[unlikely]] return; }
L_00452D28:
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_00452D2C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_00452D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452D3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452D3Cu) [[unlikely]] return; }
L_00452D3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452D4Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452D4Cu) [[unlikely]] return; }
L_00452D4C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00452D50:
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 1;
L_00452D54:
    c.r[1].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452CD8u | kUnwind; return; } goto L_00452CD8; }
L_00452D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00452DE4; } }
L_00452D68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00452DD8; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0])));  goto L_00452DB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452D84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452D84u) [[unlikely]] return; }
L_00452D84:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452D94u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452D94u) [[unlikely]] return; }
L_00452D94:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00452DB0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00452DB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00452DB0u) [[unlikely]] return; }
L_00452DB0:
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00452DB4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0]), c.r[19].w[0]);  if (t) { goto L_00452DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452DC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452DC4u) [[unlikely]] return; }
L_00452DC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452DD4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452DD4u) [[unlikely]] return; }
L_00452DD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00452DD8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
L_00452DE4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[19], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452D68u | kUnwind; return; } goto L_00452D68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00452FE4; } }
L_00452DF4:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_00452E10; }
L_00452E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00452E2C; } }
L_00452E18:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_00452E2C; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_00452E2C:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00452E18u | kUnwind; return; } goto L_00452E18; }
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452E44u); set32(c.r[4], c.r[20].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00452E44u) [[unlikely]] return; }
L_00452E44:
    st32((c.r[29].w[0] + 180u), c.r[20].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_00452EAC; } }
L_00452E64:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_00452E9C; }
    set32(c.r[20], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[22].w[0]), c.r[20].w[0]);  if (t) { goto L_00452E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452E80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452E80u) [[unlikely]] return; }
L_00452E80:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452E90u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452E90u) [[unlikely]] return; }
L_00452E90:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
L_00452E9C:
    set32(c.r[21], c.r[21].w[0] + 8u);
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
L_00452EAC:
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452E64u | kUnwind; return; } goto L_00452E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00452F08; } }
L_00452EC0:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_00452EF8; }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[22].w[0]), c.r[18].w[0]);  if (t) { goto L_00452EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452EDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452EDCu) [[unlikely]] return; }
L_00452EDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452EECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452EECu) [[unlikely]] return; }
L_00452EEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
L_00452EF8:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
L_00452F08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452EC0u | kUnwind; return; } goto L_00452EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;  if (t) { goto L_00452F64; } }
L_00452F18:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_00452F50; }
    set32(c.r[16], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[22].w[0]), c.r[16].w[0]);  if (t) { goto L_00452F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452F34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00452F34u) [[unlikely]] return; }
L_00452F34:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452F44u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00452F44u) [[unlikely]] return; }
L_00452F44:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
L_00452F50:
    set32(c.r[21], c.r[21].w[0] + 8u);
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00452F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00452F18u | kUnwind; return; } goto L_00452F18; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00452FBC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 17;
L_00452FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452FC4u);  if (depth < kMaxDepth) unit_00D4(c, 512u, depth + 1u); else { c.pc = 0x00453C70u; return; } if (c.pc != 0x00452FC4u) [[unlikely]] return; }
L_00452FC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00452FE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00452FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00452FE0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00452FE0u) [[unlikely]] return; }
L_00452FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00452FE4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00453010:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00453144; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[16].w[0] << 3);
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045305Cu); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0045305Cu) [[unlikely]] return; }
L_0045305C:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_004530C4; } }
L_0045307C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  goto L_004530B4; }
    set32(c.r[20], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0]), c.r[20].w[0]);  if (t) { goto L_004530A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453098u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453098u) [[unlikely]] return; }
L_00453098:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004530A8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004530A8u) [[unlikely]] return; }
L_004530A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
L_004530B4:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
L_004530C4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045307Cu | kUnwind; return; } goto L_0045307C; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00453120; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_00453120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453128u);  if (depth < kMaxDepth) unit_00D4(c, 512u, depth + 1u); else { c.pc = 0x00453C70u; return; } if (c.pc != 0x00453128u) [[unlikely]] return; }
L_00453128:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00453148; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00453144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453144u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00453144u) [[unlikely]] return; }
L_00453144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00453148:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00453170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00453230; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 72u), 0u);  if (t) { goto L_004531BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004531ACu); set32(c.r[18], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004531ACu) [[unlikely]] return; }
L_004531AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004531BCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004531BCu) [[unlikely]] return; }
L_004531BC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 72u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004531E0u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 392u, depth + 1u); else { c.pc = 0x00452AC0u; return; } if (c.pc != 0x004531E0u) [[unlikely]] return; }
L_004531E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0045325C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004531F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004531F4u) [[unlikely]] return; }
L_004531F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453208u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453208u) [[unlikely]] return; }
L_00453208:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00453258; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453228u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453228u) [[unlikely]] return; }
L_00453228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00453258; } }
L_00453230:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00453258; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453258u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 501u, depth + 1u); else { c.pc = 0x00453AB0u; return; } if (c.pc != 0x00453258u) [[unlikely]] return; }
L_00453258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0045325C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00453270:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00453750; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_004532EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004532E0u); set32(c.r[5], c.r[5].w[0] + 29929u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004532E0u) [[unlikely]] return; }
L_004532E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004532E8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004532E8u) [[unlikely]] return; }
L_004532E8:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004532EC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0045357C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00453320; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00453320:
    c.r[1].d[0] = c.r[30].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_004533DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00453374; } }
L_00453334:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00453364; }
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[22].w[0]), c.r[21].w[0]);  if (t) { goto L_00453360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453350u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453350u) [[unlikely]] return; }
L_00453350:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453360u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453360u) [[unlikely]] return; }
L_00453360:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00453364:
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00453374:
    c.r[1].d[0] = c.r[30].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00453334u | kUnwind; return; } goto L_00453334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004533C8; } }
L_00453388:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004533B8; }
    set32(c.r[23], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[22].w[0]), c.r[23].w[0]);  if (t) { goto L_004533B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004533A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004533A4u) [[unlikely]] return; }
L_004533A4:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004533B4u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004533B4u) [[unlikely]] return; }
L_004533B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004533B8:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004533C8:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00453388u | kUnwind; return; } goto L_00453388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004534F0; } }
L_004533DC:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[3].w[0]);  if (t) { goto L_0045342C; } }
L_004533EC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0045341C; }
    set32(c.r[23], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[21].w[0]), c.r[23].w[0]);  if (t) { goto L_00453418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453408u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453408u) [[unlikely]] return; }
L_00453408:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453418u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453418u) [[unlikely]] return; }
L_00453418:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0045341C:
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0045342C:
    c.r[3].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004533ECu | kUnwind; return; } goto L_004533EC; } }
    set32(c.r[3], c.r[30].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[18].w[0] + c.r[4].w[0]);  goto L_004534E4; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00453464; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00453464:
    set32(c.r[21], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004534E4; } }
L_00453470:
    set32(c.r[20], c.r[20].w[0] - 4u);
    set32(c.r[19], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_004534E4; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[21].w[0])));  goto L_004534C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453494u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453494u) [[unlikely]] return; }
L_00453494:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004534A4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004534A4u) [[unlikely]] return; }
L_004534A4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004534C0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004534C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004534C0u) [[unlikely]] return; }
L_004534C0:
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_004534C4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_004534E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004534D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004534D4u) [[unlikely]] return; }
L_004534D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004534E4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004534E4u) [[unlikely]] return; }
L_004534E4:
    c.r[1].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00453470u | kUnwind; return; } goto L_00453470; }
L_004534F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045356C; } }
L_004534F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_00453568; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0])));  goto L_00453544; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453514u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453514u) [[unlikely]] return; }
L_00453514:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453524u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453524u) [[unlikely]] return; }
L_00453524:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00453540; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453540u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453540u) [[unlikely]] return; }
L_00453540:
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00453544:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0]), c.r[19].w[0]);  if (t) { goto L_00453564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453554u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453554u) [[unlikely]] return; }
L_00453554:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453564u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453564u) [[unlikely]] return; }
L_00453564:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_00453568:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0045356C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[19], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004534F8u | kUnwind; return; } goto L_004534F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00453754; } }
L_0045357C:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_00453598; }
L_00453598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004535B4; } }
L_004535A0:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_004535B4; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_004535B4:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004535A0u | kUnwind; return; } goto L_004535A0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004535CCu); set32(c.r[4], c.r[20].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004535CCu) [[unlikely]] return; }
L_004535CC:
    st32((c.r[29].w[0] + 180u), c.r[20].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_0045362C; } }
L_004535EC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_0045361C; }
    set32(c.r[20], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[22].w[0]), c.r[20].w[0]);  if (t) { goto L_00453618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453608u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453608u) [[unlikely]] return; }
L_00453608:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453618u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453618u) [[unlikely]] return; }
L_00453618:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_0045361C:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
L_0045362C:
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004535ECu | kUnwind; return; } goto L_004535EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00453680; } }
L_00453640:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_00453670; }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[22].w[0]), c.r[18].w[0]);  if (t) { goto L_0045366C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045365Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045365Cu) [[unlikely]] return; }
L_0045365C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045366Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045366Cu) [[unlikely]] return; }
L_0045366C:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00453670:
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
L_00453680:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00453640u | kUnwind; return; } goto L_00453640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;  if (t) { goto L_004536D4; } }
L_00453690:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_004536C0; }
    set32(c.r[16], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[22].w[0]), c.r[16].w[0]);  if (t) { goto L_004536BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004536ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004536ACu) [[unlikely]] return; }
L_004536AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004536BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004536BCu) [[unlikely]] return; }
L_004536BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004536C0:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_004536D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00453690u | kUnwind; return; } goto L_00453690; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_0045372C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 17;
L_0045372C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453734u);  if (depth < kMaxDepth) unit_00D4(c, 517u, depth + 1u); else { c.pc = 0x00453D20u; return; } if (c.pc != 0x00453734u) [[unlikely]] return; }
L_00453734:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00453750; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00453750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453750u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00453750u) [[unlikely]] return; }
L_00453750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00453754:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00453780:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004538AC; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[16].w[0] << 2);
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004537CCu); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004537CCu) [[unlikely]] return; }
L_004537CC:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_0045382C; } }
L_004537EC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  goto L_0045381C; }
    set32(c.r[20], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0]), c.r[20].w[0]);  if (t) { goto L_00453818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453808u) [[unlikely]] return; }
L_00453808:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453818u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453818u) [[unlikely]] return; }
L_00453818:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0045381C:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
L_0045382C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004537ECu | kUnwind; return; } goto L_004537EC; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00453888; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_00453888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453890u);  if (depth < kMaxDepth) unit_00D4(c, 517u, depth + 1u); else { c.pc = 0x00453D20u; return; } if (c.pc != 0x00453890u) [[unlikely]] return; }
L_00453890:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004538B0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004538AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004538ACu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004538ACu) [[unlikely]] return; }
L_004538AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004538B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004538D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00453928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004538F4u);  if (depth < kMaxDepth) unit_00D4(c, 512u, depth + 1u); else { c.pc = 0x00453C70u; return; } if (c.pc != 0x004538F4u) [[unlikely]] return; }
L_004538F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00453914; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00453910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453910u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00453910u) [[unlikely]] return; }
L_00453910:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00453914:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045392C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00453928u) [[unlikely]] return; }
L_00453928:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045392C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00453940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00453998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453964u);  if (depth < kMaxDepth) unit_00D4(c, 517u, depth + 1u); else { c.pc = 0x00453D20u; return; } if (c.pc != 0x00453964u) [[unlikely]] return; }
L_00453964:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00453984; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00453980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453980u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00453980u) [[unlikely]] return; }
L_00453980:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00453984:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045399C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00453998u) [[unlikely]] return; }
L_00453998:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045399C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004539B0:
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00453A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453A08u); set32(c.r[5], c.r[5].w[0] + 29958u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00453A08u) [[unlikely]] return; }
L_00453A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453A10u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00453A10u) [[unlikely]] return; }
L_00453A10:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453A1Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00453A1Cu) [[unlikely]] return; }
L_00453A1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00453A40; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_00453A40:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00453A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_00453A64; } }
L_00453A60:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00453A64:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453A7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x00453A7Cu) [[unlikely]] return; }
L_00453A7C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00453A8C; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00453A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00453AB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00453AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00453C40; } }
L_00453AF0:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00453B14; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00453B14:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], c.r[23].w[0] << 3);  goto L_00453BB4; }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00453BA4; } }
L_00453B28:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00453B98; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[17].w[0])));  goto L_00453B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453B44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453B44u) [[unlikely]] return; }
L_00453B44:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453B54u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453B54u) [[unlikely]] return; }
L_00453B54:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00453B70; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453B70u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453B70u) [[unlikely]] return; }
L_00453B70:
    set32(c.r[21], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00453B74:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0]), c.r[21].w[0]);  if (t) { goto L_00453B94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453B84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453B84u) [[unlikely]] return; }
L_00453B84:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453B94u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453B94u) [[unlikely]] return; }
L_00453B94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00453B98:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 3;
L_00453BA4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00453B28u | kUnwind; return; } goto L_00453B28; }
    set32(c.r[2], c.r[23].w[0] << 3);
    c.budget -= 1;
L_00453BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_00453C10; } }
L_00453BBC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 8u);  goto L_00453C10; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00453C0C; } }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00453C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453BE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453BE0u) [[unlikely]] return; }
L_00453BE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453BF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453BF0u) [[unlikely]] return; }
L_00453BF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00453C0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453C0Cu) [[unlikely]] return; }
L_00453C0C:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00453C10:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00453BBCu | kUnwind; return; } goto L_00453BBC; } }
    set32(c.r[2], c.r[18].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00453C30; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00453C30:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00453C40:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00453C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00453CF0; } }
L_00453CA0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_00453CF4; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00453CF0; } }
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00453CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453CC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453CC4u) [[unlikely]] return; }
L_00453CC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453CD4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453CD4u) [[unlikely]] return; }
L_00453CD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00453CF0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453CF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453CF0u) [[unlikely]] return; }
L_00453CF0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00453CF4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00453CA0u | kUnwind; return; } goto L_00453CA0; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00453D20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00453D98; } }
L_00453D50:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_00453D9C; }
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00453D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453D6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00453D6Cu) [[unlikely]] return; }
L_00453D6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453D7Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00453D7Cu) [[unlikely]] return; }
L_00453D7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00453D98; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453D98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453D98u) [[unlikely]] return; }
L_00453D98:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00453D9C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00453D50u | kUnwind; return; } goto L_00453D50; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00453DD0:
    c.budget -= 2;
    {  goto L_00453DE0; }
L_00453DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453DFCu); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00132910u; return; } if (c.pc != 0x00453DFCu) [[unlikely]] return; }
L_00453DFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  goto L_00453F3C; }
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[7].w[0] >> 7);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & 127ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453E4Cu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00D5(c, 105u, depth + 1u); else { c.pc = 0x00454A60u; return; } if (c.pc != 0x00453E4Cu) [[unlikely]] return; }
L_00453E4C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453E6Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453E6Cu) [[unlikely]] return; }
L_00453E6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453E7Cu); st32((c.r[28].w[0] - 24684u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00453E7Cu) [[unlikely]] return; }
L_00453E7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[7], 0u + 1u);  goto L_00453EE0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 9u);  goto L_00453E98; }
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00453E98:
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453EB0u); set32(c.r[6], c.r[6].w[0] + 30000u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00453EB0u) [[unlikely]] return; }
L_00453EB0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00453F38; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00453ED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453ECCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00453ECCu) [[unlikely]] return; }
L_00453ECC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00453ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453ED8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00453ED8u) [[unlikely]] return; }
L_00453ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00453F38; } }
L_00453EE0:
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453EF8u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0112(c, 119u, depth + 1u); else { c.pc = 0x00549670u; return; } if (c.pc != 0x00453EF8u) [[unlikely]] return; }
L_00453EF8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 34u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453F0Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 119u, depth + 1u); else { c.pc = 0x00549670u; return; } if (c.pc != 0x00453F0Cu) [[unlikely]] return; }
L_00453F0C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[5].w[0] + 16448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453F24u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0112(c, 116u, depth + 1u); else { c.pc = 0x00549610u; return; } if (c.pc != 0x00453F24u) [[unlikely]] return; }
L_00453F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453F2Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x00453F2Cu) [[unlikely]] return; }
L_00453F2C:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453F38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00453F38u) [[unlikely]] return; }
L_00453F38:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 1;
L_00453F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453F44u);  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x00453F44u) [[unlikely]] return; }
L_00453F44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00453F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00453F94u); set32(c.r[5], c.r[29].w[0] + 68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00453F94u) [[unlikely]] return; }
L_00453F94:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  [[clang::musttail]] return unit_00D5(c, 4u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453FC0u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00132910u; return; } if (c.pc != 0x00453FC0u) [[unlikely]] return; }
L_00453FC0:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453FCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00453FCCu) [[unlikely]] return; }
L_00453FCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 72u), c.r[17].w[0]);  goto L_00453FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00453FE0u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00453FE0u) [[unlikely]] return; }
L_00453FE0:
    st32((c.r[29].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 1;
L_00453FE4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454000u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00454000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00D5(c, 1u, depth);
}

}
