#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35,
    0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0,
    0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 297,
    0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0,
    0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0,
    0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 344, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0,
    358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365,
    0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399,
    0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0,
    0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437,
    0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0,
    0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0,
    0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0,
    480, 0, 481, 0, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0,
    0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499,
    0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0,
    516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0,
    0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0,
    0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0,
    0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586,
    0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0,
    591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0,
    0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0,
    0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615,
    0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0,
    0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632,
    0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0,
    0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0,
    652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0,
    0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0,
    0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0,
    0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002AC000;
    case 2u: goto L_002AC01C;
    case 3u: goto L_002AC020;
    case 4u: goto L_002AC034;
    case 5u: goto L_002AC064;
    case 6u: goto L_002AC074;
    case 7u: goto L_002AC094;
    case 8u: goto L_002AC0B0;
    case 9u: goto L_002AC0C0;
    case 10u: goto L_002AC0DC;
    case 11u: goto L_002AC0F0;
    case 12u: goto L_002AC100;
    case 13u: goto L_002AC110;
    case 14u: goto L_002AC120;
    case 15u: goto L_002AC130;
    case 16u: goto L_002AC148;
    case 17u: goto L_002AC178;
    case 18u: goto L_002AC188;
    case 19u: goto L_002AC1A8;
    case 20u: goto L_002AC1B8;
    case 21u: goto L_002AC1CC;
    case 22u: goto L_002AC1E4;
    case 23u: goto L_002AC1E8;
    case 24u: goto L_002AC200;
    case 25u: goto L_002AC22C;
    case 26u: goto L_002AC234;
    case 27u: goto L_002AC23C;
    case 28u: goto L_002AC244;
    case 29u: goto L_002AC24C;
    case 30u: goto L_002AC254;
    case 31u: goto L_002AC25C;
    case 32u: goto L_002AC264;
    case 33u: goto L_002AC26C;
    case 34u: goto L_002AC274;
    case 35u: goto L_002AC27C;
    case 36u: goto L_002AC284;
    case 37u: goto L_002AC28C;
    case 38u: goto L_002AC294;
    case 39u: goto L_002AC29C;
    case 40u: goto L_002AC2A4;
    case 41u: goto L_002AC2AC;
    case 42u: goto L_002AC2B4;
    case 43u: goto L_002AC2BC;
    case 44u: goto L_002AC2C4;
    case 45u: goto L_002AC2D8;
    case 46u: goto L_002AC2EC;
    case 47u: goto L_002AC300;
    case 48u: goto L_002AC314;
    case 49u: goto L_002AC328;
    case 50u: goto L_002AC33C;
    case 51u: goto L_002AC350;
    case 52u: goto L_002AC364;
    case 53u: goto L_002AC378;
    case 54u: goto L_002AC38C;
    case 55u: goto L_002AC3A0;
    case 56u: goto L_002AC3B4;
    case 57u: goto L_002AC3C8;
    case 58u: goto L_002AC3DC;
    case 59u: goto L_002AC3F0;
    case 60u: goto L_002AC404;
    case 61u: goto L_002AC418;
    case 62u: goto L_002AC42C;
    case 63u: goto L_002AC440;
    case 64u: goto L_002AC454;
    case 65u: goto L_002AC468;
    case 66u: goto L_002AC47C;
    case 67u: goto L_002AC490;
    case 68u: goto L_002AC4A4;
    case 69u: goto L_002AC4B8;
    case 70u: goto L_002AC4CC;
    case 71u: goto L_002AC4E0;
    case 72u: goto L_002AC4F4;
    case 73u: goto L_002AC508;
    case 74u: goto L_002AC51C;
    case 75u: goto L_002AC530;
    case 76u: goto L_002AC544;
    case 77u: goto L_002AC558;
    case 78u: goto L_002AC56C;
    case 79u: goto L_002AC580;
    case 80u: goto L_002AC594;
    case 81u: goto L_002AC5A8;
    case 82u: goto L_002AC5BC;
    case 83u: goto L_002AC5D0;
    case 84u: goto L_002AC5E4;
    case 85u: goto L_002AC5F8;
    case 86u: goto L_002AC60C;
    case 87u: goto L_002AC620;
    case 88u: goto L_002AC634;
    case 89u: goto L_002AC648;
    case 90u: goto L_002AC65C;
    case 91u: goto L_002AC670;
    case 92u: goto L_002AC684;
    case 93u: goto L_002AC698;
    case 94u: goto L_002AC6AC;
    case 95u: goto L_002AC6C0;
    case 96u: goto L_002AC6D4;
    case 97u: goto L_002AC6E8;
    case 98u: goto L_002AC6FC;
    case 99u: goto L_002AC710;
    case 100u: goto L_002AC724;
    case 101u: goto L_002AC738;
    case 102u: goto L_002AC74C;
    case 103u: goto L_002AC760;
    case 104u: goto L_002AC774;
    case 105u: goto L_002AC788;
    case 106u: goto L_002AC79C;
    case 107u: goto L_002AC7AC;
    case 108u: goto L_002AC7B0;
    case 109u: goto L_002AC7C4;
    case 110u: goto L_002AC7D8;
    case 111u: goto L_002AC7EC;
    case 112u: goto L_002AC800;
    case 113u: goto L_002AC814;
    case 114u: goto L_002AC828;
    case 115u: goto L_002AC83C;
    case 116u: goto L_002AC844;
    case 117u: goto L_002AC84C;
    case 118u: goto L_002AC854;
    case 119u: goto L_002AC85C;
    case 120u: goto L_002AC864;
    case 121u: goto L_002AC86C;
    case 122u: goto L_002AC888;
    case 123u: goto L_002AC8B8;
    case 124u: goto L_002AC8C8;
    case 125u: goto L_002AC8E8;
    case 126u: goto L_002AC904;
    case 127u: goto L_002AC934;
    case 128u: goto L_002AC944;
    case 129u: goto L_002AC964;
    case 130u: goto L_002AC980;
    case 131u: goto L_002AC9B0;
    case 132u: goto L_002AC9C0;
    case 133u: goto L_002AC9E0;
    case 134u: goto L_002AC9FC;
    case 135u: goto L_002ACA2C;
    case 136u: goto L_002ACA3C;
    case 137u: goto L_002ACA5C;
    case 138u: goto L_002ACA68;
    case 139u: goto L_002ACA84;
    case 140u: goto L_002ACA94;
    case 141u: goto L_002ACABC;
    case 142u: goto L_002ACACC;
    case 143u: goto L_002ACAE8;
    case 144u: goto L_002ACAFC;
    case 145u: goto L_002ACB0C;
    case 146u: goto L_002ACB20;
    case 147u: goto L_002ACB34;
    case 148u: goto L_002ACB48;
    case 149u: goto L_002ACB64;
    case 150u: goto L_002ACB90;
    case 151u: goto L_002ACBA0;
    case 152u: goto L_002ACBC0;
    case 153u: goto L_002ACBE0;
    case 154u: goto L_002ACC14;
    case 155u: goto L_002ACC30;
    case 156u: goto L_002ACC40;
    case 157u: goto L_002ACC70;
    case 158u: goto L_002ACC9C;
    case 159u: goto L_002ACCBC;
    case 160u: goto L_002ACCCC;
    case 161u: goto L_002ACCE0;
    case 162u: goto L_002ACD04;
    case 163u: goto L_002ACD20;
    case 164u: goto L_002ACD58;
    case 165u: goto L_002ACD60;
    case 166u: goto L_002ACD78;
    case 167u: goto L_002ACDBC;
    case 168u: goto L_002ACDC4;
    case 169u: goto L_002ACDDC;
    case 170u: goto L_002ACE14;
    case 171u: goto L_002ACE30;
    case 172u: goto L_002ACE50;
    case 173u: goto L_002ACE68;
    case 174u: goto L_002ACE9C;
    case 175u: goto L_002ACEB4;
    case 176u: goto L_002ACEE0;
    case 177u: goto L_002ACF18;
    case 178u: goto L_002ACF20;
    case 179u: goto L_002ACF38;
    case 180u: goto L_002ACF70;
    case 181u: goto L_002ACF8C;
    case 182u: goto L_002ACFB0;
    case 183u: goto L_002ACFD0;
    case 184u: goto L_002ACFE0;
    case 185u: goto L_002AD068;
    case 186u: goto L_002AD080;
    case 187u: goto L_002AD0DC;
    case 188u: goto L_002AD120;
    case 189u: goto L_002AD130;
    case 190u: goto L_002AD150;
    case 191u: goto L_002AD168;
    case 192u: goto L_002AD178;
    case 193u: goto L_002AD194;
    case 194u: goto L_002AD1C0;
    case 195u: goto L_002AD1F4;
    case 196u: goto L_002AD204;
    case 197u: goto L_002AD22C;
    case 198u: goto L_002AD23C;
    case 199u: goto L_002AD254;
    case 200u: goto L_002AD268;
    case 201u: goto L_002AD274;
    case 202u: goto L_002AD288;
    case 203u: goto L_002AD29C;
    case 204u: goto L_002AD2BC;
    case 205u: goto L_002AD2D4;
    case 206u: goto L_002AD320;
    case 207u: goto L_002AD368;
    case 208u: goto L_002AD378;
    case 209u: goto L_002AD39C;
    case 210u: goto L_002AD3AC;
    case 211u: goto L_002AD3CC;
    case 212u: goto L_002AD400;
    case 213u: goto L_002AD410;
    case 214u: goto L_002AD430;
    case 215u: goto L_002AD45C;
    case 216u: goto L_002AD48C;
    case 217u: goto L_002AD49C;
    case 218u: goto L_002AD4BC;
    case 219u: goto L_002AD4CC;
    case 220u: goto L_002AD4F0;
    case 221u: goto L_002AD508;
    case 222u: goto L_002AD520;
    case 223u: goto L_002AD540;
    case 224u: goto L_002AD58C;
    case 225u: goto L_002AD59C;
    case 226u: goto L_002AD5B8;
    case 227u: goto L_002AD5F0;
    case 228u: goto L_002AD600;
    case 229u: goto L_002AD620;
    case 230u: goto L_002AD62C;
    case 231u: goto L_002AD670;
    case 232u: goto L_002AD6B4;
    case 233u: goto L_002AD6CC;
    case 234u: goto L_002AD6DC;
    case 235u: goto L_002AD6F8;
    case 236u: goto L_002AD720;
    case 237u: goto L_002AD754;
    case 238u: goto L_002AD764;
    case 239u: goto L_002AD780;
    case 240u: goto L_002AD79C;
    case 241u: goto L_002AD7C0;
    case 242u: goto L_002AD7F4;
    case 243u: goto L_002AD804;
    case 244u: goto L_002AD820;
    case 245u: goto L_002AD83C;
    case 246u: goto L_002AD860;
    case 247u: goto L_002AD870;
    case 248u: goto L_002AD8B4;
    case 249u: goto L_002AD8BC;
    case 250u: goto L_002AD8C4;
    case 251u: goto L_002AD8D8;
    case 252u: goto L_002AD8EC;
    case 253u: goto L_002AD924;
    case 254u: goto L_002AD92C;
    case 255u: goto L_002AD94C;
    case 256u: goto L_002AD958;
    case 257u: goto L_002AD990;
    case 258u: goto L_002AD998;
    case 259u: goto L_002AD9A4;
    case 260u: goto L_002AD9B4;
    case 261u: goto L_002AD9BC;
    case 262u: goto L_002AD9C8;
    case 263u: goto L_002ADA08;
    case 264u: goto L_002ADA20;
    case 265u: goto L_002ADA30;
    case 266u: goto L_002ADA38;
    case 267u: goto L_002ADA44;
    case 268u: goto L_002ADA50;
    case 269u: goto L_002ADA58;
    case 270u: goto L_002ADA64;
    case 271u: goto L_002ADA74;
    case 272u: goto L_002ADAB4;
    case 273u: goto L_002ADADC;
    case 274u: goto L_002ADAE8;
    case 275u: goto L_002ADAF4;
    case 276u: goto L_002ADB04;
    case 277u: goto L_002ADB14;
    case 278u: goto L_002ADB28;
    case 279u: goto L_002ADB6C;
    case 280u: goto L_002ADB84;
    case 281u: goto L_002ADB90;
    case 282u: goto L_002ADBD0;
    case 283u: goto L_002ADBE0;
    case 284u: goto L_002ADC34;
    case 285u: goto L_002ADC48;
    case 286u: goto L_002ADC8C;
    case 287u: goto L_002ADCA0;
    case 288u: goto L_002ADCDC;
    case 289u: goto L_002ADCE4;
    case 290u: goto L_002ADD08;
    case 291u: goto L_002ADD20;
    case 292u: goto L_002ADD2C;
    case 293u: goto L_002ADD4C;
    case 294u: goto L_002ADD5C;
    case 295u: goto L_002ADD64;
    case 296u: goto L_002ADD70;
    case 297u: goto L_002ADD7C;
    case 298u: goto L_002ADD88;
    case 299u: goto L_002ADD98;
    case 300u: goto L_002ADDB4;
    case 301u: goto L_002ADDC4;
    case 302u: goto L_002ADDD8;
    case 303u: goto L_002ADE1C;
    case 304u: goto L_002ADE50;
    case 305u: goto L_002ADE98;
    case 306u: goto L_002ADEA4;
    case 307u: goto L_002ADEB0;
    case 308u: goto L_002ADEC4;
    case 309u: goto L_002ADECC;
    case 310u: goto L_002ADED8;
    case 311u: goto L_002ADEE8;
    case 312u: goto L_002ADEF0;
    case 313u: goto L_002ADF04;
    case 314u: goto L_002ADF0C;
    case 315u: goto L_002ADF24;
    case 316u: goto L_002ADF44;
    case 317u: goto L_002ADF4C;
    case 318u: goto L_002ADF5C;
    case 319u: goto L_002ADF7C;
    case 320u: goto L_002ADF8C;
    case 321u: goto L_002ADF94;
    case 322u: goto L_002ADFA0;
    case 323u: goto L_002ADFAC;
    case 324u: goto L_002ADFB4;
    case 325u: goto L_002ADFC0;
    case 326u: goto L_002ADFCC;
    case 327u: goto L_002ADFEC;
    case 328u: goto L_002ADFF8;
    case 329u: goto L_002AE008;
    case 330u: goto L_002AE018;
    case 331u: goto L_002AE028;
    case 332u: goto L_002AE034;
    case 333u: goto L_002AE048;
    case 334u: goto L_002AE050;
    case 335u: goto L_002AE068;
    case 336u: goto L_002AE088;
    case 337u: goto L_002AE090;
    case 338u: goto L_002AE0A0;
    case 339u: goto L_002AE0BC;
    case 340u: goto L_002AE0C8;
    case 341u: goto L_002AE0D8;
    case 342u: goto L_002AE0E0;
    case 343u: goto L_002AE0F0;
    case 344u: goto L_002AE0F8;
    case 345u: goto L_002AE104;
    case 346u: goto L_002AE110;
    case 347u: goto L_002AE120;
    case 348u: goto L_002AE12C;
    case 349u: goto L_002AE13C;
    case 350u: goto L_002AE144;
    case 351u: goto L_002AE15C;
    case 352u: goto L_002AE174;
    case 353u: goto L_002AE198;
    case 354u: goto L_002AE1A8;
    case 355u: goto L_002AE1C8;
    case 356u: goto L_002AE1D4;
    case 357u: goto L_002AE1F4;
    case 358u: goto L_002AE200;
    case 359u: goto L_002AE210;
    case 360u: goto L_002AE220;
    case 361u: goto L_002AE230;
    case 362u: goto L_002AE23C;
    case 363u: goto L_002AE258;
    case 364u: goto L_002AE270;
    case 365u: goto L_002AE27C;
    case 366u: goto L_002AE288;
    case 367u: goto L_002AE294;
    case 368u: goto L_002AE2A4;
    case 369u: goto L_002AE2B0;
    case 370u: goto L_002AE2BC;
    case 371u: goto L_002AE2C8;
    case 372u: goto L_002AE2D4;
    case 373u: goto L_002AE310;
    case 374u: goto L_002AE368;
    case 375u: goto L_002AE370;
    case 376u: goto L_002AE388;
    case 377u: goto L_002AE39C;
    case 378u: goto L_002AE3B4;
    case 379u: goto L_002AE3EC;
    case 380u: goto L_002AE430;
    case 381u: goto L_002AE484;
    case 382u: goto L_002AE494;
    case 383u: goto L_002AE49C;
    case 384u: goto L_002AE4AC;
    case 385u: goto L_002AE4C4;
    case 386u: goto L_002AE4CC;
    case 387u: goto L_002AE4D8;
    case 388u: goto L_002AE4F0;
    case 389u: goto L_002AE504;
    case 390u: goto L_002AE50C;
    case 391u: goto L_002AE51C;
    case 392u: goto L_002AE524;
    case 393u: goto L_002AE530;
    case 394u: goto L_002AE53C;
    case 395u: goto L_002AE54C;
    case 396u: goto L_002AE554;
    case 397u: goto L_002AE560;
    case 398u: goto L_002AE570;
    case 399u: goto L_002AE57C;
    case 400u: goto L_002AE588;
    case 401u: goto L_002AE590;
    case 402u: goto L_002AE59C;
    case 403u: goto L_002AE5A8;
    case 404u: goto L_002AE5B8;
    case 405u: goto L_002AE5C4;
    case 406u: goto L_002AE5D8;
    case 407u: goto L_002AE5E4;
    case 408u: goto L_002AE5F0;
    case 409u: goto L_002AE604;
    case 410u: goto L_002AE618;
    case 411u: goto L_002AE670;
    case 412u: goto L_002AE6B4;
    case 413u: goto L_002AE6C8;
    case 414u: goto L_002AE708;
    case 415u: goto L_002AE730;
    case 416u: goto L_002AE764;
    case 417u: goto L_002AE778;
    case 418u: goto L_002AE7B8;
    case 419u: goto L_002AE7E0;
    case 420u: goto L_002AE818;
    case 421u: goto L_002AE830;
    case 422u: goto L_002AE848;
    case 423u: goto L_002AE878;
    case 424u: goto L_002AE890;
    case 425u: goto L_002AE8B0;
    case 426u: goto L_002AE93C;
    case 427u: goto L_002AE950;
    case 428u: goto L_002AE990;
    case 429u: goto L_002AE998;
    case 430u: goto L_002AE9A0;
    case 431u: goto L_002AE9B8;
    case 432u: goto L_002AE9C0;
    case 433u: goto L_002AE9C8;
    case 434u: goto L_002AE9D4;
    case 435u: goto L_002AE9E4;
    case 436u: goto L_002AE9F4;
    case 437u: goto L_002AE9FC;
    case 438u: goto L_002AEA08;
    case 439u: goto L_002AEA18;
    case 440u: goto L_002AEA24;
    case 441u: goto L_002AEA2C;
    case 442u: goto L_002AEA44;
    case 443u: goto L_002AEA58;
    case 444u: goto L_002AEA60;
    case 445u: goto L_002AEA6C;
    case 446u: goto L_002AEA78;
    case 447u: goto L_002AEA88;
    case 448u: goto L_002AEA9C;
    case 449u: goto L_002AEAA4;
    case 450u: goto L_002AEABC;
    case 451u: goto L_002AEACC;
    case 452u: goto L_002AEAE0;
    case 453u: goto L_002AEAE8;
    case 454u: goto L_002AEAF4;
    case 455u: goto L_002AEB00;
    case 456u: goto L_002AEB10;
    case 457u: goto L_002AEB2C;
    case 458u: goto L_002AEB3C;
    case 459u: goto L_002AEB50;
    case 460u: goto L_002AEB6C;
    case 461u: goto L_002AEB84;
    case 462u: goto L_002AEBB4;
    case 463u: goto L_002AEBC4;
    case 464u: goto L_002AEBE4;
    case 465u: goto L_002AEBF0;
    case 466u: goto L_002AEBF8;
    case 467u: goto L_002AEC04;
    case 468u: goto L_002AEC14;
    case 469u: goto L_002AEC24;
    case 470u: goto L_002AEC30;
    case 471u: goto L_002AEC3C;
    case 472u: goto L_002AEC70;
    case 473u: goto L_002AEC80;
    case 474u: goto L_002AECB8;
    case 475u: goto L_002AECC0;
    case 476u: goto L_002AECD0;
    case 477u: goto L_002AECD8;
    case 478u: goto L_002AECE4;
    case 479u: goto L_002AECF0;
    case 480u: goto L_002AED00;
    case 481u: goto L_002AED08;
    case 482u: goto L_002AED14;
    case 483u: goto L_002AED1C;
    case 484u: goto L_002AED30;
    case 485u: goto L_002AED48;
    case 486u: goto L_002AED58;
    case 487u: goto L_002AED64;
    case 488u: goto L_002AED74;
    case 489u: goto L_002AED84;
    case 490u: goto L_002AEDA4;
    case 491u: goto L_002AEDB4;
    case 492u: goto L_002AEDE4;
    case 493u: goto L_002AEDF0;
    case 494u: goto L_002AEDF8;
    case 495u: goto L_002AEE0C;
    case 496u: goto L_002AEE1C;
    case 497u: goto L_002AEE4C;
    case 498u: goto L_002AEE58;
    case 499u: goto L_002AEE7C;
    case 500u: goto L_002AEE8C;
    case 501u: goto L_002AEEAC;
    case 502u: goto L_002AEED0;
    case 503u: goto L_002AEEE0;
    case 504u: goto L_002AEF00;
    case 505u: goto L_002AEF0C;
    case 506u: goto L_002AEF18;
    case 507u: goto L_002AEF40;
    case 508u: goto L_002AEF94;
    case 509u: goto L_002AEFA0;
    case 510u: goto L_002AEFAC;
    case 511u: goto L_002AEFB8;
    case 512u: goto L_002AEFC4;
    case 513u: goto L_002AEFD4;
    case 514u: goto L_002AEFE0;
    case 515u: goto L_002AEFF0;
    case 516u: goto L_002AF000;
    case 517u: goto L_002AF010;
    case 518u: goto L_002AF020;
    case 519u: goto L_002AF030;
    case 520u: goto L_002AF040;
    case 521u: goto L_002AF050;
    case 522u: goto L_002AF060;
    case 523u: goto L_002AF070;
    case 524u: goto L_002AF09C;
    case 525u: goto L_002AF0C0;
    case 526u: goto L_002AF0D0;
    case 527u: goto L_002AF0EC;
    case 528u: goto L_002AF104;
    case 529u: goto L_002AF114;
    case 530u: goto L_002AF158;
    case 531u: goto L_002AF174;
    case 532u: goto L_002AF188;
    case 533u: goto L_002AF1AC;
    case 534u: goto L_002AF1CC;
    case 535u: goto L_002AF1E0;
    case 536u: goto L_002AF1F4;
    case 537u: goto L_002AF214;
    case 538u: goto L_002AF230;
    case 539u: goto L_002AF238;
    case 540u: goto L_002AF250;
    case 541u: goto L_002AF258;
    case 542u: goto L_002AF268;
    case 543u: goto L_002AF27C;
    case 544u: goto L_002AF2C0;
    case 545u: goto L_002AF2D0;
    case 546u: goto L_002AF2E4;
    case 547u: goto L_002AF2F8;
    case 548u: goto L_002AF338;
    case 549u: goto L_002AF34C;
    case 550u: goto L_002AF36C;
    case 551u: goto L_002AF388;
    case 552u: goto L_002AF3AC;
    case 553u: goto L_002AF3C0;
    case 554u: goto L_002AF3E4;
    case 555u: goto L_002AF404;
    case 556u: goto L_002AF418;
    case 557u: goto L_002AF42C;
    case 558u: goto L_002AF44C;
    case 559u: goto L_002AF458;
    case 560u: goto L_002AF48C;
    case 561u: goto L_002AF49C;
    case 562u: goto L_002AF4B8;
    case 563u: goto L_002AF4CC;
    case 564u: goto L_002AF4DC;
    case 565u: goto L_002AF520;
    case 566u: goto L_002AF530;
    case 567u: goto L_002AF54C;
    case 568u: goto L_002AF564;
    case 569u: goto L_002AF574;
    case 570u: goto L_002AF5A4;
    case 571u: goto L_002AF5CC;
    case 572u: goto L_002AF5D8;
    case 573u: goto L_002AF608;
    case 574u: goto L_002AF610;
    case 575u: goto L_002AF61C;
    case 576u: goto L_002AF630;
    case 577u: goto L_002AF644;
    case 578u: goto L_002AF668;
    case 579u: goto L_002AF688;
    case 580u: goto L_002AF69C;
    case 581u: goto L_002AF6B0;
    case 582u: goto L_002AF6D0;
    case 583u: goto L_002AF6E0;
    case 584u: goto L_002AF6E8;
    case 585u: goto L_002AF6F4;
    case 586u: goto L_002AF6FC;
    case 587u: goto L_002AF714;
    case 588u: goto L_002AF72C;
    case 589u: goto L_002AF750;
    case 590u: goto L_002AF760;
    case 591u: goto L_002AF780;
    case 592u: goto L_002AF78C;
    case 593u: goto L_002AF7A4;
    case 594u: goto L_002AF7BC;
    case 595u: goto L_002AF7E0;
    case 596u: goto L_002AF7F0;
    case 597u: goto L_002AF810;
    case 598u: goto L_002AF81C;
    case 599u: goto L_002AF828;
    case 600u: goto L_002AF850;
    case 601u: goto L_002AF85C;
    case 602u: goto L_002AF88C;
    case 603u: goto L_002AF894;
    case 604u: goto L_002AF8A0;
    case 605u: goto L_002AF8AC;
    case 606u: goto L_002AF8EC;
    case 607u: goto L_002AF90C;
    case 608u: goto L_002AF920;
    case 609u: goto L_002AF944;
    case 610u: goto L_002AF964;
    case 611u: goto L_002AF978;
    case 612u: goto L_002AF98C;
    case 613u: goto L_002AF9AC;
    case 614u: goto L_002AF9BC;
    case 615u: goto L_002AF9FC;
    case 616u: goto L_002AFA1C;
    case 617u: goto L_002AFA30;
    case 618u: goto L_002AFA54;
    case 619u: goto L_002AFA74;
    case 620u: goto L_002AFA88;
    case 621u: goto L_002AFA9C;
    case 622u: goto L_002AFABC;
    case 623u: goto L_002AFACC;
    case 624u: goto L_002AFAD8;
    case 625u: goto L_002AFAE4;
    case 626u: goto L_002AFAEC;
    case 627u: goto L_002AFB04;
    case 628u: goto L_002AFB1C;
    case 629u: goto L_002AFB40;
    case 630u: goto L_002AFB50;
    case 631u: goto L_002AFB70;
    case 632u: goto L_002AFB7C;
    case 633u: goto L_002AFB88;
    case 634u: goto L_002AFBB0;
    case 635u: goto L_002AFBBC;
    case 636u: goto L_002AFBF8;
    case 637u: goto L_002AFC10;
    case 638u: goto L_002AFC28;
    case 639u: goto L_002AFC3C;
    case 640u: goto L_002AFC4C;
    case 641u: goto L_002AFC60;
    case 642u: goto L_002AFC74;
    case 643u: goto L_002AFCB4;
    case 644u: goto L_002AFCC8;
    case 645u: goto L_002AFCE8;
    case 646u: goto L_002AFD0C;
    case 647u: goto L_002AFD1C;
    case 648u: goto L_002AFD3C;
    case 649u: goto L_002AFD58;
    case 650u: goto L_002AFD6C;
    case 651u: goto L_002AFD74;
    case 652u: goto L_002AFD80;
    case 653u: goto L_002AFD8C;
    case 654u: goto L_002AFDA0;
    case 655u: goto L_002AFDB8;
    case 656u: goto L_002AFDD0;
    case 657u: goto L_002AFDE4;
    case 658u: goto L_002AFDF4;
    case 659u: goto L_002AFE08;
    case 660u: goto L_002AFE2C;
    case 661u: goto L_002AFE4C;
    case 662u: goto L_002AFE60;
    case 663u: goto L_002AFE74;
    case 664u: goto L_002AFE94;
    case 665u: goto L_002AFEB8;
    case 666u: goto L_002AFEC8;
    case 667u: goto L_002AFEE8;
    case 668u: goto L_002AFF04;
    case 669u: goto L_002AFF18;
    case 670u: goto L_002AFF28;
    case 671u: goto L_002AFF30;
    case 672u: goto L_002AFF3C;
    case 673u: goto L_002AFF48;
    case 674u: goto L_002AFF58;
    case 675u: goto L_002AFF60;
    case 676u: goto L_002AFF6C;
    case 677u: goto L_002AFF74;
    case 678u: goto L_002AFF88;
    case 679u: goto L_002AFFA0;
    case 680u: goto L_002AFFB0;
    case 681u: goto L_002AFFBC;
    case 682u: goto L_002AFFCC;
    case 683u: goto L_002AFFDC;
    default: bad_entry(c, 0x002AC000u); return;
    }
L_002AC000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC01C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC01Cu); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AC01Cu) [[unlikely]] return; }
L_002AC01C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27596u)));
    c.budget -= 1;
L_002AC020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27464u)));  goto L_002AC098; }
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC034u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AC034u) [[unlikely]] return; }
L_002AC034:
    st32((c.r[28].w[0] - 27596u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC094; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC064u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC064u) [[unlikely]] return; }
L_002AC064:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC074u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC074u) [[unlikely]] return; }
L_002AC074:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC094; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC094u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AC094u) [[unlikely]] return; }
L_002AC094:
    set32(c.r[16], ld32((c.r[28].w[0] - 27464u)));
    c.budget -= 1;
L_002AC098:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AC100; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002AC0E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC0B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC0B0u) [[unlikely]] return; }
L_002AC0B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC0C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC0C0u) [[unlikely]] return; }
L_002AC0C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC0DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC0DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC0DCu) [[unlikely]] return; }
L_002AC0DC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AC0E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27464u), 0u);  if (t) { goto L_002AC100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC0F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC0F0u) [[unlikely]] return; }
L_002AC0F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC100u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC100u) [[unlikely]] return; }
L_002AC100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC110u); set32(c.r[4], c.r[4].w[0] + 16496u);  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x002AC110u) [[unlikely]] return; }
L_002AC110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC120u); set32(c.r[4], c.r[4].w[0] + 16500u);  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x002AC120u) [[unlikely]] return; }
L_002AC120:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC130u); set32(c.r[4], c.r[4].w[0] + 16504u);  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x002AC130u) [[unlikely]] return; }
L_002AC130:
    set32(c.r[2], ld32((c.r[28].w[0] - 27560u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 27480u)));  goto L_002AC1D0; }
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC148u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AC148u) [[unlikely]] return; }
L_002AC148:
    st32((c.r[28].w[0] - 27560u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC1A8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC178u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC178u) [[unlikely]] return; }
L_002AC178:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC188u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC188u) [[unlikely]] return; }
L_002AC188:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC1A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1A8u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AC1A8u) [[unlikely]] return; }
L_002AC1A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC1D0; } }
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_002AC1B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1CCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002AC1CCu) [[unlikely]] return; }
L_002AC1CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AC1D0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[16], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC1B8u | kUnwind; return; } goto L_002AC1B8; }
    st32((c.r[28].w[0] - 27480u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1E4u); st32((c.r[28].w[0] - 27476u), 0u);  if (depth < kMaxDepth) unit_006A(c, 17u, depth + 1u); else { c.pc = 0x002A82E0u; return; } if (c.pc != 0x002AC1E4u) [[unlikely]] return; }
L_002AC1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AC1E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AC200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 27672u));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002ACBC4; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 27672u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC22Cu);  if (depth < kMaxDepth) unit_006A(c, 19u, depth + 1u); else { c.pc = 0x002A8320u; return; } if (c.pc != 0x002AC22Cu) [[unlikely]] return; }
L_002AC22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC234u);  if (depth < kMaxDepth) unit_0074(c, 150u, depth + 1u); else { c.pc = 0x002D0F50u; return; } if (c.pc != 0x002AC234u) [[unlikely]] return; }
L_002AC234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC23Cu);  if (depth < kMaxDepth) unit_0085(c, 244u, depth + 1u); else { c.pc = 0x00316BD0u; return; } if (c.pc != 0x002AC23Cu) [[unlikely]] return; }
L_002AC23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC244u);  if (depth < kMaxDepth) unit_0060(c, 217u, depth + 1u); else { c.pc = 0x002817A0u; return; } if (c.pc != 0x002AC244u) [[unlikely]] return; }
L_002AC244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC24Cu);  if (depth < kMaxDepth) unit_0066(c, 165u, depth + 1u); else { c.pc = 0x0029A510u; return; } if (c.pc != 0x002AC24Cu) [[unlikely]] return; }
L_002AC24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC254u);  if (depth < kMaxDepth) unit_0067(c, 171u, depth + 1u); else { c.pc = 0x0029D560u; return; } if (c.pc != 0x002AC254u) [[unlikely]] return; }
L_002AC254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC25Cu);  if (depth < kMaxDepth) unit_006D(c, 118u, depth + 1u); else { c.pc = 0x002B4DF0u; return; } if (c.pc != 0x002AC25Cu) [[unlikely]] return; }
L_002AC25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC264u);  if (depth < kMaxDepth) unit_006D(c, 416u, depth + 1u); else { c.pc = 0x002B70F0u; return; } if (c.pc != 0x002AC264u) [[unlikely]] return; }
L_002AC264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC26Cu);  if (depth < kMaxDepth) unit_0072(c, 436u, depth + 1u); else { c.pc = 0x002CB870u; return; } if (c.pc != 0x002AC26Cu) [[unlikely]] return; }
L_002AC26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC274u);  if (depth < kMaxDepth) unit_0074(c, 17u, depth + 1u); else { c.pc = 0x002D0250u; return; } if (c.pc != 0x002AC274u) [[unlikely]] return; }
L_002AC274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC27Cu);  if (depth < kMaxDepth) unit_0075(c, 257u, depth + 1u); else { c.pc = 0x002D5760u; return; } if (c.pc != 0x002AC27Cu) [[unlikely]] return; }
L_002AC27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC284u);  if (depth < kMaxDepth) unit_0075(c, 266u, depth + 1u); else { c.pc = 0x002D5860u; return; } if (c.pc != 0x002AC284u) [[unlikely]] return; }
L_002AC284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC28Cu);  if (depth < kMaxDepth) unit_0078(c, 259u, depth + 1u); else { c.pc = 0x002E1CC0u; return; } if (c.pc != 0x002AC28Cu) [[unlikely]] return; }
L_002AC28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC294u);  if (depth < kMaxDepth) unit_0081(c, 527u, depth + 1u); else { c.pc = 0x00307150u; return; } if (c.pc != 0x002AC294u) [[unlikely]] return; }
L_002AC294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC29Cu);  if (depth < kMaxDepth) unit_0086(c, 68u, depth + 1u); else { c.pc = 0x00318940u; return; } if (c.pc != 0x002AC29Cu) [[unlikely]] return; }
L_002AC29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2A4u);  if (depth < kMaxDepth) unit_0088(c, 142u, depth + 1u); else { c.pc = 0x00321090u; return; } if (c.pc != 0x002AC2A4u) [[unlikely]] return; }
L_002AC2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2ACu);  if (depth < kMaxDepth) unit_0088(c, 277u, depth + 1u); else { c.pc = 0x003220A0u; return; } if (c.pc != 0x002AC2ACu) [[unlikely]] return; }
L_002AC2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2B4u);  if (depth < kMaxDepth) unit_0088(c, 324u, depth + 1u); else { c.pc = 0x003225E0u; return; } if (c.pc != 0x002AC2B4u) [[unlikely]] return; }
L_002AC2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2BCu);  if (depth < kMaxDepth) unit_006A(c, 172u, depth + 1u); else { c.pc = 0x002A99C0u; return; } if (c.pc != 0x002AC2BCu) [[unlikely]] return; }
L_002AC2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2C4u);  if (depth < kMaxDepth) unit_0083(c, 385u, depth + 1u); else { c.pc = 0x0030F000u; return; } if (c.pc != 0x002AC2C4u) [[unlikely]] return; }
L_002AC2C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2D8u); set32(c.r[5], c.r[5].w[0] - 1088u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC2D8u) [[unlikely]] return; }
L_002AC2D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21129u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2ECu); set32(c.r[5], c.r[5].w[0] + 3840u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC2ECu) [[unlikely]] return; }
L_002AC2EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21148u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC300u); set32(c.r[5], c.r[5].w[0] + 8096u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC300u) [[unlikely]] return; }
L_002AC300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21164u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC314u); set32(c.r[5], c.r[5].w[0] + 8800u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC314u) [[unlikely]] return; }
L_002AC314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21179u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC328u); set32(c.r[5], c.r[5].w[0] + 12736u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC328u) [[unlikely]] return; }
L_002AC328:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21201u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC33Cu); set32(c.r[5], c.r[5].w[0] + 16288u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC33Cu) [[unlikely]] return; }
L_002AC33C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21227u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC350u); set32(c.r[5], c.r[5].w[0] + 22464u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC350u) [[unlikely]] return; }
L_002AC350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21243u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC364u); set32(c.r[5], c.r[5].w[0] + 26144u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC364u) [[unlikely]] return; }
L_002AC364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21261u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC378u); set32(c.r[5], c.r[5].w[0] + 31040u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC378u) [[unlikely]] return; }
L_002AC378:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC38Cu); set32(c.r[5], c.r[5].w[0] + 32208u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC38Cu) [[unlikely]] return; }
L_002AC38C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], c.r[4].w[0] + 21290u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3A0u); set32(c.r[5], c.r[5].w[0] - 30144u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC3A0u) [[unlikely]] return; }
L_002AC3A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] + 21299u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3B4u); set32(c.r[5], c.r[5].w[0] + 3840u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC3B4u) [[unlikely]] return; }
L_002AC3B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3C8u); set32(c.r[5], c.r[5].w[0] + 32448u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC3C8u) [[unlikely]] return; }
L_002AC3C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], c.r[4].w[0] + 21338u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3DCu); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC3DCu) [[unlikely]] return; }
L_002AC3DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], c.r[4].w[0] + 21355u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3F0u); set32(c.r[5], c.r[5].w[0] - 10976u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC3F0u) [[unlikely]] return; }
L_002AC3F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] + 21380u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC404u); set32(c.r[5], c.r[5].w[0] - 24704u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC404u) [[unlikely]] return; }
L_002AC404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] + 21399u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC418u); set32(c.r[5], c.r[5].w[0] - 22672u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC418u) [[unlikely]] return; }
L_002AC418:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] + 21416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC42Cu); set32(c.r[5], c.r[5].w[0] - 14096u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC42Cu) [[unlikely]] return; }
L_002AC42C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] + 21428u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC440u); set32(c.r[5], c.r[5].w[0] - 12688u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC440u) [[unlikely]] return; }
L_002AC440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] + 21445u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC454u); set32(c.r[5], c.r[5].w[0] - 11632u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC454u) [[unlikely]] return; }
L_002AC454:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] + 21463u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC468u); set32(c.r[5], c.r[5].w[0] - 9680u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC468u) [[unlikely]] return; }
L_002AC468:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21477u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC47Cu); set32(c.r[5], c.r[5].w[0] - 25248u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC47Cu) [[unlikely]] return; }
L_002AC47C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC490u); set32(c.r[5], c.r[5].w[0] - 24208u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC490u) [[unlikely]] return; }
L_002AC490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21516u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4A4u); set32(c.r[5], c.r[5].w[0] - 19648u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC4A4u) [[unlikely]] return; }
L_002AC4A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21526u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4B8u); set32(c.r[5], c.r[5].w[0] - 22336u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC4B8u) [[unlikely]] return; }
L_002AC4B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21534u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4CCu); set32(c.r[5], c.r[5].w[0] - 20944u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC4CCu) [[unlikely]] return; }
L_002AC4CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21546u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4E0u); set32(c.r[5], c.r[5].w[0] + 21248u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC4E0u) [[unlikely]] return; }
L_002AC4E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] + 21565u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4F4u); set32(c.r[5], c.r[5].w[0] + 32448u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC4F4u) [[unlikely]] return; }
L_002AC4F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21572u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC508u); set32(c.r[5], c.r[5].w[0] + 11024u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC508u) [[unlikely]] return; }
L_002AC508:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21582u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC51Cu); set32(c.r[5], c.r[5].w[0] + 12736u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC51Cu) [[unlikely]] return; }
L_002AC51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21594u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC530u); set32(c.r[5], c.r[5].w[0] + 16288u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC530u) [[unlikely]] return; }
L_002AC530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21610u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC544u); set32(c.r[5], c.r[5].w[0] + 20384u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC544u) [[unlikely]] return; }
L_002AC544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 21645u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC558u); set32(c.r[5], c.r[5].w[0] + 24144u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC558u) [[unlikely]] return; }
L_002AC558:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC56Cu); set32(c.r[5], c.r[5].w[0] - 30544u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC56Cu) [[unlikely]] return; }
L_002AC56C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21670u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC580u); set32(c.r[5], c.r[5].w[0] - 23712u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC580u) [[unlikely]] return; }
L_002AC580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21685u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC594u); set32(c.r[5], c.r[5].w[0] - 17952u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC594u) [[unlikely]] return; }
L_002AC594:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5A8u); set32(c.r[5], c.r[5].w[0] - 7520u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC5A8u) [[unlikely]] return; }
L_002AC5A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21819u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5BCu); set32(c.r[5], c.r[5].w[0] - 14784u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC5BCu) [[unlikely]] return; }
L_002AC5BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21836u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5D0u); set32(c.r[5], c.r[5].w[0] - 13264u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC5D0u) [[unlikely]] return; }
L_002AC5D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5E4u); set32(c.r[5], c.r[5].w[0] - 4288u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC5E4u) [[unlikely]] return; }
L_002AC5E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[4].w[0] + 21744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5F8u); set32(c.r[5], c.r[5].w[0] + 1200u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC5F8u) [[unlikely]] return; }
L_002AC5F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC60Cu); set32(c.r[5], c.r[5].w[0] - 24192u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC60Cu) [[unlikely]] return; }
L_002AC60C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21771u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC620u); set32(c.r[5], c.r[5].w[0] - 21712u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC620u) [[unlikely]] return; }
L_002AC620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21786u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC634u); set32(c.r[5], c.r[5].w[0] - 19520u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC634u) [[unlikely]] return; }
L_002AC634:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21802u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC648u); set32(c.r[5], c.r[5].w[0] - 6000u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC648u) [[unlikely]] return; }
L_002AC648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21857u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC65Cu); set32(c.r[5], c.r[5].w[0] + 4752u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC65Cu) [[unlikely]] return; }
L_002AC65C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 22283u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC670u); set32(c.r[5], c.r[5].w[0] - 3552u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC670u) [[unlikely]] return; }
L_002AC670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21873u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC684u); set32(c.r[5], c.r[5].w[0] + 7968u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC684u) [[unlikely]] return; }
L_002AC684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 21892u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC698u); set32(c.r[5], c.r[5].w[0] + 9248u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC698u) [[unlikely]] return; }
L_002AC698:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[4].w[0] + 21904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6ACu); set32(c.r[5], c.r[5].w[0] + 31616u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC6ACu) [[unlikely]] return; }
L_002AC6AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], c.r[4].w[0] + 21922u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6C0u); set32(c.r[5], c.r[5].w[0] + 5248u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC6C0u) [[unlikely]] return; }
L_002AC6C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], c.r[4].w[0] + 21940u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6D4u); set32(c.r[5], c.r[5].w[0] + 6944u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC6D4u) [[unlikely]] return; }
L_002AC6D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], c.r[4].w[0] + 21959u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6E8u); set32(c.r[5], c.r[5].w[0] + 7968u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC6E8u) [[unlikely]] return; }
L_002AC6E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], c.r[4].w[0] + 21972u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6FCu); set32(c.r[5], c.r[5].w[0] + 14192u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC6FCu) [[unlikely]] return; }
L_002AC6FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], c.r[4].w[0] + 21996u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC710u); set32(c.r[5], c.r[5].w[0] + 25920u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC710u) [[unlikely]] return; }
L_002AC710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22012u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC724u); set32(c.r[5], c.r[5].w[0] - 21504u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC724u) [[unlikely]] return; }
L_002AC724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC738u); set32(c.r[5], c.r[5].w[0] - 4160u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC738u) [[unlikely]] return; }
L_002AC738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22043u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC74Cu); set32(c.r[5], c.r[5].w[0] - 2160u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC74Cu) [[unlikely]] return; }
L_002AC74C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22058u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC760u); set32(c.r[5], c.r[5].w[0] - 416u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC760u) [[unlikely]] return; }
L_002AC760:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC774u); set32(c.r[5], c.r[5].w[0] + 128u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC774u) [[unlikely]] return; }
L_002AC774:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22092u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC788u); set32(c.r[5], c.r[5].w[0] + 1968u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC788u) [[unlikely]] return; }
L_002AC788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC79Cu); set32(c.r[5], c.r[5].w[0] + 3680u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC79Cu) [[unlikely]] return; }
L_002AC79C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22126u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7B0u); set32(c.r[5], c.r[5].w[0] + 5504u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC7B0u) [[unlikely]] return; }
    goto L_002AC7B0;
L_002AC7AC:
    set32(c.r[5], c.r[5].w[0] + 5504u);
    c.budget -= 1;
L_002AC7B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22148u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7C4u); set32(c.r[5], c.r[5].w[0] + 6320u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC7C4u) [[unlikely]] return; }
L_002AC7C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22171u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7D8u); set32(c.r[5], c.r[5].w[0] + 8960u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC7D8u) [[unlikely]] return; }
L_002AC7D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 22191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7ECu); set32(c.r[5], c.r[5].w[0] + 10624u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC7ECu) [[unlikely]] return; }
L_002AC7EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 22263u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC800u); set32(c.r[5], c.r[5].w[0] - 4992u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC800u) [[unlikely]] return; }
L_002AC800:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 22209u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC814u); set32(c.r[5], c.r[5].w[0] + 3920u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC814u) [[unlikely]] return; }
L_002AC814:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 22226u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC828u); set32(c.r[5], c.r[5].w[0] + 7248u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC828u) [[unlikely]] return; }
L_002AC828:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[4].w[0] + 22247u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC83Cu); set32(c.r[5], c.r[5].w[0] + 3024u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x002AC83Cu) [[unlikely]] return; }
L_002AC83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC844u);  if (depth < kMaxDepth) unit_0070(c, 247u, depth + 1u); else { c.pc = 0x002C2110u; return; } if (c.pc != 0x002AC844u) [[unlikely]] return; }
L_002AC844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC84Cu);  if (depth < kMaxDepth) unit_0085(c, 70u, depth + 1u); else { c.pc = 0x00314DC0u; return; } if (c.pc != 0x002AC84Cu) [[unlikely]] return; }
L_002AC84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC854u);  if (depth < kMaxDepth) unit_005F(c, 103u, depth + 1u); else { c.pc = 0x0027DDF0u; return; } if (c.pc != 0x002AC854u) [[unlikely]] return; }
L_002AC854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC85Cu);  if (depth < kMaxDepth) unit_006C(c, 411u, depth + 1u); else { c.pc = 0x002B3200u; return; } if (c.pc != 0x002AC85Cu) [[unlikely]] return; }
L_002AC85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC864u);  if (depth < kMaxDepth) unit_0076(c, 203u, depth + 1u); else { c.pc = 0x002D9780u; return; } if (c.pc != 0x002AC864u) [[unlikely]] return; }
L_002AC864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC86Cu);  if (depth < kMaxDepth) unit_006B(c, 172u, depth + 1u); else { c.pc = 0x002ACE50u; return; } if (c.pc != 0x002AC86Cu) [[unlikely]] return; }
L_002AC86C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27616u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 21048u);
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27604u)));  goto L_002AC8EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC888u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AC888u) [[unlikely]] return; }
L_002AC888:
    st32((c.r[28].w[0] - 27616u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC8E8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8B8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC8B8u) [[unlikely]] return; }
L_002AC8B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC8C8u) [[unlikely]] return; }
L_002AC8C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC8E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8E8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AC8E8u) [[unlikely]] return; }
L_002AC8E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27604u)));
    c.budget -= 1;
L_002AC8EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20968u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27600u)));  goto L_002AC968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC904u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AC904u) [[unlikely]] return; }
L_002AC904:
    st32((c.r[28].w[0] - 27604u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC964; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC934u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC934u) [[unlikely]] return; }
L_002AC934:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC944u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC944u) [[unlikely]] return; }
L_002AC944:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC964; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC964u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AC964u) [[unlikely]] return; }
L_002AC964:
    set32(c.r[2], ld32((c.r[28].w[0] - 27600u)));
    c.budget -= 1;
L_002AC968:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 21064u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27596u)));  goto L_002AC9E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC980u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AC980u) [[unlikely]] return; }
L_002AC980:
    st32((c.r[28].w[0] - 27600u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AC9E0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9B0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AC9B0u) [[unlikely]] return; }
L_002AC9B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AC9C0u) [[unlikely]] return; }
L_002AC9C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AC9E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9E0u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AC9E0u) [[unlikely]] return; }
L_002AC9E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27596u)));
    c.budget -= 1;
L_002AC9E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 21080u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 8u);  goto L_002ACA60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9FCu); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AC9FCu) [[unlikely]] return; }
L_002AC9FC:
    st32((c.r[28].w[0] - 27596u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ACA5C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA2Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ACA2Cu) [[unlikely]] return; }
L_002ACA2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA3Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ACA3Cu) [[unlikely]] return; }
L_002ACA3C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ACA5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA5Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ACA5Cu) [[unlikely]] return; }
L_002ACA5C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_002ACA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002ACA68u) [[unlikely]] return; }
L_002ACA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ACAA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA84u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ACA84u) [[unlikely]] return; }
L_002ACA84:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA94u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ACA94u) [[unlikely]] return; }
L_002ACA94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14336u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002ACAA0:
    set32(c.r[17], ld32((c.r[28].w[0] - 27464u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002ACB0C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27464u), c.r[16].w[0]);  goto L_002ACAEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACABCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ACABCu) [[unlikely]] return; }
L_002ACABC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACACCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ACACCu) [[unlikely]] return; }
L_002ACACC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACAE8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACAE8u) [[unlikely]] return; }
L_002ACAE8:
    st32((c.r[28].w[0] - 27464u), c.r[16].w[0]);
    c.budget -= 1;
L_002ACAEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ACB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ACAFCu) [[unlikely]] return; }
L_002ACAFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ACB0Cu) [[unlikely]] return; }
L_002ACB0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 16496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB20u); set32(c.r[5], c.r[5].w[0] + 21032u);  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x002ACB20u) [[unlikely]] return; }
L_002ACB20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 16500u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB34u); set32(c.r[5], c.r[5].w[0] + 21016u);  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x002ACB34u) [[unlikely]] return; }
L_002ACB34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 16504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB48u); set32(c.r[5], c.r[5].w[0] + 21000u);  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x002ACB48u) [[unlikely]] return; }
L_002ACB48:
    set32(c.r[3], ld32((c.r[28].w[0] - 27560u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20984u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002ACBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB64u); st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ACB64u) [[unlikely]] return; }
L_002ACB64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 27560u), c.r[2].w[0]);  if (t) { goto L_002ACBC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB90u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ACB90u) [[unlikely]] return; }
L_002ACB90:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBA0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ACBA0u) [[unlikely]] return; }
L_002ACBA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002ACBC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBC0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ACBC0u) [[unlikely]] return; }
L_002ACBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002ACBC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ACBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[28].w[0] - 27668u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 27668u), c.r[2].w[0]);  if (t) { goto L_002ACC14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[4], c.r[4].w[0] - 15872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC14u); set32(c.r[5], c.r[5].w[0] - 17776u);  if (depth < kMaxDepth) unit_0047(c, 187u, depth + 1u); else { c.pc = 0x0021DBC0u; return; } if (c.pc != 0x002ACC14u) [[unlikely]] return; }
L_002ACC14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ACC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22304u);  c.pc = t; return; }
L_002ACC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 15232u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_002ACC58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ACC5C; } }
L_002ACC58:
    set32(c.r[2], c.r[2].w[0] + 15232u);
    c.budget -= 1;
L_002ACC5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ACC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002ACC94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 15232u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002ACCCC; } }
L_002ACC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC9Cu);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002ACC9Cu) [[unlikely]] return; }
L_002ACC9C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002ACCAC; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_002ACCAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCBCu); set32(c.r[4], c.r[4].w[0] + 15232u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002ACCBCu) [[unlikely]] return; }
L_002ACCBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACCCCu); set32(c.r[4], c.r[4].w[0] + 15232u);  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x002ACCCCu) [[unlikely]] return; }
L_002ACCCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ACCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27664u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 27664u), 0u);  goto L_002ACD08; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACD04u) [[unlikely]] return; }
L_002ACD04:
    st32((c.r[28].w[0] - 27664u), 0u);
    c.budget -= 1;
L_002ACD08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ACD20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002ACE30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11104u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_002ACD90; } }
L_002ACD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_002ACD78; } }
L_002ACD60:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD78u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACD78u) [[unlikely]] return; }
L_002ACD78:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACD60u | kUnwind; return; } goto L_002ACD60; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ACD90:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACD58u | kUnwind; return; } goto L_002ACD58; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_002ACE14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11072u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_002ACDF4; } }
L_002ACDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_002ACDDC; } }
L_002ACDC4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACDDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACDDCu) [[unlikely]] return; }
L_002ACDDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACDC4u | kUnwind; return; } goto L_002ACDC4; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ACDF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACDBCu | kUnwind; return; } goto L_002ACDBC; } }
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002ACE14u) [[unlikely]] return; }
L_002ACE14:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002ACE34; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE30u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002ACE30u) [[unlikely]] return; }
L_002ACE30:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002ACE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ACE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002ACE68u) [[unlikely]] return; }
L_002ACE68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ACEC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 37u);
    set32(c.r[3], c.r[3].w[0] + 11072u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE9Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002ACE9Cu) [[unlikely]] return; }
L_002ACE9C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEB4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002ACEB4u) [[unlikely]] return; }
L_002ACEB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 11104u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002ACEC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27664u), c.r[16].w[0]);
    st8((c.r[3].w[0] + 15232u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ACEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002ACF8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11072u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_002ACF50; } }
L_002ACF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_002ACF38; } }
L_002ACF20:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACF38u) [[unlikely]] return; }
L_002ACF38:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACF20u | kUnwind; return; } goto L_002ACF20; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ACF50:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACF18u | kUnwind; return; } goto L_002ACF18; } }
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002ACF70u) [[unlikely]] return; }
L_002ACF70:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002ACF90; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF8Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002ACF8Cu) [[unlikely]] return; }
L_002ACF8C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002ACF90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ACFB0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002ACFC4; } }
    breakpoint(c, 0x002ACFC0u);
    c.budget -= 1;
L_002ACFC4:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ACFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ACFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002AD194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11024u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27664u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002AD028; } }
    breakpoint(c, 0x002AD024u);
    c.budget -= 1;
L_002AD028:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 8u);  goto L_002AD0EC; }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[7], ld32((c.r[5].w[0])));  goto L_002AD078; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD068u) [[unlikely]] return; }
L_002AD068:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002AD0E8; } }
L_002AD078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AD084; } }
L_002AD080:
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 1;
L_002AD084:
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002AD0B0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD0B0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002AD0B0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD080u | kUnwind; return; } goto L_002AD080; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002AD0E8; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD0DCu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD0DCu) [[unlikely]] return; }
L_002AD0DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_002AD0E8:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_002AD0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD150; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD120u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD120u) [[unlikely]] return; }
L_002AD120:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD130u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD130u) [[unlikely]] return; }
L_002AD130:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD150; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD150u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AD150u) [[unlikely]] return; }
L_002AD150:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002AD17C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD168u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD168u) [[unlikely]] return; }
L_002AD168:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD178u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD178u) [[unlikely]] return; }
L_002AD178:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002AD17C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002AD198; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD194u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AD194u) [[unlikely]] return; }
L_002AD194:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002AD198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AD1C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD1F4u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD1F4u) [[unlikely]] return; }
L_002AD1F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD204u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD204u) [[unlikely]] return; }
L_002AD204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 11024u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_002AD240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD22Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD22Cu) [[unlikely]] return; }
L_002AD22C:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD23Cu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD23Cu) [[unlikely]] return; }
L_002AD23C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002AD240:
    set32(c.r[5], c.r[19].w[0] + 8u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 27664u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD254u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 182u, depth + 1u); else { c.pc = 0x002ACFB0u; return; } if (c.pc != 0x002AD254u) [[unlikely]] return; }
L_002AD254:
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_002AD2A4; } }
L_002AD268:
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD274u); set32(c.r[6], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_006B(c, 213u, depth + 1u); else { c.pc = 0x002AD410u; return; } if (c.pc != 0x002AD274u) [[unlikely]] return; }
L_002AD274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_002AD2A4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD288u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 212u, depth + 1u); else { c.pc = 0x002AD400u; return; } if (c.pc != 0x002AD288u) [[unlikely]] return; }
L_002AD288:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD29Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 206u, depth + 1u); else { c.pc = 0x002AD320u; return; } if (c.pc != 0x002AD29Cu) [[unlikely]] return; }
L_002AD29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002AD300; } }
L_002AD2A4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD268u | kUnwind; return; } goto L_002AD268; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD2BCu) [[unlikely]] return; }
L_002AD2BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2D4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 206u, depth + 1u); else { c.pc = 0x002AD320u; return; } if (c.pc != 0x002AD2D4u) [[unlikely]] return; }
L_002AD2D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
L_002AD300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AD320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002AD3D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002AD37C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD368u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD368u) [[unlikely]] return; }
L_002AD368:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD378u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD378u) [[unlikely]] return; }
L_002AD378:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002AD37C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0] + 4u), c.r[19].w[0]);  goto L_002AD3D0; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD39Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD39Cu) [[unlikely]] return; }
L_002AD39C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3ACu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD3ACu) [[unlikely]] return; }
L_002AD3AC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AD3CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3CCu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AD3CCu) [[unlikely]] return; }
L_002AD3CC:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_002AD3D0:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AD400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD410:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002AD430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AD4BC; } }
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD45Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AD45Cu) [[unlikely]] return; }
L_002AD45C:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002AD4C0; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD48Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD48Cu) [[unlikely]] return; }
L_002AD48C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD49Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD49Cu) [[unlikely]] return; }
L_002AD49C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD4BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD4BCu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AD4BCu) [[unlikely]] return; }
L_002AD4BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002AD4C0:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD4CCu); st32((c.r[18].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AD4CCu) [[unlikely]] return; }
L_002AD4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AD4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD508u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AD508u) [[unlikely]] return; }
L_002AD508:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD520u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002AD520u) [[unlikely]] return; }
L_002AD520:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AD540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002AD6F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 11136u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002AD5B8; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 44u);  goto L_002AD5BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD58Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD58Cu) [[unlikely]] return; }
L_002AD58C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD59Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD59Cu) [[unlikely]] return; }
L_002AD59C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD5B8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD5B8u) [[unlikely]] return; }
L_002AD5B8:
    set32(c.r[2], c.r[19].w[0] + 44u);
    c.budget -= 1;
L_002AD5BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 40u);  goto L_002AD624; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD620; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5F0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD5F0u) [[unlikely]] return; }
L_002AD5F0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD600u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD600u) [[unlikely]] return; }
L_002AD600:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD620; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD620u); set32(c.r[5], c.r[19].w[0] + 44u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AD620u) [[unlikely]] return; }
L_002AD620:
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 1;
L_002AD624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD62Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AD62Cu) [[unlikely]] return; }
L_002AD62C:
    set32(c.r[3], c.r[19].w[0] + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] + 8u);  goto L_002AD674; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11304u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002AD670; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[2], c.r[2].w[0] + 11288u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10304u);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD670u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002AD670u) [[unlikely]] return; }
L_002AD670:
    set32(c.r[3], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_002AD674:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD6B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11272u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002AD6B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[2], c.r[2].w[0] + 11256u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10464u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002AD6B4u) [[unlikely]] return; }
L_002AD6B4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002AD6E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6CCu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD6CCu) [[unlikely]] return; }
L_002AD6CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6DCu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD6DCu) [[unlikely]] return; }
L_002AD6DC:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002AD6E0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002AD6FC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6F8u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AD6F8u) [[unlikely]] return; }
L_002AD6F8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002AD6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AD720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AD79C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002AD784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD754u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD754u) [[unlikely]] return; }
L_002AD754:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD764u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD764u) [[unlikely]] return; }
L_002AD764:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD780; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD780u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD780u) [[unlikely]] return; }
L_002AD780:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002AD784:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002AD7A0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD79Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AD79Cu) [[unlikely]] return; }
L_002AD79C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AD7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AD7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AD83C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002AD824; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AD7F4u) [[unlikely]] return; }
L_002AD7F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD804u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AD804u) [[unlikely]] return; }
L_002AD804:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD820; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD820u) [[unlikely]] return; }
L_002AD820:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002AD824:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002AD840; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD83Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AD83Cu) [[unlikely]] return; }
L_002AD83C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AD840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AD860:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 40u);  [[clang::musttail]] return unit_0084(c, 45u, depth); }
L_002AD870:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[29].w[0] + 172u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AD8B4u) [[unlikely]] return; }
L_002AD8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002ADB64; } }
L_002AD8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 47u, depth + 1u); else { c.pc = 0x002B43F0u; return; } if (c.pc != 0x002AD8C4u) [[unlikely]] return; }
L_002AD8C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002AD908; } }
L_002AD8D8:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 279u, depth + 1u); else { c.pc = 0x002B6230u; return; } if (c.pc != 0x002AD8ECu) [[unlikely]] return; }
L_002AD8EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002AD908; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002AD904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD91C; } }
L_002AD904:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002AD908:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 34u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD8D8u | kUnwind; return; } goto L_002AD8D8; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AD91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADB58; } }
L_002AD924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD92Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 278u, depth + 1u); else { c.pc = 0x002B6220u; return; } if (c.pc != 0x002AD92Cu) [[unlikely]] return; }
L_002AD92C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002AD940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AD978; } }
L_002AD940:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD94Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD94Cu) [[unlikely]] return; }
L_002AD94C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23776u);  if (t) { goto L_002AD968; } }
L_002AD958:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002AD968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AD974; } }
L_002AD968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD958u | kUnwind; return; } goto L_002AD958; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AD974:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AD978:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002ADB08; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD990u); set32(c.r[5], c.r[5].w[0] + 22336u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AD990u) [[unlikely]] return; }
L_002AD990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AD998u) [[unlikely]] return; }
L_002AD998:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9A4u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AD9A4u) [[unlikely]] return; }
L_002AD9A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9B4u); set32(c.r[5], c.r[5].w[0] + 22345u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AD9B4u) [[unlikely]] return; }
L_002AD9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6240u; return; } if (c.pc != 0x002AD9BCu) [[unlikely]] return; }
L_002AD9BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 346u, depth + 1u); else { c.pc = 0x002B6950u; return; } if (c.pc != 0x002AD9C8u) [[unlikely]] return; }
L_002AD9C8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 22349u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002AD9E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002ADA10; } }
L_002AD9E4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002ADA10; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ADA00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADA10; } }
L_002ADA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA08u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002ADA08u) [[unlikely]] return; }
L_002ADA08:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002ADA10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002ADA6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002ADA20u) [[unlikely]] return; }
L_002ADA20:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA30u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002ADA30u) [[unlikely]] return; }
L_002ADA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA38u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002ADA38u) [[unlikely]] return; }
L_002ADA38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA44u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADA44u) [[unlikely]] return; }
L_002ADA44:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002ADA50u) [[unlikely]] return; }
L_002ADA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 244u, depth + 1u); else { c.pc = 0x002B5DC0u; return; } if (c.pc != 0x002ADA58u) [[unlikely]] return; }
L_002ADA58:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA64u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADA64u) [[unlikely]] return; }
L_002ADA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADAF4; } }
L_002ADA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA74u);  if (depth < kMaxDepth) unit_006D(c, 346u, depth + 1u); else { c.pc = 0x002B6950u; return; } if (c.pc != 0x002ADA74u) [[unlikely]] return; }
L_002ADA74:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 22356u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002ADA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002ADABC; } }
L_002ADA90:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002ADABC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ADAAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADABC; } }
L_002ADAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADAB4u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002ADAB4u) [[unlikely]] return; }
L_002ADAB4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002ADABC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002ADAE0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADADCu); set32(c.r[5], c.r[5].w[0] + 22364u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADADCu) [[unlikely]] return; }
L_002ADADC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002ADAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADAE8u);  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002ADAE8u) [[unlikely]] return; }
L_002ADAE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADAF4u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002ADAF4u) [[unlikely]] return; }
L_002ADAF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB04u); set32(c.r[5], c.r[5].w[0] + 22368u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADB04u) [[unlikely]] return; }
L_002ADB04:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002ADB08:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002ADB44; } }
L_002ADB14:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 279u, depth + 1u); else { c.pc = 0x002B6230u; return; } if (c.pc != 0x002ADB28u) [[unlikely]] return; }
L_002ADB28:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002ADB44; }
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[22].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002ADB40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADB58; } }
L_002ADB40:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002ADB44:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 34u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB14u | kUnwind; return; } goto L_002ADB14; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADB58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD924u | kUnwind; return; } goto L_002AD924; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002ADB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB6Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 48u, depth + 1u); else { c.pc = 0x002B4410u; return; } if (c.pc != 0x002ADB6Cu) [[unlikely]] return; }
L_002ADB6C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD8BCu | kUnwind; return; } goto L_002AD8BC; }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB84u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x002ADB84u) [[unlikely]] return; }
L_002ADB84:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002ADB90u) [[unlikely]] return; }
L_002ADB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[2].d[0] = 0ull + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002ADBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23624u);  c.pc = t; return; }
L_002ADBE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[30].d[0] == 0ull; st8((c.r[29].w[0] + 171u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002ADC80; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002ADC64; } }
L_002ADC34:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 279u, depth + 1u); else { c.pc = 0x002B6230u; return; } if (c.pc != 0x002ADC48u) [[unlikely]] return; }
L_002ADC48:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002ADC64; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002ADC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADC78; } }
L_002ADC60:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002ADC64:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADC34u | kUnwind; return; } goto L_002ADC34; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADCD0; } }
L_002ADC80:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002ADCBC; } }
L_002ADC8C:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6240u; return; } if (c.pc != 0x002ADCA0u) [[unlikely]] return; }
L_002ADCA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002ADCBC; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002ADCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADCD0; } }
L_002ADCB8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002ADCBC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADC8Cu | kUnwind; return; } goto L_002ADC8C; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ADE08; } }
L_002ADCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 277u, depth + 1u); else { c.pc = 0x002B6210u; return; } if (c.pc != 0x002ADCE4u) [[unlikely]] return; }
L_002ADCE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[23].d[0]) { c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));  goto L_002ADCF8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADCF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002ADD10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 94u, depth + 1u); else { c.pc = 0x00310B60u; return; } if (c.pc != 0x002ADD08u) [[unlikely]] return; }
L_002ADD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002ADE20; } }
L_002ADD10:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002ADDBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6240u; return; } if (c.pc != 0x002ADD20u) [[unlikely]] return; }
L_002ADD20:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 244u, depth + 1u); else { c.pc = 0x002B5DC0u; return; } if (c.pc != 0x002ADD2Cu) [[unlikely]] return; }
L_002ADD2C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[23].d[0]) { c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));  goto L_002ADD3C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADD3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002ADD90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002ADD4Cu) [[unlikely]] return; }
L_002ADD4C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD5Cu); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002ADD5Cu) [[unlikely]] return; }
L_002ADD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 244u, depth + 1u); else { c.pc = 0x002B5DC0u; return; } if (c.pc != 0x002ADD64u) [[unlikely]] return; }
L_002ADD64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD70u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002ADD70u) [[unlikely]] return; }
L_002ADD70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD7Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x002ADD7Cu) [[unlikely]] return; }
L_002ADD7C:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002ADD88u) [[unlikely]] return; }
L_002ADD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002ADE1C; } }
L_002ADD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD98u);  if (depth < kMaxDepth) unit_006D(c, 278u, depth + 1u); else { c.pc = 0x002B6220u; return; } if (c.pc != 0x002ADD98u) [[unlikely]] return; }
L_002ADD98:
    c.r[9].d[0] = ld8((c.r[29].w[0] + 171u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 283u, depth + 1u); else { c.pc = 0x002ADBE0u; return; } if (c.pc != 0x002ADDB4u) [[unlikely]] return; }
L_002ADDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADE1C; } }
L_002ADDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002ADDF4; } }
L_002ADDC4:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6240u; return; } if (c.pc != 0x002ADDD8u) [[unlikely]] return; }
L_002ADDD8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002ADDF4; }
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[22].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002ADDF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADE08; } }
L_002ADDF0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002ADDF4:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADDC4u | kUnwind; return; } goto L_002ADDC4; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADE08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADCDCu | kUnwind; return; } goto L_002ADCDC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADE1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002ADE1Cu) [[unlikely]] return; }
L_002ADE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002ADE20:
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
L_002ADE50:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[5], 0u + 1024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADE98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002ADE98u) [[unlikely]] return; }
L_002ADE98:
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEA4u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002ADEA4u) [[unlikely]] return; }
L_002ADEA4:
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEB0u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002ADEB0u) [[unlikely]] return; }
L_002ADEB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[5], c.r[5].w[0] + 22371u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEC4u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADEC4u) [[unlikely]] return; }
L_002ADEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADECCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 55u, depth + 1u); else { c.pc = 0x002B44F0u; return; } if (c.pc != 0x002ADECCu) [[unlikely]] return; }
L_002ADECC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADED8u); set32(c.r[4], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002ADED8u) [[unlikely]] return; }
L_002ADED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEE8u); set32(c.r[5], c.r[5].w[0] + 22376u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADEE8u) [[unlikely]] return; }
L_002ADEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEF0u); set32(c.r[4], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002ADEF0u) [[unlikely]] return; }
L_002ADEF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[22], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AE02C; } }
L_002ADF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 47u, depth + 1u); else { c.pc = 0x002B43F0u; return; } if (c.pc != 0x002ADF0Cu) [[unlikely]] return; }
L_002ADF0C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ADF28; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF24u); set32(c.r[5], c.r[5].w[0] + 22378u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADF24u) [[unlikely]] return; }
L_002ADF24:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 1;
L_002ADF28:
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF44u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 283u, depth + 1u); else { c.pc = 0x002ADBE0u; return; } if (c.pc != 0x002ADF44u) [[unlikely]] return; }
L_002ADF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF4Cu); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0084(c, 84u, depth + 1u); else { c.pc = 0x00310A20u; return; } if (c.pc != 0x002ADF4Cu) [[unlikely]] return; }
L_002ADF4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_002ADFC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF5Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 244u, depth + 1u); else { c.pc = 0x002B5DC0u; return; } if (c.pc != 0x002ADF5Cu) [[unlikely]] return; }
L_002ADF5C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[22].d[0]) { c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));  goto L_002ADF6C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF7Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002ADF7Cu) [[unlikely]] return; }
L_002ADF7C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF8Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002ADF8Cu) [[unlikely]] return; }
L_002ADF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF94u); set32(c.r[4], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002ADF94u) [[unlikely]] return; }
L_002ADF94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFA0u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0084(c, 45u, depth + 1u); else { c.pc = 0x003104E0u; return; } if (c.pc != 0x002ADFA0u) [[unlikely]] return; }
L_002ADFA0:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002ADFACu) [[unlikely]] return; }
L_002ADFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFB4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 244u, depth + 1u); else { c.pc = 0x002B5DC0u; return; } if (c.pc != 0x002ADFB4u) [[unlikely]] return; }
L_002ADFB4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFC0u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADFC0u) [[unlikely]] return; }
L_002ADFC0:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_002ADFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFCCu);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002ADFCCu) [[unlikely]] return; }
L_002ADFCC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_002AE000; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFECu); set32(c.r[5], c.r[5].w[0] + 22381u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002ADFECu) [[unlikely]] return; }
L_002ADFEC:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADFF8u); set32(c.r[17], 0u + 8u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002ADFF8u) [[unlikely]] return; }
L_002ADFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_002AE00C; } }
L_002AE000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE008u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002AE008u) [[unlikely]] return; }
L_002AE008:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002AE00C:
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE018u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AE018u) [[unlikely]] return; }
L_002AE018:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE028u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE028u) [[unlikely]] return; }
L_002AE028:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AE02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE034u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 48u, depth + 1u); else { c.pc = 0x002B4410u; return; } if (c.pc != 0x002AE034u) [[unlikely]] return; }
L_002AE034:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADF04u | kUnwind; return; } goto L_002ADF04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AE234; } }
L_002AE048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE050u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 18u, depth + 1u); else { c.pc = 0x002B4110u; return; } if (c.pc != 0x002AE050u) [[unlikely]] return; }
L_002AE050:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AE06C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE068u); set32(c.r[5], c.r[5].w[0] + 22378u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE068u) [[unlikely]] return; }
L_002AE068:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 1;
L_002AE06C:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE088u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 283u, depth + 1u); else { c.pc = 0x002ADBE0u; return; } if (c.pc != 0x002AE088u) [[unlikely]] return; }
L_002AE088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE090u); set32(c.r[4], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_0084(c, 84u, depth + 1u); else { c.pc = 0x00310A20u; return; } if (c.pc != 0x002AE090u) [[unlikely]] return; }
L_002AE090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 492u);  goto L_002AE1CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AE0A0u) [[unlikely]] return; }
L_002AE0A0:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] + 22391u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0BCu); c.r[8].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002AE0BCu) [[unlikely]] return; }
L_002AE0BC:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0C8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0084(c, 43u, depth + 1u); else { c.pc = 0x003104A0u; return; } if (c.pc != 0x002AE0C8u) [[unlikely]] return; }
L_002AE0C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0D8u); set32(c.r[5], c.r[5].w[0] + 22371u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE0D8u) [[unlikely]] return; }
L_002AE0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0E0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002AE0E0u) [[unlikely]] return; }
L_002AE0E0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0F0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002AE0F0u) [[unlikely]] return; }
L_002AE0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0F8u); set32(c.r[4], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE0F8u) [[unlikely]] return; }
L_002AE0F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE104u); set32(c.r[4], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE104u) [[unlikely]] return; }
L_002AE104:
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE110u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE110u) [[unlikely]] return; }
L_002AE110:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE120u); set32(c.r[5], c.r[5].w[0] + 22404u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE120u) [[unlikely]] return; }
L_002AE120:
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE12Cu); set32(c.r[5], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AE12Cu) [[unlikely]] return; }
L_002AE12C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE13Cu); set32(c.r[5], c.r[5].w[0] + 22368u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE13Cu) [[unlikely]] return; }
L_002AE13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE144u); set32(c.r[4], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE144u) [[unlikely]] return; }
L_002AE144:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AE154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002AE15C; } }
L_002AE154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE15Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AE15Cu) [[unlikely]] return; }
L_002AE15C:
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE174u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 162u, depth + 1u); else { c.pc = 0x002B0F40u; return; } if (c.pc != 0x002AE174u) [[unlikely]] return; }
L_002AE174:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002AE1C8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[21], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE198u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AE198u) [[unlikely]] return; }
L_002AE198:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1A8u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AE1A8u) [[unlikely]] return; }
L_002AE1A8:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AE1C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1C8u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AE1C8u) [[unlikely]] return; }
L_002AE1C8:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 1;
L_002AE1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1D4u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002AE1D4u) [[unlikely]] return; }
L_002AE1D4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 492u);  goto L_002AE208; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1F4u); set32(c.r[5], c.r[5].w[0] + 22381u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE1F4u) [[unlikely]] return; }
L_002AE1F4:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE200u); set32(c.r[17], 0u + 8u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002AE200u) [[unlikely]] return; }
L_002AE200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_002AE214; } }
L_002AE208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE210u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x002AE210u) [[unlikely]] return; }
L_002AE210:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002AE214:
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE220u); set32(c.r[5], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AE220u) [[unlikely]] return; }
L_002AE220:
    set32(c.r[4], c.r[29].w[0] + 492u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE230u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE230u) [[unlikely]] return; }
L_002AE230:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AE234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE23Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 19u, depth + 1u); else { c.pc = 0x002B4130u; return; } if (c.pc != 0x002AE23Cu) [[unlikely]] return; }
L_002AE23C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE048u | kUnwind; return; } goto L_002AE048; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE258u); set32(c.r[5], c.r[5].w[0] + 22406u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE258u) [[unlikely]] return; }
L_002AE258:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE270u); set32(c.r[6], c.r[6].w[0] + 22409u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002AE270u) [[unlikely]] return; }
L_002AE270:
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE27Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x002AE27Cu) [[unlikely]] return; }
L_002AE27C:
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE288u); set32(c.r[5], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AE288u) [[unlikely]] return; }
L_002AE288:
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE294u); set32(c.r[5], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AE294u) [[unlikely]] return; }
L_002AE294:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE2A4u); set32(c.r[5], c.r[5].w[0] + 22432u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE2A4u) [[unlikely]] return; }
L_002AE2A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE2B0u); set32(c.r[5], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x002AE2B0u) [[unlikely]] return; }
L_002AE2B0:
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE2BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE2BCu) [[unlikely]] return; }
L_002AE2BC:
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE2C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE2C8u) [[unlikely]] return; }
L_002AE2C8:
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE2D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE2D4u) [[unlikely]] return; }
L_002AE2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[2].d[0] = 0ull + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_002AE310:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 11168u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 68u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE368u); st32((c.r[29].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002AE368u) [[unlikely]] return; }
L_002AE368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002AE468; } }
L_002AE370:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[16], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 247u, depth + 1u); else { c.pc = 0x002B5DF0u; return; } if (c.pc != 0x002AE388u) [[unlikely]] return; }
L_002AE388:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE39Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE39Cu) [[unlikely]] return; }
L_002AE39C:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 128u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0])));  if (t) { goto L_002AE3C0; } }
L_002AE3B4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[18], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
L_002AE3C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002AE3D0; } }
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[2], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE3B4u | kUnwind; return; } goto L_002AE3B4; }
L_002AE3D0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_002AE420; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE3ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE3ECu) [[unlikely]] return; }
L_002AE3EC:
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  goto L_002AE40C; }
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002AE40C:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 220u), c.r[3].w[0]);  if (t) { goto L_002AE460; } }
L_002AE420:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE430u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE430u) [[unlikely]] return; }
L_002AE430:
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  goto L_002AE450; }
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002AE450:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    c.budget -= 4;
L_002AE460:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002AE468:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE370u | kUnwind; return; } goto L_002AE370; }
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE484u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AE484u) [[unlikely]] return; }
L_002AE484:
    set32(c.r[19], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE494u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AE494u) [[unlikely]] return; }
L_002AE494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AE5C4; } }
L_002AE49C:
    set32(c.r[16], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE4ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 247u, depth + 1u); else { c.pc = 0x002B5DF0u; return; } if (c.pc != 0x002AE4ACu) [[unlikely]] return; }
L_002AE4AC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE4C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE4C4u) [[unlikely]] return; }
L_002AE4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE4CCu); set32(c.r[4], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE4CCu) [[unlikely]] return; }
L_002AE4CC:
    set32(c.r[4], c.r[29].w[0] + 244u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE4D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 82u, depth + 1u); else { c.pc = 0x003109C0u; return; } if (c.pc != 0x002AE4D8u) [[unlikely]] return; }
L_002AE4D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_002AE4E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002AE4F4; } }
L_002AE4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE4F0u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_0084(c, 48u, depth + 1u); else { c.pc = 0x00310520u; return; } if (c.pc != 0x002AE4F0u) [[unlikely]] return; }
L_002AE4F0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE4F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE504u); set32(c.r[5], c.r[5].w[0] + 22371u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE504u) [[unlikely]] return; }
L_002AE504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE50Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002AE50Cu) [[unlikely]] return; }
L_002AE50C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE51Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002AE51Cu) [[unlikely]] return; }
L_002AE51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE524u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE524u) [[unlikely]] return; }
L_002AE524:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE530u); set32(c.r[4], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE530u) [[unlikely]] return; }
L_002AE530:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE53Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE53Cu) [[unlikely]] return; }
L_002AE53C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE54Cu); set32(c.r[5], c.r[5].w[0] + 22404u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE54Cu) [[unlikely]] return; }
L_002AE54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AE554u) [[unlikely]] return; }
L_002AE554:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE560u); set32(c.r[4], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AE560u) [[unlikely]] return; }
L_002AE560:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE570u); set32(c.r[5], c.r[5].w[0] + 22434u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE570u) [[unlikely]] return; }
L_002AE570:
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE57Cu); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AE57Cu) [[unlikely]] return; }
L_002AE57C:
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE588u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 55u, depth + 1u); else { c.pc = 0x00310600u; return; } if (c.pc != 0x002AE588u) [[unlikely]] return; }
L_002AE588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE590u); set32(c.r[4], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE590u) [[unlikely]] return; }
L_002AE590:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE59Cu); set32(c.r[4], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE59Cu) [[unlikely]] return; }
L_002AE59C:
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE5A8u) [[unlikely]] return; }
L_002AE5A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5B8u); set32(c.r[5], c.r[5].w[0] + 22368u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE5B8u) [[unlikely]] return; }
L_002AE5B8:
    set32(c.r[4], c.r[29].w[0] + 244u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE5C4u) [[unlikely]] return; }
L_002AE5C4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE49Cu | kUnwind; return; } goto L_002AE49C; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5D8u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x002AE5D8u) [[unlikely]] return; }
L_002AE5D8:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE5E4u) [[unlikely]] return; }
L_002AE5E4:
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE5F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AE5F0u) [[unlikely]] return; }
L_002AE5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + 11200u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002AE618; } }
L_002AE604:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE618u); set32(c.r[16], ld32((c.r[16].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE618u) [[unlikely]] return; }
L_002AE618:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE604u | kUnwind; return; } goto L_002AE604; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 220u), 0u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 216u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002AE670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AE708; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11168u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002AE6EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11200u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_002AE6C8; } }
L_002AE6B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE6C8u) [[unlikely]] return; }
L_002AE6C8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE6B4u | kUnwind; return; } goto L_002AE6B4; }
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_002AE6EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AE6EC:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002AE70C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE708u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AE708u) [[unlikely]] return; }
L_002AE708:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AE70C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AE730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AE7B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11200u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_002AE778; } }
L_002AE764:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE778u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AE778u) [[unlikely]] return; }
L_002AE778:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE764u | kUnwind; return; } goto L_002AE764; }
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_002AE79C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AE79C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002AE7BC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7B8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AE7B8u) [[unlikely]] return; }
L_002AE7B8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002AE7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AE7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002AE81C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 11232u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002AE818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE818u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AE818u) [[unlikely]] return; }
L_002AE818:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AE81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE848u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002AE848u) [[unlikely]] return; }
L_002AE848:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_002AE91C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE878u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002AE878u) [[unlikely]] return; }
L_002AE878:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE890u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002AE890u) [[unlikely]] return; }
L_002AE890:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_002AE8B0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE8B0u | kUnwind; return; } goto L_002AE8B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_002AE904; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_002AE90C; } }
L_002AE904:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_002AE90C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_002AE91C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE93Cu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002AE93Cu) [[unlikely]] return; }
L_002AE93C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AE950:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 140u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE990u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AE990u) [[unlikely]] return; }
L_002AE990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 374u, depth + 1u); else { c.pc = 0x002B2BD0u; return; } if (c.pc != 0x002AE998u) [[unlikely]] return; }
L_002AE998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE9A0u) [[unlikely]] return; }
L_002AE9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE9E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9B8u); set32(c.r[5], c.r[5].w[0] + 22438u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE9B8u) [[unlikely]] return; }
L_002AE9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 374u, depth + 1u); else { c.pc = 0x002B2BD0u; return; } if (c.pc != 0x002AE9C0u) [[unlikely]] return; }
L_002AE9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AE9C8u) [[unlikely]] return; }
L_002AE9C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9D4u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE9D4u) [[unlikely]] return; }
L_002AE9D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9E4u); set32(c.r[5], c.r[5].w[0] + 22442u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE9E4u) [[unlikely]] return; }
L_002AE9E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9F4u); set32(c.r[5], c.r[5].w[0] + 22447u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AE9F4u) [[unlikely]] return; }
L_002AE9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 55u, depth + 1u); else { c.pc = 0x002B44F0u; return; } if (c.pc != 0x002AE9FCu) [[unlikely]] return; }
L_002AE9FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA08u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AEA08u) [[unlikely]] return; }
L_002AEA08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA18u); set32(c.r[5], c.r[5].w[0] + 22376u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEA18u) [[unlikely]] return; }
L_002AEA18:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002AEA80; } }
L_002AEA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA2Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 47u, depth + 1u); else { c.pc = 0x002B43F0u; return; } if (c.pc != 0x002AEA2Cu) [[unlikely]] return; }
L_002AEA2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AEA44; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA44u); set32(c.r[5], c.r[5].w[0] + 22454u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEA44u) [[unlikely]] return; }
L_002AEA44:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 473u, depth + 1u); else { c.pc = 0x002AEC80u; return; } if (c.pc != 0x002AEA58u) [[unlikely]] return; }
L_002AEA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA60u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AEA60u) [[unlikely]] return; }
L_002AEA60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA6Cu); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEA6Cu) [[unlikely]] return; }
L_002AEA6C:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AEA78u) [[unlikely]] return; }
L_002AEA78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_002AEA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 48u, depth + 1u); else { c.pc = 0x002B4410u; return; } if (c.pc != 0x002AEA88u) [[unlikely]] return; }
L_002AEA88:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA24u | kUnwind; return; } goto L_002AEA24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002AEB08; } }
L_002AEA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAA4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 18u, depth + 1u); else { c.pc = 0x002B4110u; return; } if (c.pc != 0x002AEAA4u) [[unlikely]] return; }
L_002AEAA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AEABC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEABCu); set32(c.r[5], c.r[5].w[0] + 22454u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEABCu) [[unlikely]] return; }
L_002AEABC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEACCu); set32(c.r[5], c.r[5].w[0] + 22461u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEACCu) [[unlikely]] return; }
L_002AEACC:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 473u, depth + 1u); else { c.pc = 0x002AEC80u; return; } if (c.pc != 0x002AEAE0u) [[unlikely]] return; }
L_002AEAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAE8u); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AEAE8u) [[unlikely]] return; }
L_002AEAE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAF4u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEAF4u) [[unlikely]] return; }
L_002AEAF4:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AEB00u) [[unlikely]] return; }
L_002AEB00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_002AEB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 19u, depth + 1u); else { c.pc = 0x002B4130u; return; } if (c.pc != 0x002AEB10u) [[unlikely]] return; }
L_002AEB10:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA9Cu | kUnwind; return; } goto L_002AEA9C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB2Cu); set32(c.r[5], c.r[5].w[0] + 22466u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEB2Cu) [[unlikely]] return; }
L_002AEB2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB3Cu); set32(c.r[5], c.r[5].w[0] + 22469u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEB3Cu) [[unlikely]] return; }
L_002AEB3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AEB50u) [[unlikely]] return; }
L_002AEB50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AEB64; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002AEB6C; } }
L_002AEB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB6Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AEB6Cu) [[unlikely]] return; }
L_002AEB6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 44u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB84u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006C(c, 375u, depth + 1u); else { c.pc = 0x002B2BE0u; return; } if (c.pc != 0x002AEB84u) [[unlikely]] return; }
L_002AEB84:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002AEBE8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBB4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AEBB4u) [[unlikely]] return; }
L_002AEBB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBC4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AEBC4u) [[unlikely]] return; }
L_002AEBC4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AEBE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBE4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AEBE4u) [[unlikely]] return; }
L_002AEBE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002AEBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBF0u);  if (depth < kMaxDepth) unit_0062(c, 147u, depth + 1u); else { c.pc = 0x00289490u; return; } if (c.pc != 0x002AEBF0u) [[unlikely]] return; }
L_002AEBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AEBF8u) [[unlikely]] return; }
L_002AEBF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC04u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEC04u) [[unlikely]] return; }
L_002AEC04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC14u); set32(c.r[5], c.r[5].w[0] + 22472u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEC14u) [[unlikely]] return; }
L_002AEC14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC24u); set32(c.r[5], c.r[5].w[0] + 22476u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEC24u) [[unlikely]] return; }
L_002AEC24:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC30u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x002AEC30u) [[unlikely]] return; }
L_002AEC30:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AEC3Cu) [[unlikely]] return; }
L_002AEC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002AEC70:
    c.budget -= 2;
    { c.r[5].d[0] = c.r[6].d[0] + 0ull;  [[clang::musttail]] return unit_0084(c, 94u, depth); }
L_002AEC80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECB8u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AECB8u) [[unlikely]] return; }
L_002AECB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002AECC0u) [[unlikely]] return; }
L_002AECC0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECD0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002AECD0u) [[unlikely]] return; }
L_002AECD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECD8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AECD8u) [[unlikely]] return; }
L_002AECD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECE4u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AECE4u) [[unlikely]] return; }
L_002AECE4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AECF0u) [[unlikely]] return; }
L_002AECF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED00u); set32(c.r[5], c.r[5].w[0] + 22404u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AED00u) [[unlikely]] return; }
L_002AED00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED08u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AED08u) [[unlikely]] return; }
L_002AED08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED14u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AED14u) [[unlikely]] return; }
L_002AED14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 243u, depth + 1u); else { c.pc = 0x002B5DB0u; return; } if (c.pc != 0x002AED1Cu) [[unlikely]] return; }
L_002AED1C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002AED74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 243u, depth + 1u); else { c.pc = 0x002B5DB0u; return; } if (c.pc != 0x002AED30u) [[unlikely]] return; }
L_002AED30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED48u); set32(c.r[6], c.r[6].w[0] + 22555u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002AED48u) [[unlikely]] return; }
L_002AED48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED58u); set32(c.r[5], c.r[5].w[0] + 22558u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AED58u) [[unlikely]] return; }
L_002AED58:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED64u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x002AED64u) [[unlikely]] return; }
L_002AED64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED74u); set32(c.r[5], c.r[5].w[0] + 22560u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AED74u) [[unlikely]] return; }
L_002AED74:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002AEF04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED84u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 247u, depth + 1u); else { c.pc = 0x002B5DF0u; return; } if (c.pc != 0x002AED84u) [[unlikely]] return; }
L_002AED84:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_002AEDB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AEDA4u) [[unlikely]] return; }
L_002AEDA4:
    set32(c.r[2], ld32((c.r[18].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDB4u); st32((c.r[18].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AEDB4u) [[unlikely]] return; }
L_002AEDB4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002AEDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_002AEDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEDCC; } }
L_002AEDC8:
    c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));
    c.budget -= 1;
L_002AEDCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 136u)));  goto L_002AEEB0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDE4u); set32(c.r[5], c.r[5].w[0] + 22434u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEDE4u) [[unlikely]] return; }
L_002AEDE4:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDF0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AEDF0u) [[unlikely]] return; }
L_002AEDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002AEDF8u) [[unlikely]] return; }
L_002AEDF8:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AEE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AEE0Cu) [[unlikely]] return; }
L_002AEE0C:
    set32(c.r[2], ld32((c.r[18].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE1Cu); st32((c.r[18].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AEE1Cu) [[unlikely]] return; }
L_002AEE1C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_002AEE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AEE34; } }
L_002AEE30:
    c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));
    c.budget -= 1;
L_002AEE34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_002AEE5C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE4Cu); set32(c.r[5], c.r[5].w[0] + 22562u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEE4Cu) [[unlikely]] return; }
L_002AEE4C:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE58u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AEE58u) [[unlikely]] return; }
L_002AEE58:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_002AEE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002AEEAC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE7Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AEE7Cu) [[unlikely]] return; }
L_002AEE7C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE8Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AEE8Cu) [[unlikely]] return; }
L_002AEE8C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AEEAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEEACu); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AEEACu) [[unlikely]] return; }
L_002AEEAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_002AEEB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002AEF00; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEED0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AEED0u) [[unlikely]] return; }
L_002AEED0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEEE0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AEEE0u) [[unlikely]] return; }
L_002AEEE0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AEF00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF00u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AEF00u) [[unlikely]] return; }
L_002AEF00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AEF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF0Cu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x002AEF0Cu) [[unlikely]] return; }
L_002AEF0C:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AEF18u) [[unlikely]] return; }
L_002AEF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002AEF40:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 34u));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_002AEF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 92u, depth); } }
L_002AEF88:
    set32(c.r[4], c.r[29].w[0] + 428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF94u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AEF94u) [[unlikely]] return; }
L_002AEF94:
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFA0u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AEFA0u) [[unlikely]] return; }
L_002AEFA0:
    set32(c.r[4], c.r[29].w[0] + 420u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFACu); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AEFACu) [[unlikely]] return; }
L_002AEFAC:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFB8u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AEFB8u) [[unlikely]] return; }
L_002AEFB8:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFC4u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0084(c, 100u, depth + 1u); else { c.pc = 0x00310C40u; return; } if (c.pc != 0x002AEFC4u) [[unlikely]] return; }
L_002AEFC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFD4u); set32(c.r[5], c.r[5].w[0] + 22564u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEFD4u) [[unlikely]] return; }
L_002AEFD4:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFE0u); set32(c.r[5], c.r[20].w[0] + 40u);  if (depth < kMaxDepth) unit_0084(c, 41u, depth + 1u); else { c.pc = 0x00310470u; return; } if (c.pc != 0x002AEFE0u) [[unlikely]] return; }
L_002AEFE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEFF0u); set32(c.r[5], c.r[5].w[0] + 22588u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AEFF0u) [[unlikely]] return; }
L_002AEFF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF000u); set32(c.r[5], c.r[5].w[0] + 22594u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF000u) [[unlikely]] return; }
L_002AF000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF010u); set32(c.r[5], c.r[5].w[0] + 22775u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF010u) [[unlikely]] return; }
L_002AF010:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF020u); set32(c.r[5], c.r[5].w[0] + 22947u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF020u) [[unlikely]] return; }
L_002AF020:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF030u); set32(c.r[5], c.r[5].w[0] + 23115u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF030u) [[unlikely]] return; }
L_002AF030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF040u); set32(c.r[5], c.r[5].w[0] + 23131u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF040u) [[unlikely]] return; }
L_002AF040:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF050u); set32(c.r[5], c.r[5].w[0] + 23300u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF050u) [[unlikely]] return; }
L_002AF050:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF060u); set32(c.r[5], c.r[5].w[0] + 23317u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF060u) [[unlikely]] return; }
L_002AF060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF070u); set32(c.r[5], c.r[5].w[0] + 23486u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF070u) [[unlikely]] return; }
L_002AF070:
    st32((c.r[29].w[0] + 304u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 312u), 0u);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 292u), 0u);
    st32((c.r[29].w[0] + 296u), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    st32((c.r[29].w[0] + 276u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), 0u);  if (t) { goto L_002AF118; } }
L_002AF09C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002AF118; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002AF0F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF0C0u) [[unlikely]] return; }
L_002AF0C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF0D0u) [[unlikely]] return; }
L_002AF0D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF0EC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF0ECu) [[unlikely]] return; }
L_002AF0EC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002AF0F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AF114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF104u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF104u) [[unlikely]] return; }
L_002AF104:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF114u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF114u) [[unlikely]] return; }
L_002AF114:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002AF118:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF09Cu | kUnwind; return; } goto L_002AF09C; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 264u), 0u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 244u), 0u);
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), 0u);  if (t) { goto L_002AF218; } }
L_002AF158:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 392u), c.r[2].w[0]);  if (t) { goto L_002AF188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF174u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF174u) [[unlikely]] return; }
L_002AF174:
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF188u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF188u) [[unlikely]] return; }
L_002AF188:
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 248u)));  goto L_002AF1B0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002AF1A4; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002AF1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1ACu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006C(c, 116u, depth + 1u); else { c.pc = 0x002B0A30u; return; } if (c.pc != 0x002AF1ACu) [[unlikely]] return; }
L_002AF1AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_002AF1B0:
    set32(c.r[5], c.r[29].w[0] + 392u);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 248u), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1CCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 110u, depth + 1u); else { c.pc = 0x002B0980u; return; } if (c.pc != 0x002AF1CCu) [[unlikely]] return; }
L_002AF1CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002AF218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF1E0u) [[unlikely]] return; }
L_002AF1E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF1F4u) [[unlikely]] return; }
L_002AF1F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF214; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF214u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF214u) [[unlikely]] return; }
L_002AF214:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AF218:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 18u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF158u | kUnwind; return; } goto L_002AF158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 248u)));  if (t) { goto L_002AF58C; } }
L_002AF230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AF578; } }
L_002AF238:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AF380; } }
L_002AF250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF258u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 47u, depth + 1u); else { c.pc = 0x002B43F0u; return; } if (c.pc != 0x002AF258u) [[unlikely]] return; }
L_002AF258:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AF29C; } }
L_002AF268:
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF27Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 279u, depth + 1u); else { c.pc = 0x002B6230u; return; } if (c.pc != 0x002AF27Cu) [[unlikely]] return; }
L_002AF27C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002AF29C; }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_002AF298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF2B0; } }
L_002AF298:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002AF29C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 34u));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF268u | kUnwind; return; } goto L_002AF268; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF2B0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002AF380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 278u, depth + 1u); else { c.pc = 0x002B6220u; return; } if (c.pc != 0x002AF2C0u) [[unlikely]] return; }
L_002AF2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 388u), c.r[2].w[0]);  if (t) { goto L_002AF2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF2D0u) [[unlikely]] return; }
L_002AF2D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2E4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF2E4u) [[unlikely]] return; }
L_002AF2E4:
    set32(c.r[5], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002AF310; } }
L_002AF2F8:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002AF310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 388u)));  if (t) { goto L_002AF324; } }
L_002AF310:
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF2F8u | kUnwind; return; } goto L_002AF2F8; }
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    c.budget -= 2;
L_002AF324:
    c.r[3].d[0] = ~(c.r[6].d[0] | 0ull);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002AF36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF338u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF338u) [[unlikely]] return; }
L_002AF338:
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF34Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF34Cu) [[unlikely]] return; }
L_002AF34C:
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF36C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF36Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF36Cu) [[unlikely]] return; }
L_002AF36C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AF37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_002AF394; } }
L_002AF37C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AF380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF388u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 48u, depth + 1u); else { c.pc = 0x002B4410u; return; } if (c.pc != 0x002AF388u) [[unlikely]] return; }
L_002AF388:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF250u | kUnwind; return; } goto L_002AF250; }
L_002AF394:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002AF578; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 384u), c.r[22].w[0]);  if (t) { goto L_002AF3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF3ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF3ACu) [[unlikely]] return; }
L_002AF3AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF3C0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF3C0u) [[unlikely]] return; }
L_002AF3C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 264u)));  goto L_002AF3E8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002AF3DC; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002AF3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF3E4u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006C(c, 116u, depth + 1u); else { c.pc = 0x002B0A30u; return; } if (c.pc != 0x002AF3E4u) [[unlikely]] return; }
L_002AF3E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_002AF3E8:
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 264u), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF404u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 110u, depth + 1u); else { c.pc = 0x002B0980u; return; } if (c.pc != 0x002AF404u) [[unlikely]] return; }
L_002AF404:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_002AF4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF418u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF418u) [[unlikely]] return; }
L_002AF418:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF42Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF42Cu) [[unlikely]] return; }
L_002AF42C:
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF44C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF44Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF44Cu) [[unlikely]] return; }
L_002AF44C:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF4E0; } }
L_002AF458:
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[22], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[21], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[22].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 9;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002AF4E0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0])));  goto L_002AF4BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF48Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF48Cu) [[unlikely]] return; }
L_002AF48C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF49Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF49Cu) [[unlikely]] return; }
L_002AF49C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF4B8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF4B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF4B8u) [[unlikely]] return; }
L_002AF4B8:
    set32(c.r[16], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002AF4BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[22].w[0]), c.r[16].w[0]);  if (t) { goto L_002AF4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF4CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF4CCu) [[unlikely]] return; }
L_002AF4CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF4DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF4DCu) [[unlikely]] return; }
L_002AF4DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002AF4E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF458u | kUnwind; return; } goto L_002AF458; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AF574; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002AF550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF520u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF520u) [[unlikely]] return; }
L_002AF520:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF530u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF530u) [[unlikely]] return; }
L_002AF530:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF54C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF54Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF54Cu) [[unlikely]] return; }
L_002AF54C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002AF550:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AF574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF564u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF564u) [[unlikely]] return; }
L_002AF564:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF574u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF574u) [[unlikely]] return; }
L_002AF574:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002AF578:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 240u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF238u | kUnwind; return; } goto L_002AF238; }
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_002AF58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF230u | kUnwind; return; } goto L_002AF230; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002AFEEC; } }
L_002AF5A4:
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002AF5C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF5F8; } }
L_002AF5C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF5CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF5CCu) [[unlikely]] return; }
L_002AF5CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23728u);  if (t) { goto L_002AF5E8; } }
L_002AF5D8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002AF5E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AF5F4; } }
L_002AF5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF5D8u | kUnwind; return; } goto L_002AF5D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF5F4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AF5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AF820; } }
L_002AF608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF610u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0084(c, 104u, depth + 1u); else { c.pc = 0x00310CE0u; return; } if (c.pc != 0x002AF610u) [[unlikely]] return; }
L_002AF610:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF61Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 47u, depth + 1u); else { c.pc = 0x002B43F0u; return; } if (c.pc != 0x002AF61Cu) [[unlikely]] return; }
L_002AF61C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 380u), c.r[17].w[0]);  if (t) { goto L_002AF644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF630u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF630u) [[unlikely]] return; }
L_002AF630:
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF644u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF644u) [[unlikely]] return; }
L_002AF644:
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 296u)));  goto L_002AF66C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002AF660; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002AF660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF668u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 70u, depth + 1u); else { c.pc = 0x002A8AA0u; return; } if (c.pc != 0x002AF668u) [[unlikely]] return; }
L_002AF668:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_002AF66C:
    set32(c.r[5], c.r[29].w[0] + 380u);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 296u), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF688u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 64u, depth + 1u); else { c.pc = 0x002A89F0u; return; } if (c.pc != 0x002AF688u) [[unlikely]] return; }
L_002AF688:
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF6D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF69Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF69Cu) [[unlikely]] return; }
L_002AF69C:
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6B0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF6B0u) [[unlikely]] return; }
L_002AF6B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF6D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF6D0u) [[unlikely]] return; }
L_002AF6D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6E0u); set32(c.r[5], c.r[5].w[0] + 23527u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AF6E0u) [[unlikely]] return; }
L_002AF6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AF6E8u) [[unlikely]] return; }
L_002AF6E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6F4u); set32(c.r[4], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AF6F4u) [[unlikely]] return; }
L_002AF6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6FCu); set32(c.r[4], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AF6FCu) [[unlikely]] return; }
L_002AF6FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AF70C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AF714; } }
L_002AF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF714u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AF714u) [[unlikely]] return; }
L_002AF714:
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF72Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 171u, depth + 1u); else { c.pc = 0x002B10B0u; return; } if (c.pc != 0x002AF72Cu) [[unlikely]] return; }
L_002AF72C:
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 408u);  goto L_002AF784; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[23], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF750u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF750u) [[unlikely]] return; }
L_002AF750:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF760u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF760u) [[unlikely]] return; }
L_002AF760:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF780; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF780u); set32(c.r[5], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AF780u) [[unlikely]] return; }
L_002AF780:
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 1;
L_002AF784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF78Cu);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AF78Cu) [[unlikely]] return; }
L_002AF78C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AF79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AF7A4; } }
L_002AF79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7A4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AF7A4u) [[unlikely]] return; }
L_002AF7A4:
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 372u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 162u, depth + 1u); else { c.pc = 0x002B0F40u; return; } if (c.pc != 0x002AF7BCu) [[unlikely]] return; }
L_002AF7BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 408u);  goto L_002AF814; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7E0u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF7E0u) [[unlikely]] return; }
L_002AF7E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF7F0u) [[unlikely]] return; }
L_002AF7F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF810; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF810u); set32(c.r[5], c.r[29].w[0] + 372u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AF810u) [[unlikely]] return; }
L_002AF810:
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 1;
L_002AF814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF81Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AF81Cu) [[unlikely]] return; }
L_002AF81C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002AF820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF828u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 48u, depth + 1u); else { c.pc = 0x002B4410u; return; } if (c.pc != 0x002AF828u) [[unlikely]] return; }
L_002AF828:
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 408u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF608u | kUnwind; return; } goto L_002AF608; }
L_002AF834:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002AF844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF87C; } }
L_002AF844:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF850u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF850u) [[unlikely]] return; }
L_002AF850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23776u);  if (t) { goto L_002AF86C; } }
L_002AF85C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002AF86C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AF878; } }
L_002AF86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF85Cu | kUnwind; return; } goto L_002AF85C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF878:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AF87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFB94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002AFB80; } }
L_002AF88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF894u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0084(c, 104u, depth + 1u); else { c.pc = 0x00310CE0u; return; } if (c.pc != 0x002AF894u) [[unlikely]] return; }
L_002AF894:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8A0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 18u, depth + 1u); else { c.pc = 0x002B4110u; return; } if (c.pc != 0x002AF8A0u) [[unlikely]] return; }
L_002AF8A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 346u, depth + 1u); else { c.pc = 0x002B6950u; return; } if (c.pc != 0x002AF8ACu) [[unlikely]] return; }
L_002AF8AC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 22356u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002AF8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AF8F4; } }
L_002AF8C8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AF8F4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AF8E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF8F4; } }
L_002AF8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8ECu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002AF8ECu) [[unlikely]] return; }
L_002AF8EC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002AF8F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002AF9B4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 368u), c.r[17].w[0]);  if (t) { goto L_002AF920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF90Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF90Cu) [[unlikely]] return; }
L_002AF90C:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF920u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF920u) [[unlikely]] return; }
L_002AF920:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_002AF948; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002AF93C; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002AF93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF944u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 70u, depth + 1u); else { c.pc = 0x002A8AA0u; return; } if (c.pc != 0x002AF944u) [[unlikely]] return; }
L_002AF944:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002AF948:
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF964u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 64u, depth + 1u); else { c.pc = 0x002A89F0u; return; } if (c.pc != 0x002AF964u) [[unlikely]] return; }
L_002AF964:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002AFAD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF978u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AF978u) [[unlikely]] return; }
L_002AF978:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF98Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AF98Cu) [[unlikely]] return; }
L_002AF98C:
    set32(c.r[4], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFACC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF9ACu) [[unlikely]] return; }
L_002AF9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFACC; } }
L_002AF9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9BCu);  if (depth < kMaxDepth) unit_006D(c, 346u, depth + 1u); else { c.pc = 0x002B6950u; return; } if (c.pc != 0x002AF9BCu) [[unlikely]] return; }
L_002AF9BC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 22349u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002AF9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AFA04; } }
L_002AF9D8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AFA04; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AF9F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFA04; } }
L_002AF9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9FCu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002AF9FCu) [[unlikely]] return; }
L_002AF9FC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002AFA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFACC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 364u), c.r[17].w[0]);  if (t) { goto L_002AFA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFA1Cu) [[unlikely]] return; }
L_002AFA1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA30u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFA30u) [[unlikely]] return; }
L_002AFA30:
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 312u)));  goto L_002AFA58; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002AFA4C; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002AFA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA54u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_006A(c, 70u, depth + 1u); else { c.pc = 0x002A8AA0u; return; } if (c.pc != 0x002AFA54u) [[unlikely]] return; }
L_002AFA54:
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 1;
L_002AFA58:
    set32(c.r[5], c.r[29].w[0] + 364u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 312u), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA74u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 64u, depth + 1u); else { c.pc = 0x002A89F0u; return; } if (c.pc != 0x002AFA74u) [[unlikely]] return; }
L_002AFA74:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFA88u) [[unlikely]] return; }
L_002AFA88:
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA9Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFA9Cu) [[unlikely]] return; }
L_002AFA9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFABC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFABCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFABCu) [[unlikely]] return; }
L_002AFABC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFACCu); set32(c.r[5], c.r[5].w[0] + 22364u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFACCu) [[unlikely]] return; }
L_002AFACC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AFAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAD8u);  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AFAD8u) [[unlikely]] return; }
L_002AFAD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAE4u); set32(c.r[4], c.r[29].w[0] + 404u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AFAE4u) [[unlikely]] return; }
L_002AFAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAECu); set32(c.r[4], c.r[29].w[0] + 404u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AFAECu) [[unlikely]] return; }
L_002AFAEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AFAFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AFB04; } }
L_002AFAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB04u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AFB04u) [[unlikely]] return; }
L_002AFB04:
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB1Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_006C(c, 162u, depth + 1u); else { c.pc = 0x002B0F40u; return; } if (c.pc != 0x002AFB1Cu) [[unlikely]] return; }
L_002AFB1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 404u);  goto L_002AFB74; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB40u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFB40u) [[unlikely]] return; }
L_002AFB40:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFB50u) [[unlikely]] return; }
L_002AFB50:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AFB70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB70u); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AFB70u) [[unlikely]] return; }
L_002AFB70:
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 1;
L_002AFB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AFB7Cu) [[unlikely]] return; }
L_002AFB7C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002AFB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 19u, depth + 1u); else { c.pc = 0x002B4130u; return; } if (c.pc != 0x002AFB88u) [[unlikely]] return; }
L_002AFB88:
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 404u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF88Cu | kUnwind; return; } goto L_002AF88C; }
L_002AFB94:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002AFBA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AFBDC; } }
L_002AFBA4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBB0u) [[unlikely]] return; }
L_002AFBB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23592u);  if (t) { goto L_002AFBCC; } }
L_002AFBBC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002AFBCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AFBD8; } }
L_002AFBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFBBCu | kUnwind; return; } goto L_002AFBBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AFBD8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AFBDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002AFEEC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBF8u) [[unlikely]] return; }
L_002AFBF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AFC08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AFC10; } }
L_002AFC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC10u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AFC10u) [[unlikely]] return; }
L_002AFC10:
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFC28u) [[unlikely]] return; }
L_002AFC28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 356u);
    set32(c.r[6], c.r[20].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC3Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 375u, depth + 1u); else { c.pc = 0x002B2BE0u; return; } if (c.pc != 0x002AFC3Cu) [[unlikely]] return; }
L_002AFC3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 352u), c.r[2].w[0]);  if (t) { goto L_002AFC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFC4Cu) [[unlikely]] return; }
L_002AFC4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC60u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFC60u) [[unlikely]] return; }
L_002AFC60:
    set32(c.r[5], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002AFC8C; } }
L_002AFC74:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002AFC8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 352u)));  if (t) { goto L_002AFCA0; } }
L_002AFC8C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFC74u | kUnwind; return; } goto L_002AFC74; }
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 2;
L_002AFCA0:
    c.r[3].d[0] = ~(c.r[6].d[0] | 0ull);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002AFCE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFCB4u) [[unlikely]] return; }
L_002AFCB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCC8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFCC8u) [[unlikely]] return; }
L_002AFCC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 356u)));  goto L_002AFCEC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFCE8u) [[unlikely]] return; }
L_002AFCE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 1;
L_002AFCEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002AFD3C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD0Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFD0Cu) [[unlikely]] return; }
L_002AFD0C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD1Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFD1Cu) [[unlikely]] return; }
L_002AFD1C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AFD3C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD3Cu); set32(c.r[5], c.r[29].w[0] + 356u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AFD3Cu) [[unlikely]] return; }
L_002AFD3C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002AFEE8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFD58u) [[unlikely]] return; }
L_002AFD58:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 348u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD6Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 427u, depth + 1u); else { c.pc = 0x002AE950u; return; } if (c.pc != 0x002AFD6Cu) [[unlikely]] return; }
L_002AFD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD74u); set32(c.r[4], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AFD74u) [[unlikely]] return; }
L_002AFD74:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD80u); set32(c.r[4], c.r[29].w[0] + 420u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFD80u) [[unlikely]] return; }
L_002AFD80:
    set32(c.r[4], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AFD8Cu) [[unlikely]] return; }
L_002AFD8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFDA0u) [[unlikely]] return; }
L_002AFDA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002AFDB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AFDB8; } }
L_002AFDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDB8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002AFDB8u) [[unlikely]] return; }
L_002AFDB8:
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFDD0u) [[unlikely]] return; }
L_002AFDD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 344u);
    set32(c.r[6], c.r[20].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDE4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 375u, depth + 1u); else { c.pc = 0x002B2BE0u; return; } if (c.pc != 0x002AFDE4u) [[unlikely]] return; }
L_002AFDE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 340u), c.r[2].w[0]);  if (t) { goto L_002AFE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFDF4u) [[unlikely]] return; }
L_002AFDF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE08u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFE08u) [[unlikely]] return; }
L_002AFE08:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 232u)));  goto L_002AFE30; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002AFE24; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002AFE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE2Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006C(c, 100u, depth + 1u); else { c.pc = 0x002B0820u; return; } if (c.pc != 0x002AFE2Cu) [[unlikely]] return; }
L_002AFE2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_002AFE30:
    set32(c.r[5], c.r[29].w[0] + 340u);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 232u), c.r[6].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE4Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 93u, depth + 1u); else { c.pc = 0x002B0770u; return; } if (c.pc != 0x002AFE4Cu) [[unlikely]] return; }
L_002AFE4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 344u)));  goto L_002AFE98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFE60u) [[unlikely]] return; }
L_002AFE60:
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE74u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFE74u) [[unlikely]] return; }
L_002AFE74:
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFE94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFE94u) [[unlikely]] return; }
L_002AFE94:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 1;
L_002AFE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002AFEE8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEB8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AFEB8u) [[unlikely]] return; }
L_002AFEB8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEC8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AFEC8u) [[unlikely]] return; }
L_002AFEC8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AFEE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEE8u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002AFEE8u) [[unlikely]] return; }
L_002AFEE8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002AFEEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF5A4u | kUnwind; return; } goto L_002AF5A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AFFE0; } }
L_002AFF04:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002AFF18u) [[unlikely]] return; }
L_002AFF18:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF28u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 472u, depth + 1u); else { c.pc = 0x002AEC70u; return; } if (c.pc != 0x002AFF28u) [[unlikely]] return; }
L_002AFF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF30u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002AFF30u) [[unlikely]] return; }
L_002AFF30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF3Cu); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFF3Cu) [[unlikely]] return; }
L_002AFF3C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002AFF48u) [[unlikely]] return; }
L_002AFF48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF58u); set32(c.r[5], c.r[5].w[0] + 22404u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFF58u) [[unlikely]] return; }
L_002AFF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002AFF60u) [[unlikely]] return; }
L_002AFF60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF6Cu); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0084(c, 35u, depth + 1u); else { c.pc = 0x003103E0u; return; } if (c.pc != 0x002AFF6Cu) [[unlikely]] return; }
L_002AFF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 243u, depth + 1u); else { c.pc = 0x002B5DB0u; return; } if (c.pc != 0x002AFF74u) [[unlikely]] return; }
L_002AFF74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002AFFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 243u, depth + 1u); else { c.pc = 0x002B5DB0u; return; } if (c.pc != 0x002AFF88u) [[unlikely]] return; }
L_002AFF88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFA0u); set32(c.r[6], c.r[6].w[0] + 22555u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002AFFA0u) [[unlikely]] return; }
L_002AFFA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFB0u); set32(c.r[5], c.r[5].w[0] + 22558u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFFB0u) [[unlikely]] return; }
L_002AFFB0:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFBCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x002AFFBCu) [[unlikely]] return; }
L_002AFFBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFCCu); set32(c.r[5], c.r[5].w[0] + 22560u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFFCCu) [[unlikely]] return; }
L_002AFFCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFDCu); set32(c.r[5], c.r[5].w[0] + 22368u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x002AFFDCu) [[unlikely]] return; }
L_002AFFDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AFFE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFF04u | kUnwind; return; } goto L_002AFF04; }
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0000u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_006B(c, 373u, depth + 1u); else { c.pc = 0x002AE310u; return; } if (c.pc != 0x002B0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_006C(c, 1u, depth);
}

}
