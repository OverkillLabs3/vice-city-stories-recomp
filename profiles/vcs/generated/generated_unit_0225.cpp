#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0225[4094] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14,
    15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24,
    25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 30, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 91, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 129, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 205, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 234, 235, 236, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0,
    0, 0, 0, 0, 295, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 307, 0, 0, 0,
    0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 319, 0, 0, 0, 0, 0, 0, 0, 320, 321, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 329, 0, 0, 0, 0, 0, 0, 330, 331, 332,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 339, 0, 0,
    340, 0, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 351, 0, 0, 0, 0, 0,
    0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 360, 0, 0, 0, 361, 0, 0, 0, 362, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 365,
    0, 0, 0, 366, 0, 0, 0, 0, 367, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372,
};
void recomp_unit_0225_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B88000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0225[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B88000;
    case 2u: goto L_08B88008;
    case 3u: goto L_08B88018;
    case 4u: goto L_08B88024;
    case 5u: goto L_08B88030;
    case 6u: goto L_08B8803C;
    case 7u: goto L_08B88044;
    case 8u: goto L_08B88050;
    case 9u: goto L_08B88058;
    case 10u: goto L_08B88070;
    case 11u: goto L_08B881C0;
    case 12u: goto L_08B88250;
    case 13u: goto L_08B88268;
    case 14u: goto L_08B8827C;
    case 15u: goto L_08B88280;
    case 16u: goto L_08B8828C;
    case 17u: goto L_08B8829C;
    case 18u: goto L_08B882A4;
    case 19u: goto L_08B88360;
    case 20u: goto L_08B88384;
    case 21u: goto L_08B883C8;
    case 22u: goto L_08B883E0;
    case 23u: goto L_08B883E8;
    case 24u: goto L_08B883FC;
    case 25u: goto L_08B88400;
    case 26u: goto L_08B88418;
    case 27u: goto L_08B88428;
    case 28u: goto L_08B88430;
    case 29u: goto L_08B8843C;
    case 30u: goto L_08B8844C;
    case 31u: goto L_08B88450;
    case 32u: goto L_08B88458;
    case 33u: goto L_08B88464;
    case 34u: goto L_08B8846C;
    case 35u: goto L_08B8847C;
    case 36u: goto L_08B884E8;
    case 37u: goto L_08B884F8;
    case 38u: goto L_08B88500;
    case 39u: goto L_08B88528;
    case 40u: goto L_08B88538;
    case 41u: goto L_08B88544;
    case 42u: goto L_08B88578;
    case 43u: goto L_08B885A8;
    case 44u: goto L_08B885CC;
    case 45u: goto L_08B88700;
    case 46u: goto L_08B88708;
    case 47u: goto L_08B88718;
    case 48u: goto L_08B88724;
    case 49u: goto L_08B8872C;
    case 50u: goto L_08B88740;
    case 51u: goto L_08B88760;
    case 52u: goto L_08B88770;
    case 53u: goto L_08B88790;
    case 54u: goto L_08B8879C;
    case 55u: goto L_08B887A0;
    case 56u: goto L_08B887CC;
    case 57u: goto L_08B88800;
    case 58u: goto L_08B88828;
    case 59u: goto L_08B88854;
    case 60u: goto L_08B88884;
    case 61u: goto L_08B888A0;
    case 62u: goto L_08B888B4;
    case 63u: goto L_08B888C0;
    case 64u: goto L_08B888CC;
    case 65u: goto L_08B888D8;
    case 66u: goto L_08B888E0;
    case 67u: goto L_08B888EC;
    case 68u: goto L_08B888F4;
    case 69u: goto L_08B8890C;
    case 70u: goto L_08B88924;
    case 71u: goto L_08B8893C;
    case 72u: goto L_08B88948;
    case 73u: goto L_08B88958;
    case 74u: goto L_08B88960;
    case 75u: goto L_08B88974;
    case 76u: goto L_08B88980;
    case 77u: goto L_08B8898C;
    case 78u: goto L_08B88998;
    case 79u: goto L_08B889A4;
    case 80u: goto L_08B889B0;
    case 81u: goto L_08B889BC;
    case 82u: goto L_08B889C8;
    case 83u: goto L_08B889D0;
    case 84u: goto L_08B889D8;
    case 85u: goto L_08B889E4;
    case 86u: goto L_08B889F8;
    case 87u: goto L_08B88A14;
    case 88u: goto L_08B88A34;
    case 89u: goto L_08B88A50;
    case 90u: goto L_08B88A70;
    case 91u: goto L_08B88A90;
    case 92u: goto L_08B88A94;
    case 93u: goto L_08B88AA4;
    case 94u: goto L_08B88AB8;
    case 95u: goto L_08B88ACC;
    case 96u: goto L_08B88BCC;
    case 97u: goto L_08B88BD8;
    case 98u: goto L_08B88BE0;
    case 99u: goto L_08B88BEC;
    case 100u: goto L_08B88BF8;
    case 101u: goto L_08B88C04;
    case 102u: goto L_08B88C1C;
    case 103u: goto L_08B88C28;
    case 104u: goto L_08B88C38;
    case 105u: goto L_08B88C48;
    case 106u: goto L_08B88C54;
    case 107u: goto L_08B88C58;
    case 108u: goto L_08B88C60;
    case 109u: goto L_08B88C8C;
    case 110u: goto L_08B88C90;
    case 111u: goto L_08B88CA0;
    case 112u: goto L_08B88CA8;
    case 113u: goto L_08B88DA0;
    case 114u: goto L_08B88F48;
    case 115u: goto L_08B88F78;
    case 116u: goto L_08B88F84;
    case 117u: goto L_08B88FB0;
    case 118u: goto L_08B88FBC;
    case 119u: goto L_08B88FD8;
    case 120u: goto L_08B88FE8;
    case 121u: goto L_08B89000;
    case 122u: goto L_08B8900C;
    case 123u: goto L_08B89028;
    case 124u: goto L_08B89034;
    case 125u: goto L_08B8903C;
    case 126u: goto L_08B89048;
    case 127u: goto L_08B89050;
    case 128u: goto L_08B8905C;
    case 129u: goto L_08B89060;
    case 130u: goto L_08B8906C;
    case 131u: goto L_08B89080;
    case 132u: goto L_08B89094;
    case 133u: goto L_08B890A8;
    case 134u: goto L_08B890B4;
    case 135u: goto L_08B890CC;
    case 136u: goto L_08B890E4;
    case 137u: goto L_08B890F0;
    case 138u: goto L_08B89104;
    case 139u: goto L_08B89114;
    case 140u: goto L_08B89124;
    case 141u: goto L_08B89134;
    case 142u: goto L_08B89148;
    case 143u: goto L_08B89168;
    case 144u: goto L_08B8917C;
    case 145u: goto L_08B89194;
    case 146u: goto L_08B891A4;
    case 147u: goto L_08B891B4;
    case 148u: goto L_08B891CC;
    case 149u: goto L_08B891DC;
    case 150u: goto L_08B891F4;
    case 151u: goto L_08B89204;
    case 152u: goto L_08B89210;
    case 153u: goto L_08B89220;
    case 154u: goto L_08B89234;
    case 155u: goto L_08B89250;
    case 156u: goto L_08B89264;
    case 157u: goto L_08B89270;
    case 158u: goto L_08B89278;
    case 159u: goto L_08B89288;
    case 160u: goto L_08B892A0;
    case 161u: goto L_08B892B4;
    case 162u: goto L_08B892D4;
    case 163u: goto L_08B892E0;
    case 164u: goto L_08B892F4;
    case 165u: goto L_08B8930C;
    case 166u: goto L_08B8931C;
    case 167u: goto L_08B8932C;
    case 168u: goto L_08B89340;
    case 169u: goto L_08B89350;
    case 170u: goto L_08B89364;
    case 171u: goto L_08B89370;
    case 172u: goto L_08B89398;
    case 173u: goto L_08B893C0;
    case 174u: goto L_08B893E0;
    case 175u: goto L_08B89420;
    case 176u: goto L_08B89448;
    case 177u: goto L_08B89464;
    case 178u: goto L_08B89474;
    case 179u: goto L_08B89488;
    case 180u: goto L_08B894A4;
    case 181u: goto L_08B894BC;
    case 182u: goto L_08B894D8;
    case 183u: goto L_08B89508;
    case 184u: goto L_08B89528;
    case 185u: goto L_08B89548;
    case 186u: goto L_08B89560;
    case 187u: goto L_08B89584;
    case 188u: goto L_08B89598;
    case 189u: goto L_08B895B0;
    case 190u: goto L_08B895D4;
    case 191u: goto L_08B8964C;
    case 192u: goto L_08B8965C;
    case 193u: goto L_08B897B4;
    case 194u: goto L_08B89800;
    case 195u: goto L_08B89858;
    case 196u: goto L_08B89868;
    case 197u: goto L_08B8987C;
    case 198u: goto L_08B89884;
    case 199u: goto L_08B89898;
    case 200u: goto L_08B89AB0;
    case 201u: goto L_08B89AC4;
    case 202u: goto L_08B89ACC;
    case 203u: goto L_08B89AE0;
    case 204u: goto L_08B89C68;
    case 205u: goto L_08B89C6C;
    case 206u: goto L_08B89C88;
    case 207u: goto L_08B89CB8;
    case 208u: goto L_08B89CCC;
    case 209u: goto L_08B89D04;
    case 210u: goto L_08B89D38;
    case 211u: goto L_08B89D7C;
    case 212u: goto L_08B89D9C;
    case 213u: goto L_08B89DC0;
    case 214u: goto L_08B89DD8;
    case 215u: goto L_08B89DF4;
    case 216u: goto L_08B89E2C;
    case 217u: goto L_08B89E88;
    case 218u: goto L_08B89EA0;
    case 219u: goto L_08B89ED8;
    case 220u: goto L_08B89FA0;
    case 221u: goto L_08B89FB8;
    case 222u: goto L_08B89FC4;
    case 223u: goto L_08B89FC8;
    case 224u: goto L_08B89FCC;
    case 225u: goto L_08B8A000;
    case 226u: goto L_08B8A00C;
    case 227u: goto L_08B8A540;
    case 228u: goto L_08B8A588;
    case 229u: goto L_08B8A5D8;
    case 230u: goto L_08B8A658;
    case 231u: goto L_08B8A660;
    case 232u: goto L_08B8A718;
    case 233u: goto L_08B8A738;
    case 234u: goto L_08B8A73C;
    case 235u: goto L_08B8A740;
    case 236u: goto L_08B8A744;
    case 237u: goto L_08B8A748;
    case 238u: goto L_08B8A790;
    case 239u: goto L_08B8A7B8;
    case 240u: goto L_08B8A830;
    case 241u: goto L_08B8A85C;
    case 242u: goto L_08B8A864;
    case 243u: goto L_08B8A898;
    case 244u: goto L_08B8A8B0;
    case 245u: goto L_08B8AC1C;
    case 246u: goto L_08B8AC38;
    case 247u: goto L_08B8AC54;
    case 248u: goto L_08B8AC70;
    case 249u: goto L_08B8AC8C;
    case 250u: goto L_08B8AE14;
    case 251u: goto L_08B8AE20;
    case 252u: goto L_08B8AFAC;
    case 253u: goto L_08B8B0A8;
    case 254u: goto L_08B8B0C4;
    case 255u: goto L_08B8B0E0;
    case 256u: goto L_08B8B0FC;
    case 257u: goto L_08B8B118;
    case 258u: goto L_08B8B488;
    case 259u: goto L_08B8B494;
    case 260u: goto L_08B8B4A4;
    case 261u: goto L_08B8B508;
    case 262u: goto L_08B8B534;
    case 263u: goto L_08B8B550;
    case 264u: goto L_08B8B558;
    case 265u: goto L_08B8B56C;
    case 266u: goto L_08B8B578;
    case 267u: goto L_08B8B588;
    case 268u: goto L_08B8B5A4;
    case 269u: goto L_08B8B5B8;
    case 270u: goto L_08B8B5E8;
    case 271u: goto L_08B8B618;
    case 272u: goto L_08B8B648;
    case 273u: goto L_08B8B678;
    case 274u: goto L_08B8B6A8;
    case 275u: goto L_08B8B6D8;
    case 276u: goto L_08B8B708;
    case 277u: goto L_08B8B738;
    case 278u: goto L_08B8B740;
    case 279u: goto L_08B8B758;
    case 280u: goto L_08B8B788;
    case 281u: goto L_08B8B7B8;
    case 282u: goto L_08B8B7C8;
    case 283u: goto L_08B8B7E8;
    case 284u: goto L_08B8B87C;
    case 285u: goto L_08B8B8C4;
    case 286u: goto L_08B8B910;
    case 287u: goto L_08B8B93C;
    case 288u: goto L_08B8B964;
    case 289u: goto L_08B8B9A4;
    case 290u: goto L_08B8B9C0;
    case 291u: goto L_08B8B9C8;
    case 292u: goto L_08B8B9DC;
    case 293u: goto L_08B8B9EC;
    case 294u: goto L_08B8B9F8;
    case 295u: goto L_08B8BA10;
    case 296u: goto L_08B8BA14;
    case 297u: goto L_08B8BA30;
    case 298u: goto L_08B8BA50;
    case 299u: goto L_08B8BA84;
    case 300u: goto L_08B8BA90;
    case 301u: goto L_08B8BAD0;
    case 302u: goto L_08B8BB10;
    case 303u: goto L_08B8BB1C;
    case 304u: goto L_08B8BB34;
    case 305u: goto L_08B8BB44;
    case 306u: goto L_08B8BB6C;
    case 307u: goto L_08B8BB70;
    case 308u: goto L_08B8BB88;
    case 309u: goto L_08B8BB94;
    case 310u: goto L_08B8BBA0;
    case 311u: goto L_08B8BBB8;
    case 312u: goto L_08B8BBBC;
    case 313u: goto L_08B8BBD8;
    case 314u: goto L_08B8BBE4;
    case 315u: goto L_08B8BBF8;
    case 316u: goto L_08B8BC0C;
    case 317u: goto L_08B8BC18;
    case 318u: goto L_08B8BC34;
    case 319u: goto L_08B8BC38;
    case 320u: goto L_08B8BC58;
    case 321u: goto L_08B8BC5C;
    case 322u: goto L_08B8BC78;
    case 323u: goto L_08B8BC84;
    case 324u: goto L_08B8BC98;
    case 325u: goto L_08B8BCAC;
    case 326u: goto L_08B8BCB8;
    case 327u: goto L_08B8BCC0;
    case 328u: goto L_08B8BCD4;
    case 329u: goto L_08B8BCD8;
    case 330u: goto L_08B8BCF4;
    case 331u: goto L_08B8BCF8;
    case 332u: goto L_08B8BCFC;
    case 333u: goto L_08B8BD18;
    case 334u: goto L_08B8BD24;
    case 335u: goto L_08B8BD2C;
    case 336u: goto L_08B8BD38;
    case 337u: goto L_08B8BD4C;
    case 338u: goto L_08B8BD70;
    case 339u: goto L_08B8BD74;
    case 340u: goto L_08B8BD80;
    case 341u: goto L_08B8BD98;
    case 342u: goto L_08B8BD9C;
    case 343u: goto L_08B8BDB0;
    case 344u: goto L_08B8BDC4;
    case 345u: goto L_08B8BDD0;
    case 346u: goto L_08B8BDEC;
    case 347u: goto L_08B8BE14;
    case 348u: goto L_08B8BE3C;
    case 349u: goto L_08B8BE4C;
    case 350u: goto L_08B8BE64;
    case 351u: goto L_08B8BE68;
    case 352u: goto L_08B8BE84;
    case 353u: goto L_08B8BE8C;
    case 354u: goto L_08B8BEA0;
    case 355u: goto L_08B8BEB4;
    case 356u: goto L_08B8BEBC;
    case 357u: goto L_08B8BEDC;
    case 358u: goto L_08B8BF04;
    case 359u: goto L_08B8BF2C;
    case 360u: goto L_08B8BF30;
    case 361u: goto L_08B8BF40;
    case 362u: goto L_08B8BF50;
    case 363u: goto L_08B8BF54;
    case 364u: goto L_08B8BF78;
    case 365u: goto L_08B8BF7C;
    case 366u: goto L_08B8BF8C;
    case 367u: goto L_08B8BFA0;
    case 368u: goto L_08B8BFA4;
    case 369u: goto L_08B8BFC0;
    case 370u: goto L_08B8BFCC;
    case 371u: goto L_08B8BFE4;
    case 372u: goto L_08B8BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B88000:
    rt.unsupported(0x08B88000u, 0x73726579u, "unknown not lowered yet"); return;
L_08B88008:
    rt.unsupported(0x08B88008u, 0x67676F54u, "vfpu1 not lowered yet"); return;
L_08B88018:
    rt.unsupported(0x08B88018u, 0x6E6F4372u, "vfpu3 not lowered yet"); return;
L_08B88024:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 11u, 0x08BA05B8u>(ctx, &aot_mem); return;
    }
    goto L_08B88030;
L_08B88030:
    ctx.execute_vfpu_compare3(114u, 68u, 114u, 1u, 6u);
    rt.unsupported(0x08B88034u, 0x6E696E77u, "vfpu3 not lowered yet"); return;
L_08B8803C:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 9u, 0x08BA0574u>(ctx, &aot_mem); return;
    }
    goto L_08B88044;
L_08B88044:
    ctx.execute_vfpu_vcmp_ct<67u, 111u, 1u, 2u>();
    if (ctx.gpr[3] != ctx.gpr[18]) {
    rt.unsupported(0x08B8804Cu, 0x7261436Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 186u, 0x08BA5608u>(ctx, &aot_mem); return;
    }
    goto L_08B88050;
L_08B88050:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B88054u, 0x00007275u, "special? not lowered yet"); return;
L_08B88058:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B8805Cu, 0x72657961u, "unknown not lowered yet"); return;
L_08B88070:
    rt.unsupported(0x08B88074u, 0x08B166C8u, "control flow in delay slot"); return;
L_08B881C0:
    rt.unsupported(0x08B881C4u, 0x08B186E0u, "control flow in delay slot"); return;
L_08B88250:
    rt.unsupported(0x08B88250u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B88268:
    ctx.gpr[4] = (ctx.gpr[26] < static_cast<std::uint32_t>(20301) ? 1u : 0u);
    rt.unsupported(0x08B8826Cu, 0x4142494Cu, "unknown not lowered yet"); return;
L_08B8827C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B88280;
L_08B88280:
    rt.unsupported(0x08B88280u, 0x43534944u, "unknown not lowered yet"); return;
L_08B8828C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B88290u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B88298u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 11u, 0x08B9CBBCu>(ctx, &aot_mem); return;
    }
    goto L_08B8829C;
L_08B8829C:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    rt.unsupported(0x08B882A0u, 0x4D2F5053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 21u, 0x08B987F0u>(ctx, &aot_mem); return;
    }
    goto L_08B882A4;
L_08B882A4:
    rt.unsupported(0x08B882A4u, 0x4C55444Fu, "unknown not lowered yet"); return;
L_08B88360:
    rt.unsupported(0x08B88364u, 0x08BB2C0Cu, "control flow in delay slot"); return;
L_08B88384:
    rt.unsupported(0x08B88388u, 0x08BB2C54u, "control flow in delay slot"); return;
L_08B883C8:
    rt.unsupported(0x08B883CCu, 0x08B2542Cu, "control flow in delay slot"); return;
L_08B883E0:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B883E4u, 0x74697270u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 43u, 0x08BA14E8u>(ctx, &aot_mem); return;
    }
    goto L_08B883E8;
L_08B883E8:
    rt.unsupported(0x08B883E8u, 0x696C4265u, "unknown not lowered yet"); return;
L_08B883FC:
    // nop
    goto L_08B88400;
L_08B88400:
    rt.unsupported(0x08B88400u, 0x4C646441u, "unknown not lowered yet"); return;
L_08B88418:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 76u, 1u, 6u);
    if (ctx.gpr[19] == ctx.gpr[12]) {
    rt.unsupported(0x08B88424u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 17u, 0x08BA09B0u>(ctx, &aot_mem); return;
    }
    goto L_08B88428;
L_08B88428:
    rt.unsupported(0x08B88428u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B88430:
    rt.unsupported(0x08B88430u, 0x42746553u, "unknown not lowered yet"); return;
L_08B8843C:
    ctx.execute_vfpu_compare3(108u, 101u, 70u, 1u, 6u);
    rt.unsupported(0x08B88440u, 0x616C5072u, "vfpu0 not lowered yet"); return;
L_08B8844C:
    // nop
    goto L_08B88450;
L_08B88450:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B88454u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 53u, 0x08BA19A0u>(ctx, &aot_mem); return;
    }
    goto L_08B88458;
L_08B88458:
    rt.unsupported(0x08B88458u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B88464:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B88468u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 54u, 0x08BA19B4u>(ctx, &aot_mem); return;
    }
    goto L_08B8846C;
L_08B8846C:
    ctx.execute_vfpu_vscl_ct<84u, 111u, 84u, 1u>();
    ctx.execute_vfpu_compare3(97u, 109u, 67u, 1u, 6u);
    rt.unsupported(0x08B88474u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08B8847C:
    rt.unsupported(0x08B88480u, 0x08B24924u, "control flow in delay slot"); return;
L_08B884E8:
    rt.unsupported(0x08B884E8u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B884F8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    (void)(ctx.gpr[9] < static_cast<std::uint32_t>(21573) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 15u, 0x08B9CE50u>(ctx, &aot_mem); return;
    }
    goto L_08B88500;
L_08B88500:
    ctx.execute_vfpu_vscl_ct<32u, 84u, 104u, 1u>();
    rt.unsupported(0x08B88504u, 0x61206572u, "vfpu0 not lowered yet"); return;
L_08B88528:
    rt.unsupported(0x08B88528u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B88538:
    rt.unsupported(0x08B88538u, 0x435F5450u, "unknown not lowered yet"); return;
L_08B88544:
    rt.unsupported(0x08B88544u, 0x202D2054u, "unknown not lowered yet"); return;
L_08B88578:
    rt.unsupported(0x08B8857Cu, 0x08B26D18u, "control flow in delay slot"); return;
L_08B885A8:
    rt.unsupported(0x08B885ACu, 0x08B36A88u, "control flow in delay slot"); return;
L_08B885CC:
    rt.unsupported(0x08B885D0u, 0x08B36AF8u, "control flow in delay slot"); return;
L_08B88700:
    rt.unsupported(0x08B88704u, 0x504D4153u, "control flow in delay slot"); return;
L_08B88708:
    rt.unsupported(0x08B88708u, 0x495F454Cu, "cop2/vfpu not lowered yet"); return;
L_08B88718:
    rt.unsupported(0x08B88718u, 0x444E5552u, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B88720u, 0x4D5C7325u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 18u, 0x08B9D824u>(ctx, &aot_mem); return;
    }
    goto L_08B88724;
L_08B88724:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B88728u, 0x492E7325u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 41u, 0x08B99464u>(ctx, &aot_mem); return;
    }
    goto L_08B8872C;
L_08B8872C:
    rt.unsupported(0x08B8872Cu, 0x0000474Du, "special? not lowered yet"); return;
L_08B88740:
    rt.unsupported(0x08B88744u, 0x08B3CEBCu, "control flow in delay slot"); return;
L_08B88760:
    // nop
    // nop
    rt.unsupported(0x08B88768u, 0x00002928u, "special? not lowered yet"); return;
L_08B88770:
    ctx.execute_vfpu_vscl_ct<71u, 101u, 110u, 1u>();
    ctx.execute_vfpu_vscl_ct<114u, 97u, 116u, 1u>();
    rt.unsupported(0x08B88778u, 0x72656D45u, "unknown not lowered yet"); return;
L_08B88790:
    ctx.execute_vfpu_vscl_ct<71u, 101u, 110u, 1u>();
    ctx.execute_vfpu_vscl_ct<114u, 97u, 116u, 1u>();
    if (ctx.gpr[19] == ctx.gpr[5]) {
    ctx.execute_vfpu_compare3(97u, 110u, 100u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 4u, 0x08BA40D8u>(ctx, &aot_mem); return;
    }
    goto L_08B887A0;
L_08B8879C:
    ctx.execute_vfpu_compare3(97u, 110u, 100u, 1u, 6u);
    goto L_08B887A0;
L_08B887A0:
    rt.unsupported(0x08B887A0u, 0x7261436Du, "unknown not lowered yet"); return;
L_08B887CC:
    rt.unsupported(0x08B887D0u, 0x08B468F8u, "control flow in delay slot"); return;
L_08B88800:
    rt.unsupported(0x08B88804u, 0x08B4692Cu, "control flow in delay slot"); return;
L_08B88828:
    rt.unsupported(0x08B8882Cu, 0x08B4D4E4u, "control flow in delay slot"); return;
L_08B88854:
    rt.unsupported(0x08B88858u, 0x08B4D18Cu, "control flow in delay slot"); return;
L_08B88884:
    rt.unsupported(0x08B88888u, 0x08B4D4CCu, "control flow in delay slot"); return;
L_08B888A0:
    rt.unsupported(0x08B888A0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B888B4:
    rt.unsupported(0x08B888B4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B888C0:
    rt.unsupported(0x08B888C0u, 0x4D643365u, "unknown not lowered yet"); return;
L_08B888CC:
    rt.unsupported(0x08B888CCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B888D8:
    rt.unsupported(0x08B888D8u, 0x68746C61u, "unknown not lowered yet"); return;
L_08B888E0:
    rt.unsupported(0x08B888E0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B888EC:
    rt.unsupported(0x08B888ECu, 0x69746973u, "unknown not lowered yet"); return;
L_08B888F4:
    rt.unsupported(0x08B888F4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B8890C:
    rt.unsupported(0x08B8890Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B88924:
    rt.unsupported(0x08B88924u, 0x69686556u, "unknown not lowered yet"); return;
L_08B8893C:
    rt.unsupported(0x08B8893Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B88948:
    rt.unsupported(0x08B88948u, 0x746E6563u, "unknown not lowered yet"); return;
L_08B88958:
    rt.unsupported(0x08B88958u, 0x72657961u, "unknown not lowered yet"); return;
L_08B88960:
    rt.unsupported(0x08B88960u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88974:
    rt.unsupported(0x08B88974u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88980:
    ctx.execute_vfpu_vscl_ct<101u, 114u, 103u, 1u>();
    if (ctx.gpr[27] == ctx.gpr[25]) {
    rt.unsupported(0x08B88988u, 0x00706F74u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 45u, 0x08BA1740u>(ctx, &aot_mem); return;
    }
    goto L_08B8898C;
L_08B8898C:
    rt.unsupported(0x08B8898Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B88998:
    ctx.execute_vfpu_compare3(114u, 68u, 111u, 1u, 6u);
    rt.unsupported(0x08B8899Cu, 0x636F4C72u, "vfpu0 not lowered yet"); return;
L_08B889A4:
    rt.unsupported(0x08B889A4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B889B0:
    rt.unsupported(0x08B889B0u, 0x4E736572u, "unknown not lowered yet"); return;
L_08B889BC:
    rt.unsupported(0x08B889BCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B889C8:
    rt.unsupported(0x08B889C8u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08B889D0:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    rt.unsupported(0x08B889D4u, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 86u, 0x08BA1EF0u>(ctx, &aot_mem); return;
    }
    goto L_08B889D8;
L_08B889D8:
    ctx.execute_vfpu_compare3(108u, 101u, 67u, 1u, 6u);
    rt.unsupported(0x08B889DCu, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08B889E4:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    ctx.execute_vfpu_vscl_ct<101u, 87u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    goto L_08B889F8;
L_08B889F8:
    rt.unsupported(0x08B889F8u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88A14:
    rt.unsupported(0x08B88A14u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88A34:
    rt.unsupported(0x08B88A34u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88A50:
    rt.unsupported(0x08B88A50u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88A70:
    rt.unsupported(0x08B88A70u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88A90:
    rt.unsupported(0x08B88A90u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88A94:
    rt.unsupported(0x08B88A94u, 0x41656C63u, "unknown not lowered yet"); return;
L_08B88AA4:
    rt.unsupported(0x08B88AA4u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B88AB8:
    rt.unsupported(0x08B88AB8u, 0x69686556u, "unknown not lowered yet"); return;
L_08B88ACC:
    rt.unsupported(0x08B88AD0u, 0x08B52A68u, "control flow in delay slot"); return;
L_08B88BCC:
    rt.unsupported(0x08B88BCCu, 0x4C524143u, "unknown not lowered yet"); return;
L_08B88BD8:
    rt.unsupported(0x08B88BD8u, 0x44454B43u, "unsupported CFC1 control register"); return;
    // nop
    goto L_08B88BE0;
L_08B88BE0:
    rt.unsupported(0x08B88BE0u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B88BEC:
    rt.unsupported(0x08B88BECu, 0x4F4C5F31u, "unknown not lowered yet"); return;
L_08B88BF8:
    rt.unsupported(0x08B88BF8u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B88C04:
    rt.unsupported(0x08B88C04u, 0x4F4C5F32u, "unknown not lowered yet"); return;
L_08B88C1C:
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(-32143), ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    rt.unsupported(0x08B88C24u, 0x44454B46u, "unsupported CFC1 control register"); return;
    goto L_08B88C28;
L_08B88C28:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (!ctx.execute_signed_add(0u, 0u, 0u)) { rt.arithmetic_overflow(0x08B88C2Cu, 0x00000020u); return; }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08B88C38;
L_08B88C38:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (!ctx.execute_signed_add(0u, 0u, 0u)) { rt.arithmetic_overflow(0x08B88C3Cu, 0x00000020u); return; }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08B88C48;
L_08B88C48:
    rt.unsupported(0x08B88C48u, 0x72657375u, "unknown not lowered yet"); return;
L_08B88C54:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B88C58;
L_08B88C58:
    rt.unsupported(0x08B88C58u, 0x6978655Fu, "unknown not lowered yet"); return;
L_08B88C60:
    rt.unsupported(0x08B88C60u, 0x6362696Cu, "vfpu0 not lowered yet"); return;
L_08B88C8C:
    rt.unsupported(0x08B88C90u, 0x72657355u, "unknown not lowered yet"); return;
    ctx.pc = 0x02D54A70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B88C90:
    rt.unsupported(0x08B88C90u, 0x72657355u, "unknown not lowered yet"); return;
L_08B88CA0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    // nop
    goto L_08B88CA8;
L_08B88CA8:
    rt.unsupported(0x08B88CA8u, 0x676E750Au, "vfpu1 not lowered yet"); return;
L_08B88DA0:
    rt.unsupported(0x08B88DA4u, 0x08B56BE8u, "control flow in delay slot"); return;
L_08B88F48:
    ctx.execute_vfpu_vscl_ct<97u, 115u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 116u, 105u, 1u, 6u);
    ctx.gpr[2] = (ctx.gpr[9] + static_cast<std::uint32_t>(8302));
    ctx.execute_vfpu_vhdp(115u, 34u, 32u, 1u);
    ctx.execute_vfpu_vscl_ct<97u, 105u, 108u, 1u>();
    ctx.execute_vfpu_vhdp(100u, 58u, 32u, 1u);
    rt.unsupported(0x08B88F60u, 0x20656C69u, "unknown not lowered yet"); return;
L_08B88F78:
    rt.unsupported(0x08B88F78u, 0x4A532D43u, "cop2/vfpu not lowered yet"); return;
L_08B88F84:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 9u));
    rt.unsupported(0x08B88F88u, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08B88FB0:
    rt.unsupported(0x08B88FB0u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B88FBC:
    rt.unsupported(0x08B88FBCu, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B88FD8:
    rt.unsupported(0x08B88FD8u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B88FE8:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08B88FECu, 0x70757272u, "unknown not lowered yet"); return;
L_08B89000:
    rt.unsupported(0x08B89000u, 0x204F2F49u, "unknown not lowered yet"); return;
L_08B8900C:
    rt.unsupported(0x08B8900Cu, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B89028:
    rt.unsupported(0x08B89028u, 0x20677241u, "unknown not lowered yet"); return;
L_08B89034:
    rt.unsupported(0x08B89034u, 0x6E6F6C20u, "vfpu3 not lowered yet"); return;
L_08B8903C:
    rt.unsupported(0x08B8903Cu, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08B89048:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B8904Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B89050:
    rt.unsupported(0x08B89050u, 0x20646142u, "unknown not lowered yet"); return;
L_08B8905C:
    if (!ctx.execute_signed_sub(12u, 3u, 18u)) { rt.arithmetic_overflow(0x08B8905Cu, 0x00726562u); return; }
    goto L_08B89060;
L_08B89060:
    rt.unsupported(0x08B89060u, 0x63206F4Eu, "vfpu0 not lowered yet"); return;
L_08B8906C:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B89070u, 0x2065726Fu, "unknown not lowered yet"); return;
L_08B89080:
    rt.unsupported(0x08B89080u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B89094:
    ctx.execute_vfpu_vminmax(80u, 101u, 114u, 1u, false);
    rt.unsupported(0x08B89098u, 0x69737369u, "unknown not lowered yet"); return;
L_08B890A8:
    rt.unsupported(0x08B890A8u, 0x20646142u, "unknown not lowered yet"); return;
L_08B890B4:
    rt.unsupported(0x08B890B4u, 0x636F6C42u, "vfpu0 not lowered yet"); return;
L_08B890CC:
    rt.unsupported(0x08B890CCu, 0x69766544u, "unknown not lowered yet"); return;
L_08B890E4:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    rt.unsupported(0x08B890E8u, 0x69786520u, "unknown not lowered yet"); return;
L_08B890F0:
    rt.unsupported(0x08B890F0u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B89104:
    rt.unsupported(0x08B89104u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B89114:
    rt.unsupported(0x08B89114u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B89124:
    rt.unsupported(0x08B89124u, 0x61207349u, "vfpu0 not lowered yet"); return;
L_08B89134:
    rt.unsupported(0x08B89134u, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B89148:
    rt.unsupported(0x08B89148u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B89168:
    rt.unsupported(0x08B89168u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B8917C:
    rt.unsupported(0x08B8917Cu, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B89194:
    rt.unsupported(0x08B89194u, 0x74786554u, "unknown not lowered yet"); return;
L_08B891A4:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    ctx.execute_vfpu_compare3(32u, 116u, 111u, 1u, 6u);
    rt.unsupported(0x08B891ACu, 0x72616C20u, "unknown not lowered yet"); return;
L_08B891B4:
    rt.unsupported(0x08B891B4u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B891CC:
    ctx.execute_vfpu_vscl_ct<73u, 108u, 108u, 1u>();
    rt.unsupported(0x08B891D0u, 0x206C6167u, "unknown not lowered yet"); return;
L_08B891DC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<111u, 110u, 1u, 13u>();
    rt.unsupported(0x08B891E4u, 0x69662079u, "unknown not lowered yet"); return;
L_08B891F4:
    rt.unsupported(0x08B891F4u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B89204:
    rt.unsupported(0x08B89204u, 0x6B6F7242u, "unknown not lowered yet"); return;
L_08B89210:
    rt.unsupported(0x08B89210u, 0x6874614Du, "unknown not lowered yet"); return;
L_08B89220:
    rt.unsupported(0x08B89220u, 0x75736552u, "unknown not lowered yet"); return;
L_08B89234:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B89238u, 0x61737365u, "vfpu0 not lowered yet"); return;
L_08B89250:
    rt.unsupported(0x08B89250u, 0x6E656449u, "vfpu3 not lowered yet"); return;
L_08B89264:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<68u, 1u>(vfpu_d); }
    rt.unsupported(0x08B89268u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B89270:
    ctx.execute_vfpu_vcmp_ct<111u, 32u, 1u, 14u>();
    rt.unsupported(0x08B89274u, 0x006B636Fu, "special? not lowered yet"); return;
L_08B89278:
    rt.unsupported(0x08B89278u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B89288:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B8928Cu, 0x69206D61u, "unknown not lowered yet"); return;
L_08B892A0:
    rt.unsupported(0x08B892A0u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B892B4:
    rt.unsupported(0x08B892B4u, 0x6863614Du, "unknown not lowered yet"); return;
L_08B892D4:
    rt.unsupported(0x08B892D4u, 0x70206F4Eu, "unknown not lowered yet"); return;
L_08B892E0:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08B892E8u, 0x20736920u, "unknown not lowered yet"); return;
L_08B892F4:
    rt.unsupported(0x08B892F4u, 0x74726956u, "unknown not lowered yet"); return;
L_08B8930C:
    ctx.execute_vfpu_vscl_ct<65u, 100u, 118u, 1u>();
    rt.unsupported(0x08B89310u, 0x73697472u, "unknown not lowered yet"); return;
L_08B8931C:
    ctx.execute_vfpu_compare3(83u, 114u, 109u, 1u, 6u);
    rt.unsupported(0x08B89320u, 0x20746E75u, "unknown not lowered yet"); return;
L_08B8932C:
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B89330u, 0x63696E75u, "vfpu0 not lowered yet"); return;
L_08B89340:
    rt.unsupported(0x08B89340u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B89350:
    rt.unsupported(0x08B89350u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B89364:
    rt.unsupported(0x08B89364u, 0x20646142u, "unknown not lowered yet"); return;
L_08B89370:
    rt.unsupported(0x08B89370u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B89398:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08B8939Cu, 0x6E697373u, "vfpu3 not lowered yet"); return;
L_08B893C0:
    rt.unsupported(0x08B893C0u, 0x62696C2Eu, "vfpu0 not lowered yet"); return;
L_08B893E0:
    ctx.execute_vfpu_vscl_ct<65u, 116u, 116u, 1u>();
    rt.unsupported(0x08B893E4u, 0x6974706Du, "unknown not lowered yet"); return;
L_08B89420:
    rt.unsupported(0x08B89420u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B89448:
    rt.unsupported(0x08B89448u, 0x636E7546u, "vfpu0 not lowered yet"); return;
L_08B89464:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B89468u, 0x2065726Fu, "unknown not lowered yet"); return;
L_08B89474:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    rt.unsupported(0x08B89478u, 0x726F7463u, "unknown not lowered yet"); return;
L_08B89488:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    rt.unsupported(0x08B8948Cu, 0x20726F20u, "unknown not lowered yet"); return;
L_08B894A4:
    rt.unsupported(0x08B894A4u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B894BC:
    rt.unsupported(0x08B894BCu, 0x62206F4Eu, "vfpu0 not lowered yet"); return;
L_08B894D8:
    rt.unsupported(0x08B894D8u, 0x72646441u, "unknown not lowered yet"); return;
L_08B89508:
    rt.unsupported(0x08B89508u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B89528:
    rt.unsupported(0x08B89528u, 0x6B636F53u, "unknown not lowered yet"); return;
L_08B89548:
    rt.unsupported(0x08B89548u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B89560:
    ctx.gpr[14] = (ctx.gpr[27] + static_cast<std::uint32_t>(24899));
    ctx.execute_vfpu_vscl_ct<116u, 32u, 115u, 1u>();
    rt.unsupported(0x08B89568u, 0x6120646Eu, "vfpu0 not lowered yet"); return;
L_08B89584:
    rt.unsupported(0x08B89584u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B89598:
    rt.unsupported(0x08B89598u, 0x72646441u, "unknown not lowered yet"); return;
L_08B895B0:
    rt.unsupported(0x08B895B0u, 0x74666F53u, "unknown not lowered yet"); return;
L_08B895D4:
    // nop
    rt.unsupported(0x08B895DCu, 0x08B583ECu, "control flow in delay slot"); return;
L_08B8964C:
    rt.unsupported(0x08B89650u, 0x08B58630u, "control flow in delay slot"); return;
L_08B8965C:
    rt.unsupported(0x08B89660u, 0x08B58680u, "control flow in delay slot"); return;
L_08B897B4:
    rt.unsupported(0x08B897B8u, 0x08B58D9Cu, "control flow in delay slot"); return;
L_08B89800:
    rt.unsupported(0x08B89804u, 0x08B58D9Cu, "control flow in delay slot"); return;
L_08B89858:
    ctx.execute_vfpu_vhdp(45u, 73u, 110u, 1u);
    // nop
    jump_target = ctx.gpr[3];
    ctx.gpr[13] = (0x08B89868u);
    rt.unsupported(0x08B89864u, 0x004E614Eu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B89868u) goto L_08B89868;
    return;
L_08B89868:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B89870u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B8987C:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B89884;
L_08B89884:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B8988Cu, 0x42413938u, "unknown not lowered yet"); return;
L_08B89898:
    rt.unsupported(0x08B89898u, 0x20677562u, "unknown not lowered yet"); return;
L_08B89AB0:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B89AB8u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B89AC4:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B89ACC;
L_08B89ACC:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B89AD4u, 0x42413938u, "unknown not lowered yet"); return;
L_08B89AE0:
    rt.unsupported(0x08B89AE0u, 0x20677562u, "unknown not lowered yet"); return;
L_08B89C68:
    rt.unsupported(0x08B89C68u, 0x0000002Eu, "special? not lowered yet"); return;
L_08B89C6C:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    rt.unsupported(0x08B89C74u, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08B89C88:
    rt.unsupported(0x08B89C88u, 0x40C90FDBu, "unknown not lowered yet"); return;
L_08B89CB8:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[25]) < 17162 ? 1u : 0u);
    rt.unsupported(0x08B89CBCu, 0x6E757220u, "vfpu3 not lowered yet"); return;
L_08B89CCC:
    ctx.execute_vfpu_vminmax(116u, 101u, 114u, 1u, false);
    rt.unsupported(0x08B89CD0u, 0x74616E69u, "unknown not lowered yet"); return;
L_08B89D04:
    rt.unsupported(0x08B89D04u, 0x75746572u, "unknown not lowered yet"); return;
L_08B89D38:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    rt.unsupported(0x08B89D40u, 0x72726520u, "unknown not lowered yet"); return;
L_08B89D7C:
    rt.unsupported(0x08B89D7Cu, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B89D9C:
    rt.unsupported(0x08B89D9Cu, 0x75702061u, "unknown not lowered yet"); return;
L_08B89DC0:
    rt.unsupported(0x08B89DC0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B89DD8:
    rt.unsupported(0x08B89DD8u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B89DF4:
    ctx.execute_vfpu_vscl_ct<102u, 114u, 101u, 1u>();
    rt.unsupported(0x08B89DF8u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B89E2C:
    rt.unsupported(0x08B89E2Cu, 0x203A7325u, "unknown not lowered yet"); return;
L_08B89E88:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B89EA0;
L_08B89EA0:
    (void)(ctx.gpr[2] << 4u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    rt.unsupported(0x08B89EA8u, 0x04040404u, "regimm? not lowered yet"); return;
L_08B89ED8:
    rt.unsupported(0x08B89ED8u, 0x06060606u, "regimm? not lowered yet"); return;
L_08B89FA0:
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(31614), ctx.gpr[20]));
    ctx.gpr[23] = (ctx.gpr[19] & 34931u);
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    rt.unsupported(0x08B89FB4u, 0x44454B46u, "unsupported CFC1 control register"); return;
    goto L_08B89FB8;
L_08B89FB8:
    rt.unsupported(0x08B89FB8u, 0x62733C00u, "vfpu0 not lowered yet"); return;
L_08B89FC4:
    if (ctx.gpr[27] != ctx.gpr[5]) {
    rt.unsupported(0x08B89FC8u, 0x4D657661u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 107u, 0x08BA2D14u>(ctx, &aot_mem); return;
    }
    goto L_08B89FCC;
L_08B89FC8:
    rt.unsupported(0x08B89FC8u, 0x4D657661u, "unknown not lowered yet"); return;
L_08B89FCC:
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[14]);
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(31614))))));
    ctx.gpr[18] = (ctx.gpr[17] & 34163u);
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    rt.unsupported(0x08B89FE4u, 0x44454B46u, "unsupported CFC1 control register"); return;
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8A000;
L_08B8A000:
    rt.unsupported(0x08B8A000u, 0x0032FFF9u, "special? not lowered yet"); return;
L_08B8A00C:
    rt.unsupported(0x08B8A00Cu, 0x050A0609u, "regimm? not lowered yet"); return;
L_08B8A540:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) > static_cast<std::int32_t>(0u) ? ctx.gpr[4] : 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    (void)(ctx.lo);
    rt.unsupported(0x08B8A54Cu, 0x0084201Eu, "special? not lowered yet"); return;
L_08B8A588:
    ctx.lo = ctx.gpr[4];
    rt.unsupported(0x08B8A58Cu, 0x00972014u, "special? not lowered yet"); return;
L_08B8A5D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8A658;
L_08B8A658:
    // nop
    // nop
    goto L_08B8A660;
L_08B8A660:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8A718;
L_08B8A718:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8A738;
L_08B8A738:
    // nop
    goto L_08B8A73C;
L_08B8A73C:
    // nop
    goto L_08B8A740;
L_08B8A740:
    // nop
    goto L_08B8A744;
L_08B8A744:
    // nop
    goto L_08B8A748;
L_08B8A748:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8A790;
L_08B8A790:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8A7B8;
L_08B8A7B8:
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    ctx.gpr[19] = (13107u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    goto L_08B8A830;
L_08B8A830:
    rt.unsupported(0x08B8A834u, 0x08BAA6E0u, "control flow in delay slot"); return;
L_08B8A85C:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    ctx.gpr[19] = (ctx.gpr[10] < static_cast<std::uint32_t>(17740) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 72u, 0x08B9B11Cu>(ctx, &aot_mem); return;
    }
    goto L_08B8A864;
L_08B8A864:
    ctx.gpr[16] = (ctx.gpr[17] | 12597u);
    rt.unsupported(0x08B8A868u, 0x41544731u, "unknown not lowered yet"); return;
L_08B8A898:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B8A8B0;
L_08B8A8B0:
    rt.unsupported(0x08B8A8B0u, 0x000001F4u, "special? not lowered yet"); return;
L_08B8AC1C:
    jump_target = 0u;
    rt.unsupported(0x08B8AC20u, 0x000003E8u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B8AC38:
    ctx.gpr[1] = (0u << 18u);
    // nop
    (void)(ctx.hi);
    rt.unsupported(0x08B8AC44u, 0x000003E8u, "special? not lowered yet"); return;
L_08B8AC54:
    // nop
    rt.unsupported(0x08B8AC58u, 0x000003E8u, "special? not lowered yet"); return;
L_08B8AC70:
    rt.unsupported(0x08B8AC70u, 0x000003E8u, "special? not lowered yet"); return;
L_08B8AC8C:
    (void)(ctx.hi);
    jump_target = 0u;
    rt.unsupported(0x08B8AC94u, 0x000003E8u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B8AE14:
    jump_target = 0u;
    rt.unsupported(0x08B8AE18u, 0x000003E8u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B8AE20:
    rt.unsupported(0x08B8AE24u, 0x08BAACD4u, "control flow in delay slot"); return;
L_08B8AFAC:
    // nop
    rt.unsupported(0x08B8AFB4u, 0x08BAAE10u, "control flow in delay slot"); return;
L_08B8B0A8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (0u != 0u) (void)(0u);
    // nop
    rt.unsupported(0x08B8B0B8u, 0x08BAAEE0u, "control flow in delay slot"); return;
L_08B8B0C4:
    // nop
    rt.unsupported(0x08B8B0CCu, 0x08BAAEF0u, "control flow in delay slot"); return;
L_08B8B0E0:
    // nop
    ctx.pc = 0x02EABC00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B8B0FC:
    rt.unsupported(0x08B8B0FCu, 0x00000001u, "special? not lowered yet"); return;
L_08B8B118:
    rt.unsupported(0x08B8B11Cu, 0x08BAAF30u, "control flow in delay slot"); return;
L_08B8B488:
    rt.unsupported(0x08B8B488u, 0x43534944u, "unknown not lowered yet"); return;
L_08B8B494:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B8B498u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B8B4A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B8B4A4u) goto L_08B8B4A4;
    return;
L_08B8B4A4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8B508;
L_08B8B508:
    // nop
    ctx.pc = 0x02EACB70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B8B534:
    // nop
    // nop
    ctx.pc = 0x02EACC30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B8B550:
    // nop
    ctx.pc = 0x02EACC90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B8B558:
    jump_target = 0u;
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B8B56C:
    (void)(0u >> 0u);
    jump_target = 0u;
    ctx.gpr[31] = (0x08B8B578u);
    (void)(0u >> (0u & 31u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B8B578u) goto L_08B8B578;
    return;
L_08B8B578:
    rt.unsupported(0x08B8B578u, 0x00000005u, "special? not lowered yet"); return;
L_08B8B588:
    (void)(0u >> 0u);
    (void)(0u >> 0u);
    rt.unsupported(0x08B8B590u, 0x00000001u, "special? not lowered yet"); return;
L_08B8B5A4:
    (void)(0u >> 0u);
    rt.unsupported(0x08B8B5A8u, 0x00000001u, "special? not lowered yet"); return;
L_08B8B5B8:
    (void)(0u << (0u & 31u));
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B8B5CCu, 0x00000001u, "special? not lowered yet"); return;
L_08B8B5E8:
    // nop
    rt.unsupported(0x08B8B5ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B8B618:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> 0u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B8B630u, 0x00000001u, "special? not lowered yet"); return;
L_08B8B648:
    (void)(0u >> 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u >> 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8B678;
L_08B8B678:
    (void)(0u >> 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8B6A8;
L_08B8B6A8:
    rt.unsupported(0x08B8B6A8u, 0x00000001u, "special? not lowered yet"); return;
L_08B8B6D8:
    rt.unsupported(0x08B8B6D8u, 0x00000001u, "special? not lowered yet"); return;
L_08B8B708:
    rt.unsupported(0x08B8B708u, 0x00000001u, "special? not lowered yet"); return;
L_08B8B738:
    // nop
    // nop
    goto L_08B8B740;
L_08B8B740:
    // nop
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    // nop
    goto L_08B8B758;
L_08B8B758:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8B788;
L_08B8B788:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8B7B8;
L_08B8B7B8:
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    goto L_08B8B7C8;
L_08B8B7C8:
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B8B7E8;
L_08B8B7E8:
    // nop
    rt.unsupported(0x08B8B7ECu, 0x42700000u, "unknown not lowered yet"); return;
L_08B8B87C:
    rt.unsupported(0x08B8B87Cu, 0x42C80000u, "unknown not lowered yet"); return;
L_08B8B8C4:
    rt.unsupported(0x08B8B8C4u, 0xC1C80000u, "unknown not lowered yet"); return;
L_08B8B910:
    rt.unsupported(0x08B8B910u, 0x40000000u, "unknown not lowered yet"); return;
L_08B8B93C:
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B8B964;
L_08B8B964:
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B8B974u, 0x40000000u, "unknown not lowered yet"); return;
L_08B8B9A4:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[10] = (15729u << 16u);
    goto L_08B8B9C0;
L_08B8B9C0:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08B8B9C8;
L_08B8B9C8:
    // nop
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B8B9DC;
L_08B8B9DC:
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B8B9EC;
L_08B8B9EC:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    goto L_08B8B9F8;
L_08B8B9F8:
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B8BA10;
L_08B8BA10:
    // nop
    goto L_08B8BA14;
L_08B8BA14:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BA30;
L_08B8BA30:
    // nop
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BA50;
L_08B8BA50:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BA84;
L_08B8BA84:
    // nop
    // nop
    // nop
    goto L_08B8BA90;
L_08B8BA90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BAD0;
L_08B8BAD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BB10;
L_08B8BB10:
    (void)(ctx.gpr[5] << 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (0u & 31u)));
    goto L_08B8BB1C;
L_08B8BB1C:
    (void)(ctx.gpr[7] << 0u);
    rt.unsupported(0x08B8BB20u, 0x00000005u, "special? not lowered yet"); return;
L_08B8BB34:
    (void)(ctx.gpr[9] << 0u);
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B8BB3Cu, 0x00090005u, "special? not lowered yet"); return;
L_08B8BB44:
    (void)(0u >> (0u & 31u));
    (void)(ctx.gpr[5] >> (0u & 31u));
    (void)(ctx.gpr[6] << 0u);
    rt.unsupported(0x08B8BB50u, 0x00000001u, "special? not lowered yet"); return;
L_08B8BB6C:
    rt.unsupported(0x08B8BB6Cu, 0x00080005u, "special? not lowered yet"); return;
L_08B8BB70:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[5] = (58196u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BB88;
L_08B8BB88:
    ctx.gpr[5] = (58196u << 16u);
    ctx.gpr[5] = (58196u << 16u);
    // nop
    goto L_08B8BB94;
L_08B8BB94:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    goto L_08B8BBA0;
L_08B8BBA0:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B8BBA4u, 0x00010005u, "special? not lowered yet"); return;
L_08B8BBB8:
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BBBC;
L_08B8BBBC:
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B8BBD8;
L_08B8BBD8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BBE4;
L_08B8BBE4:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BBF8;
L_08B8BBF8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BC0C;
L_08B8BC0C:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BC18;
L_08B8BC18:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BC34;
L_08B8BC34:
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B8BC38;
L_08B8BC38:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BC58;
L_08B8BC58:
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B8BC5C;
L_08B8BC5C:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BC78;
L_08B8BC78:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BC84;
L_08B8BC84:
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B8BC98;
L_08B8BC98:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B8BCAC;
L_08B8BCAC:
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BCB8;
L_08B8BCB8:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B8BCC0;
L_08B8BCC0:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BCD4;
L_08B8BCD4:
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BCD8;
L_08B8BCD8:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BCF4;
L_08B8BCF4:
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B8BCF8;
L_08B8BCF8:
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B8BCFC;
L_08B8BCFC:
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BD18;
L_08B8BD18:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B8BD24;
L_08B8BD24:
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BD2C;
L_08B8BD2C:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BD38;
L_08B8BD38:
    (void)(ctx.gpr[2] << 0u);
    rt.unsupported(0x08B8BD3Cu, 0x00010001u, "special? not lowered yet"); return;
L_08B8BD4C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (0u & 31u)));
    (void)(ctx.gpr[7] >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 0u));
    (void)(ctx.gpr[7] >> (0u & 31u));
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B8BD60u, 0x00040001u, "special? not lowered yet"); return;
L_08B8BD70:
    (void)(0u >> 0u);
    goto L_08B8BD74;
L_08B8BD74:
    (void)(ctx.gpr[5] >> (0u & 31u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (0u & 31u)));
    (void)(ctx.gpr[5] << (0u & 31u));
    goto L_08B8BD80;
L_08B8BD80:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B8BD98;
L_08B8BD98:
    ctx.gpr[21] = (49807u << 16u);
    goto L_08B8BD9C;
L_08B8BD9C:
    ctx.gpr[21] = (49807u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    goto L_08B8BDB0;
L_08B8BDB0:
    (void)(ctx.gpr[1] << 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 0u));
    (void)(ctx.gpr[5] << (0u & 31u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (0u & 31u)));
    goto L_08B8BDC4;
L_08B8BDC4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (0u & 31u)));
    // nop
    // nop
    goto L_08B8BDD0;
L_08B8BDD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 0u);
    rt.unsupported(0x08B8BDE8u, 0x01010101u, "special? not lowered yet"); return;
L_08B8BDEC:
    rt.unsupported(0x08B8BDECu, 0x01010101u, "special? not lowered yet"); return;
L_08B8BE14:
    // nop
    (void)(0u << 0u);
    rt.unsupported(0x08B8BE1Cu, 0x01010101u, "special? not lowered yet"); return;
L_08B8BE3C:
    rt.unsupported(0x08B8BE3Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B8BE4C:
    rt.unsupported(0x08B8BE4Cu, 0x01010101u, "special? not lowered yet"); return;
L_08B8BE64:
    (void)(0u << 0u);
    goto L_08B8BE68;
L_08B8BE68:
    rt.unsupported(0x08B8BE68u, 0x01010101u, "special? not lowered yet"); return;
L_08B8BE84:
    rt.unsupported(0x08B8BE84u, 0x00000101u, "special? not lowered yet"); return;
L_08B8BE8C:
    rt.unsupported(0x08B8BE8Cu, 0x00010101u, "special? not lowered yet"); return;
L_08B8BEA0:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BEB4;
L_08B8BEB4:
    (void)(ctx.gpr[1] << 0u);
    // nop
    goto L_08B8BEBC;
L_08B8BEBC:
    rt.unsupported(0x08B8BEBCu, 0x00000101u, "special? not lowered yet"); return;
L_08B8BEDC:
    rt.unsupported(0x08B8BEDCu, 0x00000101u, "special? not lowered yet"); return;
L_08B8BF04:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B8BF08u, 0x00000101u, "special? not lowered yet"); return;
L_08B8BF2C:
    rt.unsupported(0x08B8BF2Cu, 0x00000101u, "special? not lowered yet"); return;
L_08B8BF30:
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BF40;
L_08B8BF40:
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BF50;
L_08B8BF50:
    // nop
    goto L_08B8BF54;
L_08B8BF54:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(839u << 16u);
    (void)(0u << 16u);
    goto L_08B8BF78;
L_08B8BF78:
    rt.unsupported(0x08B8BF78u, 0x00000001u, "special? not lowered yet"); return;
L_08B8BF7C:
    rt.unsupported(0x08B8BF7Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B8BF8C:
    rt.unsupported(0x08B8BF8Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B8BFA0:
    rt.unsupported(0x08B8BFA0u, 0x00001770u, "special? not lowered yet"); return;
L_08B8BFA4:
    rt.unsupported(0x08B8BFA4u, 0x00001770u, "special? not lowered yet"); return;
L_08B8BFC0:
    // nop
    // nop
    // nop
    goto L_08B8BFCC;
L_08B8BFCC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BFE4;
L_08B8BFE4:
    // nop
    // nop
    // nop
    // nop
    goto L_08B8BFF4;
L_08B8BFF4:
    // nop
    // nop
    // nop
    ctx.pc = 0x08B8C000u; return;
}

void recomp_unit_0225(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0225_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_225(Runtime &runtime) {
    runtime.register_generated_unit(225u, 0x08B88000u, 16384u, &recomp_unit_0225, &recomp_unit_0225_entry);
    runtime.register_function(0x08B88000u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88008u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88018u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88024u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88030u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8803Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88044u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88050u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88058u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88070u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B881C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88250u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88268u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8827Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88280u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8828Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8829Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B882A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88360u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88384u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B883C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B883E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B883E8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B883FCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88400u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88418u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88428u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88430u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8843Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8844Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88450u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88458u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88464u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8846Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8847Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B884E8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B884F8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88500u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88528u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88538u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88544u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88578u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B885A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B885CCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88700u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88708u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88718u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88724u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8872Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88740u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88760u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88770u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88790u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8879Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B887A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B887CCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88800u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88828u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88854u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88884u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888CCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888ECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B888F4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8890Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88924u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8893Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88948u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88958u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88960u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88974u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88980u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8898Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88998u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889B0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889BCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889D0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889E4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B889F8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88A14u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88A34u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88A50u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88A70u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88A90u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88A94u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88AA4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88AB8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88ACCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88BCCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88BD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88BE0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88BECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88BF8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C04u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C1Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C28u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C48u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C54u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C58u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C60u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C8Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88C90u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88CA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88CA8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88DA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88F48u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88F78u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88F84u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88FB0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88FBCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88FD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B88FE8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89000u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8900Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89028u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89034u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8903Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89048u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89050u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8905Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89060u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8906Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89080u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89094u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B890A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B890B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B890CCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B890E4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B890F0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89104u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89114u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89124u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89134u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89148u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89168u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8917Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89194u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B891A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B891B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B891CCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B891DCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B891F4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89204u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89210u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89220u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89234u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89250u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89264u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89270u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89278u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89288u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B892A0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B892B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B892D4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B892E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B892F4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8930Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8931Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8932Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89340u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89350u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89364u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89370u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89398u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B893C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B893E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89420u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89448u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89464u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89474u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89488u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B894A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B894BCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B894D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89508u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89528u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89548u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89560u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89584u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89598u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B895B0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B895D4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8964Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8965Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B897B4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89800u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89858u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89868u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8987Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89884u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89898u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89AB0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89AC4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89ACCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89AE0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89C68u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89C6Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89C88u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89CB8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89CCCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89D04u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89D38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89D7Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89D9Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89DC0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89DD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89DF4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89E2Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89E88u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89EA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89ED8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89FA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89FB8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89FC4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89FC8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B89FCCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A000u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A00Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A540u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A588u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A5D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A658u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A660u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A718u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A738u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A73Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A740u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A744u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A748u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A790u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A7B8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A830u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A85Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A864u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A898u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8A8B0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AC1Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AC38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AC54u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AC70u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AC8Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AE14u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AE20u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8AFACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B0A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B0C4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B0E0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B0FCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B118u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B488u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B494u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B4A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B508u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B534u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B550u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B558u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B56Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B578u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B588u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B5A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B5B8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B5E8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B618u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B648u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B678u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B6A8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B6D8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B708u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B738u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B740u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B758u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B788u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B7B8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B7C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B7E8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B87Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B8C4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B910u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B93Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B964u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B9A4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B9C0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B9C8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B9DCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B9ECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8B9F8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BA10u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BA14u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BA30u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BA50u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BA84u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BA90u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BAD0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB10u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB1Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB34u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB44u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB6Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB70u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB88u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BB94u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BBA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BBB8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BBBCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BBD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BBE4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BBF8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC0Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC18u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC34u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC58u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC5Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC78u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC84u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BC98u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCACu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCB8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCC0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCD4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCD8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCF4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCF8u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BCFCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD18u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD24u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD2Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD38u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD4Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD70u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD74u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD80u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD98u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BD9Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BDB0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BDC4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BDD0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BDECu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE14u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE3Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE4Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE64u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE68u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE84u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BE8Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BEA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BEB4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BEBCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BEDCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF04u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF2Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF30u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF40u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF50u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF54u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF78u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF7Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BF8Cu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BFA0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BFA4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BFC0u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BFCCu, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BFE4u, &recomp_unit_0225, "recomp_unit_0225");
    runtime.register_function(0x08B8BFF4u, &recomp_unit_0225, "recomp_unit_0225");
}
} // namespace psprecomp
