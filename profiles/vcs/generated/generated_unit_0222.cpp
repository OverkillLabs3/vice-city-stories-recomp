#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0222[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 52, 0, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129,
    0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142,
    0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0,
    0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0,
    0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0,
    0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197,
    0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 207, 0,
    0, 208, 0, 0, 209, 210, 0, 0, 211, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 232,
    0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334,
};
void recomp_unit_0222_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B7C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0222[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B7C000;
    case 2u: goto L_08B7C040;
    case 3u: goto L_08B7C050;
    case 4u: goto L_08B7C258;
    case 5u: goto L_08B7C658;
    case 6u: goto L_08B7C664;
    case 7u: goto L_08B7C66C;
    case 8u: goto L_08B7C680;
    case 9u: goto L_08B7C68C;
    case 10u: goto L_08B7C69C;
    case 11u: goto L_08B7C6A8;
    case 12u: goto L_08B7C6B0;
    case 13u: goto L_08B7C6CC;
    case 14u: goto L_08B7C6E4;
    case 15u: goto L_08B7C6EC;
    case 16u: goto L_08B7C6F4;
    case 17u: goto L_08B7C6F8;
    case 18u: goto L_08B7C720;
    case 19u: goto L_08B7C728;
    case 20u: goto L_08B7C73C;
    case 21u: goto L_08B7C7D0;
    case 22u: goto L_08B7C820;
    case 23u: goto L_08B7C83C;
    case 24u: goto L_08B7C850;
    case 25u: goto L_08B7C864;
    case 26u: goto L_08B7C878;
    case 27u: goto L_08B7C88C;
    case 28u: goto L_08B7C938;
    case 29u: goto L_08B7CC38;
    case 30u: goto L_08B7CC80;
    case 31u: goto L_08B7CC88;
    case 32u: goto L_08B7CCA0;
    case 33u: goto L_08B7CCC4;
    case 34u: goto L_08B7CCD0;
    case 35u: goto L_08B7D308;
    case 36u: goto L_08B7D320;
    case 37u: goto L_08B7D32C;
    case 38u: goto L_08B7D334;
    case 39u: goto L_08B7D33C;
    case 40u: goto L_08B7D34C;
    case 41u: goto L_08B7D360;
    case 42u: goto L_08B7D378;
    case 43u: goto L_08B7D3F8;
    case 44u: goto L_08B7D404;
    case 45u: goto L_08B7D414;
    case 46u: goto L_08B7D41C;
    case 47u: goto L_08B7D42C;
    case 48u: goto L_08B7D438;
    case 49u: goto L_08B7D448;
    case 50u: goto L_08B7D450;
    case 51u: goto L_08B7D460;
    case 52u: goto L_08B7D464;
    case 53u: goto L_08B7D470;
    case 54u: goto L_08B7D480;
    case 55u: goto L_08B7D494;
    case 56u: goto L_08B7D4A0;
    case 57u: goto L_08B7D4A8;
    case 58u: goto L_08B7D4B4;
    case 59u: goto L_08B7D518;
    case 60u: goto L_08B7D5A8;
    case 61u: goto L_08B7D5C0;
    case 62u: goto L_08B7D5E0;
    case 63u: goto L_08B7D5E8;
    case 64u: goto L_08B7D5F8;
    case 65u: goto L_08B7D614;
    case 66u: goto L_08B7D640;
    case 67u: goto L_08B7D658;
    case 68u: goto L_08B7D670;
    case 69u: goto L_08B7D68C;
    case 70u: goto L_08B7D6C0;
    case 71u: goto L_08B7D6DC;
    case 72u: goto L_08B7D6F0;
    case 73u: goto L_08B7D708;
    case 74u: goto L_08B7D728;
    case 75u: goto L_08B7D740;
    case 76u: goto L_08B7DA50;
    case 77u: goto L_08B7DA70;
    case 78u: goto L_08B7DA84;
    case 79u: goto L_08B7DA9C;
    case 80u: goto L_08B7DAAC;
    case 81u: goto L_08B7DAB0;
    case 82u: goto L_08B7DAE8;
    case 83u: goto L_08B7DB00;
    case 84u: goto L_08B7DCB0;
    case 85u: goto L_08B7DCC8;
    case 86u: goto L_08B7DCD4;
    case 87u: goto L_08B7DCE4;
    case 88u: goto L_08B7DCF4;
    case 89u: goto L_08B7DD00;
    case 90u: goto L_08B7DD10;
    case 91u: goto L_08B7DD20;
    case 92u: goto L_08B7DD2C;
    case 93u: goto L_08B7DD3C;
    case 94u: goto L_08B7DD4C;
    case 95u: goto L_08B7DD58;
    case 96u: goto L_08B7DD68;
    case 97u: goto L_08B7DD78;
    case 98u: goto L_08B7DD84;
    case 99u: goto L_08B7DD94;
    case 100u: goto L_08B7DDA0;
    case 101u: goto L_08B7DDAC;
    case 102u: goto L_08B7DDBC;
    case 103u: goto L_08B7DDCC;
    case 104u: goto L_08B7DE10;
    case 105u: goto L_08B7E1D8;
    case 106u: goto L_08B7E308;
    case 107u: goto L_08B7E328;
    case 108u: goto L_08B7E354;
    case 109u: goto L_08B7E374;
    case 110u: goto L_08B7E3BC;
    case 111u: goto L_08B7E3E4;
    case 112u: goto L_08B7E3F8;
    case 113u: goto L_08B7E408;
    case 114u: goto L_08B7E40C;
    case 115u: goto L_08B7E414;
    case 116u: goto L_08B7E424;
    case 117u: goto L_08B7E434;
    case 118u: goto L_08B7E438;
    case 119u: goto L_08B7E440;
    case 120u: goto L_08B7E44C;
    case 121u: goto L_08B7E458;
    case 122u: goto L_08B7E464;
    case 123u: goto L_08B7E46C;
    case 124u: goto L_08B7E484;
    case 125u: goto L_08B7E498;
    case 126u: goto L_08B7E4B0;
    case 127u: goto L_08B7E4CC;
    case 128u: goto L_08B7E570;
    case 129u: goto L_08B7E57C;
    case 130u: goto L_08B7E584;
    case 131u: goto L_08B7E598;
    case 132u: goto L_08B7E5A4;
    case 133u: goto L_08B7E5BC;
    case 134u: goto L_08B7E5D8;
    case 135u: goto L_08B7E5F4;
    case 136u: goto L_08B7E628;
    case 137u: goto L_08B7E634;
    case 138u: goto L_08B7E644;
    case 139u: goto L_08B7E650;
    case 140u: goto L_08B7E660;
    case 141u: goto L_08B7E66C;
    case 142u: goto L_08B7E67C;
    case 143u: goto L_08B7E688;
    case 144u: goto L_08B7E698;
    case 145u: goto L_08B7E6A4;
    case 146u: goto L_08B7E6B4;
    case 147u: goto L_08B7E6C0;
    case 148u: goto L_08B7E6D0;
    case 149u: goto L_08B7E6DC;
    case 150u: goto L_08B7E6EC;
    case 151u: goto L_08B7E6F8;
    case 152u: goto L_08B7E708;
    case 153u: goto L_08B7E714;
    case 154u: goto L_08B7E724;
    case 155u: goto L_08B7E730;
    case 156u: goto L_08B7E740;
    case 157u: goto L_08B7E74C;
    case 158u: goto L_08B7E75C;
    case 159u: goto L_08B7E768;
    case 160u: goto L_08B7E778;
    case 161u: goto L_08B7E784;
    case 162u: goto L_08B7E794;
    case 163u: goto L_08B7E7A0;
    case 164u: goto L_08B7E7B0;
    case 165u: goto L_08B7E7BC;
    case 166u: goto L_08B7E7CC;
    case 167u: goto L_08B7E7D8;
    case 168u: goto L_08B7E7E8;
    case 169u: goto L_08B7E7F4;
    case 170u: goto L_08B7E804;
    case 171u: goto L_08B7E810;
    case 172u: goto L_08B7E820;
    case 173u: goto L_08B7E82C;
    case 174u: goto L_08B7E83C;
    case 175u: goto L_08B7E848;
    case 176u: goto L_08B7E858;
    case 177u: goto L_08B7E864;
    case 178u: goto L_08B7E874;
    case 179u: goto L_08B7E880;
    case 180u: goto L_08B7E890;
    case 181u: goto L_08B7E89C;
    case 182u: goto L_08B7E8AC;
    case 183u: goto L_08B7E8B8;
    case 184u: goto L_08B7E8C8;
    case 185u: goto L_08B7E8D4;
    case 186u: goto L_08B7E8E4;
    case 187u: goto L_08B7E8F0;
    case 188u: goto L_08B7E900;
    case 189u: goto L_08B7E90C;
    case 190u: goto L_08B7E91C;
    case 191u: goto L_08B7E928;
    case 192u: goto L_08B7E938;
    case 193u: goto L_08B7E944;
    case 194u: goto L_08B7E954;
    case 195u: goto L_08B7E960;
    case 196u: goto L_08B7E970;
    case 197u: goto L_08B7E97C;
    case 198u: goto L_08B7E98C;
    case 199u: goto L_08B7E998;
    case 200u: goto L_08B7E9A8;
    case 201u: goto L_08B7E9B4;
    case 202u: goto L_08B7E9C4;
    case 203u: goto L_08B7E9D0;
    case 204u: goto L_08B7E9E0;
    case 205u: goto L_08B7E9E8;
    case 206u: goto L_08B7E9F4;
    case 207u: goto L_08B7E9F8;
    case 208u: goto L_08B7EA04;
    case 209u: goto L_08B7EA10;
    case 210u: goto L_08B7EA14;
    case 211u: goto L_08B7EA20;
    case 212u: goto L_08B7EA24;
    case 213u: goto L_08B7EA2C;
    case 214u: goto L_08B7EA38;
    case 215u: goto L_08B7EA64;
    case 216u: goto L_08B7EA88;
    case 217u: goto L_08B7EA94;
    case 218u: goto L_08B7EAA0;
    case 219u: goto L_08B7EAB0;
    case 220u: goto L_08B7EABC;
    case 221u: goto L_08B7EAE0;
    case 222u: goto L_08B7EAF4;
    case 223u: goto L_08B7EB10;
    case 224u: goto L_08B7EB20;
    case 225u: goto L_08B7EB2C;
    case 226u: goto L_08B7EB34;
    case 227u: goto L_08B7EB44;
    case 228u: goto L_08B7EB50;
    case 229u: goto L_08B7EB58;
    case 230u: goto L_08B7EB68;
    case 231u: goto L_08B7EB74;
    case 232u: goto L_08B7EB7C;
    case 233u: goto L_08B7EB8C;
    case 234u: goto L_08B7EB98;
    case 235u: goto L_08B7EBA0;
    case 236u: goto L_08B7EBB0;
    case 237u: goto L_08B7EBBC;
    case 238u: goto L_08B7EBC4;
    case 239u: goto L_08B7EBDC;
    case 240u: goto L_08B7EBF4;
    case 241u: goto L_08B7EC84;
    case 242u: goto L_08B7EC98;
    case 243u: goto L_08B7ED48;
    case 244u: goto L_08B7ED5C;
    case 245u: goto L_08B7ED70;
    case 246u: goto L_08B7F0A8;
    case 247u: goto L_08B7F0DC;
    case 248u: goto L_08B7F290;
    case 249u: goto L_08B7F29C;
    case 250u: goto L_08B7F3A0;
    case 251u: goto L_08B7F3B0;
    case 252u: goto L_08B7F3BC;
    case 253u: goto L_08B7F3D8;
    case 254u: goto L_08B7F3F4;
    case 255u: goto L_08B7F408;
    case 256u: goto L_08B7F41C;
    case 257u: goto L_08B7F438;
    case 258u: goto L_08B7F44C;
    case 259u: goto L_08B7F460;
    case 260u: goto L_08B7F4C0;
    case 261u: goto L_08B7F4CC;
    case 262u: goto L_08B7F4D4;
    case 263u: goto L_08B7F4D8;
    case 264u: goto L_08B7F4F8;
    case 265u: goto L_08B7F50C;
    case 266u: goto L_08B7F538;
    case 267u: goto L_08B7F558;
    case 268u: goto L_08B7F56C;
    case 269u: goto L_08B7F5AC;
    case 270u: goto L_08B7F5E4;
    case 271u: goto L_08B7F61C;
    case 272u: goto L_08B7F638;
    case 273u: goto L_08B7F664;
    case 274u: goto L_08B7F688;
    case 275u: goto L_08B7F6A4;
    case 276u: goto L_08B7F6BC;
    case 277u: goto L_08B7F6E0;
    case 278u: goto L_08B7F848;
    case 279u: goto L_08B7F854;
    case 280u: goto L_08B7F860;
    case 281u: goto L_08B7F948;
    case 282u: goto L_08B7F974;
    case 283u: goto L_08B7F9C0;
    case 284u: goto L_08B7F9E0;
    case 285u: goto L_08B7FA60;
    case 286u: goto L_08B7FA78;
    case 287u: goto L_08B7FA8C;
    case 288u: goto L_08B7FAA0;
    case 289u: goto L_08B7FAD8;
    case 290u: goto L_08B7FAEC;
    case 291u: goto L_08B7FB04;
    case 292u: goto L_08B7FB1C;
    case 293u: goto L_08B7FB30;
    case 294u: goto L_08B7FB4C;
    case 295u: goto L_08B7FBF8;
    case 296u: goto L_08B7FC70;
    case 297u: goto L_08B7FC84;
    case 298u: goto L_08B7FCA0;
    case 299u: goto L_08B7FCB8;
    case 300u: goto L_08B7FCD4;
    case 301u: goto L_08B7FCF4;
    case 302u: goto L_08B7FD10;
    case 303u: goto L_08B7FD24;
    case 304u: goto L_08B7FD3C;
    case 305u: goto L_08B7FD54;
    case 306u: goto L_08B7FD6C;
    case 307u: goto L_08B7FD88;
    case 308u: goto L_08B7FDA0;
    case 309u: goto L_08B7FDD8;
    case 310u: goto L_08B7FDE4;
    case 311u: goto L_08B7FDEC;
    case 312u: goto L_08B7FE0C;
    case 313u: goto L_08B7FE18;
    case 314u: goto L_08B7FE34;
    case 315u: goto L_08B7FE5C;
    case 316u: goto L_08B7FE64;
    case 317u: goto L_08B7FE84;
    case 318u: goto L_08B7FEAC;
    case 319u: goto L_08B7FED4;
    case 320u: goto L_08B7FEDC;
    case 321u: goto L_08B7FEFC;
    case 322u: goto L_08B7FF24;
    case 323u: goto L_08B7FF2C;
    case 324u: goto L_08B7FF4C;
    case 325u: goto L_08B7FF54;
    case 326u: goto L_08B7FF74;
    case 327u: goto L_08B7FF80;
    case 328u: goto L_08B7FF9C;
    case 329u: goto L_08B7FFA8;
    case 330u: goto L_08B7FFB0;
    case 331u: goto L_08B7FFC4;
    case 332u: goto L_08B7FFCC;
    case 333u: goto L_08B7FFEC;
    case 334u: goto L_08B7FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B7C000:
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    goto L_08B7C040;
L_08B7C040:
    rt.unsupported(0x08B7C040u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B7C050:
    // nop
    // nop
    rt.unsupported(0x08B7C05Cu, 0x088E8E7Cu, "control flow in delay slot"); return;
L_08B7C258:
    rt.unsupported(0x08B7C258u, 0x00000001u, "special? not lowered yet"); return;
L_08B7C658:
    rt.unsupported(0x08B7C658u, 0x796E6974u, "unknown not lowered yet"); return;
L_08B7C664:
    ctx.gpr[18] = (ctx.gpr[19] < static_cast<std::uint32_t>(29811) ? 1u : 0u);
    rt.unsupported(0x08B7C668u, 0x00000068u, "special? not lowered yet"); return;
L_08B7C66C:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 100u, 1u>();
    rt.unsupported(0x08B7C670u, 0x203C2078u, "unknown not lowered yet"); return;
L_08B7C680:
    rt.unsupported(0x08B7C680u, 0x796E6974u, "unknown not lowered yet"); return;
L_08B7C68C:
    rt.unsupported(0x08B7C68Cu, 0x706C6D78u, "unknown not lowered yet"); return;
L_08B7C69C:
    rt.unsupported(0x08B7C69Cu, 0x796E6974u, "unknown not lowered yet"); return;
L_08B7C6A8:
    ctx.gpr[12] = (ctx.gpr[19] < static_cast<std::uint32_t>(28024) ? 1u : 0u);
    rt.unsupported(0x08B7C6ACu, 0x00000068u, "special? not lowered yet"); return;
L_08B7C6B0:
    rt.unsupported(0x08B7C6B0u, 0x6E656C2Au, "vfpu3 not lowered yet"); return;
L_08B7C6CC:
    rt.unsupported(0x08B7C6CCu, 0x20727265u, "unknown not lowered yet"); return;
L_08B7C6E4:
    rt.unsupported(0x08B7C6E8u, 0x5254535Fu, "control flow in delay slot"); return;
L_08B7C6EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B7C6F0u, 0x4E554F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 2u, 0x08B90014u>(ctx, &aot_mem); return;
    }
    goto L_08B7C6F4;
L_08B7C6F4:
    rt.unsupported(0x08B7C6F4u, 0x00000054u, "special? not lowered yet"); return;
L_08B7C6F8:
    ctx.execute_vfpu_vcmp_ct<116u, 114u, 1u, 3u>();
    rt.unsupported(0x08B7C6FCu, 0x20286E65u, "unknown not lowered yet"); return;
L_08B7C720:
    rt.unsupported(0x08B7C720u, 0x676E654Cu, "vfpu1 not lowered yet"); return;
L_08B7C728:
    rt.unsupported(0x08B7C728u, 0x73727563u, "unknown not lowered yet"); return;
L_08B7C73C:
    rt.unsupported(0x08B7C73Cu, 0x73727563u, "unknown not lowered yet"); return;
L_08B7C7D0:
    rt.unsupported(0x08B7C7D4u, 0x088FC330u, "control flow in delay slot"); return;
L_08B7C820:
    rt.unsupported(0x08B7C820u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B7C83C:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 118u, 1u>();
    rt.unsupported(0x08B7C840u, 0x756F206Cu, "unknown not lowered yet"); return;
L_08B7C850:
    rt.unsupported(0x08B7C854u, 0x08BAC58Cu, "control flow in delay slot"); return;
L_08B7C864:
    rt.unsupported(0x08B7C864u, 0x63617473u, "vfpu0 not lowered yet"); return;
L_08B7C878:
    rt.unsupported(0x08B7C878u, 0x206E6920u, "unknown not lowered yet"); return;
L_08B7C88C:
    rt.unsupported(0x08B7C88Cu, 0x206E6920u, "unknown not lowered yet"); return;
L_08B7C938:
    rt.unsupported(0x08B7C93Cu, 0x088FD09Cu, "control flow in delay slot"); return;
L_08B7CC38:
    rt.unsupported(0x08B7CC38u, 0x000000D4u, "special? not lowered yet"); return;
L_08B7CC80:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B7CC84u, 0x4D204E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 111u, 0x08B8E1E0u>(ctx, &aot_mem); return;
    }
    goto L_08B7CC88;
L_08B7CC88:
    rt.unsupported(0x08B7CC88u, 0x4C45444Fu, "unknown not lowered yet"); return;
L_08B7CCA0:
    ctx.gpr[14] = (ctx.gpr[27] + static_cast<std::uint32_t>(24899));
    rt.unsupported(0x08B7CCA4u, 0x69662074u, "unknown not lowered yet"); return;
L_08B7CCC4:
    rt.unsupported(0x08B7CCC4u, 0x74615072u, "unknown not lowered yet"); return;
L_08B7CCD0:
    rt.unsupported(0x08B7CCD0u, 0x202E7070u, "unknown not lowered yet"); return;
L_08B7D308:
    rt.unsupported(0x08B7D308u, 0x74636576u, "unknown not lowered yet"); return;
L_08B7D320:
    rt.unsupported(0x08B7D320u, 0x76457349u, "unknown not lowered yet"); return;
L_08B7D32C:
    rt.unsupported(0x08B7D32Cu, 0x74706D45u, "unknown not lowered yet"); return;
L_08B7D334:
    rt.unsupported(0x08B7D338u, 0x546D6165u, "control flow in delay slot"); return;
L_08B7D33C:
    rt.unsupported(0x08B7D33Cu, 0x72656D69u, "unknown not lowered yet"); return;
L_08B7D34C:
    rt.unsupported(0x08B7D34Cu, 0x70537349u, "unknown not lowered yet"); return;
L_08B7D360:
    rt.unsupported(0x08B7D360u, 0x706D7544u, "unknown not lowered yet"); return;
L_08B7D378:
    rt.unsupported(0x08B7D37Cu, 0x08932478u, "control flow in delay slot"); return;
L_08B7D3F8:
    rt.unsupported(0x08B7D3F8u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B7D404:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7D408u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7D410u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 41u, 0x08B91D34u>(ctx, &aot_mem); return;
    }
    goto L_08B7D414;
L_08B7D414:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    rt.unsupported(0x08B7D418u, 0x4D2F5053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 107u, 0x08B8D968u>(ctx, &aot_mem); return;
    }
    goto L_08B7D41C;
L_08B7D41C:
    rt.unsupported(0x08B7D41Cu, 0x4549564Fu, "cop1? not lowered yet"); return;
L_08B7D42C:
    rt.unsupported(0x08B7D42Cu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B7D438:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7D43Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7D444u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 42u, 0x08B91D68u>(ctx, &aot_mem); return;
    }
    goto L_08B7D448;
L_08B7D448:
    if (ctx.gpr[1] == ctx.gpr[15]) {
    rt.unsupported(0x08B7D44Cu, 0x4D2F5053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 108u, 0x08B8D99Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7D450;
L_08B7D450:
    rt.unsupported(0x08B7D450u, 0x4549564Fu, "cop1? not lowered yet"); return;
L_08B7D460:
    // nop
    goto L_08B7D464;
L_08B7D464:
    rt.unsupported(0x08B7D464u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7D470:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7D474u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7D47Cu, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 43u, 0x08B91DA0u>(ctx, &aot_mem); return;
    }
    goto L_08B7D480;
L_08B7D480:
    rt.unsupported(0x08B7D480u, 0x002F4154u, "special? not lowered yet"); return;
L_08B7D494:
    rt.unsupported(0x08B7D494u, 0x464E4F43u, "cop1? not lowered yet"); return;
L_08B7D4A0:
    rt.unsupported(0x08B7D4A0u, 0x442E4356u, "cop1? not lowered yet"); return;
L_08B7D4A8:
    rt.unsupported(0x08B7D4A8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7D4B4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    // nop
    // nop
    rt.unsupported(0x08B7D4C4u, 0x08936800u, "control flow in delay slot"); return;
L_08B7D518:
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
    if (!ctx.execute_signed_add(0u, 0u, 0u)) { rt.arithmetic_overflow(0x08B7D554u, 0x00000020u); return; }
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B7D56Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B7D5A8:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    rt.unsupported(0x08B7D5ACu, 0x62206461u, "vfpu0 not lowered yet"); return;
L_08B7D5C0:
    rt.unsupported(0x08B7D5C0u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B7D5E0:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B7D5E4u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 34u, 0x08B98B38u>(ctx, &aot_mem); return;
    }
    goto L_08B7D5E8;
L_08B7D5E8:
    ctx.execute_vfpu_vscl_ct<109u, 69u, 118u, 1u>();
    ctx.execute_vfpu_vcmp_ct<116u, 70u, 1u, 14u>();
    ctx.gpr[12] = (0u + 0u);
    // nop
    goto L_08B7D5F8;
L_08B7D5F8:
    rt.unsupported(0x08B7D5F8u, 0x06060606u, "regimm? not lowered yet"); return;
L_08B7D614:
    ctx.gpr[19] = (ctx.gpr[27] + static_cast<std::uint32_t>(9568));
    rt.unsupported(0x08B7D618u, 0x70786520u, "unknown not lowered yet"); return;
L_08B7D640:
    rt.unsupported(0x08B7D640u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B7D658:
    ctx.execute_vfpu_vminmax(105u, 116u, 101u, 1u, false);
    rt.unsupported(0x08B7D65Cu, 0x6E692073u, "vfpu3 not lowered yet"); return;
L_08B7D670:
    ctx.execute_vfpu_vminmax(60u, 110u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 62u, 32u, 1u, 6u);
    (void)(ctx.gpr[19] < static_cast<std::uint32_t>(8306) ? 1u : 0u);
    rt.unsupported(0x08B7D67Cu, 0x20272E2Eu, "unknown not lowered yet"); return;
L_08B7D68C:
    rt.unsupported(0x08B7D68Cu, 0x69626D61u, "unknown not lowered yet"); return;
L_08B7D6C0:
    rt.unsupported(0x08B7D6C0u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B7D6DC:
    rt.unsupported(0x08B7D6DCu, 0x78656E75u, "unknown not lowered yet"); return;
L_08B7D6F0:
    rt.unsupported(0x08B7D6F0u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B7D708:
    rt.unsupported(0x08B7D708u, 0x69687760u, "unknown not lowered yet"); return;
L_08B7D728:
    rt.unsupported(0x08B7D728u, 0x20273D60u, "unknown not lowered yet"); return;
L_08B7D740:
    ctx.execute_vfpu_vcmp_ct<111u, 32u, 1u, 14u>();
    rt.unsupported(0x08B7D744u, 0x20706F6Fu, "unknown not lowered yet"); return;
L_08B7DA50:
    rt.unsupported(0x08B7DA54u, 0x089468E0u, "control flow in delay slot"); return;
L_08B7DA70:
    rt.unsupported(0x08B7DA70u, 0x73656F44u, "unknown not lowered yet"); return;
L_08B7DA84:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 103u, 1u>();
    rt.unsupported(0x08B7DA88u, 0x6172656Eu, "vfpu0 not lowered yet"); return;
L_08B7DA9C:
    rt.unsupported(0x08B7DA9Cu, 0x46746547u, "cop1? not lowered yet"); return;
L_08B7DAAC:
    rt.unsupported(0x08B7DAACu, 0x006E6F69u, "special? not lowered yet"); return;
L_08B7DAB0:
    rt.unsupported(0x08B7DAB4u, 0x0894656Cu, "control flow in delay slot"); return;
L_08B7DAE8:
    rt.unsupported(0x08B7DAE8u, 0x74636576u, "unknown not lowered yet"); return;
L_08B7DB00:
    rt.unsupported(0x08B7DB00u, 0x6E696472u, "vfpu3 not lowered yet"); return;
L_08B7DCB0:
    ctx.execute_vfpu_vcmp_ct<111u, 114u, 1u, 7u>();
    rt.unsupported(0x08B7DCB4u, 0x72745364u, "unknown not lowered yet"); return;
L_08B7DCC8:
    rt.unsupported(0x08B7DCC8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7DCD4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7DCD8u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7DCE0u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 65u, 0x08B92604u>(ctx, &aot_mem); return;
    }
    goto L_08B7DCE4;
L_08B7DCE4:
    rt.unsupported(0x08B7DCE4u, 0x422F4154u, "unknown not lowered yet"); return;
L_08B7DCF4:
    rt.unsupported(0x08B7DCF4u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7DD00:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7DD04u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7DD0Cu, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 67u, 0x08B92630u>(ctx, &aot_mem); return;
    }
    goto L_08B7DD10;
L_08B7DD10:
    rt.unsupported(0x08B7DD10u, 0x422F4154u, "unknown not lowered yet"); return;
L_08B7DD20:
    rt.unsupported(0x08B7DD20u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7DD2C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7DD30u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7DD38u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 68u, 0x08B9265Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7DD3C;
L_08B7DD3C:
    rt.unsupported(0x08B7DD3Cu, 0x4D2F4154u, "unknown not lowered yet"); return;
L_08B7DD4C:
    rt.unsupported(0x08B7DD4Cu, 0x43534944u, "unknown not lowered yet"); return;
L_08B7DD58:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7DD5Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7DD64u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 69u, 0x08B92688u>(ctx, &aot_mem); return;
    }
    goto L_08B7DD68;
L_08B7DD68:
    rt.unsupported(0x08B7DD68u, 0x4D2F4154u, "unknown not lowered yet"); return;
L_08B7DD78:
    rt.unsupported(0x08B7DD78u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7DD84:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7DD88u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7DD90u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 70u, 0x08B926B4u>(ctx, &aot_mem); return;
    }
    goto L_08B7DD94;
L_08B7DD94:
    rt.unsupported(0x08B7DD94u, 0x4D2F4154u, "unknown not lowered yet"); return;
L_08B7DDA0:
    rt.unsupported(0x08B7DDA0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7DDAC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7DDB0u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B7DDB8u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 71u, 0x08B926DCu>(ctx, &aot_mem); return;
    }
    goto L_08B7DDBC;
L_08B7DDBC:
    rt.unsupported(0x08B7DDBCu, 0x4D2F4154u, "unknown not lowered yet"); return;
L_08B7DDCC:
    rt.unsupported(0x08B7DDD0u, 0x089558B0u, "control flow in delay slot"); return;
L_08B7DE10:
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08B7DE50u, 0x00007070u, "special? not lowered yet"); return;
L_08B7E1D8:
    rt.unsupported(0x08B7E1DCu, 0x08974208u, "control flow in delay slot"); return;
L_08B7E308:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B7E30Cu, 0x72724520u, "unknown not lowered yet"); return;
L_08B7E328:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B7E32Cu, 0x6E795320u, "vfpu3 not lowered yet"); return;
L_08B7E354:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    ctx.execute_vfpu_vminmax(32u, 77u, 101u, 1u, false);
    rt.unsupported(0x08B7E35Cu, 0x2079726Fu, "unknown not lowered yet"); return;
L_08B7E374:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B7E378u, 0x6E654720u, "vfpu3 not lowered yet"); return;
L_08B7E3BC:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B7E3C0u, 0x72724520u, "unknown not lowered yet"); return;
L_08B7E3E4:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B7E3E8u, 0x6B6E5520u, "unknown not lowered yet"); return;
L_08B7E3F8:
    rt.unsupported(0x08B7E3F8u, 0x435F5349u, "unknown not lowered yet"); return;
L_08B7E408:
    rt.unsupported(0x08B7E408u, 0x00004445u, "special? not lowered yet"); return;
L_08B7E40C:
    rt.unsupported(0x08B7E410u, 0x53545543u, "control flow in delay slot"); return;
L_08B7E414:
    rt.unsupported(0x08B7E414u, 0x454E4543u, "cop1? not lowered yet"); return;
L_08B7E424:
    rt.unsupported(0x08B7E424u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B7E434:
    rt.unsupported(0x08B7E434u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B7E438:
    if (ctx.gpr[27] == ctx.gpr[14]) {
    rt.unsupported(0x08B7E43Cu, 0x70697263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 82u, 0x08B9B984u>(ctx, &aot_mem); return;
    }
    goto L_08B7E440;
L_08B7E440:
    rt.unsupported(0x08B7E440u, 0x43646574u, "unknown not lowered yet"); return;
L_08B7E44C:
    rt.unsupported(0x08B7E44Cu, 0x636F7250u, "vfpu0 not lowered yet"); return;
L_08B7E458:
    rt.unsupported(0x08B7E458u, 0x43646574u, "unknown not lowered yet"); return;
L_08B7E464:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    ctx.execute_vfpu_compare3(101u, 99u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 81u, 0x08B979B4u>(ctx, &aot_mem); return;
    }
    goto L_08B7E46C;
L_08B7E46C:
    rt.unsupported(0x08B7E46Cu, 0x726F4672u, "unknown not lowered yet"); return;
L_08B7E484:
    rt.unsupported(0x08B7E484u, 0x41746547u, "unknown not lowered yet"); return;
L_08B7E498:
    rt.unsupported(0x08B7E498u, 0x00000073u, "special? not lowered yet"); return;
L_08B7E4B0:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B7E4B8u, 0x6E652064u, "vfpu3 not lowered yet"); return;
L_08B7E4CC:
    rt.unsupported(0x08B7E4CCu, 0x45726574u, "cop1? not lowered yet"); return;
L_08B7E570:
    rt.unsupported(0x08B7E570u, 0x796E6974u, "unknown not lowered yet"); return;
L_08B7E57C:
    ctx.gpr[18] = (ctx.gpr[19] < static_cast<std::uint32_t>(29811) ? 1u : 0u);
    rt.unsupported(0x08B7E580u, 0x00000068u, "special? not lowered yet"); return;
L_08B7E584:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 100u, 1u>();
    rt.unsupported(0x08B7E588u, 0x203C2078u, "unknown not lowered yet"); return;
L_08B7E598:
    rt.unsupported(0x08B7E598u, 0x796E6974u, "unknown not lowered yet"); return;
L_08B7E5A4:
    ctx.gpr[12] = (ctx.gpr[19] < static_cast<std::uint32_t>(28024) ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[3] - ctx.gpr[16]);
    // nop
    // nop
    rt.unsupported(0x08B7E5B4u, 0x68547265u, "unknown not lowered yet"); return;
L_08B7E5BC:
    rt.unsupported(0x08B7E5BCu, 0x746E6573u, "unknown not lowered yet"); return;
L_08B7E5D8:
    rt.unsupported(0x08B7E5D8u, 0x746E6573u, "unknown not lowered yet"); return;
L_08B7E5F4:
    rt.unsupported(0x08B7E5F4u, 0x6E694621u, "vfpu3 not lowered yet"); return;
L_08B7E628:
    rt.unsupported(0x08B7E628u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B7E634:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 73u, 0x08B927BCu>(ctx, &aot_mem); return;
    }
    goto L_08B7E644;
L_08B7E644:
    rt.unsupported(0x08B7E644u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B7E650:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 75u, 0x08B927D8u>(ctx, &aot_mem); return;
    }
    goto L_08B7E660;
L_08B7E660:
    rt.unsupported(0x08B7E660u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B7E66C:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 76u, 0x08B927F4u>(ctx, &aot_mem); return;
    }
    goto L_08B7E67C;
L_08B7E67C:
    rt.unsupported(0x08B7E67Cu, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B7E688:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] | 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 77u, 0x08B92810u>(ctx, &aot_mem); return;
    }
    goto L_08B7E698;
L_08B7E698:
    rt.unsupported(0x08B7E698u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B7E6A4:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] ^ 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 79u, 0x08B9282Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7E6B4;
L_08B7E6B4:
    rt.unsupported(0x08B7E6B4u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B7E6C0:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 29u, 0x08B96390u>(ctx, &aot_mem); return;
    }
    goto L_08B7E6D0;
L_08B7E6D0:
    rt.unsupported(0x08B7E6D0u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B7E6DC:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 30u, 0x08B963B4u>(ctx, &aot_mem); return;
    }
    goto L_08B7E6EC;
L_08B7E6EC:
    rt.unsupported(0x08B7E6ECu, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B7E6F8:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 31u, 0x08B963D8u>(ctx, &aot_mem); return;
    }
    goto L_08B7E708;
L_08B7E708:
    rt.unsupported(0x08B7E708u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B7E714:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 32u, 0x08B963FCu>(ctx, &aot_mem); return;
    }
    goto L_08B7E724;
L_08B7E724:
    rt.unsupported(0x08B7E724u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B7E730:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 34u, 0x08B96420u>(ctx, &aot_mem); return;
    }
    goto L_08B7E740;
L_08B7E740:
    rt.unsupported(0x08B7E740u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B7E74C:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 33u, 0x08B9641Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7E75C;
L_08B7E75C:
    rt.unsupported(0x08B7E75Cu, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B7E768:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 35u, 0x08B96440u>(ctx, &aot_mem); return;
    }
    goto L_08B7E778;
L_08B7E778:
    rt.unsupported(0x08B7E778u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B7E784:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 36u, 0x08B96464u>(ctx, &aot_mem); return;
    }
    goto L_08B7E794;
L_08B7E794:
    rt.unsupported(0x08B7E794u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B7E7A0:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 37u, 0x08B96488u>(ctx, &aot_mem); return;
    }
    goto L_08B7E7B0;
L_08B7E7B0:
    rt.unsupported(0x08B7E7B0u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B7E7BC:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 39u, 0x08B964ACu>(ctx, &aot_mem); return;
    }
    goto L_08B7E7CC;
L_08B7E7CC:
    rt.unsupported(0x08B7E7CCu, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B7E7D8:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 38u, 0x08B964A8u>(ctx, &aot_mem); return;
    }
    goto L_08B7E7E8;
L_08B7E7E8:
    rt.unsupported(0x08B7E7E8u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B7E7F4:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 41u, 0x08B964CCu>(ctx, &aot_mem); return;
    }
    goto L_08B7E804;
L_08B7E804:
    rt.unsupported(0x08B7E804u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B7E810:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 43u, 0x08B964F0u>(ctx, &aot_mem); return;
    }
    goto L_08B7E820;
L_08B7E820:
    rt.unsupported(0x08B7E820u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B7E82C:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 46u, 0x08B96514u>(ctx, &aot_mem); return;
    }
    goto L_08B7E83C;
L_08B7E83C:
    rt.unsupported(0x08B7E83Cu, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B7E848:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 48u, 0x08B96538u>(ctx, &aot_mem); return;
    }
    goto L_08B7E858;
L_08B7E858:
    rt.unsupported(0x08B7E858u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B7E864:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 47u, 0x08B96534u>(ctx, &aot_mem); return;
    }
    goto L_08B7E874;
L_08B7E874:
    rt.unsupported(0x08B7E874u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B7E880:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 50u, 0x08B96558u>(ctx, &aot_mem); return;
    }
    goto L_08B7E890;
L_08B7E890:
    rt.unsupported(0x08B7E890u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B7E89C:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 52u, 0x08B9657Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7E8AC;
L_08B7E8AC:
    rt.unsupported(0x08B7E8ACu, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B7E8B8:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 53u, 0x08B965A0u>(ctx, &aot_mem); return;
    }
    goto L_08B7E8C8;
L_08B7E8C8:
    rt.unsupported(0x08B7E8C8u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B7E8D4:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 55u, 0x08B965C4u>(ctx, &aot_mem); return;
    }
    goto L_08B7E8E4;
L_08B7E8E4:
    rt.unsupported(0x08B7E8E4u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B7E8F0:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 54u, 0x08B965C0u>(ctx, &aot_mem); return;
    }
    goto L_08B7E900;
L_08B7E900:
    rt.unsupported(0x08B7E900u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B7E90C:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 56u, 0x08B965E4u>(ctx, &aot_mem); return;
    }
    goto L_08B7E91C;
L_08B7E91C:
    rt.unsupported(0x08B7E91Cu, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B7E928:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 57u, 0x08B96608u>(ctx, &aot_mem); return;
    }
    goto L_08B7E938;
L_08B7E938:
    rt.unsupported(0x08B7E938u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B7E944:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 58u, 0x08B9662Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7E954;
L_08B7E954:
    rt.unsupported(0x08B7E954u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B7E960:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 60u, 0x08B96650u>(ctx, &aot_mem); return;
    }
    goto L_08B7E970;
L_08B7E970:
    rt.unsupported(0x08B7E970u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B7E97C:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 59u, 0x08B9664Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7E98C;
L_08B7E98C:
    rt.unsupported(0x08B7E98Cu, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B7E998:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 61u, 0x08B96670u>(ctx, &aot_mem); return;
    }
    goto L_08B7E9A8;
L_08B7E9A8:
    rt.unsupported(0x08B7E9A8u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B7E9B4:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 62u, 0x08B96694u>(ctx, &aot_mem); return;
    }
    goto L_08B7E9C4;
L_08B7E9C4:
    rt.unsupported(0x08B7E9C4u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B7E9D0:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 63u, 0x08B966B8u>(ctx, &aot_mem); return;
    }
    goto L_08B7E9E0;
L_08B7E9E0:
    if (ctx.gpr[10] != ctx.gpr[1]) {
    ctx.gpr[15] = (ctx.gpr[26] < static_cast<std::uint32_t>(18756) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 77u, 0x08B9B678u>(ctx, &aot_mem); return;
    }
    goto L_08B7E9E8;
L_08B7E9E8:
    rt.unsupported(0x08B7E9E8u, 0x4F4C5F4Du, "unknown not lowered yet"); return;
L_08B7E9F4:
    // nop
    goto L_08B7E9F8;
L_08B7E9F8:
    rt.unsupported(0x08B7E9F8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7EA04:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7EA08u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B7EA14u);
    rt.unsupported(0x08B7EA10u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B7EA14u) goto L_08B7EA14;
    return;
L_08B7EA10:
    rt.unsupported(0x08B7EA10u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7EA14:
    rt.unsupported(0x08B7EA14u, 0x45532F4Fu, "cop1? not lowered yet"); return;
L_08B7EA20:
    rt.unsupported(0x08B7EA20u, 0x00005741u, "special? not lowered yet"); return;
L_08B7EA24:
    if (ctx.gpr[10] != ctx.gpr[1]) {
    ctx.gpr[15] = (ctx.gpr[26] < static_cast<std::uint32_t>(18756) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 79u, 0x08B9B6BCu>(ctx, &aot_mem); return;
    }
    goto L_08B7EA2C;
L_08B7EA2C:
    ctx.gpr[20] = (ctx.gpr[10] + static_cast<std::uint32_t>(17747));
    rt.unsupported(0x08B7EA30u, 0x41522E73u, "unknown not lowered yet"); return;
L_08B7EA38:
    rt.unsupported(0x08B7EA38u, 0x6B656573u, "unknown not lowered yet"); return;
L_08B7EA64:
    rt.unsupported(0x08B7EA64u, 0x72646461u, "unknown not lowered yet"); return;
L_08B7EA88:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B7EA90u, 0x43206465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 85u, 0x08B97C24u>(ctx, &aot_mem); return;
    }
    goto L_08B7EA94;
L_08B7EA94:
    ctx.execute_vfpu_vscl_ct<111u, 109u, 109u, 1u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29806));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B7EAA0;
L_08B7EAA0:
    rt.unsupported(0x08B7EAA0u, 0x414F4C0Au, "unknown not lowered yet"); return;
L_08B7EAB0:
    rt.unsupported(0x08B7EAB0u, 0x4E414220u, "unknown not lowered yet"); return;
L_08B7EABC:
    rt.unsupported(0x08B7EABCu, 0x72617453u, "unknown not lowered yet"); return;
L_08B7EAE0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B7EAE4u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B7EAF4:
    rt.unsupported(0x08B7EAF4u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7EAF8u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B7EB10:
    rt.unsupported(0x08B7EB10u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7EB14u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B7EB20:
    rt.unsupported(0x08B7EB20u, 0x41494420u, "unknown not lowered yet"); return;
L_08B7EB2C:
    (void)(ctx.gpr[1] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B7EB34;
L_08B7EB34:
    rt.unsupported(0x08B7EB34u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7EB38u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B7EB44:
    rt.unsupported(0x08B7EB44u, 0x41494420u, "unknown not lowered yet"); return;
L_08B7EB50:
    (void)(ctx.gpr[9] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B7EB58;
L_08B7EB58:
    rt.unsupported(0x08B7EB58u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7EB5Cu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B7EB68:
    rt.unsupported(0x08B7EB68u, 0x41494420u, "unknown not lowered yet"); return;
L_08B7EB74:
    (void)(ctx.gpr[17] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B7EB7C;
L_08B7EB7C:
    rt.unsupported(0x08B7EB7Cu, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7EB80u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B7EB8C:
    rt.unsupported(0x08B7EB8Cu, 0x41494420u, "unknown not lowered yet"); return;
L_08B7EB98:
    (void)(ctx.gpr[25] & 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B7EBA0;
L_08B7EBA0:
    rt.unsupported(0x08B7EBA0u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7EBA4u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B7EBB0:
    rt.unsupported(0x08B7EBB0u, 0x41494420u, "unknown not lowered yet"); return;
L_08B7EBBC:
    (void)(ctx.gpr[1] | 21583u);
    if (0u == 0u) (void)(0u);
    goto L_08B7EBC4;
L_08B7EBC4:
    rt.unsupported(0x08B7EBC4u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B7EBDC:
    rt.unsupported(0x08B7EBDCu, 0x20786673u, "unknown not lowered yet"); return;
L_08B7EBF4:
    rt.unsupported(0x08B7EBF4u, 0x20776F6Eu, "unknown not lowered yet"); return;
L_08B7EC84:
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(8224) ? 1u : 0u);
    (void)(ctx.gpr[1] + static_cast<std::uint32_t>(26162));
    rt.unsupported(0x08B7EC8Cu, 0x20732520u, "unknown not lowered yet"); return;
L_08B7EC98:
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(8224));
    rt.unsupported(0x08B7EC9Cu, 0x2066322Eu, "unknown not lowered yet"); return;
L_08B7ED48:
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B7ED5C;
L_08B7ED5C:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B7ED70;
L_08B7ED70:
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // nop
    rt.unsupported(0x08B7ED8Cu, 0x0899BD80u, "control flow in delay slot"); return;
L_08B7F0A8:
    rt.unsupported(0x08B7F0A8u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B7F0DC:
    rt.unsupported(0x08B7F0DCu, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B7F290:
    rt.unsupported(0x08B7F290u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B7F29C:
    rt.unsupported(0x08B7F29Cu, 0x41435449u, "unknown not lowered yet"); return;
L_08B7F3A0:
    rt.unsupported(0x08B7F3A0u, 0x63656843u, "vfpu0 not lowered yet"); return;
L_08B7F3B0:
    rt.unsupported(0x08B7F3B0u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B7F3BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    rt.unsupported(0x08B7F3C0u, 0x4E68744Eu, "unknown not lowered yet"); return;
L_08B7F3D8:
    rt.unsupported(0x08B7F3D8u, 0x4D746553u, "unknown not lowered yet"); return;
L_08B7F3F4:
    rt.unsupported(0x08B7F3F4u, 0x4D746553u, "unknown not lowered yet"); return;
L_08B7F408:
    ctx.execute_vfpu_vscl_ct<71u, 101u, 110u, 1u>();
    ctx.execute_vfpu_vscl_ct<114u, 97u, 116u, 1u>();
    rt.unsupported(0x08B7F410u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B7F41C:
    rt.unsupported(0x08B7F41Cu, 0x69726353u, "unknown not lowered yet"); return;
L_08B7F438:
    rt.unsupported(0x08B7F438u, 0x69747845u, "unknown not lowered yet"); return;
L_08B7F44C:
    rt.unsupported(0x08B7F44Cu, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08B7F460:
    rt.unsupported(0x08B7F464u, 0x089E5290u, "control flow in delay slot"); return;
L_08B7F4C0:
    rt.unsupported(0x08B7F4C0u, 0x454C4544u, "cop1? not lowered yet"); return;
L_08B7F4CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B7F4D0u, 0x415F4E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 5u, 0x08B90A00u>(ctx, &aot_mem); return;
    }
    goto L_08B7F4D4;
L_08B7F4D4:
    ctx.gpr[8] = (ctx.lo);
    goto L_08B7F4D8;
L_08B7F4D8:
    rt.unsupported(0x08B7F4D8u, 0x78656E75u, "unknown not lowered yet"); return;
L_08B7F4F8:
    rt.unsupported(0x08B7F4F8u, 0x20646162u, "unknown not lowered yet"); return;
L_08B7F50C:
    rt.unsupported(0x08B7F50Cu, 0x20646162u, "unknown not lowered yet"); return;
L_08B7F538:
    rt.unsupported(0x08B7F538u, 0x20646162u, "unknown not lowered yet"); return;
L_08B7F558:
    rt.unsupported(0x08B7F558u, 0x20646162u, "unknown not lowered yet"); return;
L_08B7F56C:
    rt.unsupported(0x08B7F56Cu, 0x74726976u, "unknown not lowered yet"); return;
L_08B7F5AC:
    rt.unsupported(0x08B7F5ACu, 0x74207325u, "unknown not lowered yet"); return;
L_08B7F5E4:
    rt.unsupported(0x08B7F5E4u, 0x74207325u, "unknown not lowered yet"); return;
L_08B7F61C:
    rt.unsupported(0x08B7F61Cu, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
L_08B7F638:
    rt.unsupported(0x08B7F638u, 0x756C6176u, "unknown not lowered yet"); return;
L_08B7F664:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B7F668u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B7F688:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B7F68Cu, 0x2074706Du, "unknown not lowered yet"); return;
L_08B7F6A4:
    ctx.execute_vfpu_vhdp(112u, 101u, 114u, 1u);
    rt.unsupported(0x08B7F6A8u, 0x206D726Fu, "unknown not lowered yet"); return;
L_08B7F6BC:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B7F6C0u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B7F6E0:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B7F6E4u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B7F848:
    rt.unsupported(0x08B7F848u, 0x796E6974u, "unknown not lowered yet"); return;
L_08B7F854:
    ctx.gpr[18] = (ctx.gpr[19] < static_cast<std::uint32_t>(29811) ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[3] - ctx.gpr[16]);
    // nop
    goto L_08B7F860;
L_08B7F860:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B7F868u, 0x78652064u, "unknown not lowered yet"); return;
L_08B7F948:
    rt.unsupported(0x08B7F948u, 0x78655443u, "unknown not lowered yet"); return;
L_08B7F974:
    rt.unsupported(0x08B7F974u, 0x78655443u, "unknown not lowered yet"); return;
L_08B7F9C0:
    rt.unsupported(0x08B7F9C0u, 0x72745843u, "unknown not lowered yet"); return;
L_08B7F9E0:
    rt.unsupported(0x08B7F9E4u, 0x08BAF834u, "control flow in delay slot"); return;
L_08B7FA60:
    rt.unsupported(0x08B7FA60u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B7FA78:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14948));
    ctx.execute_vfpu_vscl_ct<115u, 32u, 110u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[1] | ctx.gpr[7]);
    goto L_08B7FA8C;
L_08B7FA8C:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08B7FA90u, 0x6E692073u, "vfpu3 not lowered yet"); return;
L_08B7FAA0:
    rt.unsupported(0x08B7FAA0u, 0x69626D61u, "unknown not lowered yet"); return;
L_08B7FAD8:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B7FAE0u, 0x756E2064u, "unknown not lowered yet"); return;
L_08B7FAEC:
    rt.unsupported(0x08B7FAECu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B7FB04:
    rt.unsupported(0x08B7FB04u, 0x69666E75u, "unknown not lowered yet"); return;
L_08B7FB1C:
    rt.unsupported(0x08B7FB1Cu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B7FB30:
    rt.unsupported(0x08B7FB30u, 0x61637365u, "vfpu0 not lowered yet"); return;
L_08B7FB4C:
    rt.unsupported(0x08B7FB4Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B7FBF8:
    (void)(ctx.gpr[1] + static_cast<std::uint32_t>(24868));
    rt.unsupported(0x08B7FBFCu, 0x41346120u, "unknown not lowered yet"); return;
L_08B7FC70:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B7FC74u, 0x74206465u, "unknown not lowered yet"); return;
L_08B7FC84:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B7FC88u, 0x61207972u, "vfpu0 not lowered yet"); return;
L_08B7FCA0:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B7FCA4u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08B7FCB8:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B7FCBCu, 0x74206465u, "unknown not lowered yet"); return;
L_08B7FCD4:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08B7FCDCu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B7FCF4:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08B7FCFCu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B7FD10:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 58u, 32u, 1u>();
    rt.unsupported(0x08B7FD18u, 0x7974706Du, "unknown not lowered yet"); return;
L_08B7FD24:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08B7FD2Cu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B7FD3C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B7FD40u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08B7FD54:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B7FD58u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08B7FD6C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B7FD70u, 0x61702072u, "vfpu0 not lowered yet"); return;
L_08B7FD88:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 100u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<99u, 117u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 116u, 32u, 1u>();
    rt.unsupported(0x08B7FD98u, 0x7974706Du, "unknown not lowered yet"); return;
L_08B7FDA0:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B7FDA4u, 0x756E2072u, "unknown not lowered yet"); return;
L_08B7FDD8:
    rt.unsupported(0x08B7FDD8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FDE4:
    rt.unsupported(0x08B7FDE8u, 0x54412E48u, "control flow in delay slot"); return;
L_08B7FDEC:
    rt.unsupported(0x08B7FDECu, 0x00000033u, "special? not lowered yet"); return;
L_08B7FE0C:
    rt.unsupported(0x08B7FE0Cu, 0x434F5256u, "unknown not lowered yet"); return;
L_08B7FE18:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B7FE28u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FE34:
    rt.unsupported(0x08B7FE34u, 0x41524150u, "unknown not lowered yet"); return;
L_08B7FE5C:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 8u, 0x08B90BB8u>(ctx, &aot_mem); return;
    }
    goto L_08B7FE64;
L_08B7FE64:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B7FE78u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FE84:
    rt.unsupported(0x08B7FE84u, 0x4C464356u, "unknown not lowered yet"); return;
L_08B7FEAC:
    rt.unsupported(0x08B7FEACu, 0x45564157u, "cop1? not lowered yet"); return;
L_08B7FED4:
    rt.unsupported(0x08B7FED8u, 0x54412E48u, "control flow in delay slot"); return;
L_08B7FEDC:
    rt.unsupported(0x08B7FEDCu, 0x00000033u, "special? not lowered yet"); return;
L_08B7FEFC:
    rt.unsupported(0x08B7FEFCu, 0x41505345u, "unknown not lowered yet"); return;
L_08B7FF24:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    ctx.gpr[14] = (ctx.gpr[18] < static_cast<std::uint32_t>(20297) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 95u, 0x08B9343Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7FF2C;
L_08B7FF2C:
    rt.unsupported(0x08B7FF2Cu, 0x00335441u, "special? not lowered yet"); return;
L_08B7FF4C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 57u, 0x08B9245Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7FF54;
L_08B7FF54:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B7FF68u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FF74:
    rt.unsupported(0x08B7FF74u, 0x45544157u, "cop1? not lowered yet"); return;
L_08B7FF80:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B7FF90u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FF9C:
    rt.unsupported(0x08B7FF9Cu, 0x4D574153u, "unknown not lowered yet"); return;
L_08B7FFA8:
    rt.unsupported(0x08B7FFACu, 0x504F4F4Cu, "control flow in delay slot"); return;
L_08B7FFB0:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    rt.unsupported(0x08B7FFB8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FFC4:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 59u, 0x08B924D4u>(ctx, &aot_mem); return;
    }
    goto L_08B7FFCC;
L_08B7FFCC:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B7FFE0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B7FFEC:
    rt.unsupported(0x08B7FFECu, 0x45544157u, "cop1? not lowered yet"); return;
L_08B7FFF8:
    // nop
    // nop
    ctx.pc = 0x08B80000u; return;
}

void recomp_unit_0222(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0222_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_222(Runtime &runtime) {
    runtime.register_generated_unit(222u, 0x08B7C000u, 16384u, &recomp_unit_0222, &recomp_unit_0222_entry);
    runtime.register_function(0x08B7C000u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C040u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C050u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C258u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C658u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C664u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C66Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C680u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C68Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C69Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6CCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6E4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6ECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6F4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C6F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C720u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C728u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C73Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C7D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C820u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C83Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C850u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C864u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C878u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C88Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7C938u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7CC38u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7CC80u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7CC88u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7CCA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7CCC4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7CCD0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D308u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D320u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D32Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D334u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D33Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D34Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D360u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D378u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D3F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D404u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D414u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D41Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D42Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D438u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D448u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D450u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D460u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D464u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D470u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D480u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D494u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D4A0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D4A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D4B4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D518u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D5A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D5C0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D5E0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D5E8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D5F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D614u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D640u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D658u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D670u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D68Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D6C0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D6DCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D6F0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D708u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D728u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7D740u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DA50u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DA70u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DA84u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DA9Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DAACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DAB0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DAE8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DB00u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DCB0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DCC8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DCD4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DCE4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DCF4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD00u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD10u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD20u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD2Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD3Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD4Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD58u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD68u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD78u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD84u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DD94u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DDA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DDACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DDBCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DDCCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7DE10u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E1D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E308u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E328u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E354u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E374u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E3BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E3E4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E3F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E408u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E40Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E414u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E424u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E434u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E438u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E440u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E44Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E458u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E464u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E46Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E484u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E498u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E4B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E4CCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E570u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E57Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E584u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E598u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E5A4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E5BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E5D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E5F4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E628u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E634u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E644u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E650u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E660u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E66Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E67Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E688u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E698u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6A4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6B4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6C0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6DCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6ECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E6F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E708u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E714u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E724u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E730u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E740u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E74Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E75Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E768u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E778u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E784u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E794u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7A0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7CCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7E8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E7F4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E804u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E810u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E820u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E82Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E83Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E848u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E858u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E864u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E874u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E880u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E890u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E89Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E8ACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E8B8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E8C8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E8D4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E8E4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E8F0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E900u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E90Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E91Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E928u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E938u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E944u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E954u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E960u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E970u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E97Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E98Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E998u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9B4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9C4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9D0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9E0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9E8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9F4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7E9F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA04u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA10u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA14u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA20u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA24u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA2Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA38u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA64u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA88u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EA94u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EAA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EAB0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EABCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EAE0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EAF4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB10u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB20u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB2Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB34u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB44u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB50u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB58u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB68u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB74u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB7Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB8Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EB98u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EBA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EBB0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EBBCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EBC4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EBDCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EBF4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EC84u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7EC98u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7ED48u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7ED5Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7ED70u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F0A8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F0DCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F290u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F29Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F3A0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F3B0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F3BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F3D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F3F4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F408u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F41Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F438u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F44Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F460u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F4C0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F4CCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F4D4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F4D8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F4F8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F50Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F538u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F558u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F56Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F5ACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F5E4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F61Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F638u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F664u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F688u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F6A4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F6BCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F6E0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F848u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F854u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F860u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F948u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F974u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F9C0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7F9E0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FA60u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FA78u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FA8Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FAA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FAD8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FAECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FB04u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FB1Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FB30u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FB4Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FBF8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FC70u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FC84u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FCA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FCB8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FCD4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FCF4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FD10u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FD24u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FD3Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FD54u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FD6Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FD88u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FDA0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FDD8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FDE4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FDECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FE0Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FE18u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FE34u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FE5Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FE64u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FE84u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FEACu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FED4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FEDCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FEFCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF24u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF2Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF4Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF54u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF74u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF80u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FF9Cu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FFA8u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FFB0u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FFC4u, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FFCCu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FFECu, &recomp_unit_0222, "recomp_unit_0222");
    runtime.register_function(0x08B7FFF8u, &recomp_unit_0222, "recomp_unit_0222");
}
} // namespace psprecomp
