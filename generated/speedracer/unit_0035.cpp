#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0035[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0035(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D4000;
    case 2u: goto L_001D4018;
    case 3u: goto L_001D403C;
    case 4u: goto L_001D4048;
    case 5u: goto L_001D4070;
    case 6u: goto L_001D40AC;
    case 7u: goto L_001D40FC;
    case 8u: goto L_001D4118;
    case 9u: goto L_001D412C;
    case 10u: goto L_001D4138;
    case 11u: goto L_001D414C;
    case 12u: goto L_001D4160;
    case 13u: goto L_001D4184;
    case 14u: goto L_001D41C8;
    case 15u: goto L_001D4250;
    case 16u: goto L_001D4298;
    case 17u: goto L_001D42B4;
    case 18u: goto L_001D42C8;
    case 19u: goto L_001D42D4;
    case 20u: goto L_001D42FC;
    case 21u: goto L_001D4304;
    case 22u: goto L_001D430C;
    case 23u: goto L_001D4358;
    case 24u: goto L_001D4418;
    case 25u: goto L_001D4440;
    case 26u: goto L_001D4454;
    case 27u: goto L_001D4460;
    case 28u: goto L_001D4470;
    case 29u: goto L_001D4480;
    case 30u: goto L_001D449C;
    case 31u: goto L_001D44A8;
    case 32u: goto L_001D44B4;
    case 33u: goto L_001D44F8;
    case 34u: goto L_001D4534;
    case 35u: goto L_001D4554;
    case 36u: goto L_001D458C;
    case 37u: goto L_001D45D0;
    case 38u: goto L_001D4614;
    case 39u: goto L_001D466C;
    case 40u: goto L_001D468C;
    case 41u: goto L_001D46C8;
    case 42u: goto L_001D46F0;
    case 43u: goto L_001D4734;
    case 44u: goto L_001D4784;
    case 45u: goto L_001D47D4;
    case 46u: goto L_001D47F4;
    case 47u: goto L_001D4820;
    case 48u: goto L_001D4864;
    case 49u: goto L_001D48AC;
    case 50u: goto L_001D48F4;
    case 51u: goto L_001D4910;
    case 52u: goto L_001D4924;
    case 53u: goto L_001D4930;
    case 54u: goto L_001D4978;
    case 55u: goto L_001D49A4;
    case 56u: goto L_001D49D0;
    case 57u: goto L_001D4A10;
    case 58u: goto L_001D4A2C;
    case 59u: goto L_001D4A48;
    case 60u: goto L_001D4A70;
    case 61u: goto L_001D4A80;
    case 62u: goto L_001D4A94;
    case 63u: goto L_001D4AB0;
    case 64u: goto L_001D4B10;
    case 65u: goto L_001D4B68;
    case 66u: goto L_001D4BC0;
    case 67u: goto L_001D4BE8;
    case 68u: goto L_001D4BFC;
    case 69u: goto L_001D4C08;
    case 70u: goto L_001D4C18;
    case 71u: goto L_001D4C28;
    case 72u: goto L_001D4C44;
    case 73u: goto L_001D4C50;
    case 74u: goto L_001D4C7C;
    case 75u: goto L_001D4C98;
    case 76u: goto L_001D4CB4;
    case 77u: goto L_001D4CD0;
    case 78u: goto L_001D4CF8;
    case 79u: goto L_001D4D34;
    case 80u: goto L_001D4D80;
    case 81u: goto L_001D4DD0;
    case 82u: goto L_001D4DFC;
    case 83u: goto L_001D4E38;
    case 84u: goto L_001D4E48;
    case 85u: goto L_001D4E9C;
    case 86u: goto L_001D4EB0;
    case 87u: goto L_001D4EBC;
    case 88u: goto L_001D4F04;
    case 89u: goto L_001D4F20;
    case 90u: goto L_001D4F34;
    case 91u: goto L_001D4F40;
    case 92u: goto L_001D4F88;
    case 93u: goto L_001D4FA4;
    case 94u: goto L_001D4FB8;
    case 95u: goto L_001D4FC4;
    case 96u: goto L_001D4FD0;
    case 97u: goto L_001D4FE0;
    case 98u: goto L_001D4FEC;
    case 99u: goto L_001D4FFC;
    case 100u: goto L_001D5018;
    case 101u: goto L_001D5040;
    case 102u: goto L_001D5068;
    case 103u: goto L_001D5078;
    case 104u: goto L_001D508C;
    case 105u: goto L_001D5098;
    case 106u: goto L_001D50CC;
    case 107u: goto L_001D50F8;
    case 108u: goto L_001D5100;
    case 109u: goto L_001D5108;
    case 110u: goto L_001D5150;
    case 111u: goto L_001D51E4;
    case 112u: goto L_001D51EC;
    case 113u: goto L_001D5210;
    case 114u: goto L_001D523C;
    case 115u: goto L_001D5294;
    case 116u: goto L_001D52B0;
    case 117u: goto L_001D52D8;
    case 118u: goto L_001D5300;
    case 119u: goto L_001D5328;
    case 120u: goto L_001D5360;
    case 121u: goto L_001D5388;
    case 122u: goto L_001D53C0;
    case 123u: goto L_001D53E4;
    case 124u: goto L_001D542C;
    case 125u: goto L_001D5470;
    case 126u: goto L_001D54AC;
    case 127u: goto L_001D5500;
    case 128u: goto L_001D5524;
    case 129u: goto L_001D5538;
    case 130u: goto L_001D555C;
    case 131u: goto L_001D55A0;
    case 132u: goto L_001D5628;
    case 133u: goto L_001D5650;
    case 134u: goto L_001D5698;
    case 135u: goto L_001D56A8;
    case 136u: goto L_001D56C4;
    case 137u: goto L_001D56DC;
    case 138u: goto L_001D56EC;
    case 139u: goto L_001D5710;
    case 140u: goto L_001D5768;
    case 141u: goto L_001D57D4;
    case 142u: goto L_001D5818;
    case 143u: goto L_001D583C;
    case 144u: goto L_001D5850;
    case 145u: goto L_001D58A8;
    case 146u: goto L_001D58E4;
    case 147u: goto L_001D5924;
    case 148u: goto L_001D5980;
    case 149u: goto L_001D59A0;
    case 150u: goto L_001D59A8;
    case 151u: goto L_001D59B0;
    case 152u: goto L_001D59D8;
    case 153u: goto L_001D59EC;
    case 154u: goto L_001D5A04;
    case 155u: goto L_001D5A0C;
    case 156u: goto L_001D5A24;
    case 157u: goto L_001D5A54;
    case 158u: goto L_001D5A6C;
    case 159u: goto L_001D5A88;
    case 160u: goto L_001D5A9C;
    case 161u: goto L_001D5AB0;
    case 162u: goto L_001D5AC0;
    case 163u: goto L_001D5AE0;
    case 164u: goto L_001D5B68;
    case 165u: goto L_001D5B7C;
    case 166u: goto L_001D5B94;
    case 167u: goto L_001D5B9C;
    case 168u: goto L_001D5BB4;
    case 169u: goto L_001D5BE4;
    case 170u: goto L_001D5BFC;
    case 171u: goto L_001D5C18;
    case 172u: goto L_001D5C2C;
    case 173u: goto L_001D5C50;
    case 174u: goto L_001D5C74;
    case 175u: goto L_001D5C94;
    case 176u: goto L_001D5CAC;
    case 177u: goto L_001D5CC0;
    case 178u: goto L_001D5CE0;
    case 179u: goto L_001D5D04;
    case 180u: goto L_001D5D20;
    case 181u: goto L_001D5D84;
    case 182u: goto L_001D5DC8;
    case 183u: goto L_001D5E60;
    case 184u: goto L_001D5E8C;
    case 185u: goto L_001D5EA4;
    case 186u: goto L_001D5F14;
    case 187u: goto L_001D5F58;
    case 188u: goto L_001D5FE4;
    case 189u: goto L_001D6010;
    case 190u: goto L_001D6034;
    case 191u: goto L_001D6044;
    case 192u: goto L_001D604C;
    case 193u: goto L_001D6054;
    case 194u: goto L_001D6068;
    case 195u: goto L_001D60A0;
    case 196u: goto L_001D60B0;
    case 197u: goto L_001D60E0;
    case 198u: goto L_001D6130;
    case 199u: goto L_001D616C;
    case 200u: goto L_001D61B8;
    case 201u: goto L_001D61D0;
    case 202u: goto L_001D6200;
    case 203u: goto L_001D6220;
    case 204u: goto L_001D6260;
    case 205u: goto L_001D628C;
    case 206u: goto L_001D6304;
    case 207u: goto L_001D6330;
    case 208u: goto L_001D6368;
    case 209u: goto L_001D6378;
    case 210u: goto L_001D63A0;
    case 211u: goto L_001D63B0;
    case 212u: goto L_001D6408;
    case 213u: goto L_001D6430;
    case 214u: goto L_001D6450;
    case 215u: goto L_001D64C8;
    case 216u: goto L_001D6504;
    case 217u: goto L_001D6574;
    case 218u: goto L_001D6590;
    case 219u: goto L_001D65BC;
    case 220u: goto L_001D65F0;
    case 221u: goto L_001D6620;
    case 222u: goto L_001D6630;
    case 223u: goto L_001D6650;
    case 224u: goto L_001D66BC;
    case 225u: goto L_001D6768;
    case 226u: goto L_001D67A4;
    case 227u: goto L_001D6844;
    case 228u: goto L_001D6934;
    case 229u: goto L_001D693C;
    case 230u: goto L_001D6980;
    case 231u: goto L_001D69B4;
    case 232u: goto L_001D69F0;
    case 233u: goto L_001D6A58;
    case 234u: goto L_001D6A94;
    case 235u: goto L_001D6AE0;
    case 236u: goto L_001D6B60;
    case 237u: goto L_001D6CDC;
    case 238u: goto L_001D6D94;
    case 239u: goto L_001D6DBC;
    case 240u: goto L_001D6E04;
    case 241u: goto L_001D6E48;
    case 242u: goto L_001D6E50;
    case 243u: goto L_001D6E64;
    case 244u: goto L_001D6E70;
    case 245u: goto L_001D6EA0;
    case 246u: goto L_001D6EE4;
    case 247u: goto L_001D6EFC;
    case 248u: goto L_001D6F10;
    case 249u: goto L_001D6F30;
    case 250u: goto L_001D6F64;
    case 251u: goto L_001D6F78;
    case 252u: goto L_001D6FBC;
    case 253u: goto L_001D6FC8;
    case 254u: goto L_001D6FF8;
    case 255u: goto L_001D7020;
    case 256u: goto L_001D707C;
    case 257u: goto L_001D70D8;
    case 258u: goto L_001D70E4;
    case 259u: goto L_001D7114;
    case 260u: goto L_001D712C;
    case 261u: goto L_001D7194;
    case 262u: goto L_001D71D0;
    case 263u: goto L_001D7240;
    case 264u: goto L_001D7284;
    case 265u: goto L_001D7298;
    case 266u: goto L_001D72C0;
    case 267u: goto L_001D7308;
    case 268u: goto L_001D7340;
    case 269u: goto L_001D7380;
    case 270u: goto L_001D73B8;
    case 271u: goto L_001D73C4;
    case 272u: goto L_001D7440;
    case 273u: goto L_001D747C;
    case 274u: goto L_001D74AC;
    case 275u: goto L_001D74F8;
    case 276u: goto L_001D7528;
    case 277u: goto L_001D75A8;
    case 278u: goto L_001D75EC;
    case 279u: goto L_001D7610;
    case 280u: goto L_001D7634;
    case 281u: goto L_001D76B0;
    case 282u: goto L_001D76CC;
    case 283u: goto L_001D76D8;
    case 284u: goto L_001D7744;
    case 285u: goto L_001D77C0;
    case 286u: goto L_001D7868;
    case 287u: goto L_001D788C;
    case 288u: goto L_001D78D0;
    case 289u: goto L_001D7914;
    case 290u: goto L_001D792C;
    case 291u: goto L_001D7950;
    case 292u: goto L_001D7970;
    case 293u: goto L_001D79B0;
    case 294u: goto L_001D79D0;
    case 295u: goto L_001D79EC;
    case 296u: goto L_001D79FC;
    case 297u: goto L_001D7A50;
    case 298u: goto L_001D7A60;
    case 299u: goto L_001D7AC0;
    case 300u: goto L_001D7ACC;
    case 301u: goto L_001D7AE0;
    case 302u: goto L_001D7B08;
    case 303u: goto L_001D7B48;
    case 304u: goto L_001D7B6C;
    case 305u: goto L_001D7B94;
    case 306u: goto L_001D7BC8;
    case 307u: goto L_001D7BEC;
    case 308u: goto L_001D7C3C;
    case 309u: goto L_001D7C88;
    case 310u: goto L_001D7CC0;
    case 311u: goto L_001D7CE4;
    case 312u: goto L_001D7D28;
    case 313u: goto L_001D7D4C;
    case 314u: goto L_001D7D78;
    case 315u: goto L_001D7DAC;
    case 316u: goto L_001D7DD0;
    case 317u: goto L_001D7DFC;
    case 318u: goto L_001D7E30;
    case 319u: goto L_001D7E54;
    case 320u: goto L_001D7E80;
    case 321u: goto L_001D7EB4;
    case 322u: goto L_001D7ED8;
    case 323u: goto L_001D7F04;
    case 324u: goto L_001D7F38;
    case 325u: goto L_001D7F5C;
    case 326u: goto L_001D7F88;
    case 327u: goto L_001D7FBC;
    case 328u: goto L_001D7FE0;
    default: bad_entry(c, 0x001D4000u); return;
    }
L_001D4000:
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4018u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 80u, depth + 1u); else { c.pc = 0x001C5FE0u; return; } if (c.pc != 0x001D4018u) [[unlikely]] return; }
L_001D4018:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 12u);
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D403Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 85u, depth + 1u); else { c.pc = 0x001C6110u; return; } if (c.pc != 0x001D403Cu) [[unlikely]] return; }
L_001D403C:
    set32(c.r[3], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 3;
L_001D4048:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D4070:
    set32(c.r[29], c.r[29].w[0] - 1632u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D40ACu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 122u, depth + 1u); else { c.pc = 0x001D53C0u; return; } if (c.pc != 0x001D40ACu) [[unlikely]] return; }
L_001D40AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u + 40u);
    st32((c.r[3].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4104; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D40F4; }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4100; } }
L_001D40F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D40FCu); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D40FCu) [[unlikely]] return; }
L_001D40FC:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4100:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D4138; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4118u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4118u) [[unlikely]] return; }
L_001D4118:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D412Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D412Cu) [[unlikely]] return; }
L_001D412C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4138u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4138u) [[unlikely]] return; }
L_001D4138:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D4248; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D414Cu); set32(c.r[4], c.r[4].w[0] - 25566u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001D414Cu) [[unlikely]] return; }
L_001D414C:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25566u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4160u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D4160u) [[unlikely]] return; }
L_001D4160:
    set32(c.r[18], ld32((c.r[21].w[0] + 28u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], c.r[7].w[0] - 25793u);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4184u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D4184u) [[unlikely]] return; }
L_001D4184:
    set32(c.r[17], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  goto L_001D41D0; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[9], c.r[9].w[0] - 25777u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D41C8u); c.r[8].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 316u, depth + 1u); else { c.pc = 0x001CFC40u; return; } if (c.pc != 0x001D41C8u) [[unlikely]] return; }
L_001D41C8:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 2;
L_001D41D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 696u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 696u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 30;
L_001D4248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4250u);  if (depth < kMaxDepth) unit_0035(c, 37u, depth + 1u); else { c.pc = 0x001D45D0u; return; } if (c.pc != 0x001D4250u) [[unlikely]] return; }
L_001D4250:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D42A0; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D4290; }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D429C; } }
L_001D4290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4298u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4298u) [[unlikely]] return; }
L_001D4298:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D429C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D42A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 48u)));  goto L_001D42D8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42B4u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D42B4u) [[unlikely]] return; }
L_001D42B4:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D42C8u) [[unlikely]] return; }
L_001D42C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42D4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D42D4u) [[unlikely]] return; }
L_001D42D4:
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 1;
L_001D42D8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[21].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_001D4368; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D42FCu); set32(c.r[5], c.r[5].w[0] - 25904u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D42FCu) [[unlikely]] return; }
L_001D42FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4368; } }
L_001D4304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D430Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D04F0u; return; } if (c.pc != 0x001D430Cu) [[unlikely]] return; }
L_001D430C:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 59u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 28u)));  goto L_001D4360; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D4350; }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D435C; } }
L_001D4350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4358u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4358u) [[unlikely]] return; }
L_001D4358:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D435C:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 1;
L_001D4360:
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_001D4368:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 48u)));  goto L_001D43C8; }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], 0u + 287u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001D43BC; }
    set32(c.r[2], 0u + 276u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D43B8; } }
    set32(c.r[2], 0u + 262u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D43B8; } }
    set32(c.r[2], 0u + 261u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D43B8; } }
    set32(c.r[2], 0u + 260u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D43B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D43BC; } }
L_001D43B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D43BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4304u | kUnwind; return; } goto L_001D4304; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 1;
L_001D43C8:
    set32(c.r[2], 0u + 262u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4420; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D4410; }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D441C; } }
L_001D4410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4418u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4418u) [[unlikely]] return; }
L_001D4418:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D441C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4420:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D44AC; }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D4468; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4440u); set32(c.r[5], 0u + 262u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4440u) [[unlikely]] return; }
L_001D4440:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4454u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D4454u) [[unlikely]] return; }
L_001D4454:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4460u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4460u) [[unlikely]] return; }
L_001D4460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D44A8; } }
L_001D4468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4470u); set32(c.r[5], 0u + 262u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4470u) [[unlikely]] return; }
L_001D4470:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4480u); set32(c.r[5], 0u + 265u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4480u) [[unlikely]] return; }
L_001D4480:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25867u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D449Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D449Cu) [[unlikely]] return; }
L_001D449C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44A8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D44A8u) [[unlikely]] return; }
L_001D44A8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001D44AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44B4u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001D5210u; return; } if (c.pc != 0x001D44B4u) [[unlikely]] return; }
L_001D44B4:
    set32(c.r[17], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_001D4500; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[16].w[0] + 52u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[9], c.r[9].w[0] - 25561u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D44F8u); c.r[8].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0033(c, 316u, depth + 1u); else { c.pc = 0x001CFC40u; return; } if (c.pc != 0x001D44F8u) [[unlikely]] return; }
L_001D44F8:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 2;
L_001D4500:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 34u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4534u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0031(c, 79u, depth + 1u); else { c.pc = 0x001C5FC0u; return; } if (c.pc != 0x001D4534u) [[unlikely]] return; }
L_001D4534:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[20].w[0] + 12u), c.r[4].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001D4590; } }
L_001D4554:
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 128u);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 4u);  goto L_001D4578; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D4578:
    set32(c.r[7], ld32((c.r[4].w[0] + 60u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D458Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 80u, depth + 1u); else { c.pc = 0x001C5FE0u; return; } if (c.pc != 0x001D458Cu) [[unlikely]] return; }
L_001D458C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D4590:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4554u | kUnwind; return; } goto L_001D4554; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1632u);  c.pc = t; return; }
L_001D45D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 41u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001D47E4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_001D4614:
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[22].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4674; }
    set32(c.r[2], 0u + 280u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_001D4634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001D4778; } }
L_001D4634:
    set32(c.r[2], 0u + 287u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[19], 0u + 1u);  if (t) { goto L_001D4660; } }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4784; } }
L_001D4660:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D466Cu); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D466Cu) [[unlikely]] return; }
L_001D466C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001D4784; } }
L_001D4674:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_001D468C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D468Cu); set32(c.r[5], c.r[5].w[0] - 25809u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D468Cu) [[unlikely]] return; }
L_001D468C:
    set32(c.r[23], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], 0u + 287u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D46C0; }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D46CC; } }
L_001D46C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46C8u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D46C8u) [[unlikely]] return; }
L_001D46C8:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D46CC:
    set32(c.r[18], ld32((c.r[21].w[0] + 28u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], c.r[7].w[0] - 25793u);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D46F0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D46F0u) [[unlikely]] return; }
L_001D46F0:
    set32(c.r[17], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  goto L_001D473C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], c.r[16].w[0] + 56u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[9], c.r[9].w[0] - 25777u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4734u); c.r[8].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 316u, depth + 1u); else { c.pc = 0x001CFC40u; return; } if (c.pc != 0x001D4734u) [[unlikely]] return; }
L_001D4734:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 2;
L_001D473C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001D4784; } }
L_001D4778:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4784u); set32(c.r[5], c.r[5].w[0] - 25537u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4784u) [[unlikely]] return; }
L_001D4784:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D47E8; }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], 0u + 44u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D47DC; }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001D47CC; }
    c.f[1] = ld32((c.r[21].w[0] + 20u));
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D47D8; } }
L_001D47CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47D4u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D47D4u) [[unlikely]] return; }
L_001D47D4:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D47D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D47DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4614u | kUnwind; return; } goto L_001D4614; }
L_001D47E4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001D47E8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D47F4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 125u, depth + 1u); else { c.pc = 0x001D5470u; return; } if (c.pc != 0x001D47F4u) [[unlikely]] return; }
L_001D47F4:
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
L_001D4820:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4864u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 80u, depth + 1u); else { c.pc = 0x001C5FE0u; return; } if (c.pc != 0x001D4864u) [[unlikely]] return; }
L_001D4864:
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 116u), c.r[19].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C7FD0u; return; } if (c.pc != 0x001D48ACu) [[unlikely]] return; }
L_001D48AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], 0u + 123u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D48FC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D48EC; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D48F8; } }
L_001D48EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D48F4u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D48F4u) [[unlikely]] return; }
L_001D48F4:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D48F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D48FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  goto L_001D4934; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4910u); set32(c.r[5], 0u + 123u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4910u) [[unlikely]] return; }
L_001D4910:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4924u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D4924u) [[unlikely]] return; }
L_001D4924:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4930u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4930u) [[unlikely]] return; }
L_001D4930:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D4934:
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  goto L_001D4980; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4970; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D497C; } }
L_001D4970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4978u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4978u) [[unlikely]] return; }
L_001D4978:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D497C:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D4980:
    set32(c.r[2], 0u + 125u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  goto L_001D4B7C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  goto L_001D49E8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49A4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C7FD0u; return; } if (c.pc != 0x001D49A4u) [[unlikely]] return; }
L_001D49A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 96u), 0u);  if (t) { goto L_001D49E4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D49D0u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0031(c, 79u, depth + 1u); else { c.pc = 0x001C5FC0u; return; } if (c.pc != 0x001D49D0u) [[unlikely]] return; }
L_001D49D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
L_001D49E4:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D49E8:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4A78; }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4A08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D4A88; } }
L_001D4A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A10u); set32(c.r[5], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4A10u) [[unlikely]] return; }
L_001D4A10:
    set32(c.r[3], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4A64; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A2Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D3230u; return; } if (c.pc != 0x001D4A2Cu) [[unlikely]] return; }
L_001D4A2C:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 25512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A48u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D4A48u) [[unlikely]] return; }
L_001D4A48:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_001D4AC8; } }
L_001D4A64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A70u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 80u, depth + 1u); else { c.pc = 0x001D4D80u; return; } if (c.pc != 0x001D4A70u) [[unlikely]] return; }
L_001D4A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_001D4ACC; } }
L_001D4A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 80u, depth + 1u); else { c.pc = 0x001D4D80u; return; } if (c.pc != 0x001D4A80u) [[unlikely]] return; }
L_001D4A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4AC8; } }
L_001D4A88:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4A94u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D3230u; return; } if (c.pc != 0x001D4A94u) [[unlikely]] return; }
L_001D4A94:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 25512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4AB0u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D4AB0u) [[unlikely]] return; }
L_001D4AB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 6;
L_001D4AC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D4ACC:
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4B18; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4B08; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4B14; } }
L_001D4B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B10u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4B10u) [[unlikely]] return; }
L_001D4B10:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4B14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4930u | kUnwind; return; } goto L_001D4930; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], 0u + 59u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4B70; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4B60; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4B6C; } }
L_001D4B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4B68u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4B68u) [[unlikely]] return; }
L_001D4B68:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4B6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D4930u | kUnwind; return; } goto L_001D4930; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D4B7C:
    set32(c.r[2], 0u + 125u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4BC8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4BB8; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4BC4; } }
L_001D4BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BC0u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4BC0u) [[unlikely]] return; }
L_001D4BC0:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4BC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4BC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_001D4C54; }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4C10; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BE8u); set32(c.r[5], 0u + 125u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4BE8u) [[unlikely]] return; }
L_001D4BE8:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4BFCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D4BFCu) [[unlikely]] return; }
L_001D4BFC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C08u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4C08u) [[unlikely]] return; }
L_001D4C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D4C50; } }
L_001D4C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C18u); set32(c.r[5], 0u + 125u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4C18u) [[unlikely]] return; }
L_001D4C18:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C28u); set32(c.r[5], 0u + 123u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4C28u) [[unlikely]] return; }
L_001D4C28:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25867u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C44u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D4C44u) [[unlikely]] return; }
L_001D4C44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4C50u) [[unlikely]] return; }
L_001D4C50:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_001D4C54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_001D4CE4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D4CA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C7Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0032(c, 29u, depth + 1u); else { c.pc = 0x001C87E0u; return; } if (c.pc != 0x001D4C7Cu) [[unlikely]] return; }
L_001D4C7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4C98u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0031(c, 79u, depth + 1u); else { c.pc = 0x001C5FC0u; return; } if (c.pc != 0x001D4C98u) [[unlikely]] return; }
L_001D4C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_001D4CD4; } }
L_001D4CA0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 116u)));  goto L_001D4CB8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CB4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C7FD0u; return; } if (c.pc != 0x001D4CB4u) [[unlikely]] return; }
L_001D4CB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_001D4CB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CD0u); set32(c.r[7], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0031(c, 79u, depth + 1u); else { c.pc = 0x001C5FC0u; return; } if (c.pc != 0x001D4CD0u) [[unlikely]] return; }
L_001D4CD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_001D4CD4:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_001D4CE4:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4CF8u); set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0034(c, 25u, depth + 1u); else { c.pc = 0x001D04C0u; return; } if (c.pc != 0x001D4CF8u) [[unlikely]] return; }
L_001D4CF8:
    set32(c.r[4], c.r[2].w[0] << 15);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4D34u); set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0410u; return; } if (c.pc != 0x001D4D34u) [[unlikely]] return; }
L_001D4D34:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 32705u);
    c.r[5].d[0] = c.r[5].d[0] & 32704ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D4D80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 278u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D4E64; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] | 65533ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DD0u); set32(c.r[7], c.r[7].w[0] - 25512u);  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D4DD0u) [[unlikely]] return; }
L_001D4DD0:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u + 278u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[20].w[0] + 16u)));  goto L_001D4E00; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4DFCu); set32(c.r[5], c.r[5].w[0] - 25809u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4DFCu) [[unlikely]] return; }
L_001D4DFC:
    set32(c.r[18], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_001D4E00:
    set32(c.r[2], 0u + 287u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4E30; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4E3C; } }
L_001D4E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E38u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4E38u) [[unlikely]] return; }
L_001D4E38:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4E3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E48u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 32u, depth + 1u); else { c.pc = 0x001C8890u; return; } if (c.pc != 0x001D4E48u) [[unlikely]] return; }
L_001D4E48:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_001D4F40; } }
L_001D4E64:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[20].w[0] + 16u);  goto L_001D4E94; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4EA0; } }
L_001D4E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4E9Cu);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4E9Cu) [[unlikely]] return; }
L_001D4E9C:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4EA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EB0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D3230u; return; } if (c.pc != 0x001D4EB0u) [[unlikely]] return; }
L_001D4EB0:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4EBCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0031(c, 198u, depth + 1u); else { c.pc = 0x001C7D50u; return; } if (c.pc != 0x001D4EBCu) [[unlikely]] return; }
L_001D4EBC:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], 0u + 93u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4F0C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4EFC; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4F08; } }
L_001D4EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F04u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4F04u) [[unlikely]] return; }
L_001D4F04:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4F08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4F0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  goto L_001D4F44; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F20u); set32(c.r[5], 0u + 93u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4F20u) [[unlikely]] return; }
L_001D4F20:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F34u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D4F34u) [[unlikely]] return; }
L_001D4F34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4F40u) [[unlikely]] return; }
L_001D4F40:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D4F44:
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D4F90; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 287u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001D4F80; }
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001D4F8C; } }
L_001D4F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4F88u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D4F88u) [[unlikely]] return; }
L_001D4F88:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001D4F8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D4F90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D4FC8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FA4u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_0033(c, 294u, depth + 1u); else { c.pc = 0x001CF860u; return; } if (c.pc != 0x001D4FA4u) [[unlikely]] return; }
L_001D4FA4:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FB8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001D4FB8u) [[unlikely]] return; }
L_001D4FB8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FC4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D4FC4u) [[unlikely]] return; }
L_001D4FC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D4FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FD0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0031(c, 185u, depth + 1u); else { c.pc = 0x001C7A80u; return; } if (c.pc != 0x001D4FD0u) [[unlikely]] return; }
L_001D4FD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FE0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 325u, depth + 1u); else { c.pc = 0x001D3230u; return; } if (c.pc != 0x001D4FE0u) [[unlikely]] return; }
L_001D4FE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FECu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0031(c, 185u, depth + 1u); else { c.pc = 0x001C7A80u; return; } if (c.pc != 0x001D4FECu) [[unlikely]] return; }
L_001D4FEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D4FFCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0031(c, 185u, depth + 1u); else { c.pc = 0x001C7A80u; return; } if (c.pc != 0x001D4FFCu) [[unlikely]] return; }
L_001D4FFC:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5018u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 80u, depth + 1u); else { c.pc = 0x001C5FE0u; return; } if (c.pc != 0x001D5018u) [[unlikely]] return; }
L_001D5018:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001D5040:
    set32(c.r[29], c.r[29].w[0] - 1616u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 1592u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 1600u), 0u);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5068u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001D5068u) [[unlikely]] return; }
L_001D5068:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5078u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D5078u) [[unlikely]] return; }
L_001D5078:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D508Cu); set32(c.r[5], c.r[29].w[0] + 1552u);  if (depth < kMaxDepth) unit_0033(c, 290u, depth + 1u); else { c.pc = 0x001CF780u; return; } if (c.pc != 0x001D508Cu) [[unlikely]] return; }
L_001D508C:
    set32(c.r[4], c.r[29].w[0] + 1552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5098u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0035(c, 122u, depth + 1u); else { c.pc = 0x001D53C0u; return; } if (c.pc != 0x001D5098u) [[unlikely]] return; }
L_001D5098:
    set32(c.r[4], ld32((c.r[29].w[0] + 1556u)));
    set32(c.r[2], 0u + 287u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1572u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 1560u), c.r[4].w[0]);  if (t) { goto L_001D50C0; } }
    st32((c.r[29].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1576u)));
    st32((c.r[29].w[0] + 1564u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1568u), c.r[2].w[0]);  if (t) { goto L_001D50D0; } }
L_001D50C0:
    set32(c.r[4], c.r[29].w[0] + 1552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50CCu); set32(c.r[5], c.r[29].w[0] + 1568u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D50CCu) [[unlikely]] return; }
L_001D50CC:
    st32((c.r[29].w[0] + 1564u), c.r[2].w[0]);
    c.budget -= 1;
L_001D50D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1600u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 1600u), c.r[2].w[0]);  if (t) { goto L_001D5160; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D50F8u); set32(c.r[5], c.r[5].w[0] - 25904u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D50F8u) [[unlikely]] return; }
L_001D50F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D5160; } }
L_001D5100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5108u); set32(c.r[4], c.r[29].w[0] + 1552u);  if (depth < kMaxDepth) unit_0034(c, 27u, depth + 1u); else { c.pc = 0x001D04F0u; return; } if (c.pc != 0x001D5108u) [[unlikely]] return; }
L_001D5108:
    set32(c.r[3], ld32((c.r[29].w[0] + 1564u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 59u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 1580u)));  goto L_001D5158; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1556u)));
    set32(c.r[2], 0u + 287u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1572u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 1560u), c.r[4].w[0]);  if (t) { goto L_001D5144; } }
    st32((c.r[29].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1576u)));
    st32((c.r[29].w[0] + 1564u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1568u), c.r[2].w[0]);  if (t) { goto L_001D5154; } }
L_001D5144:
    set32(c.r[4], c.r[29].w[0] + 1552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5150u); set32(c.r[5], c.r[29].w[0] + 1568u);  if (depth < kMaxDepth) unit_0033(c, 164u, depth + 1u); else { c.pc = 0x001CDAF0u; return; } if (c.pc != 0x001D5150u) [[unlikely]] return; }
L_001D5150:
    st32((c.r[29].w[0] + 1564u), c.r[2].w[0]);
    c.budget -= 1;
L_001D5154:
    set32(c.r[3], ld32((c.r[29].w[0] + 1580u)));
    c.budget -= 1;
L_001D5158:
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_001D5160:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 1600u)));  goto L_001D51C0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 1564u)));
    set32(c.r[2], 0u + 287u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001D51B4; }
    set32(c.r[2], 0u + 276u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D51B0; } }
    set32(c.r[2], 0u + 262u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D51B0; } }
    set32(c.r[2], 0u + 261u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D51B0; } }
    set32(c.r[2], 0u + 260u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D51B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D51B4; } }
L_001D51B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D51B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5100u | kUnwind; return; } goto L_001D5100; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 1600u)));
    c.budget -= 1;
L_001D51C0:
    set32(c.r[2], 0u + 287u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1564u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 1600u), c.r[4].w[0]);  if (t) { goto L_001D51E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 1552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51E4u); set32(c.r[5], c.r[5].w[0] - 25489u);  if (depth < kMaxDepth) unit_0033(c, 296u, depth + 1u); else { c.pc = 0x001CF8B0u; return; } if (c.pc != 0x001D51E4u) [[unlikely]] return; }
L_001D51E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D51ECu); set32(c.r[4], c.r[29].w[0] + 1552u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001D5210u; return; } if (c.pc != 0x001D51ECu) [[unlikely]] return; }
L_001D51EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1616u);  c.pc = t; return; }
L_001D5210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D5270; } }
L_001D523C:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 696u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 13;
L_001D5270:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D523Cu | kUnwind; return; } goto L_001D523C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 27u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5294u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 80u, depth + 1u); else { c.pc = 0x001C5FE0u; return; } if (c.pc != 0x001D5294u) [[unlikely]] return; }
L_001D5294:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[6].d[0] = c.r[3].d[0] << 2;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52B0u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D52B0u) [[unlikely]] return; }
L_001D52B0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = c.r[3].d[0] << 2;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D52D8u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D52D8u) [[unlikely]] return; }
L_001D52D8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[3].d[0] << 3;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5300u); c.r[7].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5300u) [[unlikely]] return; }
L_001D5300:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].d[0] = c.r[3].d[0] << 2;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5328u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5328u) [[unlikely]] return; }
L_001D5328:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[6].d[0] = c.r[6].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5360u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5360u) [[unlikely]] return; }
L_001D5360:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = c.r[3].d[0] << 2;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5388u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5388u) [[unlikely]] return; }
L_001D5388:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[19].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D53C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D53E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 49u, depth + 1u); else { c.pc = 0x001CC6C0u; return; } if (c.pc != 0x001D53E4u) [[unlikely]] return; }
L_001D53E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D542Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 249u, depth + 1u); else { c.pc = 0x001D6F30u; return; } if (c.pc != 0x001D542Cu) [[unlikely]] return; }
L_001D542C:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D5470:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_001D54E0; } }
L_001D54AC:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 696u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 13;
L_001D54E0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D54ACu | kUnwind; return; } goto L_001D54AC; }
    set32(c.r[5], ld32((c.r[21].w[0] + 52u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5500u); set32(c.r[7], c.r[7].w[0] - 25474u);  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D5500u) [[unlikely]] return; }
L_001D5500:
    set32(c.r[3], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[2].w[0] + 70u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_001D561C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5524u); set32(c.r[4], c.r[4].w[0] - 25463u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001D5524u) [[unlikely]] return; }
L_001D5524:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 25463u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5538u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D5538u) [[unlikely]] return; }
L_001D5538:
    set32(c.r[19], ld32((c.r[16].w[0] + 28u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], c.r[7].w[0] - 25793u);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D555Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D555Cu) [[unlikely]] return; }
L_001D555C:
    set32(c.r[18], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  goto L_001D55A8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], c.r[17].w[0] + 56u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[9], c.r[9].w[0] - 25777u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D55A0u); c.r[8].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 316u, depth + 1u); else { c.pc = 0x001CFC40u; return; } if (c.pc != 0x001D55A0u) [[unlikely]] return; }
L_001D55A0:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 2;
L_001D55A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 696u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 696u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 29;
L_001D561C:
    set32(c.r[5], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5628u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 38u, depth + 1u); else { c.pc = 0x001C89C0u; return; } if (c.pc != 0x001D5628u) [[unlikely]] return; }
L_001D5628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D5650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 12u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001D56B0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    if (c.r[17].sd[0] > 0) { set32(c.r[5], c.r[17].w[0] - 1u);  goto L_001D5690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001D5698; } }
L_001D5690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5698u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 38u, depth + 1u); else { c.pc = 0x001C89C0u; return; } if (c.pc != 0x001D5698u) [[unlikely]] return; }
L_001D5698:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D56A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 29u, depth + 1u); else { c.pc = 0x001C87E0u; return; } if (c.pc != 0x001D56A8u) [[unlikely]] return; }
L_001D56A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001D56F0; } }
L_001D56B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D56C4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D56C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C7FD0u; return; } if (c.pc != 0x001D56C4u) [[unlikely]] return; }
L_001D56C4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_001D56EC; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D56DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 38u, depth + 1u); else { c.pc = 0x001C89C0u; return; } if (c.pc != 0x001D56DCu) [[unlikely]] return; }
L_001D56DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D56ECu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 67u, depth + 1u); else { c.pc = 0x001C9260u; return; } if (c.pc != 0x001D56ECu) [[unlikely]] return; }
L_001D56EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D56F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D5710:
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
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001D575C; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001D5958; } }
L_001D575C:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] - 1u);  if (t) { goto L_001D579C; } }
L_001D5768:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_001D579C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D57A8; } }
L_001D579C:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[4], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5768u | kUnwind; return; } goto L_001D5768; }
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_001D57A8:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_001D5808; }
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_001D5958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001D57D4; } }
L_001D57D4:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D57F4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D57D4u | kUnwind; return; } goto L_001D57D4; }
L_001D57F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001D595C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001D5958; } }
L_001D5808:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5818u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 139u, depth + 1u); else { c.pc = 0x001D5710u; return; } if (c.pc != 0x001D5818u) [[unlikely]] return; }
L_001D5818:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[19].w[0])));  goto L_001D5844; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D5958; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D583Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 32u, depth + 1u); else { c.pc = 0x001C8890u; return; } if (c.pc != 0x001D583Cu) [[unlikely]] return; }
L_001D583C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001D5958; } }
L_001D5844:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001D5884; } }
L_001D5850:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001D5884; }
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D5880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[7].w[0]);  if (t) { goto L_001D5950; } }
L_001D5880:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001D5884:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5850u | kUnwind; return; } goto L_001D5850; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58A8u); set32(c.r[7], c.r[7].w[0] - 25459u);  if (depth < kMaxDepth) unit_0033(c, 301u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001D58A8u) [[unlikely]] return; }
L_001D58A8:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 36u);  if (t) { goto L_001D58EC; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], 0u + 4u);
    c.r[8].d[0] = c.r[2].d[0] | 65533ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D58E4u); set32(c.r[9], c.r[9].w[0] - 25777u);  if (depth < kMaxDepth) unit_0033(c, 316u, depth + 1u); else { c.pc = 0x001CFC40u; return; } if (c.pc != 0x001D58E4u) [[unlikely]] return; }
L_001D58E4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001D58EC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[3].w[0] + 56u);
    c.budget -= 14;
L_001D5924:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D5924u | kUnwind; return; } goto L_001D5924; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 4;
L_001D5950:
    set32(c.r[3], 0u + 6u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001D5958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D595C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D5980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D59A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001D59A0u) [[unlikely]] return; }
L_001D59A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D59A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 159u, depth + 1u); else { c.pc = 0x001CD920u; return; } if (c.pc != 0x001D59A8u) [[unlikely]] return; }
L_001D59A8:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 2;
L_001D59B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23216u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D59D8u); st16((c.r[16].w[0] + 46u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CBBB0u; return; } if (c.pc != 0x001D59D8u) [[unlikely]] return; }
L_001D59D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D59B0u | kUnwind; return; } goto L_001D59B0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D59ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001D59ECu) [[unlikely]] return; }
L_001D59EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));  goto L_001D5A38; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 91u, depth + 1u); else { c.pc = 0x001CCDE0u; return; } if (c.pc != 0x001D5A04u) [[unlikely]] return; }
L_001D5A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 213u, depth + 1u); else { c.pc = 0x001D6430u; return; } if (c.pc != 0x001D5A0Cu) [[unlikely]] return; }
L_001D5A0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5A24u) [[unlikely]] return; }
L_001D5A24:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    c.budget -= 5;
L_001D5A38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A54u); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5A54u) [[unlikely]] return; }
L_001D5A54:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A6Cu); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5A6Cu) [[unlikely]] return; }
L_001D5A6C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] - 8u);  goto L_001D5A8C; }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5A88u) [[unlikely]] return; }
L_001D5A88:
    set32(c.r[5], c.r[16].w[0] - 8u);
    c.budget -= 1;
L_001D5A8C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5A9Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5A9Cu) [[unlikely]] return; }
L_001D5A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5AB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCF30u | kUnwind; return; } [[clang::musttail]] return unit_0033(c, 99u, depth); }
L_001D5AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5AE0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5AE0u) [[unlikely]] return; }
L_001D5AE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[2].w[0] + 8u);  goto L_001D5AEC; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D5AEC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001D5C34; }
    set32(c.r[3], 0u + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[5], c.r[5].w[0] + 24160u);
    st32((c.r[16].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 52u), 0u);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B68u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CBBB0u; return; } if (c.pc != 0x001D5B68u) [[unlikely]] return; }
L_001D5B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D5C30; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001D5B7Cu) [[unlikely]] return; }
L_001D5B7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));  goto L_001D5BC8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B94u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 91u, depth + 1u); else { c.pc = 0x001CCDE0u; return; } if (c.pc != 0x001D5B94u) [[unlikely]] return; }
L_001D5B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5B9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 213u, depth + 1u); else { c.pc = 0x001D6430u; return; } if (c.pc != 0x001D5B9Cu) [[unlikely]] return; }
L_001D5B9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5BB4u) [[unlikely]] return; }
L_001D5BB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    c.budget -= 5;
L_001D5BC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BE4u); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5BE4u) [[unlikely]] return; }
L_001D5BE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5BFCu); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5BFCu) [[unlikely]] return; }
L_001D5BFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] - 8u);  goto L_001D5C1C; }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5C18u) [[unlikely]] return; }
L_001D5C18:
    set32(c.r[5], c.r[16].w[0] - 8u);
    c.budget -= 1;
L_001D5C1C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5C2Cu) [[unlikely]] return; }
L_001D5C2C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D5C30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D5C34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D5C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001D5C74u) [[unlikely]] return; }
L_001D5C74:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5C94u); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5C94u) [[unlikely]] return; }
L_001D5C94:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CACu); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5CACu) [[unlikely]] return; }
L_001D5CAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 8u);
    set32(c.r[6], 0u + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5CC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5CC0u) [[unlikely]] return; }
L_001D5CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 96u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5D04u) [[unlikely]] return; }
L_001D5D04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[2].w[0] + 8u);  goto L_001D5D10; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D5D10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D20u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CC980u; return; } if (c.pc != 0x001D5D20u) [[unlikely]] return; }
L_001D5D20:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 360u);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 52u), 0u);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5D84u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5D84u) [[unlikely]] return; }
L_001D5D84:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 45u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[7], 0u + 192u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 5u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5DC8u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5DC8u) [[unlikely]] return; }
L_001D5DC8:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 8u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 160u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D5E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 168u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5E8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5E8Cu) [[unlikely]] return; }
L_001D5E8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_001D5EA8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5EA4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001D5EA4u) [[unlikely]] return; }
L_001D5EA4:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_001D5EA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    st32((c.r[16].w[0] + 84u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24736u);
    st64((c.r[16].w[0] + 48u), 0ull);
    set32(c.r[2], 0u + 256u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[16].w[0] + 8u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], 0u + 360u);
    st32((c.r[8].w[0] + 76u), 0u);
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[8].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F14u); st64((c.r[16].w[0] + 56u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5F14u) [[unlikely]] return; }
L_001D5F14:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 45u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[7], 0u + 192u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 5u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5F58u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D5F58u) [[unlikely]] return; }
L_001D5F58:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[7], 0u + 8u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] + 8u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[8].w[0]), 0u);
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[8], c.r[8].w[0] + 160u);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D5FE4u); set32(c.r[18], c.r[2].w[0] + 76u);  if (depth < kMaxDepth) unit_0035(c, 249u, depth + 1u); else { c.pc = 0x001D6F30u; return; } if (c.pc != 0x001D5FE4u) [[unlikely]] return; }
L_001D5FE4:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[18], c.r[17].w[0] + 64u);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    st32((c.r[3].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6010u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 249u, depth + 1u); else { c.pc = 0x001D6F30u; return; } if (c.pc != 0x001D6010u) [[unlikely]] return; }
L_001D6010:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6034u); set32(c.r[18], c.r[3].w[0] + 68u);  if (depth < kMaxDepth) unit_0035(c, 249u, depth + 1u); else { c.pc = 0x001D6F30u; return; } if (c.pc != 0x001D6034u) [[unlikely]] return; }
L_001D6034:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6044u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0035(c, 207u, depth + 1u); else { c.pc = 0x001D6330u; return; } if (c.pc != 0x001D6044u) [[unlikely]] return; }
L_001D6044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D604Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 293u, depth + 1u); else { c.pc = 0x001D79B0u; return; } if (c.pc != 0x001D604Cu) [[unlikely]] return; }
L_001D604C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 307u, depth + 1u); else { c.pc = 0x001CFAE0u; return; } if (c.pc != 0x001D6054u) [[unlikely]] return; }
L_001D6054:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6068u); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D6068u) [[unlikely]] return; }
L_001D6068:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 2;
    st64((c.r[16].w[0] + 48u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D60A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001D60B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D60E0u); c.r[7].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(16ll);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D60E0u) [[unlikely]] return; }
L_001D60E0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D6130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] >> 5);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D6188; } }
L_001D616C:
    set32(c.r[2], c.r[16].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 1u));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
L_001D6188:
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D616Cu | kUnwind; return; } goto L_001D616C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_001D61E4; } }
L_001D61B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[20], ld32((c.r[20].w[0])));  goto L_001D61E4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D61D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001D61D0u) [[unlikely]] return; }
L_001D61D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D61E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D6200; } }
L_001D61E0:
    set32(c.r[20], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001D61E4:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D61B8u | kUnwind; return; } goto L_001D61B8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6200u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 203u, depth + 1u); else { c.pc = 0x001D6220u; return; } if (c.pc != 0x001D6200u) [[unlikely]] return; }
L_001D6200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D6220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(17ll);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6260u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6260u) [[unlikely]] return; }
L_001D6260:
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D628Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D628Cu) [[unlikely]] return; }
L_001D628C:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001D6308; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D6304; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6304u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 207u, depth + 1u); else { c.pc = 0x001D6330u; return; } if (c.pc != 0x001D6304u) [[unlikely]] return; }
L_001D6304:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D6308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D6330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6368u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6368u) [[unlikely]] return; }
L_001D6368:
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D6388; } }
L_001D6378:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001D6388:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6378u | kUnwind; return; } goto L_001D6378; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] - 1u);  if (t) { goto L_001D63DC; } }
L_001D63A0:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0])));  if (t) { goto L_001D63D0; } }
L_001D63B0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
L_001D63D0:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D63B0u | kUnwind; return; } goto L_001D63B0; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001D63DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D63A0u | kUnwind; return; } goto L_001D63A0; }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 2;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6408u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6408u) [[unlikely]] return; }
L_001D6408:
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D6430:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[6].d[0] = c.r[2].d[0] << 2;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CFB60u | kUnwind; return; } [[clang::musttail]] return unit_0033(c, 311u, depth); }
L_001D6450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_001D649C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D649C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6538; } }
L_001D649C:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], 0u + 4u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D64C8u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D64C8u) [[unlikely]] return; }
L_001D64C8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 15;
L_001D6504:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001D6528; }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_001D6538; } }
L_001D6524:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001D6528:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6504u | kUnwind; return; } goto L_001D6504; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D6538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 26280u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D6550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001D6578; } }
L_001D6550:
    c.f[0] = c.r[16].w[0];
    set32(c.r[2], 0u + 3u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6574u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0035(c, 235u, depth + 1u); else { c.pc = 0x001D6AE0u; return; } if (c.pc != 0x001D6574u) [[unlikely]] return; }
L_001D6574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D6578:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D6590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001D65BCu) [[unlikely]] return; }
L_001D65BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 26280u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D65D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001D6634; } }
L_001D65D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_001D65F8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D65F0u); set32(c.r[5], c.r[5].w[0] - 25408u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D65F0u) [[unlikely]] return; }
L_001D65F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001D6624; } }
L_001D65F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D6620; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D6620; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6620u); set32(c.r[5], c.r[5].w[0] - 25389u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D6620u) [[unlikely]] return; }
L_001D6620:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D6624:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6630u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 235u, depth + 1u); else { c.pc = 0x001D6AE0u; return; } if (c.pc != 0x001D6630u) [[unlikely]] return; }
L_001D6630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D6634:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D6650:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D66F4; } }
    set32(c.r[7], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[7].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  goto L_001D668C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D67E0; } }
L_001D668C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
L_001D66BC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[7].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 16u)));  goto L_001D66DC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001D66D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 8u);  if (t) { goto L_001D66EC; } }
L_001D66D8:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_001D66DC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D66BCu | kUnwind; return; } goto L_001D66BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D66EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001D6968; } }
L_001D66F4:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D67E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001D673C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D673C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D67D8; } }
L_001D673C:
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 4u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6768u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D6768u) [[unlikely]] return; }
L_001D6768:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 15;
L_001D67A4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001D67C8; }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D67C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_001D67D8; } }
L_001D67C4:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001D67C8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D67A4u | kUnwind; return; } goto L_001D67A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D67D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D6964; } }
L_001D67E0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_001D67F4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 26280u);  if (t) { goto L_001D6964; } }
L_001D67F4:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));  goto L_001D68D0; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[4].d[0] = ld8((c.r[17].w[0] + 7u));  goto L_001D68A8; }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001D687C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 4u));  goto L_001D6828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 7u));  if (t) { goto L_001D6904; } }
L_001D6828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6844u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D6844u) [[unlikely]] return; }
L_001D6844:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6930; } }
L_001D687C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6930; } }
L_001D68A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6930; } }
L_001D68D0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6930; } }
L_001D6904:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_001D6930:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D6934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D693Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001D693Cu) [[unlikely]] return; }
L_001D693C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 16u)));  goto L_001D6954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 8u);  if (t) { goto L_001D6964; } }
L_001D6954:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6934u | kUnwind; return; } goto L_001D6934; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D6964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D6968:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D6980:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 7u));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 13;
L_001D69B4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001D69D4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001D69D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_001D69E4; } }
L_001D69D0:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001D69D4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D69B4u | kUnwind; return; } goto L_001D69B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D69E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D69F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D6A2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D6A2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6AC8; } }
L_001D6A2C:
    c.f[0] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], 0u + 4u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6A58u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D6A58u) [[unlikely]] return; }
L_001D6A58:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 15;
L_001D6A94:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001D6AB8; }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D6AB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_001D6AC8; } }
L_001D6AB4:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001D6AB8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6A94u | kUnwind; return; } goto L_001D6A94; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D6AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D6AE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001D6C04; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[7].d[0]) { c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));  goto L_001D6BD4; }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001D6BA0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[19].w[0] + 4u));  goto L_001D6B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));  if (t) { goto L_001D6C44; } }
L_001D6B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6B60u); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D6B60u) [[unlikely]] return; }
L_001D6B60:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 7u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[17], c.r[20].w[0] + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[16], c.r[20].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] | 1ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001D6C78; } }
L_001D6BA0:
    set32(c.r[17], c.r[20].w[0] + 7u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    set32(c.r[16], c.r[20].w[0] + 16u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001D6C78; } }
L_001D6BD4:
    set32(c.r[17], c.r[20].w[0] + 7u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[20].w[0] + 16u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001D6C78; } }
L_001D6C04:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 7u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[20].w[0] + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[16], c.r[20].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] | 1ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001D6C78; } }
L_001D6C44:
    set32(c.r[17], c.r[20].w[0] + 7u);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[20].w[0] + 16u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] | 1ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 13;
L_001D6C78:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_001D6DF8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_001D6D48; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_001D6D30; }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_001D6D14; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { c.f[1] = ld32((c.r[18].w[0] + 4u));  goto L_001D6CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_001D6D68; } }
L_001D6CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6CDCu); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D6CDCu) [[unlikely]] return; }
L_001D6CDC:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6D84; } }
L_001D6D14:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6D84; } }
L_001D6D30:
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6D84; } }
L_001D6D48:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D6D84; } }
L_001D6D68:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_001D6D84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_001D6DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  if (t) { goto L_001D6D9C; } }
L_001D6D94:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 2;
L_001D6D9C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6D94u | kUnwind; return; } goto L_001D6D94; } }
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
L_001D6DBC:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6DBCu | kUnwind; return; } goto L_001D6DBC; } }
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_001D6DF4; } }
L_001D6DE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[5].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_001D6DF4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001D6DF8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001D6E04:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  goto L_001D6E1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + 8u);  if (t) { goto L_001D6E74; } }
L_001D6E1C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001D6E30; }
    set32(c.r[2], c.r[3].w[0] - 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6E04u | kUnwind; return; } goto L_001D6E04; } }
L_001D6E30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E48u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0035(c, 272u, depth + 1u); else { c.pc = 0x001D7440u; return; } if (c.pc != 0x001D6E48u) [[unlikely]] return; }
L_001D6E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E50u); set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0410u; return; } if (c.pc != 0x001D6E50u) [[unlikely]] return; }
L_001D6E50:
    set32(c.r[6], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E64u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 255u, depth + 1u); else { c.pc = 0x001D7020u; return; } if (c.pc != 0x001D6E64u) [[unlikely]] return; }
L_001D6E64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6E70u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001D6E70u) [[unlikely]] return; }
L_001D6E70:
    st32((c.r[2].w[0]), 0u);
    c.budget -= 1;
L_001D6E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D6EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D6EE4; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] << 2;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EE4u); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6EE4u) [[unlikely]] return; }
L_001D6EE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6EFCu); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6EFCu) [[unlikely]] return; }
L_001D6EFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6F10u) [[unlikely]] return; }
L_001D6F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D6F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F64u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6F64u) [[unlikely]] return; }
L_001D6F64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6F78u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CC980u; return; } if (c.pc != 0x001D6F78u) [[unlikely]] return; }
L_001D6F78:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u + 255u);
    c.r[7].d[0] = c.r[2].d[0] << 3;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FBCu); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D6FBCu) [[unlikely]] return; }
L_001D6FBC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_001D6FD8; } }
L_001D6FC8:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001D6FD8:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D6FC8u | kUnwind; return; } goto L_001D6FC8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D6FF8u); st32((c.r[16].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0035(c, 268u, depth + 1u); else { c.pc = 0x001D7340u; return; } if (c.pc != 0x001D6FF8u) [[unlikely]] return; }
L_001D6FF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D7020:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[23].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[17], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 18;
    { const bool t = c.r[23].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001D7070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_001D70AC; } }
L_001D7070:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
L_001D707C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D707Cu | kUnwind; return; } goto L_001D707C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[22], c.r[29].w[0] + 160u);
    st32((c.r[2].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    st32((c.r[2].w[0] + 96u), 0u);
    c.budget -= 5;
L_001D70AC:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001D7108; }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 3;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D70D8u); c.r[6].d[0] = c.r[3].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D70D8u) [[unlikely]] return; }
L_001D70D8:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_001D70F4; } }
L_001D70E4:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001D70F4:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D70E4u | kUnwind; return; } goto L_001D70E4; }
    st32((c.r[20].w[0] + 28u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001D7108:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7114u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 268u, depth + 1u); else { c.pc = 0x001D7340u; return; } if (c.pc != 0x001D7114u) [[unlikely]] return; }
L_001D7114:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D728C; }
    st32((c.r[20].w[0] + 28u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001D7254; } }
L_001D712C:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001D7254; }
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], c.r[18].w[0] + 1u);  goto L_001D7168; }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D7164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D7204; } }
L_001D7164:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001D7168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 204u);
    set32(c.r[6], 0u + 4u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7194u); st32((c.r[29].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001D7194u) [[unlikely]] return; }
L_001D7194:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 7u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 15;
L_001D71D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001D71F4; }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D71F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_001D7204; } }
L_001D71F0:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_001D71F4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D71D0u | kUnwind; return; } goto L_001D71D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 2;
L_001D7204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 26280u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_001D721C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_001D7244; } }
L_001D721C:
    set32(c.r[3], 0u + 3u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7240u); st32((c.r[29].w[0] + 196u), c.f[0]);  if (depth < kMaxDepth) unit_0035(c, 235u, depth + 1u); else { c.pc = 0x001D6AE0u; return; } if (c.pc != 0x001D7240u) [[unlikely]] return; }
L_001D7240:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001D7244:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_001D7254:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D712Cu | kUnwind; return; } goto L_001D712C; }
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.r[6].d[0] = c.r[3].d[0] << 3;
    c.r[7].d[0] = c.r[2].d[0] << 3;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7284u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D7284u) [[unlikely]] return; }
L_001D7284:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_001D728C:
    set32(c.r[16], c.r[3].w[0] << (c.r[23].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - 1u);  if (t) { goto L_001D72D4; } }
L_001D7298:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_001D72D4; }
    set32(c.r[18], c.r[6].w[0] + 8u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D72C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 218u, depth + 1u); else { c.pc = 0x001D6590u; return; } if (c.pc != 0x001D72C0u) [[unlikely]] return; }
L_001D72C0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 5;
L_001D72D4:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7298u | kUnwind; return; } goto L_001D7298; }
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_001D730C; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 2;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7308u); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D7308u) [[unlikely]] return; }
L_001D7308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001D730C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001D7340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] << (c.r[17].w[0] & 31u));  if (t) { goto L_001D7380; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7380u); set32(c.r[5], c.r[5].w[0] - 25370u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7380u) [[unlikely]] return; }
L_001D7380:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_001D7398; }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 88u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001D7400; } }
L_001D7398:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 2;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D73B8u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D73B8u) [[unlikely]] return; }
L_001D73B8:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001D73F4; } }
L_001D73C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 12;
L_001D73F4:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D73C4u | kUnwind; return; } goto L_001D73C4; }
L_001D7400:
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[5], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D7440:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D74E4; } }
L_001D747C:
    set32(c.r[6], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  goto L_001D749C; }
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D7508; } }
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 1;
L_001D749C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 96u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001D74D4; } }
L_001D74AC:
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001D74D4; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
L_001D74D4:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D74ACu | kUnwind; return; } goto L_001D74AC; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001D74E4:
    c.r[1].d[0] = c.r[7].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D747Cu | kUnwind; return; } goto L_001D747C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 25ll ? 1ull : 0ull;  if (t) { goto L_001D750C; } }
L_001D74F8:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[2].w[0] + 96u), 0u);
    c.budget -= 4;
L_001D7508:
    c.r[1].d[0] = c.r[7].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 1;
L_001D750C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D74F8u | kUnwind; return; } goto L_001D74F8; } }
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001D75CC; } }
L_001D7528:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001D75D0; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u - 1u);  goto L_001D7598; }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D7594; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001D7594; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7598; } }
L_001D7594:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001D7598:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001D75CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D75A8u); set32(c.r[4], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0034(c, 24u, depth + 1u); else { c.pc = 0x001D0410u; return; } if (c.pc != 0x001D75A8u) [[unlikely]] return; }
L_001D75A8:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 9;
L_001D75CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D75D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7528u | kUnwind; return; } goto L_001D7528; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D75ECu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 279u, depth + 1u); else { c.pc = 0x001D7610u; return; } if (c.pc != 0x001D75ECu) [[unlikely]] return; }
L_001D75EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001D7610:
    set32(c.r[13], ld32((c.r[4].w[0])));
    set32(c.r[14], 0u + 1u);
    set32(c.r[10], ld32((c.r[6].w[0])));
    c.r[8].d[0] = c.r[14].d[0] + 0ull;
    c.r[3].d[0] = c.r[13].d[0] ^ 0ull;
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u - c.r[3].w[0]);  if (t) { goto L_001D7660; } }
L_001D7634:
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 4;
    if (c.r[9].sd[0] <= 0) { set32(c.r[14], c.r[14].w[0] + 1u);  goto L_001D7660; }
    set32(c.r[13], c.r[13].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[13].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D765C; } }
    c.r[11].d[0] = c.r[14].d[0] + 0ull;
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 2;
L_001D765C:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_001D7660:
    c.r[1].d[0] = c.r[13].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[5].w[0] - c.r[12].w[0]);  goto L_001D7684; }
    set32(c.r[3], c.r[14].w[0] - 1u);
    set32(c.r[3], c.r[8].w[0] << (c.r[3].w[0] & 31u));
    c.r[1].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], c.r[14].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7634u | kUnwind; return; } goto L_001D7634; }
    set32(c.r[4], c.r[5].w[0] - c.r[12].w[0]);
    c.budget -= 1;
L_001D7684:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[3].d[0]; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { goto L_001D7698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D76A0; } }
L_001D7698:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[11].w[0] & 31u));
    c.budget -= 2;
L_001D76A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001D76B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D76CCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 285u, depth + 1u); else { c.pc = 0x001D77C0u; return; } if (c.pc != 0x001D76CCu) [[unlikely]] return; }
L_001D76CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 1u);  if (t) { goto L_001D7724; } }
L_001D76D8:
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001D7724; }
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[3], 0u + 3u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001D77A0; } }
L_001D7724:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D76D8u | kUnwind; return; } goto L_001D76D8; }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001D7790; } }
L_001D7744:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001D7790; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001D77A0; } }
L_001D7790:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7744u | kUnwind; return; } goto L_001D7744; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D77A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D77C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D77EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001D78AC; } }
L_001D77EC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u - 1u);  goto L_001D783C; }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D7838; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001D7838; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D7838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D783C; } }
L_001D7838:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001D783C:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_001D7860; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D785C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_001D78AC; } }
L_001D785C:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001D7860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001D7868u) [[unlikely]] return; }
L_001D7868:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 5;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_001D7890; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D788Cu); set32(c.r[5], c.r[5].w[0] - 25355u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D788Cu) [[unlikely]] return; }
L_001D788C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001D7890:
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[4], c.r[16].w[0] - c.r[4].w[0]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001D78AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D78D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 108u)));  if (t) { goto L_001D791C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  goto L_001D7908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001D7934; } }
L_001D7908:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7914u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001D7914u) [[unlikely]] return; }
L_001D7914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001D793C; } }
L_001D791C:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D792Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001D792Cu) [[unlikely]] return; }
L_001D792C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D7938; } }
L_001D7934:
    set32(c.r[2], c.r[2].w[0] - 26280u);
    c.budget -= 1;
L_001D7938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001D793C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D7950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7970u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001D7970u) [[unlikely]] return; }
L_001D7970:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D7998; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    set32(c.r[4], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001D7998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D79B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_001D79D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 25280u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001D79ECu) [[unlikely]] return; }
L_001D79EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D79FCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D79FCu) [[unlikely]] return; }
L_001D79FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D79D0u | kUnwind; return; } goto L_001D79D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D7A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001D7A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_001D7A8C; }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001D7A94; }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001D7A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001D7AAC; } }
L_001D7A94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 25056u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 32u), c.r[7].w[0]);  goto L_001D7AAC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 25051u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
L_001D7AAC:
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7AC0u); st32((c.r[29].w[0] + 24u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0035(c, 301u, depth + 1u); else { c.pc = 0x001D7AE0u; return; } if (c.pc != 0x001D7AC0u) [[unlikely]] return; }
L_001D7AC0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7ACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 18u, depth + 1u); else { c.pc = 0x001D8230u; return; } if (c.pc != 0x001D7ACCu) [[unlikely]] return; }
L_001D7ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D7AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 25056u);  if (t) { goto L_001D7B08; } }
L_001D7B08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D7B78; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7B40; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7B4C; } }
L_001D7B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B48u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7B48u) [[unlikely]] return; }
L_001D7B48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7B4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  goto L_001D7B70; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B6Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7B6Cu) [[unlikely]] return; }
L_001D7B6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_001D7B70:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7B08u | kUnwind; return; } goto L_001D7B08; }
L_001D7B78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7B98; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7B94u); set32(c.r[5], c.r[5].w[0] - 25008u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7B94u) [[unlikely]] return; }
L_001D7B94:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7B98:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7BC0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7BCC; } }
L_001D7BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BC8u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7BC8u) [[unlikely]] return; }
L_001D7BC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7BCC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[16].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7BF0; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7BECu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7BECu) [[unlikely]] return; }
L_001D7BEC:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7BF0:
    c.r[1].d[0] = c.r[16].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[16].sd[0] < 80ll ? 1ull : 0ull;  goto L_001D7C40; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (t) { goto L_001D7C0C; } }
    set32(c.r[2], c.r[16].w[0] + 15u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001D7C0C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[8].d[0] = c.r[16].d[0] & 15ull;  if (t) { goto L_001D7C20; } }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_001D7C24; }
    set32(c.r[8], c.r[8].w[0] - 16u);
    c.budget -= 1;
L_001D7C20:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001D7C24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24988u);
    set32(c.r[9], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C3Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7C3Cu) [[unlikely]] return; }
L_001D7C3C:
    c.r[1].d[0] = c.r[16].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 1;
L_001D7C40:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7C8C; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (t) { goto L_001D7C58; } }
    set32(c.r[2], c.r[16].w[0] + 15u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001D7C58:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[8].d[0] = c.r[16].d[0] & 15ull;  if (t) { goto L_001D7C6C; } }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_001D7C70; }
    set32(c.r[8], c.r[8].w[0] - 16u);
    c.budget -= 1;
L_001D7C6C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001D7C70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24933u);
    set32(c.r[9], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7C88u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7C88u) [[unlikely]] return; }
L_001D7C88:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7C8C:
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7CB8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7CC4; } }
L_001D7CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CC0u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7CC0u) [[unlikely]] return; }
L_001D7CC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7CC4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] & 255ull;  goto L_001D7CE8; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7CE4u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7CE4u) [[unlikely]] return; }
L_001D7CE4:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_001D7CE8:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7D20; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7D2C; } }
L_001D7D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D28u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7D28u) [[unlikely]] return; }
L_001D7D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7D2C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7D50; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D4Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7D4Cu) [[unlikely]] return; }
L_001D7D4C:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7D50:
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7D7C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7D78u); set32(c.r[7], c.r[7].w[0] - 24816u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7D78u) [[unlikely]] return; }
L_001D7D78:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7D7C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7DA4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7DB0; } }
L_001D7DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DACu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7DACu) [[unlikely]] return; }
L_001D7DAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7DB0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7DD4; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DD0u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7DD0u) [[unlikely]] return; }
L_001D7DD0:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7DD4:
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7E00; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7DFCu); set32(c.r[7], c.r[7].w[0] - 24812u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7DFCu) [[unlikely]] return; }
L_001D7DFC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7E00:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7E28; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7E34; } }
L_001D7E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E30u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7E30u) [[unlikely]] return; }
L_001D7E30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7E34:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7E58; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E54u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7E54u) [[unlikely]] return; }
L_001D7E54:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7E58:
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7E84; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7E80u); set32(c.r[7], c.r[7].w[0] - 24805u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7E80u) [[unlikely]] return; }
L_001D7E80:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7E84:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7EAC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7EB8; } }
L_001D7EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7EB4u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7EB4u) [[unlikely]] return; }
L_001D7EB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7EB8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7EDC; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7ED8u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7ED8u) [[unlikely]] return; }
L_001D7ED8:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7EDC:
    set32(c.r[8], 0u + 6u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7F08; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F04u); set32(c.r[7], c.r[7].w[0] - 24793u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7F04u) [[unlikely]] return; }
L_001D7F04:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7F08:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7F30; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7F3C; } }
L_001D7F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F38u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7F38u) [[unlikely]] return; }
L_001D7F38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7F3C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7F60; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F5Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7F5Cu) [[unlikely]] return; }
L_001D7F5C:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7F60:
    set32(c.r[8], 0u + 8u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D7F8C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7F88u); set32(c.r[7], c.r[7].w[0] - 24790u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7F88u) [[unlikely]] return; }
L_001D7F88:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D7F8C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D7FB4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D7FC0; } }
L_001D7FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7FBCu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D7FBCu) [[unlikely]] return; }
L_001D7FBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D7FC0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D7FE4; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D7FE0u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D7FE0u) [[unlikely]] return; }
L_001D7FE0:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D7FE4:
    set32(c.r[8], 0u + 9u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  [[clang::musttail]] return unit_0036(c, 3u, depth); }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    [[clang::musttail]] return unit_0036(c, 1u, depth);
}

}
