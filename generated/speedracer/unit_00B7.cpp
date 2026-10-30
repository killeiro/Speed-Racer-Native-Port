#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B7[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0,
    116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0,
    212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0,
    0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0,
    289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306,
    0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323,
    0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0,
    0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003DC000;
    case 2u: goto L_003DC004;
    case 3u: goto L_003DC00C;
    case 4u: goto L_003DC044;
    case 5u: goto L_003DC158;
    case 6u: goto L_003DC268;
    case 7u: goto L_003DC3F4;
    case 8u: goto L_003DC49C;
    case 9u: goto L_003DC4DC;
    case 10u: goto L_003DC5D8;
    case 11u: goto L_003DC5F8;
    case 12u: goto L_003DC644;
    case 13u: goto L_003DC678;
    case 14u: goto L_003DC6E8;
    case 15u: goto L_003DC788;
    case 16u: goto L_003DC79C;
    case 17u: goto L_003DC7A0;
    case 18u: goto L_003DC7F0;
    case 19u: goto L_003DC804;
    case 20u: goto L_003DC830;
    case 21u: goto L_003DC870;
    case 22u: goto L_003DC894;
    case 23u: goto L_003DC8B0;
    case 24u: goto L_003DC8D4;
    case 25u: goto L_003DC8EC;
    case 26u: goto L_003DC910;
    case 27u: goto L_003DC920;
    case 28u: goto L_003DC944;
    case 29u: goto L_003DC950;
    case 30u: goto L_003DC960;
    case 31u: goto L_003DC9A8;
    case 32u: goto L_003DC9BC;
    case 33u: goto L_003DC9C8;
    case 34u: goto L_003DC9D4;
    case 35u: goto L_003DC9DC;
    case 36u: goto L_003DC9EC;
    case 37u: goto L_003DCA0C;
    case 38u: goto L_003DCA20;
    case 39u: goto L_003DCA2C;
    case 40u: goto L_003DCA38;
    case 41u: goto L_003DCA40;
    case 42u: goto L_003DCA50;
    case 43u: goto L_003DCA5C;
    case 44u: goto L_003DCA64;
    case 45u: goto L_003DCA74;
    case 46u: goto L_003DCAA0;
    case 47u: goto L_003DCAB4;
    case 48u: goto L_003DCAC0;
    case 49u: goto L_003DCACC;
    case 50u: goto L_003DCAD4;
    case 51u: goto L_003DCAE4;
    case 52u: goto L_003DCB04;
    case 53u: goto L_003DCB18;
    case 54u: goto L_003DCB24;
    case 55u: goto L_003DCB30;
    case 56u: goto L_003DCB38;
    case 57u: goto L_003DCB48;
    case 58u: goto L_003DCB54;
    case 59u: goto L_003DCB5C;
    case 60u: goto L_003DCB6C;
    case 61u: goto L_003DCB7C;
    case 62u: goto L_003DCBA0;
    case 63u: goto L_003DCBB4;
    case 64u: goto L_003DCBC0;
    case 65u: goto L_003DCBD0;
    case 66u: goto L_003DCBE0;
    case 67u: goto L_003DCBF0;
    case 68u: goto L_003DCC1C;
    case 69u: goto L_003DCC58;
    case 70u: goto L_003DCC70;
    case 71u: goto L_003DCCA0;
    case 72u: goto L_003DCCF8;
    case 73u: goto L_003DCD00;
    case 74u: goto L_003DCD0C;
    case 75u: goto L_003DCDD4;
    case 76u: goto L_003DCE10;
    case 77u: goto L_003DCE30;
    case 78u: goto L_003DCE80;
    case 79u: goto L_003DCF54;
    case 80u: goto L_003DCF80;
    case 81u: goto L_003DCFD4;
    case 82u: goto L_003DD034;
    case 83u: goto L_003DD050;
    case 84u: goto L_003DD080;
    case 85u: goto L_003DD170;
    case 86u: goto L_003DD1EC;
    case 87u: goto L_003DD1F4;
    case 88u: goto L_003DD218;
    case 89u: goto L_003DD2A0;
    case 90u: goto L_003DD33C;
    case 91u: goto L_003DD3B8;
    case 92u: goto L_003DD3C0;
    case 93u: goto L_003DD3E4;
    case 94u: goto L_003DD450;
    case 95u: goto L_003DD4CC;
    case 96u: goto L_003DD4D4;
    case 97u: goto L_003DD508;
    case 98u: goto L_003DD58C;
    case 99u: goto L_003DD628;
    case 100u: goto L_003DD6B4;
    case 101u: goto L_003DD6BC;
    case 102u: goto L_003DD6F0;
    case 103u: goto L_003DD760;
    case 104u: goto L_003DD798;
    case 105u: goto L_003DD7B8;
    case 106u: goto L_003DD860;
    case 107u: goto L_003DD874;
    case 108u: goto L_003DD88C;
    case 109u: goto L_003DD8A8;
    case 110u: goto L_003DD8B0;
    case 111u: goto L_003DD8B8;
    case 112u: goto L_003DD8D0;
    case 113u: goto L_003DD8E0;
    case 114u: goto L_003DD8E8;
    case 115u: goto L_003DD8F0;
    case 116u: goto L_003DD900;
    case 117u: goto L_003DD90C;
    case 118u: goto L_003DD91C;
    case 119u: goto L_003DD928;
    case 120u: goto L_003DD940;
    case 121u: goto L_003DD970;
    case 122u: goto L_003DD988;
    case 123u: goto L_003DD9A0;
    case 124u: goto L_003DD9BC;
    case 125u: goto L_003DD9E0;
    case 126u: goto L_003DD9FC;
    case 127u: goto L_003DDA20;
    case 128u: goto L_003DDA3C;
    case 129u: goto L_003DDA6C;
    case 130u: goto L_003DDA88;
    case 131u: goto L_003DDAA4;
    case 132u: goto L_003DDABC;
    case 133u: goto L_003DDAD8;
    case 134u: goto L_003DDAE4;
    case 135u: goto L_003DDB04;
    case 136u: goto L_003DDB18;
    case 137u: goto L_003DDB20;
    case 138u: goto L_003DDB30;
    case 139u: goto L_003DDB48;
    case 140u: goto L_003DDB60;
    case 141u: goto L_003DDB70;
    case 142u: goto L_003DDB98;
    case 143u: goto L_003DDBA8;
    case 144u: goto L_003DDBC8;
    case 145u: goto L_003DDBE0;
    case 146u: goto L_003DDBF4;
    case 147u: goto L_003DDC14;
    case 148u: goto L_003DDC1C;
    case 149u: goto L_003DDC2C;
    case 150u: goto L_003DDC44;
    case 151u: goto L_003DDC68;
    case 152u: goto L_003DDC80;
    case 153u: goto L_003DDCA4;
    case 154u: goto L_003DDCB0;
    case 155u: goto L_003DDCDC;
    case 156u: goto L_003DDCFC;
    case 157u: goto L_003DDD20;
    case 158u: goto L_003DDD4C;
    case 159u: goto L_003DDD60;
    case 160u: goto L_003DDD84;
    case 161u: goto L_003DDD94;
    case 162u: goto L_003DDDB4;
    case 163u: goto L_003DDDD4;
    case 164u: goto L_003DDDE8;
    case 165u: goto L_003DDE08;
    case 166u: goto L_003DDE10;
    case 167u: goto L_003DDE20;
    case 168u: goto L_003DDE38;
    case 169u: goto L_003DDE60;
    case 170u: goto L_003DDE94;
    case 171u: goto L_003DDEB0;
    case 172u: goto L_003DDEE4;
    case 173u: goto L_003DDF00;
    case 174u: goto L_003DDF14;
    case 175u: goto L_003DDF2C;
    case 176u: goto L_003DDF54;
    case 177u: goto L_003DDF70;
    case 178u: goto L_003DDF80;
    case 179u: goto L_003DDF90;
    case 180u: goto L_003DDFA0;
    case 181u: goto L_003DDFE4;
    case 182u: goto L_003DE000;
    case 183u: goto L_003DE00C;
    case 184u: goto L_003DE038;
    case 185u: goto L_003DE050;
    case 186u: goto L_003DE0AC;
    case 187u: goto L_003DE0C4;
    case 188u: goto L_003DE0D4;
    case 189u: goto L_003DE0EC;
    case 190u: goto L_003DE100;
    case 191u: goto L_003DE130;
    case 192u: goto L_003DE140;
    case 193u: goto L_003DE150;
    case 194u: goto L_003DE1B0;
    case 195u: goto L_003DE208;
    case 196u: goto L_003DE220;
    case 197u: goto L_003DE25C;
    case 198u: goto L_003DE270;
    case 199u: goto L_003DE280;
    case 200u: goto L_003DE2B0;
    case 201u: goto L_003DE2C8;
    case 202u: goto L_003DE2F4;
    case 203u: goto L_003DE304;
    case 204u: goto L_003DE324;
    case 205u: goto L_003DE340;
    case 206u: goto L_003DE34C;
    case 207u: goto L_003DE358;
    case 208u: goto L_003DE380;
    case 209u: goto L_003DE38C;
    case 210u: goto L_003DE3E0;
    case 211u: goto L_003DE3F4;
    case 212u: goto L_003DE400;
    case 213u: goto L_003DE410;
    case 214u: goto L_003DE418;
    case 215u: goto L_003DE42C;
    case 216u: goto L_003DE46C;
    case 217u: goto L_003DE480;
    case 218u: goto L_003DE490;
    case 219u: goto L_003DE4AC;
    case 220u: goto L_003DE4D0;
    case 221u: goto L_003DE500;
    case 222u: goto L_003DE50C;
    case 223u: goto L_003DE51C;
    case 224u: goto L_003DE53C;
    case 225u: goto L_003DE548;
    case 226u: goto L_003DE554;
    case 227u: goto L_003DE56C;
    case 228u: goto L_003DE578;
    case 229u: goto L_003DE584;
    case 230u: goto L_003DE5A0;
    case 231u: goto L_003DE5AC;
    case 232u: goto L_003DE5B8;
    case 233u: goto L_003DE5E4;
    case 234u: goto L_003DE5F0;
    case 235u: goto L_003DE5FC;
    case 236u: goto L_003DE60C;
    case 237u: goto L_003DE67C;
    case 238u: goto L_003DE68C;
    case 239u: goto L_003DE70C;
    case 240u: goto L_003DE71C;
    case 241u: goto L_003DE738;
    case 242u: goto L_003DE744;
    case 243u: goto L_003DE750;
    case 244u: goto L_003DE75C;
    case 245u: goto L_003DE768;
    case 246u: goto L_003DE774;
    case 247u: goto L_003DE7E4;
    case 248u: goto L_003DE7F8;
    case 249u: goto L_003DE828;
    case 250u: goto L_003DE838;
    case 251u: goto L_003DE8D4;
    case 252u: goto L_003DE8E4;
    case 253u: goto L_003DE980;
    case 254u: goto L_003DE990;
    case 255u: goto L_003DE998;
    case 256u: goto L_003DE9B8;
    case 257u: goto L_003DE9C8;
    case 258u: goto L_003DEA54;
    case 259u: goto L_003DEA64;
    case 260u: goto L_003DEA80;
    case 261u: goto L_003DEA94;
    case 262u: goto L_003DEAA4;
    case 263u: goto L_003DEAB4;
    case 264u: goto L_003DEAC0;
    case 265u: goto L_003DEACC;
    case 266u: goto L_003DEADC;
    case 267u: goto L_003DEAE8;
    case 268u: goto L_003DEAF4;
    case 269u: goto L_003DEB04;
    case 270u: goto L_003DEB10;
    case 271u: goto L_003DEB1C;
    case 272u: goto L_003DEB2C;
    case 273u: goto L_003DEB38;
    case 274u: goto L_003DEB44;
    case 275u: goto L_003DEB4C;
    case 276u: goto L_003DEB58;
    case 277u: goto L_003DEB60;
    case 278u: goto L_003DEB90;
    case 279u: goto L_003DEBAC;
    case 280u: goto L_003DEBB8;
    case 281u: goto L_003DEBC8;
    case 282u: goto L_003DEBEC;
    case 283u: goto L_003DEC0C;
    case 284u: goto L_003DEC1C;
    case 285u: goto L_003DEC38;
    case 286u: goto L_003DEC4C;
    case 287u: goto L_003DEC5C;
    case 288u: goto L_003DEC74;
    case 289u: goto L_003DEC80;
    case 290u: goto L_003DEC94;
    case 291u: goto L_003DECB4;
    case 292u: goto L_003DECC4;
    case 293u: goto L_003DECE0;
    case 294u: goto L_003DECF4;
    case 295u: goto L_003DED04;
    case 296u: goto L_003DED18;
    case 297u: goto L_003DED20;
    case 298u: goto L_003DED40;
    case 299u: goto L_003DED50;
    case 300u: goto L_003DED74;
    case 301u: goto L_003DED84;
    case 302u: goto L_003DEDAC;
    case 303u: goto L_003DEDBC;
    case 304u: goto L_003DEDD8;
    case 305u: goto L_003DEDEC;
    case 306u: goto L_003DEDFC;
    case 307u: goto L_003DEE08;
    case 308u: goto L_003DEE20;
    case 309u: goto L_003DEE40;
    case 310u: goto L_003DEE50;
    case 311u: goto L_003DEE6C;
    case 312u: goto L_003DEE80;
    case 313u: goto L_003DEE90;
    case 314u: goto L_003DEEB4;
    case 315u: goto L_003DEEC4;
    case 316u: goto L_003DEEF0;
    case 317u: goto L_003DEF00;
    case 318u: goto L_003DEF20;
    case 319u: goto L_003DEF38;
    case 320u: goto L_003DEF40;
    case 321u: goto L_003DEF5C;
    case 322u: goto L_003DEF74;
    case 323u: goto L_003DEF7C;
    case 324u: goto L_003DEF84;
    case 325u: goto L_003DEF90;
    case 326u: goto L_003DEFA0;
    case 327u: goto L_003DF00C;
    case 328u: goto L_003DF02C;
    case 329u: goto L_003DF03C;
    case 330u: goto L_003DF058;
    case 331u: goto L_003DF06C;
    case 332u: goto L_003DF07C;
    case 333u: goto L_003DF094;
    case 334u: goto L_003DF09C;
    case 335u: goto L_003DF0A4;
    case 336u: goto L_003DF0AC;
    case 337u: goto L_003DF0D0;
    case 338u: goto L_003DF118;
    case 339u: goto L_003DF12C;
    case 340u: goto L_003DF13C;
    case 341u: goto L_003DF158;
    case 342u: goto L_003DF16C;
    case 343u: goto L_003DF17C;
    case 344u: goto L_003DF19C;
    case 345u: goto L_003DF1AC;
    case 346u: goto L_003DF1C8;
    case 347u: goto L_003DF1E8;
    case 348u: goto L_003DF1F8;
    case 349u: goto L_003DF214;
    case 350u: goto L_003DF234;
    case 351u: goto L_003DF244;
    case 352u: goto L_003DF260;
    case 353u: goto L_003DF280;
    case 354u: goto L_003DF290;
    case 355u: goto L_003DF2AC;
    case 356u: goto L_003DF2CC;
    case 357u: goto L_003DF2DC;
    case 358u: goto L_003DF2F8;
    case 359u: goto L_003DF324;
    case 360u: goto L_003DF340;
    case 361u: goto L_003DF38C;
    case 362u: goto L_003DF39C;
    case 363u: goto L_003DF3B0;
    case 364u: goto L_003DF3C0;
    case 365u: goto L_003DF3D4;
    case 366u: goto L_003DF3E4;
    case 367u: goto L_003DF3F8;
    case 368u: goto L_003DF408;
    case 369u: goto L_003DF41C;
    case 370u: goto L_003DF42C;
    case 371u: goto L_003DF43C;
    case 372u: goto L_003DF460;
    case 373u: goto L_003DF498;
    case 374u: goto L_003DF4B0;
    case 375u: goto L_003DF4C0;
    case 376u: goto L_003DF4EC;
    case 377u: goto L_003DF4F4;
    case 378u: goto L_003DF540;
    case 379u: goto L_003DF578;
    case 380u: goto L_003DF59C;
    case 381u: goto L_003DF5D0;
    case 382u: goto L_003DF634;
    case 383u: goto L_003DF64C;
    case 384u: goto L_003DF67C;
    case 385u: goto L_003DF68C;
    case 386u: goto L_003DF6AC;
    case 387u: goto L_003DF6BC;
    case 388u: goto L_003DF6D4;
    case 389u: goto L_003DF6E4;
    case 390u: goto L_003DF704;
    case 391u: goto L_003DF710;
    case 392u: goto L_003DF750;
    case 393u: goto L_003DF798;
    case 394u: goto L_003DF7B0;
    case 395u: goto L_003DF7E0;
    case 396u: goto L_003DF7F0;
    case 397u: goto L_003DF810;
    case 398u: goto L_003DF834;
    case 399u: goto L_003DF84C;
    case 400u: goto L_003DF87C;
    case 401u: goto L_003DF88C;
    case 402u: goto L_003DF8AC;
    case 403u: goto L_003DF8C8;
    case 404u: goto L_003DF8F8;
    case 405u: goto L_003DF920;
    case 406u: goto L_003DF92C;
    case 407u: goto L_003DF95C;
    case 408u: goto L_003DF980;
    case 409u: goto L_003DF9A0;
    case 410u: goto L_003DF9AC;
    case 411u: goto L_003DF9E0;
    case 412u: goto L_003DF9F8;
    case 413u: goto L_003DFA18;
    case 414u: goto L_003DFA28;
    case 415u: goto L_003DFA44;
    case 416u: goto L_003DFA58;
    case 417u: goto L_003DFA68;
    case 418u: goto L_003DFA94;
    case 419u: goto L_003DFAA4;
    case 420u: goto L_003DFAC4;
    case 421u: goto L_003DFADC;
    case 422u: goto L_003DFAF4;
    case 423u: goto L_003DFB14;
    case 424u: goto L_003DFB24;
    case 425u: goto L_003DFB40;
    case 426u: goto L_003DFB54;
    case 427u: goto L_003DFB64;
    case 428u: goto L_003DFB88;
    case 429u: goto L_003DFB98;
    case 430u: goto L_003DFBC4;
    case 431u: goto L_003DFBD4;
    case 432u: goto L_003DFBF4;
    case 433u: goto L_003DFC0C;
    case 434u: goto L_003DFC38;
    case 435u: goto L_003DFC40;
    case 436u: goto L_003DFC58;
    case 437u: goto L_003DFC74;
    case 438u: goto L_003DFC7C;
    case 439u: goto L_003DFC88;
    case 440u: goto L_003DFCB0;
    case 441u: goto L_003DFD18;
    case 442u: goto L_003DFD50;
    case 443u: goto L_003DFD5C;
    case 444u: goto L_003DFD80;
    case 445u: goto L_003DFD98;
    case 446u: goto L_003DFDC0;
    case 447u: goto L_003DFDD0;
    case 448u: goto L_003DFDF0;
    case 449u: goto L_003DFE60;
    case 450u: goto L_003DFE8C;
    case 451u: goto L_003DFEA0;
    case 452u: goto L_003DFEE4;
    case 453u: goto L_003DFF10;
    case 454u: goto L_003DFF2C;
    case 455u: goto L_003DFF40;
    case 456u: goto L_003DFF68;
    default: bad_entry(c, 0x003DC000u); return;
    }
L_003DC000:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003DC004:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_003DC00C:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DBE6Cu | kUnwind; return; } [[clang::musttail]] return unit_00B6(c, 523u, depth); }
    set32(c.r[2], ld32((c.r[29].w[0] + 660u)));
    c.r[30].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 876u), c.r[2].w[0]);  if (t) { goto L_003DC5FC; } }
L_003DC044:
    set32(c.r[18], c.r[3].w[0] + 16u);
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    set32(c.r[2], 0u + 1u);
    c.f[24] = 0u;
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[4] = ld32((c.r[3].w[0] + 48u));
    c.r[22].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[23] = c.f[24];
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[26] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[26]) <= fp::key(c.f[0]));
    c.budget -= 19;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_003DC098; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_003DC098:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[2].w[0];
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003DC0DC; }
    c.f[2] = ld32((c.r[19].w[0] + 28u));
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[1] = fp::sub(c.f[25], c.f[0]);
    c.f[0] = 0u;
    c.f[25] = fp::max(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
L_003DC0DC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DC19C; } }
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003DC134; } }
L_003DC11C:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DC12C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DC12C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_003DC134:
    c.f[3] = ld32((c.r[18].w[0] + 40u));
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = ld32((c.r[28].w[0] - 31660u));
    c.f[0] = ld32((c.r[28].w[0] - 32620u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC158u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x003DC158u) [[unlikely]] return; }
L_003DC158:
    c.f[3] = ld32((c.r[18].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[20].w[0] + 60u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::min(c.f[1], c.f[0]);
    c.r[22].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.f[24] = ld32((c.r[28].w[0] - 31388u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] ^ 1ull;  if (t) { goto L_003DC460; } }
L_003DC19C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003DC1A8; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003DC1A8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);  goto L_003DC1BC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 120u));  if (t) { goto L_003DC1C0; } }
L_003DC1BC:
    c.f[1] = c.r[2].w[0];
    c.budget -= 1;
L_003DC1C0:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[23].w[0] + 1166u));
    c.f[0] = ld32((c.r[3].w[0] + 120u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[28] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_003DC1E4; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 1052u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003DC1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[18].w[0] + 40u));  goto L_003DC234; }
    c.f[0] = ld32((c.r[17].w[0] + 240u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DC230; } }
    c.f[0] = ld32((c.r[17].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DC230; } }
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC230; } }
    c.f[0] = ld32((c.r[28].w[0] - 30148u));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 240u), c.f[0]);  if (t) { goto L_003DC460; } }
L_003DC230:
    c.f[3] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 1;
L_003DC234:
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32028u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC268u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003DC268u) [[unlikely]] return; }
L_003DC268:
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    c.f[24] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 196u));
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003DC2B0; } }
L_003DC298:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DC2A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DC2A8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_003DC2B0:
    c.f[2] = c.f[1] & fp::kAbs;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.f[0] = ld32((c.r[17].w[0] + 172u));
    c.f[6] = c.r[2].w[0];
    c.f[5] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[7] = fp::sub(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    c.f[4] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 20;
    { const bool t = c.r[16].sd[0] >= 0; c.f[1] = fp::sub(c.f[6], c.f[0]);  if (t) { goto L_003DC304; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_003DC304:
    c.f[0] = fp::mul(c.f[21], c.f[7]);
    c.r[22].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[22].d[0] = c.r[22].d[0] ^ 1ull;
    c.f[23] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[20], c.f[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[28].w[0] - 30408u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 30404u));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003DC418; } }
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  goto L_003DC41C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[21].d[0] = 0ull + 0ull;  goto L_003DC418; }
    c.f[0] = fp::sub(c.f[28], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 27u, c.f[0], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[2] = fp::mul(c.f[27], c.f[26]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 17;
    if (c.r[2].d[0] == 0ull) { c.f[0] = c.f[24] ^ fp::kSign;  goto L_003DC3C0; }
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.f[0] = c.f[24] ^ fp::kSign;
    c.budget -= 2;
L_003DC3C0:
    st32((c.r[29].w[0] + 304u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st8((c.r[29].w[0] + 316u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 308u), c.f[24]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC3F4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003DC3F4u) [[unlikely]] return; }
L_003DC3F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[27]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[1], c.f[0]);
    c.f[24] = fp::mul(c.f[24], c.f[0]);
    c.budget -= 9;
L_003DC418:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 1;
L_003DC41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DC460; } }
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[21].d[0] = 0ull + 0ull;  goto L_003DC460; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[28], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 30400u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    c.budget -= 10;
L_003DC460:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003DC5E0; } }
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    set32(c.r[21], c.r[18].w[0] + 184u);
    c.f[1] = c.f[23] & fp::kAbs;
    c.f[23] = fp::min(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[26]);
    c.f[0] = ld32((c.r[28].w[0] - 32028u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC49Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003DC49Cu) [[unlikely]] return; }
L_003DC49C:
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 168u));
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32028u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC4DCu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003DC4DCu) [[unlikely]] return; }
L_003DC4DC:
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[24], c.f[21]);
    c.f[7] = fp::mul(c.f[25], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[7]);
    c.f[8] = fp::mul(c.f[1], c.f[24]);
    c.f[9] = fp::mul(c.f[24], c.f[0]);
    c.f[5] = ld32((c.r[3].w[0] + 400u));
    c.f[2] = ld32((c.r[2].w[0] + 108u));
    c.f[4] = ld32((c.r[3].w[0] + 404u));
    c.f[1] = ld32((c.r[2].w[0] + 112u));
    c.f[3] = ld32((c.r[3].w[0] + 408u));
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    c.f[6] = c.r[5].w[0];
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 35;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_003DC594; }
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[28].w[0] - 30416u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[8] = fp::mul(c.f[8], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 11;
L_003DC594:
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 292u), c.f[7]);
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 296u), c.f[8]);  if (t) { goto L_003DC5B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DC5B4:
    st8((c.r[29].w[0] + 300u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[7], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC5D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003DC5D8u) [[unlikely]] return; }
L_003DC5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 876u);  if (t) { goto L_003DC5F0; } }
L_003DC5E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { goto L_003DC5EC; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DC5EC:
    set32(c.r[4], c.r[29].w[0] + 876u);
    c.budget -= 1;
L_003DC5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC5F8u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003DC5F8u) [[unlikely]] return; }
L_003DC5F8:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_003DC5FC:
    set32(c.r[2], c.r[29].w[0] + 652u);
    set32(c.r[3], ld32((c.r[29].w[0] + 876u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_003DC624; }
    c.r[2].d[0] = c.r[30].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[5] = ld32((c.r[3].w[0] + 44u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC044u | kUnwind; return; } goto L_003DC044; }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_003DC624:
    set32(c.r[6], c.r[29].w[0] + 844u);
    set32(c.r[7], c.r[29].w[0] + 840u);
    set32(c.r[2], ld32((c.r[2].w[0] + 412u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC644u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x003DC644u) [[unlikely]] return; }
L_003DC644:
    set32(c.r[3], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DC664; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 840u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003DC664:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 652u)));  goto L_003DC78C; }
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = 0u;
    c.budget -= 3;
L_003DC678:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DC688; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DC688:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    c.f[1] = ld32((c.r[17].w[0] + 124u));
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[5] = ld32((c.r[2].w[0] + 96u));
    c.f[4] = ld32((c.r[2].w[0] + 100u));
    c.f[3] = ld32((c.r[2].w[0] + 104u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::min(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32028u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6E8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003DC6E8u) [[unlikely]] return; }
L_003DC6E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_003DC708; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_003DC708:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DC718; } }
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.budget -= 1;
L_003DC718:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC738; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[6], 0u + 1u);  goto L_003DC75C; }
L_003DC738:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DC788; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DC788; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_003DC75C:
    st8((c.r[29].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 276u), c.f[21]);
    st32((c.r[29].w[0] + 272u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC788u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003DC788u) [[unlikely]] return; }
L_003DC788:
    set32(c.r[5], ld32((c.r[29].w[0] + 652u)));
    c.budget -= 1;
L_003DC78C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DC79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC79Cu); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DC79Cu) [[unlikely]] return; }
L_003DC79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_003DC7A0:
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 896u);  c.pc = t; return; }
L_003DC7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 266u, depth + 1u); else { c.pc = 0x0042E1C0u; return; } if (c.pc != 0x003DC804u) [[unlikely]] return; }
L_003DC804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 22192u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[12] = ld32((c.r[28].w[0] - 31384u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC830u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003DC830u) [[unlikely]] return; }
L_003DC830:
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DC870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30412u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DC88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DC89C; } }
L_003DC88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC894u);  if (depth < kMaxDepth) unit_00CB(c, 272u, depth + 1u); else { c.pc = 0x0042E290u; return; } if (c.pc != 0x003DC894u) [[unlikely]] return; }
L_003DC894:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003DC89C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DC8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC8D4u); set32(c.r[4], c.r[4].w[0] - 10848u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003DC8D4u) [[unlikely]] return; }
L_003DC8D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DC8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003DC8F4; } }
L_003DC8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC8ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 274u, depth + 1u); else { c.pc = 0x0042E2D0u; return; } if (c.pc != 0x003DC8ECu) [[unlikely]] return; }
L_003DC8EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003DC8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DC910:
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003DC920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30412u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003DC93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DC944; } }
L_003DC93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC944u);  if (depth < kMaxDepth) unit_00CB(c, 278u, depth + 1u); else { c.pc = 0x0042E340u; return; } if (c.pc != 0x003DC944u) [[unlikely]] return; }
L_003DC944:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DC950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30412u)));  c.pc = t; return; }
L_003DC960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DCA74; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003DC9F0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003DC9AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9A8u);  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DC9A8u) [[unlikely]] return; }
L_003DC9A8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003DC9AC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DC9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DC9BCu) [[unlikely]] return; }
L_003DC9BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DC9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9C8u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003DCBE0u; return; } if (c.pc != 0x003DC9C8u) [[unlikely]] return; }
L_003DC9C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9D4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B7(c, 65u, depth + 1u); else { c.pc = 0x003DCBD0u; return; } if (c.pc != 0x003DC9D4u) [[unlikely]] return; }
L_003DC9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003DCBC0u; return; } if (c.pc != 0x003DC9DCu) [[unlikely]] return; }
L_003DC9DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC9ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 62u, depth + 1u); else { c.pc = 0x003DCBA0u; return; } if (c.pc != 0x003DC9ECu) [[unlikely]] return; }
L_003DC9EC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003DC9F0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DCA54; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003DCA10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DCA0Cu) [[unlikely]] return; }
L_003DCA0C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003DCA10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DCA24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DCA20u) [[unlikely]] return; }
L_003DCA20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DCA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA2Cu);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003DCBE0u; return; } if (c.pc != 0x003DCA2Cu) [[unlikely]] return; }
L_003DCA2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA38u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B7(c, 65u, depth + 1u); else { c.pc = 0x003DCBD0u; return; } if (c.pc != 0x003DCA38u) [[unlikely]] return; }
L_003DCA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003DCBC0u; return; } if (c.pc != 0x003DCA40u) [[unlikely]] return; }
L_003DCA40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 62u, depth + 1u); else { c.pc = 0x003DCBA0u; return; } if (c.pc != 0x003DCA50u) [[unlikely]] return; }
L_003DCA50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DCA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA5Cu);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003DCBE0u; return; } if (c.pc != 0x003DCA5Cu) [[unlikely]] return; }
L_003DCA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003DCBC0u; return; } if (c.pc != 0x003DCA64u) [[unlikely]] return; }
L_003DCA64:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003DCA78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003DCA74u) [[unlikely]] return; }
L_003DCA74:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003DCA78:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003DCB6C; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003DCAE8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003DCAA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCAA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DCAA0u) [[unlikely]] return; }
L_003DCAA0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003DCAA4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DCAB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCAB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DCAB4u) [[unlikely]] return; }
L_003DCAB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DCAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCAC0u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003DCBE0u; return; } if (c.pc != 0x003DCAC0u) [[unlikely]] return; }
L_003DCAC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCACCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B7(c, 65u, depth + 1u); else { c.pc = 0x003DCBD0u; return; } if (c.pc != 0x003DCACCu) [[unlikely]] return; }
L_003DCACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCAD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003DCBC0u; return; } if (c.pc != 0x003DCAD4u) [[unlikely]] return; }
L_003DCAD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCAE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 62u, depth + 1u); else { c.pc = 0x003DCBA0u; return; } if (c.pc != 0x003DCAE4u) [[unlikely]] return; }
L_003DCAE4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003DCAE8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DCB4C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003DCB08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DCB04u) [[unlikely]] return; }
L_003DCB04:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003DCB08:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003DCB1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 30u, depth + 1u); else { c.pc = 0x003DC960u; return; } if (c.pc != 0x003DCB18u) [[unlikely]] return; }
L_003DCB18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DCB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB24u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003DCBE0u; return; } if (c.pc != 0x003DCB24u) [[unlikely]] return; }
L_003DCB24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB30u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B7(c, 65u, depth + 1u); else { c.pc = 0x003DCBD0u; return; } if (c.pc != 0x003DCB30u) [[unlikely]] return; }
L_003DCB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003DCBC0u; return; } if (c.pc != 0x003DCB38u) [[unlikely]] return; }
L_003DCB38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 62u, depth + 1u); else { c.pc = 0x003DCBA0u; return; } if (c.pc != 0x003DCB48u) [[unlikely]] return; }
L_003DCB48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DCB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB54u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003DCBE0u; return; } if (c.pc != 0x003DCB54u) [[unlikely]] return; }
L_003DCB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003DCBC0u; return; } if (c.pc != 0x003DCB5Cu) [[unlikely]] return; }
L_003DCB5C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003DCB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003DCB6Cu) [[unlikely]] return; }
L_003DCB6C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003DCB80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003DCB7Cu) [[unlikely]] return; }
L_003DCB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003DCB80:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DCBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003DCBB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCBB4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003DCBB4u) [[unlikely]] return; }
L_003DCBB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DCBC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003DCBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DCBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003DCBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[5].w[0] + 12u);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003DCC44; } }
L_003DCC1C:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[9].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003DCC38; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DCC44; } }
L_003DCC38:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003DCC44:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCC1Cu | kUnwind; return; } goto L_003DCC1C; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCC58u); c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 71u, depth + 1u); else { c.pc = 0x003DCCA0u; return; } if (c.pc != 0x003DCC58u) [[unlikely]] return; }
L_003DCC58:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DCC70:
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
L_003DCCA0:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003DCD00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCCF8u); set32(c.r[5], c.r[5].w[0] - 10632u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003DCCF8u) [[unlikely]] return; }
L_003DCCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCD00u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003DCD00u) [[unlikely]] return; }
L_003DCD00:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCD0Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003DCD0Cu) [[unlikely]] return; }
L_003DCD0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_003DCD98; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[3].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[3].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 31;
L_003DCD98:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003DCDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_003DCDBC; } }
L_003DCDB8:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003DCDBC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCDD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003DCDD4u) [[unlikely]] return; }
L_003DCDD4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DCDE4; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003DCDE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003DCE10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_003DCE30:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003DCE54; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003DCE54:
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003DD060; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_003DCE88; }
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE80u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B7(c, 103u, depth + 1u); else { c.pc = 0x003DD760u; return; } if (c.pc != 0x003DCE80u) [[unlikely]] return; }
L_003DCE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DD05C; } }
L_003DCE88:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_003DCE9C; } }
    set32(c.r[3], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003DCE9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30396u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003DCED0; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_003DCED0:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003DCEF0; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003DCEF0:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 30396u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DCF30; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 30396u), c.r[4].w[0]);
    c.budget -= 2;
L_003DCF30:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    set32(c.r[17], c.r[2].w[0] - 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003DD080u; return; } if (c.pc != 0x003DCF54u) [[unlikely]] return; }
L_003DCF54:
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF80u); st32((c.r[29].w[0] + 108u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 85u, depth + 1u); else { c.pc = 0x003DD170u; return; } if (c.pc != 0x003DCF80u) [[unlikely]] return; }
L_003DCF80:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[8].d[0] = c.r[18].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; set32(c.r[16], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_003DCFDC; } }
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 132u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCFD4u); st32((c.r[29].w[0] + 100u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 94u, depth + 1u); else { c.pc = 0x003DD450u; return; } if (c.pc != 0x003DCFD4u) [[unlikely]] return; }
L_003DCFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 136u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCE30u | kUnwind; return; } goto L_003DCE30; } }
L_003DCFDC:
    set32(c.r[2], c.r[16].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_003DCFF0; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003DCFF0:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003DD014; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003DD014:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] << 32;  goto L_003DD040; }
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD034u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B7(c, 76u, depth + 1u); else { c.pc = 0x003DCE10u; return; } if (c.pc != 0x003DD034u) [[unlikely]] return; }
L_003DD034:
    c.r[18].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCE30u | kUnwind; return; } goto L_003DCE30; } }
L_003DD040:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD050u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B7(c, 76u, depth + 1u); else { c.pc = 0x003DCE10u; return; } if (c.pc != 0x003DD050u) [[unlikely]] return; }
L_003DD050:
    c.r[19].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCE30u | kUnwind; return; } goto L_003DCE30; } }
L_003DD05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003DD060:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003DD080:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DD098; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD098:
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DD0BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD0BC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003DD0D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DD168; } }
L_003DD0D0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003DD0FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DD0FC; } }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_003DD168; } }
L_003DD0FC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DD120; } }
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 6;
L_003DD120:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[4].d[0] = c.r[4].d[0] << 32;  goto L_003DD14C; }
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_003DD168; } }
L_003DD14C:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 7;
L_003DD168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DD170:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[8], ld32((c.r[7].w[0] + 4u)));  goto L_003DD180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DD444; } }
L_003DD180:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DD198; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD198:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[8].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[8].w[0] - 4u);  if (t) { goto L_003DD1BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD1BC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003DD278; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DD278; } }
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[10], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_003DD1F4; } }
L_003DD1EC:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[10], c.r[5].w[0] + 4u);
    c.budget -= 2;
L_003DD1F4:
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = c.r[10].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD1ECu | kUnwind; return; } goto L_003DD1EC; }
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_003DD218:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.f[0] = ld32((c.r[6].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[6].w[0] - 4u);  if (t) { goto L_003DD234; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD234:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD218u | kUnwind; return; } goto L_003DD218; }
    c.r[8].d[0] = c.r[10].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[5].d[0] != 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_003DD444; }
    c.f[1] = ld32((c.r[8].w[0]));
    set32(c.r[10], c.r[8].w[0] + 4u);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD1F4u | kUnwind; return; } goto L_003DD1F4; } }
L_003DD278:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DD310; } }
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[8].d[0] != c.r[3].d[0]) { c.r[6].d[0] = c.r[6].d[0] << 32;  goto L_003DD2A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[8].w[0]);  if (t) { goto L_003DD444; } }
L_003DD2A0:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.budget -= 1;
L_003DD2A4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = c.r[5].d[0] << 32;  goto L_003DD2F4; }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[8], 0u + 1u);  if (t) { goto L_003DD2E4; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD2E4:
    c.r[3].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD2A0u | kUnwind; return; } goto L_003DD2A0; } }
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_003DD2F4:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_003DD390; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[8].w[0]);  if (t) { goto L_003DD444; } }
L_003DD310:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003DD38C; } }
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_003DD344; } }
L_003DD33C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003DD344:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[6].d[0] << 32;  goto L_003DD370; }
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD33Cu | kUnwind; return; } goto L_003DD33C; }
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.budget -= 1;
L_003DD370:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[3].w[0] - 4u);  goto L_003DD38C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DD444; } }
L_003DD38C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_003DD390:
    c.r[10].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[9], c.r[3].w[0] + 4u);
    c.f[0] = ld32((c.r[10].w[0]));
    set32(c.r[8], 0u + 1u);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.f[1]);  if (t) { goto L_003DD3C0; } }
L_003DD3B8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003DD3C0:
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = c.r[9].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD3B8u | kUnwind; return; } goto L_003DD3B8; }
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.budget -= 1;
L_003DD3E4:
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[0] = ld32((c.r[5].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[10], c.r[5].w[0] - 4u);  if (t) { goto L_003DD400; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD400:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[10].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD3E4u | kUnwind; return; } goto L_003DD3E4; }
    c.r[6].d[0] = c.r[9].d[0] << 32;
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { st32((c.r[4].w[0]), c.r[6].w[0]);  goto L_003DD444; }
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[9], c.r[6].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD3C0u | kUnwind; return; } goto L_003DD3C0; } }
L_003DD444:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DD450:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[8], ld32((c.r[7].w[0] + 4u)));  goto L_003DD460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DD74C; } }
L_003DD460:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DD478; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD478:
    c.r[8].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    set32(c.r[6], c.r[3].w[0] - 4u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DD4A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD4A0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003DD564; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DD564; } }
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[10], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_003DD4D4; } }
L_003DD4CC:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[10], c.r[5].w[0] + 4u);
    c.budget -= 2;
L_003DD4D4:
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003DD4F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD4F8:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = c.r[10].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD4CCu | kUnwind; return; } goto L_003DD4CC; }
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_003DD508:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.f[0] = ld32((c.r[6].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[6].w[0] - 4u);  if (t) { goto L_003DD524; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD524:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD508u | kUnwind; return; } goto L_003DD508; }
    c.r[8].d[0] = c.r[10].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[5].d[0] != 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_003DD74C; }
    c.f[1] = ld32((c.r[8].w[0]));
    set32(c.r[10], c.r[8].w[0] + 4u);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD4D4u | kUnwind; return; } goto L_003DD4D4; } }
L_003DD564:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DD5F8; } }
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[8].d[0] != c.r[3].d[0]) { c.r[6].d[0] = c.r[6].d[0] << 32;  goto L_003DD590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[8].w[0]);  if (t) { goto L_003DD74C; } }
L_003DD58C:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.budget -= 1;
L_003DD590:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = c.r[5].d[0] << 32;  goto L_003DD5DC; }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[8], 0u + 1u);  if (t) { goto L_003DD5D0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD5D0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD58Cu | kUnwind; return; } goto L_003DD58C; } }
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_003DD5DC:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_003DD68C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[8].w[0]);  if (t) { goto L_003DD74C; } }
L_003DD5F8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003DD688; } }
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.r[10].d[0] = c.r[6].d[0] << 32;
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);  if (t) { goto L_003DD630; } }
L_003DD628:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003DD630:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[10].d[0]) { c.r[3].d[0] = c.r[6].d[0] << 32;  goto L_003DD66C; }
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003DD65C; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD65C:
    c.r[3].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD628u | kUnwind; return; } goto L_003DD628; }
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.budget -= 1;
L_003DD66C:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[3].w[0] - 4u);  goto L_003DD688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DD74C; } }
L_003DD688:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_003DD68C:
    c.r[10].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[9], c.r[3].w[0] + 4u);
    c.f[0] = ld32((c.r[10].w[0]));
    set32(c.r[8], 0u + 1u);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.f[1]);  if (t) { goto L_003DD6BC; } }
L_003DD6B4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[9], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003DD6BC:
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003DD6E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD6E0:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[9].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD6B4u | kUnwind; return; } goto L_003DD6B4; }
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.budget -= 1;
L_003DD6F0:
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[0] = ld32((c.r[5].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[10], c.r[5].w[0] - 4u);  if (t) { goto L_003DD70C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DD70C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[10].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD6F0u | kUnwind; return; } goto L_003DD6F0; }
    c.r[6].d[0] = c.r[9].d[0] << 32;
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { st32((c.r[4].w[0]), c.r[6].w[0]);  goto L_003DD74C; }
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[9], c.r[6].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD6BCu | kUnwind; return; } goto L_003DD6BC; } }
L_003DD74C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DD760:
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DD858; } }
    set32(c.r[3], c.r[5].w[0] - 4u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DD858; } }
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_003DD844; } }
L_003DD798:
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[3].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = c.r[9].d[0] << 32;  goto L_003DD808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[9].w[0] + 4u);  if (t) { goto L_003DD7E8; } }
L_003DD7B8:
    c.r[6].d[0] = c.r[9].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_003DD7E0; }
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 2;
L_003DD7E0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003DD7E8:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[6].d[0] != 0ull) { c.r[7].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD7B8u | kUnwind; return; } goto L_003DD7B8; }
    c.r[7].d[0] = c.r[9].d[0] << 32;
    c.budget -= 1;
L_003DD808:
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] << 32;  goto L_003DD83C; }
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 5;
L_003DD83C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003DD844:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[9].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD798u | kUnwind; return; } goto L_003DD798; }
L_003DD858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DD860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x003DD874u) [[unlikely]] return; }
L_003DD874:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD88Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DD88Cu) [[unlikely]] return; }
L_003DD88C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8A8u); set32(c.r[5], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DD8A8u) [[unlikely]] return; }
L_003DD8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8B0u); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_010E(c, 66u, depth + 1u); else { c.pc = 0x005387A0u; return; } if (c.pc != 0x003DD8B0u) [[unlikely]] return; }
L_003DD8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8B8u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 317u, depth + 1u); else { c.pc = 0x003D3380u; return; } if (c.pc != 0x003DD8B8u) [[unlikely]] return; }
L_003DD8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8E0u);  if (depth < kMaxDepth) unit_00AF(c, 402u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003DD8E0u) [[unlikely]] return; }
L_003DD8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8E8u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 345u, depth + 1u); else { c.pc = 0x003D3790u; return; } if (c.pc != 0x003DD8E8u) [[unlikely]] return; }
L_003DD8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8F0u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 319u, depth + 1u); else { c.pc = 0x003D33B0u; return; } if (c.pc != 0x003DD8F0u) [[unlikely]] return; }
L_003DD8F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD900u); set32(c.r[5], c.r[5].w[0] - 10592u);  if (depth < kMaxDepth) unit_00B1(c, 190u, depth + 1u); else { c.pc = 0x003C5DC0u; return; } if (c.pc != 0x003DD900u) [[unlikely]] return; }
L_003DD900:
    set32(c.r[2], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD90Cu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x003DD90Cu) [[unlikely]] return; }
L_003DD90C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD91Cu); set32(c.r[5], c.r[5].w[0] - 10576u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x003DD91Cu) [[unlikely]] return; }
L_003DD91C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD928u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x003DD928u) [[unlikely]] return; }
L_003DD928:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DD940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DD988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 22272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD970u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 403u, depth + 1u); else { c.pc = 0x003BF300u; return; } if (c.pc != 0x003DD970u) [[unlikely]] return; }
L_003DD970:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DD98C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DD988u) [[unlikely]] return; }
L_003DD988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DD98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DD9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 10558u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 406u, depth + 1u); else { c.pc = 0x003BF370u; return; } if (c.pc != 0x003DD9BCu) [[unlikely]] return; }
L_003DD9BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 22272u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DD9E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003DDA04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9FCu);  if (depth < kMaxDepth) unit_0019(c, 332u, depth + 1u); else { c.pc = 0x001670C0u; return; } if (c.pc != 0x003DD9FCu) [[unlikely]] return; }
L_003DD9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003DDA0C; } }
L_003DDA04:
    c.f[0] = c.r[2].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003DDA0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DDA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA3Cu); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x003DDA3Cu) [[unlikely]] return; }
L_003DDA3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_003DDA50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDB4C; } }
L_003DDA50:
    set32(c.r[5], c.r[29].w[0] + 62u);
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA6Cu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDA6Cu) [[unlikely]] return; }
L_003DDA6C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 62u);  goto L_003DDA80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDB4C; } }
L_003DDA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA88u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00164800u; return; } if (c.pc != 0x003DDA88u) [[unlikely]] return; }
L_003DDA88:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[16].d[0] = ld16((c.r[29].w[0] + 62u));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDAA4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDAA4u) [[unlikely]] return; }
L_003DDAA4:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_003DDAB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDB4C; } }
L_003DDAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDABCu);  if (depth < kMaxDepth) unit_000F(c, 86u, depth + 1u); else { c.pc = 0x0013CF10u; return; } if (c.pc != 0x003DDABCu) [[unlikely]] return; }
L_003DDABC:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_003DDAD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDB4C; } }
L_003DDAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDAD8u);  if (depth < kMaxDepth) unit_000F(c, 86u, depth + 1u); else { c.pc = 0x0013CF10u; return; } if (c.pc != 0x003DDAD8u) [[unlikely]] return; }
L_003DDAD8:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDAE4u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0013C8C0u; return; } if (c.pc != 0x003DDAE4u) [[unlikely]] return; }
L_003DDAE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB04u); set32(c.r[8], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDB04u) [[unlikely]] return; }
L_003DDB04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_003DDB28; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 59u, depth + 1u); else { c.pc = 0x0013C890u; return; } if (c.pc != 0x003DDB18u) [[unlikely]] return; }
L_003DDB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB20u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x003DDB20u) [[unlikely]] return; }
L_003DDB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDB4C; } }
L_003DDB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB30u); set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_000F(c, 59u, depth + 1u); else { c.pc = 0x0013C890u; return; } if (c.pc != 0x003DDB30u) [[unlikely]] return; }
L_003DDB30:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB48u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDB48u) [[unlikely]] return; }
L_003DDB48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003DDB4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DDB60:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D2F0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 104u, depth); }
L_003DDB70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDB98u) [[unlikely]] return; }
L_003DDB98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_003DDBB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBA8u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x003DDBA8u) [[unlikely]] return; }
L_003DDBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003DDC6C; } }
L_003DDBB0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DDC68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDBC8u) [[unlikely]] return; }
L_003DDBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DDC68; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBE0u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x003DDBE0u) [[unlikely]] return; }
L_003DDBE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBF4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDBF4u) [[unlikely]] return; }
L_003DDBF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC14u); set32(c.r[8], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDC14u) [[unlikely]] return; }
L_003DDC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x003DDC1Cu) [[unlikely]] return; }
L_003DDC1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 62u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC2Cu); st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x001648E0u; return; } if (c.pc != 0x003DDC2Cu) [[unlikely]] return; }
L_003DDC2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC44u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDC44u) [[unlikely]] return; }
L_003DDC44:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003DDC68; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC68u); set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDC68u) [[unlikely]] return; }
L_003DDC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003DDC6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DDC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003DDCA4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDCA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDCA4u) [[unlikely]] return; }
L_003DDCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DDCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DDD08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDCDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDCDCu) [[unlikely]] return; }
L_003DDCDC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003DDD10; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDCFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDCFCu) [[unlikely]] return; }
L_003DDCFC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DDD0C; } }
L_003DDD08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DDD0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003DDD10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DDD20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDD4Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 86u, depth + 1u); else { c.pc = 0x0013CF10u; return; } if (c.pc != 0x003DDD4Cu) [[unlikely]] return; }
L_003DDD4C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDD60u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDD60u) [[unlikely]] return; }
L_003DDD60:
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  goto L_003DDE80; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDD84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDD84u) [[unlikely]] return; }
L_003DDD84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_003DDD9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDD94u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x003DDD94u) [[unlikely]] return; }
L_003DDD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003DDE6C; } }
L_003DDD9C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003DDE6C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDDB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDDB4u) [[unlikely]] return; }
L_003DDDB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_003DDDC8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DDE6C; } }
L_003DDDC8:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDDD4u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x003DDDD4u) [[unlikely]] return; }
L_003DDDD4:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDDE8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDDE8u) [[unlikely]] return; }
L_003DDDE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE08u); set32(c.r[8], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDE08u) [[unlikely]] return; }
L_003DDE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE10u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x003DDE10u) [[unlikely]] return; }
L_003DDE10:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 94u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE20u); st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x001648E0u; return; } if (c.pc != 0x003DDE20u) [[unlikely]] return; }
L_003DDE20:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 94u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE38u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDE38u) [[unlikely]] return; }
L_003DDE38:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003DDE6C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE60u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDE60u) [[unlikely]] return; }
L_003DDE60:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_003DDE6C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DDE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DDE7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDE94; } }
L_003DDE7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_003DDE80:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE94u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDE94u) [[unlikely]] return; }
L_003DDE94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003DDEB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDEE4u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDEE4u) [[unlikely]] return; }
L_003DDEE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003DDF24; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDF00u) [[unlikely]] return; }
L_003DDF00:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF14u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDF14u) [[unlikely]] return; }
L_003DDF14:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  goto L_003DDF40; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003DDF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF2Cu);  if (depth < kMaxDepth) unit_00B7(c, 127u, depth + 1u); else { c.pc = 0x003DDA20u; return; } if (c.pc != 0x003DDF2Cu) [[unlikely]] return; }
L_003DDF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DDF3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003DDF54; } }
L_003DDF3C:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_003DDF40:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDF54u) [[unlikely]] return; }
L_003DDF54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DDF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003DDF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003DDF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003DDFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DE038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22304u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_003DDFE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDFE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DDFE4u) [[unlikely]] return; }
L_003DDFE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003DDFE8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003DE004; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE000u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DE000u) [[unlikely]] return; }
L_003DE000:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003DE004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE00Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003DE00Cu) [[unlikely]] return; }
L_003DE00C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003DE024; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_003DE024:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DE03C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DE038u) [[unlikely]] return; }
L_003DE038:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DE03C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DE050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22304u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0ACu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003DE0ACu) [[unlikely]] return; }
L_003DE0AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  goto L_003DE0C8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0C4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x003DE0C4u) [[unlikely]] return; }
L_003DE0C4:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_003DE0C8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003DE0D4u) [[unlikely]] return; }
L_003DE0D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  goto L_003DE0F0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 343u, depth + 1u); else { c.pc = 0x00167400u; return; } if (c.pc != 0x003DE0ECu) [[unlikely]] return; }
L_003DE0EC:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_003DE0F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE100u); st32((c.r[19].w[0] + 16u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x003DE100u) [[unlikely]] return; }
L_003DE100:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DE130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DE140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DE150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 90u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003DE208; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 22u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_003DE18C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003DE1A4; } }
L_003DE18C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003DE1A4:
    c.f[0] = ld32((c.r[28].w[0] - 29056u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE1B0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x003DE1B0u) [[unlikely]] return; }
L_003DE1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_003DE1D8; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_003DE1F0; } }
L_003DE1D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 6;
L_003DE1F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE208u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DE208u) [[unlikely]] return; }
L_003DE208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DE220:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003DE4B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE25Cu);  if (depth < kMaxDepth) unit_00AF(c, 266u, depth + 1u); else { c.pc = 0x003BE370u; return; } if (c.pc != 0x003DE25Cu) [[unlikely]] return; }
L_003DE25C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 156u), c.r[17].w[0]);  if (t) { goto L_003DE280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE270u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DE270u) [[unlikely]] return; }
L_003DE270:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE280u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DE280u) [[unlikely]] return; }
L_003DE280:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 156u)));  goto L_003DE470; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DE2A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DE2B0; } }
L_003DE2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DE2B0u) [[unlikely]] return; }
L_003DE2B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2C8u); set32(c.r[5], c.r[29].w[0] + 148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DE2C8u) [[unlikely]] return; }
L_003DE2C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DE324; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2F4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DE2F4u) [[unlikely]] return; }
L_003DE2F4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE304u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DE304u) [[unlikely]] return; }
L_003DE304:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003DE324; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE324u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DE324u) [[unlikely]] return; }
L_003DE324:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003DE46C; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE340u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x003DE340u) [[unlikely]] return; }
L_003DE340:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE34Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00C9(c, 247u, depth + 1u); else { c.pc = 0x00425C10u; return; } if (c.pc != 0x003DE34Cu) [[unlikely]] return; }
L_003DE34C:
    set32(c.r[20], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[29].w[0] + 108u);  if (t) { goto L_003DE438; } }
L_003DE358:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 220u)));
    c.budget -= 5;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_003DE374; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003DE3B8; } }
L_003DE374:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE380u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DE380u) [[unlikely]] return; }
L_003DE380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 17888u);  if (t) { goto L_003DE39C; } }
L_003DE38C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003DE39C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003DE3A8; } }
L_003DE39C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE38Cu | kUnwind; return; } goto L_003DE38C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003DE3A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003DE3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DE3B8; } }
L_003DE3B8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003DE3EC; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DE3E8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE3E0u); set32(c.r[6], c.r[6].w[0] - 10532u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DE3E0u) [[unlikely]] return; }
L_003DE3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] << 32;  if (t) { goto L_003DE430; } }
L_003DE3E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003DE3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE3F4u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003DE3F4u) [[unlikely]] return; }
L_003DE3F4:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE400u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DE400u) [[unlikely]] return; }
L_003DE400:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE410u); st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 431u, depth + 1u); else { c.pc = 0x0020B850u; return; } if (c.pc != 0x003DE410u) [[unlikely]] return; }
L_003DE410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE418u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 122u, depth + 1u); else { c.pc = 0x0041D660u; return; } if (c.pc != 0x003DE418u) [[unlikely]] return; }
L_003DE418:
    set32(c.r[2], ld32((c.r[19].w[0] + 220u)));
    set32(c.r[3], 0u + 19u);
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE42Cu); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DE42Cu) [[unlikely]] return; }
L_003DE42C:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_003DE430:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_003DE438:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE358u | kUnwind; return; } goto L_003DE358; }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE46Cu); set32(c.r[7], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x003DE46Cu) [[unlikely]] return; }
L_003DE46C:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_003DE470:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003DE4AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE480u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DE480u) [[unlikely]] return; }
L_003DE480:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE490u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DE490u) [[unlikely]] return; }
L_003DE490:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DE4AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DE4ACu) [[unlikely]] return; }
L_003DE4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003DE4B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003DE4D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE500u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003DE500u) [[unlikely]] return; }
L_003DE500:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE50Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DE50Cu) [[unlikely]] return; }
L_003DE50C:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE51Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE51Cu) [[unlikely]] return; }
L_003DE51C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003DE540; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10468u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE53Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x003DE53Cu) [[unlikely]] return; }
L_003DE53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003DE540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE548u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003DE548u) [[unlikely]] return; }
L_003DE548:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE554u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE554u) [[unlikely]] return; }
L_003DE554:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003DE570; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE56Cu); set32(c.r[5], c.r[5].w[0] - 10458u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x003DE56Cu) [[unlikely]] return; }
L_003DE56C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003DE570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE578u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003DE578u) [[unlikely]] return; }
L_003DE578:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE584u) [[unlikely]] return; }
L_003DE584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003DE5A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10449u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x003DE5A0u) [[unlikely]] return; }
L_003DE5A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003DE5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003DE5ACu) [[unlikely]] return; }
L_003DE5AC:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE5B8u) [[unlikely]] return; }
L_003DE5B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003DE5E8; }
    c.f[12] = ld32((c.r[28].w[0] - 31772u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 10436u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x003DE5E4u) [[unlikely]] return; }
L_003DE5E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003DE5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003DE5F0u) [[unlikely]] return; }
L_003DE5F0:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE5FCu) [[unlikely]] return; }
L_003DE5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DE64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE60Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003DE60Cu) [[unlikely]] return; }
L_003DE60C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_003DE64C:
    c.r[6].d[0] = ld16((c.r[21].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE67Cu); st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE67Cu) [[unlikely]] return; }
L_003DE67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DE6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE68Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003DE68Cu) [[unlikely]] return; }
L_003DE68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_003DE6D4:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE70Cu); st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE70Cu) [[unlikely]] return; }
L_003DE70C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DE77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE71Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x003DE71Cu) [[unlikely]] return; }
L_003DE71C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE738u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x003DE738u) [[unlikely]] return; }
L_003DE738:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE744u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x003DE744u) [[unlikely]] return; }
L_003DE744:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE750u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x003DE750u) [[unlikely]] return; }
L_003DE750:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE75Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x003DE75Cu) [[unlikely]] return; }
L_003DE75C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x003DE768u) [[unlikely]] return; }
L_003DE768:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x003DE774u) [[unlikely]] return; }
L_003DE774:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DE77C:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 56u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE7E4u); st8((c.r[19].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE7E4u) [[unlikely]] return; }
L_003DE7E4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));  goto L_003DE800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE7F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x003DE7F8u) [[unlikely]] return; }
L_003DE7F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.budget -= 2;
L_003DE800:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_003DE8AC; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE828u) [[unlikely]] return; }
L_003DE828:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_003DE83C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE838u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003DE838u) [[unlikely]] return; }
L_003DE838:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_003DE83C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DE860; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DE8A0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DE8A0; } }
L_003DE860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_003DE888; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_003DE8A4; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DE8A0; } }
L_003DE888:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DE8A0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003DE8A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_003DE8A4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_003DE8AC:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_003DE958; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE8D4u) [[unlikely]] return; }
L_003DE8D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_003DE8E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003DE8E4u) [[unlikely]] return; }
L_003DE8E4:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_003DE8E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DE90C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DE94C; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DE94C; } }
L_003DE90C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_003DE934; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_003DE950; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DE94C; } }
L_003DE934:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DE94C; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003DE94C:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_003DE950:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_003DE958:
    set32(c.r[3], 0u - 3841u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  goto L_003DEAA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE980u); set32(c.r[4], c.r[4].w[0] - 10426u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x003DE980u) [[unlikely]] return; }
L_003DE980:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003DE990u) [[unlikely]] return; }
L_003DE990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE998u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x003DE998u) [[unlikely]] return; }
L_003DE998:
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[23].d[0] != 0ull) { set32(c.r[17], ld32((c.r[23].w[0] + 8u)));  goto L_003DEA3C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE9B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DE9B8u) [[unlikely]] return; }
L_003DE9B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_003DE9CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE9C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003DE9C8u) [[unlikely]] return; }
L_003DE9C8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_003DE9CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DE9F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DEA30; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DEA30; } }
L_003DE9F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_003DEA18; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_003DEA34; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DEA30; } }
L_003DEA18:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DEA30; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003DEA30:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_003DEA34:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 2;
L_003DEA3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[22].d[0];  if (t) { goto L_003DEAA4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_003DEA84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEA54u) [[unlikely]] return; }
L_003DEA54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA64u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEA64u) [[unlikely]] return; }
L_003DEA64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DEA80; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DEA80u) [[unlikely]] return; }
L_003DEA80:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_003DEA84:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003DEAA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEA94u) [[unlikely]] return; }
L_003DEA94:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAA4u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEAA4u) [[unlikely]] return; }
L_003DEAA4:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003DEAA8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAB4u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003DEAB4u) [[unlikely]] return; }
L_003DEAB4:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAC0u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003DEAC0u) [[unlikely]] return; }
L_003DEAC0:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEACCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003DEACCu) [[unlikely]] return; }
L_003DEACC:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEADCu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003DEADCu) [[unlikely]] return; }
L_003DEADC:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAE8u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003DEAE8u) [[unlikely]] return; }
L_003DEAE8:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003DEAF4u) [[unlikely]] return; }
L_003DEAF4:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB04u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003DEB04u) [[unlikely]] return; }
L_003DEB04:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB10u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003DEB10u) [[unlikely]] return; }
L_003DEB10:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003DEB1Cu) [[unlikely]] return; }
L_003DEB1C:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB2Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003DEB2Cu) [[unlikely]] return; }
L_003DEB2C:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB38u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003DEB38u) [[unlikely]] return; }
L_003DEB38:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003DEB44u) [[unlikely]] return; }
L_003DEB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003DEB4Cu) [[unlikely]] return; }
L_003DEB4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB58u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C7(c, 340u, depth + 1u); else { c.pc = 0x0041F220u; return; } if (c.pc != 0x003DEB58u) [[unlikely]] return; }
L_003DEB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB60u); set32(c.r[4], ld32((c.r[29].w[0] + 152u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DEB60u) [[unlikely]] return; }
L_003DEB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
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
L_003DEB90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003DEBACu) [[unlikely]] return; }
L_003DEBAC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DEBB8u) [[unlikely]] return; }
L_003DEBB8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DEBC8u) [[unlikely]] return; }
L_003DEBC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  goto L_003DEBF4; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 20u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBECu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x003DEBECu) [[unlikely]] return; }
L_003DEBEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_003DEBF4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_003DEC60; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[16].w[0]);  goto L_003DEC3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEC0Cu) [[unlikely]] return; }
L_003DEC0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEC1Cu) [[unlikely]] return; }
L_003DEC1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DEC38; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DEC38u) [[unlikely]] return; }
L_003DEC38:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_003DEC3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003DEC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEC4Cu) [[unlikely]] return; }
L_003DEC4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC5Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEC5Cu) [[unlikely]] return; }
L_003DEC5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_003DEC60:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC74u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DEC74u) [[unlikely]] return; }
L_003DEC74:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DEC80u) [[unlikely]] return; }
L_003DEC80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  goto L_003DEC9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x003DEC94u) [[unlikely]] return; }
L_003DEC94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_003DEC9C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_003DED08; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[16].w[0]);  goto L_003DECE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DECB4u) [[unlikely]] return; }
L_003DECB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECC4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DECC4u) [[unlikely]] return; }
L_003DECC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DECE0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DECE0u) [[unlikely]] return; }
L_003DECE0:
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_003DECE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003DED04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DECF4u) [[unlikely]] return; }
L_003DECF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED04u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DED04u) [[unlikely]] return; }
L_003DED04:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003DED08:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED18u); set32(c.r[5], ld32((c.r[17].w[0] + 8u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DED18u) [[unlikely]] return; }
L_003DED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED20u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DED20u) [[unlikely]] return; }
L_003DED20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DED40:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003DED50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED74u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003DED74u) [[unlikely]] return; }
L_003DED74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED84u); st32((c.r[29].w[0] + 116u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DED84u) [[unlikely]] return; }
L_003DED84:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], 0u + 256u);  goto L_003DEE00; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[19].w[0]);  goto L_003DEDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEDACu) [[unlikely]] return; }
L_003DEDAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDBCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEDBCu) [[unlikely]] return; }
L_003DEDBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DEDD8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DEDD8u) [[unlikely]] return; }
L_003DEDD8:
    st32((c.r[17].w[0] + 28u), c.r[19].w[0]);
    c.budget -= 1;
L_003DEDDC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003DEDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEDECu) [[unlikely]] return; }
L_003DEDEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEDFCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEDFCu) [[unlikely]] return; }
L_003DEDFC:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_003DEE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DEE08u) [[unlikely]] return; }
L_003DEE08:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 32u)));  goto L_003DEE28; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003DEE20u) [[unlikely]] return; }
L_003DEE20:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 2;
L_003DEE28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_003DEE90; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[19].w[0]);  goto L_003DEE70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEE40u) [[unlikely]] return; }
L_003DEE40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEE50u) [[unlikely]] return; }
L_003DEE50:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DEE6C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DEE6Cu) [[unlikely]] return; }
L_003DEE6C:
    st32((c.r[17].w[0] + 32u), c.r[19].w[0]);
    c.budget -= 1;
L_003DEE70:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003DEE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEE80u) [[unlikely]] return; }
L_003DEE80:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE90u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEE90u) [[unlikely]] return; }
L_003DEE90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10405u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DEEAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DEEB4; } }
L_003DEEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEEB4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DEEB4u) [[unlikely]] return; }
L_003DEEB4:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEEC4u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003DEEC4u) [[unlikely]] return; }
L_003DEEC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_003DEF24; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEEF0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DEEF0u) [[unlikely]] return; }
L_003DEEF0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF00u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DEF00u) [[unlikely]] return; }
L_003DEF00:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DEF20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF20u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DEF20u) [[unlikely]] return; }
L_003DEF20:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003DEF24:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF38u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DEF38u) [[unlikely]] return; }
L_003DEF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF40u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003DEF40u) [[unlikely]] return; }
L_003DEF40:
    set32(c.r[2], 0u + 1600u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 22u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF5Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003DEF5Cu) [[unlikely]] return; }
L_003DEF5C:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 22u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF74u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003DEF74u) [[unlikely]] return; }
L_003DEF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 278u, depth + 1u); else { c.pc = 0x003DEB90u; return; } if (c.pc != 0x003DEF7Cu) [[unlikely]] return; }
L_003DEF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003DEF84u) [[unlikely]] return; }
L_003DEF84:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DEF90u) [[unlikely]] return; }
L_003DEF90:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], 0u + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEFA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DEFA0u) [[unlikely]] return; }
L_003DEFA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 16u)));  goto L_003DF014; }
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = 0u;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[19] = ld32((c.r[28].w[0] - 32020u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[29].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[18] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 10413u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 3u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 31040u);
    set32(c.r[10], c.r[10].w[0] + 18144u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.f[16] = c.f[12];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF00Cu); c.f[17] = c.f[12];  if (depth < kMaxDepth) unit_0043(c, 177u, depth + 1u); else { c.pc = 0x0020ED20u; return; } if (c.pc != 0x003DF00Cu) [[unlikely]] return; }
L_003DF00C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_003DF014:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_003DF080; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_003DF05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF02Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF02Cu) [[unlikely]] return; }
L_003DF02C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF03Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF03Cu) [[unlikely]] return; }
L_003DF03C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF058; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF058u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF058u) [[unlikely]] return; }
L_003DF058:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_003DF05C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003DF07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF06Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF06Cu) [[unlikely]] return; }
L_003DF06C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF07Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF07Cu) [[unlikely]] return; }
L_003DF07C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_003DF080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF094u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003DF094u) [[unlikely]] return; }
L_003DF094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF09Cu); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DF09Cu) [[unlikely]] return; }
L_003DF09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF0A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 220u, depth + 1u); else { c.pc = 0x003DE4D0u; return; } if (c.pc != 0x003DF0A4u) [[unlikely]] return; }
L_003DF0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF0ACu); set32(c.r[4], ld32((c.r[29].w[0] + 112u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DF0ACu) [[unlikely]] return; }
L_003DF0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003DF0D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF118u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF118u) [[unlikely]] return; }
L_003DF118:
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_003DF15C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF12Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF12Cu) [[unlikely]] return; }
L_003DF12C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF13Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF13Cu) [[unlikely]] return; }
L_003DF13C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF158; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF158u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF158u) [[unlikely]] return; }
L_003DF158:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003DF15C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_003DF174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF16Cu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003DF16Cu) [[unlikely]] return; }
L_003DF16C:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 2;
L_003DF174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF17Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DF17Cu) [[unlikely]] return; }
L_003DF17C:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_003DF1C8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 28u);  goto L_003DF1CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF19Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF19Cu) [[unlikely]] return; }
L_003DF19C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF1ACu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF1ACu) [[unlikely]] return; }
L_003DF1AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF1C8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF1C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF1C8u) [[unlikely]] return; }
L_003DF1C8:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_003DF1CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_003DF218; }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DF214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF1E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF1E8u) [[unlikely]] return; }
L_003DF1E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF1F8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF1F8u) [[unlikely]] return; }
L_003DF1F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF214; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF214u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF214u) [[unlikely]] return; }
L_003DF214:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_003DF218:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_003DF264; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DF260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF234u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF234u) [[unlikely]] return; }
L_003DF234:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF244u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF244u) [[unlikely]] return; }
L_003DF244:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF260; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF260u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF260u) [[unlikely]] return; }
L_003DF260:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_003DF264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_003DF2B0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DF2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF280u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF280u) [[unlikely]] return; }
L_003DF280:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF290u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF290u) [[unlikely]] return; }
L_003DF290:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF2AC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF2ACu) [[unlikely]] return; }
L_003DF2AC:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003DF2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DF2F8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DF2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF2CCu) [[unlikely]] return; }
L_003DF2CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2DCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF2DCu) [[unlikely]] return; }
L_003DF2DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF2F8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF2F8u) [[unlikely]] return; }
L_003DF2F8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003DF310; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_003DF310:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003DF328; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF324u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DF324u) [[unlikely]] return; }
L_003DF324:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003DF328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DF340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003DF39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF38Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF38Cu) [[unlikely]] return; }
L_003DF38C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF39Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF39Cu) [[unlikely]] return; }
L_003DF39C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_003DF3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF3B0u) [[unlikely]] return; }
L_003DF3B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF3C0u) [[unlikely]] return; }
L_003DF3C0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_003DF3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF3D4u) [[unlikely]] return; }
L_003DF3D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3E4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF3E4u) [[unlikely]] return; }
L_003DF3E4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_003DF408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF3F8u) [[unlikely]] return; }
L_003DF3F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF408u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF408u) [[unlikely]] return; }
L_003DF408:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_003DF42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF41Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF41Cu) [[unlikely]] return; }
L_003DF41C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF42Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF42Cu) [[unlikely]] return; }
L_003DF42C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF43Cu); st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B7(c, 299u, depth + 1u); else { c.pc = 0x003DED50u; return; } if (c.pc != 0x003DF43Cu) [[unlikely]] return; }
L_003DF43C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DF460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003DF49C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22384u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003DF498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF498u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003DF498u) [[unlikely]] return; }
L_003DF498:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003DF49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003DF4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003DF4C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003DF500; } }
L_003DF4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4F4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B8(c, 360u, depth + 1u); else { c.pc = 0x003E2AD0u; return; } if (c.pc != 0x003DF4F4u) [[unlikely]] return; }
L_003DF4F4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 56u);
    c.budget -= 3;
L_003DF500:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF4ECu | kUnwind; return; } goto L_003DF4EC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DF540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DF5A4; } }
L_003DF578:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 20u);  if (t) { goto L_003DF5A0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003DF5A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF59Cu);  if (depth < kMaxDepth) unit_00B8(c, 464u, depth + 1u); else { c.pc = 0x003E3890u; return; } if (c.pc != 0x003DF59Cu) [[unlikely]] return; }
L_003DF59C:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_003DF5A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003DF5A4:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF578u | kUnwind; return; } goto L_003DF578; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DF5D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10368u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[19], ld32((c.r[6].w[0] + 92u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003DF62C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DF634; } }
L_003DF62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF634u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DF634u) [[unlikely]] return; }
L_003DF634:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF64Cu); set32(c.r[5], c.r[29].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF64Cu) [[unlikely]] return; }
L_003DF64C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[20], ld32((c.r[17].w[0] + 8u)));  goto L_003DF6B0; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF67Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF67Cu) [[unlikely]] return; }
L_003DF67C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF68Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF68Cu) [[unlikely]] return; }
L_003DF68C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DF6AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6ACu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DF6ACu) [[unlikely]] return; }
L_003DF6AC:
    set32(c.r[20], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003DF6B0:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6BCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003DF6BCu) [[unlikely]] return; }
L_003DF6BC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003DF6DC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 223u, depth + 1u); else { c.pc = 0x003E5910u; return; } if (c.pc != 0x003DF6D4u) [[unlikely]] return; }
L_003DF6D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003DF6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 72u, depth + 1u); else { c.pc = 0x003E4980u; return; } if (c.pc != 0x003DF6E4u) [[unlikely]] return; }
L_003DF6E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF704u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF704u) [[unlikely]] return; }
L_003DF704:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 486u, depth + 1u); else { c.pc = 0x003E3AF0u; return; } if (c.pc != 0x003DF710u) [[unlikely]] return; }
L_003DF710:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[17].w[0]);
    st32((c.r[3].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003DF750:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 10358u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DF798; } }
L_003DF790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF798u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DF798u) [[unlikely]] return; }
L_003DF798:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF7B0u); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF7B0u) [[unlikely]] return; }
L_003DF7B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DF810; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF7E0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF7E0u) [[unlikely]] return; }
L_003DF7E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF7F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF7F0u) [[unlikely]] return; }
L_003DF7F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DF810; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF810u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DF810u) [[unlikely]] return; }
L_003DF810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10343u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DF82C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DF834; } }
L_003DF82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF834u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DF834u) [[unlikely]] return; }
L_003DF834:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF84Cu); set32(c.r[5], c.r[29].w[0] + 184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF84Cu) [[unlikely]] return; }
L_003DF84C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DF8AC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF87Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DF87Cu) [[unlikely]] return; }
L_003DF87C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF88Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DF88Cu) [[unlikely]] return; }
L_003DF88C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DF8AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF8ACu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DF8ACu) [[unlikely]] return; }
L_003DF8AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17928u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF8C8u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_00B8(c, 128u, depth + 1u); else { c.pc = 0x003E0ED0u; return; } if (c.pc != 0x003DF8C8u) [[unlikely]] return; }
L_003DF8C8:
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003DF960; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DF95C; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_003DF8F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DF95C; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_003DF8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF8F8u);  if (depth < kMaxDepth) unit_00B9(c, 51u, depth + 1u); else { c.pc = 0x003E4730u; return; } if (c.pc != 0x003DF8F8u) [[unlikely]] return; }
L_003DF8F8:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF920u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 146u, depth + 1u); else { c.pc = 0x003E1160u; return; } if (c.pc != 0x003DF920u) [[unlikely]] return; }
L_003DF920:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF92Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003DF92Cu) [[unlikely]] return; }
L_003DF92C:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF95Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 505u, depth + 1u); else { c.pc = 0x003E3DD0u; return; } if (c.pc != 0x003DF95Cu) [[unlikely]] return; }
L_003DF95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003DF960:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003DF980:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003DF9A0u) [[unlikely]] return; }
L_003DF9A0:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DF9ACu) [[unlikely]] return; }
L_003DF9AC:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], c.r[4].w[0] - 10330u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003DF9D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DF9E0; } }
L_003DF9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DF9E0u) [[unlikely]] return; }
L_003DF9E0:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9F8u); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DF9F8u) [[unlikely]] return; }
L_003DF9F8:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_003DFA68; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_003DFA48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFA18u) [[unlikely]] return; }
L_003DFA18:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA28u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFA28u) [[unlikely]] return; }
L_003DFA28:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DFA44; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DFA44u) [[unlikely]] return; }
L_003DFA44:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_003DFA48:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003DFA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFA58u) [[unlikely]] return; }
L_003DFA58:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA68u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFA68u) [[unlikely]] return; }
L_003DFA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003DFAC8; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA94u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFA94u) [[unlikely]] return; }
L_003DFA94:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFAA4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFAA4u) [[unlikely]] return; }
L_003DFAA4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DFAC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFAC4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DFAC4u) [[unlikely]] return; }
L_003DFAC4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003DFAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DFC2C; } }
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003DFADCu) [[unlikely]] return; }
L_003DFADC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0])));  goto L_003DFAFC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFAF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003DFAF4u) [[unlikely]] return; }
L_003DFAF4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003DFAFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_003DFB64; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003DFB44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFB14u) [[unlikely]] return; }
L_003DFB14:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB24u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFB24u) [[unlikely]] return; }
L_003DFB24:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DFB40; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DFB40u) [[unlikely]] return; }
L_003DFB40:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003DFB44:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003DFB64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFB54u) [[unlikely]] return; }
L_003DFB54:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB64u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFB64u) [[unlikely]] return; }
L_003DFB64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10330u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DFB80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003DFB88; } }
L_003DFB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB88u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DFB88u) [[unlikely]] return; }
L_003DFB88:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB98u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003DFB98u) [[unlikely]] return; }
L_003DFB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_003DFBF8; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBC4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFBC4u) [[unlikely]] return; }
L_003DFBC4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBD4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFBD4u) [[unlikely]] return; }
L_003DFBD4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DFBF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBF4u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DFBF4u) [[unlikely]] return; }
L_003DFBF4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003DFBF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC0Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DFC0Cu) [[unlikely]] return; }
L_003DFC0C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003DFC2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC38u); set32(c.r[4], c.r[4].w[0] - 10330u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x003DFC38u) [[unlikely]] return; }
L_003DFC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x003DFC40u) [[unlikely]] return; }
L_003DFC40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  goto L_003DFC80; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003DFC58u) [[unlikely]] return; }
L_003DFC58:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC74u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DFC74u) [[unlikely]] return; }
L_003DFC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003DFC7Cu) [[unlikely]] return; }
L_003DFC7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_003DFC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC88u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003DFC88u) [[unlikely]] return; }
L_003DFC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003DFCB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_003DFFE4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD18u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x003DFD18u) [[unlikely]] return; }
L_003DFD18:
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_003DFFD0; } }
L_003DFD50:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD5Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x003DFD5Cu) [[unlikely]] return; }
L_003DFD5C:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10368u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 412u)));  if (t) { goto L_003DFD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  if (t) { goto L_003DFD80; } }
L_003DFD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD80u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003DFD80u) [[unlikely]] return; }
L_003DFD80:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD98u); set32(c.r[5], c.r[29].w[0] + 264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DFD98u) [[unlikely]] return; }
L_003DFD98:
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DFDF0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFDC0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003DFDC0u) [[unlikely]] return; }
L_003DFDC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFDD0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003DFDD0u) [[unlikely]] return; }
L_003DFDD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 116u));  goto L_003DFDF4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFDF0u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003DFDF0u) [[unlikely]] return; }
L_003DFDF0:
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.budget -= 1;
L_003DFDF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.r[4].w[0]);  if (t) { goto L_003DFE3C; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DFE30; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 424u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 10ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003DFE30:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  goto L_003DFE40; }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003DFE3C:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_003DFE40:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], c.r[17].w[0] + 20u);  if (t) { goto L_003DFEA4; } }
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE60u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 499u, depth + 1u); else { c.pc = 0x003E3C50u; return; } if (c.pc != 0x003DFE60u) [[unlikely]] return; }
L_003DFE60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[22].w[0])));  goto L_003DFEA8; }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 10315u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE8Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DFE8Cu) [[unlikely]] return; }
L_003DFE8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFEA0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 254u, depth + 1u); else { c.pc = 0x004FE230u; return; } if (c.pc != 0x003DFEA0u) [[unlikely]] return; }
L_003DFEA0:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003DFEA4:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_003DFEA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DFFB0; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DFFB0; } }
    c.r[3].d[0] = c.r[19].d[0] ^ 1ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_003DFF7C; } }
L_003DFEE4:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003DFF74; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DFF70; } }
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF10u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 457u, depth + 1u); else { c.pc = 0x003E35F0u; return; } if (c.pc != 0x003DFF10u) [[unlikely]] return; }
L_003DFF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DFF70; } }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF2Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B7(c, 381u, depth + 1u); else { c.pc = 0x003DF5D0u; return; } if (c.pc != 0x003DFF2Cu) [[unlikely]] return; }
L_003DFF2C:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF40u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_00B8(c, 499u, depth + 1u); else { c.pc = 0x003E3C50u; return; } if (c.pc != 0x003DFF40u) [[unlikely]] return; }
L_003DFF40:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 10276u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF68u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003DFF68u) [[unlikely]] return; }
L_003DFF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DFFB0; } }
L_003DFF70:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003DFF74:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 56u);
    c.budget -= 2;
L_003DFF7C:
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFEE4u | kUnwind; return; } goto L_003DFEE4; }
L_003DFFB0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 28u));  goto L_003DFFC0; }
    st32((c.r[17].w[0] + 28u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 2;
L_003DFFC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 29056u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 4;
L_003DFFD0:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFD50u | kUnwind; return; } goto L_003DFD50; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003DFFE4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 7;
    [[clang::musttail]] return unit_00B8(c, 1u, depth);
}

}
