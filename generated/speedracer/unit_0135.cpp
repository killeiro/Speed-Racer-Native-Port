#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0135[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0,
    98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0,
    141, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0,
    152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0,
    192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220,
    0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230,
    0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0,
    265, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0,
    315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0,
    355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0,
    365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 376, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0,
    385, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0,
    394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0,
    401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 417,
    0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 427,
    0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434,
    0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 461, 0, 0, 0, 0,
    462, 0, 0, 0, 463, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0,
    472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 0, 0, 0,
    482, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 0, 0, 0,
    492, 0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500,
    0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0,
    0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 513,
    0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0,
    521, 0, 522, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0,
    531, 0, 532, 0, 533, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0,
    541, 0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0,
    551, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0,
    561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0,
    571, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0,
    581, 0, 582, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0,
    591, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0,
    601, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0,
    611, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0,
    621, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0,
    631, 0, 632, 0, 633, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0,
    641, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 647, 0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0,
    651, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0,
    661, 0, 662, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 679,
    0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 687, 0, 688, 0, 0, 689,
    0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 698, 0, 0, 699,
    0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 707, 0, 708, 0, 0, 709,
    0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 719, 0, 0, 0, 0,
    720, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0,
    731, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0,
    741, 0, 742, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0,
    751, 0, 752, 0, 753, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0,
    761, 0, 762, 0, 763, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0,
    771, 0, 772, 0, 773, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 778, 779, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0,
    782, 0, 783, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 790, 0, 0, 0, 0,
    791, 0, 0, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 0, 0, 0,
    801, 0, 0, 0, 802, 0, 803, 0, 804, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 808, 0, 809, 0, 0, 810, 0, 0, 0, 0,
    811, 0, 0, 0, 812, 0, 813, 0, 814, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0, 0,
    821, 0, 0, 0, 822, 0, 823, 0, 824, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 828, 0, 829, 0, 0, 830, 0, 0, 0, 0,
    831, 0, 0, 0, 832, 0, 833, 0, 834, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0, 840, 0, 0, 0, 0,
    841, 0, 0, 0, 842, 0, 843, 0, 844, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 848, 0, 849, 0, 0, 850, 0, 0, 0, 0,
    851, 0, 0, 0, 852, 0, 853, 0, 854, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 0, 0, 0,
    861, 0, 0, 0, 862, 0, 863, 0, 864, 0, 0, 865, 0, 0, 0, 0, 866, 0, 0, 0, 867, 0, 868, 0, 869, 0, 0, 870, 0, 0, 0, 0,
    871, 0, 0, 0, 872, 0, 873, 0, 874, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 878, 0, 879, 0, 0, 880, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0,
    882, 0, 883, 0, 884, 0, 0, 885, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 888, 0, 889, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 891, 0, 0, 0, 892, 0, 893, 0, 894, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 897, 0, 898, 0, 899, 0, 0, 900,
    0, 0, 0, 0, 901, 0, 0, 0, 902, 0, 903, 0, 904, 0, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 908, 0, 909, 0, 0, 910,
    0, 0, 0, 0, 911, 0, 0, 0, 912, 0, 913, 0, 914, 0, 0, 915, 0, 0, 0, 0, 916, 0, 0, 0, 917, 0, 918, 0, 919, 0, 0, 920,
    0, 0, 0, 0, 921, 0, 0, 0, 922, 0, 923, 0, 924, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 928, 0, 929, 0, 0, 930,
    0, 0, 0, 0, 931, 0, 0, 0, 932, 0, 933, 0, 934, 0, 0, 935, 0, 0, 0, 0, 936, 0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 940,
    0, 0, 0, 0, 941, 0, 0, 0, 942, 0, 943, 0, 944, 0, 0, 945, 0, 0, 0, 0, 946, 0, 0, 0, 947, 0, 948, 0, 949, 0, 0, 950,
    0, 0, 0, 0, 951, 0, 0, 0, 952, 0, 953, 0, 954, 0, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 957, 0, 958, 0, 959, 0, 0, 960,
    0, 0, 0, 0, 961, 0, 0, 0, 962, 0, 963, 0, 964, 0, 0, 965, 0, 0, 0, 0, 966, 0, 0, 0, 967, 0, 968, 0, 969, 0, 0, 970,
    0, 0, 0, 0, 971, 0, 0, 0, 972, 0, 973, 0, 974, 0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0,
    977, 0, 978, 0, 979, 0, 0, 980, 0, 0, 0, 0, 981, 0, 0, 0, 982, 0, 983, 0, 984, 0, 0, 985, 0, 0, 0, 0, 986, 0, 0, 0,
    987, 0, 988, 0, 989, 0, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    991, 0, 0, 0, 992, 0, 993, 0, 994, 0, 0, 995, 0, 996, 0, 997, 0, 998, 0, 0, 0, 0, 0, 0, 999, 0, 0, 0, 1000, 0, 1001, 0,
    1002, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 0, 0, 1005, 0, 1006, 0, 1007, 0, 0, 1008, 0, 0, 0, 0, 1009, 0, 0, 0, 1010, 0, 1011, 0,
    1012, 0, 0, 1013, 0, 0, 0, 0, 1014, 0, 0, 0, 1015, 0, 1016, 0, 1017, 0, 0, 1018, 0, 1019, 0, 0, 0, 1020, 0, 0, 0, 0, 0, 0,
    1021, 0, 0, 0, 1022, 0, 1023, 0, 1024, 0, 0, 1025, 0, 0, 0, 0, 1026, 0, 0, 0, 1027, 0, 1028, 0, 1029, 0, 0, 1030, 0, 0, 0, 0,
    1031, 0, 0, 0, 1032, 0, 1033, 0, 1034, 0, 0, 1035, 0, 0, 0, 0, 1036, 0, 0, 0, 1037, 0, 1038, 0, 1039, 0, 0, 1040, 0, 0, 0, 0,
    1041, 0, 0, 0, 1042, 0, 1043, 0, 1044, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 0, 0, 1047, 0, 1048, 0, 1049, 0, 0, 1050, 0, 0, 0, 0,
    1051, 0, 0, 0, 1052, 0, 1053, 0, 1054, 0, 0, 1055, 0, 1056, 0, 0, 0, 0, 0, 0, 1057, 0, 0, 0, 1058, 0, 1059, 0, 1060, 0, 0, 1061,
    0, 1062, 0, 0, 0, 0, 0, 0, 1063, 0, 0, 0, 1064, 0, 1065, 0, 1066, 0, 0, 1067, 0, 0, 0, 0, 1068, 0, 0, 0, 1069, 0, 1070, 0,
    1071, 0, 0, 1072, 0, 1073, 0, 0, 0, 0, 0, 0, 1074, 0, 0, 0, 1075, 0, 1076, 0, 1077, 0, 0, 1078, 0, 0, 0, 0, 1079, 0, 0, 0,
    1080, 0, 1081, 0, 1082, 0, 0, 1083, 0, 0, 0, 0, 1084, 0, 0, 0, 1085, 0, 1086, 0, 1087, 0, 0, 1088, 0, 0, 0, 0, 1089, 0, 0, 0,
    1090, 0, 1091, 0, 1092, 0, 0, 1093, 0, 0, 0, 0, 1094, 0, 0, 0, 1095, 0, 1096, 0, 1097, 0, 0, 1098, 0, 0, 0, 0, 1099, 0, 0, 0,
    1100, 0, 1101, 0, 1102, 0, 0, 1103, 0, 0, 0, 0, 1104, 0, 0, 0, 1105, 0, 1106, 0, 1107, 0, 0, 1108, 0, 0, 0, 0, 1109, 0, 0, 0,
    1110, 0, 1111, 0, 1112, 0, 0, 1113, 0, 0, 0, 0, 1114, 0, 0, 0, 1115, 0, 1116, 0, 1117, 0, 0, 1118, 0, 0, 0, 0, 1119, 0, 0, 0,
    0, 0, 0, 1120, 0, 0, 0, 0, 1121, 0, 0, 0, 1122, 0, 1123, 0, 1124, 0, 0, 1125, 0, 1126, 0, 0, 1127, 0, 0, 0, 1128, 0, 1129, 0,
    1130, 0, 0, 1131, 0, 0, 0, 0, 1132, 0, 0, 0, 1133, 0, 1134, 0, 1135, 0, 0, 1136, 0, 0, 0, 0, 1137, 0, 0, 0, 1138, 0, 1139, 0,
    1140, 0, 0, 1141, 0, 1142, 0, 0, 1143, 0, 0, 0, 1144, 0, 1145, 0, 1146, 0, 0, 1147, 0, 0, 0, 0, 1148, 0, 0, 0, 0, 0, 0, 1149,
    0, 0, 0, 0, 1150, 0, 0, 0, 0, 0, 0, 1151, 0, 0, 0, 0, 1152, 0, 0, 0, 0, 0, 0, 1153, 0, 0, 0, 0, 1154, 0, 0, 0,
    0, 0, 0, 1155, 0, 0, 0, 0, 1156, 0, 0, 0, 0, 0, 0, 1157, 0, 0, 0, 0, 1158, 0, 0, 0, 0, 0, 0, 1159, 0, 0, 0, 0,
};

void unit_0135(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_005D4000;
    case 2u: goto L_005D4010;
    case 3u: goto L_005D4020;
    case 4u: goto L_005D4028;
    case 5u: goto L_005D4030;
    case 6u: goto L_005D403C;
    case 7u: goto L_005D4058;
    case 8u: goto L_005D4070;
    case 9u: goto L_005D4080;
    case 10u: goto L_005D4088;
    case 11u: goto L_005D4090;
    case 12u: goto L_005D409C;
    case 13u: goto L_005D40B0;
    case 14u: goto L_005D40C0;
    case 15u: goto L_005D40C8;
    case 16u: goto L_005D40D0;
    case 17u: goto L_005D40DC;
    case 18u: goto L_005D40F0;
    case 19u: goto L_005D4100;
    case 20u: goto L_005D4108;
    case 21u: goto L_005D4110;
    case 22u: goto L_005D411C;
    case 23u: goto L_005D4130;
    case 24u: goto L_005D4140;
    case 25u: goto L_005D4148;
    case 26u: goto L_005D4150;
    case 27u: goto L_005D415C;
    case 28u: goto L_005D4170;
    case 29u: goto L_005D4180;
    case 30u: goto L_005D4188;
    case 31u: goto L_005D4190;
    case 32u: goto L_005D419C;
    case 33u: goto L_005D41A4;
    case 34u: goto L_005D41B0;
    case 35u: goto L_005D41C0;
    case 36u: goto L_005D41C8;
    case 37u: goto L_005D41D0;
    case 38u: goto L_005D41DC;
    case 39u: goto L_005D41F0;
    case 40u: goto L_005D4200;
    case 41u: goto L_005D4208;
    case 42u: goto L_005D4210;
    case 43u: goto L_005D421C;
    case 44u: goto L_005D4230;
    case 45u: goto L_005D4240;
    case 46u: goto L_005D4248;
    case 47u: goto L_005D4250;
    case 48u: goto L_005D425C;
    case 49u: goto L_005D4270;
    case 50u: goto L_005D4280;
    case 51u: goto L_005D4288;
    case 52u: goto L_005D4290;
    case 53u: goto L_005D429C;
    case 54u: goto L_005D42B0;
    case 55u: goto L_005D42C0;
    case 56u: goto L_005D42C8;
    case 57u: goto L_005D42D0;
    case 58u: goto L_005D42DC;
    case 59u: goto L_005D42F0;
    case 60u: goto L_005D4300;
    case 61u: goto L_005D4308;
    case 62u: goto L_005D4310;
    case 63u: goto L_005D431C;
    case 64u: goto L_005D4330;
    case 65u: goto L_005D4340;
    case 66u: goto L_005D4348;
    case 67u: goto L_005D4350;
    case 68u: goto L_005D435C;
    case 69u: goto L_005D4370;
    case 70u: goto L_005D4380;
    case 71u: goto L_005D4388;
    case 72u: goto L_005D4390;
    case 73u: goto L_005D439C;
    case 74u: goto L_005D43B0;
    case 75u: goto L_005D43C0;
    case 76u: goto L_005D43C8;
    case 77u: goto L_005D43D0;
    case 78u: goto L_005D43DC;
    case 79u: goto L_005D43F0;
    case 80u: goto L_005D4400;
    case 81u: goto L_005D4408;
    case 82u: goto L_005D4410;
    case 83u: goto L_005D441C;
    case 84u: goto L_005D4430;
    case 85u: goto L_005D4440;
    case 86u: goto L_005D4448;
    case 87u: goto L_005D4450;
    case 88u: goto L_005D445C;
    case 89u: goto L_005D4470;
    case 90u: goto L_005D4480;
    case 91u: goto L_005D4488;
    case 92u: goto L_005D4490;
    case 93u: goto L_005D449C;
    case 94u: goto L_005D44C8;
    case 95u: goto L_005D44E0;
    case 96u: goto L_005D44F0;
    case 97u: goto L_005D44F8;
    case 98u: goto L_005D4500;
    case 99u: goto L_005D450C;
    case 100u: goto L_005D4528;
    case 101u: goto L_005D4540;
    case 102u: goto L_005D4550;
    case 103u: goto L_005D4558;
    case 104u: goto L_005D4560;
    case 105u: goto L_005D456C;
    case 106u: goto L_005D4574;
    case 107u: goto L_005D4590;
    case 108u: goto L_005D45A0;
    case 109u: goto L_005D45B0;
    case 110u: goto L_005D45B8;
    case 111u: goto L_005D45C0;
    case 112u: goto L_005D45CC;
    case 113u: goto L_005D45D4;
    case 114u: goto L_005D45F8;
    case 115u: goto L_005D4614;
    case 116u: goto L_005D4630;
    case 117u: goto L_005D4640;
    case 118u: goto L_005D4650;
    case 119u: goto L_005D4658;
    case 120u: goto L_005D4660;
    case 121u: goto L_005D466C;
    case 122u: goto L_005D4680;
    case 123u: goto L_005D4690;
    case 124u: goto L_005D4698;
    case 125u: goto L_005D46A0;
    case 126u: goto L_005D46AC;
    case 127u: goto L_005D46C0;
    case 128u: goto L_005D46D0;
    case 129u: goto L_005D46D8;
    case 130u: goto L_005D46E0;
    case 131u: goto L_005D46EC;
    case 132u: goto L_005D4708;
    case 133u: goto L_005D4720;
    case 134u: goto L_005D4730;
    case 135u: goto L_005D4738;
    case 136u: goto L_005D4740;
    case 137u: goto L_005D474C;
    case 138u: goto L_005D4760;
    case 139u: goto L_005D4770;
    case 140u: goto L_005D4778;
    case 141u: goto L_005D4780;
    case 142u: goto L_005D478C;
    case 143u: goto L_005D4794;
    case 144u: goto L_005D47A0;
    case 145u: goto L_005D47B0;
    case 146u: goto L_005D47B8;
    case 147u: goto L_005D47C0;
    case 148u: goto L_005D47CC;
    case 149u: goto L_005D47E0;
    case 150u: goto L_005D47F0;
    case 151u: goto L_005D47F8;
    case 152u: goto L_005D4800;
    case 153u: goto L_005D480C;
    case 154u: goto L_005D4820;
    case 155u: goto L_005D4830;
    case 156u: goto L_005D4838;
    case 157u: goto L_005D4840;
    case 158u: goto L_005D484C;
    case 159u: goto L_005D4854;
    case 160u: goto L_005D485C;
    case 161u: goto L_005D4864;
    case 162u: goto L_005D4880;
    case 163u: goto L_005D4890;
    case 164u: goto L_005D4898;
    case 165u: goto L_005D48A0;
    case 166u: goto L_005D48AC;
    case 167u: goto L_005D48C0;
    case 168u: goto L_005D48D0;
    case 169u: goto L_005D48D8;
    case 170u: goto L_005D48E0;
    case 171u: goto L_005D48EC;
    case 172u: goto L_005D4900;
    case 173u: goto L_005D4910;
    case 174u: goto L_005D4918;
    case 175u: goto L_005D4920;
    case 176u: goto L_005D492C;
    case 177u: goto L_005D4940;
    case 178u: goto L_005D4950;
    case 179u: goto L_005D4958;
    case 180u: goto L_005D4960;
    case 181u: goto L_005D496C;
    case 182u: goto L_005D4980;
    case 183u: goto L_005D4990;
    case 184u: goto L_005D4998;
    case 185u: goto L_005D49A0;
    case 186u: goto L_005D49AC;
    case 187u: goto L_005D49C0;
    case 188u: goto L_005D49D0;
    case 189u: goto L_005D49D8;
    case 190u: goto L_005D49E0;
    case 191u: goto L_005D49EC;
    case 192u: goto L_005D4A00;
    case 193u: goto L_005D4A10;
    case 194u: goto L_005D4A18;
    case 195u: goto L_005D4A20;
    case 196u: goto L_005D4A2C;
    case 197u: goto L_005D4A40;
    case 198u: goto L_005D4A50;
    case 199u: goto L_005D4A58;
    case 200u: goto L_005D4A60;
    case 201u: goto L_005D4A6C;
    case 202u: goto L_005D4A74;
    case 203u: goto L_005D4A80;
    case 204u: goto L_005D4A90;
    case 205u: goto L_005D4AA0;
    case 206u: goto L_005D4AA8;
    case 207u: goto L_005D4AB0;
    case 208u: goto L_005D4ABC;
    case 209u: goto L_005D4AD0;
    case 210u: goto L_005D4AE0;
    case 211u: goto L_005D4AE8;
    case 212u: goto L_005D4AF0;
    case 213u: goto L_005D4AFC;
    case 214u: goto L_005D4B1C;
    case 215u: goto L_005D4B3C;
    case 216u: goto L_005D4B50;
    case 217u: goto L_005D4B60;
    case 218u: goto L_005D4B68;
    case 219u: goto L_005D4B70;
    case 220u: goto L_005D4B7C;
    case 221u: goto L_005D4B90;
    case 222u: goto L_005D4BA0;
    case 223u: goto L_005D4BA8;
    case 224u: goto L_005D4BB0;
    case 225u: goto L_005D4BBC;
    case 226u: goto L_005D4BD0;
    case 227u: goto L_005D4BE0;
    case 228u: goto L_005D4BE8;
    case 229u: goto L_005D4BF0;
    case 230u: goto L_005D4BFC;
    case 231u: goto L_005D4C04;
    case 232u: goto L_005D4C10;
    case 233u: goto L_005D4C20;
    case 234u: goto L_005D4C28;
    case 235u: goto L_005D4C30;
    case 236u: goto L_005D4C3C;
    case 237u: goto L_005D4CF0;
    case 238u: goto L_005D4D00;
    case 239u: goto L_005D4D08;
    case 240u: goto L_005D4D10;
    case 241u: goto L_005D4D1C;
    case 242u: goto L_005D4D30;
    case 243u: goto L_005D4D40;
    case 244u: goto L_005D4D48;
    case 245u: goto L_005D4D50;
    case 246u: goto L_005D4D5C;
    case 247u: goto L_005D4D70;
    case 248u: goto L_005D4D80;
    case 249u: goto L_005D4D88;
    case 250u: goto L_005D4D90;
    case 251u: goto L_005D4D9C;
    case 252u: goto L_005D4DDC;
    case 253u: goto L_005D4DF0;
    case 254u: goto L_005D4E00;
    case 255u: goto L_005D4E08;
    case 256u: goto L_005D4E10;
    case 257u: goto L_005D4E1C;
    case 258u: goto L_005D4E24;
    case 259u: goto L_005D4E30;
    case 260u: goto L_005D4E40;
    case 261u: goto L_005D4E48;
    case 262u: goto L_005D4E50;
    case 263u: goto L_005D4E5C;
    case 264u: goto L_005D4E70;
    case 265u: goto L_005D4E80;
    case 266u: goto L_005D4E88;
    case 267u: goto L_005D4E90;
    case 268u: goto L_005D4E9C;
    case 269u: goto L_005D4EB0;
    case 270u: goto L_005D4EC0;
    case 271u: goto L_005D4EC8;
    case 272u: goto L_005D4ED0;
    case 273u: goto L_005D4EDC;
    case 274u: goto L_005D4EF0;
    case 275u: goto L_005D4F00;
    case 276u: goto L_005D4F08;
    case 277u: goto L_005D4F10;
    case 278u: goto L_005D4F1C;
    case 279u: goto L_005D4F30;
    case 280u: goto L_005D4F40;
    case 281u: goto L_005D4F48;
    case 282u: goto L_005D4F50;
    case 283u: goto L_005D4F5C;
    case 284u: goto L_005D4F70;
    case 285u: goto L_005D4F80;
    case 286u: goto L_005D4F88;
    case 287u: goto L_005D4F90;
    case 288u: goto L_005D4F9C;
    case 289u: goto L_005D4FB0;
    case 290u: goto L_005D4FC0;
    case 291u: goto L_005D4FC8;
    case 292u: goto L_005D4FD0;
    case 293u: goto L_005D4FDC;
    case 294u: goto L_005D4FF0;
    case 295u: goto L_005D5000;
    case 296u: goto L_005D5008;
    case 297u: goto L_005D5010;
    case 298u: goto L_005D501C;
    case 299u: goto L_005D5030;
    case 300u: goto L_005D5040;
    case 301u: goto L_005D5048;
    case 302u: goto L_005D5050;
    case 303u: goto L_005D505C;
    case 304u: goto L_005D5070;
    case 305u: goto L_005D5080;
    case 306u: goto L_005D5088;
    case 307u: goto L_005D5090;
    case 308u: goto L_005D509C;
    case 309u: goto L_005D50B0;
    case 310u: goto L_005D50C0;
    case 311u: goto L_005D50C8;
    case 312u: goto L_005D50D0;
    case 313u: goto L_005D50DC;
    case 314u: goto L_005D50F0;
    case 315u: goto L_005D5100;
    case 316u: goto L_005D5108;
    case 317u: goto L_005D5110;
    case 318u: goto L_005D511C;
    case 319u: goto L_005D5130;
    case 320u: goto L_005D5140;
    case 321u: goto L_005D5148;
    case 322u: goto L_005D5150;
    case 323u: goto L_005D515C;
    case 324u: goto L_005D5170;
    case 325u: goto L_005D5180;
    case 326u: goto L_005D5188;
    case 327u: goto L_005D5190;
    case 328u: goto L_005D519C;
    case 329u: goto L_005D51B0;
    case 330u: goto L_005D51C0;
    case 331u: goto L_005D51C8;
    case 332u: goto L_005D51D0;
    case 333u: goto L_005D51DC;
    case 334u: goto L_005D51F0;
    case 335u: goto L_005D5200;
    case 336u: goto L_005D5208;
    case 337u: goto L_005D5210;
    case 338u: goto L_005D521C;
    case 339u: goto L_005D5230;
    case 340u: goto L_005D5240;
    case 341u: goto L_005D5248;
    case 342u: goto L_005D5250;
    case 343u: goto L_005D525C;
    case 344u: goto L_005D5270;
    case 345u: goto L_005D5280;
    case 346u: goto L_005D5288;
    case 347u: goto L_005D5290;
    case 348u: goto L_005D529C;
    case 349u: goto L_005D52B0;
    case 350u: goto L_005D52C0;
    case 351u: goto L_005D52C8;
    case 352u: goto L_005D52D0;
    case 353u: goto L_005D52DC;
    case 354u: goto L_005D52F0;
    case 355u: goto L_005D5300;
    case 356u: goto L_005D5308;
    case 357u: goto L_005D5310;
    case 358u: goto L_005D531C;
    case 359u: goto L_005D5330;
    case 360u: goto L_005D5340;
    case 361u: goto L_005D5348;
    case 362u: goto L_005D5350;
    case 363u: goto L_005D535C;
    case 364u: goto L_005D5370;
    case 365u: goto L_005D5380;
    case 366u: goto L_005D5388;
    case 367u: goto L_005D5390;
    case 368u: goto L_005D539C;
    case 369u: goto L_005D53B0;
    case 370u: goto L_005D53C0;
    case 371u: goto L_005D53C8;
    case 372u: goto L_005D53D0;
    case 373u: goto L_005D53DC;
    case 374u: goto L_005D53F0;
    case 375u: goto L_005D5400;
    case 376u: goto L_005D5408;
    case 377u: goto L_005D5410;
    case 378u: goto L_005D541C;
    case 379u: goto L_005D5430;
    case 380u: goto L_005D5440;
    case 381u: goto L_005D5448;
    case 382u: goto L_005D5450;
    case 383u: goto L_005D545C;
    case 384u: goto L_005D5470;
    case 385u: goto L_005D5480;
    case 386u: goto L_005D5488;
    case 387u: goto L_005D5490;
    case 388u: goto L_005D549C;
    case 389u: goto L_005D54B8;
    case 390u: goto L_005D54D4;
    case 391u: goto L_005D54E0;
    case 392u: goto L_005D54F0;
    case 393u: goto L_005D54F8;
    case 394u: goto L_005D5500;
    case 395u: goto L_005D550C;
    case 396u: goto L_005D552C;
    case 397u: goto L_005D5548;
    case 398u: goto L_005D5560;
    case 399u: goto L_005D5570;
    case 400u: goto L_005D5578;
    case 401u: goto L_005D5580;
    case 402u: goto L_005D558C;
    case 403u: goto L_005D55A0;
    case 404u: goto L_005D55B0;
    case 405u: goto L_005D55B8;
    case 406u: goto L_005D55C0;
    case 407u: goto L_005D55CC;
    case 408u: goto L_005D55DC;
    case 409u: goto L_005D55F0;
    case 410u: goto L_005D5604;
    case 411u: goto L_005D5624;
    case 412u: goto L_005D5640;
    case 413u: goto L_005D5650;
    case 414u: goto L_005D5660;
    case 415u: goto L_005D5668;
    case 416u: goto L_005D5670;
    case 417u: goto L_005D567C;
    case 418u: goto L_005D5690;
    case 419u: goto L_005D56A0;
    case 420u: goto L_005D56A8;
    case 421u: goto L_005D56B0;
    case 422u: goto L_005D56BC;
    case 423u: goto L_005D56D0;
    case 424u: goto L_005D56E0;
    case 425u: goto L_005D56E8;
    case 426u: goto L_005D56F0;
    case 427u: goto L_005D56FC;
    case 428u: goto L_005D5704;
    case 429u: goto L_005D5738;
    case 430u: goto L_005D5750;
    case 431u: goto L_005D5760;
    case 432u: goto L_005D5768;
    case 433u: goto L_005D5770;
    case 434u: goto L_005D577C;
    case 435u: goto L_005D5790;
    case 436u: goto L_005D57A0;
    case 437u: goto L_005D57A8;
    case 438u: goto L_005D57B0;
    case 439u: goto L_005D57BC;
    case 440u: goto L_005D57D0;
    case 441u: goto L_005D57E0;
    case 442u: goto L_005D57E8;
    case 443u: goto L_005D57F0;
    case 444u: goto L_005D57FC;
    case 445u: goto L_005D5818;
    case 446u: goto L_005D5830;
    case 447u: goto L_005D5840;
    case 448u: goto L_005D5848;
    case 449u: goto L_005D5850;
    case 450u: goto L_005D585C;
    case 451u: goto L_005D5864;
    case 452u: goto L_005D5880;
    case 453u: goto L_005D5890;
    case 454u: goto L_005D5898;
    case 455u: goto L_005D58A0;
    case 456u: goto L_005D58AC;
    case 457u: goto L_005D58C0;
    case 458u: goto L_005D58D0;
    case 459u: goto L_005D58D8;
    case 460u: goto L_005D58E0;
    case 461u: goto L_005D58EC;
    case 462u: goto L_005D5900;
    case 463u: goto L_005D5910;
    case 464u: goto L_005D5918;
    case 465u: goto L_005D5920;
    case 466u: goto L_005D592C;
    case 467u: goto L_005D5940;
    case 468u: goto L_005D5950;
    case 469u: goto L_005D5958;
    case 470u: goto L_005D5960;
    case 471u: goto L_005D596C;
    case 472u: goto L_005D5980;
    case 473u: goto L_005D5990;
    case 474u: goto L_005D5998;
    case 475u: goto L_005D59A0;
    case 476u: goto L_005D59AC;
    case 477u: goto L_005D59C0;
    case 478u: goto L_005D59D0;
    case 479u: goto L_005D59D8;
    case 480u: goto L_005D59E0;
    case 481u: goto L_005D59EC;
    case 482u: goto L_005D5A00;
    case 483u: goto L_005D5A10;
    case 484u: goto L_005D5A18;
    case 485u: goto L_005D5A20;
    case 486u: goto L_005D5A2C;
    case 487u: goto L_005D5A40;
    case 488u: goto L_005D5A50;
    case 489u: goto L_005D5A58;
    case 490u: goto L_005D5A60;
    case 491u: goto L_005D5A6C;
    case 492u: goto L_005D5A80;
    case 493u: goto L_005D5A90;
    case 494u: goto L_005D5A98;
    case 495u: goto L_005D5AA0;
    case 496u: goto L_005D5AAC;
    case 497u: goto L_005D5AC0;
    case 498u: goto L_005D5AD0;
    case 499u: goto L_005D5AE8;
    case 500u: goto L_005D5AFC;
    case 501u: goto L_005D5B0C;
    case 502u: goto L_005D5B24;
    case 503u: goto L_005D5B38;
    case 504u: goto L_005D5B48;
    case 505u: goto L_005D5B60;
    case 506u: goto L_005D5B74;
    case 507u: goto L_005D5B84;
    case 508u: goto L_005D5B9C;
    case 509u: goto L_005D5BB0;
    case 510u: goto L_005D5BC0;
    case 511u: goto L_005D5BD8;
    case 512u: goto L_005D5BEC;
    case 513u: goto L_005D5BFC;
    case 514u: goto L_005D5C14;
    case 515u: goto L_005D5C30;
    case 516u: goto L_005D5C40;
    case 517u: goto L_005D5C48;
    case 518u: goto L_005D5C50;
    case 519u: goto L_005D5C5C;
    case 520u: goto L_005D5C70;
    case 521u: goto L_005D5C80;
    case 522u: goto L_005D5C88;
    case 523u: goto L_005D5C90;
    case 524u: goto L_005D5C9C;
    case 525u: goto L_005D5CB0;
    case 526u: goto L_005D5CC0;
    case 527u: goto L_005D5CC8;
    case 528u: goto L_005D5CD0;
    case 529u: goto L_005D5CDC;
    case 530u: goto L_005D5CF0;
    case 531u: goto L_005D5D00;
    case 532u: goto L_005D5D08;
    case 533u: goto L_005D5D10;
    case 534u: goto L_005D5D1C;
    case 535u: goto L_005D5D30;
    case 536u: goto L_005D5D40;
    case 537u: goto L_005D5D48;
    case 538u: goto L_005D5D50;
    case 539u: goto L_005D5D5C;
    case 540u: goto L_005D5D70;
    case 541u: goto L_005D5D80;
    case 542u: goto L_005D5D88;
    case 543u: goto L_005D5D90;
    case 544u: goto L_005D5D9C;
    case 545u: goto L_005D5DB0;
    case 546u: goto L_005D5DC0;
    case 547u: goto L_005D5DC8;
    case 548u: goto L_005D5DD0;
    case 549u: goto L_005D5DDC;
    case 550u: goto L_005D5DF0;
    case 551u: goto L_005D5E00;
    case 552u: goto L_005D5E08;
    case 553u: goto L_005D5E10;
    case 554u: goto L_005D5E1C;
    case 555u: goto L_005D5E30;
    case 556u: goto L_005D5E40;
    case 557u: goto L_005D5E48;
    case 558u: goto L_005D5E50;
    case 559u: goto L_005D5E5C;
    case 560u: goto L_005D5E70;
    case 561u: goto L_005D5E80;
    case 562u: goto L_005D5E88;
    case 563u: goto L_005D5E90;
    case 564u: goto L_005D5E9C;
    case 565u: goto L_005D5EB0;
    case 566u: goto L_005D5EC0;
    case 567u: goto L_005D5EC8;
    case 568u: goto L_005D5ED0;
    case 569u: goto L_005D5EDC;
    case 570u: goto L_005D5EF0;
    case 571u: goto L_005D5F00;
    case 572u: goto L_005D5F08;
    case 573u: goto L_005D5F10;
    case 574u: goto L_005D5F1C;
    case 575u: goto L_005D5F30;
    case 576u: goto L_005D5F40;
    case 577u: goto L_005D5F48;
    case 578u: goto L_005D5F50;
    case 579u: goto L_005D5F5C;
    case 580u: goto L_005D5F70;
    case 581u: goto L_005D5F80;
    case 582u: goto L_005D5F88;
    case 583u: goto L_005D5F90;
    case 584u: goto L_005D5F9C;
    case 585u: goto L_005D5FB0;
    case 586u: goto L_005D5FC0;
    case 587u: goto L_005D5FC8;
    case 588u: goto L_005D5FD0;
    case 589u: goto L_005D5FDC;
    case 590u: goto L_005D5FF0;
    case 591u: goto L_005D6000;
    case 592u: goto L_005D6008;
    case 593u: goto L_005D6010;
    case 594u: goto L_005D601C;
    case 595u: goto L_005D6030;
    case 596u: goto L_005D6040;
    case 597u: goto L_005D6048;
    case 598u: goto L_005D6050;
    case 599u: goto L_005D605C;
    case 600u: goto L_005D6070;
    case 601u: goto L_005D6080;
    case 602u: goto L_005D6088;
    case 603u: goto L_005D6090;
    case 604u: goto L_005D609C;
    case 605u: goto L_005D60B0;
    case 606u: goto L_005D60C0;
    case 607u: goto L_005D60C8;
    case 608u: goto L_005D60D0;
    case 609u: goto L_005D60DC;
    case 610u: goto L_005D60F0;
    case 611u: goto L_005D6100;
    case 612u: goto L_005D6108;
    case 613u: goto L_005D6110;
    case 614u: goto L_005D611C;
    case 615u: goto L_005D6130;
    case 616u: goto L_005D6140;
    case 617u: goto L_005D6148;
    case 618u: goto L_005D6150;
    case 619u: goto L_005D615C;
    case 620u: goto L_005D6170;
    case 621u: goto L_005D6180;
    case 622u: goto L_005D6188;
    case 623u: goto L_005D6190;
    case 624u: goto L_005D619C;
    case 625u: goto L_005D61B0;
    case 626u: goto L_005D61C0;
    case 627u: goto L_005D61C8;
    case 628u: goto L_005D61D0;
    case 629u: goto L_005D61DC;
    case 630u: goto L_005D61F0;
    case 631u: goto L_005D6200;
    case 632u: goto L_005D6208;
    case 633u: goto L_005D6210;
    case 634u: goto L_005D621C;
    case 635u: goto L_005D6230;
    case 636u: goto L_005D6240;
    case 637u: goto L_005D6248;
    case 638u: goto L_005D6250;
    case 639u: goto L_005D625C;
    case 640u: goto L_005D6270;
    case 641u: goto L_005D6280;
    case 642u: goto L_005D6288;
    case 643u: goto L_005D6290;
    case 644u: goto L_005D629C;
    case 645u: goto L_005D62B0;
    case 646u: goto L_005D62C0;
    case 647u: goto L_005D62C8;
    case 648u: goto L_005D62D0;
    case 649u: goto L_005D62DC;
    case 650u: goto L_005D62F0;
    case 651u: goto L_005D6300;
    case 652u: goto L_005D6308;
    case 653u: goto L_005D6310;
    case 654u: goto L_005D631C;
    case 655u: goto L_005D6330;
    case 656u: goto L_005D6340;
    case 657u: goto L_005D6348;
    case 658u: goto L_005D6350;
    case 659u: goto L_005D635C;
    case 660u: goto L_005D6370;
    case 661u: goto L_005D6380;
    case 662u: goto L_005D6388;
    case 663u: goto L_005D6390;
    case 664u: goto L_005D639C;
    case 665u: goto L_005D63B0;
    case 666u: goto L_005D63C0;
    case 667u: goto L_005D63C8;
    case 668u: goto L_005D63D0;
    case 669u: goto L_005D63DC;
    case 670u: goto L_005D6510;
    case 671u: goto L_005D6520;
    case 672u: goto L_005D6528;
    case 673u: goto L_005D6530;
    case 674u: goto L_005D653C;
    case 675u: goto L_005D6550;
    case 676u: goto L_005D6560;
    case 677u: goto L_005D6568;
    case 678u: goto L_005D6570;
    case 679u: goto L_005D657C;
    case 680u: goto L_005D6590;
    case 681u: goto L_005D65A0;
    case 682u: goto L_005D65A8;
    case 683u: goto L_005D65B0;
    case 684u: goto L_005D65BC;
    case 685u: goto L_005D65D0;
    case 686u: goto L_005D65E0;
    case 687u: goto L_005D65E8;
    case 688u: goto L_005D65F0;
    case 689u: goto L_005D65FC;
    case 690u: goto L_005D6610;
    case 691u: goto L_005D6620;
    case 692u: goto L_005D6628;
    case 693u: goto L_005D6630;
    case 694u: goto L_005D663C;
    case 695u: goto L_005D6650;
    case 696u: goto L_005D6660;
    case 697u: goto L_005D6668;
    case 698u: goto L_005D6670;
    case 699u: goto L_005D667C;
    case 700u: goto L_005D6690;
    case 701u: goto L_005D66A0;
    case 702u: goto L_005D66A8;
    case 703u: goto L_005D66B0;
    case 704u: goto L_005D66BC;
    case 705u: goto L_005D66D0;
    case 706u: goto L_005D66E0;
    case 707u: goto L_005D66E8;
    case 708u: goto L_005D66F0;
    case 709u: goto L_005D66FC;
    case 710u: goto L_005D6710;
    case 711u: goto L_005D6720;
    case 712u: goto L_005D6728;
    case 713u: goto L_005D6730;
    case 714u: goto L_005D673C;
    case 715u: goto L_005D67C0;
    case 716u: goto L_005D67D0;
    case 717u: goto L_005D67D8;
    case 718u: goto L_005D67E0;
    case 719u: goto L_005D67EC;
    case 720u: goto L_005D6800;
    case 721u: goto L_005D6810;
    case 722u: goto L_005D6818;
    case 723u: goto L_005D6820;
    case 724u: goto L_005D682C;
    case 725u: goto L_005D68B0;
    case 726u: goto L_005D68C0;
    case 727u: goto L_005D68C8;
    case 728u: goto L_005D68D0;
    case 729u: goto L_005D68DC;
    case 730u: goto L_005D68F0;
    case 731u: goto L_005D6900;
    case 732u: goto L_005D6908;
    case 733u: goto L_005D6910;
    case 734u: goto L_005D691C;
    case 735u: goto L_005D6930;
    case 736u: goto L_005D6940;
    case 737u: goto L_005D6948;
    case 738u: goto L_005D6950;
    case 739u: goto L_005D695C;
    case 740u: goto L_005D6970;
    case 741u: goto L_005D6980;
    case 742u: goto L_005D6988;
    case 743u: goto L_005D6990;
    case 744u: goto L_005D699C;
    case 745u: goto L_005D69B0;
    case 746u: goto L_005D69C0;
    case 747u: goto L_005D69C8;
    case 748u: goto L_005D69D0;
    case 749u: goto L_005D69DC;
    case 750u: goto L_005D69F0;
    case 751u: goto L_005D6A00;
    case 752u: goto L_005D6A08;
    case 753u: goto L_005D6A10;
    case 754u: goto L_005D6A1C;
    case 755u: goto L_005D6A30;
    case 756u: goto L_005D6A40;
    case 757u: goto L_005D6A48;
    case 758u: goto L_005D6A50;
    case 759u: goto L_005D6A5C;
    case 760u: goto L_005D6A70;
    case 761u: goto L_005D6A80;
    case 762u: goto L_005D6A88;
    case 763u: goto L_005D6A90;
    case 764u: goto L_005D6A9C;
    case 765u: goto L_005D6AB0;
    case 766u: goto L_005D6AC0;
    case 767u: goto L_005D6AC8;
    case 768u: goto L_005D6AD0;
    case 769u: goto L_005D6ADC;
    case 770u: goto L_005D6AF0;
    case 771u: goto L_005D6B00;
    case 772u: goto L_005D6B08;
    case 773u: goto L_005D6B10;
    case 774u: goto L_005D6B1C;
    case 775u: goto L_005D6B30;
    case 776u: goto L_005D6B40;
    case 777u: goto L_005D6B48;
    case 778u: goto L_005D6B50;
    case 779u: goto L_005D6B54;
    case 780u: goto L_005D6B5C;
    case 781u: goto L_005D6B70;
    case 782u: goto L_005D6B80;
    case 783u: goto L_005D6B88;
    case 784u: goto L_005D6B90;
    case 785u: goto L_005D6B9C;
    case 786u: goto L_005D6BC0;
    case 787u: goto L_005D6BD0;
    case 788u: goto L_005D6BD8;
    case 789u: goto L_005D6BE0;
    case 790u: goto L_005D6BEC;
    case 791u: goto L_005D6C00;
    case 792u: goto L_005D6C10;
    case 793u: goto L_005D6C18;
    case 794u: goto L_005D6C20;
    case 795u: goto L_005D6C2C;
    case 796u: goto L_005D6C40;
    case 797u: goto L_005D6C50;
    case 798u: goto L_005D6C58;
    case 799u: goto L_005D6C60;
    case 800u: goto L_005D6C6C;
    case 801u: goto L_005D6C80;
    case 802u: goto L_005D6C90;
    case 803u: goto L_005D6C98;
    case 804u: goto L_005D6CA0;
    case 805u: goto L_005D6CAC;
    case 806u: goto L_005D6CC0;
    case 807u: goto L_005D6CD0;
    case 808u: goto L_005D6CD8;
    case 809u: goto L_005D6CE0;
    case 810u: goto L_005D6CEC;
    case 811u: goto L_005D6D00;
    case 812u: goto L_005D6D10;
    case 813u: goto L_005D6D18;
    case 814u: goto L_005D6D20;
    case 815u: goto L_005D6D2C;
    case 816u: goto L_005D6D40;
    case 817u: goto L_005D6D50;
    case 818u: goto L_005D6D58;
    case 819u: goto L_005D6D60;
    case 820u: goto L_005D6D6C;
    case 821u: goto L_005D6D80;
    case 822u: goto L_005D6D90;
    case 823u: goto L_005D6D98;
    case 824u: goto L_005D6DA0;
    case 825u: goto L_005D6DAC;
    case 826u: goto L_005D6DC0;
    case 827u: goto L_005D6DD0;
    case 828u: goto L_005D6DD8;
    case 829u: goto L_005D6DE0;
    case 830u: goto L_005D6DEC;
    case 831u: goto L_005D6E00;
    case 832u: goto L_005D6E10;
    case 833u: goto L_005D6E18;
    case 834u: goto L_005D6E20;
    case 835u: goto L_005D6E2C;
    case 836u: goto L_005D6E40;
    case 837u: goto L_005D6E50;
    case 838u: goto L_005D6E58;
    case 839u: goto L_005D6E60;
    case 840u: goto L_005D6E6C;
    case 841u: goto L_005D6E80;
    case 842u: goto L_005D6E90;
    case 843u: goto L_005D6E98;
    case 844u: goto L_005D6EA0;
    case 845u: goto L_005D6EAC;
    case 846u: goto L_005D6EC0;
    case 847u: goto L_005D6ED0;
    case 848u: goto L_005D6ED8;
    case 849u: goto L_005D6EE0;
    case 850u: goto L_005D6EEC;
    case 851u: goto L_005D6F00;
    case 852u: goto L_005D6F10;
    case 853u: goto L_005D6F18;
    case 854u: goto L_005D6F20;
    case 855u: goto L_005D6F2C;
    case 856u: goto L_005D6F40;
    case 857u: goto L_005D6F50;
    case 858u: goto L_005D6F58;
    case 859u: goto L_005D6F60;
    case 860u: goto L_005D6F6C;
    case 861u: goto L_005D6F80;
    case 862u: goto L_005D6F90;
    case 863u: goto L_005D6F98;
    case 864u: goto L_005D6FA0;
    case 865u: goto L_005D6FAC;
    case 866u: goto L_005D6FC0;
    case 867u: goto L_005D6FD0;
    case 868u: goto L_005D6FD8;
    case 869u: goto L_005D6FE0;
    case 870u: goto L_005D6FEC;
    case 871u: goto L_005D7000;
    case 872u: goto L_005D7010;
    case 873u: goto L_005D7018;
    case 874u: goto L_005D7020;
    case 875u: goto L_005D702C;
    case 876u: goto L_005D7040;
    case 877u: goto L_005D7050;
    case 878u: goto L_005D7058;
    case 879u: goto L_005D7060;
    case 880u: goto L_005D706C;
    case 881u: goto L_005D70F0;
    case 882u: goto L_005D7100;
    case 883u: goto L_005D7108;
    case 884u: goto L_005D7110;
    case 885u: goto L_005D711C;
    case 886u: goto L_005D7130;
    case 887u: goto L_005D7140;
    case 888u: goto L_005D7148;
    case 889u: goto L_005D7150;
    case 890u: goto L_005D715C;
    case 891u: goto L_005D7190;
    case 892u: goto L_005D71A0;
    case 893u: goto L_005D71A8;
    case 894u: goto L_005D71B0;
    case 895u: goto L_005D71BC;
    case 896u: goto L_005D71D0;
    case 897u: goto L_005D71E0;
    case 898u: goto L_005D71E8;
    case 899u: goto L_005D71F0;
    case 900u: goto L_005D71FC;
    case 901u: goto L_005D7210;
    case 902u: goto L_005D7220;
    case 903u: goto L_005D7228;
    case 904u: goto L_005D7230;
    case 905u: goto L_005D723C;
    case 906u: goto L_005D7250;
    case 907u: goto L_005D7260;
    case 908u: goto L_005D7268;
    case 909u: goto L_005D7270;
    case 910u: goto L_005D727C;
    case 911u: goto L_005D7290;
    case 912u: goto L_005D72A0;
    case 913u: goto L_005D72A8;
    case 914u: goto L_005D72B0;
    case 915u: goto L_005D72BC;
    case 916u: goto L_005D72D0;
    case 917u: goto L_005D72E0;
    case 918u: goto L_005D72E8;
    case 919u: goto L_005D72F0;
    case 920u: goto L_005D72FC;
    case 921u: goto L_005D7310;
    case 922u: goto L_005D7320;
    case 923u: goto L_005D7328;
    case 924u: goto L_005D7330;
    case 925u: goto L_005D733C;
    case 926u: goto L_005D7350;
    case 927u: goto L_005D7360;
    case 928u: goto L_005D7368;
    case 929u: goto L_005D7370;
    case 930u: goto L_005D737C;
    case 931u: goto L_005D7390;
    case 932u: goto L_005D73A0;
    case 933u: goto L_005D73A8;
    case 934u: goto L_005D73B0;
    case 935u: goto L_005D73BC;
    case 936u: goto L_005D73D0;
    case 937u: goto L_005D73E0;
    case 938u: goto L_005D73E8;
    case 939u: goto L_005D73F0;
    case 940u: goto L_005D73FC;
    case 941u: goto L_005D7410;
    case 942u: goto L_005D7420;
    case 943u: goto L_005D7428;
    case 944u: goto L_005D7430;
    case 945u: goto L_005D743C;
    case 946u: goto L_005D7450;
    case 947u: goto L_005D7460;
    case 948u: goto L_005D7468;
    case 949u: goto L_005D7470;
    case 950u: goto L_005D747C;
    case 951u: goto L_005D7490;
    case 952u: goto L_005D74A0;
    case 953u: goto L_005D74A8;
    case 954u: goto L_005D74B0;
    case 955u: goto L_005D74BC;
    case 956u: goto L_005D74D0;
    case 957u: goto L_005D74E0;
    case 958u: goto L_005D74E8;
    case 959u: goto L_005D74F0;
    case 960u: goto L_005D74FC;
    case 961u: goto L_005D7510;
    case 962u: goto L_005D7520;
    case 963u: goto L_005D7528;
    case 964u: goto L_005D7530;
    case 965u: goto L_005D753C;
    case 966u: goto L_005D7550;
    case 967u: goto L_005D7560;
    case 968u: goto L_005D7568;
    case 969u: goto L_005D7570;
    case 970u: goto L_005D757C;
    case 971u: goto L_005D7590;
    case 972u: goto L_005D75A0;
    case 973u: goto L_005D75A8;
    case 974u: goto L_005D75B0;
    case 975u: goto L_005D75BC;
    case 976u: goto L_005D75F0;
    case 977u: goto L_005D7600;
    case 978u: goto L_005D7608;
    case 979u: goto L_005D7610;
    case 980u: goto L_005D761C;
    case 981u: goto L_005D7630;
    case 982u: goto L_005D7640;
    case 983u: goto L_005D7648;
    case 984u: goto L_005D7650;
    case 985u: goto L_005D765C;
    case 986u: goto L_005D7670;
    case 987u: goto L_005D7680;
    case 988u: goto L_005D7688;
    case 989u: goto L_005D7690;
    case 990u: goto L_005D769C;
    case 991u: goto L_005D7700;
    case 992u: goto L_005D7710;
    case 993u: goto L_005D7718;
    case 994u: goto L_005D7720;
    case 995u: goto L_005D772C;
    case 996u: goto L_005D7734;
    case 997u: goto L_005D773C;
    case 998u: goto L_005D7744;
    case 999u: goto L_005D7760;
    case 1000u: goto L_005D7770;
    case 1001u: goto L_005D7778;
    case 1002u: goto L_005D7780;
    case 1003u: goto L_005D778C;
    case 1004u: goto L_005D77A0;
    case 1005u: goto L_005D77B0;
    case 1006u: goto L_005D77B8;
    case 1007u: goto L_005D77C0;
    case 1008u: goto L_005D77CC;
    case 1009u: goto L_005D77E0;
    case 1010u: goto L_005D77F0;
    case 1011u: goto L_005D77F8;
    case 1012u: goto L_005D7800;
    case 1013u: goto L_005D780C;
    case 1014u: goto L_005D7820;
    case 1015u: goto L_005D7830;
    case 1016u: goto L_005D7838;
    case 1017u: goto L_005D7840;
    case 1018u: goto L_005D784C;
    case 1019u: goto L_005D7854;
    case 1020u: goto L_005D7864;
    case 1021u: goto L_005D7880;
    case 1022u: goto L_005D7890;
    case 1023u: goto L_005D7898;
    case 1024u: goto L_005D78A0;
    case 1025u: goto L_005D78AC;
    case 1026u: goto L_005D78C0;
    case 1027u: goto L_005D78D0;
    case 1028u: goto L_005D78D8;
    case 1029u: goto L_005D78E0;
    case 1030u: goto L_005D78EC;
    case 1031u: goto L_005D7900;
    case 1032u: goto L_005D7910;
    case 1033u: goto L_005D7918;
    case 1034u: goto L_005D7920;
    case 1035u: goto L_005D792C;
    case 1036u: goto L_005D7940;
    case 1037u: goto L_005D7950;
    case 1038u: goto L_005D7958;
    case 1039u: goto L_005D7960;
    case 1040u: goto L_005D796C;
    case 1041u: goto L_005D7980;
    case 1042u: goto L_005D7990;
    case 1043u: goto L_005D7998;
    case 1044u: goto L_005D79A0;
    case 1045u: goto L_005D79AC;
    case 1046u: goto L_005D79C0;
    case 1047u: goto L_005D79D0;
    case 1048u: goto L_005D79D8;
    case 1049u: goto L_005D79E0;
    case 1050u: goto L_005D79EC;
    case 1051u: goto L_005D7A00;
    case 1052u: goto L_005D7A10;
    case 1053u: goto L_005D7A18;
    case 1054u: goto L_005D7A20;
    case 1055u: goto L_005D7A2C;
    case 1056u: goto L_005D7A34;
    case 1057u: goto L_005D7A50;
    case 1058u: goto L_005D7A60;
    case 1059u: goto L_005D7A68;
    case 1060u: goto L_005D7A70;
    case 1061u: goto L_005D7A7C;
    case 1062u: goto L_005D7A84;
    case 1063u: goto L_005D7AA0;
    case 1064u: goto L_005D7AB0;
    case 1065u: goto L_005D7AB8;
    case 1066u: goto L_005D7AC0;
    case 1067u: goto L_005D7ACC;
    case 1068u: goto L_005D7AE0;
    case 1069u: goto L_005D7AF0;
    case 1070u: goto L_005D7AF8;
    case 1071u: goto L_005D7B00;
    case 1072u: goto L_005D7B0C;
    case 1073u: goto L_005D7B14;
    case 1074u: goto L_005D7B30;
    case 1075u: goto L_005D7B40;
    case 1076u: goto L_005D7B48;
    case 1077u: goto L_005D7B50;
    case 1078u: goto L_005D7B5C;
    case 1079u: goto L_005D7B70;
    case 1080u: goto L_005D7B80;
    case 1081u: goto L_005D7B88;
    case 1082u: goto L_005D7B90;
    case 1083u: goto L_005D7B9C;
    case 1084u: goto L_005D7BB0;
    case 1085u: goto L_005D7BC0;
    case 1086u: goto L_005D7BC8;
    case 1087u: goto L_005D7BD0;
    case 1088u: goto L_005D7BDC;
    case 1089u: goto L_005D7BF0;
    case 1090u: goto L_005D7C00;
    case 1091u: goto L_005D7C08;
    case 1092u: goto L_005D7C10;
    case 1093u: goto L_005D7C1C;
    case 1094u: goto L_005D7C30;
    case 1095u: goto L_005D7C40;
    case 1096u: goto L_005D7C48;
    case 1097u: goto L_005D7C50;
    case 1098u: goto L_005D7C5C;
    case 1099u: goto L_005D7C70;
    case 1100u: goto L_005D7C80;
    case 1101u: goto L_005D7C88;
    case 1102u: goto L_005D7C90;
    case 1103u: goto L_005D7C9C;
    case 1104u: goto L_005D7CB0;
    case 1105u: goto L_005D7CC0;
    case 1106u: goto L_005D7CC8;
    case 1107u: goto L_005D7CD0;
    case 1108u: goto L_005D7CDC;
    case 1109u: goto L_005D7CF0;
    case 1110u: goto L_005D7D00;
    case 1111u: goto L_005D7D08;
    case 1112u: goto L_005D7D10;
    case 1113u: goto L_005D7D1C;
    case 1114u: goto L_005D7D30;
    case 1115u: goto L_005D7D40;
    case 1116u: goto L_005D7D48;
    case 1117u: goto L_005D7D50;
    case 1118u: goto L_005D7D5C;
    case 1119u: goto L_005D7D70;
    case 1120u: goto L_005D7D8C;
    case 1121u: goto L_005D7DA0;
    case 1122u: goto L_005D7DB0;
    case 1123u: goto L_005D7DB8;
    case 1124u: goto L_005D7DC0;
    case 1125u: goto L_005D7DCC;
    case 1126u: goto L_005D7DD4;
    case 1127u: goto L_005D7DE0;
    case 1128u: goto L_005D7DF0;
    case 1129u: goto L_005D7DF8;
    case 1130u: goto L_005D7E00;
    case 1131u: goto L_005D7E0C;
    case 1132u: goto L_005D7E20;
    case 1133u: goto L_005D7E30;
    case 1134u: goto L_005D7E38;
    case 1135u: goto L_005D7E40;
    case 1136u: goto L_005D7E4C;
    case 1137u: goto L_005D7E60;
    case 1138u: goto L_005D7E70;
    case 1139u: goto L_005D7E78;
    case 1140u: goto L_005D7E80;
    case 1141u: goto L_005D7E8C;
    case 1142u: goto L_005D7E94;
    case 1143u: goto L_005D7EA0;
    case 1144u: goto L_005D7EB0;
    case 1145u: goto L_005D7EB8;
    case 1146u: goto L_005D7EC0;
    case 1147u: goto L_005D7ECC;
    case 1148u: goto L_005D7EE0;
    case 1149u: goto L_005D7EFC;
    case 1150u: goto L_005D7F10;
    case 1151u: goto L_005D7F2C;
    case 1152u: goto L_005D7F40;
    case 1153u: goto L_005D7F5C;
    case 1154u: goto L_005D7F70;
    case 1155u: goto L_005D7F8C;
    case 1156u: goto L_005D7FA0;
    case 1157u: goto L_005D7FBC;
    case 1158u: goto L_005D7FD0;
    case 1159u: goto L_005D7FEC;
    default: bad_entry(c, 0x005D4000u); return;
    }
L_005D4000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4020u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4020u) [[unlikely]] return; }
L_005D4020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4028u); st32((c.r[28].w[0] - 26124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4028u) [[unlikely]] return; }
L_005D4028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4030u); st32((c.r[28].w[0] - 26128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4030u) [[unlikely]] return; }
L_005D4030:
    st32((c.r[28].w[0] - 26132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D403Cu); set32(c.r[4], c.r[28].w[0] - 26136u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D403Cu) [[unlikely]] return; }
L_005D403C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 2472u);
    set32(c.r[5], c.r[5].w[0] - 2464u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4058u); set32(c.r[6], c.r[6].w[0] + 17288u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D4058u) [[unlikely]] return; }
L_005D4058:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4080u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4080u) [[unlikely]] return; }
L_005D4080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4088u); st32((c.r[28].w[0] - 26100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4088u) [[unlikely]] return; }
L_005D4088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4090u); st32((c.r[28].w[0] - 26104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4090u) [[unlikely]] return; }
L_005D4090:
    st32((c.r[28].w[0] - 26108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D409Cu); set32(c.r[4], c.r[28].w[0] - 26112u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D409Cu) [[unlikely]] return; }
L_005D409C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D40B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D40C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D40C0u) [[unlikely]] return; }
L_005D40C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D40C8u); st32((c.r[28].w[0] - 26084u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D40C8u) [[unlikely]] return; }
L_005D40C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D40D0u); st32((c.r[28].w[0] - 26088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D40D0u) [[unlikely]] return; }
L_005D40D0:
    st32((c.r[28].w[0] - 26092u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D40DCu); set32(c.r[4], c.r[28].w[0] - 26096u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D40DCu) [[unlikely]] return; }
L_005D40DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D40F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4100u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4100u) [[unlikely]] return; }
L_005D4100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4108u); st32((c.r[28].w[0] - 26068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4108u) [[unlikely]] return; }
L_005D4108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4110u); st32((c.r[28].w[0] - 26072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4110u) [[unlikely]] return; }
L_005D4110:
    st32((c.r[28].w[0] - 26076u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D411Cu); set32(c.r[4], c.r[28].w[0] - 26080u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D411Cu) [[unlikely]] return; }
L_005D411C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4140u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4140u) [[unlikely]] return; }
L_005D4140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4148u); st32((c.r[28].w[0] - 26040u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4148u) [[unlikely]] return; }
L_005D4148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4150u); st32((c.r[28].w[0] - 26044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4150u) [[unlikely]] return; }
L_005D4150:
    st32((c.r[28].w[0] - 26048u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D415Cu); set32(c.r[4], c.r[28].w[0] - 26052u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D415Cu) [[unlikely]] return; }
L_005D415C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4180u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4180u) [[unlikely]] return; }
L_005D4180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4188u); st32((c.r[28].w[0] - 26020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4188u) [[unlikely]] return; }
L_005D4188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4190u); st32((c.r[28].w[0] - 26024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4190u) [[unlikely]] return; }
L_005D4190:
    st32((c.r[28].w[0] - 26028u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D419Cu); set32(c.r[4], c.r[28].w[0] - 26032u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D419Cu) [[unlikely]] return; }
L_005D419C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D41A4u); set32(c.r[4], c.r[28].w[0] - 26036u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D41A4u) [[unlikely]] return; }
L_005D41A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D41B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D41C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D41C0u) [[unlikely]] return; }
L_005D41C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D41C8u); st32((c.r[28].w[0] - 26000u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D41C8u) [[unlikely]] return; }
L_005D41C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D41D0u); st32((c.r[28].w[0] - 26004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D41D0u) [[unlikely]] return; }
L_005D41D0:
    st32((c.r[28].w[0] - 26008u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D41DCu); set32(c.r[4], c.r[28].w[0] - 26012u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D41DCu) [[unlikely]] return; }
L_005D41DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D41F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4200u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4200u) [[unlikely]] return; }
L_005D4200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4208u); st32((c.r[28].w[0] - 25984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4208u) [[unlikely]] return; }
L_005D4208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4210u); st32((c.r[28].w[0] - 25988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4210u) [[unlikely]] return; }
L_005D4210:
    st32((c.r[28].w[0] - 25992u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D421Cu); set32(c.r[4], c.r[28].w[0] - 25996u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D421Cu) [[unlikely]] return; }
L_005D421C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4240u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4240u) [[unlikely]] return; }
L_005D4240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4248u); st32((c.r[28].w[0] - 25968u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4248u) [[unlikely]] return; }
L_005D4248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4250u); st32((c.r[28].w[0] - 25972u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4250u) [[unlikely]] return; }
L_005D4250:
    st32((c.r[28].w[0] - 25976u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D425Cu); set32(c.r[4], c.r[28].w[0] - 25980u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D425Cu) [[unlikely]] return; }
L_005D425C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4280u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4280u) [[unlikely]] return; }
L_005D4280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4288u); st32((c.r[28].w[0] - 25952u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4288u) [[unlikely]] return; }
L_005D4288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4290u); st32((c.r[28].w[0] - 25956u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4290u) [[unlikely]] return; }
L_005D4290:
    st32((c.r[28].w[0] - 25960u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D429Cu); set32(c.r[4], c.r[28].w[0] - 25964u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D429Cu) [[unlikely]] return; }
L_005D429C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D42B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D42C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D42C0u) [[unlikely]] return; }
L_005D42C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D42C8u); st32((c.r[28].w[0] - 25936u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D42C8u) [[unlikely]] return; }
L_005D42C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D42D0u); st32((c.r[28].w[0] - 25940u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D42D0u) [[unlikely]] return; }
L_005D42D0:
    st32((c.r[28].w[0] - 25944u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D42DCu); set32(c.r[4], c.r[28].w[0] - 25948u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D42DCu) [[unlikely]] return; }
L_005D42DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D42F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4300u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4300u) [[unlikely]] return; }
L_005D4300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4308u); st32((c.r[28].w[0] - 25920u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4308u) [[unlikely]] return; }
L_005D4308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4310u); st32((c.r[28].w[0] - 25924u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4310u) [[unlikely]] return; }
L_005D4310:
    st32((c.r[28].w[0] - 25928u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D431Cu); set32(c.r[4], c.r[28].w[0] - 25932u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D431Cu) [[unlikely]] return; }
L_005D431C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4340u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4340u) [[unlikely]] return; }
L_005D4340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4348u); st32((c.r[28].w[0] - 25904u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4348u) [[unlikely]] return; }
L_005D4348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4350u); st32((c.r[28].w[0] - 25908u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4350u) [[unlikely]] return; }
L_005D4350:
    st32((c.r[28].w[0] - 25912u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D435Cu); set32(c.r[4], c.r[28].w[0] - 25916u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D435Cu) [[unlikely]] return; }
L_005D435C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4380u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4380u) [[unlikely]] return; }
L_005D4380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4388u); st32((c.r[28].w[0] - 25888u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4388u) [[unlikely]] return; }
L_005D4388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4390u); st32((c.r[28].w[0] - 25892u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4390u) [[unlikely]] return; }
L_005D4390:
    st32((c.r[28].w[0] - 25896u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D439Cu); set32(c.r[4], c.r[28].w[0] - 25900u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D439Cu) [[unlikely]] return; }
L_005D439C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D43B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D43C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D43C0u) [[unlikely]] return; }
L_005D43C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D43C8u); st32((c.r[28].w[0] - 25872u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D43C8u) [[unlikely]] return; }
L_005D43C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D43D0u); st32((c.r[28].w[0] - 25876u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D43D0u) [[unlikely]] return; }
L_005D43D0:
    st32((c.r[28].w[0] - 25880u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D43DCu); set32(c.r[4], c.r[28].w[0] - 25884u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D43DCu) [[unlikely]] return; }
L_005D43DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D43F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4400u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4400u) [[unlikely]] return; }
L_005D4400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4408u); st32((c.r[28].w[0] - 25856u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4408u) [[unlikely]] return; }
L_005D4408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4410u); st32((c.r[28].w[0] - 25860u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4410u) [[unlikely]] return; }
L_005D4410:
    st32((c.r[28].w[0] - 25864u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D441Cu); set32(c.r[4], c.r[28].w[0] - 25868u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D441Cu) [[unlikely]] return; }
L_005D441C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4440u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4440u) [[unlikely]] return; }
L_005D4440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4448u); st32((c.r[28].w[0] - 25840u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4448u) [[unlikely]] return; }
L_005D4448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4450u); st32((c.r[28].w[0] - 25844u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4450u) [[unlikely]] return; }
L_005D4450:
    st32((c.r[28].w[0] - 25848u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D445Cu); set32(c.r[4], c.r[28].w[0] - 25852u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D445Cu) [[unlikely]] return; }
L_005D445C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4480u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4480u) [[unlikely]] return; }
L_005D4480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4488u); st32((c.r[28].w[0] - 25824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4488u) [[unlikely]] return; }
L_005D4488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4490u); st32((c.r[28].w[0] - 25828u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4490u) [[unlikely]] return; }
L_005D4490:
    st32((c.r[28].w[0] - 25832u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D449Cu); set32(c.r[4], c.r[28].w[0] - 25836u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D449Cu) [[unlikely]] return; }
L_005D449C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 14480u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] - 1992u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D44C8u); st32((c.r[2].w[0] + 14480u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D44C8u) [[unlikely]] return; }
L_005D44C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D44E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D44F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D44F0u) [[unlikely]] return; }
L_005D44F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D44F8u); st32((c.r[28].w[0] - 25792u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D44F8u) [[unlikely]] return; }
L_005D44F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4500u); st32((c.r[28].w[0] - 25796u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4500u) [[unlikely]] return; }
L_005D4500:
    st32((c.r[28].w[0] - 25800u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D450Cu); set32(c.r[4], c.r[28].w[0] - 25804u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D450Cu) [[unlikely]] return; }
L_005D450C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14488u);
    set32(c.r[5], c.r[5].w[0] + 14525u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4528u); set32(c.r[6], c.r[6].w[0] + 16648u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D4528u) [[unlikely]] return; }
L_005D4528:
    st32((c.r[28].w[0] - 25816u), 0u);
    st32((c.r[28].w[0] - 25812u), 0u);
    st32((c.r[28].w[0] - 25808u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4550u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4550u) [[unlikely]] return; }
L_005D4550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4558u); st32((c.r[28].w[0] - 25772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4558u) [[unlikely]] return; }
L_005D4558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4560u); st32((c.r[28].w[0] - 25776u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4560u) [[unlikely]] return; }
L_005D4560:
    st32((c.r[28].w[0] - 25780u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D456Cu); set32(c.r[4], c.r[28].w[0] - 25784u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D456Cu) [[unlikely]] return; }
L_005D456C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4574u); set32(c.r[4], c.r[28].w[0] - 25788u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D4574u) [[unlikely]] return; }
L_005D4574:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14552u);
    set32(c.r[5], c.r[5].w[0] + 14560u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4590u); set32(c.r[6], c.r[6].w[0] + 19952u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D4590u) [[unlikely]] return; }
L_005D4590:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D45A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D45B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D45B0u) [[unlikely]] return; }
L_005D45B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D45B8u); st32((c.r[28].w[0] - 25732u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D45B8u) [[unlikely]] return; }
L_005D45B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D45C0u); st32((c.r[28].w[0] - 25736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D45C0u) [[unlikely]] return; }
L_005D45C0:
    st32((c.r[28].w[0] - 25740u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D45CCu); set32(c.r[4], c.r[28].w[0] - 25744u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D45CCu) [[unlikely]] return; }
L_005D45CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D45D4u); set32(c.r[4], c.r[28].w[0] - 25768u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D45D4u) [[unlikely]] return; }
L_005D45D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 25760u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] - 1840u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D45F8u); st32((c.r[28].w[0] - 25760u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D45F8u) [[unlikely]] return; }
L_005D45F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 25756u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] - 1824u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4614u); st32((c.r[28].w[0] - 25756u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D4614u) [[unlikely]] return; }
L_005D4614:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 25748u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] - 1808u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4630u); st32((c.r[28].w[0] - 25748u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D4630u) [[unlikely]] return; }
L_005D4630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D4640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4650u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4650u) [[unlikely]] return; }
L_005D4650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4658u); st32((c.r[28].w[0] - 25716u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4658u) [[unlikely]] return; }
L_005D4658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4660u); st32((c.r[28].w[0] - 25720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4660u) [[unlikely]] return; }
L_005D4660:
    st32((c.r[28].w[0] - 25724u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D466Cu); set32(c.r[4], c.r[28].w[0] - 25728u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D466Cu) [[unlikely]] return; }
L_005D466C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4690u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4690u) [[unlikely]] return; }
L_005D4690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4698u); st32((c.r[28].w[0] - 25700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4698u) [[unlikely]] return; }
L_005D4698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D46A0u); st32((c.r[28].w[0] - 25704u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D46A0u) [[unlikely]] return; }
L_005D46A0:
    st32((c.r[28].w[0] - 25708u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D46ACu); set32(c.r[4], c.r[28].w[0] - 25712u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D46ACu) [[unlikely]] return; }
L_005D46AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D46C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D46D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D46D0u) [[unlikely]] return; }
L_005D46D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D46D8u); st32((c.r[28].w[0] - 25684u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D46D8u) [[unlikely]] return; }
L_005D46D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D46E0u); st32((c.r[28].w[0] - 25688u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D46E0u) [[unlikely]] return; }
L_005D46E0:
    st32((c.r[28].w[0] - 25692u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D46ECu); set32(c.r[4], c.r[28].w[0] - 25696u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D46ECu) [[unlikely]] return; }
L_005D46EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 14864u);
    set32(c.r[5], c.r[5].w[0] + 14880u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4708u); set32(c.r[6], c.r[6].w[0] + 20904u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D4708u) [[unlikely]] return; }
L_005D4708:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4730u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4730u) [[unlikely]] return; }
L_005D4730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4738u); st32((c.r[28].w[0] - 25668u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4738u) [[unlikely]] return; }
L_005D4738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4740u); st32((c.r[28].w[0] - 25672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4740u) [[unlikely]] return; }
L_005D4740:
    st32((c.r[28].w[0] - 25676u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D474Cu); set32(c.r[4], c.r[28].w[0] - 25680u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D474Cu) [[unlikely]] return; }
L_005D474C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4770u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4770u) [[unlikely]] return; }
L_005D4770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4778u); st32((c.r[28].w[0] - 25648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4778u) [[unlikely]] return; }
L_005D4778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4780u); st32((c.r[28].w[0] - 25652u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4780u) [[unlikely]] return; }
L_005D4780:
    st32((c.r[28].w[0] - 25656u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D478Cu); set32(c.r[4], c.r[28].w[0] - 25660u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D478Cu) [[unlikely]] return; }
L_005D478C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4794u); set32(c.r[4], c.r[28].w[0] - 25664u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D4794u) [[unlikely]] return; }
L_005D4794:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D47A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D47B0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D47B0u) [[unlikely]] return; }
L_005D47B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D47B8u); st32((c.r[28].w[0] - 25624u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D47B8u) [[unlikely]] return; }
L_005D47B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D47C0u); st32((c.r[28].w[0] - 25628u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D47C0u) [[unlikely]] return; }
L_005D47C0:
    st32((c.r[28].w[0] - 25632u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D47CCu); set32(c.r[4], c.r[28].w[0] - 25636u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D47CCu) [[unlikely]] return; }
L_005D47CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D47E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D47F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D47F0u) [[unlikely]] return; }
L_005D47F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D47F8u); st32((c.r[28].w[0] - 25608u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D47F8u) [[unlikely]] return; }
L_005D47F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4800u); st32((c.r[28].w[0] - 25612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4800u) [[unlikely]] return; }
L_005D4800:
    st32((c.r[28].w[0] - 25616u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D480Cu); set32(c.r[4], c.r[28].w[0] - 25620u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D480Cu) [[unlikely]] return; }
L_005D480C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4830u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4830u) [[unlikely]] return; }
L_005D4830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4838u); st32((c.r[28].w[0] - 25576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4838u) [[unlikely]] return; }
L_005D4838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4840u); st32((c.r[28].w[0] - 25580u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4840u) [[unlikely]] return; }
L_005D4840:
    st32((c.r[28].w[0] - 25584u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D484Cu); set32(c.r[4], c.r[28].w[0] - 25588u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D484Cu) [[unlikely]] return; }
L_005D484C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4854u);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D4854u) [[unlikely]] return; }
L_005D4854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D485Cu); st32((c.r[28].w[0] - 25604u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x002734D0u; return; } if (c.pc != 0x005D485Cu) [[unlikely]] return; }
L_005D485C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4864u); st32((c.r[28].w[0] - 25600u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005D4864u) [[unlikely]] return; }
L_005D4864:
    st32((c.r[28].w[0] - 25596u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4890u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4890u) [[unlikely]] return; }
L_005D4890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4898u); st32((c.r[28].w[0] - 25556u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4898u) [[unlikely]] return; }
L_005D4898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D48A0u); st32((c.r[28].w[0] - 25560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D48A0u) [[unlikely]] return; }
L_005D48A0:
    st32((c.r[28].w[0] - 25564u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D48ACu); set32(c.r[4], c.r[28].w[0] - 25568u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D48ACu) [[unlikely]] return; }
L_005D48AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D48C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D48D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D48D0u) [[unlikely]] return; }
L_005D48D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D48D8u); st32((c.r[28].w[0] - 25540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D48D8u) [[unlikely]] return; }
L_005D48D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D48E0u); st32((c.r[28].w[0] - 25544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D48E0u) [[unlikely]] return; }
L_005D48E0:
    st32((c.r[28].w[0] - 25548u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D48ECu); set32(c.r[4], c.r[28].w[0] - 25552u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D48ECu) [[unlikely]] return; }
L_005D48EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4910u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4910u) [[unlikely]] return; }
L_005D4910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4918u); st32((c.r[28].w[0] - 25524u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4918u) [[unlikely]] return; }
L_005D4918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4920u); st32((c.r[28].w[0] - 25528u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4920u) [[unlikely]] return; }
L_005D4920:
    st32((c.r[28].w[0] - 25532u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D492Cu); set32(c.r[4], c.r[28].w[0] - 25536u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D492Cu) [[unlikely]] return; }
L_005D492C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4950u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4950u) [[unlikely]] return; }
L_005D4950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4958u); st32((c.r[28].w[0] - 25504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4958u) [[unlikely]] return; }
L_005D4958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4960u); st32((c.r[28].w[0] - 25508u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4960u) [[unlikely]] return; }
L_005D4960:
    st32((c.r[28].w[0] - 25512u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D496Cu); set32(c.r[4], c.r[28].w[0] - 25516u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D496Cu) [[unlikely]] return; }
L_005D496C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4990u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4990u) [[unlikely]] return; }
L_005D4990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4998u); st32((c.r[28].w[0] - 25488u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4998u) [[unlikely]] return; }
L_005D4998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D49A0u); st32((c.r[28].w[0] - 25492u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D49A0u) [[unlikely]] return; }
L_005D49A0:
    st32((c.r[28].w[0] - 25496u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D49ACu); set32(c.r[4], c.r[28].w[0] - 25500u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D49ACu) [[unlikely]] return; }
L_005D49AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D49C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D49D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D49D0u) [[unlikely]] return; }
L_005D49D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D49D8u); st32((c.r[28].w[0] - 25472u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D49D8u) [[unlikely]] return; }
L_005D49D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D49E0u); st32((c.r[28].w[0] - 25476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D49E0u) [[unlikely]] return; }
L_005D49E0:
    st32((c.r[28].w[0] - 25480u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D49ECu); set32(c.r[4], c.r[28].w[0] - 25484u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D49ECu) [[unlikely]] return; }
L_005D49EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4A10u) [[unlikely]] return; }
L_005D4A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A18u); st32((c.r[28].w[0] - 25456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4A18u) [[unlikely]] return; }
L_005D4A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A20u); st32((c.r[28].w[0] - 25460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4A20u) [[unlikely]] return; }
L_005D4A20:
    st32((c.r[28].w[0] - 25464u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A2Cu); set32(c.r[4], c.r[28].w[0] - 25468u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4A2Cu) [[unlikely]] return; }
L_005D4A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4A50u) [[unlikely]] return; }
L_005D4A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A58u); st32((c.r[28].w[0] - 25432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4A58u) [[unlikely]] return; }
L_005D4A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A60u); st32((c.r[28].w[0] - 25436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4A60u) [[unlikely]] return; }
L_005D4A60:
    st32((c.r[28].w[0] - 25440u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A6Cu); set32(c.r[4], c.r[28].w[0] - 25444u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4A6Cu) [[unlikely]] return; }
L_005D4A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A74u); c.f[12] = ld32((c.r[28].w[0] - 31580u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x005D4A74u) [[unlikely]] return; }
L_005D4A74:
    c.f[12] = ld32((c.r[28].w[0] - 31576u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4A80u); st32((c.r[28].w[0] - 25452u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x005D4A80u) [[unlikely]] return; }
L_005D4A80:
    st32((c.r[28].w[0] - 25448u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AA0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4AA0u) [[unlikely]] return; }
L_005D4AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AA8u); st32((c.r[28].w[0] - 25416u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4AA8u) [[unlikely]] return; }
L_005D4AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AB0u); st32((c.r[28].w[0] - 25420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4AB0u) [[unlikely]] return; }
L_005D4AB0:
    st32((c.r[28].w[0] - 25424u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4ABCu); set32(c.r[4], c.r[28].w[0] - 25428u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4ABCu) [[unlikely]] return; }
L_005D4ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AE0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4AE0u) [[unlikely]] return; }
L_005D4AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AE8u); st32((c.r[28].w[0] - 25400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4AE8u) [[unlikely]] return; }
L_005D4AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AF0u); st32((c.r[28].w[0] - 25404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4AF0u) [[unlikely]] return; }
L_005D4AF0:
    st32((c.r[28].w[0] - 25408u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4AFCu); set32(c.r[4], c.r[28].w[0] - 25412u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4AFCu) [[unlikely]] return; }
L_005D4AFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], c.r[4].w[0] - 1792u);
    set32(c.r[5], c.r[5].w[0] + 30928u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4B1Cu); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D4B1Cu) [[unlikely]] return; }
L_005D4B1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], c.r[4].w[0] - 1728u);
    set32(c.r[5], c.r[5].w[0] + 30928u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4B3Cu); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D4B3Cu) [[unlikely]] return; }
L_005D4B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4B60u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4B60u) [[unlikely]] return; }
L_005D4B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4B68u); st32((c.r[28].w[0] - 25384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4B68u) [[unlikely]] return; }
L_005D4B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4B70u); st32((c.r[28].w[0] - 25388u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4B70u) [[unlikely]] return; }
L_005D4B70:
    st32((c.r[28].w[0] - 25392u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4B7Cu); set32(c.r[4], c.r[28].w[0] - 25396u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4B7Cu) [[unlikely]] return; }
L_005D4B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BA0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4BA0u) [[unlikely]] return; }
L_005D4BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BA8u); st32((c.r[28].w[0] - 25368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4BA8u) [[unlikely]] return; }
L_005D4BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BB0u); st32((c.r[28].w[0] - 25372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4BB0u) [[unlikely]] return; }
L_005D4BB0:
    st32((c.r[28].w[0] - 25376u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BBCu); set32(c.r[4], c.r[28].w[0] - 25380u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4BBCu) [[unlikely]] return; }
L_005D4BBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BE0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4BE0u) [[unlikely]] return; }
L_005D4BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BE8u); st32((c.r[28].w[0] - 25348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4BE8u) [[unlikely]] return; }
L_005D4BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BF0u); st32((c.r[28].w[0] - 25352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4BF0u) [[unlikely]] return; }
L_005D4BF0:
    st32((c.r[28].w[0] - 25356u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4BFCu); set32(c.r[4], c.r[28].w[0] - 25360u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4BFCu) [[unlikely]] return; }
L_005D4BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4C04u); set32(c.r[4], c.r[28].w[0] - 25364u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D4C04u) [[unlikely]] return; }
L_005D4C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4C20u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4C20u) [[unlikely]] return; }
L_005D4C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4C28u); st32((c.r[28].w[0] - 25332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4C28u) [[unlikely]] return; }
L_005D4C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4C30u); st32((c.r[28].w[0] - 25336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4C30u) [[unlikely]] return; }
L_005D4C30:
    st32((c.r[28].w[0] - 25340u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4C3Cu); set32(c.r[4], c.r[28].w[0] - 25344u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4C3Cu) [[unlikely]] return; }
L_005D4C3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 17424u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 17428u), 0u);
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], 0u + 3u);
    st32((c.r[3].w[0] + 17432u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 17436u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 17440u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 17444u), 0u);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[3].w[0] + 17448u), c.r[4].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 17452u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[3].w[0] + 17456u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 17460u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[3].w[0] + 17464u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 17468u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 17472u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 17476u), c.r[5].w[0]);
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 17480u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 17484u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4D00u) [[unlikely]] return; }
L_005D4D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D08u); st32((c.r[28].w[0] - 25316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4D08u) [[unlikely]] return; }
L_005D4D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D10u); st32((c.r[28].w[0] - 25320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4D10u) [[unlikely]] return; }
L_005D4D10:
    st32((c.r[28].w[0] - 25324u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D1Cu); set32(c.r[4], c.r[28].w[0] - 25328u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4D1Cu) [[unlikely]] return; }
L_005D4D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4D40u) [[unlikely]] return; }
L_005D4D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D48u); st32((c.r[28].w[0] - 25300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4D48u) [[unlikely]] return; }
L_005D4D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D50u); st32((c.r[28].w[0] - 25304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4D50u) [[unlikely]] return; }
L_005D4D50:
    st32((c.r[28].w[0] - 25308u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D5Cu); set32(c.r[4], c.r[28].w[0] - 25312u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4D5Cu) [[unlikely]] return; }
L_005D4D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4D80u) [[unlikely]] return; }
L_005D4D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D88u); st32((c.r[28].w[0] - 25284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4D88u) [[unlikely]] return; }
L_005D4D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D90u); st32((c.r[28].w[0] - 25288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4D90u) [[unlikely]] return; }
L_005D4D90:
    st32((c.r[28].w[0] - 25292u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4D9Cu); set32(c.r[4], c.r[28].w[0] - 25296u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4D9Cu) [[unlikely]] return; }
L_005D4D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17920u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] - 8816u);
    set32(c.r[8], c.r[8].w[0] - 8800u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4DDCu); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_00CC(c, 360u, depth + 1u); else { c.pc = 0x00432A30u; return; } if (c.pc != 0x005D4DDCu) [[unlikely]] return; }
L_005D4DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005D4DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4E00u) [[unlikely]] return; }
L_005D4E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E08u); st32((c.r[28].w[0] - 25264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4E08u) [[unlikely]] return; }
L_005D4E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E10u); st32((c.r[28].w[0] - 25268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4E10u) [[unlikely]] return; }
L_005D4E10:
    st32((c.r[28].w[0] - 25272u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E1Cu); set32(c.r[4], c.r[28].w[0] - 25276u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4E1Cu) [[unlikely]] return; }
L_005D4E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E24u); set32(c.r[4], c.r[28].w[0] - 25280u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D4E24u) [[unlikely]] return; }
L_005D4E24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4E40u) [[unlikely]] return; }
L_005D4E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E48u); st32((c.r[28].w[0] - 25248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4E48u) [[unlikely]] return; }
L_005D4E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E50u); st32((c.r[28].w[0] - 25252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4E50u) [[unlikely]] return; }
L_005D4E50:
    st32((c.r[28].w[0] - 25256u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E5Cu); set32(c.r[4], c.r[28].w[0] - 25260u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4E5Cu) [[unlikely]] return; }
L_005D4E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4E80u) [[unlikely]] return; }
L_005D4E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E88u); st32((c.r[28].w[0] - 25232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4E88u) [[unlikely]] return; }
L_005D4E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E90u); st32((c.r[28].w[0] - 25236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4E90u) [[unlikely]] return; }
L_005D4E90:
    st32((c.r[28].w[0] - 25240u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4E9Cu); set32(c.r[4], c.r[28].w[0] - 25244u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4E9Cu) [[unlikely]] return; }
L_005D4E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4EC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4EC0u) [[unlikely]] return; }
L_005D4EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4EC8u); st32((c.r[28].w[0] - 25216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4EC8u) [[unlikely]] return; }
L_005D4EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4ED0u); st32((c.r[28].w[0] - 25220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4ED0u) [[unlikely]] return; }
L_005D4ED0:
    st32((c.r[28].w[0] - 25224u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4EDCu); set32(c.r[4], c.r[28].w[0] - 25228u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4EDCu) [[unlikely]] return; }
L_005D4EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4F00u) [[unlikely]] return; }
L_005D4F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F08u); st32((c.r[28].w[0] - 25200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4F08u) [[unlikely]] return; }
L_005D4F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F10u); st32((c.r[28].w[0] - 25204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4F10u) [[unlikely]] return; }
L_005D4F10:
    st32((c.r[28].w[0] - 25208u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F1Cu); set32(c.r[4], c.r[28].w[0] - 25212u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4F1Cu) [[unlikely]] return; }
L_005D4F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4F40u) [[unlikely]] return; }
L_005D4F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F48u); st32((c.r[28].w[0] - 25184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4F48u) [[unlikely]] return; }
L_005D4F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F50u); st32((c.r[28].w[0] - 25188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4F50u) [[unlikely]] return; }
L_005D4F50:
    st32((c.r[28].w[0] - 25192u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F5Cu); set32(c.r[4], c.r[28].w[0] - 25196u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4F5Cu) [[unlikely]] return; }
L_005D4F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4F80u) [[unlikely]] return; }
L_005D4F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F88u); st32((c.r[28].w[0] - 25164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4F88u) [[unlikely]] return; }
L_005D4F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F90u); st32((c.r[28].w[0] - 25168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4F90u) [[unlikely]] return; }
L_005D4F90:
    st32((c.r[28].w[0] - 25172u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4F9Cu); set32(c.r[4], c.r[28].w[0] - 25176u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4F9Cu) [[unlikely]] return; }
L_005D4F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4FC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D4FC0u) [[unlikely]] return; }
L_005D4FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4FC8u); st32((c.r[28].w[0] - 25148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D4FC8u) [[unlikely]] return; }
L_005D4FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4FD0u); st32((c.r[28].w[0] - 25152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D4FD0u) [[unlikely]] return; }
L_005D4FD0:
    st32((c.r[28].w[0] - 25156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4FDCu); set32(c.r[4], c.r[28].w[0] - 25160u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D4FDCu) [[unlikely]] return; }
L_005D4FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D4FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5000u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5000u) [[unlikely]] return; }
L_005D5000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5008u); st32((c.r[28].w[0] - 25132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5008u) [[unlikely]] return; }
L_005D5008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5010u); st32((c.r[28].w[0] - 25136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5010u) [[unlikely]] return; }
L_005D5010:
    st32((c.r[28].w[0] - 25140u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D501Cu); set32(c.r[4], c.r[28].w[0] - 25144u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D501Cu) [[unlikely]] return; }
L_005D501C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5040u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5040u) [[unlikely]] return; }
L_005D5040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5048u); st32((c.r[28].w[0] - 25116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5048u) [[unlikely]] return; }
L_005D5048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5050u); st32((c.r[28].w[0] - 25120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5050u) [[unlikely]] return; }
L_005D5050:
    st32((c.r[28].w[0] - 25124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D505Cu); set32(c.r[4], c.r[28].w[0] - 25128u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D505Cu) [[unlikely]] return; }
L_005D505C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5080u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5080u) [[unlikely]] return; }
L_005D5080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5088u); st32((c.r[28].w[0] - 25096u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5088u) [[unlikely]] return; }
L_005D5088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5090u); st32((c.r[28].w[0] - 25100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5090u) [[unlikely]] return; }
L_005D5090:
    st32((c.r[28].w[0] - 25104u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D509Cu); set32(c.r[4], c.r[28].w[0] - 25108u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D509Cu) [[unlikely]] return; }
L_005D509C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D50B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D50C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D50C0u) [[unlikely]] return; }
L_005D50C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D50C8u); st32((c.r[28].w[0] - 25080u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D50C8u) [[unlikely]] return; }
L_005D50C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D50D0u); st32((c.r[28].w[0] - 25084u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D50D0u) [[unlikely]] return; }
L_005D50D0:
    st32((c.r[28].w[0] - 25088u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D50DCu); set32(c.r[4], c.r[28].w[0] - 25092u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D50DCu) [[unlikely]] return; }
L_005D50DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D50F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5100u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5100u) [[unlikely]] return; }
L_005D5100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5108u); st32((c.r[28].w[0] - 25056u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5108u) [[unlikely]] return; }
L_005D5108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5110u); st32((c.r[28].w[0] - 25060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5110u) [[unlikely]] return; }
L_005D5110:
    st32((c.r[28].w[0] - 25064u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D511Cu); set32(c.r[4], c.r[28].w[0] - 25068u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D511Cu) [[unlikely]] return; }
L_005D511C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5140u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5140u) [[unlikely]] return; }
L_005D5140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5148u); st32((c.r[28].w[0] - 25036u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5148u) [[unlikely]] return; }
L_005D5148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5150u); st32((c.r[28].w[0] - 25040u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5150u) [[unlikely]] return; }
L_005D5150:
    st32((c.r[28].w[0] - 25044u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D515Cu); set32(c.r[4], c.r[28].w[0] - 25048u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D515Cu) [[unlikely]] return; }
L_005D515C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5180u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5180u) [[unlikely]] return; }
L_005D5180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5188u); st32((c.r[28].w[0] - 25020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5188u) [[unlikely]] return; }
L_005D5188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5190u); st32((c.r[28].w[0] - 25024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5190u) [[unlikely]] return; }
L_005D5190:
    st32((c.r[28].w[0] - 25028u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D519Cu); set32(c.r[4], c.r[28].w[0] - 25032u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D519Cu) [[unlikely]] return; }
L_005D519C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D51B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D51C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D51C0u) [[unlikely]] return; }
L_005D51C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D51C8u); st32((c.r[28].w[0] - 25000u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D51C8u) [[unlikely]] return; }
L_005D51C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D51D0u); st32((c.r[28].w[0] - 25004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D51D0u) [[unlikely]] return; }
L_005D51D0:
    st32((c.r[28].w[0] - 25008u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D51DCu); set32(c.r[4], c.r[28].w[0] - 25012u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D51DCu) [[unlikely]] return; }
L_005D51DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D51F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5200u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5200u) [[unlikely]] return; }
L_005D5200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5208u); st32((c.r[28].w[0] - 24980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5208u) [[unlikely]] return; }
L_005D5208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5210u); st32((c.r[28].w[0] - 24984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5210u) [[unlikely]] return; }
L_005D5210:
    st32((c.r[28].w[0] - 24988u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D521Cu); set32(c.r[4], c.r[28].w[0] - 24992u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D521Cu) [[unlikely]] return; }
L_005D521C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5240u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5240u) [[unlikely]] return; }
L_005D5240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5248u); st32((c.r[28].w[0] - 24964u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5248u) [[unlikely]] return; }
L_005D5248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5250u); st32((c.r[28].w[0] - 24968u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5250u) [[unlikely]] return; }
L_005D5250:
    st32((c.r[28].w[0] - 24972u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D525Cu); set32(c.r[4], c.r[28].w[0] - 24976u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D525Cu) [[unlikely]] return; }
L_005D525C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5280u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5280u) [[unlikely]] return; }
L_005D5280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5288u); st32((c.r[28].w[0] - 24948u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5288u) [[unlikely]] return; }
L_005D5288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5290u); st32((c.r[28].w[0] - 24952u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5290u) [[unlikely]] return; }
L_005D5290:
    st32((c.r[28].w[0] - 24956u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D529Cu); set32(c.r[4], c.r[28].w[0] - 24960u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D529Cu) [[unlikely]] return; }
L_005D529C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D52B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D52C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D52C0u) [[unlikely]] return; }
L_005D52C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D52C8u); st32((c.r[28].w[0] - 24932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D52C8u) [[unlikely]] return; }
L_005D52C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D52D0u); st32((c.r[28].w[0] - 24936u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D52D0u) [[unlikely]] return; }
L_005D52D0:
    st32((c.r[28].w[0] - 24940u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D52DCu); set32(c.r[4], c.r[28].w[0] - 24944u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D52DCu) [[unlikely]] return; }
L_005D52DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D52F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5300u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5300u) [[unlikely]] return; }
L_005D5300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5308u); st32((c.r[28].w[0] - 24912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5308u) [[unlikely]] return; }
L_005D5308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5310u); st32((c.r[28].w[0] - 24916u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5310u) [[unlikely]] return; }
L_005D5310:
    st32((c.r[28].w[0] - 24920u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D531Cu); set32(c.r[4], c.r[28].w[0] - 24924u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D531Cu) [[unlikely]] return; }
L_005D531C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5340u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5340u) [[unlikely]] return; }
L_005D5340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5348u); st32((c.r[28].w[0] - 24896u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5348u) [[unlikely]] return; }
L_005D5348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5350u); st32((c.r[28].w[0] - 24900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5350u) [[unlikely]] return; }
L_005D5350:
    st32((c.r[28].w[0] - 24904u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D535Cu); set32(c.r[4], c.r[28].w[0] - 24908u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D535Cu) [[unlikely]] return; }
L_005D535C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5380u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5380u) [[unlikely]] return; }
L_005D5380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5388u); st32((c.r[28].w[0] - 24880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5388u) [[unlikely]] return; }
L_005D5388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5390u); st32((c.r[28].w[0] - 24884u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5390u) [[unlikely]] return; }
L_005D5390:
    st32((c.r[28].w[0] - 24888u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D539Cu); set32(c.r[4], c.r[28].w[0] - 24892u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D539Cu) [[unlikely]] return; }
L_005D539C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D53B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D53C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D53C0u) [[unlikely]] return; }
L_005D53C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D53C8u); st32((c.r[28].w[0] - 24864u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D53C8u) [[unlikely]] return; }
L_005D53C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D53D0u); st32((c.r[28].w[0] - 24868u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D53D0u) [[unlikely]] return; }
L_005D53D0:
    st32((c.r[28].w[0] - 24872u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D53DCu); set32(c.r[4], c.r[28].w[0] - 24876u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D53DCu) [[unlikely]] return; }
L_005D53DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D53F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5400u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5400u) [[unlikely]] return; }
L_005D5400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5408u); st32((c.r[28].w[0] - 24848u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5408u) [[unlikely]] return; }
L_005D5408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5410u); st32((c.r[28].w[0] - 24852u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5410u) [[unlikely]] return; }
L_005D5410:
    st32((c.r[28].w[0] - 24856u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D541Cu); set32(c.r[4], c.r[28].w[0] - 24860u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D541Cu) [[unlikely]] return; }
L_005D541C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5440u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5440u) [[unlikely]] return; }
L_005D5440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5448u); st32((c.r[28].w[0] - 24828u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5448u) [[unlikely]] return; }
L_005D5448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5450u); st32((c.r[28].w[0] - 24832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5450u) [[unlikely]] return; }
L_005D5450:
    st32((c.r[28].w[0] - 24836u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D545Cu); set32(c.r[4], c.r[28].w[0] - 24840u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D545Cu) [[unlikely]] return; }
L_005D545C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5480u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5480u) [[unlikely]] return; }
L_005D5480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5488u); st32((c.r[28].w[0] - 24808u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5488u) [[unlikely]] return; }
L_005D5488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5490u); st32((c.r[28].w[0] - 24812u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5490u) [[unlikely]] return; }
L_005D5490:
    st32((c.r[28].w[0] - 24816u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D549Cu); set32(c.r[4], c.r[28].w[0] - 24820u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D549Cu) [[unlikely]] return; }
L_005D549C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st8((c.r[3].w[0] - 1648u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D54B8u); st32((c.r[2].w[0] - 1644u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x005D54B8u) [[unlikely]] return; }
L_005D54B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1648u);
    set32(c.r[5], c.r[5].w[0] + 19744u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D54D4u); set32(c.r[6], c.r[6].w[0] - 1664u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D54D4u) [[unlikely]] return; }
L_005D54D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D54E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D54F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D54F0u) [[unlikely]] return; }
L_005D54F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D54F8u); st32((c.r[28].w[0] - 24792u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D54F8u) [[unlikely]] return; }
L_005D54F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5500u); st32((c.r[28].w[0] - 24796u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5500u) [[unlikely]] return; }
L_005D5500:
    st32((c.r[28].w[0] - 24800u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D550Cu); set32(c.r[4], c.r[28].w[0] - 24804u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D550Cu) [[unlikely]] return; }
L_005D550C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 1600u);
    set32(c.r[5], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 26269u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D552Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 198u, depth + 1u); else { c.pc = 0x00445500u; return; } if (c.pc != 0x005D552Cu) [[unlikely]] return; }
L_005D552C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1600u);
    set32(c.r[5], c.r[5].w[0] + 21840u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5548u); set32(c.r[6], c.r[6].w[0] - 1624u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5548u) [[unlikely]] return; }
L_005D5548:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5570u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5570u) [[unlikely]] return; }
L_005D5570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5578u); st32((c.r[28].w[0] - 24776u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5578u) [[unlikely]] return; }
L_005D5578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5580u); st32((c.r[28].w[0] - 24780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5580u) [[unlikely]] return; }
L_005D5580:
    st32((c.r[28].w[0] - 24784u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D558Cu); set32(c.r[4], c.r[28].w[0] - 24788u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D558Cu) [[unlikely]] return; }
L_005D558C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D55A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D55B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D55B0u) [[unlikely]] return; }
L_005D55B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D55B8u); st32((c.r[28].w[0] - 24756u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D55B8u) [[unlikely]] return; }
L_005D55B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D55C0u); st32((c.r[28].w[0] - 24760u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D55C0u) [[unlikely]] return; }
L_005D55C0:
    st32((c.r[28].w[0] - 24764u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D55CCu); set32(c.r[4], c.r[28].w[0] - 24768u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D55CCu) [[unlikely]] return; }
L_005D55CC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[16].w[0] - 1552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D55DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x005D55DCu) [[unlikely]] return; }
L_005D55DC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_005D55F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D55F0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x005D55F0u) [[unlikely]] return; }
L_005D55F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005D55F4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  goto L_005D5608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5604u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x005D5604u) [[unlikely]] return; }
L_005D5604:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_005D5608:
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5624u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D2(c, 294u, depth + 1u); else { c.pc = 0x0044A6D0u; return; } if (c.pc != 0x005D5624u) [[unlikely]] return; }
L_005D5624:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1552u);
    set32(c.r[5], c.r[5].w[0] - 22688u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5640u); set32(c.r[6], c.r[6].w[0] - 1568u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5640u) [[unlikely]] return; }
L_005D5640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005D5650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5660u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5660u) [[unlikely]] return; }
L_005D5660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5668u); st32((c.r[28].w[0] - 24736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5668u) [[unlikely]] return; }
L_005D5668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5670u); st32((c.r[28].w[0] - 24740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5670u) [[unlikely]] return; }
L_005D5670:
    st32((c.r[28].w[0] - 24744u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D567Cu); set32(c.r[4], c.r[28].w[0] - 24748u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D567Cu) [[unlikely]] return; }
L_005D567C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D56A0u) [[unlikely]] return; }
L_005D56A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56A8u); st32((c.r[28].w[0] - 24720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D56A8u) [[unlikely]] return; }
L_005D56A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56B0u); st32((c.r[28].w[0] - 24724u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D56B0u) [[unlikely]] return; }
L_005D56B0:
    st32((c.r[28].w[0] - 24728u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56BCu); set32(c.r[4], c.r[28].w[0] - 24732u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D56BCu) [[unlikely]] return; }
L_005D56BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D56D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D56E0u) [[unlikely]] return; }
L_005D56E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56E8u); st32((c.r[28].w[0] - 24688u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D56E8u) [[unlikely]] return; }
L_005D56E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56F0u); st32((c.r[28].w[0] - 24692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D56F0u) [[unlikely]] return; }
L_005D56F0:
    st32((c.r[28].w[0] - 24696u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D56FCu); set32(c.r[4], c.r[28].w[0] - 24700u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D56FCu) [[unlikely]] return; }
L_005D56FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5704u); set32(c.r[4], c.r[28].w[0] - 24716u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D5704u) [[unlikely]] return; }
L_005D5704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] - 1512u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 1508u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1512u);
    st32((c.r[2].w[0] - 1504u), 0u);
    set32(c.r[5], c.r[5].w[0] + 5840u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5738u); set32(c.r[6], c.r[6].w[0] - 1528u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5738u) [[unlikely]] return; }
L_005D5738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5760u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5760u) [[unlikely]] return; }
L_005D5760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5768u); st32((c.r[28].w[0] - 24664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5768u) [[unlikely]] return; }
L_005D5768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5770u); st32((c.r[28].w[0] - 24668u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5770u) [[unlikely]] return; }
L_005D5770:
    st32((c.r[28].w[0] - 24672u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D577Cu); set32(c.r[4], c.r[28].w[0] - 24676u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D577Cu) [[unlikely]] return; }
L_005D577C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D57A0u) [[unlikely]] return; }
L_005D57A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57A8u); st32((c.r[28].w[0] - 24648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D57A8u) [[unlikely]] return; }
L_005D57A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57B0u); st32((c.r[28].w[0] - 24652u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D57B0u) [[unlikely]] return; }
L_005D57B0:
    st32((c.r[28].w[0] - 24656u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57BCu); set32(c.r[4], c.r[28].w[0] - 24660u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D57BCu) [[unlikely]] return; }
L_005D57BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D57D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D57E0u) [[unlikely]] return; }
L_005D57E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57E8u); st32((c.r[28].w[0] - 24632u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D57E8u) [[unlikely]] return; }
L_005D57E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57F0u); st32((c.r[28].w[0] - 24636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D57F0u) [[unlikely]] return; }
L_005D57F0:
    st32((c.r[28].w[0] - 24640u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D57FCu); set32(c.r[4], c.r[28].w[0] - 24644u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D57FCu) [[unlikely]] return; }
L_005D57FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 30328u);
    set32(c.r[5], c.r[5].w[0] + 30377u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5818u); set32(c.r[6], c.r[6].w[0] - 18368u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D5818u) [[unlikely]] return; }
L_005D5818:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5840u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5840u) [[unlikely]] return; }
L_005D5840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5848u); st32((c.r[28].w[0] - 24612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5848u) [[unlikely]] return; }
L_005D5848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5850u); st32((c.r[28].w[0] - 24616u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5850u) [[unlikely]] return; }
L_005D5850:
    st32((c.r[28].w[0] - 24620u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D585Cu); set32(c.r[4], c.r[28].w[0] - 24624u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D585Cu) [[unlikely]] return; }
L_005D585C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5864u);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D5864u) [[unlikely]] return; }
L_005D5864:
    st32((c.r[28].w[0] - 24628u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5890u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5890u) [[unlikely]] return; }
L_005D5890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5898u); st32((c.r[28].w[0] - 24596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5898u) [[unlikely]] return; }
L_005D5898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D58A0u); st32((c.r[28].w[0] - 24600u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D58A0u) [[unlikely]] return; }
L_005D58A0:
    st32((c.r[28].w[0] - 24604u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D58ACu); set32(c.r[4], c.r[28].w[0] - 24608u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D58ACu) [[unlikely]] return; }
L_005D58AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D58C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D58D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D58D0u) [[unlikely]] return; }
L_005D58D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D58D8u); st32((c.r[28].w[0] - 24580u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D58D8u) [[unlikely]] return; }
L_005D58D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D58E0u); st32((c.r[28].w[0] - 24584u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D58E0u) [[unlikely]] return; }
L_005D58E0:
    st32((c.r[28].w[0] - 24588u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D58ECu); set32(c.r[4], c.r[28].w[0] - 24592u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D58ECu) [[unlikely]] return; }
L_005D58EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5910u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5910u) [[unlikely]] return; }
L_005D5910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5918u); st32((c.r[28].w[0] - 24564u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5918u) [[unlikely]] return; }
L_005D5918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5920u); st32((c.r[28].w[0] - 24568u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5920u) [[unlikely]] return; }
L_005D5920:
    st32((c.r[28].w[0] - 24572u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D592Cu); set32(c.r[4], c.r[28].w[0] - 24576u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D592Cu) [[unlikely]] return; }
L_005D592C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5950u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5950u) [[unlikely]] return; }
L_005D5950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5958u); st32((c.r[28].w[0] - 24544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5958u) [[unlikely]] return; }
L_005D5958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5960u); st32((c.r[28].w[0] - 24548u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5960u) [[unlikely]] return; }
L_005D5960:
    st32((c.r[28].w[0] - 24552u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D596Cu); set32(c.r[4], c.r[28].w[0] - 24556u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D596Cu) [[unlikely]] return; }
L_005D596C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5990u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5990u) [[unlikely]] return; }
L_005D5990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5998u); st32((c.r[28].w[0] - 24528u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5998u) [[unlikely]] return; }
L_005D5998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D59A0u); st32((c.r[28].w[0] - 24532u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D59A0u) [[unlikely]] return; }
L_005D59A0:
    st32((c.r[28].w[0] - 24536u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D59ACu); set32(c.r[4], c.r[28].w[0] - 24540u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D59ACu) [[unlikely]] return; }
L_005D59AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D59C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D59D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D59D0u) [[unlikely]] return; }
L_005D59D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D59D8u); st32((c.r[28].w[0] - 24512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D59D8u) [[unlikely]] return; }
L_005D59D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D59E0u); st32((c.r[28].w[0] - 24516u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D59E0u) [[unlikely]] return; }
L_005D59E0:
    st32((c.r[28].w[0] - 24520u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D59ECu); set32(c.r[4], c.r[28].w[0] - 24524u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D59ECu) [[unlikely]] return; }
L_005D59EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5A10u) [[unlikely]] return; }
L_005D5A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A18u); st32((c.r[28].w[0] - 24496u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5A18u) [[unlikely]] return; }
L_005D5A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A20u); st32((c.r[28].w[0] - 24500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5A20u) [[unlikely]] return; }
L_005D5A20:
    st32((c.r[28].w[0] - 24504u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A2Cu); set32(c.r[4], c.r[28].w[0] - 24508u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5A2Cu) [[unlikely]] return; }
L_005D5A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5A50u) [[unlikely]] return; }
L_005D5A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A58u); st32((c.r[28].w[0] - 24480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5A58u) [[unlikely]] return; }
L_005D5A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A60u); st32((c.r[28].w[0] - 24484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5A60u) [[unlikely]] return; }
L_005D5A60:
    st32((c.r[28].w[0] - 24488u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A6Cu); set32(c.r[4], c.r[28].w[0] - 24492u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5A6Cu) [[unlikely]] return; }
L_005D5A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A90u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5A90u) [[unlikely]] return; }
L_005D5A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5A98u); st32((c.r[28].w[0] - 24416u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5A98u) [[unlikely]] return; }
L_005D5A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5AA0u); st32((c.r[28].w[0] - 24420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5AA0u) [[unlikely]] return; }
L_005D5AA0:
    st32((c.r[28].w[0] - 24424u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5AACu); set32(c.r[4], c.r[28].w[0] - 24428u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5AACu) [[unlikely]] return; }
L_005D5AAC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24456u), 0u);  if (t) { goto L_005D5AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5AC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D5AC0u) [[unlikely]] return; }
L_005D5AC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5AD0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D5AD0u) [[unlikely]] return; }
L_005D5AD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 24456u);
    set32(c.r[5], c.r[5].w[0] - 7504u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5AE8u); set32(c.r[6], c.r[6].w[0] - 1496u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5AE8u) [[unlikely]] return; }
L_005D5AE8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24452u), 0u);  if (t) { goto L_005D5B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5AFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D5AFCu) [[unlikely]] return; }
L_005D5AFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D5B0Cu) [[unlikely]] return; }
L_005D5B0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 24452u);
    set32(c.r[5], c.r[5].w[0] - 4096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B24u); set32(c.r[6], c.r[6].w[0] - 1480u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5B24u) [[unlikely]] return; }
L_005D5B24:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24448u), 0u);  if (t) { goto L_005D5B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D5B38u) [[unlikely]] return; }
L_005D5B38:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B48u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D5B48u) [[unlikely]] return; }
L_005D5B48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 24448u);
    set32(c.r[5], c.r[5].w[0] - 4096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B60u); set32(c.r[6], c.r[6].w[0] - 1464u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5B60u) [[unlikely]] return; }
L_005D5B60:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24444u), 0u);  if (t) { goto L_005D5B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D5B74u) [[unlikely]] return; }
L_005D5B74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B84u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D5B84u) [[unlikely]] return; }
L_005D5B84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 24444u);
    set32(c.r[5], c.r[5].w[0] + 20368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5B9Cu); set32(c.r[6], c.r[6].w[0] - 1448u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5B9Cu) [[unlikely]] return; }
L_005D5B9C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24436u), 0u);  if (t) { goto L_005D5BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5BB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D5BB0u) [[unlikely]] return; }
L_005D5BB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5BC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D5BC0u) [[unlikely]] return; }
L_005D5BC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 24436u);
    set32(c.r[5], c.r[5].w[0] - 7504u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5BD8u); set32(c.r[6], c.r[6].w[0] - 1432u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5BD8u) [[unlikely]] return; }
L_005D5BD8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24432u), 0u);  if (t) { goto L_005D5BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5BECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D5BECu) [[unlikely]] return; }
L_005D5BEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5BFCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D5BFCu) [[unlikely]] return; }
L_005D5BFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 24432u);
    set32(c.r[5], c.r[5].w[0] - 4096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C14u); set32(c.r[6], c.r[6].w[0] - 1416u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D5C14u) [[unlikely]] return; }
L_005D5C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D5C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5C40u) [[unlikely]] return; }
L_005D5C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C48u); st32((c.r[28].w[0] - 24400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5C48u) [[unlikely]] return; }
L_005D5C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C50u); st32((c.r[28].w[0] - 24404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5C50u) [[unlikely]] return; }
L_005D5C50:
    st32((c.r[28].w[0] - 24408u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C5Cu); set32(c.r[4], c.r[28].w[0] - 24412u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5C5Cu) [[unlikely]] return; }
L_005D5C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5C80u) [[unlikely]] return; }
L_005D5C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C88u); st32((c.r[28].w[0] - 24384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5C88u) [[unlikely]] return; }
L_005D5C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C90u); st32((c.r[28].w[0] - 24388u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5C90u) [[unlikely]] return; }
L_005D5C90:
    st32((c.r[28].w[0] - 24392u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5C9Cu); set32(c.r[4], c.r[28].w[0] - 24396u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5C9Cu) [[unlikely]] return; }
L_005D5C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5CC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5CC0u) [[unlikely]] return; }
L_005D5CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5CC8u); st32((c.r[28].w[0] - 24364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5CC8u) [[unlikely]] return; }
L_005D5CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5CD0u); st32((c.r[28].w[0] - 24368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5CD0u) [[unlikely]] return; }
L_005D5CD0:
    st32((c.r[28].w[0] - 24372u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5CDCu); set32(c.r[4], c.r[28].w[0] - 24376u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5CDCu) [[unlikely]] return; }
L_005D5CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5D00u) [[unlikely]] return; }
L_005D5D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D08u); st32((c.r[28].w[0] - 24348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5D08u) [[unlikely]] return; }
L_005D5D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D10u); st32((c.r[28].w[0] - 24352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5D10u) [[unlikely]] return; }
L_005D5D10:
    st32((c.r[28].w[0] - 24356u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D1Cu); set32(c.r[4], c.r[28].w[0] - 24360u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5D1Cu) [[unlikely]] return; }
L_005D5D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5D40u) [[unlikely]] return; }
L_005D5D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D48u); st32((c.r[28].w[0] - 24316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5D48u) [[unlikely]] return; }
L_005D5D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D50u); st32((c.r[28].w[0] - 24320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5D50u) [[unlikely]] return; }
L_005D5D50:
    st32((c.r[28].w[0] - 24324u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D5Cu); set32(c.r[4], c.r[28].w[0] - 24328u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5D5Cu) [[unlikely]] return; }
L_005D5D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5D80u) [[unlikely]] return; }
L_005D5D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D88u); st32((c.r[28].w[0] - 24292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5D88u) [[unlikely]] return; }
L_005D5D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D90u); st32((c.r[28].w[0] - 24296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5D90u) [[unlikely]] return; }
L_005D5D90:
    st32((c.r[28].w[0] - 24300u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5D9Cu); set32(c.r[4], c.r[28].w[0] - 24304u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5D9Cu) [[unlikely]] return; }
L_005D5D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5DC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5DC0u) [[unlikely]] return; }
L_005D5DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5DC8u); st32((c.r[28].w[0] - 24276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5DC8u) [[unlikely]] return; }
L_005D5DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5DD0u); st32((c.r[28].w[0] - 24280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5DD0u) [[unlikely]] return; }
L_005D5DD0:
    st32((c.r[28].w[0] - 24284u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5DDCu); set32(c.r[4], c.r[28].w[0] - 24288u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5DDCu) [[unlikely]] return; }
L_005D5DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5E00u) [[unlikely]] return; }
L_005D5E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E08u); st32((c.r[28].w[0] - 24256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5E08u) [[unlikely]] return; }
L_005D5E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E10u); st32((c.r[28].w[0] - 24260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5E10u) [[unlikely]] return; }
L_005D5E10:
    st32((c.r[28].w[0] - 24264u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E1Cu); set32(c.r[4], c.r[28].w[0] - 24268u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5E1Cu) [[unlikely]] return; }
L_005D5E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5E40u) [[unlikely]] return; }
L_005D5E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E48u); st32((c.r[28].w[0] - 24236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5E48u) [[unlikely]] return; }
L_005D5E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E50u); st32((c.r[28].w[0] - 24240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5E50u) [[unlikely]] return; }
L_005D5E50:
    st32((c.r[28].w[0] - 24244u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E5Cu); set32(c.r[4], c.r[28].w[0] - 24248u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5E5Cu) [[unlikely]] return; }
L_005D5E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5E80u) [[unlikely]] return; }
L_005D5E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E88u); st32((c.r[28].w[0] - 24220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5E88u) [[unlikely]] return; }
L_005D5E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E90u); st32((c.r[28].w[0] - 24224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5E90u) [[unlikely]] return; }
L_005D5E90:
    st32((c.r[28].w[0] - 24228u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5E9Cu); set32(c.r[4], c.r[28].w[0] - 24232u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5E9Cu) [[unlikely]] return; }
L_005D5E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5EC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5EC0u) [[unlikely]] return; }
L_005D5EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5EC8u); st32((c.r[28].w[0] - 24204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5EC8u) [[unlikely]] return; }
L_005D5EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5ED0u); st32((c.r[28].w[0] - 24208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5ED0u) [[unlikely]] return; }
L_005D5ED0:
    st32((c.r[28].w[0] - 24212u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5EDCu); set32(c.r[4], c.r[28].w[0] - 24216u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5EDCu) [[unlikely]] return; }
L_005D5EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5F00u) [[unlikely]] return; }
L_005D5F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F08u); st32((c.r[28].w[0] - 24188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5F08u) [[unlikely]] return; }
L_005D5F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F10u); st32((c.r[28].w[0] - 24192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5F10u) [[unlikely]] return; }
L_005D5F10:
    st32((c.r[28].w[0] - 24196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F1Cu); set32(c.r[4], c.r[28].w[0] - 24200u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5F1Cu) [[unlikely]] return; }
L_005D5F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5F40u) [[unlikely]] return; }
L_005D5F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F48u); st32((c.r[28].w[0] - 24172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5F48u) [[unlikely]] return; }
L_005D5F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F50u); st32((c.r[28].w[0] - 24176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5F50u) [[unlikely]] return; }
L_005D5F50:
    st32((c.r[28].w[0] - 24180u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F5Cu); set32(c.r[4], c.r[28].w[0] - 24184u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5F5Cu) [[unlikely]] return; }
L_005D5F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5F80u) [[unlikely]] return; }
L_005D5F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F88u); st32((c.r[28].w[0] - 24156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5F88u) [[unlikely]] return; }
L_005D5F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F90u); st32((c.r[28].w[0] - 24160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5F90u) [[unlikely]] return; }
L_005D5F90:
    st32((c.r[28].w[0] - 24164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5F9Cu); set32(c.r[4], c.r[28].w[0] - 24168u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5F9Cu) [[unlikely]] return; }
L_005D5F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5FC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D5FC0u) [[unlikely]] return; }
L_005D5FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5FC8u); st32((c.r[28].w[0] - 24140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D5FC8u) [[unlikely]] return; }
L_005D5FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5FD0u); st32((c.r[28].w[0] - 24144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D5FD0u) [[unlikely]] return; }
L_005D5FD0:
    st32((c.r[28].w[0] - 24148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D5FDCu); set32(c.r[4], c.r[28].w[0] - 24152u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D5FDCu) [[unlikely]] return; }
L_005D5FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D5FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6000u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6000u) [[unlikely]] return; }
L_005D6000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6008u); st32((c.r[28].w[0] - 24120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6008u) [[unlikely]] return; }
L_005D6008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6010u); st32((c.r[28].w[0] - 24124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6010u) [[unlikely]] return; }
L_005D6010:
    st32((c.r[28].w[0] - 24128u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D601Cu); set32(c.r[4], c.r[28].w[0] - 24132u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D601Cu) [[unlikely]] return; }
L_005D601C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6040u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6040u) [[unlikely]] return; }
L_005D6040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6048u); st32((c.r[28].w[0] - 24104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6048u) [[unlikely]] return; }
L_005D6048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6050u); st32((c.r[28].w[0] - 24108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6050u) [[unlikely]] return; }
L_005D6050:
    st32((c.r[28].w[0] - 24112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D605Cu); set32(c.r[4], c.r[28].w[0] - 24116u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D605Cu) [[unlikely]] return; }
L_005D605C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6080u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6080u) [[unlikely]] return; }
L_005D6080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6088u); st32((c.r[28].w[0] - 24088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6088u) [[unlikely]] return; }
L_005D6088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6090u); st32((c.r[28].w[0] - 24092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6090u) [[unlikely]] return; }
L_005D6090:
    st32((c.r[28].w[0] - 24096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D609Cu); set32(c.r[4], c.r[28].w[0] - 24100u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D609Cu) [[unlikely]] return; }
L_005D609C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D60B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D60C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D60C0u) [[unlikely]] return; }
L_005D60C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D60C8u); st32((c.r[28].w[0] - 24072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D60C8u) [[unlikely]] return; }
L_005D60C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D60D0u); st32((c.r[28].w[0] - 24076u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D60D0u) [[unlikely]] return; }
L_005D60D0:
    st32((c.r[28].w[0] - 24080u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D60DCu); set32(c.r[4], c.r[28].w[0] - 24084u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D60DCu) [[unlikely]] return; }
L_005D60DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D60F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6100u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6100u) [[unlikely]] return; }
L_005D6100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6108u); st32((c.r[28].w[0] - 24056u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6108u) [[unlikely]] return; }
L_005D6108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6110u); st32((c.r[28].w[0] - 24060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6110u) [[unlikely]] return; }
L_005D6110:
    st32((c.r[28].w[0] - 24064u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D611Cu); set32(c.r[4], c.r[28].w[0] - 24068u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D611Cu) [[unlikely]] return; }
L_005D611C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6140u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6140u) [[unlikely]] return; }
L_005D6140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6148u); st32((c.r[28].w[0] - 24040u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6148u) [[unlikely]] return; }
L_005D6148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6150u); st32((c.r[28].w[0] - 24044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6150u) [[unlikely]] return; }
L_005D6150:
    st32((c.r[28].w[0] - 24048u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D615Cu); set32(c.r[4], c.r[28].w[0] - 24052u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D615Cu) [[unlikely]] return; }
L_005D615C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6180u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6180u) [[unlikely]] return; }
L_005D6180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6188u); st32((c.r[28].w[0] - 24024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6188u) [[unlikely]] return; }
L_005D6188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6190u); st32((c.r[28].w[0] - 24028u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6190u) [[unlikely]] return; }
L_005D6190:
    st32((c.r[28].w[0] - 24032u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D619Cu); set32(c.r[4], c.r[28].w[0] - 24036u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D619Cu) [[unlikely]] return; }
L_005D619C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D61B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D61C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D61C0u) [[unlikely]] return; }
L_005D61C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D61C8u); st32((c.r[28].w[0] - 24008u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D61C8u) [[unlikely]] return; }
L_005D61C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D61D0u); st32((c.r[28].w[0] - 24012u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D61D0u) [[unlikely]] return; }
L_005D61D0:
    st32((c.r[28].w[0] - 24016u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D61DCu); set32(c.r[4], c.r[28].w[0] - 24020u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D61DCu) [[unlikely]] return; }
L_005D61DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D61F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6200u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6200u) [[unlikely]] return; }
L_005D6200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6208u); st32((c.r[28].w[0] - 23992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6208u) [[unlikely]] return; }
L_005D6208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6210u); st32((c.r[28].w[0] - 23996u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6210u) [[unlikely]] return; }
L_005D6210:
    st32((c.r[28].w[0] - 24000u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D621Cu); set32(c.r[4], c.r[28].w[0] - 24004u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D621Cu) [[unlikely]] return; }
L_005D621C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6240u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6240u) [[unlikely]] return; }
L_005D6240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6248u); st32((c.r[28].w[0] - 23976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6248u) [[unlikely]] return; }
L_005D6248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6250u); st32((c.r[28].w[0] - 23980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6250u) [[unlikely]] return; }
L_005D6250:
    st32((c.r[28].w[0] - 23984u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D625Cu); set32(c.r[4], c.r[28].w[0] - 23988u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D625Cu) [[unlikely]] return; }
L_005D625C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6280u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6280u) [[unlikely]] return; }
L_005D6280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6288u); st32((c.r[28].w[0] - 23960u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6288u) [[unlikely]] return; }
L_005D6288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6290u); st32((c.r[28].w[0] - 23964u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6290u) [[unlikely]] return; }
L_005D6290:
    st32((c.r[28].w[0] - 23968u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D629Cu); set32(c.r[4], c.r[28].w[0] - 23972u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D629Cu) [[unlikely]] return; }
L_005D629C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D62B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D62C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D62C0u) [[unlikely]] return; }
L_005D62C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D62C8u); st32((c.r[28].w[0] - 23944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D62C8u) [[unlikely]] return; }
L_005D62C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D62D0u); st32((c.r[28].w[0] - 23948u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D62D0u) [[unlikely]] return; }
L_005D62D0:
    st32((c.r[28].w[0] - 23952u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D62DCu); set32(c.r[4], c.r[28].w[0] - 23956u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D62DCu) [[unlikely]] return; }
L_005D62DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D62F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6300u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6300u) [[unlikely]] return; }
L_005D6300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6308u); st32((c.r[28].w[0] - 23928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6308u) [[unlikely]] return; }
L_005D6308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6310u); st32((c.r[28].w[0] - 23932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6310u) [[unlikely]] return; }
L_005D6310:
    st32((c.r[28].w[0] - 23936u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D631Cu); set32(c.r[4], c.r[28].w[0] - 23940u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D631Cu) [[unlikely]] return; }
L_005D631C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6340u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6340u) [[unlikely]] return; }
L_005D6340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6348u); st32((c.r[28].w[0] - 23912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6348u) [[unlikely]] return; }
L_005D6348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6350u); st32((c.r[28].w[0] - 23916u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6350u) [[unlikely]] return; }
L_005D6350:
    st32((c.r[28].w[0] - 23920u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D635Cu); set32(c.r[4], c.r[28].w[0] - 23924u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D635Cu) [[unlikely]] return; }
L_005D635C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6380u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6380u) [[unlikely]] return; }
L_005D6380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6388u); st32((c.r[28].w[0] - 23896u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6388u) [[unlikely]] return; }
L_005D6388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6390u); st32((c.r[28].w[0] - 23900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6390u) [[unlikely]] return; }
L_005D6390:
    st32((c.r[28].w[0] - 23904u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D639Cu); set32(c.r[4], c.r[28].w[0] - 23908u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D639Cu) [[unlikely]] return; }
L_005D639C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D63B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D63C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D63C0u) [[unlikely]] return; }
L_005D63C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D63C8u); st32((c.r[28].w[0] - 23880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D63C8u) [[unlikely]] return; }
L_005D63C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D63D0u); st32((c.r[28].w[0] - 23884u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D63D0u) [[unlikely]] return; }
L_005D63D0:
    st32((c.r[28].w[0] - 23888u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D63DCu); set32(c.r[4], c.r[28].w[0] - 23892u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D63DCu) [[unlikely]] return; }
L_005D63DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 25024u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 25020u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32348u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0] - 24980u), c.r[6].w[0]);
    st32((c.r[4].w[0] - 25016u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0] - 24972u), 0u);
    st32((c.r[4].w[0] - 25012u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 25008u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 24964u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 25004u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 25000u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32340u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24996u), 0u);
    st32((c.r[5].w[0] - 24956u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24992u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32336u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24988u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24984u), 0u);
    st32((c.r[5].w[0] - 24944u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24976u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32332u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0] - 24928u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 24968u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0] - 24916u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 24960u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24948u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32328u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24932u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[6].w[0] - 24952u), c.f[0]);
    st32((c.r[4].w[0] - 24924u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32324u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24920u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24912u), 0u);
    st32((c.r[7].w[0] - 24940u), c.f[0]);
    st32((c.r[6].w[0] - 24936u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[28].w[0] - 32320u));
    st32((c.r[4].w[0] - 24908u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 24900u), c.r[3].w[0]);
    st32((c.r[5].w[0] - 24904u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 77;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6520u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6520u) [[unlikely]] return; }
L_005D6520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6528u); st32((c.r[28].w[0] - 23864u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6528u) [[unlikely]] return; }
L_005D6528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6530u); st32((c.r[28].w[0] - 23868u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6530u) [[unlikely]] return; }
L_005D6530:
    st32((c.r[28].w[0] - 23872u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D653Cu); set32(c.r[4], c.r[28].w[0] - 23876u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D653Cu) [[unlikely]] return; }
L_005D653C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6560u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6560u) [[unlikely]] return; }
L_005D6560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6568u); st32((c.r[28].w[0] - 23848u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6568u) [[unlikely]] return; }
L_005D6568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6570u); st32((c.r[28].w[0] - 23852u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6570u) [[unlikely]] return; }
L_005D6570:
    st32((c.r[28].w[0] - 23856u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D657Cu); set32(c.r[4], c.r[28].w[0] - 23860u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D657Cu) [[unlikely]] return; }
L_005D657C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D65A0u) [[unlikely]] return; }
L_005D65A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65A8u); st32((c.r[28].w[0] - 23832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D65A8u) [[unlikely]] return; }
L_005D65A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65B0u); st32((c.r[28].w[0] - 23836u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D65B0u) [[unlikely]] return; }
L_005D65B0:
    st32((c.r[28].w[0] - 23840u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65BCu); set32(c.r[4], c.r[28].w[0] - 23844u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D65BCu) [[unlikely]] return; }
L_005D65BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D65D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D65E0u) [[unlikely]] return; }
L_005D65E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65E8u); st32((c.r[28].w[0] - 23816u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D65E8u) [[unlikely]] return; }
L_005D65E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65F0u); st32((c.r[28].w[0] - 23820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D65F0u) [[unlikely]] return; }
L_005D65F0:
    st32((c.r[28].w[0] - 23824u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D65FCu); set32(c.r[4], c.r[28].w[0] - 23828u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D65FCu) [[unlikely]] return; }
L_005D65FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6620u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6620u) [[unlikely]] return; }
L_005D6620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6628u); st32((c.r[28].w[0] - 23800u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6628u) [[unlikely]] return; }
L_005D6628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6630u); st32((c.r[28].w[0] - 23804u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6630u) [[unlikely]] return; }
L_005D6630:
    st32((c.r[28].w[0] - 23808u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D663Cu); set32(c.r[4], c.r[28].w[0] - 23812u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D663Cu) [[unlikely]] return; }
L_005D663C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6660u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6660u) [[unlikely]] return; }
L_005D6660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6668u); st32((c.r[28].w[0] - 23784u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6668u) [[unlikely]] return; }
L_005D6668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6670u); st32((c.r[28].w[0] - 23788u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6670u) [[unlikely]] return; }
L_005D6670:
    st32((c.r[28].w[0] - 23792u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D667Cu); set32(c.r[4], c.r[28].w[0] - 23796u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D667Cu) [[unlikely]] return; }
L_005D667C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D66A0u) [[unlikely]] return; }
L_005D66A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66A8u); st32((c.r[28].w[0] - 23768u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D66A8u) [[unlikely]] return; }
L_005D66A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66B0u); st32((c.r[28].w[0] - 23772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D66B0u) [[unlikely]] return; }
L_005D66B0:
    st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66BCu); set32(c.r[4], c.r[28].w[0] - 23780u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D66BCu) [[unlikely]] return; }
L_005D66BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D66D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D66E0u) [[unlikely]] return; }
L_005D66E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66E8u); st32((c.r[28].w[0] - 23752u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D66E8u) [[unlikely]] return; }
L_005D66E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66F0u); st32((c.r[28].w[0] - 23756u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D66F0u) [[unlikely]] return; }
L_005D66F0:
    st32((c.r[28].w[0] - 23760u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D66FCu); set32(c.r[4], c.r[28].w[0] - 23764u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D66FCu) [[unlikely]] return; }
L_005D66FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6720u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6720u) [[unlikely]] return; }
L_005D6720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6728u); st32((c.r[28].w[0] - 23736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6728u) [[unlikely]] return; }
L_005D6728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6730u); st32((c.r[28].w[0] - 23740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6730u) [[unlikely]] return; }
L_005D6730:
    st32((c.r[28].w[0] - 23744u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D673Cu); set32(c.r[4], c.r[28].w[0] - 23748u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D673Cu) [[unlikely]] return; }
L_005D673C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22064u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 31564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 22060u), 0u);
    st32((c.r[3].w[0] - 22056u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22052u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31720u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22048u), 0u);
    st32((c.r[4].w[0] - 22036u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22044u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] - 22040u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22032u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22020u), c.r[6].w[0]);
    st32((c.r[5].w[0] - 22028u), c.f[1]);
    st32((c.r[4].w[0] - 22024u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D67C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D67D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D67D0u) [[unlikely]] return; }
L_005D67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D67D8u); st32((c.r[28].w[0] - 23720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D67D8u) [[unlikely]] return; }
L_005D67D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D67E0u); st32((c.r[28].w[0] - 23724u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D67E0u) [[unlikely]] return; }
L_005D67E0:
    st32((c.r[28].w[0] - 23728u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D67ECu); set32(c.r[4], c.r[28].w[0] - 23732u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D67ECu) [[unlikely]] return; }
L_005D67EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6810u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6810u) [[unlikely]] return; }
L_005D6810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6818u); st32((c.r[28].w[0] - 23704u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6818u) [[unlikely]] return; }
L_005D6818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6820u); st32((c.r[28].w[0] - 23708u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6820u) [[unlikely]] return; }
L_005D6820:
    st32((c.r[28].w[0] - 23712u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D682Cu); set32(c.r[4], c.r[28].w[0] - 23716u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D682Cu) [[unlikely]] return; }
L_005D682C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 21728u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 31564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 21724u), 0u);
    st32((c.r[3].w[0] - 21720u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 21716u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31720u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 21712u), 0u);
    st32((c.r[4].w[0] - 21700u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 21708u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] - 21704u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 21696u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 21684u), c.r[6].w[0]);
    st32((c.r[5].w[0] - 21692u), c.f[1]);
    st32((c.r[4].w[0] - 21688u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D68B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D68C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D68C0u) [[unlikely]] return; }
L_005D68C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D68C8u); st32((c.r[28].w[0] - 23688u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D68C8u) [[unlikely]] return; }
L_005D68C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D68D0u); st32((c.r[28].w[0] - 23692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D68D0u) [[unlikely]] return; }
L_005D68D0:
    st32((c.r[28].w[0] - 23696u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D68DCu); set32(c.r[4], c.r[28].w[0] - 23700u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D68DCu) [[unlikely]] return; }
L_005D68DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D68F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6900u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6900u) [[unlikely]] return; }
L_005D6900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6908u); st32((c.r[28].w[0] - 23672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6908u) [[unlikely]] return; }
L_005D6908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6910u); st32((c.r[28].w[0] - 23676u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6910u) [[unlikely]] return; }
L_005D6910:
    st32((c.r[28].w[0] - 23680u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D691Cu); set32(c.r[4], c.r[28].w[0] - 23684u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D691Cu) [[unlikely]] return; }
L_005D691C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6940u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6940u) [[unlikely]] return; }
L_005D6940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6948u); st32((c.r[28].w[0] - 23656u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6948u) [[unlikely]] return; }
L_005D6948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6950u); st32((c.r[28].w[0] - 23660u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6950u) [[unlikely]] return; }
L_005D6950:
    st32((c.r[28].w[0] - 23664u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D695Cu); set32(c.r[4], c.r[28].w[0] - 23668u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D695Cu) [[unlikely]] return; }
L_005D695C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6980u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6980u) [[unlikely]] return; }
L_005D6980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6988u); st32((c.r[28].w[0] - 23640u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6988u) [[unlikely]] return; }
L_005D6988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6990u); st32((c.r[28].w[0] - 23644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6990u) [[unlikely]] return; }
L_005D6990:
    st32((c.r[28].w[0] - 23648u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D699Cu); set32(c.r[4], c.r[28].w[0] - 23652u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D699Cu) [[unlikely]] return; }
L_005D699C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D69B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D69C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D69C0u) [[unlikely]] return; }
L_005D69C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D69C8u); st32((c.r[28].w[0] - 23624u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D69C8u) [[unlikely]] return; }
L_005D69C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D69D0u); st32((c.r[28].w[0] - 23628u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D69D0u) [[unlikely]] return; }
L_005D69D0:
    st32((c.r[28].w[0] - 23632u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D69DCu); set32(c.r[4], c.r[28].w[0] - 23636u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D69DCu) [[unlikely]] return; }
L_005D69DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D69F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6A00u) [[unlikely]] return; }
L_005D6A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A08u); st32((c.r[28].w[0] - 23608u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6A08u) [[unlikely]] return; }
L_005D6A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A10u); st32((c.r[28].w[0] - 23612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6A10u) [[unlikely]] return; }
L_005D6A10:
    st32((c.r[28].w[0] - 23616u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A1Cu); set32(c.r[4], c.r[28].w[0] - 23620u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6A1Cu) [[unlikely]] return; }
L_005D6A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6A40u) [[unlikely]] return; }
L_005D6A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A48u); st32((c.r[28].w[0] - 23592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6A48u) [[unlikely]] return; }
L_005D6A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A50u); st32((c.r[28].w[0] - 23596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6A50u) [[unlikely]] return; }
L_005D6A50:
    st32((c.r[28].w[0] - 23600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A5Cu); set32(c.r[4], c.r[28].w[0] - 23604u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6A5Cu) [[unlikely]] return; }
L_005D6A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6A80u) [[unlikely]] return; }
L_005D6A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A88u); st32((c.r[28].w[0] - 23576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6A88u) [[unlikely]] return; }
L_005D6A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A90u); st32((c.r[28].w[0] - 23580u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6A90u) [[unlikely]] return; }
L_005D6A90:
    st32((c.r[28].w[0] - 23584u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6A9Cu); set32(c.r[4], c.r[28].w[0] - 23588u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6A9Cu) [[unlikely]] return; }
L_005D6A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6AC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6AC0u) [[unlikely]] return; }
L_005D6AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6AC8u); st32((c.r[28].w[0] - 23560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6AC8u) [[unlikely]] return; }
L_005D6AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6AD0u); st32((c.r[28].w[0] - 23564u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6AD0u) [[unlikely]] return; }
L_005D6AD0:
    st32((c.r[28].w[0] - 23568u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6ADCu); set32(c.r[4], c.r[28].w[0] - 23572u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6ADCu) [[unlikely]] return; }
L_005D6ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6B00u) [[unlikely]] return; }
L_005D6B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B08u); st32((c.r[28].w[0] - 23544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6B08u) [[unlikely]] return; }
L_005D6B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B10u); st32((c.r[28].w[0] - 23548u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6B10u) [[unlikely]] return; }
L_005D6B10:
    st32((c.r[28].w[0] - 23552u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B1Cu); set32(c.r[4], c.r[28].w[0] - 23556u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6B1Cu) [[unlikely]] return; }
L_005D6B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6B40u) [[unlikely]] return; }
L_005D6B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B48u); st32((c.r[28].w[0] - 23528u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6B48u) [[unlikely]] return; }
L_005D6B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B50u); st32((c.r[28].w[0] - 23532u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6B50u) [[unlikely]] return; }
L_005D6B50:
    st32((c.r[28].w[0] - 23536u), c.r[2].w[0]);
    c.budget -= 1;
L_005D6B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B5Cu); set32(c.r[4], c.r[28].w[0] - 23540u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6B5Cu) [[unlikely]] return; }
L_005D6B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6B80u) [[unlikely]] return; }
L_005D6B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B88u); st32((c.r[28].w[0] - 23512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6B88u) [[unlikely]] return; }
L_005D6B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B90u); st32((c.r[28].w[0] - 23516u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6B90u) [[unlikely]] return; }
L_005D6B90:
    st32((c.r[28].w[0] - 23520u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6B9Cu); set32(c.r[4], c.r[28].w[0] - 23524u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6B9Cu) [[unlikely]] return; }
L_005D6B9C:
    c.f[0] = ld32((c.r[28].w[0] - 32020u));
    c.f[1] = fp::max(c.f[0], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32020u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] - 14576u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6BD0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6BD0u) [[unlikely]] return; }
L_005D6BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6BD8u); st32((c.r[28].w[0] - 23496u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6BD8u) [[unlikely]] return; }
L_005D6BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6BE0u); st32((c.r[28].w[0] - 23500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6BE0u) [[unlikely]] return; }
L_005D6BE0:
    st32((c.r[28].w[0] - 23504u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6BECu); set32(c.r[4], c.r[28].w[0] - 23508u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6BECu) [[unlikely]] return; }
L_005D6BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6C10u) [[unlikely]] return; }
L_005D6C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C18u); st32((c.r[28].w[0] - 23480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6C18u) [[unlikely]] return; }
L_005D6C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C20u); st32((c.r[28].w[0] - 23484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6C20u) [[unlikely]] return; }
L_005D6C20:
    st32((c.r[28].w[0] - 23488u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C2Cu); set32(c.r[4], c.r[28].w[0] - 23492u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6C2Cu) [[unlikely]] return; }
L_005D6C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6C50u) [[unlikely]] return; }
L_005D6C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C58u); st32((c.r[28].w[0] - 23464u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6C58u) [[unlikely]] return; }
L_005D6C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C60u); st32((c.r[28].w[0] - 23468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6C60u) [[unlikely]] return; }
L_005D6C60:
    st32((c.r[28].w[0] - 23472u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C6Cu); set32(c.r[4], c.r[28].w[0] - 23476u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6C6Cu) [[unlikely]] return; }
L_005D6C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C90u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6C90u) [[unlikely]] return; }
L_005D6C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6C98u); st32((c.r[28].w[0] - 23448u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6C98u) [[unlikely]] return; }
L_005D6C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6CA0u); st32((c.r[28].w[0] - 23452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6CA0u) [[unlikely]] return; }
L_005D6CA0:
    st32((c.r[28].w[0] - 23456u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6CACu); set32(c.r[4], c.r[28].w[0] - 23460u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6CACu) [[unlikely]] return; }
L_005D6CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6CD0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6CD0u) [[unlikely]] return; }
L_005D6CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6CD8u); st32((c.r[28].w[0] - 23432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6CD8u) [[unlikely]] return; }
L_005D6CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6CE0u); st32((c.r[28].w[0] - 23436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6CE0u) [[unlikely]] return; }
L_005D6CE0:
    st32((c.r[28].w[0] - 23440u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6CECu); set32(c.r[4], c.r[28].w[0] - 23444u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6CECu) [[unlikely]] return; }
L_005D6CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6D10u) [[unlikely]] return; }
L_005D6D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D18u); st32((c.r[28].w[0] - 23416u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6D18u) [[unlikely]] return; }
L_005D6D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D20u); st32((c.r[28].w[0] - 23420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6D20u) [[unlikely]] return; }
L_005D6D20:
    st32((c.r[28].w[0] - 23424u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D2Cu); set32(c.r[4], c.r[28].w[0] - 23428u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6D2Cu) [[unlikely]] return; }
L_005D6D2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6D50u) [[unlikely]] return; }
L_005D6D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D58u); st32((c.r[28].w[0] - 23400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6D58u) [[unlikely]] return; }
L_005D6D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D60u); st32((c.r[28].w[0] - 23404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6D60u) [[unlikely]] return; }
L_005D6D60:
    st32((c.r[28].w[0] - 23408u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D6Cu); set32(c.r[4], c.r[28].w[0] - 23412u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6D6Cu) [[unlikely]] return; }
L_005D6D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D90u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6D90u) [[unlikely]] return; }
L_005D6D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6D98u); st32((c.r[28].w[0] - 23384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6D98u) [[unlikely]] return; }
L_005D6D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6DA0u); st32((c.r[28].w[0] - 23388u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6DA0u) [[unlikely]] return; }
L_005D6DA0:
    st32((c.r[28].w[0] - 23392u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6DACu); set32(c.r[4], c.r[28].w[0] - 23396u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6DACu) [[unlikely]] return; }
L_005D6DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6DD0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6DD0u) [[unlikely]] return; }
L_005D6DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6DD8u); st32((c.r[28].w[0] - 23368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6DD8u) [[unlikely]] return; }
L_005D6DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6DE0u); st32((c.r[28].w[0] - 23372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6DE0u) [[unlikely]] return; }
L_005D6DE0:
    st32((c.r[28].w[0] - 23376u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6DECu); set32(c.r[4], c.r[28].w[0] - 23380u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6DECu) [[unlikely]] return; }
L_005D6DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6E10u) [[unlikely]] return; }
L_005D6E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E18u); st32((c.r[28].w[0] - 23352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6E18u) [[unlikely]] return; }
L_005D6E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E20u); st32((c.r[28].w[0] - 23356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6E20u) [[unlikely]] return; }
L_005D6E20:
    st32((c.r[28].w[0] - 23360u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E2Cu); set32(c.r[4], c.r[28].w[0] - 23364u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6E2Cu) [[unlikely]] return; }
L_005D6E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6E50u) [[unlikely]] return; }
L_005D6E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E58u); st32((c.r[28].w[0] - 23336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6E58u) [[unlikely]] return; }
L_005D6E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E60u); st32((c.r[28].w[0] - 23340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6E60u) [[unlikely]] return; }
L_005D6E60:
    st32((c.r[28].w[0] - 23344u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E6Cu); set32(c.r[4], c.r[28].w[0] - 23348u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6E6Cu) [[unlikely]] return; }
L_005D6E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E90u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6E90u) [[unlikely]] return; }
L_005D6E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6E98u); st32((c.r[28].w[0] - 23320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6E98u) [[unlikely]] return; }
L_005D6E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6EA0u); st32((c.r[28].w[0] - 23324u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6EA0u) [[unlikely]] return; }
L_005D6EA0:
    st32((c.r[28].w[0] - 23328u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6EACu); set32(c.r[4], c.r[28].w[0] - 23332u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6EACu) [[unlikely]] return; }
L_005D6EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6ED0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6ED0u) [[unlikely]] return; }
L_005D6ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6ED8u); st32((c.r[28].w[0] - 23304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6ED8u) [[unlikely]] return; }
L_005D6ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6EE0u); st32((c.r[28].w[0] - 23308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6EE0u) [[unlikely]] return; }
L_005D6EE0:
    st32((c.r[28].w[0] - 23312u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6EECu); set32(c.r[4], c.r[28].w[0] - 23316u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6EECu) [[unlikely]] return; }
L_005D6EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6F10u) [[unlikely]] return; }
L_005D6F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F18u); st32((c.r[28].w[0] - 23284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6F18u) [[unlikely]] return; }
L_005D6F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F20u); st32((c.r[28].w[0] - 23288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6F20u) [[unlikely]] return; }
L_005D6F20:
    st32((c.r[28].w[0] - 23292u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F2Cu); set32(c.r[4], c.r[28].w[0] - 23296u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6F2Cu) [[unlikely]] return; }
L_005D6F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6F50u) [[unlikely]] return; }
L_005D6F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F58u); st32((c.r[28].w[0] - 23268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6F58u) [[unlikely]] return; }
L_005D6F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F60u); st32((c.r[28].w[0] - 23272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6F60u) [[unlikely]] return; }
L_005D6F60:
    st32((c.r[28].w[0] - 23276u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F6Cu); set32(c.r[4], c.r[28].w[0] - 23280u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6F6Cu) [[unlikely]] return; }
L_005D6F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F90u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6F90u) [[unlikely]] return; }
L_005D6F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6F98u); st32((c.r[28].w[0] - 23252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6F98u) [[unlikely]] return; }
L_005D6F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6FA0u); st32((c.r[28].w[0] - 23256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6FA0u) [[unlikely]] return; }
L_005D6FA0:
    st32((c.r[28].w[0] - 23260u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6FACu); set32(c.r[4], c.r[28].w[0] - 23264u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6FACu) [[unlikely]] return; }
L_005D6FAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D6FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6FD0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D6FD0u) [[unlikely]] return; }
L_005D6FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6FD8u); st32((c.r[28].w[0] - 23236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D6FD8u) [[unlikely]] return; }
L_005D6FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6FE0u); st32((c.r[28].w[0] - 23240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D6FE0u) [[unlikely]] return; }
L_005D6FE0:
    st32((c.r[28].w[0] - 23244u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D6FECu); set32(c.r[4], c.r[28].w[0] - 23248u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D6FECu) [[unlikely]] return; }
L_005D6FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7010u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7010u) [[unlikely]] return; }
L_005D7010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7018u); st32((c.r[28].w[0] - 23220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7018u) [[unlikely]] return; }
L_005D7018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7020u); st32((c.r[28].w[0] - 23224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7020u) [[unlikely]] return; }
L_005D7020:
    st32((c.r[28].w[0] - 23228u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D702Cu); set32(c.r[4], c.r[28].w[0] - 23232u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D702Cu) [[unlikely]] return; }
L_005D702C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7050u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7050u) [[unlikely]] return; }
L_005D7050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7058u); st32((c.r[28].w[0] - 23204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7058u) [[unlikely]] return; }
L_005D7058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7060u); st32((c.r[28].w[0] - 23208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7060u) [[unlikely]] return; }
L_005D7060:
    st32((c.r[28].w[0] - 23212u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D706Cu); set32(c.r[4], c.r[28].w[0] - 23216u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D706Cu) [[unlikely]] return; }
L_005D706C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 6112u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 31564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 6108u), 0u);
    st32((c.r[3].w[0] - 6104u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 6100u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31720u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 6096u), 0u);
    st32((c.r[4].w[0] - 6084u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 6092u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] - 6088u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 6080u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 6068u), c.r[6].w[0]);
    st32((c.r[5].w[0] - 6076u), c.f[1]);
    st32((c.r[4].w[0] - 6072u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D70F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7100u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7100u) [[unlikely]] return; }
L_005D7100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7108u); st32((c.r[28].w[0] - 23188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7108u) [[unlikely]] return; }
L_005D7108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7110u); st32((c.r[28].w[0] - 23192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7110u) [[unlikely]] return; }
L_005D7110:
    st32((c.r[28].w[0] - 23196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D711Cu); set32(c.r[4], c.r[28].w[0] - 23200u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D711Cu) [[unlikely]] return; }
L_005D711C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7140u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7140u) [[unlikely]] return; }
L_005D7140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7148u); st32((c.r[28].w[0] - 23172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7148u) [[unlikely]] return; }
L_005D7148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7150u); st32((c.r[28].w[0] - 23176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7150u) [[unlikely]] return; }
L_005D7150:
    st32((c.r[28].w[0] - 23180u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D715Cu); set32(c.r[4], c.r[28].w[0] - 23184u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D715Cu) [[unlikely]] return; }
L_005D715C:
    c.f[0] = ld32((c.r[28].w[0] - 31484u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 5604u), c.r[7].w[0]);
    st32((c.r[6].w[0] - 5616u), c.f[0]);
    st32((c.r[5].w[0] - 5612u), c.f[0]);
    st32((c.r[4].w[0] - 5608u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D71A0u) [[unlikely]] return; }
L_005D71A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71A8u); st32((c.r[28].w[0] - 23156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D71A8u) [[unlikely]] return; }
L_005D71A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71B0u); st32((c.r[28].w[0] - 23160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D71B0u) [[unlikely]] return; }
L_005D71B0:
    st32((c.r[28].w[0] - 23164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71BCu); set32(c.r[4], c.r[28].w[0] - 23168u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D71BCu) [[unlikely]] return; }
L_005D71BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D71D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D71E0u) [[unlikely]] return; }
L_005D71E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71E8u); st32((c.r[28].w[0] - 23140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D71E8u) [[unlikely]] return; }
L_005D71E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71F0u); st32((c.r[28].w[0] - 23144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D71F0u) [[unlikely]] return; }
L_005D71F0:
    st32((c.r[28].w[0] - 23148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D71FCu); set32(c.r[4], c.r[28].w[0] - 23152u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D71FCu) [[unlikely]] return; }
L_005D71FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7220u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7220u) [[unlikely]] return; }
L_005D7220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7228u); st32((c.r[28].w[0] - 23124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7228u) [[unlikely]] return; }
L_005D7228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7230u); st32((c.r[28].w[0] - 23128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7230u) [[unlikely]] return; }
L_005D7230:
    st32((c.r[28].w[0] - 23132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D723Cu); set32(c.r[4], c.r[28].w[0] - 23136u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D723Cu) [[unlikely]] return; }
L_005D723C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7260u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7260u) [[unlikely]] return; }
L_005D7260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7268u); st32((c.r[28].w[0] - 23108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7268u) [[unlikely]] return; }
L_005D7268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7270u); st32((c.r[28].w[0] - 23112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7270u) [[unlikely]] return; }
L_005D7270:
    st32((c.r[28].w[0] - 23116u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D727Cu); set32(c.r[4], c.r[28].w[0] - 23120u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D727Cu) [[unlikely]] return; }
L_005D727C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D72A0u) [[unlikely]] return; }
L_005D72A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72A8u); st32((c.r[28].w[0] - 23092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D72A8u) [[unlikely]] return; }
L_005D72A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72B0u); st32((c.r[28].w[0] - 23096u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D72B0u) [[unlikely]] return; }
L_005D72B0:
    st32((c.r[28].w[0] - 23100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72BCu); set32(c.r[4], c.r[28].w[0] - 23104u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D72BCu) [[unlikely]] return; }
L_005D72BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D72D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D72E0u) [[unlikely]] return; }
L_005D72E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72E8u); st32((c.r[28].w[0] - 23076u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D72E8u) [[unlikely]] return; }
L_005D72E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72F0u); st32((c.r[28].w[0] - 23080u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D72F0u) [[unlikely]] return; }
L_005D72F0:
    st32((c.r[28].w[0] - 23084u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D72FCu); set32(c.r[4], c.r[28].w[0] - 23088u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D72FCu) [[unlikely]] return; }
L_005D72FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7320u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7320u) [[unlikely]] return; }
L_005D7320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7328u); st32((c.r[28].w[0] - 23060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7328u) [[unlikely]] return; }
L_005D7328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7330u); st32((c.r[28].w[0] - 23064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7330u) [[unlikely]] return; }
L_005D7330:
    st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D733Cu); set32(c.r[4], c.r[28].w[0] - 23072u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D733Cu) [[unlikely]] return; }
L_005D733C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7360u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7360u) [[unlikely]] return; }
L_005D7360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7368u); st32((c.r[28].w[0] - 23044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7368u) [[unlikely]] return; }
L_005D7368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7370u); st32((c.r[28].w[0] - 23048u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7370u) [[unlikely]] return; }
L_005D7370:
    st32((c.r[28].w[0] - 23052u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D737Cu); set32(c.r[4], c.r[28].w[0] - 23056u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D737Cu) [[unlikely]] return; }
L_005D737C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D73A0u) [[unlikely]] return; }
L_005D73A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73A8u); st32((c.r[28].w[0] - 23028u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D73A8u) [[unlikely]] return; }
L_005D73A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73B0u); st32((c.r[28].w[0] - 23032u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D73B0u) [[unlikely]] return; }
L_005D73B0:
    st32((c.r[28].w[0] - 23036u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73BCu); set32(c.r[4], c.r[28].w[0] - 23040u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D73BCu) [[unlikely]] return; }
L_005D73BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D73D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D73E0u) [[unlikely]] return; }
L_005D73E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73E8u); st32((c.r[28].w[0] - 23012u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D73E8u) [[unlikely]] return; }
L_005D73E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73F0u); st32((c.r[28].w[0] - 23016u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D73F0u) [[unlikely]] return; }
L_005D73F0:
    st32((c.r[28].w[0] - 23020u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D73FCu); set32(c.r[4], c.r[28].w[0] - 23024u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D73FCu) [[unlikely]] return; }
L_005D73FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7420u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7420u) [[unlikely]] return; }
L_005D7420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7428u); st32((c.r[28].w[0] - 22996u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7428u) [[unlikely]] return; }
L_005D7428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7430u); st32((c.r[28].w[0] - 23000u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7430u) [[unlikely]] return; }
L_005D7430:
    st32((c.r[28].w[0] - 23004u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D743Cu); set32(c.r[4], c.r[28].w[0] - 23008u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D743Cu) [[unlikely]] return; }
L_005D743C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7460u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7460u) [[unlikely]] return; }
L_005D7460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7468u); st32((c.r[28].w[0] - 22980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7468u) [[unlikely]] return; }
L_005D7468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7470u); st32((c.r[28].w[0] - 22984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7470u) [[unlikely]] return; }
L_005D7470:
    st32((c.r[28].w[0] - 22988u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D747Cu); set32(c.r[4], c.r[28].w[0] - 22992u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D747Cu) [[unlikely]] return; }
L_005D747C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D74A0u) [[unlikely]] return; }
L_005D74A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74A8u); st32((c.r[28].w[0] - 22964u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D74A8u) [[unlikely]] return; }
L_005D74A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74B0u); st32((c.r[28].w[0] - 22968u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D74B0u) [[unlikely]] return; }
L_005D74B0:
    st32((c.r[28].w[0] - 22972u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74BCu); set32(c.r[4], c.r[28].w[0] - 22976u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D74BCu) [[unlikely]] return; }
L_005D74BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D74D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D74E0u) [[unlikely]] return; }
L_005D74E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74E8u); st32((c.r[28].w[0] - 22948u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D74E8u) [[unlikely]] return; }
L_005D74E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74F0u); st32((c.r[28].w[0] - 22952u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D74F0u) [[unlikely]] return; }
L_005D74F0:
    st32((c.r[28].w[0] - 22956u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D74FCu); set32(c.r[4], c.r[28].w[0] - 22960u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D74FCu) [[unlikely]] return; }
L_005D74FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7520u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7520u) [[unlikely]] return; }
L_005D7520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7528u); st32((c.r[28].w[0] - 22928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7528u) [[unlikely]] return; }
L_005D7528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7530u); st32((c.r[28].w[0] - 22932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7530u) [[unlikely]] return; }
L_005D7530:
    st32((c.r[28].w[0] - 22936u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D753Cu); set32(c.r[4], c.r[28].w[0] - 22940u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D753Cu) [[unlikely]] return; }
L_005D753C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7560u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7560u) [[unlikely]] return; }
L_005D7560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7568u); st32((c.r[28].w[0] - 22912u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7568u) [[unlikely]] return; }
L_005D7568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7570u); st32((c.r[28].w[0] - 22916u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7570u) [[unlikely]] return; }
L_005D7570:
    st32((c.r[28].w[0] - 22920u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D757Cu); set32(c.r[4], c.r[28].w[0] - 22924u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D757Cu) [[unlikely]] return; }
L_005D757C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D75A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D75A0u) [[unlikely]] return; }
L_005D75A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D75A8u); st32((c.r[28].w[0] - 22884u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D75A8u) [[unlikely]] return; }
L_005D75A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D75B0u); st32((c.r[28].w[0] - 22888u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D75B0u) [[unlikely]] return; }
L_005D75B0:
    st32((c.r[28].w[0] - 22892u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D75BCu); set32(c.r[4], c.r[28].w[0] - 22896u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D75BCu) [[unlikely]] return; }
L_005D75BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[28].w[0] - 32616u));
    st32((c.r[3].w[0] - 1352u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 1344u), 0u);
    st32((c.r[4].w[0] - 1348u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D75F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7600u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7600u) [[unlikely]] return; }
L_005D7600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7608u); st32((c.r[28].w[0] - 22860u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7608u) [[unlikely]] return; }
L_005D7608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7610u); st32((c.r[28].w[0] - 22864u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7610u) [[unlikely]] return; }
L_005D7610:
    st32((c.r[28].w[0] - 22868u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D761Cu); set32(c.r[4], c.r[28].w[0] - 22872u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D761Cu) [[unlikely]] return; }
L_005D761C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7640u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7640u) [[unlikely]] return; }
L_005D7640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7648u); st32((c.r[28].w[0] - 22844u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7648u) [[unlikely]] return; }
L_005D7648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7650u); st32((c.r[28].w[0] - 22848u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7650u) [[unlikely]] return; }
L_005D7650:
    st32((c.r[28].w[0] - 22852u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D765Cu); set32(c.r[4], c.r[28].w[0] - 22856u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D765Cu) [[unlikely]] return; }
L_005D765C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7680u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7680u) [[unlikely]] return; }
L_005D7680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7688u); st32((c.r[28].w[0] - 22828u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7688u) [[unlikely]] return; }
L_005D7688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7690u); st32((c.r[28].w[0] - 22832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7690u) [[unlikely]] return; }
L_005D7690:
    st32((c.r[28].w[0] - 22836u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D769Cu); set32(c.r[4], c.r[28].w[0] - 22840u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D769Cu) [[unlikely]] return; }
L_005D769C:
    c.f[0] = ld32((c.r[28].w[0] - 32124u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] + 2680u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32120u));
    st32((c.r[4].w[0] + 2676u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] + 2684u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    st32((c.r[3].w[0] + 2688u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 2672u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] + 2700u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 2692u), c.f[0]);
    st32((c.r[4].w[0] + 2696u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7710u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7710u) [[unlikely]] return; }
L_005D7710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7718u); st32((c.r[28].w[0] - 22792u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7718u) [[unlikely]] return; }
L_005D7718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7720u); st32((c.r[28].w[0] - 22796u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7720u) [[unlikely]] return; }
L_005D7720:
    st32((c.r[28].w[0] - 22800u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D772Cu); set32(c.r[4], c.r[28].w[0] - 22804u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D772Cu) [[unlikely]] return; }
L_005D772C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7734u);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D7734u) [[unlikely]] return; }
L_005D7734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D773Cu); st32((c.r[28].w[0] - 22824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x002734D0u; return; } if (c.pc != 0x005D773Cu) [[unlikely]] return; }
L_005D773C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7744u); st32((c.r[28].w[0] - 22820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005D7744u) [[unlikely]] return; }
L_005D7744:
    st32((c.r[28].w[0] - 22816u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7770u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7770u) [[unlikely]] return; }
L_005D7770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7778u); st32((c.r[28].w[0] - 22776u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7778u) [[unlikely]] return; }
L_005D7778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7780u); st32((c.r[28].w[0] - 22780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7780u) [[unlikely]] return; }
L_005D7780:
    st32((c.r[28].w[0] - 22784u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D778Cu); set32(c.r[4], c.r[28].w[0] - 22788u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D778Cu) [[unlikely]] return; }
L_005D778C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D77A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D77B0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D77B0u) [[unlikely]] return; }
L_005D77B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D77B8u); st32((c.r[28].w[0] - 22760u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D77B8u) [[unlikely]] return; }
L_005D77B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D77C0u); st32((c.r[28].w[0] - 22764u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D77C0u) [[unlikely]] return; }
L_005D77C0:
    st32((c.r[28].w[0] - 22768u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D77CCu); set32(c.r[4], c.r[28].w[0] - 22772u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D77CCu) [[unlikely]] return; }
L_005D77CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D77E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D77F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D77F0u) [[unlikely]] return; }
L_005D77F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D77F8u); st32((c.r[28].w[0] - 22744u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D77F8u) [[unlikely]] return; }
L_005D77F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7800u); st32((c.r[28].w[0] - 22748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7800u) [[unlikely]] return; }
L_005D7800:
    st32((c.r[28].w[0] - 22752u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D780Cu); set32(c.r[4], c.r[28].w[0] - 22756u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D780Cu) [[unlikely]] return; }
L_005D780C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7830u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7830u) [[unlikely]] return; }
L_005D7830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7838u); st32((c.r[28].w[0] - 22728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7838u) [[unlikely]] return; }
L_005D7838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7840u); st32((c.r[28].w[0] - 22732u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7840u) [[unlikely]] return; }
L_005D7840:
    st32((c.r[28].w[0] - 22736u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D784Cu); set32(c.r[4], c.r[28].w[0] - 22740u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D784Cu) [[unlikely]] return; }
L_005D784C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7854u); c.f[12] = ld32((c.r[28].w[0] - 32284u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x005D7854u) [[unlikely]] return; }
L_005D7854:
    c.f[12] = ld32((c.r[28].w[0] - 32280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7864u); st32((c.r[2].w[0] + 4816u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x005D7864u) [[unlikely]] return; }
L_005D7864:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] + 4824u), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7890u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7890u) [[unlikely]] return; }
L_005D7890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7898u); st32((c.r[28].w[0] - 22712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7898u) [[unlikely]] return; }
L_005D7898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D78A0u); st32((c.r[28].w[0] - 22716u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D78A0u) [[unlikely]] return; }
L_005D78A0:
    st32((c.r[28].w[0] - 22720u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D78ACu); set32(c.r[4], c.r[28].w[0] - 22724u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D78ACu) [[unlikely]] return; }
L_005D78AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D78C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D78D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D78D0u) [[unlikely]] return; }
L_005D78D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D78D8u); st32((c.r[28].w[0] - 22696u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D78D8u) [[unlikely]] return; }
L_005D78D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D78E0u); st32((c.r[28].w[0] - 22700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D78E0u) [[unlikely]] return; }
L_005D78E0:
    st32((c.r[28].w[0] - 22704u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D78ECu); set32(c.r[4], c.r[28].w[0] - 22708u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D78ECu) [[unlikely]] return; }
L_005D78EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7910u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7910u) [[unlikely]] return; }
L_005D7910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7918u); st32((c.r[28].w[0] - 22680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7918u) [[unlikely]] return; }
L_005D7918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7920u); st32((c.r[28].w[0] - 22684u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7920u) [[unlikely]] return; }
L_005D7920:
    st32((c.r[28].w[0] - 22688u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D792Cu); set32(c.r[4], c.r[28].w[0] - 22692u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D792Cu) [[unlikely]] return; }
L_005D792C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7950u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7950u) [[unlikely]] return; }
L_005D7950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7958u); st32((c.r[28].w[0] - 22660u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7958u) [[unlikely]] return; }
L_005D7958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7960u); st32((c.r[28].w[0] - 22664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7960u) [[unlikely]] return; }
L_005D7960:
    st32((c.r[28].w[0] - 22668u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D796Cu); set32(c.r[4], c.r[28].w[0] - 22672u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D796Cu) [[unlikely]] return; }
L_005D796C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7990u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7990u) [[unlikely]] return; }
L_005D7990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7998u); st32((c.r[28].w[0] - 22644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7998u) [[unlikely]] return; }
L_005D7998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D79A0u); st32((c.r[28].w[0] - 22648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D79A0u) [[unlikely]] return; }
L_005D79A0:
    st32((c.r[28].w[0] - 22652u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D79ACu); set32(c.r[4], c.r[28].w[0] - 22656u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D79ACu) [[unlikely]] return; }
L_005D79AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D79C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D79D0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D79D0u) [[unlikely]] return; }
L_005D79D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D79D8u); st32((c.r[28].w[0] - 22628u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D79D8u) [[unlikely]] return; }
L_005D79D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D79E0u); st32((c.r[28].w[0] - 22632u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D79E0u) [[unlikely]] return; }
L_005D79E0:
    st32((c.r[28].w[0] - 22636u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D79ECu); set32(c.r[4], c.r[28].w[0] - 22640u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D79ECu) [[unlikely]] return; }
L_005D79EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7A10u) [[unlikely]] return; }
L_005D7A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A18u); st32((c.r[28].w[0] - 22608u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7A18u) [[unlikely]] return; }
L_005D7A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A20u); st32((c.r[28].w[0] - 22612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7A20u) [[unlikely]] return; }
L_005D7A20:
    st32((c.r[28].w[0] - 22616u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A2Cu); set32(c.r[4], c.r[28].w[0] - 22620u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7A2Cu) [[unlikely]] return; }
L_005D7A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A34u);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005D7A34u) [[unlikely]] return; }
L_005D7A34:
    st32((c.r[28].w[0] - 22624u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A60u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7A60u) [[unlikely]] return; }
L_005D7A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A68u); st32((c.r[28].w[0] - 22588u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7A68u) [[unlikely]] return; }
L_005D7A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A70u); st32((c.r[28].w[0] - 22592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7A70u) [[unlikely]] return; }
L_005D7A70:
    st32((c.r[28].w[0] - 22596u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A7Cu); set32(c.r[4], c.r[28].w[0] - 22600u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7A7Cu) [[unlikely]] return; }
L_005D7A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7A84u);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D7A84u) [[unlikely]] return; }
L_005D7A84:
    st32((c.r[28].w[0] - 22604u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7AB0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7AB0u) [[unlikely]] return; }
L_005D7AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7AB8u); st32((c.r[28].w[0] - 22572u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7AB8u) [[unlikely]] return; }
L_005D7AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7AC0u); st32((c.r[28].w[0] - 22576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7AC0u) [[unlikely]] return; }
L_005D7AC0:
    st32((c.r[28].w[0] - 22580u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7ACCu); set32(c.r[4], c.r[28].w[0] - 22584u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7ACCu) [[unlikely]] return; }
L_005D7ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7AF0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7AF0u) [[unlikely]] return; }
L_005D7AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7AF8u); st32((c.r[28].w[0] - 22552u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7AF8u) [[unlikely]] return; }
L_005D7AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B00u); st32((c.r[28].w[0] - 22556u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7B00u) [[unlikely]] return; }
L_005D7B00:
    st32((c.r[28].w[0] - 22560u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B0Cu); set32(c.r[4], c.r[28].w[0] - 22564u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7B0Cu) [[unlikely]] return; }
L_005D7B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B14u);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D7B14u) [[unlikely]] return; }
L_005D7B14:
    st32((c.r[28].w[0] - 22568u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7B40u) [[unlikely]] return; }
L_005D7B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B48u); st32((c.r[28].w[0] - 22536u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7B48u) [[unlikely]] return; }
L_005D7B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B50u); st32((c.r[28].w[0] - 22540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7B50u) [[unlikely]] return; }
L_005D7B50:
    st32((c.r[28].w[0] - 22544u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B5Cu); set32(c.r[4], c.r[28].w[0] - 22548u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7B5Cu) [[unlikely]] return; }
L_005D7B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7B80u) [[unlikely]] return; }
L_005D7B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B88u); st32((c.r[28].w[0] - 22520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7B88u) [[unlikely]] return; }
L_005D7B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B90u); st32((c.r[28].w[0] - 22524u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7B90u) [[unlikely]] return; }
L_005D7B90:
    st32((c.r[28].w[0] - 22528u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7B9Cu); set32(c.r[4], c.r[28].w[0] - 22532u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7B9Cu) [[unlikely]] return; }
L_005D7B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7BC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7BC0u) [[unlikely]] return; }
L_005D7BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7BC8u); st32((c.r[28].w[0] - 22504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7BC8u) [[unlikely]] return; }
L_005D7BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7BD0u); st32((c.r[28].w[0] - 22508u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7BD0u) [[unlikely]] return; }
L_005D7BD0:
    st32((c.r[28].w[0] - 22512u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7BDCu); set32(c.r[4], c.r[28].w[0] - 22516u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7BDCu) [[unlikely]] return; }
L_005D7BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7C00u) [[unlikely]] return; }
L_005D7C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C08u); st32((c.r[28].w[0] - 22484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7C08u) [[unlikely]] return; }
L_005D7C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C10u); st32((c.r[28].w[0] - 22488u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7C10u) [[unlikely]] return; }
L_005D7C10:
    st32((c.r[28].w[0] - 22492u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C1Cu); set32(c.r[4], c.r[28].w[0] - 22496u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7C1Cu) [[unlikely]] return; }
L_005D7C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7C40u) [[unlikely]] return; }
L_005D7C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C48u); st32((c.r[28].w[0] - 22468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7C48u) [[unlikely]] return; }
L_005D7C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C50u); st32((c.r[28].w[0] - 22472u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7C50u) [[unlikely]] return; }
L_005D7C50:
    st32((c.r[28].w[0] - 22476u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C5Cu); set32(c.r[4], c.r[28].w[0] - 22480u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7C5Cu) [[unlikely]] return; }
L_005D7C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C80u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7C80u) [[unlikely]] return; }
L_005D7C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C88u); st32((c.r[28].w[0] - 22452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7C88u) [[unlikely]] return; }
L_005D7C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C90u); st32((c.r[28].w[0] - 22456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7C90u) [[unlikely]] return; }
L_005D7C90:
    st32((c.r[28].w[0] - 22460u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7C9Cu); set32(c.r[4], c.r[28].w[0] - 22464u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7C9Cu) [[unlikely]] return; }
L_005D7C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7CC0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7CC0u) [[unlikely]] return; }
L_005D7CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7CC8u); st32((c.r[28].w[0] - 22436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7CC8u) [[unlikely]] return; }
L_005D7CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7CD0u); st32((c.r[28].w[0] - 22440u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7CD0u) [[unlikely]] return; }
L_005D7CD0:
    st32((c.r[28].w[0] - 22444u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7CDCu); set32(c.r[4], c.r[28].w[0] - 22448u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7CDCu) [[unlikely]] return; }
L_005D7CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7D00u) [[unlikely]] return; }
L_005D7D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D08u); st32((c.r[28].w[0] - 22420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7D08u) [[unlikely]] return; }
L_005D7D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D10u); st32((c.r[28].w[0] - 22424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7D10u) [[unlikely]] return; }
L_005D7D10:
    st32((c.r[28].w[0] - 22428u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D1Cu); set32(c.r[4], c.r[28].w[0] - 22432u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7D1Cu) [[unlikely]] return; }
L_005D7D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7D40u) [[unlikely]] return; }
L_005D7D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D48u); st32((c.r[28].w[0] - 22400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7D48u) [[unlikely]] return; }
L_005D7D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D50u); st32((c.r[28].w[0] - 22404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7D50u) [[unlikely]] return; }
L_005D7D50:
    st32((c.r[28].w[0] - 22408u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D5Cu); set32(c.r[4], c.r[28].w[0] - 22412u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7D5Cu) [[unlikely]] return; }
L_005D7D5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D70u); set32(c.r[5], c.r[5].w[0] + 20478u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7D70u) [[unlikely]] return; }
L_005D7D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7D8Cu); set32(c.r[6], c.r[6].w[0] - 1320u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7D8Cu) [[unlikely]] return; }
L_005D7D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DB0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7DB0u) [[unlikely]] return; }
L_005D7DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DB8u); st32((c.r[28].w[0] - 22364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7DB8u) [[unlikely]] return; }
L_005D7DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DC0u); st32((c.r[28].w[0] - 22368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7DC0u) [[unlikely]] return; }
L_005D7DC0:
    st32((c.r[28].w[0] - 22372u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DCCu); set32(c.r[4], c.r[28].w[0] - 22376u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7DCCu) [[unlikely]] return; }
L_005D7DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DD4u); set32(c.r[4], c.r[28].w[0] - 22396u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D7DD4u) [[unlikely]] return; }
L_005D7DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DF0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7DF0u) [[unlikely]] return; }
L_005D7DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7DF8u); st32((c.r[28].w[0] - 22348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7DF8u) [[unlikely]] return; }
L_005D7DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E00u); st32((c.r[28].w[0] - 22352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7E00u) [[unlikely]] return; }
L_005D7E00:
    st32((c.r[28].w[0] - 22356u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E0Cu); set32(c.r[4], c.r[28].w[0] - 22360u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7E0Cu) [[unlikely]] return; }
L_005D7E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E30u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7E30u) [[unlikely]] return; }
L_005D7E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E38u); st32((c.r[28].w[0] - 22332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7E38u) [[unlikely]] return; }
L_005D7E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E40u); st32((c.r[28].w[0] - 22336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7E40u) [[unlikely]] return; }
L_005D7E40:
    st32((c.r[28].w[0] - 22340u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E4Cu); set32(c.r[4], c.r[28].w[0] - 22344u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7E4Cu) [[unlikely]] return; }
L_005D7E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E70u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7E70u) [[unlikely]] return; }
L_005D7E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E78u); st32((c.r[28].w[0] - 22308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7E78u) [[unlikely]] return; }
L_005D7E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E80u); st32((c.r[28].w[0] - 22312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7E80u) [[unlikely]] return; }
L_005D7E80:
    st32((c.r[28].w[0] - 22316u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E8Cu); set32(c.r[4], c.r[28].w[0] - 22320u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7E8Cu) [[unlikely]] return; }
L_005D7E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7E94u); set32(c.r[4], c.r[28].w[0] - 22328u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D7E94u) [[unlikely]] return; }
L_005D7E94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D7EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7EB0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D7EB0u) [[unlikely]] return; }
L_005D7EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7EB8u); st32((c.r[28].w[0] - 22288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D7EB8u) [[unlikely]] return; }
L_005D7EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7EC0u); st32((c.r[28].w[0] - 22292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D7EC0u) [[unlikely]] return; }
L_005D7EC0:
    st32((c.r[28].w[0] - 22296u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7ECCu); set32(c.r[4], c.r[28].w[0] - 22300u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D7ECCu) [[unlikely]] return; }
L_005D7ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7EE0u); set32(c.r[5], c.r[5].w[0] + 23275u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7EE0u) [[unlikely]] return; }
L_005D7EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 22944u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7EFCu); set32(c.r[6], c.r[6].w[0] - 952u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7EFCu) [[unlikely]] return; }
L_005D7EFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7F10u); set32(c.r[5], c.r[5].w[0] + 23288u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7F10u) [[unlikely]] return; }
L_005D7F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 22960u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7F2Cu); set32(c.r[6], c.r[6].w[0] - 936u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7F2Cu) [[unlikely]] return; }
L_005D7F2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7F40u); set32(c.r[5], c.r[5].w[0] + 23309u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7F40u) [[unlikely]] return; }
L_005D7F40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 22976u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7F5Cu); set32(c.r[6], c.r[6].w[0] - 920u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7F5Cu) [[unlikely]] return; }
L_005D7F5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7F70u); set32(c.r[5], c.r[5].w[0] + 23328u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7F70u) [[unlikely]] return; }
L_005D7F70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 22992u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7F8Cu); set32(c.r[6], c.r[6].w[0] - 904u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7F8Cu) [[unlikely]] return; }
L_005D7F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7FA0u); set32(c.r[5], c.r[5].w[0] + 23347u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7FA0u) [[unlikely]] return; }
L_005D7FA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23008u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7FBCu); set32(c.r[6], c.r[6].w[0] - 888u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7FBCu) [[unlikely]] return; }
L_005D7FBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7FD0u); set32(c.r[5], c.r[5].w[0] + 23371u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D7FD0u) [[unlikely]] return; }
L_005D7FD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23024u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D7FECu); set32(c.r[6], c.r[6].w[0] - 872u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D7FECu) [[unlikely]] return; }
L_005D7FEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8000u); set32(c.r[5], c.r[5].w[0] + 23401u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D8000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0136(c, 1u, depth);
}

}
