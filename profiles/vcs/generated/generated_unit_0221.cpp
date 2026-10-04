#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0221[3812] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0,
    13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 51,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 84, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104,
};
void recomp_unit_0221_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B78434u;
        entry_id = (entry_delta < 15248u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0221[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B78434;
    case 2u: goto L_08B79830;
    case 3u: goto L_08B798C8;
    case 4u: goto L_08B79C88;
    case 5u: goto L_08B79CB0;
    case 6u: goto L_08B79CBC;
    case 7u: goto L_08B79CCC;
    case 8u: goto L_08B79CD8;
    case 9u: goto L_08B79CE0;
    case 10u: goto L_08B79CEC;
    case 11u: goto L_08B79D10;
    case 12u: goto L_08B79D2C;
    case 13u: goto L_08B79D34;
    case 14u: goto L_08B79D3C;
    case 15u: goto L_08B79D50;
    case 16u: goto L_08B79D58;
    case 17u: goto L_08B79D5C;
    case 18u: goto L_08B79D78;
    case 19u: goto L_08B79D94;
    case 20u: goto L_08B79DB4;
    case 21u: goto L_08B79DD4;
    case 22u: goto L_08B79DEC;
    case 23u: goto L_08B79E08;
    case 24u: goto L_08B79E28;
    case 25u: goto L_08B79E48;
    case 26u: goto L_08B79E64;
    case 27u: goto L_08B79E78;
    case 28u: goto L_08B79E84;
    case 29u: goto L_08B79EA8;
    case 30u: goto L_08B79EB4;
    case 31u: goto L_08B79ED4;
    case 32u: goto L_08B79EE0;
    case 33u: goto L_08B79F04;
    case 34u: goto L_08B79F10;
    case 35u: goto L_08B79F38;
    case 36u: goto L_08B79F44;
    case 37u: goto L_08B79F60;
    case 38u: goto L_08B79F6C;
    case 39u: goto L_08B79F8C;
    case 40u: goto L_08B79F98;
    case 41u: goto L_08B79FBC;
    case 42u: goto L_08B79FC8;
    case 43u: goto L_08B79FEC;
    case 44u: goto L_08B79FF8;
    case 45u: goto L_08B7A018;
    case 46u: goto L_08B7A024;
    case 47u: goto L_08B7A038;
    case 48u: goto L_08B7A090;
    case 49u: goto L_08B7A09C;
    case 50u: goto L_08B7A0AC;
    case 51u: goto L_08B7A0B0;
    case 52u: goto L_08B7A0C4;
    case 53u: goto L_08B7A0DC;
    case 54u: goto L_08B7A0F0;
    case 55u: goto L_08B7A110;
    case 56u: goto L_08B7A138;
    case 57u: goto L_08B7A16C;
    case 58u: goto L_08B7A2A0;
    case 59u: goto L_08B7A3C0;
    case 60u: goto L_08B7A3F0;
    case 61u: goto L_08B7A408;
    case 62u: goto L_08B7A420;
    case 63u: goto L_08B7A438;
    case 64u: goto L_08B7A4B0;
    case 65u: goto L_08B7A4C4;
    case 66u: goto L_08B7A4D8;
    case 67u: goto L_08B7A4E4;
    case 68u: goto L_08B7A6E0;
    case 69u: goto L_08B7A700;
    case 70u: goto L_08B7A720;
    case 71u: goto L_08B7A734;
    case 72u: goto L_08B7A748;
    case 73u: goto L_08B7A858;
    case 74u: goto L_08B7A8A8;
    case 75u: goto L_08B7A8C0;
    case 76u: goto L_08B7A8D4;
    case 77u: goto L_08B7A9C8;
    case 78u: goto L_08B7A9D0;
    case 79u: goto L_08B7A9DC;
    case 80u: goto L_08B7A9E4;
    case 81u: goto L_08B7A9F8;
    case 82u: goto L_08B7AA14;
    case 83u: goto L_08B7AA28;
    case 84u: goto L_08B7AA40;
    case 85u: goto L_08B7AA44;
    case 86u: goto L_08B7AA4C;
    case 87u: goto L_08B7AA5C;
    case 88u: goto L_08B7AB18;
    case 89u: goto L_08B7AB2C;
    case 90u: goto L_08B7AB40;
    case 91u: goto L_08B7AB58;
    case 92u: goto L_08B7AB84;
    case 93u: goto L_08B7ABAC;
    case 94u: goto L_08B7ABCC;
    case 95u: goto L_08B7AC98;
    case 96u: goto L_08B7ACC0;
    case 97u: goto L_08B7AD58;
    case 98u: goto L_08B7AEAC;
    case 99u: goto L_08B7B4DC;
    case 100u: goto L_08B7BF38;
    case 101u: goto L_08B7BF80;
    case 102u: goto L_08B7BF88;
    case 103u: goto L_08B7BF90;
    case 104u: goto L_08B7BFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B78434:
    rt.unsupported(0x08B78438u, 0x0885B8D0u, "control flow in delay slot"); return;
L_08B79830:
    ctx.execute_vfpu_vscl_ct<67u, 69u, 108u, 1u>();
    rt.unsupported(0x08B79834u, 0x746E656Du, "unknown not lowered yet"); return;
L_08B798C8:
    rt.unsupported(0x08B798CCu, 0x08865940u, "control flow in delay slot"); return;
L_08B79C88:
    rt.unsupported(0x08B79C88u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B79CB0:
    rt.unsupported(0x08B79CB0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79CBC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79CC0u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[17] == ctx.gpr[15]) {
    rt.unsupported(0x08B79CC8u, 0x41444E55u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 112u, 0x08B8E5ECu>(ctx, &aot_mem); return;
    }
    goto L_08B79CCC;
L_08B79CCC:
    rt.unsupported(0x08B79CCCu, 0x452F4154u, "cop1? not lowered yet"); return;
L_08B79CD8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    goto L_08B79CE0;
L_08B79CE0:
    rt.unsupported(0x08B79CE0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79CEC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79CF0u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79CF4u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79D10:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79D14u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79D18u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79D2C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B79D30u, 0x454D4147u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 114u, 0x08B8EA70u>(ctx, &aot_mem); return;
    }
    goto L_08B79D34;
L_08B79D34:
    if (ctx.gpr[18] == ctx.gpr[19]) {
    ctx.gpr[18] = (ctx.gpr[26] < static_cast<std::uint32_t>(18756) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 123u, 0x08B8F1F4u>(ctx, &aot_mem); return;
    }
    goto L_08B79D3C;
L_08B79D3C:
    ctx.gpr[1] = (ctx.gpr[26] < static_cast<std::uint32_t>(21836) ? 1u : 0u);
    rt.unsupported(0x08B79D40u, 0x49443B3Fu, "cop2/vfpu not lowered yet"); return;
L_08B79D50:
    rt.unsupported(0x08B79D54u, 0x52494452u, "control flow in delay slot"); return;
L_08B79D58:
    rt.unsupported(0x08B79D58u, 0x00003F2Fu, "special? not lowered yet"); return;
L_08B79D5C:
    rt.unsupported(0x08B79D5Cu, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79D78:
    rt.unsupported(0x08B79D78u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79D94:
    rt.unsupported(0x08B79D94u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79DB4:
    rt.unsupported(0x08B79DB4u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79DD4:
    rt.unsupported(0x08B79DD4u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79DEC:
    rt.unsupported(0x08B79DECu, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79E08:
    rt.unsupported(0x08B79E08u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79E28:
    rt.unsupported(0x08B79E28u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79E48:
    rt.unsupported(0x08B79E48u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79E64:
    rt.unsupported(0x08B79E64u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B79E78:
    rt.unsupported(0x08B79E78u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79E84:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79E88u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79E8Cu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79EA8:
    rt.unsupported(0x08B79EA8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79EB4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79EB8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79EBCu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79ED4:
    rt.unsupported(0x08B79ED4u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79EE0:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79EE4u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79EE8u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79F04:
    rt.unsupported(0x08B79F04u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79F10:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79F14u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79F18u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79F38:
    rt.unsupported(0x08B79F38u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79F44:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79F48u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79F4Cu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79F60:
    rt.unsupported(0x08B79F60u, 0x43534944u, "unknown not lowered yet"); return;
L_08B79F6C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79F70u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79F74u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79F8C:
    rt.unsupported(0x08B79F8Cu, 0x43534944u, "unknown not lowered yet"); return;
L_08B79F98:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79F9Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79FA0u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79FBC:
    rt.unsupported(0x08B79FBCu, 0x43534944u, "unknown not lowered yet"); return;
L_08B79FC8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79FCCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B79FD0u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B79FEC:
    rt.unsupported(0x08B79FECu, 0x43534944u, "unknown not lowered yet"); return;
L_08B79FF8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B79FFCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7A000u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B7A018:
    rt.unsupported(0x08B7A018u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7A024:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7A028u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7A02Cu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B7A038:
    ctx.execute_vfpu_vcmp_ct<97u, 46u, 1u, 5u>();
    (void)(0u - 0u);
    rt.unsupported(0x08B7A044u, 0x08870AA0u, "control flow in delay slot"); return;
L_08B7A090:
    rt.unsupported(0x08B7A090u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7A09C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7A0A0u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B7A0ACu);
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B7A0ACu) goto L_08B7A0AC;
    return;
L_08B7A0AC:
    // nop
    goto L_08B7A0B0;
L_08B7A0B0:
    rt.unsupported(0x08B7A0B0u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B7A0C4:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B7A0C8u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B7A0DC:
    rt.unsupported(0x08B7A0DCu, 0x74732043u, "unknown not lowered yet"); return;
L_08B7A0F0:
    rt.unsupported(0x08B7A0F0u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B7A110:
    rt.unsupported(0x08B7A110u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B7A138:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B7A13Cu, 0x2074706Du, "unknown not lowered yet"); return;
L_08B7A16C:
    rt.unsupported(0x08B7A16Cu, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B7A2A0:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B7A2A8u, 0x72702064u, "unknown not lowered yet"); return;
L_08B7A3C0:
    rt.unsupported(0x08B7A3C4u, 0x0880C9FCu, "control flow in delay slot"); return;
L_08B7A3F0:
    rt.unsupported(0x08B7A3F0u, 0x72726528u, "unknown not lowered yet"); return;
L_08B7A408:
    rt.unsupported(0x08B7A408u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B7A420:
    rt.unsupported(0x08B7A420u, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B7A438:
    ctx.gpr[8] = (ctx.gpr[15] << 9u);
    ctx.gpr[28] = (ctx.gpr[4] << 7u);
    ctx.gpr[22] = (ctx.gpr[15] << 6u);
    ctx.gpr[17] = (ctx.gpr[27] << 22u);
    ctx.gpr[29] = (ctx.gpr[1] << 11u);
    ctx.gpr[17] = (ctx.gpr[23] << 9u);
    ctx.gpr[21] = (ctx.gpr[18] << 2u);
    ctx.gpr[23] = (ctx.gpr[12] << 10u);
    ctx.gpr[16] = (ctx.gpr[30] << 18u);
    ctx.gpr[19] = (ctx.gpr[21] << 30u);
    ctx.gpr[16] = (ctx.gpr[26] << 5u);
    ctx.gpr[18] = (ctx.gpr[24] << 26u);
    ctx.gpr[5] = (ctx.gpr[17] << 20u);
    ctx.gpr[25] = (ctx.gpr[6] << 18u);
    ctx.gpr[1] = (ctx.gpr[29] << 4u);
    ctx.gpr[12] = (ctx.gpr[3] << 25u);
    ctx.gpr[15] = (ctx.gpr[29] << 1u);
    (void)(ctx.gpr[25] << 23u);
    ctx.gpr[2] = (ctx.gpr[26] << 8u);
    ctx.gpr[4] = (ctx.gpr[20] << 16u);
    ctx.gpr[9] = (ctx.gpr[12] << 13u);
    ctx.gpr[6] = (ctx.gpr[14] << 24u);
    ctx.gpr[24] = (ctx.gpr[9] << 14u);
    ctx.gpr[25] = (ctx.gpr[10] << 31u);
    ctx.gpr[27] = (ctx.gpr[7] << 3u);
    ctx.gpr[13] = (0u << 29u);
    ctx.gpr[3] = (ctx.gpr[23] << 12u);
    ctx.gpr[24] = (ctx.gpr[13] << 27u);
    ctx.gpr[30] = (ctx.gpr[30] << 15u);
    // nop
    goto L_08B7A4B0;
L_08B7A4B0:
    rt.unsupported(0x08B7A4B0u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B7A4C4:
    rt.unsupported(0x08B7A4C4u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B7A4D8:
    rt.unsupported(0x08B7A4D8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B7A4E4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B7A4E8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B7A4ECu, 0x412F5249u, "unknown not lowered yet"); return;
L_08B7A6E0:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 3u>();
    rt.unsupported(0x08B7A6E4u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B7A700:
    rt.unsupported(0x08B7A700u, 0x20646162u, "unknown not lowered yet"); return;
L_08B7A720:
    ctx.execute_vfpu_vscl_ct<37u, 115u, 32u, 1u>();
    rt.unsupported(0x08B7A724u, 0x63657078u, "vfpu0 not lowered yet"); return;
L_08B7A734:
    rt.unsupported(0x08B7A734u, 0x63617473u, "vfpu0 not lowered yet"); return;
L_08B7A748:
    rt.unsupported(0x08B7A748u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B7A858:
    rt.unsupported(0x08B7A858u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B7A8A8:
    ctx.gpr[16] = (ctx.gpr[17] ^ 21325u);
    ctx.gpr[16] = (ctx.gpr[26] < static_cast<std::uint32_t>(21328) ? 1u : 0u);
    rt.unsupported(0x08B7A8B0u, 0x45564153u, "cop1? not lowered yet"); return;
L_08B7A8C0:
    (void)(ctx.gpr[1] << 4u);
    (void)(ctx.gpr[2] >> 8u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    if (static_cast<std::int32_t>(0u) >= 0) {
    rt.unsupported(0x08B7A8D0u, 0x04040404u, "regimm? not lowered yet"); return;
        goto L_08B7B4DC;
    }
    goto L_08B7A8D4;
L_08B7A8D4:
    rt.unsupported(0x08B7A8D4u, 0x04040404u, "regimm? not lowered yet"); return;
L_08B7A9C8:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    rt.unsupported(0x08B7A9CCu, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 100u, 0x08B93F18u>(ctx, &aot_mem); return;
    }
    goto L_08B7A9D0;
L_08B7A9D0:
    ctx.execute_vfpu_compare3(108u, 101u, 70u, 1u, 6u);
    rt.unsupported(0x08B7A9D4u, 0x72614772u, "unknown not lowered yet"); return;
L_08B7A9DC:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 101u, 0x08B93F2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7A9E4;
L_08B7A9E4:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B7A9ECu, 0x726F4665u, "unknown not lowered yet"); return;
L_08B7A9F8:
    rt.unsupported(0x08B7A9F8u, 0x47736148u, "cop1? not lowered yet"); return;
L_08B7AA14:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B7AA1Cu, 0x476E4965u, "cop1? not lowered yet"); return;
L_08B7AA28:
    rt.unsupported(0x08B7AA28u, 0x73656F44u, "unknown not lowered yet"); return;
L_08B7AA40:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B7AA44;
L_08B7AA44:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B7AA48u, 0x61726147u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 75u, 0x08B9776Cu>(ctx, &aot_mem); return;
    }
    goto L_08B7AA4C;
L_08B7AA4C:
    rt.unsupported(0x08B7AA4Cu, 0x74536567u, "unknown not lowered yet"); return;
L_08B7AA5C:
    rt.unsupported(0x08B7AA60u, 0x088B9FCCu, "control flow in delay slot"); return;
L_08B7AB18:
    rt.unsupported(0x08B7AB18u, 0x706F6F6Cu, "unknown not lowered yet"); return;
L_08B7AB2C:
    rt.unsupported(0x08B7AB2Cu, 0x706F6F6Cu, "unknown not lowered yet"); return;
L_08B7AB40:
    rt.unsupported(0x08B7AB40u, 0x69727473u, "unknown not lowered yet"); return;
L_08B7AB58:
    rt.unsupported(0x08B7AB58u, 0x705F5F60u, "unknown not lowered yet"); return;
L_08B7AB84:
    rt.unsupported(0x08B7AB84u, 0x726F6660u, "unknown not lowered yet"); return;
L_08B7ABAC:
    rt.unsupported(0x08B7ABACu, 0x726F6660u, "unknown not lowered yet"); return;
L_08B7ABCC:
    rt.unsupported(0x08B7ABCCu, 0x726F6660u, "unknown not lowered yet"); return;
L_08B7AC98:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    rt.unsupported(0x08B7AC9Cu, 0x0000005Eu, "special? not lowered yet"); return;
L_08B7ACC0:
    rt.unsupported(0x08B7ACC0u, 0x0000003Fu, "special? not lowered yet"); return;
L_08B7AD58:
    rt.unsupported(0x08B7AD58u, 0x6B6E6142u, "unknown not lowered yet"); return;
L_08B7AEAC:
    rt.unsupported(0x08B7AEB0u, 0x088C9708u, "control flow in delay slot"); return;
L_08B7B4DC:
    rt.unsupported(0x08B7B4E0u, 0x088D658Cu, "control flow in delay slot"); return;
L_08B7BF38:
    // nop
    rt.unsupported(0x08B7BF3Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B7BF80:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B7BF84u, 0x454E4F5Au, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 106u, 0x08B8D4D0u>(ctx, &aot_mem); return;
    }
    goto L_08B7BF88;
L_08B7BF88:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B7BF8Cu, 0x464E495Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 103u, 0x08B8CD08u>(ctx, &aot_mem); return;
    }
    goto L_08B7BF90;
L_08B7BF90:
    rt.unsupported(0x08B7BF90u, 0x202D204Fu, "unknown not lowered yet"); return;
L_08B7BFC0:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B7BFCCu, 0x00000001u, "special? not lowered yet"); return;
}

void recomp_unit_0221(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0221_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_221(Runtime &runtime) {
    runtime.register_generated_unit(221u, 0x08B78000u, 16384u, &recomp_unit_0221, &recomp_unit_0221_entry);
    runtime.register_function(0x08B78434u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79830u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B798C8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79C88u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79CB0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79CBCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79CCCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79CD8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79CE0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79CECu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D10u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D2Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D34u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D3Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D50u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D58u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D5Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D78u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79D94u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79DB4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79DD4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79DECu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79E08u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79E28u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79E48u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79E64u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79E78u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79E84u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79EA8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79EB4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79ED4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79EE0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F04u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F10u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F38u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F44u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F60u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F6Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F8Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79F98u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79FBCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79FC8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79FECu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B79FF8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A018u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A024u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A038u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A090u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A09Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A0ACu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A0B0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A0C4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A0DCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A0F0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A110u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A138u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A16Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A2A0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A3C0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A3F0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A408u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A420u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A438u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A4B0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A4C4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A4D8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A4E4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A6E0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A700u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A720u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A734u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A748u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A858u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A8A8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A8C0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A8D4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A9C8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A9D0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A9DCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A9E4u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7A9F8u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AA14u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AA28u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AA40u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AA44u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AA4Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AA5Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AB18u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AB2Cu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AB40u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AB58u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AB84u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7ABACu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7ABCCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AC98u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7ACC0u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AD58u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7AEACu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7B4DCu, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7BF38u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7BF80u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7BF88u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7BF90u, &recomp_unit_0221, "recomp_unit_0221");
    runtime.register_function(0x08B7BFC0u, &recomp_unit_0221, "recomp_unit_0221");
}
} // namespace psprecomp
