#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E4[4096] = {
    1, 2, 3, 0, 4, 0, 0, 5, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68,
    0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 157, 158, 0, 0, 0, 159, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0,
    0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0,
    384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0,
    390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425,
    0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0,
    0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0,
    0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0,
    476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483,
    0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 0,
    0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0,
    505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 511,
    0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0,
    0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0,
    542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0,
    551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0,
    555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 566, 0,
    0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0,
    575, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582,
    0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0,
    0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0,
    0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0,
    0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0,
    618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0,
    630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 642,
    0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0,
    659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0,
    669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0,
};

void unit_00E4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00490000;
    case 2u: goto L_00490004;
    case 3u: goto L_00490008;
    case 4u: goto L_00490010;
    case 5u: goto L_0049001C;
    case 6u: goto L_00490020;
    case 7u: goto L_0049002C;
    case 8u: goto L_0049005C;
    case 9u: goto L_00490074;
    case 10u: goto L_00490090;
    case 11u: goto L_0049009C;
    case 12u: goto L_004900AC;
    case 13u: goto L_004900DC;
    case 14u: goto L_004900F4;
    case 15u: goto L_00490110;
    case 16u: goto L_0049011C;
    case 17u: goto L_00490120;
    case 18u: goto L_00490158;
    case 19u: goto L_00490170;
    case 20u: goto L_004901A0;
    case 21u: goto L_004901B8;
    case 22u: goto L_004901D4;
    case 23u: goto L_004901E0;
    case 24u: goto L_004901F0;
    case 25u: goto L_00490220;
    case 26u: goto L_00490238;
    case 27u: goto L_00490254;
    case 28u: goto L_00490260;
    case 29u: goto L_00490270;
    case 30u: goto L_004902A0;
    case 31u: goto L_004902B8;
    case 32u: goto L_004902D4;
    case 33u: goto L_004902E0;
    case 34u: goto L_004902F0;
    case 35u: goto L_00490320;
    case 36u: goto L_00490338;
    case 37u: goto L_00490354;
    case 38u: goto L_00490360;
    case 39u: goto L_0049037C;
    case 40u: goto L_00490390;
    case 41u: goto L_004903C0;
    case 42u: goto L_00490410;
    case 43u: goto L_00490428;
    case 44u: goto L_00490440;
    case 45u: goto L_00490454;
    case 46u: goto L_0049046C;
    case 47u: goto L_0049049C;
    case 48u: goto L_004904B4;
    case 49u: goto L_004904C0;
    case 50u: goto L_004904D0;
    case 51u: goto L_004904F4;
    case 52u: goto L_00490524;
    case 53u: goto L_00490574;
    case 54u: goto L_0049058C;
    case 55u: goto L_004905A4;
    case 56u: goto L_004905B8;
    case 57u: goto L_004905D0;
    case 58u: goto L_00490600;
    case 59u: goto L_00490618;
    case 60u: goto L_00490624;
    case 61u: goto L_00490648;
    case 62u: goto L_00490660;
    case 63u: goto L_0049069C;
    case 64u: goto L_004906AC;
    case 65u: goto L_004906C8;
    case 66u: goto L_004906D4;
    case 67u: goto L_004906F0;
    case 68u: goto L_004906FC;
    case 69u: goto L_00490708;
    case 70u: goto L_00490714;
    case 71u: goto L_00490720;
    case 72u: goto L_0049072C;
    case 73u: goto L_00490780;
    case 74u: goto L_004907A4;
    case 75u: goto L_004907C0;
    case 76u: goto L_004907E4;
    case 77u: goto L_004907FC;
    case 78u: goto L_00490800;
    case 79u: goto L_00490820;
    case 80u: goto L_00490830;
    case 81u: goto L_00490854;
    case 82u: goto L_00490860;
    case 83u: goto L_00490870;
    case 84u: goto L_00490880;
    case 85u: goto L_004908E0;
    case 86u: goto L_004908F8;
    case 87u: goto L_00490910;
    case 88u: goto L_00490934;
    case 89u: goto L_00490940;
    case 90u: goto L_00490950;
    case 91u: goto L_00490960;
    case 92u: goto L_00490970;
    case 93u: goto L_00490980;
    case 94u: goto L_00490990;
    case 95u: goto L_004909A0;
    case 96u: goto L_004909B0;
    case 97u: goto L_004909C0;
    case 98u: goto L_004909D0;
    case 99u: goto L_004909E0;
    case 100u: goto L_004909F0;
    case 101u: goto L_00490A00;
    case 102u: goto L_00490A10;
    case 103u: goto L_00490A50;
    case 104u: goto L_00490A60;
    case 105u: goto L_00490A70;
    case 106u: goto L_00490ABC;
    case 107u: goto L_00490AD4;
    case 108u: goto L_00490AF0;
    case 109u: goto L_00490B00;
    case 110u: goto L_00490B14;
    case 111u: goto L_00490B1C;
    case 112u: goto L_00490B24;
    case 113u: goto L_00490B38;
    case 114u: goto L_00490B50;
    case 115u: goto L_00490B74;
    case 116u: goto L_00490B8C;
    case 117u: goto L_00490BB0;
    case 118u: goto L_00490BD4;
    case 119u: goto L_00490BEC;
    case 120u: goto L_00490C10;
    case 121u: goto L_00490C30;
    case 122u: goto L_00490C5C;
    case 123u: goto L_00490C68;
    case 124u: goto L_00490C90;
    case 125u: goto L_00490C9C;
    case 126u: goto L_00490CB4;
    case 127u: goto L_00490CC8;
    case 128u: goto L_00490CD4;
    case 129u: goto L_00490CFC;
    case 130u: goto L_00490D1C;
    case 131u: goto L_00490D3C;
    case 132u: goto L_00490D50;
    case 133u: goto L_00490D5C;
    case 134u: goto L_00490D68;
    case 135u: goto L_00490D80;
    case 136u: goto L_00490DDC;
    case 137u: goto L_00490DF8;
    case 138u: goto L_00490E04;
    case 139u: goto L_00490E20;
    case 140u: goto L_00490E30;
    case 141u: goto L_00490E74;
    case 142u: goto L_00490E90;
    case 143u: goto L_00490EA0;
    case 144u: goto L_00490EC8;
    case 145u: goto L_00490ED8;
    case 146u: goto L_00490EEC;
    case 147u: goto L_00490F0C;
    case 148u: goto L_00490F34;
    case 149u: goto L_00490F44;
    case 150u: goto L_00490F6C;
    case 151u: goto L_00490F7C;
    case 152u: goto L_00490F90;
    case 153u: goto L_00490FB0;
    case 154u: goto L_00490FD8;
    case 155u: goto L_00490FE4;
    case 156u: goto L_00491000;
    case 157u: goto L_00491004;
    case 158u: goto L_00491008;
    case 159u: goto L_00491018;
    case 160u: goto L_00491020;
    case 161u: goto L_00491024;
    case 162u: goto L_00491044;
    case 163u: goto L_00491050;
    case 164u: goto L_0049107C;
    case 165u: goto L_00491088;
    case 166u: goto L_004910B0;
    case 167u: goto L_004910BC;
    case 168u: goto L_004910D0;
    case 169u: goto L_004910EC;
    case 170u: goto L_004910F8;
    case 171u: goto L_00491120;
    case 172u: goto L_0049112C;
    case 173u: goto L_00491138;
    case 174u: goto L_00491150;
    case 175u: goto L_0049117C;
    case 176u: goto L_004911A4;
    case 177u: goto L_004911B4;
    case 178u: goto L_004911C0;
    case 179u: goto L_004911E0;
    case 180u: goto L_00491204;
    case 181u: goto L_00491214;
    case 182u: goto L_00491220;
    case 183u: goto L_0049123C;
    case 184u: goto L_00491248;
    case 185u: goto L_00491254;
    case 186u: goto L_0049125C;
    case 187u: goto L_0049126C;
    case 188u: goto L_00491280;
    case 189u: goto L_004912AC;
    case 190u: goto L_004912C0;
    case 191u: goto L_004912CC;
    case 192u: goto L_004912E8;
    case 193u: goto L_00491304;
    case 194u: goto L_00491310;
    case 195u: goto L_00491320;
    case 196u: goto L_00491334;
    case 197u: goto L_00491360;
    case 198u: goto L_00491374;
    case 199u: goto L_00491380;
    case 200u: goto L_0049139C;
    case 201u: goto L_004913B8;
    case 202u: goto L_004913C4;
    case 203u: goto L_004913D4;
    case 204u: goto L_004913E8;
    case 205u: goto L_00491414;
    case 206u: goto L_00491428;
    case 207u: goto L_00491434;
    case 208u: goto L_00491450;
    case 209u: goto L_0049146C;
    case 210u: goto L_00491478;
    case 211u: goto L_00491488;
    case 212u: goto L_0049149C;
    case 213u: goto L_004914C4;
    case 214u: goto L_004914D4;
    case 215u: goto L_004914E8;
    case 216u: goto L_00491510;
    case 217u: goto L_00491520;
    case 218u: goto L_00491534;
    case 219u: goto L_00491568;
    case 220u: goto L_00491574;
    case 221u: goto L_00491590;
    case 222u: goto L_004915A4;
    case 223u: goto L_004915B0;
    case 224u: goto L_004915C0;
    case 225u: goto L_004915D4;
    case 226u: goto L_004915FC;
    case 227u: goto L_0049160C;
    case 228u: goto L_00491620;
    case 229u: goto L_00491644;
    case 230u: goto L_00491650;
    case 231u: goto L_0049166C;
    case 232u: goto L_00491684;
    case 233u: goto L_00491690;
    case 234u: goto L_0049169C;
    case 235u: goto L_004916C0;
    case 236u: goto L_00491780;
    case 237u: goto L_00491790;
    case 238u: goto L_004917A0;
    case 239u: goto L_004917B0;
    case 240u: goto L_004917C0;
    case 241u: goto L_004917D0;
    case 242u: goto L_004917E0;
    case 243u: goto L_004917F0;
    case 244u: goto L_00491800;
    case 245u: goto L_0049181C;
    case 246u: goto L_00491830;
    case 247u: goto L_00491860;
    case 248u: goto L_00491878;
    case 249u: goto L_00491884;
    case 250u: goto L_00491898;
    case 251u: goto L_004918D0;
    case 252u: goto L_004918E8;
    case 253u: goto L_004918F4;
    case 254u: goto L_00491904;
    case 255u: goto L_00491920;
    case 256u: goto L_00491948;
    case 257u: goto L_00491964;
    case 258u: goto L_0049198C;
    case 259u: goto L_00491998;
    case 260u: goto L_004919B4;
    case 261u: goto L_004919C8;
    case 262u: goto L_004919D4;
    case 263u: goto L_004919E0;
    case 264u: goto L_00491A00;
    case 265u: goto L_00491A2C;
    case 266u: goto L_00491A38;
    case 267u: goto L_00491A54;
    case 268u: goto L_00491A68;
    case 269u: goto L_00491A74;
    case 270u: goto L_00491A90;
    case 271u: goto L_00491AC4;
    case 272u: goto L_00491AD0;
    case 273u: goto L_00491AEC;
    case 274u: goto L_00491B10;
    case 275u: goto L_00491B3C;
    case 276u: goto L_00491B90;
    case 277u: goto L_00491BA8;
    case 278u: goto L_00491BC0;
    case 279u: goto L_00491BD4;
    case 280u: goto L_00491BEC;
    case 281u: goto L_00491C1C;
    case 282u: goto L_00491C30;
    case 283u: goto L_00491C5C;
    case 284u: goto L_00491CAC;
    case 285u: goto L_00491CC4;
    case 286u: goto L_00491CDC;
    case 287u: goto L_00491CF0;
    case 288u: goto L_00491D08;
    case 289u: goto L_00491D38;
    case 290u: goto L_00491D44;
    case 291u: goto L_00491D60;
    case 292u: goto L_00491D88;
    case 293u: goto L_00491D9C;
    case 294u: goto L_00491DA8;
    case 295u: goto L_00491DC4;
    case 296u: goto L_00491DE8;
    case 297u: goto L_00491E14;
    case 298u: goto L_00491E68;
    case 299u: goto L_00491E80;
    case 300u: goto L_00491E98;
    case 301u: goto L_00491EAC;
    case 302u: goto L_00491EC4;
    case 303u: goto L_00491EF4;
    case 304u: goto L_00491F08;
    case 305u: goto L_00491F34;
    case 306u: goto L_00491F84;
    case 307u: goto L_00491F9C;
    case 308u: goto L_00491FB4;
    case 309u: goto L_00491FC8;
    case 310u: goto L_00491FE0;
    case 311u: goto L_00492010;
    case 312u: goto L_0049201C;
    case 313u: goto L_00492040;
    case 314u: goto L_00492060;
    case 315u: goto L_00492074;
    case 316u: goto L_00492080;
    case 317u: goto L_0049209C;
    case 318u: goto L_004920B8;
    case 319u: goto L_004920C4;
    case 320u: goto L_004920E0;
    case 321u: goto L_00492100;
    case 322u: goto L_00492114;
    case 323u: goto L_00492120;
    case 324u: goto L_0049213C;
    case 325u: goto L_00492158;
    case 326u: goto L_00492164;
    case 327u: goto L_00492180;
    case 328u: goto L_004921A0;
    case 329u: goto L_004921B4;
    case 330u: goto L_004921C0;
    case 331u: goto L_004921DC;
    case 332u: goto L_004921F8;
    case 333u: goto L_00492204;
    case 334u: goto L_00492220;
    case 335u: goto L_00492238;
    case 336u: goto L_00492254;
    case 337u: goto L_00492270;
    case 338u: goto L_004922C0;
    case 339u: goto L_004922D4;
    case 340u: goto L_004922E0;
    case 341u: goto L_004922FC;
    case 342u: goto L_0049231C;
    case 343u: goto L_00492328;
    case 344u: goto L_00492338;
    case 345u: goto L_0049234C;
    case 346u: goto L_00492358;
    case 347u: goto L_00492374;
    case 348u: goto L_00492394;
    case 349u: goto L_004923A0;
    case 350u: goto L_004923B0;
    case 351u: goto L_004923C4;
    case 352u: goto L_004923D0;
    case 353u: goto L_004923EC;
    case 354u: goto L_0049240C;
    case 355u: goto L_00492418;
    case 356u: goto L_00492428;
    case 357u: goto L_00492438;
    case 358u: goto L_00492448;
    case 359u: goto L_0049245C;
    case 360u: goto L_00492468;
    case 361u: goto L_00492484;
    case 362u: goto L_0049249C;
    case 363u: goto L_004924A8;
    case 364u: goto L_004924B0;
    case 365u: goto L_004924E0;
    case 366u: goto L_004924F4;
    case 367u: goto L_00492508;
    case 368u: goto L_0049251C;
    case 369u: goto L_00492530;
    case 370u: goto L_0049253C;
    case 371u: goto L_00492554;
    case 372u: goto L_00492570;
    case 373u: goto L_00492590;
    case 374u: goto L_004925BC;
    case 375u: goto L_004925C4;
    case 376u: goto L_004925CC;
    case 377u: goto L_004925D4;
    case 378u: goto L_004925E8;
    case 379u: goto L_00492600;
    case 380u: goto L_00492618;
    case 381u: goto L_0049263C;
    case 382u: goto L_0049265C;
    case 383u: goto L_00492670;
    case 384u: goto L_00492680;
    case 385u: goto L_00492690;
    case 386u: goto L_0049269C;
    case 387u: goto L_004926BC;
    case 388u: goto L_004926D8;
    case 389u: goto L_004926F4;
    case 390u: goto L_00492700;
    case 391u: goto L_0049270C;
    case 392u: goto L_00492718;
    case 393u: goto L_00492724;
    case 394u: goto L_00492734;
    case 395u: goto L_00492748;
    case 396u: goto L_00492758;
    case 397u: goto L_00492768;
    case 398u: goto L_00492774;
    case 399u: goto L_00492794;
    case 400u: goto L_004927B0;
    case 401u: goto L_004927CC;
    case 402u: goto L_004927D8;
    case 403u: goto L_004927E4;
    case 404u: goto L_004927F0;
    case 405u: goto L_004927FC;
    case 406u: goto L_0049280C;
    case 407u: goto L_00492820;
    case 408u: goto L_00492830;
    case 409u: goto L_00492840;
    case 410u: goto L_0049284C;
    case 411u: goto L_0049286C;
    case 412u: goto L_00492888;
    case 413u: goto L_004928A4;
    case 414u: goto L_004928B0;
    case 415u: goto L_004928BC;
    case 416u: goto L_004928C8;
    case 417u: goto L_004928D4;
    case 418u: goto L_004928E4;
    case 419u: goto L_004928F8;
    case 420u: goto L_00492908;
    case 421u: goto L_00492918;
    case 422u: goto L_00492924;
    case 423u: goto L_00492944;
    case 424u: goto L_00492960;
    case 425u: goto L_0049297C;
    case 426u: goto L_00492988;
    case 427u: goto L_00492994;
    case 428u: goto L_004929A0;
    case 429u: goto L_004929AC;
    case 430u: goto L_004929BC;
    case 431u: goto L_004929D0;
    case 432u: goto L_004929E0;
    case 433u: goto L_004929F0;
    case 434u: goto L_004929FC;
    case 435u: goto L_00492A1C;
    case 436u: goto L_00492A38;
    case 437u: goto L_00492A54;
    case 438u: goto L_00492A60;
    case 439u: goto L_00492A6C;
    case 440u: goto L_00492A78;
    case 441u: goto L_00492A84;
    case 442u: goto L_00492A94;
    case 443u: goto L_00492AA8;
    case 444u: goto L_00492AB8;
    case 445u: goto L_00492AC8;
    case 446u: goto L_00492AD4;
    case 447u: goto L_00492AF4;
    case 448u: goto L_00492B10;
    case 449u: goto L_00492B2C;
    case 450u: goto L_00492B38;
    case 451u: goto L_00492B44;
    case 452u: goto L_00492B50;
    case 453u: goto L_00492B5C;
    case 454u: goto L_00492B6C;
    case 455u: goto L_00492B80;
    case 456u: goto L_00492B90;
    case 457u: goto L_00492BA0;
    case 458u: goto L_00492BAC;
    case 459u: goto L_00492BCC;
    case 460u: goto L_00492BE8;
    case 461u: goto L_00492C04;
    case 462u: goto L_00492C10;
    case 463u: goto L_00492C1C;
    case 464u: goto L_00492C28;
    case 465u: goto L_00492C34;
    case 466u: goto L_00492C44;
    case 467u: goto L_00492C58;
    case 468u: goto L_00492C68;
    case 469u: goto L_00492C78;
    case 470u: goto L_00492C84;
    case 471u: goto L_00492CA4;
    case 472u: goto L_00492CC0;
    case 473u: goto L_00492CDC;
    case 474u: goto L_00492CE8;
    case 475u: goto L_00492CF4;
    case 476u: goto L_00492D00;
    case 477u: goto L_00492D0C;
    case 478u: goto L_00492D1C;
    case 479u: goto L_00492D30;
    case 480u: goto L_00492D40;
    case 481u: goto L_00492D50;
    case 482u: goto L_00492D5C;
    case 483u: goto L_00492D7C;
    case 484u: goto L_00492D98;
    case 485u: goto L_00492DB4;
    case 486u: goto L_00492DC0;
    case 487u: goto L_00492DCC;
    case 488u: goto L_00492DD8;
    case 489u: goto L_00492DE4;
    case 490u: goto L_00492DF4;
    case 491u: goto L_00492E08;
    case 492u: goto L_00492E18;
    case 493u: goto L_00492E28;
    case 494u: goto L_00492E34;
    case 495u: goto L_00492E54;
    case 496u: goto L_00492E70;
    case 497u: goto L_00492E8C;
    case 498u: goto L_00492E98;
    case 499u: goto L_00492EA4;
    case 500u: goto L_00492EB0;
    case 501u: goto L_00492EBC;
    case 502u: goto L_00492ECC;
    case 503u: goto L_00492EE0;
    case 504u: goto L_00492EF0;
    case 505u: goto L_00492F00;
    case 506u: goto L_00492F0C;
    case 507u: goto L_00492F2C;
    case 508u: goto L_00492F48;
    case 509u: goto L_00492F64;
    case 510u: goto L_00492F70;
    case 511u: goto L_00492F7C;
    case 512u: goto L_00492F88;
    case 513u: goto L_00492F94;
    case 514u: goto L_00492FB0;
    case 515u: goto L_00492FE0;
    case 516u: goto L_00492FF4;
    case 517u: goto L_00493008;
    case 518u: goto L_00493020;
    case 519u: goto L_00493040;
    case 520u: goto L_00493064;
    case 521u: goto L_00493080;
    case 522u: goto L_004930A4;
    case 523u: goto L_004930BC;
    case 524u: goto L_004930E0;
    case 525u: goto L_004930F0;
    case 526u: goto L_00493114;
    case 527u: goto L_00493120;
    case 528u: goto L_00493130;
    case 529u: goto L_00493150;
    case 530u: goto L_0049315C;
    case 531u: goto L_0049317C;
    case 532u: goto L_004931C0;
    case 533u: goto L_004931E0;
    case 534u: goto L_004931EC;
    case 535u: goto L_0049320C;
    case 536u: goto L_00493250;
    case 537u: goto L_00493294;
    case 538u: goto L_004932A0;
    case 539u: goto L_004932DC;
    case 540u: goto L_004932F0;
    case 541u: goto L_004932F8;
    case 542u: goto L_00493300;
    case 543u: goto L_0049330C;
    case 544u: goto L_0049331C;
    case 545u: goto L_00493328;
    case 546u: goto L_00493334;
    case 547u: goto L_0049334C;
    case 548u: goto L_0049335C;
    case 549u: goto L_00493368;
    case 550u: goto L_00493374;
    case 551u: goto L_00493380;
    case 552u: goto L_0049338C;
    case 553u: goto L_004933C0;
    case 554u: goto L_004933F4;
    case 555u: goto L_00493400;
    case 556u: goto L_0049340C;
    case 557u: goto L_00493440;
    case 558u: goto L_00493458;
    case 559u: goto L_00493470;
    case 560u: goto L_004934A4;
    case 561u: goto L_004934AC;
    case 562u: goto L_004934DC;
    case 563u: goto L_00493510;
    case 564u: goto L_00493558;
    case 565u: goto L_0049356C;
    case 566u: goto L_00493578;
    case 567u: goto L_00493584;
    case 568u: goto L_0049358C;
    case 569u: goto L_0049359C;
    case 570u: goto L_004935BC;
    case 571u: goto L_004935D0;
    case 572u: goto L_004935DC;
    case 573u: goto L_004935E8;
    case 574u: goto L_004935F0;
    case 575u: goto L_00493600;
    case 576u: goto L_0049360C;
    case 577u: goto L_00493618;
    case 578u: goto L_00493620;
    case 579u: goto L_00493630;
    case 580u: goto L_0049365C;
    case 581u: goto L_00493670;
    case 582u: goto L_0049367C;
    case 583u: goto L_00493688;
    case 584u: goto L_00493690;
    case 585u: goto L_004936A0;
    case 586u: goto L_004936C0;
    case 587u: goto L_004936D4;
    case 588u: goto L_004936E0;
    case 589u: goto L_004936EC;
    case 590u: goto L_004936F4;
    case 591u: goto L_00493704;
    case 592u: goto L_00493710;
    case 593u: goto L_0049371C;
    case 594u: goto L_00493724;
    case 595u: goto L_00493734;
    case 596u: goto L_00493760;
    case 597u: goto L_00493774;
    case 598u: goto L_00493788;
    case 599u: goto L_004937A4;
    case 600u: goto L_004937AC;
    case 601u: goto L_004937B4;
    case 602u: goto L_004937C4;
    case 603u: goto L_004937D0;
    case 604u: goto L_004937DC;
    case 605u: goto L_004937EC;
    case 606u: goto L_004937FC;
    case 607u: goto L_00493820;
    case 608u: goto L_00493834;
    case 609u: goto L_00493840;
    case 610u: goto L_00493854;
    case 611u: goto L_00493860;
    case 612u: goto L_00493870;
    case 613u: goto L_00493894;
    case 614u: goto L_004938A0;
    case 615u: goto L_004938B0;
    case 616u: goto L_004938C0;
    case 617u: goto L_004938E0;
    case 618u: goto L_00493900;
    case 619u: goto L_00493930;
    case 620u: goto L_0049398C;
    case 621u: goto L_00493994;
    case 622u: goto L_004939A0;
    case 623u: goto L_004939BC;
    case 624u: goto L_004939CC;
    case 625u: goto L_004939D8;
    case 626u: goto L_004939E4;
    case 627u: goto L_00493A24;
    case 628u: goto L_00493A60;
    case 629u: goto L_00493A70;
    case 630u: goto L_00493A80;
    case 631u: goto L_00493A90;
    case 632u: goto L_00493AA0;
    case 633u: goto L_00493AB0;
    case 634u: goto L_00493AC0;
    case 635u: goto L_00493AD0;
    case 636u: goto L_00493B08;
    case 637u: goto L_00493B20;
    case 638u: goto L_00493B30;
    case 639u: goto L_00493B44;
    case 640u: goto L_00493B58;
    case 641u: goto L_00493B6C;
    case 642u: goto L_00493B7C;
    case 643u: goto L_00493B98;
    case 644u: goto L_00493BA4;
    case 645u: goto L_00493BC8;
    case 646u: goto L_00493BD4;
    case 647u: goto L_00493C24;
    case 648u: goto L_00493C54;
    case 649u: goto L_00493C8C;
    case 650u: goto L_00493CA4;
    case 651u: goto L_00493CBC;
    case 652u: goto L_00493CD0;
    case 653u: goto L_00493CE8;
    case 654u: goto L_00493D18;
    case 655u: goto L_00493D24;
    case 656u: goto L_00493D44;
    case 657u: goto L_00493D50;
    case 658u: goto L_00493D74;
    case 659u: goto L_00493D80;
    case 660u: goto L_00493DB4;
    case 661u: goto L_00493DC0;
    case 662u: goto L_00493DE4;
    case 663u: goto L_00493DF0;
    case 664u: goto L_00493E54;
    case 665u: goto L_00493E84;
    case 666u: goto L_00493EBC;
    case 667u: goto L_00493ED4;
    case 668u: goto L_00493EEC;
    case 669u: goto L_00493F00;
    case 670u: goto L_00493F18;
    case 671u: goto L_00493F48;
    case 672u: goto L_00493F88;
    case 673u: goto L_00493FB8;
    case 674u: goto L_00493FF0;
    default: bad_entry(c, 0x00490000u); return;
    }
L_00490000:
    set32(c.r[4], c.r[29].w[0] + 353u);
    c.budget -= 1;
L_00490004:
    set32(c.r[4], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 1;
L_00490008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490010u); set32(c.r[5], c.r[29].w[0] + 600u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00490010u) [[unlikely]] return; }
L_00490010:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049001Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049001Cu) [[unlikely]] return; }
L_0049001C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_00490020:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049002Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0049002Cu) [[unlikely]] return; }
L_0049002C:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 336u));  goto L_00490044; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 340u)));  if (t) { goto L_0049004C; } }
L_00490044:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0049004C:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049005Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049005Cu) [[unlikely]] return; }
L_0049005C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_004900A0; }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490074u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00490074u) [[unlikely]] return; }
L_00490074:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 321u);  goto L_00490088; }
    set32(c.r[4], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 1;
L_00490088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490090u); set32(c.r[5], c.r[29].w[0] + 596u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00490090u) [[unlikely]] return; }
L_00490090:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049009Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049009Cu) [[unlikely]] return; }
L_0049009C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_004900A0:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004900ACu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004900ACu) [[unlikely]] return; }
L_004900AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 304u));  goto L_004900C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 308u)));  if (t) { goto L_004900CC; } }
L_004900C4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004900CC:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004900DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004900DCu) [[unlikely]] return; }
L_004900DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0049011C; } }
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004900F4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004900F4u) [[unlikely]] return; }
L_004900F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 289u);  goto L_00490108; }
    set32(c.r[4], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_00490108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490110u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00490110u) [[unlikely]] return; }
L_00490110:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049011Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049011Cu) [[unlikely]] return; }
L_0049011C:
    c.f[24] = ld32((c.r[29].w[0] + 592u));
    c.budget -= 1;
L_00490120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = ld32((c.r[29].w[0] + 596u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[26] = ld32((c.r[29].w[0] + 600u));
    set32(c.r[6], c.r[6].w[0] - 16779u);
    c.f[27] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 600u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490158u); set32(c.r[7], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00490158u) [[unlikely]] return; }
L_00490158:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[29].w[0] + 592u));  goto L_00490364; }
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490170u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00490170u) [[unlikely]] return; }
L_00490170:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 272u));  goto L_00490188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 276u)));  if (t) { goto L_00490190; } }
L_00490188:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00490190:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004901A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004901A0u) [[unlikely]] return; }
L_004901A0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_004901E4; }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004901B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004901B8u) [[unlikely]] return; }
L_004901B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 257u);  goto L_004901CC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_004901CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004901D4u); set32(c.r[5], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004901D4u) [[unlikely]] return; }
L_004901D4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004901E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004901E0u) [[unlikely]] return; }
L_004901E0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_004901E4:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004901F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004901F0u) [[unlikely]] return; }
L_004901F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));  goto L_00490208; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 244u)));  if (t) { goto L_00490210; } }
L_00490208:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00490210:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490220u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490220u) [[unlikely]] return; }
L_00490220:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_00490264; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490238u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00490238u) [[unlikely]] return; }
L_00490238:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 225u);  goto L_0049024C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_0049024C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490254u); set32(c.r[5], c.r[29].w[0] + 600u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00490254u) [[unlikely]] return; }
L_00490254:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490260u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490260u) [[unlikely]] return; }
L_00490260:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_00490264:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490270u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00490270u) [[unlikely]] return; }
L_00490270:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));  goto L_00490288; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  if (t) { goto L_00490290; } }
L_00490288:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00490290:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004902A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004902A0u) [[unlikely]] return; }
L_004902A0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_004902E4; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004902B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004902B8u) [[unlikely]] return; }
L_004902B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 193u);  goto L_004902CC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004902CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004902D4u); set32(c.r[5], c.r[29].w[0] + 596u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004902D4u) [[unlikely]] return; }
L_004902D4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004902E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004902E0u) [[unlikely]] return; }
L_004902E0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_004902E4:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004902F0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004902F0u) [[unlikely]] return; }
L_004902F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  goto L_00490308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  if (t) { goto L_00490310; } }
L_00490308:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00490310:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490320u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490320u) [[unlikely]] return; }
L_00490320:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00490360; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490338u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00490338u) [[unlikely]] return; }
L_00490338:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_0049034C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0049034C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490354u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00490354u) [[unlikely]] return; }
L_00490354:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490360u) [[unlikely]] return; }
L_00490360:
    c.f[20] = ld32((c.r[29].w[0] + 592u));
    c.budget -= 1;
L_00490364:
    set32(c.r[4], 0u + 320u);
    c.f[21] = ld32((c.r[29].w[0] + 596u));
    c.f[22] = ld32((c.r[29].w[0] + 600u));
    c.f[23] = ld32((c.r[29].w[0] + 604u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049037Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0049037Cu) [[unlikely]] return; }
L_0049037C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_00490394; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490390u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 319u, depth + 1u); else { c.pc = 0x001C3370u; return; } if (c.pc != 0x00490390u) [[unlikely]] return; }
L_00490390:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00490394:
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 504u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 500u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 506u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004903C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004903C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004903C0u) [[unlikely]] return; }
L_004903C0:
    set32(c.r[2], c.r[29].w[0] + 484u);
    st32((c.r[29].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_004903C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[5], c.r[29].w[0] + 484u);
    st32((c.r[2].w[0]), c.f[23]);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), c.f[21]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[21], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 506u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 484u)));  goto L_00490434; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490410u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00490410u) [[unlikely]] return; }
L_00490410:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049042C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490428u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00490428u) [[unlikely]] return; }
L_00490428:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049042C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00490458; } }
L_00490434:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00490440u) [[unlikely]] return; }
L_00490440:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490454u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00490454u) [[unlikely]] return; }
L_00490454:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00490458:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049046Cu); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049046Cu) [[unlikely]] return; }
L_0049046C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 506u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 480u), c.r[3].w[0]);  if (t) { goto L_0049049C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[2], c.r[29].w[0] + 484u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004904A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049049Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049049Cu) [[unlikely]] return; }
L_0049049C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_004904A0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004904B4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004904B4u) [[unlikely]] return; }
L_004904B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004904C0u); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0014D0F0u; return; } if (c.pc != 0x004904C0u) [[unlikely]] return; }
L_004904C0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004904D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004904D0u) [[unlikely]] return; }
L_004904D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_004904F8; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16769u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004904F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x004904F4u) [[unlikely]] return; }
L_004904F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004904F8:
    set32(c.r[4], c.r[29].w[0] + 452u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 472u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 468u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 474u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049052C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490524u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00490524u) [[unlikely]] return; }
L_00490524:
    set32(c.r[2], c.r[29].w[0] + 452u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 2;
L_0049052C:
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[5], c.r[29].w[0] + 452u);
    st32((c.r[2].w[0]), c.f[27]);
    st32((c.r[2].w[0] + 4u), c.f[26]);
    st32((c.r[2].w[0] + 8u), c.f[25]);
    st32((c.r[2].w[0] + 12u), c.f[24]);
    set32(c.r[22], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 474u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 452u)));  goto L_00490598; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490574u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00490574u) [[unlikely]] return; }
L_00490574:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00490590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049058Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049058Cu) [[unlikely]] return; }
L_0049058C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00490590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004905BC; } }
L_00490598:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004905A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004905A4u) [[unlikely]] return; }
L_004905A4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004905B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004905B8u) [[unlikely]] return; }
L_004905B8:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_004905BC:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004905D0u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004905D0u) [[unlikely]] return; }
L_004905D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 474u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_00490600; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[29].w[0] + 452u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00490604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490600u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00490600u) [[unlikely]] return; }
L_00490600:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00490604:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490618u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490618u) [[unlikely]] return; }
L_00490618:
    set32(c.r[4], 0u + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490624u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00490624u) [[unlikely]] return; }
L_00490624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_0049064C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16769u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490648u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x00490648u) [[unlikely]] return; }
L_00490648:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0049064C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490660u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490660u) [[unlikely]] return; }
L_00490660:
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 529u);  goto L_00490674; }
    set32(c.r[17], ld32((c.r[29].w[0] + 536u)));
    c.budget -= 1;
L_00490674:
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 545u);  goto L_00490688; }
    set32(c.r[16], ld32((c.r[29].w[0] + 552u)));
    c.budget -= 1;
L_00490688:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00490694; } }
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_00490694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049069Cu);  if (depth < kMaxDepth) unit_00E4(c, 87u, depth + 1u); else { c.pc = 0x00490910u; return; } if (c.pc != 0x0049069Cu) [[unlikely]] return; }
L_0049069C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004906ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004906ACu) [[unlikely]] return; }
L_004906AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004906CC; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004906C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004906C8u) [[unlikely]] return; }
L_004906C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004906CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004906D4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004906D4u) [[unlikely]] return; }
L_004906D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004906F4; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004906F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004906F0u) [[unlikely]] return; }
L_004906F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004906F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004906FCu);  if (depth < kMaxDepth) unit_00E3(c, 370u, depth + 1u); else { c.pc = 0x0048F3E0u; return; } if (c.pc != 0x004906FCu) [[unlikely]] return; }
L_004906FC:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490708u) [[unlikely]] return; }
L_00490708:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490714u) [[unlikely]] return; }
L_00490714:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490720u) [[unlikely]] return; }
L_00490720:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049072Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049072Cu) [[unlikely]] return; }
L_0049072C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_00490780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29828u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0049079C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004907AC; } }
L_0049079C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004907A4u);  if (depth < kMaxDepth) unit_001D(c, 71u, depth + 1u); else { c.pc = 0x00174D70u; return; } if (c.pc != 0x004907A4u) [[unlikely]] return; }
L_004907A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004907AC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004907C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004907E4u); set32(c.r[4], c.r[4].w[0] - 16936u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004907E4u) [[unlikely]] return; }
L_004907E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004907F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00490804; } }
L_004907F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004907FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 73u, depth + 1u); else { c.pc = 0x00174DD0u; return; } if (c.pc != 0x004907FCu) [[unlikely]] return; }
L_004907FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00490800:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00490804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00490820:
    set32(c.r[2], ld32((c.r[28].w[0] - 30972u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00490830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29828u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0049084C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00490854; } }
L_0049084C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490854u);  if (depth < kMaxDepth) unit_001D(c, 77u, depth + 1u); else { c.pc = 0x00174E70u; return; } if (c.pc != 0x00490854u) [[unlikely]] return; }
L_00490854:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00490860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29828u)));  c.pc = t; return; }
L_00490870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 16920u);  c.pc = t; return; }
L_00490880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004908F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30192u);
    set32(c.r[3], c.r[3].w[0] - 30168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 30124u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30100u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004908E0u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 65u, depth + 1u); else { c.pc = 0x00174C20u; return; } if (c.pc != 0x004908E0u) [[unlikely]] return; }
L_004908E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004908FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004908F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004908F8u) [[unlikely]] return; }
L_004908F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004908FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00490910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00490924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00490934; } }
L_00490924:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490934u); set32(c.r[5], ld32((c.r[28].w[0] - 29828u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490934u) [[unlikely]] return; }
L_00490934:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00490940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004907C0u | kUnwind; return; } goto L_004907C0; }
L_00490950:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490780u | kUnwind; return; } goto L_00490780; }
L_00490960:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490820u | kUnwind; return; } goto L_00490820; }
L_00490970:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490830u | kUnwind; return; } goto L_00490830; }
L_00490980:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490860u | kUnwind; return; } goto L_00490860; }
L_00490990:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490880u | kUnwind; return; } goto L_00490880; }
L_004909A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490880u | kUnwind; return; } goto L_00490880; }
L_004909B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490880u | kUnwind; return; } goto L_00490880; }
L_004909C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00490880u | kUnwind; return; } goto L_00490880; }
L_004909D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 16672u);  c.pc = t; return; }
L_004909E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 368u));  c.pc = t; return; }
L_004909F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[5].w[0]);  c.pc = t; return; }
L_00490A00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 116u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 129u, depth); }
L_00490A10:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 81u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00490A44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00490A44; }
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00490A44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00490A50:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 164u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_00490A60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00E8(c, 310u, depth); }
L_00490A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00490ADC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_00490AC4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_00490AAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00490AD8; } }
L_00490AAC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490ABCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490ABCu) [[unlikely]] return; }
L_00490ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00490AD4; } }
L_00490AC4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490AD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490AD4u) [[unlikely]] return; }
L_00490AD4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00490AD8:
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 1;
L_00490ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00490AF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00E8(c, 292u, depth); }
L_00490B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490B14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00490B14u) [[unlikely]] return; }
L_00490B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490B1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x00490B1Cu) [[unlikely]] return; }
L_00490B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490B24u);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x00490B24u) [[unlikely]] return; }
L_00490B24:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490B38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490B38u) [[unlikely]] return; }
L_00490B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00490B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00490B94; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490B74u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3D10u; return; } if (c.pc != 0x00490B74u) [[unlikely]] return; }
L_00490B74:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490B8Cu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490B8Cu) [[unlikely]] return; }
L_00490B8C:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 2;
L_00490B94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00490BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00490BFC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490BD4u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3D10u; return; } if (c.pc != 0x00490BD4u) [[unlikely]] return; }
L_00490BD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490BECu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490BECu) [[unlikely]] return; }
L_00490BEC:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 4;
L_00490BFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00490C10:
    set32(c.r[2], ld32((c.r[4].w[0] + 252u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[4].w[0] + 253u);  goto L_00490C24; }
    set32(c.r[5], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 1;
L_00490C24:
    c.budget -= 2;
    {  goto L_00490C30; }
L_00490C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[2].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490C5Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00490C5Cu) [[unlikely]] return; }
L_00490C5C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490C68u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00490C68u) [[unlikely]] return; }
L_00490C68:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00490C7C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00490C7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490C90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490C90u) [[unlikely]] return; }
L_00490C90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490C9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00490C9Cu) [[unlikely]] return; }
L_00490C9C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490CB4u) [[unlikely]] return; }
L_00490CB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490CC8u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00490CC8u) [[unlikely]] return; }
L_00490CC8:
    set32(c.r[5], ld32((c.r[28].w[0] - 29784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490CD4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00490CD4u) [[unlikely]] return; }
L_00490CD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00490CE8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00490CE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490CFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490CFCu) [[unlikely]] return; }
L_00490CFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00490D54; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29596u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490D1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490D1Cu) [[unlikely]] return; }
L_00490D1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00490D48; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00490D44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490D3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x00490D3Cu) [[unlikely]] return; }
L_00490D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00490D50; } }
L_00490D44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00490D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490D50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x00490D50u) [[unlikely]] return; }
L_00490D50:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00490D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490D5Cu) [[unlikely]] return; }
L_00490D5C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490D68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490D68u) [[unlikely]] return; }
L_00490D68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00490D80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00490DBC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_00490DC0; } }
L_00490DBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_00490DC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00490DE0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 140u)));  goto L_00490DD4; }
    set32(c.r[5], c.r[16].w[0] + 133u);
    c.budget -= 1;
L_00490DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490DDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 121u, depth + 1u); else { c.pc = 0x00490C30u; return; } if (c.pc != 0x00490DDCu) [[unlikely]] return; }
L_00490DDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00490DE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 460u), 0u);  goto L_00490E30; }
    set32(c.r[6], c.r[2].w[0] + 56u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490DF8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00490DF8u) [[unlikely]] return; }
L_00490DF8:
    set32(c.r[5], ld32((c.r[28].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490E04u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00490E04u) [[unlikely]] return; }
L_00490E04:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00490E18; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00490E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490E20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x00490E20u) [[unlikely]] return; }
L_00490E20:
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490E30u) [[unlikely]] return; }
L_00490E30:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));  goto L_00490E48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  if (t) { goto L_00490E50; } }
L_00490E48:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00490E50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_00490E78; }
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 253u);  goto L_00490E6C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 1;
L_00490E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490E74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 121u, depth + 1u); else { c.pc = 0x00490C30u; return; } if (c.pc != 0x00490E74u) [[unlikely]] return; }
L_00490E74:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00490E78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 220u)));  goto L_00490FE8; }
    set32(c.r[6], c.r[2].w[0] + 56u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490E90u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00490E90u) [[unlikely]] return; }
L_00490E90:
    set32(c.r[6], ld32((c.r[28].w[0] - 29792u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490EA0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00490EA0u) [[unlikely]] return; }
L_00490EA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00490EB4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00490EB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490EC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490EC8u) [[unlikely]] return; }
L_00490EC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490ED8u) [[unlikely]] return; }
L_00490ED8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 29788u)));  goto L_00490F38; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490EECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00490EECu) [[unlikely]] return; }
L_00490EEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00490F34; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490F0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490F0Cu) [[unlikely]] return; }
L_00490F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00490F34; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00490F34; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490F34u); set32(c.r[5], c.r[5].w[0] - 15334u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490F34u) [[unlikely]] return; }
L_00490F34:
    set32(c.r[6], ld32((c.r[28].w[0] - 29788u)));
    c.budget -= 1;
L_00490F38:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490F44u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00490F44u) [[unlikely]] return; }
L_00490F44:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00490F58; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00490F58:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490F6Cu) [[unlikely]] return; }
L_00490F6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490F7Cu) [[unlikely]] return; }
L_00490F7C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00490FDC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490F90u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00490F90u) [[unlikely]] return; }
L_00490F90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00490FD8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490FB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490FB0u) [[unlikely]] return; }
L_00490FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00490FD8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00490FD8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00490FD8u); set32(c.r[5], c.r[5].w[0] - 15320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00490FD8u) [[unlikely]] return; }
L_00490FD8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00490FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00490FE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00490FE4u) [[unlikely]] return; }
L_00490FE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 1;
L_00490FE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 221u);  goto L_00490FF8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 1;
L_00490FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 179u, depth + 1u); else { c.pc = 0x004911E0u; return; } if (c.pc != 0x00491000u) [[unlikely]] return; }
L_00491000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 388u, depth + 1u); else { c.pc = 0x004A2FE0u; return; } if (c.pc != 0x00491008u) [[unlikely]] return; }
    goto L_00491008;
L_00491004:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00491008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00491018:
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 1;
    c.pc = 0x0049101Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00491020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_00491024:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 460u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00491048; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491044u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491044u) [[unlikely]] return; }
L_00491044:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00491048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00491050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[2].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049107Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x0049107Cu) [[unlikely]] return; }
L_0049107C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491088u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491088u) [[unlikely]] return; }
L_00491088:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0049109C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049109C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004910B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004910B0u) [[unlikely]] return; }
L_004910B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004910BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004910BCu) [[unlikely]] return; }
L_004910BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[28].w[0] - 29792u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004910D0u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004910D0u) [[unlikely]] return; }
L_004910D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004910E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004910E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004910ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004910ECu) [[unlikely]] return; }
L_004910EC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004910F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004910F8u) [[unlikely]] return; }
L_004910F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0049110C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0049110C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491120u) [[unlikely]] return; }
L_00491120:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049112Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049112Cu) [[unlikely]] return; }
L_0049112C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491138u) [[unlikely]] return; }
L_00491138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00491150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 29820u)));
    set32(c.r[5], c.r[2].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049117Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0049117Cu) [[unlikely]] return; }
L_0049117C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00491190; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00491190:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004911A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004911A4u) [[unlikely]] return; }
L_004911A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004911B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004911B4u) [[unlikely]] return; }
L_004911B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004911C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004911C0u) [[unlikely]] return; }
L_004911C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004911E0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491204u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00491204u) [[unlikely]] return; }
L_00491204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491214u); set32(c.r[5], c.r[5].w[0] - 15310u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00491214u) [[unlikely]] return; }
L_00491214:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491220u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x00491220u) [[unlikely]] return; }
L_00491220:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[6].w[0] - 15310u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049123Cu); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0049123Cu) [[unlikely]] return; }
L_0049123C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491248u) [[unlikely]] return; }
L_00491248:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491254u) [[unlikely]] return; }
L_00491254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049125Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049125Cu) [[unlikely]] return; }
L_0049125C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049126Cu); set32(c.r[5], c.r[5].w[0] - 15308u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0049126Cu) [[unlikely]] return; }
L_0049126C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00491284; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491280u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x00491280u) [[unlikely]] return; }
L_00491280:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00491284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00491310; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 177u);  goto L_004912A0; }
    set32(c.r[17], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004912A0:
    set32(c.r[4], c.r[16].w[0] + 372u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004912ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004912ACu) [[unlikely]] return; }
L_004912AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004912C0u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x004912C0u) [[unlikely]] return; }
L_004912C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004912CCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004912CCu) [[unlikely]] return; }
L_004912CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_004912E0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004912E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004912E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x004912E8u) [[unlikely]] return; }
L_004912E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00491308; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491304u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491304u) [[unlikely]] return; }
L_00491304:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00491308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491310u) [[unlikely]] return; }
L_00491310:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491320u); set32(c.r[5], c.r[5].w[0] - 15298u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00491320u) [[unlikely]] return; }
L_00491320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00491338; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491334u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x00491334u) [[unlikely]] return; }
L_00491334:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00491338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004913C4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 177u);  goto L_00491354; }
    set32(c.r[17], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00491354:
    set32(c.r[4], c.r[16].w[0] + 388u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491360u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00491360u) [[unlikely]] return; }
L_00491360:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491374u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491374u) [[unlikely]] return; }
L_00491374:
    set32(c.r[5], ld32((c.r[28].w[0] - 29804u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491380u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491380u) [[unlikely]] return; }
L_00491380:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_00491394; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00491394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049139Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x0049139Cu) [[unlikely]] return; }
L_0049139C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004913BC; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004913B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004913B8u) [[unlikely]] return; }
L_004913B8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004913BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004913C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004913C4u) [[unlikely]] return; }
L_004913C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004913D4u); set32(c.r[5], c.r[5].w[0] - 15286u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004913D4u) [[unlikely]] return; }
L_004913D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004913EC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004913E8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x004913E8u) [[unlikely]] return; }
L_004913E8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004913EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00491478; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 177u);  goto L_00491408; }
    set32(c.r[17], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00491408:
    set32(c.r[4], c.r[16].w[0] + 404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491414u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00491414u) [[unlikely]] return; }
L_00491414:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491428u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491428u) [[unlikely]] return; }
L_00491428:
    set32(c.r[5], ld32((c.r[28].w[0] - 29800u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491434u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491434u) [[unlikely]] return; }
L_00491434:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00491448; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00491448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x00491450u) [[unlikely]] return; }
L_00491450:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00491470; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049146Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049146Cu) [[unlikely]] return; }
L_0049146C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00491470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491478u) [[unlikely]] return; }
L_00491478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491488u); set32(c.r[5], c.r[5].w[0] - 15275u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00491488u) [[unlikely]] return; }
L_00491488:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004914A0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049149Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x0049149Cu) [[unlikely]] return; }
L_0049149C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004914A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004914C4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_004914BC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004914BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004914C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 291u, depth + 1u); else { c.pc = 0x00491D60u; return; } if (c.pc != 0x004914C4u) [[unlikely]] return; }
L_004914C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004914D4u); set32(c.r[5], c.r[5].w[0] - 15269u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004914D4u) [[unlikely]] return; }
L_004914D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004914EC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004914E8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x004914E8u) [[unlikely]] return; }
L_004914E8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004914EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00491510; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00491508; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00491508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491510u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 270u, depth + 1u); else { c.pc = 0x00491A90u; return; } if (c.pc != 0x00491510u) [[unlikely]] return; }
L_00491510:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491520u); set32(c.r[5], c.r[5].w[0] - 15262u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00491520u) [[unlikely]] return; }
L_00491520:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00491538; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491534u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x00491534u) [[unlikely]] return; }
L_00491534:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00491538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004915B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 177u);  goto L_00491554; }
    set32(c.r[17], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00491554:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491568u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491568u) [[unlikely]] return; }
L_00491568:
    set32(c.r[5], ld32((c.r[28].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491574u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491574u) [[unlikely]] return; }
L_00491574:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00491588; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00491588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491590u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x00491590u) [[unlikely]] return; }
L_00491590:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004915A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004915A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x004915A4u) [[unlikely]] return; }
L_004915A4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_004915A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004915B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004915B0u) [[unlikely]] return; }
L_004915B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004915C0u); set32(c.r[5], c.r[5].w[0] - 15252u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004915C0u) [[unlikely]] return; }
L_004915C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004915D8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004915D4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 235u, depth + 1u); else { c.pc = 0x004916C0u; return; } if (c.pc != 0x004915D4u) [[unlikely]] return; }
L_004915D4:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004915D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004915FC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_004915F4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004915F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004915FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 246u, depth + 1u); else { c.pc = 0x00491830u; return; } if (c.pc != 0x004915FCu) [[unlikely]] return; }
L_004915FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049160Cu); set32(c.r[5], c.r[5].w[0] - 15237u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0049160Cu) [[unlikely]] return; }
L_0049160C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00491624; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491620u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x00491620u) [[unlikely]] return; }
L_00491620:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00491624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00491688; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[20] = ld32((c.r[29].w[0] + 252u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491644u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491644u) [[unlikely]] return; }
L_00491644:
    set32(c.r[5], ld32((c.r[28].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491650u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491650u) [[unlikely]] return; }
L_00491650:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00491664; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00491664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049166Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x0049166Cu) [[unlikely]] return; }
L_0049166C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0049167C; }
    st32((c.r[2].w[0] + 328u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_0049167C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491684u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491684u) [[unlikely]] return; }
L_00491684:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00491688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491690u) [[unlikely]] return; }
L_00491690:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049169Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0049169Cu) [[unlikely]] return; }
L_0049169C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004916C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[3].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004916F0; } }
    c.r[3].d[0] = c.r[6].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 20u);  if (t) { goto L_004916F0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_004916F0:
    set32(c.r[5], 0u - 1025u);
    set32(c.r[3], 0u + 128u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_00491808; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_004917F8; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_004917E8; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_004917D8; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_004917C8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_004917B8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_004917A8; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[7].d[0] + 0ull;  goto L_00491798; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_00491778; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00491820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_00491778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491780u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x00491780u) [[unlikely]] return; }
L_00491780:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491790u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0004(c, 300u, depth + 1u); else { c.pc = 0x00113610u; return; } if (c.pc != 0x00491790u) [[unlikely]] return; }
L_00491790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_00491798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004917A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 300u, depth + 1u); else { c.pc = 0x00113610u; return; } if (c.pc != 0x004917A0u) [[unlikely]] return; }
L_004917A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_004917A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004917B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 297u, depth + 1u); else { c.pc = 0x001135A0u; return; } if (c.pc != 0x004917B0u) [[unlikely]] return; }
L_004917B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_004917B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004917C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 293u, depth + 1u); else { c.pc = 0x00113530u; return; } if (c.pc != 0x004917C0u) [[unlikely]] return; }
L_004917C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_004917C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004917D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 288u, depth + 1u); else { c.pc = 0x001134B0u; return; } if (c.pc != 0x004917D0u) [[unlikely]] return; }
L_004917D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_004917D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004917E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 281u, depth + 1u); else { c.pc = 0x00113400u; return; } if (c.pc != 0x004917E0u) [[unlikely]] return; }
L_004917E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_004917E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004917F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 273u, depth + 1u); else { c.pc = 0x00113340u; return; } if (c.pc != 0x004917F0u) [[unlikely]] return; }
L_004917F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_004917F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491800u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 269u, depth + 1u); else { c.pc = 0x001132A0u; return; } if (c.pc != 0x00491800u) [[unlikely]] return; }
L_00491800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049181C; } }
L_00491808:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049181Cu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 268u, depth + 1u); else { c.pc = 0x00113290u; return; } if (c.pc != 0x0049181Cu) [[unlikely]] return; }
L_0049181C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00491820:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00491830:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 66u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004918A8; } }
L_00491860:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491878u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00491878u) [[unlikely]] return; }
L_00491878:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491884u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00491884u) [[unlikely]] return; }
L_00491884:
    c.r[20].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491898u); c.r[20].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491898u) [[unlikely]] return; }
L_00491898:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004918A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004918B4; } }
L_004918A8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(66ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00491860u | kUnwind; return; } goto L_00491860; }
L_004918B4:
    set32(c.r[3], 0u + 66u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004919E4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004918D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 361u, depth + 1u); else { c.pc = 0x001537B0u; return; } if (c.pc != 0x004918D0u) [[unlikely]] return; }
L_004918D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28952u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004918E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 275u, depth + 1u); else { c.pc = 0x00156510u; return; } if (c.pc != 0x004918E8u) [[unlikely]] return; }
L_004918E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004918F4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004918F4u) [[unlikely]] return; }
L_004918F4:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491904u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00E4(c, 559u, depth + 1u); else { c.pc = 0x00493470u; return; } if (c.pc != 0x00491904u) [[unlikely]] return; }
L_00491904:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], c.r[19].w[0] + 448u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_00491928; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491920u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491920u) [[unlikely]] return; }
L_00491920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004919E0; } }
L_00491928:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 28u);  if (t) { goto L_0049193C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00491940; } }
L_0049193C:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00491940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491948u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 291u, depth + 1u); else { c.pc = 0x00491D60u; return; } if (c.pc != 0x00491948u) [[unlikely]] return; }
L_00491948:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 17u);  goto L_0049195C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0049195C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491964u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 270u, depth + 1u); else { c.pc = 0x00491A90u; return; } if (c.pc != 0x00491964u) [[unlikely]] return; }
L_00491964:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 33u);  goto L_00491978; }
    set32(c.r[16], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00491978:
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049198Cu); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x0049198Cu) [[unlikely]] return; }
L_0049198C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491998u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491998u) [[unlikely]] return; }
L_00491998:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004919AC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004919AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004919B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x004919B4u) [[unlikely]] return; }
L_004919B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_004919CC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004919C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x004919C8u) [[unlikely]] return; }
L_004919C8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_004919CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004919D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004919D4u) [[unlikely]] return; }
L_004919D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004919E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004919E0u) [[unlikely]] return; }
L_004919E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004919E4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00491A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[2].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491A2Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491A2Cu) [[unlikely]] return; }
L_00491A2C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491A38u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491A38u) [[unlikely]] return; }
L_00491A38:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00491A4C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00491A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491A54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x00491A54u) [[unlikely]] return; }
L_00491A54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00491A6C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491A68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x00491A68u) [[unlikely]] return; }
L_00491A68:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00491A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491A74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491A74u) [[unlikely]] return; }
L_00491A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00491A90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[2].w[0] + 56u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491AC4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491AC4u) [[unlikely]] return; }
L_00491AC4:
    set32(c.r[5], ld32((c.r[28].w[0] - 29812u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491AD0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491AD0u) [[unlikely]] return; }
L_00491AD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_00491AE4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00491AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491AECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x00491AECu) [[unlikely]] return; }
L_00491AEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00491D3C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00491C24; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491B10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x00491B10u) [[unlikely]] return; }
L_00491B10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00491B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491B3Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491B3Cu) [[unlikely]] return; }
L_00491B3C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_00491B44:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  goto L_00491BB4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491B90u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491B90u) [[unlikely]] return; }
L_00491B90:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00491BAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491BA8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491BA8u) [[unlikely]] return; }
L_00491BA8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00491BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00491BD8; } }
L_00491BB4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491BC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00491BC0u) [[unlikely]] return; }
L_00491BC0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491BD4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491BD4u) [[unlikely]] return; }
L_00491BD4:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_00491BD8:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491BECu); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491BECu) [[unlikely]] return; }
L_00491BEC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00491D38; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00491D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491C1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491C1Cu) [[unlikely]] return; }
L_00491C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00491D38; } }
L_00491C24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491C30u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x00491C30u) [[unlikely]] return; }
L_00491C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00491C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491C5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491C5Cu) [[unlikely]] return; }
L_00491C5C:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_00491C64:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_00491CD0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491CACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491CACu) [[unlikely]] return; }
L_00491CAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00491CC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491CC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491CC4u) [[unlikely]] return; }
L_00491CC4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00491CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00491CF4; } }
L_00491CD0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491CDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00491CDCu) [[unlikely]] return; }
L_00491CDC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491CF0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491CF0u) [[unlikely]] return; }
L_00491CF0:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_00491CF4:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491D08u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491D08u) [[unlikely]] return; }
L_00491D08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00491D38; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00491D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491D38u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491D38u) [[unlikely]] return; }
L_00491D38:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00491D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491D44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00491D44u) [[unlikely]] return; }
L_00491D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00491D60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491D88u); set32(c.r[4], c.r[17].w[0] + 420u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00491D88u) [[unlikely]] return; }
L_00491D88:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491D9Cu); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00491D9Cu) [[unlikely]] return; }
L_00491D9C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29816u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491DA8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00491DA8u) [[unlikely]] return; }
L_00491DA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_00491DBC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00491DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491DC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x00491DC4u) [[unlikely]] return; }
L_00491DC4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00492014; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00491EFC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491DE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x00491DE8u) [[unlikely]] return; }
L_00491DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00491E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491E14u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491E14u) [[unlikely]] return; }
L_00491E14:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_00491E1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  goto L_00491E8C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491E68u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491E68u) [[unlikely]] return; }
L_00491E68:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00491E84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491E80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491E80u) [[unlikely]] return; }
L_00491E80:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00491E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00491EB0; } }
L_00491E8C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491E98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00491E98u) [[unlikely]] return; }
L_00491E98:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491EACu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491EACu) [[unlikely]] return; }
L_00491EAC:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_00491EB0:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491EC4u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491EC4u) [[unlikely]] return; }
L_00491EC4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00492010; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00492010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491EF4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491EF4u) [[unlikely]] return; }
L_00491EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00492010; } }
L_00491EFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491F08u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x00491F08u) [[unlikely]] return; }
L_00491F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00491F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491F34u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491F34u) [[unlikely]] return; }
L_00491F34:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_00491F3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_00491FA8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491F84u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491F84u) [[unlikely]] return; }
L_00491F84:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00491FA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491F9Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00491F9Cu) [[unlikely]] return; }
L_00491F9C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00491FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00491FCC; } }
L_00491FA8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491FB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00491FB4u) [[unlikely]] return; }
L_00491FB4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00491FC8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00491FC8u) [[unlikely]] return; }
L_00491FC8:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_00491FCC:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00491FE0u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00491FE0u) [[unlikely]] return; }
L_00491FE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00492010; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00492010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492010u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00492010u) [[unlikely]] return; }
L_00492010:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00492014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049201Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049201Cu) [[unlikely]] return; }
L_0049201C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00492040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492060u); set32(c.r[4], c.r[17].w[0] + 404u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492060u) [[unlikely]] return; }
L_00492060:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492074u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00492074u) [[unlikely]] return; }
L_00492074:
    set32(c.r[5], ld32((c.r[28].w[0] - 29800u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492080u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00492080u) [[unlikely]] return; }
L_00492080:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00492094; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00492094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049209Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x0049209Cu) [[unlikely]] return; }
L_0049209C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004920BC; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004920B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004920B8u) [[unlikely]] return; }
L_004920B8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004920BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004920C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004920C4u) [[unlikely]] return; }
L_004920C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004920E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492100u); set32(c.r[4], c.r[17].w[0] + 388u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492100u) [[unlikely]] return; }
L_00492100:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492114u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x00492114u) [[unlikely]] return; }
L_00492114:
    set32(c.r[5], ld32((c.r[28].w[0] - 29804u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492120u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00492120u) [[unlikely]] return; }
L_00492120:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00492134; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00492134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049213Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x0049213Cu) [[unlikely]] return; }
L_0049213C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0049215C; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00492158u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00492158u) [[unlikely]] return; }
L_00492158:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0049215C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492164u) [[unlikely]] return; }
L_00492164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00492180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004921A0u); set32(c.r[4], c.r[17].w[0] + 372u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004921A0u) [[unlikely]] return; }
L_004921A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004921B4u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x004921B4u) [[unlikely]] return; }
L_004921B4:
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004921C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004921C0u) [[unlikely]] return; }
L_004921C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004921D4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004921D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004921DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x004921DCu) [[unlikely]] return; }
L_004921DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004921FC; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004921F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004921F8u) [[unlikely]] return; }
L_004921F8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004921FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492204u) [[unlikely]] return; }
L_00492204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00492220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492238u); set32(c.r[4], c.r[16].w[0] + 132u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492238u) [[unlikely]] return; }
L_00492238:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 133u);  goto L_0049224C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0049224C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 121u, depth + 1u); else { c.pc = 0x00490C30u; return; } if (c.pc != 0x00492254u) [[unlikely]] return; }
L_00492254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00492270:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00492554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29968u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29932u);
    set32(c.r[4], c.r[17].w[0] + 372u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004922C0u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004922C0u) [[unlikely]] return; }
L_004922C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004922D4u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x004922D4u) [[unlikely]] return; }
L_004922D4:
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004922E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004922E0u) [[unlikely]] return; }
L_004922E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004922F4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004922F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004922FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x004922FCu) [[unlikely]] return; }
L_004922FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00492320; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049231Cu); set32(c.r[5], c.r[5].w[0] - 15218u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049231Cu) [[unlikely]] return; }
L_0049231C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00492320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492328u) [[unlikely]] return; }
L_00492328:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 388u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492338u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492338u) [[unlikely]] return; }
L_00492338:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049234Cu); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x0049234Cu) [[unlikely]] return; }
L_0049234C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29804u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492358u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00492358u) [[unlikely]] return; }
L_00492358:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0049236C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049236C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x00492374u) [[unlikely]] return; }
L_00492374:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00492398; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00492394u); set32(c.r[5], c.r[5].w[0] - 15218u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00492394u) [[unlikely]] return; }
L_00492394:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00492398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004923A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004923A0u) [[unlikely]] return; }
L_004923A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 404u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004923B0u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004923B0u) [[unlikely]] return; }
L_004923B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004923C4u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x004923C4u) [[unlikely]] return; }
L_004923C4:
    set32(c.r[5], ld32((c.r[28].w[0] - 29800u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004923D0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004923D0u) [[unlikely]] return; }
L_004923D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004923E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004923E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004923ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 532u, depth + 1u); else { c.pc = 0x004931C0u; return; } if (c.pc != 0x004923ECu) [[unlikely]] return; }
L_004923EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_00492410; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049240Cu); set32(c.r[5], c.r[5].w[0] - 15218u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049240Cu) [[unlikely]] return; }
L_0049240C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00492410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492418u) [[unlikely]] return; }
L_00492418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492428u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_00E4(c, 121u, depth + 1u); else { c.pc = 0x00490C30u; return; } if (c.pc != 0x00492428u) [[unlikely]] return; }
L_00492428:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492438u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_00E4(c, 291u, depth + 1u); else { c.pc = 0x00491D60u; return; } if (c.pc != 0x00492438u) [[unlikely]] return; }
L_00492438:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492448u); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_00E4(c, 270u, depth + 1u); else { c.pc = 0x00491A90u; return; } if (c.pc != 0x00492448u) [[unlikely]] return; }
L_00492448:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049245Cu); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x0049245Cu) [[unlikely]] return; }
L_0049245C:
    set32(c.r[5], ld32((c.r[28].w[0] - 29796u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492468u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00492468u) [[unlikely]] return; }
L_00492468:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049247C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049247C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 528u, depth + 1u); else { c.pc = 0x00493130u; return; } if (c.pc != 0x00492484u) [[unlikely]] return; }
L_00492484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004924A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049249Cu); set32(c.r[5], c.r[5].w[0] - 15218u);  if (depth < kMaxDepth) unit_00E5(c, 325u, depth + 1u); else { c.pc = 0x00496850u; return; } if (c.pc != 0x0049249Cu) [[unlikely]] return; }
L_0049249C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004924A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004924A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004924A8u) [[unlikely]] return; }
L_004924A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004924B0u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_00E4(c, 616u, depth + 1u); else { c.pc = 0x004938C0u; return; } if (c.pc != 0x004924B0u) [[unlikely]] return; }
L_004924B0:
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 420u);  goto L_004924E4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004924E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004924E0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004924E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004924E0u);  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x004924E0u) [[unlikely]] return; }
L_004924E0:
    set32(c.r[4], c.r[17].w[0] + 420u);
    c.budget -= 1;
L_004924E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 404u);  goto L_004924F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004924F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004924F4u) [[unlikely]] return; }
L_004924F4:
    set32(c.r[4], c.r[17].w[0] + 404u);
    c.budget -= 1;
L_004924F8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 388u);  goto L_0049250C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492508u) [[unlikely]] return; }
L_00492508:
    set32(c.r[4], c.r[17].w[0] + 388u);
    c.budget -= 1;
L_0049250C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 372u);  goto L_00492520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049251Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049251Cu) [[unlikely]] return; }
L_0049251C:
    set32(c.r[4], c.r[17].w[0] + 372u);
    c.budget -= 1;
L_00492520:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00492534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492530u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492530u) [[unlikely]] return; }
L_00492530:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00492534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049253Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 390u, depth + 1u); else { c.pc = 0x004A3040u; return; } if (c.pc != 0x0049253Cu) [[unlikely]] return; }
L_0049253C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00492558; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00492554u) [[unlikely]] return; }
L_00492554:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00492558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00492570:
    set32(c.r[29], c.r[29].w[0] - 784u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492590u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 408u, depth + 1u); else { c.pc = 0x004A31A0u; return; } if (c.pc != 0x00492590u) [[unlikely]] return; }
L_00492590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29968u);
    set32(c.r[3], c.r[3].w[0] - 29944u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 372u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29932u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004925BCu); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004925BCu) [[unlikely]] return; }
L_004925BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004925C4u); set32(c.r[4], c.r[16].w[0] + 388u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004925C4u) [[unlikely]] return; }
L_004925C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004925CCu); set32(c.r[4], c.r[16].w[0] + 404u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004925CCu) [[unlikely]] return; }
L_004925CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004925D4u); set32(c.r[4], c.r[16].w[0] + 420u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004925D4u) [[unlikely]] return; }
L_004925D4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[16].w[0] + 436u);  if (t) { goto L_0049261C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004925E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004925E8u) [[unlikely]] return; }
L_004925E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00492608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492600u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00492600u) [[unlikely]] return; }
L_00492600:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00492608:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 780u);  goto L_00492620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492618u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00492618u) [[unlikely]] return; }
L_00492618:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0049261C:
    set32(c.r[2], c.r[29].w[0] + 780u);
    c.budget -= 1;
L_00492620:
    set32(c.r[5], c.r[29].w[0] + 772u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 776u);
    st32((c.r[29].w[0] + 776u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049263Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E4(c, 618u, depth + 1u); else { c.pc = 0x00493900u; return; } if (c.pc != 0x0049263Cu) [[unlikely]] return; }
L_0049263C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[16].w[0] + 460u), 0u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15217u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049265Cu); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049265Cu) [[unlikely]] return; }
L_0049265C:
    set32(c.r[17], c.r[29].w[0] + 704u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492670u) [[unlikely]] return; }
L_00492670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492680u); set32(c.r[5], c.r[5].w[0] - 15190u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492680u) [[unlikely]] return; }
L_00492680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492690u); set32(c.r[5], c.r[5].w[0] - 15167u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492690u) [[unlikely]] return; }
L_00492690:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049269Cu); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x0049269Cu) [[unlikely]] return; }
L_0049269C:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 704u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 705u);  goto L_004926B4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 1;
L_004926B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004926BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004926BCu) [[unlikely]] return; }
L_004926BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 720u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 721u);  goto L_004926D0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 728u)));
    c.budget -= 1;
L_004926D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004926D8u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004926D8u) [[unlikely]] return; }
L_004926D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 736u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 737u);  goto L_004926EC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 744u)));
    c.budget -= 1;
L_004926EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004926F4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004926F4u) [[unlikely]] return; }
L_004926F4:
    set32(c.r[4], c.r[29].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492700u) [[unlikely]] return; }
L_00492700:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049270Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049270Cu) [[unlikely]] return; }
L_0049270C:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492718u) [[unlikely]] return; }
L_00492718:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492724u) [[unlikely]] return; }
L_00492724:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492734u); set32(c.r[5], c.r[5].w[0] - 15146u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492734u) [[unlikely]] return; }
L_00492734:
    set32(c.r[17], c.r[29].w[0] + 640u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492748u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492748u) [[unlikely]] return; }
L_00492748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492758u); set32(c.r[5], c.r[5].w[0] - 15144u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492758u) [[unlikely]] return; }
L_00492758:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492768u); set32(c.r[5], c.r[5].w[0] - 15121u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492768u) [[unlikely]] return; }
L_00492768:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492774u); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492774u) [[unlikely]] return; }
L_00492774:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 641u);  goto L_0049278C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 1;
L_0049278C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492794u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492794u) [[unlikely]] return; }
L_00492794:
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 657u);  goto L_004927A8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 664u)));
    c.budget -= 1;
L_004927A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004927B0u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004927B0u) [[unlikely]] return; }
L_004927B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 673u);  goto L_004927C4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 680u)));
    c.budget -= 1;
L_004927C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004927CCu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004927CCu) [[unlikely]] return; }
L_004927CC:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004927D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004927D8u) [[unlikely]] return; }
L_004927D8:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004927E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004927E4u) [[unlikely]] return; }
L_004927E4:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004927F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004927F0u) [[unlikely]] return; }
L_004927F0:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004927FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004927FCu) [[unlikely]] return; }
L_004927FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049280Cu); set32(c.r[5], c.r[5].w[0] - 15100u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049280Cu) [[unlikely]] return; }
L_0049280C:
    set32(c.r[17], c.r[29].w[0] + 576u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492820u) [[unlikely]] return; }
L_00492820:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492830u); set32(c.r[5], c.r[5].w[0] - 15098u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492830u) [[unlikely]] return; }
L_00492830:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492840u); set32(c.r[5], c.r[5].w[0] - 15075u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492840u) [[unlikely]] return; }
L_00492840:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049284Cu); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x0049284Cu) [[unlikely]] return; }
L_0049284C:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 577u);  goto L_00492864; }
    set32(c.r[5], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_00492864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049286Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049286Cu) [[unlikely]] return; }
L_0049286C:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 593u);  goto L_00492880; }
    set32(c.r[5], ld32((c.r[29].w[0] + 600u)));
    c.budget -= 1;
L_00492880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492888u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492888u) [[unlikely]] return; }
L_00492888:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 609u);  goto L_0049289C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 616u)));
    c.budget -= 1;
L_0049289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928A4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004928A4u) [[unlikely]] return; }
L_004928A4:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004928B0u) [[unlikely]] return; }
L_004928B0:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004928BCu) [[unlikely]] return; }
L_004928BC:
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004928C8u) [[unlikely]] return; }
L_004928C8:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004928D4u) [[unlikely]] return; }
L_004928D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928E4u); set32(c.r[5], c.r[5].w[0] - 15054u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004928E4u) [[unlikely]] return; }
L_004928E4:
    set32(c.r[17], c.r[29].w[0] + 512u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004928F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004928F8u) [[unlikely]] return; }
L_004928F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492908u); set32(c.r[5], c.r[5].w[0] - 15052u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492908u) [[unlikely]] return; }
L_00492908:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492918u); set32(c.r[5], c.r[5].w[0] - 15023u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492918u) [[unlikely]] return; }
L_00492918:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492924u); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492924u) [[unlikely]] return; }
L_00492924:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 513u);  goto L_0049293C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 520u)));
    c.budget -= 1;
L_0049293C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492944u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492944u) [[unlikely]] return; }
L_00492944:
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 529u);  goto L_00492958; }
    set32(c.r[5], ld32((c.r[29].w[0] + 536u)));
    c.budget -= 1;
L_00492958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492960u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492960u) [[unlikely]] return; }
L_00492960:
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 545u);  goto L_00492974; }
    set32(c.r[5], ld32((c.r[29].w[0] + 552u)));
    c.budget -= 1;
L_00492974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049297Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049297Cu) [[unlikely]] return; }
L_0049297C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492988u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492988u) [[unlikely]] return; }
L_00492988:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492994u) [[unlikely]] return; }
L_00492994:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004929A0u) [[unlikely]] return; }
L_004929A0:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004929ACu) [[unlikely]] return; }
L_004929AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929BCu); set32(c.r[5], c.r[5].w[0] - 14996u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004929BCu) [[unlikely]] return; }
L_004929BC:
    set32(c.r[17], c.r[29].w[0] + 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004929D0u) [[unlikely]] return; }
L_004929D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929E0u); set32(c.r[5], c.r[5].w[0] - 14994u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004929E0u) [[unlikely]] return; }
L_004929E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929F0u); set32(c.r[5], c.r[5].w[0] - 14968u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004929F0u) [[unlikely]] return; }
L_004929F0:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004929FCu); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x004929FCu) [[unlikely]] return; }
L_004929FC:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 449u);  goto L_00492A14; }
    set32(c.r[5], ld32((c.r[29].w[0] + 456u)));
    c.budget -= 1;
L_00492A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492A1Cu) [[unlikely]] return; }
L_00492A1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 465u);  goto L_00492A30; }
    set32(c.r[5], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 1;
L_00492A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A38u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492A38u) [[unlikely]] return; }
L_00492A38:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 481u);  goto L_00492A4C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_00492A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A54u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492A54u) [[unlikely]] return; }
L_00492A54:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492A60u) [[unlikely]] return; }
L_00492A60:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492A6Cu) [[unlikely]] return; }
L_00492A6C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492A78u) [[unlikely]] return; }
L_00492A78:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492A84u) [[unlikely]] return; }
L_00492A84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492A94u); set32(c.r[5], c.r[5].w[0] - 14939u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492A94u) [[unlikely]] return; }
L_00492A94:
    set32(c.r[17], c.r[29].w[0] + 384u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492AA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492AA8u) [[unlikely]] return; }
L_00492AA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492AB8u); set32(c.r[5], c.r[5].w[0] - 14937u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492AB8u) [[unlikely]] return; }
L_00492AB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492AC8u); set32(c.r[5], c.r[5].w[0] - 14911u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492AC8u) [[unlikely]] return; }
L_00492AC8:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492AD4u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492AD4u) [[unlikely]] return; }
L_00492AD4:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 385u);  goto L_00492AEC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 1;
L_00492AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492AF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492AF4u) [[unlikely]] return; }
L_00492AF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 401u);  goto L_00492B08; }
    set32(c.r[5], ld32((c.r[29].w[0] + 408u)));
    c.budget -= 1;
L_00492B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B10u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492B10u) [[unlikely]] return; }
L_00492B10:
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 417u);  goto L_00492B24; }
    set32(c.r[5], ld32((c.r[29].w[0] + 424u)));
    c.budget -= 1;
L_00492B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B2Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492B2Cu) [[unlikely]] return; }
L_00492B2C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492B38u) [[unlikely]] return; }
L_00492B38:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492B44u) [[unlikely]] return; }
L_00492B44:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492B50u) [[unlikely]] return; }
L_00492B50:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492B5Cu) [[unlikely]] return; }
L_00492B5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B6Cu); set32(c.r[5], c.r[5].w[0] - 14887u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492B6Cu) [[unlikely]] return; }
L_00492B6C:
    set32(c.r[17], c.r[29].w[0] + 320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492B80u) [[unlikely]] return; }
L_00492B80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492B90u); set32(c.r[5], c.r[5].w[0] - 14994u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492B90u) [[unlikely]] return; }
L_00492B90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492BA0u); set32(c.r[5], c.r[5].w[0] - 14885u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492BA0u) [[unlikely]] return; }
L_00492BA0:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492BACu); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492BACu) [[unlikely]] return; }
L_00492BAC:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 321u);  goto L_00492BC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 1;
L_00492BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492BCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492BCCu) [[unlikely]] return; }
L_00492BCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 337u);  goto L_00492BE0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 1;
L_00492BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492BE8u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492BE8u) [[unlikely]] return; }
L_00492BE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 353u);  goto L_00492BFC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 1;
L_00492BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C04u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492C04u) [[unlikely]] return; }
L_00492C04:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492C10u) [[unlikely]] return; }
L_00492C10:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492C1Cu) [[unlikely]] return; }
L_00492C1C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492C28u) [[unlikely]] return; }
L_00492C28:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492C34u) [[unlikely]] return; }
L_00492C34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C44u); set32(c.r[5], c.r[5].w[0] - 14856u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492C44u) [[unlikely]] return; }
L_00492C44:
    set32(c.r[17], c.r[29].w[0] + 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492C58u) [[unlikely]] return; }
L_00492C58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C68u); set32(c.r[5], c.r[5].w[0] - 14854u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492C68u) [[unlikely]] return; }
L_00492C68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C78u); set32(c.r[5], c.r[5].w[0] - 14827u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492C78u) [[unlikely]] return; }
L_00492C78:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492C84u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492C84u) [[unlikely]] return; }
L_00492C84:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 257u);  goto L_00492C9C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_00492C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492CA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492CA4u) [[unlikely]] return; }
L_00492CA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 273u);  goto L_00492CB8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 1;
L_00492CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492CC0u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492CC0u) [[unlikely]] return; }
L_00492CC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 289u);  goto L_00492CD4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_00492CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492CDCu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492CDCu) [[unlikely]] return; }
L_00492CDC:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492CE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492CE8u) [[unlikely]] return; }
L_00492CE8:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492CF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492CF4u) [[unlikely]] return; }
L_00492CF4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492D00u) [[unlikely]] return; }
L_00492D00:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492D0Cu) [[unlikely]] return; }
L_00492D0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D1Cu); set32(c.r[5], c.r[5].w[0] - 14802u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492D1Cu) [[unlikely]] return; }
L_00492D1C:
    set32(c.r[17], c.r[29].w[0] + 192u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492D30u) [[unlikely]] return; }
L_00492D30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D40u); set32(c.r[5], c.r[5].w[0] - 14800u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492D40u) [[unlikely]] return; }
L_00492D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D50u); set32(c.r[5], c.r[5].w[0] - 14774u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492D50u) [[unlikely]] return; }
L_00492D50:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D5Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492D5Cu) [[unlikely]] return; }
L_00492D5C:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_00492D74; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00492D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492D7Cu) [[unlikely]] return; }
L_00492D7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_00492D90; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_00492D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492D98u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492D98u) [[unlikely]] return; }
L_00492D98:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_00492DAC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_00492DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492DB4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492DB4u) [[unlikely]] return; }
L_00492DB4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492DC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492DC0u) [[unlikely]] return; }
L_00492DC0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492DCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492DCCu) [[unlikely]] return; }
L_00492DCC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492DD8u) [[unlikely]] return; }
L_00492DD8:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492DE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492DE4u) [[unlikely]] return; }
L_00492DE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492DF4u); set32(c.r[5], c.r[5].w[0] - 14750u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492DF4u) [[unlikely]] return; }
L_00492DF4:
    set32(c.r[17], c.r[29].w[0] + 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492E08u) [[unlikely]] return; }
L_00492E08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E18u); set32(c.r[5], c.r[5].w[0] - 14994u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492E18u) [[unlikely]] return; }
L_00492E18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E28u); set32(c.r[5], c.r[5].w[0] - 14748u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492E28u) [[unlikely]] return; }
L_00492E28:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E34u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492E34u) [[unlikely]] return; }
L_00492E34:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00492E4C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00492E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492E54u) [[unlikely]] return; }
L_00492E54:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_00492E68; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00492E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E70u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492E70u) [[unlikely]] return; }
L_00492E70:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_00492E84; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00492E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E8Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492E8Cu) [[unlikely]] return; }
L_00492E8C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492E98u) [[unlikely]] return; }
L_00492E98:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492EA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492EA4u) [[unlikely]] return; }
L_00492EA4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492EB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492EB0u) [[unlikely]] return; }
L_00492EB0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492EBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492EBCu) [[unlikely]] return; }
L_00492EBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492ECCu); set32(c.r[5], c.r[5].w[0] - 14718u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492ECCu) [[unlikely]] return; }
L_00492ECC:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 15215u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492EE0u) [[unlikely]] return; }
L_00492EE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492EF0u); set32(c.r[5], c.r[5].w[0] - 14994u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492EF0u) [[unlikely]] return; }
L_00492EF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F00u); set32(c.r[5], c.r[5].w[0] - 14716u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00492F00u) [[unlikely]] return; }
L_00492F00:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F0Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00E4(c, 536u, depth + 1u); else { c.pc = 0x00493250u; return; } if (c.pc != 0x00492F0Cu) [[unlikely]] return; }
L_00492F0C:
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00492F24; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00492F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492F2Cu) [[unlikely]] return; }
L_00492F2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00492F40; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00492F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F48u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492F48u) [[unlikely]] return; }
L_00492F48:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00492F5C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00492F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F64u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00492F64u) [[unlikely]] return; }
L_00492F64:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492F70u) [[unlikely]] return; }
L_00492F70:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492F7Cu) [[unlikely]] return; }
L_00492F7C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492F88u) [[unlikely]] return; }
L_00492F88:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492F94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492F94u) [[unlikely]] return; }
L_00492F94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 784u);  c.pc = t; return; }
L_00492FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00493020; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_00492FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492FE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492FE0u) [[unlikely]] return; }
L_00492FE0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_00492FE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00492FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00492FF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00492FF4u) [[unlikely]] return; }
L_00492FF4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0049300C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493008u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00493008u) [[unlikely]] return; }
L_00493008:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0049300C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00493024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00493020u) [[unlikely]] return; }
L_00493020:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00493024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00493040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29780u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0049305C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0049306C; } }
L_0049305C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493064u);  if (depth < kMaxDepth) unit_00E8(c, 430u, depth + 1u); else { c.pc = 0x004A33C0u; return; } if (c.pc != 0x00493064u) [[unlikely]] return; }
L_00493064:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0049306C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00493080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004930A4u); set32(c.r[4], c.r[4].w[0] - 16704u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004930A4u) [[unlikely]] return; }
L_004930A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004930B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004930C4; } }
L_004930B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004930BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 432u, depth + 1u); else { c.pc = 0x004A3400u; return; } if (c.pc != 0x004930BCu) [[unlikely]] return; }
L_004930BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004930C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004930E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29636u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004930F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29780u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0049310C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00493114; } }
L_0049310C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493114u);  if (depth < kMaxDepth) unit_00E8(c, 436u, depth + 1u); else { c.pc = 0x004A3470u; return; } if (c.pc != 0x00493114u) [[unlikely]] return; }
L_00493114:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00493120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29780u)));  c.pc = t; return; }
L_00493130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493150u) [[unlikely]] return; }
L_00493150:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049315Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049315Cu) [[unlikely]] return; }
L_0049315C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004931A4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29768u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049317Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049317Cu) [[unlikely]] return; }
L_0049317C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004931A4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30836u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29768u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004931A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004931A4; } }
L_004931A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004931A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004931C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004931E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004931E0u) [[unlikely]] return; }
L_004931E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004931ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004931ECu) [[unlikely]] return; }
L_004931EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00493234; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049320Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049320Cu) [[unlikely]] return; }
L_0049320C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00493234; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30836u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30996u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00493230; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00493234; } }
L_00493230:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00493234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00493250:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004932C0; } }
L_00493294:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004932A0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004932A0u) [[unlikely]] return; }
L_004932A0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_004932B4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004932C0; } }
L_004932B4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004932C0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00493294u | kUnwind; return; } goto L_00493294; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 192u);  goto L_004932E8; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004932DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004932DCu) [[unlikely]] return; }
L_004932DC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_00493390; }
    set32(c.r[17], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_004932E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004932F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004932F0u) [[unlikely]] return; }
L_004932F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004932F8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004932F8u) [[unlikely]] return; }
L_004932F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493300u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00493300u) [[unlikely]] return; }
L_00493300:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049330Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0049330Cu) [[unlikely]] return; }
L_0049330C:
    set32(c.r[17], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049331Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0049331Cu) [[unlikely]] return; }
L_0049331C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493328u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00493328u) [[unlikely]] return; }
L_00493328:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493334u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00493334u) [[unlikely]] return; }
L_00493334:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049334Cu); set32(c.r[8], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00E4(c, 619u, depth + 1u); else { c.pc = 0x00493930u; return; } if (c.pc != 0x0049334Cu) [[unlikely]] return; }
L_0049334C:
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049335Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E4(c, 514u, depth + 1u); else { c.pc = 0x00492FB0u; return; } if (c.pc != 0x0049335Cu) [[unlikely]] return; }
L_0049335C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493368u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x00493368u) [[unlikely]] return; }
L_00493368:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493374u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x00493374u) [[unlikely]] return; }
L_00493374:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493380u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x00493380u) [[unlikely]] return; }
L_00493380:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049338Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x0049338Cu) [[unlikely]] return; }
L_0049338C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00493390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004933C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00493458; } }
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049340C; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004933F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004933F4u) [[unlikely]] return; }
L_004933F4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493400u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x00493400u) [[unlikely]] return; }
L_00493400:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049340Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x0049340Cu) [[unlikely]] return; }
L_0049340C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00493444; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00493440; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00493440; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00493440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493440u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00493440u) [[unlikely]] return; }
L_00493440:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00493444:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049345C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00493458u) [[unlikely]] return; }
L_00493458:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049345C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00493470:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_004934BC; } }
L_004934A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004934ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004934ACu) [[unlikely]] return; }
L_004934AC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_004934BC; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_004934BC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004934A4u | kUnwind; return; } goto L_004934A4; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_004934E8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004934DCu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004934DCu) [[unlikely]] return; }
L_004934DC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_004934EC; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_004934E8:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004934EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00493510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00493630; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004935A0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0049355C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493558u);  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x00493558u) [[unlikely]] return; }
L_00493558:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0049355C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00493570; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049356Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x0049356Cu) [[unlikely]] return; }
L_0049356C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00493570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493578u);  if (depth < kMaxDepth) unit_00E4(c, 615u, depth + 1u); else { c.pc = 0x004938B0u; return; } if (c.pc != 0x00493578u) [[unlikely]] return; }
L_00493578:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493584u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E4(c, 612u, depth + 1u); else { c.pc = 0x00493870u; return; } if (c.pc != 0x00493584u) [[unlikely]] return; }
L_00493584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049358Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 611u, depth + 1u); else { c.pc = 0x00493860u; return; } if (c.pc != 0x0049358Cu) [[unlikely]] return; }
L_0049358C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049359Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E4(c, 609u, depth + 1u); else { c.pc = 0x00493840u; return; } if (c.pc != 0x0049359Cu) [[unlikely]] return; }
L_0049359C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004935A0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00493604; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004935C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004935BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x004935BCu) [[unlikely]] return; }
L_004935BC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004935C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004935D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004935D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x004935D0u) [[unlikely]] return; }
L_004935D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004935D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004935DCu);  if (depth < kMaxDepth) unit_00E4(c, 615u, depth + 1u); else { c.pc = 0x004938B0u; return; } if (c.pc != 0x004935DCu) [[unlikely]] return; }
L_004935DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004935E8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E4(c, 612u, depth + 1u); else { c.pc = 0x00493870u; return; } if (c.pc != 0x004935E8u) [[unlikely]] return; }
L_004935E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004935F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 611u, depth + 1u); else { c.pc = 0x00493860u; return; } if (c.pc != 0x004935F0u) [[unlikely]] return; }
L_004935F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493600u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E4(c, 609u, depth + 1u); else { c.pc = 0x00493840u; return; } if (c.pc != 0x00493600u) [[unlikely]] return; }
L_00493600:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00493604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049360Cu);  if (depth < kMaxDepth) unit_00E4(c, 615u, depth + 1u); else { c.pc = 0x004938B0u; return; } if (c.pc != 0x0049360Cu) [[unlikely]] return; }
L_0049360C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493618u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E4(c, 553u, depth + 1u); else { c.pc = 0x004933C0u; return; } if (c.pc != 0x00493618u) [[unlikely]] return; }
L_00493618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 611u, depth + 1u); else { c.pc = 0x00493860u; return; } if (c.pc != 0x00493620u) [[unlikely]] return; }
L_00493620:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_00493634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493630u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00493630u) [[unlikely]] return; }
L_00493630:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00493634:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_00493738; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004936A4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00493660; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049365Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x0049365Cu) [[unlikely]] return; }
L_0049365C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00493660:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00493674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x00493670u) [[unlikely]] return; }
L_00493670:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00493674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049367Cu);  if (depth < kMaxDepth) unit_00E4(c, 615u, depth + 1u); else { c.pc = 0x004938B0u; return; } if (c.pc != 0x0049367Cu) [[unlikely]] return; }
L_0049367C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493688u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E4(c, 612u, depth + 1u); else { c.pc = 0x00493870u; return; } if (c.pc != 0x00493688u) [[unlikely]] return; }
L_00493688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 611u, depth + 1u); else { c.pc = 0x00493860u; return; } if (c.pc != 0x00493690u) [[unlikely]] return; }
L_00493690:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004936A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E4(c, 609u, depth + 1u); else { c.pc = 0x00493840u; return; } if (c.pc != 0x004936A0u) [[unlikely]] return; }
L_004936A0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004936A4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00493708; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004936C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004936C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x004936C0u) [[unlikely]] return; }
L_004936C0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004936C4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004936D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004936D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x004936D4u) [[unlikely]] return; }
L_004936D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004936D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004936E0u);  if (depth < kMaxDepth) unit_00E4(c, 615u, depth + 1u); else { c.pc = 0x004938B0u; return; } if (c.pc != 0x004936E0u) [[unlikely]] return; }
L_004936E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004936ECu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E4(c, 612u, depth + 1u); else { c.pc = 0x00493870u; return; } if (c.pc != 0x004936ECu) [[unlikely]] return; }
L_004936EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004936F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 611u, depth + 1u); else { c.pc = 0x00493860u; return; } if (c.pc != 0x004936F4u) [[unlikely]] return; }
L_004936F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493704u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E4(c, 609u, depth + 1u); else { c.pc = 0x00493840u; return; } if (c.pc != 0x00493704u) [[unlikely]] return; }
L_00493704:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00493708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493710u);  if (depth < kMaxDepth) unit_00E4(c, 615u, depth + 1u); else { c.pc = 0x004938B0u; return; } if (c.pc != 0x00493710u) [[unlikely]] return; }
L_00493710:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049371Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E4(c, 553u, depth + 1u); else { c.pc = 0x004933C0u; return; } if (c.pc != 0x0049371Cu) [[unlikely]] return; }
L_0049371C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 611u, depth + 1u); else { c.pc = 0x00493860u; return; } if (c.pc != 0x00493724u) [[unlikely]] return; }
L_00493724:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00493734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493734u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00493734u) [[unlikely]] return; }
L_00493734:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_00493738:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004937EC; } }
    set32(c.r[3], c.r[16].w[0] + 28u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_0049378C; }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 44u);  goto L_00493764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00493760u) [[unlikely]] return; }
L_00493760:
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 1;
L_00493764:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 28u);  goto L_00493778; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00493774u) [[unlikely]] return; }
L_00493774:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 1;
L_00493778:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00493788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00493788u) [[unlikely]] return; }
L_00493788:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0049378C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004937EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004937EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937A4u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004937A4u) [[unlikely]] return; }
L_004937A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937ACu); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004937ACu) [[unlikely]] return; }
L_004937AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937B4u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0007(c, 250u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x004937B4u) [[unlikely]] return; }
L_004937B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004937EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937C4u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 321u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x004937C4u) [[unlikely]] return; }
L_004937C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937D0u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 322u, depth + 1u); else { c.pc = 0x003C6A90u; return; } if (c.pc != 0x004937D0u) [[unlikely]] return; }
L_004937D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937DCu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 323u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x004937DCu) [[unlikely]] return; }
L_004937DC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937ECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 607u, depth + 1u); else { c.pc = 0x00493820u; return; } if (c.pc != 0x004937ECu) [[unlikely]] return; }
L_004937EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00493800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004937FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004937FCu) [[unlikely]] return; }
L_004937FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00493800:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00493820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00493834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493834u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00493834u) [[unlikely]] return; }
L_00493834:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00493840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00493854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493854u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00493854u) [[unlikely]] return; }
L_00493854:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00493860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00493870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004938A4; }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493894u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E4(c, 514u, depth + 1u); else { c.pc = 0x00492FB0u; return; } if (c.pc != 0x00493894u) [[unlikely]] return; }
L_00493894:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004938A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004938A0u) [[unlikely]] return; }
L_004938A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004938A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004938B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004938C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004938F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004938E0u);  if (depth < kMaxDepth) unit_00E4(c, 563u, depth + 1u); else { c.pc = 0x00493510u; return; } if (c.pc != 0x004938E0u) [[unlikely]] return; }
L_004938E0:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_004938F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00493900:
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
L_00493930:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00493994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049398Cu); set32(c.r[5], c.r[5].w[0] - 14609u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0049398Cu) [[unlikely]] return; }
L_0049398C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493994u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00493994u) [[unlikely]] return; }
L_00493994:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004939A0u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004939A0u) [[unlikely]] return; }
L_004939A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_004939E8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004939BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004939BCu) [[unlikely]] return; }
L_004939BC:
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004939CCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004939CCu) [[unlikely]] return; }
L_004939CC:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004939D8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004939D8u) [[unlikely]] return; }
L_004939D8:
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004939E4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004939E4u) [[unlikely]] return; }
L_004939E4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_004939E8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00493A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[16].w[0]);  if (t) { goto L_00493A0C; } }
L_00493A08:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00493A0C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493A24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x00493A24u) [[unlikely]] return; }
L_00493A24:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00493A34; }
    st32((c.r[20].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00493A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00493A60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00492270u | kUnwind; return; } goto L_00492270; }
L_00493A70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00493080u | kUnwind; return; } goto L_00493080; }
L_00493A80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00493040u | kUnwind; return; } goto L_00493040; }
L_00493A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004930E0u | kUnwind; return; } goto L_004930E0; }
L_00493AA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004930F0u | kUnwind; return; } goto L_004930F0; }
L_00493AB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00493120u | kUnwind; return; } goto L_00493120; }
L_00493AC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00492270u | kUnwind; return; } goto L_00492270; }
L_00493AD0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B08u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00493B08u) [[unlikely]] return; }
L_00493B08:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493B20u) [[unlikely]] return; }
L_00493B20:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493B30u) [[unlikely]] return; }
L_00493B30:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493B44u) [[unlikely]] return; }
L_00493B44:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493B58u) [[unlikely]] return; }
L_00493B58:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493B6Cu) [[unlikely]] return; }
L_00493B6C:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00493B7Cu) [[unlikely]] return; }
L_00493B7C:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493B98u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00493B98u) [[unlikely]] return; }
L_00493B98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493BA4u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00493BA4u) [[unlikely]] return; }
L_00493BA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 352u);  goto L_00493BCC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00493BC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493BC8u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00493BC8u) [[unlikely]] return; }
L_00493BC8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_00493BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493BD4u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x00493BD4u) [[unlikely]] return; }
L_00493BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::max(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00493C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493C24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493C24u) [[unlikely]] return; }
L_00493C24:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_00493C2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493C54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00493C54u) [[unlikely]] return; }
L_00493C54:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 212u)));  goto L_00493CB0; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493C8Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00493C8Cu) [[unlikely]] return; }
L_00493C8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00493CA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493CA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493CA4u) [[unlikely]] return; }
L_00493CA4:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00493CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00493CD4; } }
L_00493CB0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493CBCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00493CBCu) [[unlikely]] return; }
L_00493CBC:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493CD0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00493CD0u) [[unlikely]] return; }
L_00493CD0:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00493CD4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493CE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493CE8u) [[unlikely]] return; }
L_00493CE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_00493D18; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_00493D1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493D18u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493D18u) [[unlikely]] return; }
L_00493D18:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00493D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00493D24u) [[unlikely]] return; }
L_00493D24:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493D44u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00493D44u) [[unlikely]] return; }
L_00493D44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493D50u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00493D50u) [[unlikely]] return; }
L_00493D50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_00493D78; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00493D74; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493D74u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00493D74u) [[unlikely]] return; }
L_00493D74:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_00493D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493D80u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x00493D80u) [[unlikely]] return; }
L_00493D80:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 56u));  goto L_00493E04; }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493DB4u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00493DB4u) [[unlikely]] return; }
L_00493DB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493DC0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00493DC0u) [[unlikely]] return; }
L_00493DC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 320u);  goto L_00493DE8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00493DE4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493DE4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00493DE4u) [[unlikely]] return; }
L_00493DE4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_00493DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493DF0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x00493DF0u) [[unlikely]] return; }
L_00493DF0:
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 5;
L_00493E04:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00493E28; } }
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.budget -= 4;
L_00493E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00493E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493E54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493E54u) [[unlikely]] return; }
L_00493E54:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_00493E5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493E84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00493E84u) [[unlikely]] return; }
L_00493E84:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 180u)));  goto L_00493EE0; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493EBCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00493EBCu) [[unlikely]] return; }
L_00493EBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00493ED8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493ED4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493ED4u) [[unlikely]] return; }
L_00493ED4:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00493ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00493F04; } }
L_00493EE0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493EECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00493EECu) [[unlikely]] return; }
L_00493EEC:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493F00u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00493F00u) [[unlikely]] return; }
L_00493F00:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00493F04:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00493F18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00493F18u) [[unlikely]] return; }
L_00493F18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00493F48; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[29].w[0] + 336u));  goto L_00493F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493F48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493F48u) [[unlikely]] return; }
L_00493F48:
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.budget -= 1;
L_00493F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 336u), c.f[0]);  if (t) { goto L_00493F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493F88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00493F88u) [[unlikely]] return; }
L_00493F88:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_00493F90:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493FB8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00493FB8u) [[unlikely]] return; }
L_00493FB8:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 148u)));  [[clang::musttail]] return unit_00E5(c, 4u, depth); }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00493FF0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00493FF0u) [[unlikely]] return; }
L_00493FF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  [[clang::musttail]] return unit_00E5(c, 3u, depth); }
    [[clang::musttail]] return unit_00E5(c, 1u, depth);
}

}
