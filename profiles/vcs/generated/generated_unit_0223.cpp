#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0223[4094] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 171, 0, 172, 0, 173,
    174, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 274, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 309, 310, 0, 0, 0, 0, 311, 312, 313, 0, 0, 0, 314, 0, 315, 0, 0, 316, 317, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0,
    321, 322, 0, 0, 323, 0, 324, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333,
    0, 0, 334, 335, 336, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363,
};
void recomp_unit_0223_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B80000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0223[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B80000;
    case 2u: goto L_08B80014;
    case 3u: goto L_08B80020;
    case 4u: goto L_08B8003C;
    case 5u: goto L_08B80044;
    case 6u: goto L_08B80064;
    case 7u: goto L_08B8006C;
    case 8u: goto L_08B8008C;
    case 9u: goto L_08B80094;
    case 10u: goto L_08B800B4;
    case 11u: goto L_08B800BC;
    case 12u: goto L_08B800DC;
    case 13u: goto L_08B800E4;
    case 14u: goto L_08B80104;
    case 15u: goto L_08B8010C;
    case 16u: goto L_08B8012C;
    case 17u: goto L_08B80134;
    case 18u: goto L_08B80140;
    case 19u: goto L_08B80154;
    case 20u: goto L_08B8015C;
    case 21u: goto L_08B8017C;
    case 22u: goto L_08B801A4;
    case 23u: goto L_08B801CC;
    case 24u: goto L_08B801F4;
    case 25u: goto L_08B8021C;
    case 26u: goto L_08B80244;
    case 27u: goto L_08B8026C;
    case 28u: goto L_08B80274;
    case 29u: goto L_08B80294;
    case 30u: goto L_08B8029C;
    case 31u: goto L_08B802BC;
    case 32u: goto L_08B802E4;
    case 33u: goto L_08B8030C;
    case 34u: goto L_08B80314;
    case 35u: goto L_08B80334;
    case 36u: goto L_08B8033C;
    case 37u: goto L_08B8035C;
    case 38u: goto L_08B80364;
    case 39u: goto L_08B80384;
    case 40u: goto L_08B8038C;
    case 41u: goto L_08B803AC;
    case 42u: goto L_08B803B4;
    case 43u: goto L_08B803D4;
    case 44u: goto L_08B803DC;
    case 45u: goto L_08B803FC;
    case 46u: goto L_08B80404;
    case 47u: goto L_08B80424;
    case 48u: goto L_08B8042C;
    case 49u: goto L_08B8044C;
    case 50u: goto L_08B80454;
    case 51u: goto L_08B80474;
    case 52u: goto L_08B8047C;
    case 53u: goto L_08B8049C;
    case 54u: goto L_08B804A4;
    case 55u: goto L_08B804C4;
    case 56u: goto L_08B804CC;
    case 57u: goto L_08B804EC;
    case 58u: goto L_08B804F4;
    case 59u: goto L_08B80514;
    case 60u: goto L_08B8051C;
    case 61u: goto L_08B8053C;
    case 62u: goto L_08B80544;
    case 63u: goto L_08B80564;
    case 64u: goto L_08B8056C;
    case 65u: goto L_08B8058C;
    case 66u: goto L_08B80594;
    case 67u: goto L_08B805B4;
    case 68u: goto L_08B805BC;
    case 69u: goto L_08B805DC;
    case 70u: goto L_08B805E4;
    case 71u: goto L_08B80604;
    case 72u: goto L_08B8060C;
    case 73u: goto L_08B8062C;
    case 74u: goto L_08B80654;
    case 75u: goto L_08B8067C;
    case 76u: goto L_08B806A4;
    case 77u: goto L_08B806CC;
    case 78u: goto L_08B806D4;
    case 79u: goto L_08B806F4;
    case 80u: goto L_08B806FC;
    case 81u: goto L_08B8071C;
    case 82u: goto L_08B80724;
    case 83u: goto L_08B80744;
    case 84u: goto L_08B8074C;
    case 85u: goto L_08B8076C;
    case 86u: goto L_08B80794;
    case 87u: goto L_08B807BC;
    case 88u: goto L_08B807E4;
    case 89u: goto L_08B8080C;
    case 90u: goto L_08B80834;
    case 91u: goto L_08B8085C;
    case 92u: goto L_08B80884;
    case 93u: goto L_08B808AC;
    case 94u: goto L_08B808D4;
    case 95u: goto L_08B808FC;
    case 96u: goto L_08B80924;
    case 97u: goto L_08B8094C;
    case 98u: goto L_08B80974;
    case 99u: goto L_08B8097C;
    case 100u: goto L_08B8099C;
    case 101u: goto L_08B809A4;
    case 102u: goto L_08B809C4;
    case 103u: goto L_08B809CC;
    case 104u: goto L_08B809EC;
    case 105u: goto L_08B809F4;
    case 106u: goto L_08B80A14;
    case 107u: goto L_08B80A3C;
    case 108u: goto L_08B80A64;
    case 109u: goto L_08B80A8C;
    case 110u: goto L_08B80AB4;
    case 111u: goto L_08B80ADC;
    case 112u: goto L_08B80B04;
    case 113u: goto L_08B80B2C;
    case 114u: goto L_08B80B54;
    case 115u: goto L_08B80B7C;
    case 116u: goto L_08B80BA4;
    case 117u: goto L_08B80BCC;
    case 118u: goto L_08B80BF4;
    case 119u: goto L_08B80C1C;
    case 120u: goto L_08B80C24;
    case 121u: goto L_08B80C44;
    case 122u: goto L_08B80C4C;
    case 123u: goto L_08B80C6C;
    case 124u: goto L_08B80C74;
    case 125u: goto L_08B80C94;
    case 126u: goto L_08B80C9C;
    case 127u: goto L_08B80CBC;
    case 128u: goto L_08B80CC4;
    case 129u: goto L_08B80CE4;
    case 130u: goto L_08B80CEC;
    case 131u: goto L_08B80D0C;
    case 132u: goto L_08B80D14;
    case 133u: goto L_08B80D34;
    case 134u: goto L_08B80D5C;
    case 135u: goto L_08B80D84;
    case 136u: goto L_08B80DAC;
    case 137u: goto L_08B80DD4;
    case 138u: goto L_08B80DFC;
    case 139u: goto L_08B80E24;
    case 140u: goto L_08B80E4C;
    case 141u: goto L_08B80E74;
    case 142u: goto L_08B80E9C;
    case 143u: goto L_08B80EC4;
    case 144u: goto L_08B80ED4;
    case 145u: goto L_08B80EEC;
    case 146u: goto L_08B80EF8;
    case 147u: goto L_08B80F14;
    case 148u: goto L_08B80F3C;
    case 149u: goto L_08B80F60;
    case 150u: goto L_08B80F80;
    case 151u: goto L_08B80F88;
    case 152u: goto L_08B81218;
    case 153u: goto L_08B81498;
    case 154u: goto L_08B814A4;
    case 155u: goto L_08B814B0;
    case 156u: goto L_08B814C4;
    case 157u: goto L_08B814D8;
    case 158u: goto L_08B81728;
    case 159u: goto L_08B81760;
    case 160u: goto L_08B81774;
    case 161u: goto L_08B8177C;
    case 162u: goto L_08B81794;
    case 163u: goto L_08B817A8;
    case 164u: goto L_08B817B0;
    case 165u: goto L_08B817BC;
    case 166u: goto L_08B817C4;
    case 167u: goto L_08B817D0;
    case 168u: goto L_08B817D8;
    case 169u: goto L_08B817E0;
    case 170u: goto L_08B817E8;
    case 171u: goto L_08B817EC;
    case 172u: goto L_08B817F4;
    case 173u: goto L_08B817FC;
    case 174u: goto L_08B81800;
    case 175u: goto L_08B81808;
    case 176u: goto L_08B81818;
    case 177u: goto L_08B81820;
    case 178u: goto L_08B81828;
    case 179u: goto L_08B8182C;
    case 180u: goto L_08B81834;
    case 181u: goto L_08B8183C;
    case 182u: goto L_08B81844;
    case 183u: goto L_08B818A8;
    case 184u: goto L_08B818BC;
    case 185u: goto L_08B81B88;
    case 186u: goto L_08B81B94;
    case 187u: goto L_08B81BA4;
    case 188u: goto L_08B81BAC;
    case 189u: goto L_08B81BB8;
    case 190u: goto L_08B81BD0;
    case 191u: goto L_08B81BF8;
    case 192u: goto L_08B81C1C;
    case 193u: goto L_08B81C44;
    case 194u: goto L_08B81C64;
    case 195u: goto L_08B81C84;
    case 196u: goto L_08B81CA4;
    case 197u: goto L_08B81CC0;
    case 198u: goto L_08B81CC8;
    case 199u: goto L_08B81CE4;
    case 200u: goto L_08B81CF4;
    case 201u: goto L_08B81D10;
    case 202u: goto L_08B81D30;
    case 203u: goto L_08B81D4C;
    case 204u: goto L_08B81D68;
    case 205u: goto L_08B81D7C;
    case 206u: goto L_08B81D90;
    case 207u: goto L_08B81D9C;
    case 208u: goto L_08B81DB8;
    case 209u: goto L_08B81DD4;
    case 210u: goto L_08B81DF8;
    case 211u: goto L_08B81E14;
    case 212u: goto L_08B81E34;
    case 213u: goto L_08B81E54;
    case 214u: goto L_08B81E78;
    case 215u: goto L_08B81E94;
    case 216u: goto L_08B81F00;
    case 217u: goto L_08B81F20;
    case 218u: goto L_08B81F28;
    case 219u: goto L_08B81F34;
    case 220u: goto L_08B81F48;
    case 221u: goto L_08B81F5C;
    case 222u: goto L_08B81F94;
    case 223u: goto L_08B820F0;
    case 224u: goto L_08B82118;
    case 225u: goto L_08B82324;
    case 226u: goto L_08B82340;
    case 227u: goto L_08B82380;
    case 228u: goto L_08B82394;
    case 229u: goto L_08B824D0;
    case 230u: goto L_08B824E8;
    case 231u: goto L_08B824FC;
    case 232u: goto L_08B82510;
    case 233u: goto L_08B82560;
    case 234u: goto L_08B82588;
    case 235u: goto L_08B825D0;
    case 236u: goto L_08B825EC;
    case 237u: goto L_08B82610;
    case 238u: goto L_08B82624;
    case 239u: goto L_08B82638;
    case 240u: goto L_08B8264C;
    case 241u: goto L_08B82660;
    case 242u: goto L_08B82674;
    case 243u: goto L_08B82688;
    case 244u: goto L_08B8269C;
    case 245u: goto L_08B826B8;
    case 246u: goto L_08B826CC;
    case 247u: goto L_08B826E0;
    case 248u: goto L_08B826F8;
    case 249u: goto L_08B827D0;
    case 250u: goto L_08B827E4;
    case 251u: goto L_08B82918;
    case 252u: goto L_08B82980;
    case 253u: goto L_08B829A0;
    case 254u: goto L_08B829B8;
    case 255u: goto L_08B829D0;
    case 256u: goto L_08B829F4;
    case 257u: goto L_08B82A14;
    case 258u: goto L_08B82A28;
    case 259u: goto L_08B82A3C;
    case 260u: goto L_08B82A50;
    case 261u: goto L_08B82A6C;
    case 262u: goto L_08B82A9C;
    case 263u: goto L_08B82AB8;
    case 264u: goto L_08B82ADC;
    case 265u: goto L_08B82B00;
    case 266u: goto L_08B82D58;
    case 267u: goto L_08B82E18;
    case 268u: goto L_08B82E24;
    case 269u: goto L_08B82E2C;
    case 270u: goto L_08B82E40;
    case 271u: goto L_08B82E60;
    case 272u: goto L_08B82E80;
    case 273u: goto L_08B82E94;
    case 274u: goto L_08B82E98;
    case 275u: goto L_08B82EA4;
    case 276u: goto L_08B82EB4;
    case 277u: goto L_08B82EBC;
    case 278u: goto L_08B82EC4;
    case 279u: goto L_08B82ED0;
    case 280u: goto L_08B82ED8;
    case 281u: goto L_08B82FC0;
    case 282u: goto L_08B82FDC;
    case 283u: goto L_08B83000;
    case 284u: goto L_08B83018;
    case 285u: goto L_08B83030;
    case 286u: goto L_08B830C8;
    case 287u: goto L_08B830DC;
    case 288u: goto L_08B83128;
    case 289u: goto L_08B8313C;
    case 290u: goto L_08B83150;
    case 291u: goto L_08B83164;
    case 292u: goto L_08B83178;
    case 293u: goto L_08B83200;
    case 294u: goto L_08B83208;
    case 295u: goto L_08B83214;
    case 296u: goto L_08B83228;
    case 297u: goto L_08B83240;
    case 298u: goto L_08B83254;
    case 299u: goto L_08B83268;
    case 300u: goto L_08B83280;
    case 301u: goto L_08B83290;
    case 302u: goto L_08B83298;
    case 303u: goto L_08B832A8;
    case 304u: goto L_08B832B4;
    case 305u: goto L_08B832C0;
    case 306u: goto L_08B832D8;
    case 307u: goto L_08B832E0;
    case 308u: goto L_08B832F0;
    case 309u: goto L_08B83308;
    case 310u: goto L_08B8330C;
    case 311u: goto L_08B83320;
    case 312u: goto L_08B83324;
    case 313u: goto L_08B83328;
    case 314u: goto L_08B83338;
    case 315u: goto L_08B83340;
    case 316u: goto L_08B8334C;
    case 317u: goto L_08B83350;
    case 318u: goto L_08B83358;
    case 319u: goto L_08B83368;
    case 320u: goto L_08B83374;
    case 321u: goto L_08B83380;
    case 322u: goto L_08B83384;
    case 323u: goto L_08B83390;
    case 324u: goto L_08B83398;
    case 325u: goto L_08B8339C;
    case 326u: goto L_08B833AC;
    case 327u: goto L_08B833C4;
    case 328u: goto L_08B833EC;
    case 329u: goto L_08B83400;
    case 330u: goto L_08B83414;
    case 331u: goto L_08B83428;
    case 332u: goto L_08B83670;
    case 333u: goto L_08B8367C;
    case 334u: goto L_08B83688;
    case 335u: goto L_08B8368C;
    case 336u: goto L_08B83690;
    case 337u: goto L_08B83698;
    case 338u: goto L_08B836A0;
    case 339u: goto L_08B836B4;
    case 340u: goto L_08B836CC;
    case 341u: goto L_08B836E4;
    case 342u: goto L_08B83700;
    case 343u: goto L_08B8371C;
    case 344u: goto L_08B83734;
    case 345u: goto L_08B83748;
    case 346u: goto L_08B83770;
    case 347u: goto L_08B83778;
    case 348u: goto L_08B837E0;
    case 349u: goto L_08B837EC;
    case 350u: goto L_08B83F58;
    case 351u: goto L_08B83F64;
    case 352u: goto L_08B83F74;
    case 353u: goto L_08B83F84;
    case 354u: goto L_08B83FA0;
    case 355u: goto L_08B83FA8;
    case 356u: goto L_08B83FB0;
    case 357u: goto L_08B83FB8;
    case 358u: goto L_08B83FC0;
    case 359u: goto L_08B83FCC;
    case 360u: goto L_08B83FD4;
    case 361u: goto L_08B83FE4;
    case 362u: goto L_08B83FEC;
    case 363u: goto L_08B83FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B80000:
    // nop
    // nop
    rt.unsupported(0x08B80008u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80014:
    rt.unsupported(0x08B80014u, 0x45544157u, "cop1? not lowered yet"); return;
L_08B80020:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80030u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B8003C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 60u, 0x08B9254Cu>(ctx, &aot_mem); return;
    }
    goto L_08B80044;
L_08B80044:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80058u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80064:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 61u, 0x08B92574u>(ctx, &aot_mem); return;
    }
    goto L_08B8006C;
L_08B8006C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80080u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B8008C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 62u, 0x08B9259Cu>(ctx, &aot_mem); return;
    }
    goto L_08B80094;
L_08B80094:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B800A8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B800B4:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 63u, 0x08B925C4u>(ctx, &aot_mem); return;
    }
    goto L_08B800BC;
L_08B800BC:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B800D0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B800DC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 64u, 0x08B925ECu>(ctx, &aot_mem); return;
    }
    goto L_08B800E4;
L_08B800E4:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B800F8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80104:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 66u, 0x08B92614u>(ctx, &aot_mem); return;
    }
    goto L_08B8010C;
L_08B8010C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80120u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B8012C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B80130u, 0x454B4942u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 97u, 0x08B93634u>(ctx, &aot_mem); return;
    }
    goto L_08B80134;
L_08B80134:
    rt.unsupported(0x08B80134u, 0x41425F52u, "unknown not lowered yet"); return;
L_08B80140:
    // nop
    // nop
    rt.unsupported(0x08B80148u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80154:
    if (ctx.gpr[26] == ctx.gpr[14]) {
    rt.unsupported(0x08B80158u, 0x43555254u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 99u, 0x08B93E64u>(ctx, &aot_mem); return;
    }
    goto L_08B8015C;
L_08B8015C:
    rt.unsupported(0x08B8015Cu, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B8017C:
    rt.unsupported(0x08B8017Cu, 0x4C494850u, "unknown not lowered yet"); return;
L_08B801A4:
    rt.unsupported(0x08B801A4u, 0x4C4C414Du, "unknown not lowered yet"); return;
L_08B801CC:
    rt.unsupported(0x08B801CCu, 0x4C4C414Du, "unknown not lowered yet"); return;
L_08B801F4:
    rt.unsupported(0x08B801F4u, 0x4C4C414Du, "unknown not lowered yet"); return;
L_08B8021C:
    rt.unsupported(0x08B8021Cu, 0x4C4C414Du, "unknown not lowered yet"); return;
L_08B80244:
    rt.unsupported(0x08B80244u, 0x4C4C414Du, "unknown not lowered yet"); return;
L_08B8026C:
    rt.unsupported(0x08B80270u, 0x54412E44u, "control flow in delay slot"); return;
L_08B80274:
    rt.unsupported(0x08B80274u, 0x00000033u, "special? not lowered yet"); return;
L_08B80294:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 72u, 0x08B927A4u>(ctx, &aot_mem); return;
    }
    goto L_08B8029C;
L_08B8029C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B802B0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B802BC:
    rt.unsupported(0x08B802BCu, 0x494C4F50u, "cop2/vfpu not lowered yet"); return;
L_08B802E4:
    rt.unsupported(0x08B802E4u, 0x49584154u, "cop2/vfpu not lowered yet"); return;
L_08B8030C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80310u, 0x412E315Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 16u, 0x08B91848u>(ctx, &aot_mem); return;
    }
    goto L_08B80314;
L_08B80314:
    rt.unsupported(0x08B80314u, 0x00003354u, "special? not lowered yet"); return;
L_08B80334:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80338u, 0x412E325Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 17u, 0x08B91870u>(ctx, &aot_mem); return;
    }
    goto L_08B8033C;
L_08B8033C:
    rt.unsupported(0x08B8033Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B8035C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80360u, 0x412E335Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 18u, 0x08B91898u>(ctx, &aot_mem); return;
    }
    goto L_08B80364;
L_08B80364:
    rt.unsupported(0x08B80364u, 0x00003354u, "special? not lowered yet"); return;
L_08B80384:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80388u, 0x412E345Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 19u, 0x08B918C0u>(ctx, &aot_mem); return;
    }
    goto L_08B8038C;
L_08B8038C:
    rt.unsupported(0x08B8038Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B803AC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B803B0u, 0x412E355Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 20u, 0x08B918E8u>(ctx, &aot_mem); return;
    }
    goto L_08B803B4;
L_08B803B4:
    rt.unsupported(0x08B803B4u, 0x00003354u, "special? not lowered yet"); return;
L_08B803D4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B803D8u, 0x412E365Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 21u, 0x08B91910u>(ctx, &aot_mem); return;
    }
    goto L_08B803DC;
L_08B803DC:
    rt.unsupported(0x08B803DCu, 0x00003354u, "special? not lowered yet"); return;
L_08B803FC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80400u, 0x412E375Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 22u, 0x08B91938u>(ctx, &aot_mem); return;
    }
    goto L_08B80404;
L_08B80404:
    rt.unsupported(0x08B80404u, 0x00003354u, "special? not lowered yet"); return;
L_08B80424:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80428u, 0x412E385Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 23u, 0x08B91960u>(ctx, &aot_mem); return;
    }
    goto L_08B8042C;
L_08B8042C:
    rt.unsupported(0x08B8042Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B8044C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B80450u, 0x412E395Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 24u, 0x08B91988u>(ctx, &aot_mem); return;
    }
    goto L_08B80454;
L_08B80454:
    rt.unsupported(0x08B80454u, 0x00003354u, "special? not lowered yet"); return;
L_08B80474:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[16] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 25u, 0x08B919B0u>(ctx, &aot_mem); return;
    }
    goto L_08B8047C;
L_08B8047C:
    rt.unsupported(0x08B8047Cu, 0x00335441u, "special? not lowered yet"); return;
L_08B8049C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 26u, 0x08B919D8u>(ctx, &aot_mem); return;
    }
    goto L_08B804A4;
L_08B804A4:
    rt.unsupported(0x08B804A4u, 0x00335441u, "special? not lowered yet"); return;
L_08B804C4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 27u, 0x08B91A00u>(ctx, &aot_mem); return;
    }
    goto L_08B804CC;
L_08B804CC:
    rt.unsupported(0x08B804CCu, 0x00335441u, "special? not lowered yet"); return;
L_08B804EC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[19] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 28u, 0x08B91A28u>(ctx, &aot_mem); return;
    }
    goto L_08B804F4;
L_08B804F4:
    rt.unsupported(0x08B804F4u, 0x00335441u, "special? not lowered yet"); return;
L_08B80514:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[20] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 29u, 0x08B91A50u>(ctx, &aot_mem); return;
    }
    goto L_08B8051C;
L_08B8051C:
    rt.unsupported(0x08B8051Cu, 0x00335441u, "special? not lowered yet"); return;
L_08B8053C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[21] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 30u, 0x08B91A78u>(ctx, &aot_mem); return;
    }
    goto L_08B80544;
L_08B80544:
    rt.unsupported(0x08B80544u, 0x00335441u, "special? not lowered yet"); return;
L_08B80564:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[22] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 31u, 0x08B91AA0u>(ctx, &aot_mem); return;
    }
    goto L_08B8056C;
L_08B8056C:
    rt.unsupported(0x08B8056Cu, 0x00335441u, "special? not lowered yet"); return;
L_08B8058C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[23] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x08B91AC8u>(ctx, &aot_mem); return;
    }
    goto L_08B80594;
L_08B80594:
    rt.unsupported(0x08B80594u, 0x00335441u, "special? not lowered yet"); return;
L_08B805B4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[24] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 33u, 0x08B91AF0u>(ctx, &aot_mem); return;
    }
    goto L_08B805BC;
L_08B805BC:
    rt.unsupported(0x08B805BCu, 0x00335441u, "special? not lowered yet"); return;
L_08B805DC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[25] = (ctx.gpr[17] < static_cast<std::uint32_t>(12639) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 34u, 0x08B91B18u>(ctx, &aot_mem); return;
    }
    goto L_08B805E4;
L_08B805E4:
    rt.unsupported(0x08B805E4u, 0x00335441u, "special? not lowered yet"); return;
L_08B80604:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    ctx.gpr[16] = (ctx.gpr[17] < static_cast<std::uint32_t>(12895) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 35u, 0x08B91B40u>(ctx, &aot_mem); return;
    }
    goto L_08B8060C;
L_08B8060C:
    rt.unsupported(0x08B8060Cu, 0x00335441u, "special? not lowered yet"); return;
L_08B8062C:
    rt.unsupported(0x08B8062Cu, 0x492F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B80654:
    rt.unsupported(0x08B80654u, 0x4A2F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B8067C:
    rt.unsupported(0x08B8067Cu, 0x4A2F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B806A4:
    rt.unsupported(0x08B806A4u, 0x4A2F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B806CC:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    ctx.gpr[1] = (ctx.gpr[10] & 18760u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 36u, 0x08B91C08u>(ctx, &aot_mem); return;
    }
    goto L_08B806D4;
L_08B806D4:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B806E8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B806F4:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    ctx.gpr[1] = (ctx.gpr[18] & 18760u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 37u, 0x08B91C30u>(ctx, &aot_mem); return;
    }
    goto L_08B806FC;
L_08B806FC:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80710u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B8071C:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    ctx.gpr[1] = (ctx.gpr[26] & 18760u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 38u, 0x08B91C58u>(ctx, &aot_mem); return;
    }
    goto L_08B80724;
L_08B80724:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80738u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80744:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    ctx.gpr[1] = (ctx.gpr[2] | 18760u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 39u, 0x08B91C80u>(ctx, &aot_mem); return;
    }
    goto L_08B8074C;
L_08B8074C:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80760u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B8076C:
    rt.unsupported(0x08B8076Cu, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80794:
    rt.unsupported(0x08B80794u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B807BC:
    rt.unsupported(0x08B807BCu, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B807E4:
    rt.unsupported(0x08B807E4u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B8080C:
    rt.unsupported(0x08B8080Cu, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80834:
    rt.unsupported(0x08B80834u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B8085C:
    rt.unsupported(0x08B8085Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80884:
    rt.unsupported(0x08B80884u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B808AC:
    rt.unsupported(0x08B808ACu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B808D4:
    rt.unsupported(0x08B808D4u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B808FC:
    rt.unsupported(0x08B808FCu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80924:
    rt.unsupported(0x08B80924u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B8094C:
    rt.unsupported(0x08B8094Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80974:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    ctx.gpr[2] = (ctx.gpr[10] & 16973u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 44u, 0x08B91EB0u>(ctx, &aot_mem); return;
    }
    goto L_08B8097C;
L_08B8097C:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80990u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B8099C:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    ctx.gpr[2] = (ctx.gpr[18] & 16973u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 45u, 0x08B91ED8u>(ctx, &aot_mem); return;
    }
    goto L_08B809A4;
L_08B809A4:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B809B8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B809C4:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    ctx.gpr[2] = (ctx.gpr[26] & 16973u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 46u, 0x08B91F00u>(ctx, &aot_mem); return;
    }
    goto L_08B809CC;
L_08B809CC:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B809E0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B809EC:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    ctx.gpr[2] = (ctx.gpr[2] | 16973u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 47u, 0x08B91F28u>(ctx, &aot_mem); return;
    }
    goto L_08B809F4;
L_08B809F4:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80A08u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80A14:
    rt.unsupported(0x08B80A14u, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B80A3C:
    rt.unsupported(0x08B80A3Cu, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B80A64:
    rt.unsupported(0x08B80A64u, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B80A8C:
    rt.unsupported(0x08B80A8Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80AB4:
    rt.unsupported(0x08B80AB4u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80ADC:
    rt.unsupported(0x08B80ADCu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80B04:
    rt.unsupported(0x08B80B04u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80B2C:
    rt.unsupported(0x08B80B2Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80B54:
    rt.unsupported(0x08B80B54u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80B7C:
    rt.unsupported(0x08B80B7Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80BA4:
    rt.unsupported(0x08B80BA4u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80BCC:
    rt.unsupported(0x08B80BCCu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80BF4:
    rt.unsupported(0x08B80BF4u, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B80C1C:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[10] & 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 50u, 0x08B92158u>(ctx, &aot_mem); return;
    }
    goto L_08B80C24;
L_08B80C24:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80C38u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80C44:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[18] & 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 51u, 0x08B92180u>(ctx, &aot_mem); return;
    }
    goto L_08B80C4C;
L_08B80C4C:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80C60u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80C6C:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[26] & 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 52u, 0x08B921A8u>(ctx, &aot_mem); return;
    }
    goto L_08B80C74;
L_08B80C74:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80C88u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80C94:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[2] | 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 53u, 0x08B921D0u>(ctx, &aot_mem); return;
    }
    goto L_08B80C9C;
L_08B80C9C:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80CB0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80CBC:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[10] | 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 54u, 0x08B921F8u>(ctx, &aot_mem); return;
    }
    goto L_08B80CC4;
L_08B80CC4:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80CD8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80CE4:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[18] | 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 55u, 0x08B92220u>(ctx, &aot_mem); return;
    }
    goto L_08B80CEC;
L_08B80CEC:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80D00u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80D0C:
    if (ctx.gpr[17] == ctx.gpr[15]) {
    ctx.gpr[3] = (ctx.gpr[26] | 20037u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 56u, 0x08B92248u>(ctx, &aot_mem); return;
    }
    goto L_08B80D14;
L_08B80D14:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80D28u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80D34:
    rt.unsupported(0x08B80D34u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80D5C:
    rt.unsupported(0x08B80D5Cu, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80D84:
    rt.unsupported(0x08B80D84u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80DAC:
    rt.unsupported(0x08B80DACu, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80DD4:
    rt.unsupported(0x08B80DD4u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B80DFC:
    rt.unsupported(0x08B80DFCu, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B80E24:
    rt.unsupported(0x08B80E24u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B80E4C:
    rt.unsupported(0x08B80E4Cu, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B80E74:
    rt.unsupported(0x08B80E74u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B80E9C:
    rt.unsupported(0x08B80E9Cu, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B80EC4:
    rt.unsupported(0x08B80EC4u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B80ED4:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80EE0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80EEC:
    rt.unsupported(0x08B80EECu, 0x4D454854u, "unknown not lowered yet"); return;
L_08B80EF8:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B80F08u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B80F14:
    rt.unsupported(0x08B80F14u, 0x4353494Du, "unknown not lowered yet"); return;
L_08B80F3C:
    rt.unsupported(0x08B80F3Cu, 0x4353494Du, "unknown not lowered yet"); return;
L_08B80F60:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    ctx.gpr[2] = (ctx.gpr[19] ^ 26956u);
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B80F6Cu, 0x61746E65u, "vfpu0 not lowered yet"); return;
L_08B80F80:
    ctx.gpr[12] = (ctx.gpr[26] + static_cast<std::uint32_t>(20291));
    rt.unsupported(0x08B80F84u, 0x00000029u, "special? not lowered yet"); return;
L_08B80F88:
    rt.unsupported(0x08B80F88u, 0x45574F50u, "cop1? not lowered yet"); return;
L_08B81218:
    (void)(ctx.hi);
    (void)(ctx.hi);
    (void)(0u << 2u);
    rt.unsupported(0x08B81224u, 0x00000081u, "special? not lowered yet"); return;
L_08B81498:
    rt.unsupported(0x08B81498u, 0x70736964u, "unknown not lowered yet"); return;
L_08B814A4:
    ctx.execute_vfpu_vminmax(95u, 115u, 101u, 1u, false);
    (void)(0u + 0u);
    // nop
    goto L_08B814B0;
L_08B814B0:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B814B8u, 0xC04CCCCDu, "unknown not lowered yet"); return;
L_08B814C4:
    rt.unsupported(0x08B814C4u, 0x40000000u, "unknown not lowered yet"); return;
L_08B814D8:
    rt.unsupported(0x08B814D8u, 0x40C00000u, "unknown not lowered yet"); return;
L_08B81728:
    rt.unsupported(0x08B8172Cu, 0x08A35098u, "control flow in delay slot"); return;
L_08B81760:
    rt.unsupported(0x08B81760u, 0x43524F46u, "unknown not lowered yet"); return;
L_08B81774:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B81778u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 87u, 0x08B92CC4u>(ctx, &aot_mem); return;
    }
    goto L_08B8177C;
L_08B8177C:
    rt.unsupported(0x08B8177Cu, 0x4D45454Cu, "unknown not lowered yet"); return;
L_08B81794:
    rt.unsupported(0x08B81794u, 0x43544553u, "unknown not lowered yet"); return;
L_08B817A8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B817ACu, 0x49544E45u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x08B924B0u>(ctx, &aot_mem); return;
    }
    goto L_08B817B0;
L_08B817B0:
    rt.unsupported(0x08B817B0u, 0x435F5954u, "unknown not lowered yet"); return;
L_08B817BC:
    rt.unsupported(0x08B817C0u, 0x5F544553u, "control flow in delay slot"); return;
L_08B817C4:
    rt.unsupported(0x08B817C4u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
L_08B817D0:
    rt.unsupported(0x08B817D0u, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B817D8:
    rt.unsupported(0x08B817DCu, 0x574F4C42u, "control flow in delay slot"); return;
L_08B817E0:
    if (ctx.gpr[18] != ctx.gpr[31]) {
    rt.unsupported(0x08B817E4u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 22u, 0x08B95938u>(ctx, &aot_mem); return;
    }
    goto L_08B817E8;
L_08B817E8:
    rt.unsupported(0x08B817E8u, 0x0000454Cu, "syscall not lowered yet"); return;
L_08B817EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B817F0u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 89u, 0x08B92D3Cu>(ctx, &aot_mem); return;
    }
    goto L_08B817F4;
L_08B817F4:
    rt.unsupported(0x08B817F8u, 0x54414548u, "control flow in delay slot"); return;
L_08B817FC:
    rt.unsupported(0x08B81800u, 0x56544553u, "control flow in delay slot"); return;
L_08B81800:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B81804u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 90u, 0x08B92D50u>(ctx, &aot_mem); return;
    }
    goto L_08B81808;
L_08B81808:
    rt.unsupported(0x08B81808u, 0x4E49454Cu, "unknown not lowered yet"); return;
L_08B81818:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B8181Cu, 0x41455243u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 49u, 0x08B96550u>(ctx, &aot_mem); return;
    }
    goto L_08B81820;
L_08B81820:
    if (ctx.gpr[10] != ctx.gpr[12]) {
    rt.unsupported(0x08B81824u, 0x4A424F41u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 91u, 0x08B92D74u>(ctx, &aot_mem); return;
    }
    goto L_08B81828;
L_08B81828:
    rt.unsupported(0x08B81828u, 0x00544345u, "special? not lowered yet"); return;
L_08B8182C:
    rt.unsupported(0x08B81830u, 0x56524553u, "control flow in delay slot"); return;
L_08B81834:
    rt.unsupported(0x08B81838u, 0x59444145u, "control flow in delay slot"); return;
L_08B8183C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 67u, 0x08B969BCu>(ctx, &aot_mem); return;
    }
    goto L_08B81844;
L_08B81844:
    // nop
    rt.unsupported(0x08B8184Cu, 0x08A3A890u, "control flow in delay slot"); return;
L_08B818A8:
    rt.unsupported(0x08B818A8u, 0x4F4D4552u, "unknown not lowered yet"); return;
L_08B818BC:
    // nop
    rt.unsupported(0x08B818C4u, 0x08A41804u, "control flow in delay slot"); return;
L_08B81B88:
    rt.unsupported(0x08B81B88u, 0x43534944u, "unknown not lowered yet"); return;
L_08B81B94:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B81B98u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B81BA0u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 40u, 0x08B964C4u>(ctx, &aot_mem); return;
    }
    goto L_08B81BA4;
L_08B81BA4:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    rt.unsupported(0x08B81BA8u, 0x472F5053u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 49u, 0x08B920F8u>(ctx, &aot_mem); return;
    }
    goto L_08B81BAC;
L_08B81BAC:
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[26] << (ctx.gpr[2] & 31u));
    // nop
    goto L_08B81BB8;
L_08B81BB8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B81BBCu, 0x746C754Du, "unknown not lowered yet"); return;
L_08B81BD0:
    ctx.execute_vfpu_vscl_ct<87u, 105u, 114u, 1u>();
    rt.unsupported(0x08B81BD4u, 0x7373656Cu, "unknown not lowered yet"); return;
L_08B81BF8:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B81BFCu, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B81C1C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B81C20u, 0x72632072u, "unknown not lowered yet"); return;
L_08B81C44:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81C48u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81C64:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81C68u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81C84:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81C88u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81CA4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81CA8u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81CC0:
    rt.unsupported(0x08B81CC0u, 0x6B726F77u, "unknown not lowered yet"); return;
L_08B81CC8:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81CCCu, 0x74206465u, "unknown not lowered yet"); return;
L_08B81CE4:
    rt.unsupported(0x08B81CE4u, 0x6E20636Fu, "vfpu3 not lowered yet"); return;
L_08B81CF4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81CF8u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81D10:
    rt.unsupported(0x08B81D10u, 0x6E20636Fu, "vfpu3 not lowered yet"); return;
L_08B81D30:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81D34u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81D4C:
    rt.unsupported(0x08B81D4Cu, 0x20636F68u, "unknown not lowered yet"); return;
L_08B81D68:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    rt.unsupported(0x08B81D6Cu, 0x6E6F4363u, "vfpu3 not lowered yet"); return;
L_08B81D7C:
    rt.unsupported(0x08B81D7Cu, 0x4B656373u, "cop2/vfpu not lowered yet"); return;
L_08B81D90:
    rt.unsupported(0x08B81D90u, 0x61662029u, "vfpu0 not lowered yet"); return;
L_08B81D9C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B81DA4u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B81DB8:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81DBCu, 0x74206465u, "unknown not lowered yet"); return;
L_08B81DD4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81DD8u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81DF8:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B81E00u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B81E14:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B81E1Cu, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B81E34:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B81E38u, 0x63732072u, "vfpu0 not lowered yet"); return;
L_08B81E54:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B81E58u, 0x756F2064u, "unknown not lowered yet"); return;
L_08B81E78:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 106u, 1u, 6u);
    rt.unsupported(0x08B81E80u, 0x6E696E69u, "vfpu3 not lowered yet"); return;
L_08B81E94:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B81E98u, 0x74206465u, "unknown not lowered yet"); return;
L_08B81F00:
    rt.unsupported(0x08B81F04u, 0x08A575ACu, "control flow in delay slot"); return;
L_08B81F20:
    if (ctx.gpr[27] != ctx.gpr[19]) {
    ctx.execute_vfpu_compare3(97u, 121u, 112u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 56u, 0x08B9A444u>(ctx, &aot_mem); return;
    }
    goto L_08B81F28;
L_08B81F28:
    rt.unsupported(0x08B81F28u, 0x42746E69u, "unknown not lowered yet"); return;
L_08B81F34:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_compare3(65u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B81F3Cu, 0x73695677u, "unknown not lowered yet"); return;
L_08B81F48:
    rt.unsupported(0x08B81F48u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B81F5C:
    rt.unsupported(0x08B81F60u, 0x08A57300u, "control flow in delay slot"); return;
L_08B81F94:
    rt.unsupported(0x08B81F98u, 0x08A57860u, "control flow in delay slot"); return;
L_08B820F0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    rt.unsupported(0x08B820F4u, 0x0000005Eu, "special? not lowered yet"); return;
L_08B82118:
    rt.unsupported(0x08B82118u, 0x0000003Fu, "special? not lowered yet"); return;
L_08B82324:
    rt.unsupported(0x08B82324u, 0x203D2078u, "unknown not lowered yet"); return;
L_08B82340:
    rt.unsupported(0x08B82344u, 0x08A8F124u, "control flow in delay slot"); return;
L_08B82380:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<118u, 97u, 1u, 2u>();
    rt.unsupported(0x08B82388u, 0x20736920u, "unknown not lowered yet"); return;
L_08B82394:
    rt.unsupported(0x08B82394u, 0x6E6F7277u, "vfpu3 not lowered yet"); return;
L_08B824D0:
    rt.unsupported(0x08B824D0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B824E8:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B824ECu, 0x6E692065u, "vfpu3 not lowered yet"); return;
L_08B824FC:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    rt.unsupported(0x08B82500u, 0x6E692065u, "vfpu3 not lowered yet"); return;
L_08B82510:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    rt.unsupported(0x08B82514u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B82560:
    ctx.execute_vfpu_compare3(109u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B82564u, 0x61207972u, "vfpu0 not lowered yet"); return;
L_08B82588:
    rt.unsupported(0x08B8258Cu, 0x08AA0908u, "control flow in delay slot"); return;
L_08B825D0:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    ctx.execute_vfpu_compare3(101u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B825D8u, 0x6961746Eu, "unknown not lowered yet"); return;
L_08B825EC:
    rt.unsupported(0x08B825ECu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B82610:
    rt.unsupported(0x08B82610u, 0x706D7562u, "unknown not lowered yet"); return;
L_08B82624:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    rt.unsupported(0x08B82630u, 0x796D6D75u, "unknown not lowered yet"); return;
L_08B82638:
    rt.unsupported(0x08B82638u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B8264C:
    rt.unsupported(0x08B8264Cu, 0x74616F62u, "unknown not lowered yet"); return;
L_08B82660:
    rt.unsupported(0x08B82660u, 0x726F6F64u, "unknown not lowered yet"); return;
L_08B82674:
    rt.unsupported(0x08B82674u, 0x706D6172u, "unknown not lowered yet"); return;
L_08B82688:
    rt.unsupported(0x08B82688u, 0x79646F62u, "unknown not lowered yet"); return;
L_08B8269C:
    rt.unsupported(0x08B8269Cu, 0x68655643u, "unknown not lowered yet"); return;
L_08B826B8:
    rt.unsupported(0x08B826B8u, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08B826CC:
    rt.unsupported(0x08B826CCu, 0x2078696Du, "unknown not lowered yet"); return;
L_08B826E0:
    ctx.execute_vfpu_vminmax(67u, 83u, 105u, 1u, false);
    rt.unsupported(0x08B826E4u, 0x4D656C70u, "unknown not lowered yet"); return;
L_08B826F8:
    ctx.execute_vfpu_compare3(100u, 101u, 99u, 1u, 6u);
    rt.unsupported(0x08B826FCu, 0x735F6564u, "unknown not lowered yet"); return;
L_08B827D0:
    ctx.gpr[16] = (ctx.gpr[3] & 26946u);
    rt.unsupported(0x08B827D4u, 0x20522031u, "unknown not lowered yet"); return;
L_08B827E4:
    ctx.gpr[16] = (ctx.gpr[3] & 26946u);
    rt.unsupported(0x08B827E8u, 0x204C2031u, "unknown not lowered yet"); return;
L_08B82918:
    rt.unsupported(0x08B8291Cu, 0x08AB10D8u, "control flow in delay slot"); return;
L_08B82980:
    rt.unsupported(0x08B82980u, 0x62616E75u, "vfpu0 not lowered yet"); return;
L_08B829A0:
    rt.unsupported(0x08B829A0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B829B8:
    rt.unsupported(0x08B829B8u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B829D0:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B829D8u, 0x61702064u, "vfpu0 not lowered yet"); return;
L_08B829F4:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B829FCu, 0x61702064u, "vfpu0 not lowered yet"); return;
L_08B82A14:
    rt.unsupported(0x08B82A14u, 0x61626E75u, "vfpu0 not lowered yet"); return;
L_08B82A28:
    rt.unsupported(0x08B82A28u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B82A3C:
    rt.unsupported(0x08B82A3Cu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B82A50:
    rt.unsupported(0x08B82A50u, 0x69727473u, "unknown not lowered yet"); return;
L_08B82A6C:
    rt.unsupported(0x08B82A6Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B82A9C:
    rt.unsupported(0x08B82A9Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B82AB8:
    rt.unsupported(0x08B82AB8u, 0x7373696Du, "unknown not lowered yet"); return;
L_08B82ADC:
    ctx.execute_vfpu_compare3(111u, 98u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<108u, 101u, 116u, 1u>();
    rt.unsupported(0x08B82AE4u, 0x74706F20u, "unknown not lowered yet"); return;
L_08B82B00:
    rt.unsupported(0x08B82B00u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B82D58:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B82D60u, 0x72632064u, "unknown not lowered yet"); return;
L_08B82E18:
    rt.unsupported(0x08B82E18u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B82E24:
    rt.unsupported(0x08B82E24u, 0x4741505Fu, "cop1? not lowered yet"); return;
L_08B82E2C:
    ctx.gpr[16] = (ctx.gpr[17] ^ 29549u);
    ctx.gpr[16] = (ctx.gpr[26] < static_cast<std::uint32_t>(21328) ? 1u : 0u);
    rt.unsupported(0x08B82E34u, 0x45564153u, "cop1? not lowered yet"); return;
L_08B82E40:
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B82E44u, 0x73252073u, "unknown not lowered yet"); return;
L_08B82E60:
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B82E64u, 0x73252073u, "unknown not lowered yet"); return;
L_08B82E80:
    ctx.gpr[1] = (ctx.gpr[18] ^ 21575u);
    rt.unsupported(0x08B82E84u, 0x63695620u, "vfpu0 not lowered yet"); return;
L_08B82E94:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B82E98;
L_08B82E98:
    rt.unsupported(0x08B82E98u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B82EA4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B82EA8u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B82EB0u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 76u, 0x08B977D4u>(ctx, &aot_mem); return;
    }
    goto L_08B82EB4;
L_08B82EB4:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    rt.unsupported(0x08B82EB8u, 0x492F5053u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 94u, 0x08B93408u>(ctx, &aot_mem); return;
    }
    goto L_08B82EBC;
L_08B82EBC:
    if (ctx.gpr[26] == ctx.gpr[14]) {
    rt.unsupported(0x08B82EC0u, 0x0000002Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 69u, 0x08B96BCCu>(ctx, &aot_mem); return;
    }
    goto L_08B82EC4;
L_08B82EC4:
    rt.unsupported(0x08B82EC4u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B82ED0:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B82ED4u, 0x43492F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 116u, 0x08B8EBD8u>(ctx, &aot_mem); return;
    }
    goto L_08B82ED8;
L_08B82ED8:
    ctx.gpr[19] = (ctx.gpr[26] < static_cast<std::uint32_t>(20047) ? 1u : 0u);
    rt.unsupported(0x08B82EDCu, 0x45564153u, "cop1? not lowered yet"); return;
L_08B82FC0:
    rt.unsupported(0x08B82FC0u, 0x746E6F63u, "unknown not lowered yet"); return;
L_08B82FDC:
    rt.unsupported(0x08B82FDCu, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B83000:
    rt.unsupported(0x08B83000u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B83018:
    rt.unsupported(0x08B83018u, 0x00000015u, "special? not lowered yet"); return;
L_08B83030:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 100u, 1u>();
    rt.unsupported(0x08B83034u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B830C8:
    rt.unsupported(0x08B830C8u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08B830DC:
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    rt.unsupported(0x08B83124u, 0x00002F2Fu, "special? not lowered yet"); return;
L_08B83128:
    rt.unsupported(0x08B83128u, 0x70616548u, "unknown not lowered yet"); return;
L_08B8313C:
    rt.unsupported(0x08B8313Cu, 0x70616548u, "unknown not lowered yet"); return;
L_08B83150:
    rt.unsupported(0x08B83150u, 0x70616548u, "unknown not lowered yet"); return;
L_08B83164:
    rt.unsupported(0x08B83164u, 0x74736157u, "unknown not lowered yet"); return;
L_08B83178:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08B8317Cu, 0x69382520u, "unknown not lowered yet"); return;
L_08B83200:
    if (ctx.gpr[3] == ctx.gpr[7]) {
    rt.unsupported(0x08B83204u, 0x746E6972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 83u, 0x08B9BB14u>(ctx, &aot_mem); return;
    }
    goto L_08B83208;
L_08B83208:
    rt.unsupported(0x08B83208u, 0x4F6C6C41u, "unknown not lowered yet"); return;
L_08B83214:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 1u>(vfpu_d); }
    rt.unsupported(0x08B83218u, 0x43636F68u, "unknown not lowered yet"); return;
L_08B83228:
    rt.unsupported(0x08B83228u, 0x496D754Eu, "cop2/vfpu not lowered yet"); return;
L_08B83240:
    rt.unsupported(0x08B83240u, 0x75466F4Eu, "unknown not lowered yet"); return;
L_08B83254:
    rt.unsupported(0x08B83254u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B83268:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    rt.unsupported(0x08B8326Cu, 0x756F7247u, "unknown not lowered yet"); return;
L_08B83280:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B83284u, 0x61507265u, "vfpu0 not lowered yet"); return;
L_08B83290:
    rt.unsupported(0x08B83290u, 0x7574536Eu, "unknown not lowered yet"); return;
L_08B83298:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B8329Cu, 0x61507265u, "vfpu0 not lowered yet"); return;
L_08B832A8:
    rt.unsupported(0x08B832A8u, 0x7574536Eu, "unknown not lowered yet"); return;
L_08B832B4:
    rt.unsupported(0x08B832B4u, 0x61736944u, "vfpu0 not lowered yet"); return;
L_08B832C0:
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    rt.unsupported(0x08B832C4u, 0x61426E65u, "vfpu0 not lowered yet"); return;
L_08B832D8:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 117u, 115u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 7u, 0x08B9C828u>(ctx, &aot_mem); return;
    }
    goto L_08B832E0;
L_08B832E0:
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<101u, 110u, 83u, 1u>();
    rt.unsupported(0x08B832E8u, 0x7463656Cu, "unknown not lowered yet"); return;
L_08B832F0:
    rt.unsupported(0x08B832F0u, 0x45746547u, "cop1? not lowered yet"); return;
L_08B83308:
    rt.unsupported(0x08B83308u, 0x00007372u, "special? not lowered yet"); return;
L_08B8330C:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B83314u, 0x72657645u, "unknown not lowered yet"); return;
L_08B83320:
    if (ctx.gpr[3] == ctx.gpr[19]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 80u, 0x08B9B844u>(ctx, &aot_mem); return;
    }
    goto L_08B83328;
L_08B83324:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
    goto L_08B83328;
L_08B83328:
    rt.unsupported(0x08B83328u, 0x746E4572u, "unknown not lowered yet"); return;
L_08B83338:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    rt.unsupported(0x08B8333Cu, 0x72657075u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 4u, 0x08BA0090u>(ctx, &aot_mem); return;
    }
    goto L_08B83340;
L_08B83340:
    rt.unsupported(0x08B83340u, 0x6B617242u, "unknown not lowered yet"); return;
L_08B8334C:
    // nop
    goto L_08B83350;
L_08B83350:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<101u, 100u, 84u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 8u, 0x08B9C870u>(ctx, &aot_mem); return;
    }
    goto L_08B83358;
L_08B83358:
    ctx.execute_vfpu_vscl_ct<97u, 109u, 80u, 1u>();
    rt.unsupported(0x08B8335Cu, 0x72477265u, "unknown not lowered yet"); return;
L_08B83368:
    rt.unsupported(0x08B83368u, 0x42746547u, "unknown not lowered yet"); return;
L_08B83374:
    rt.unsupported(0x08B83374u, 0x47726565u, "cop1? not lowered yet"); return;
L_08B83380:
    rt.unsupported(0x08B83380u, 0x45746547u, "cop1? not lowered yet"); return;
L_08B83384:
    rt.unsupported(0x08B83384u, 0x79726576u, "unknown not lowered yet"); return;
L_08B83390:
    rt.unsupported(0x08B83390u, 0x70756F72u, "unknown not lowered yet"); return;
L_08B83398:
    rt.unsupported(0x08B83398u, 0x6E697250u, "vfpu3 not lowered yet"); return;
L_08B8339C:
    ctx.execute_vfpu_vcmp_ct<65u, 108u, 1u, 4u>();
    rt.unsupported(0x08B833A0u, 0x72656550u, "unknown not lowered yet"); return;
L_08B833AC:
    rt.unsupported(0x08B833ACu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B833C4:
    rt.unsupported(0x08B833C4u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B833EC:
    rt.unsupported(0x08B833ECu, 0x45746553u, "cop1? not lowered yet"); return;
L_08B83400:
    rt.unsupported(0x08B83400u, 0x45746553u, "cop1? not lowered yet"); return;
L_08B83414:
    rt.unsupported(0x08B83414u, 0x74736544u, "unknown not lowered yet"); return;
L_08B83428:
    rt.unsupported(0x08B8342Cu, 0x08AC05B8u, "control flow in delay slot"); return;
L_08B83670:
    rt.unsupported(0x08B83670u, 0x43534944u, "unknown not lowered yet"); return;
L_08B8367C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B83680u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B83688u, 0x5F47534Du, "control flow in delay slot"); return;
L_08B83688:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B8368Cu, 0x44414552u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 10u, 0x08B983C0u>(ctx, &aot_mem); return;
    }
    goto L_08B83690;
L_08B8368C:
    rt.unsupported(0x08B8368Cu, 0x44414552u, "unsupported CFC1 control register"); return;
    goto L_08B83690;
L_08B83690:
    rt.unsupported(0x08B83694u, 0x53545543u, "control flow in delay slot"); return;
L_08B83698:
    rt.unsupported(0x08B83698u, 0x454E4543u, "cop1? not lowered yet"); return;
L_08B836A0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B836A4u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B836B4:
    rt.unsupported(0x08B836B4u, 0x75746553u, "unknown not lowered yet"); return;
L_08B836CC:
    rt.unsupported(0x08B836CCu, 0x75746553u, "unknown not lowered yet"); return;
L_08B836E4:
    rt.unsupported(0x08B836E4u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B83700:
    rt.unsupported(0x08B83700u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B8371C:
    ctx.execute_vfpu_vscl_ct<67u, 84u, 104u, 1u>();
    rt.unsupported(0x08B83720u, 0x69726353u, "unknown not lowered yet"); return;
L_08B83734:
    rt.unsupported(0x08B83734u, 0x43656854u, "unknown not lowered yet"); return;
L_08B83748:
    rt.unsupported(0x08B83748u, 0x72745343u, "unknown not lowered yet"); return;
L_08B83770:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) < 28521 ? 1u : 0u);
    rt.unsupported(0x08B83774u, 0x00002929u, "special? not lowered yet"); return;
L_08B83778:
    rt.unsupported(0x08B83778u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B837E0:
    rt.unsupported(0x08B837E0u, 0x705C6961u, "unknown not lowered yet"); return;
L_08B837EC:
    rt.unsupported(0x08B837ECu, 0x76697463u, "unknown not lowered yet"); return;
L_08B83F58:
    rt.unsupported(0x08B83F58u, 0x43534944u, "unknown not lowered yet"); return;
L_08B83F64:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B83F68u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B83F70u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 25u, 0x08B98894u>(ctx, &aot_mem); return;
    }
    goto L_08B83F74;
L_08B83F74:
    rt.unsupported(0x08B83F74u, 0x472F4154u, "cop1? not lowered yet"); return;
L_08B83F84:
    rt.unsupported(0x08B83F84u, 0x4F4C4E55u, "unknown not lowered yet"); return;
L_08B83FA0:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B83FA4u, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 15u, 0x08B954F0u>(ctx, &aot_mem); return;
    }
    goto L_08B83FA8;
L_08B83FA8:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B83FACu, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 42u, 0x08B964E0u>(ctx, &aot_mem); return;
    }
    goto L_08B83FB0;
L_08B83FB0:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B83FB4u, 0x2054274Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 89u, 0x08B97CC4u>(ctx, &aot_mem); return;
    }
    goto L_08B83FB8;
L_08B83FB8:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B83FBCu, 0x20455249u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 16u, 0x08B95504u>(ctx, &aot_mem); return;
    }
    goto L_08B83FC0;
L_08B83FC0:
    rt.unsupported(0x08B83FC0u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B83FCC:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B83FD0u, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 17u, 0x08B9551Cu>(ctx, &aot_mem); return;
    }
    goto L_08B83FD4;
L_08B83FD4:
    rt.unsupported(0x08B83FD4u, 0x49424D41u, "cop2/vfpu not lowered yet"); return;
L_08B83FE4:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B83FE8u, 0x2054274Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 90u, 0x08B97CF8u>(ctx, &aot_mem); return;
    }
    goto L_08B83FEC;
L_08B83FEC:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B83FF0u, 0x20455249u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 18u, 0x08B95538u>(ctx, &aot_mem); return;
    }
    goto L_08B83FF4;
L_08B83FF4:
    rt.unsupported(0x08B83FF4u, 0x45444F4Du, "cop1? not lowered yet"); return;
}

void recomp_unit_0223(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0223_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_223(Runtime &runtime) {
    runtime.register_generated_unit(223u, 0x08B80000u, 16384u, &recomp_unit_0223, &recomp_unit_0223_entry);
    runtime.register_function(0x08B80000u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80014u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80020u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8003Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80044u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80064u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8006Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8008Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80094u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B800B4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B800BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B800DCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B800E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80104u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8010Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8012Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80134u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80140u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80154u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8015Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8017Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B801A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B801CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B801F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8021Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80244u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8026Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80274u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80294u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8029Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B802BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B802E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8030Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80314u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80334u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8033Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8035Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80364u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80384u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8038Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B803ACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B803B4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B803D4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B803DCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B803FCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80404u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80424u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8042Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8044Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80454u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80474u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8047Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8049Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B804A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B804C4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B804CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B804ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B804F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80514u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8051Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8053Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80544u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80564u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8056Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8058Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80594u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B805B4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B805BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B805DCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B805E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80604u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8060Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8062Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80654u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8067Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B806A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B806CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B806D4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B806F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B806FCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8071Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80724u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80744u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8074Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8076Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80794u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B807BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B807E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8080Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80834u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8085Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80884u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B808ACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B808D4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B808FCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80924u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8094Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80974u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8097Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8099Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B809A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B809C4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B809CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B809ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B809F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80A14u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80A3Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80A64u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80A8Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80AB4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80ADCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80B04u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80B2Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80B54u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80B7Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80BA4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80BCCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80BF4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C1Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C24u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C44u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C4Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C6Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C74u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80C9Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80CBCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80CC4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80CE4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80CECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80D0Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80D14u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80D34u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80D5Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80D84u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80DACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80DD4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80DFCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80E24u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80E4Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80E74u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80E9Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80EC4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80ED4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80EECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80EF8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80F14u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80F3Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80F60u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80F80u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B80F88u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81218u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81498u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B814A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B814B0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B814C4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B814D8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81728u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81760u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81774u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8177Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81794u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817A8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817B0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817C4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817D8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817E0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817E8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B817FCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81800u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81808u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81818u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81820u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81828u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8182Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81834u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8183Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81844u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B818A8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B818BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81B88u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81B94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81BA4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81BACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81BB8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81BD0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81BF8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81C1Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81C44u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81C64u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81C84u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81CA4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81CC0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81CC8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81CE4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81CF4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D10u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D30u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D4Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D68u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D7Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D90u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81D9Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81DB8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81DD4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81DF8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81E14u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81E34u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81E54u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81E78u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81E94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F00u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F20u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F28u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F34u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F48u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F5Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B81F94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B820F0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82118u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82324u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82340u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82380u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82394u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B824D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B824E8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B824FCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82510u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82560u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82588u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B825D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B825ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82610u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82624u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82638u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8264Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82660u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82674u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82688u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8269Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B826B8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B826CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B826E0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B826F8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B827D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B827E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82918u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82980u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B829A0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B829B8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B829D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B829F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82A14u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82A28u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82A3Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82A50u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82A6Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82A9Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82AB8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82ADCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82B00u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82D58u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E18u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E24u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E2Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E40u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E60u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E80u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82E98u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82EA4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82EB4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82EBCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82EC4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82ED0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82ED8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82FC0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B82FDCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83000u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83018u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83030u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B830C8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B830DCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83128u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8313Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83150u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83164u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83178u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83200u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83208u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83214u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83228u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83240u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83254u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83268u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83280u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83290u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83298u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B832A8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B832B4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B832C0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B832D8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B832E0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B832F0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83308u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8330Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83320u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83324u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83328u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83338u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83340u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8334Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83350u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83358u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83368u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83374u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83380u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83384u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83390u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83398u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8339Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B833ACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B833C4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B833ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83400u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83414u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83428u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83670u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8367Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83688u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8368Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83690u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83698u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B836A0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B836B4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B836CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B836E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83700u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B8371Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83734u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83748u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83770u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83778u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B837E0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B837ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83F58u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83F64u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83F74u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83F84u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FA0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FA8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FB0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FB8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FC0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FCCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FD4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FE4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x08B83FF4u, &recomp_unit_0223, "recomp_unit_0223");
}
} // namespace psprecomp
