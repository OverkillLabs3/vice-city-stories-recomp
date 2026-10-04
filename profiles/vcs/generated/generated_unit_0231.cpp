#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0231[4003] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 73, 0, 74, 0, 0, 75, 76, 77, 0, 0, 0, 78, 79, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99,
    0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153,
};
void recomp_unit_0231_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08BA0000u;
        entry_id = (entry_delta < 16012u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0231[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08BA0000;
    case 2u: goto L_08BA0060;
    case 3u: goto L_08BA0078;
    case 4u: goto L_08BA0090;
    case 5u: goto L_08BA048C;
    case 6u: goto L_08BA0500;
    case 7u: goto L_08BA054C;
    case 8u: goto L_08BA0550;
    case 9u: goto L_08BA0574;
    case 10u: goto L_08BA05A0;
    case 11u: goto L_08BA05B8;
    case 12u: goto L_08BA08B0;
    case 13u: goto L_08BA08F0;
    case 14u: goto L_08BA0920;
    case 15u: goto L_08BA0970;
    case 16u: goto L_08BA0990;
    case 17u: goto L_08BA09B0;
    case 18u: goto L_08BA0A00;
    case 19u: goto L_08BA0A08;
    case 20u: goto L_08BA0A0C;
    case 21u: goto L_08BA0D70;
    case 22u: goto L_08BA0DA0;
    case 23u: goto L_08BA0DD4;
    case 24u: goto L_08BA10A8;
    case 25u: goto L_08BA10CC;
    case 26u: goto L_08BA110C;
    case 27u: goto L_08BA1144;
    case 28u: goto L_08BA115C;
    case 29u: goto L_08BA1170;
    case 30u: goto L_08BA117C;
    case 31u: goto L_08BA11EC;
    case 32u: goto L_08BA1264;
    case 33u: goto L_08BA1278;
    case 34u: goto L_08BA128C;
    case 35u: goto L_08BA1368;
    case 36u: goto L_08BA1390;
    case 37u: goto L_08BA13B0;
    case 38u: goto L_08BA13C4;
    case 39u: goto L_08BA1414;
    case 40u: goto L_08BA1460;
    case 41u: goto L_08BA1478;
    case 42u: goto L_08BA14CC;
    case 43u: goto L_08BA14E8;
    case 44u: goto L_08BA1580;
    case 45u: goto L_08BA1740;
    case 46u: goto L_08BA1760;
    case 47u: goto L_08BA1780;
    case 48u: goto L_08BA1798;
    case 49u: goto L_08BA17FC;
    case 50u: goto L_08BA181C;
    case 51u: goto L_08BA1878;
    case 52u: goto L_08BA18B0;
    case 53u: goto L_08BA19A0;
    case 54u: goto L_08BA19B4;
    case 55u: goto L_08BA1A2C;
    case 56u: goto L_08BA1AF0;
    case 57u: goto L_08BA1B20;
    case 58u: goto L_08BA1BC8;
    case 59u: goto L_08BA1C20;
    case 60u: goto L_08BA1C38;
    case 61u: goto L_08BA1C50;
    case 62u: goto L_08BA1C68;
    case 63u: goto L_08BA1C80;
    case 64u: goto L_08BA1C98;
    case 65u: goto L_08BA1CB0;
    case 66u: goto L_08BA1CF0;
    case 67u: goto L_08BA1D00;
    case 68u: goto L_08BA1D40;
    case 69u: goto L_08BA1D50;
    case 70u: goto L_08BA1D80;
    case 71u: goto L_08BA1DBC;
    case 72u: goto L_08BA1DE8;
    case 73u: goto L_08BA1E04;
    case 74u: goto L_08BA1E0C;
    case 75u: goto L_08BA1E18;
    case 76u: goto L_08BA1E1C;
    case 77u: goto L_08BA1E20;
    case 78u: goto L_08BA1E30;
    case 79u: goto L_08BA1E34;
    case 80u: goto L_08BA1E38;
    case 81u: goto L_08BA1E3C;
    case 82u: goto L_08BA1E60;
    case 83u: goto L_08BA1E88;
    case 84u: goto L_08BA1EA0;
    case 85u: goto L_08BA1EE4;
    case 86u: goto L_08BA1EF0;
    case 87u: goto L_08BA1F50;
    case 88u: goto L_08BA1F78;
    case 89u: goto L_08BA2350;
    case 90u: goto L_08BA2404;
    case 91u: goto L_08BA24E8;
    case 92u: goto L_08BA2674;
    case 93u: goto L_08BA2704;
    case 94u: goto L_08BA2740;
    case 95u: goto L_08BA27A0;
    case 96u: goto L_08BA283C;
    case 97u: goto L_08BA29E8;
    case 98u: goto L_08BA29F0;
    case 99u: goto L_08BA29FC;
    case 100u: goto L_08BA2A08;
    case 101u: goto L_08BA2A14;
    case 102u: goto L_08BA2A20;
    case 103u: goto L_08BA2A2C;
    case 104u: goto L_08BA2A7C;
    case 105u: goto L_08BA2BA8;
    case 106u: goto L_08BA2C80;
    case 107u: goto L_08BA2D14;
    case 108u: goto L_08BA2D64;
    case 109u: goto L_08BA2DBC;
    case 110u: goto L_08BA2E8C;
    case 111u: goto L_08BA2EC0;
    case 112u: goto L_08BA30AC;
    case 113u: goto L_08BA30D8;
    case 114u: goto L_08BA318C;
    case 115u: goto L_08BA3240;
    case 116u: goto L_08BA3248;
    case 117u: goto L_08BA32C0;
    case 118u: goto L_08BA32F0;
    case 119u: goto L_08BA3330;
    case 120u: goto L_08BA3360;
    case 121u: goto L_08BA33A4;
    case 122u: goto L_08BA33E8;
    case 123u: goto L_08BA3410;
    case 124u: goto L_08BA3460;
    case 125u: goto L_08BA3480;
    case 126u: goto L_08BA3520;
    case 127u: goto L_08BA3570;
    case 128u: goto L_08BA3590;
    case 129u: goto L_08BA35A8;
    case 130u: goto L_08BA3690;
    case 131u: goto L_08BA3858;
    case 132u: goto L_08BA3874;
    case 133u: goto L_08BA38B8;
    case 134u: goto L_08BA38E0;
    case 135u: goto L_08BA38E8;
    case 136u: goto L_08BA38F8;
    case 137u: goto L_08BA391C;
    case 138u: goto L_08BA393C;
    case 139u: goto L_08BA39C0;
    case 140u: goto L_08BA3A48;
    case 141u: goto L_08BA3A60;
    case 142u: goto L_08BA3A74;
    case 143u: goto L_08BA3AD0;
    case 144u: goto L_08BA3B08;
    case 145u: goto L_08BA3B20;
    case 146u: goto L_08BA3B38;
    case 147u: goto L_08BA3B50;
    case 148u: goto L_08BA3BA4;
    case 149u: goto L_08BA3BFC;
    case 150u: goto L_08BA3C54;
    case 151u: goto L_08BA3CB0;
    case 152u: goto L_08BA3CD8;
    case 153u: goto L_08BA3E88;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08BA0000:
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
    goto L_08BA0060;
L_08BA0060:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA0078;
L_08BA0078:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA0090;
L_08BA0090:
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
    goto L_08BA048C;
L_08BA048C:
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
    goto L_08BA0500;
L_08BA0500:
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
    goto L_08BA054C;
L_08BA054C:
    // nop
    goto L_08BA0550;
L_08BA0550:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA0574;
L_08BA0574:
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
    goto L_08BA05A0;
L_08BA05A0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA05B8;
L_08BA05B8:
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
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA08B0;
L_08BA08B0:
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
    goto L_08BA08F0;
L_08BA08F0:
    rt.unsupported(0x08BA08F0u, 0x40800000u, "unknown not lowered yet"); return;
L_08BA0920:
    rt.unsupported(0x08BA0920u, 0x41200000u, "unknown not lowered yet"); return;
L_08BA0970:
    rt.unsupported(0x08BA0970u, 0x42C80000u, "unknown not lowered yet"); return;
L_08BA0990:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA09B0;
L_08BA09B0:
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
    goto L_08BA0A00;
L_08BA0A00:
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    // nop
      if (branch_taken) {
          goto L_08BA0A08;
      }
      goto L_08BA0A0C;
    }
L_08BA0A08:
    // nop
    goto L_08BA0A0C;
L_08BA0A0C:
    rt.unsupported(0x08BA0A10u, 0x0A1F0A1Fu, "control flow in delay slot"); return;
L_08BA0D70:
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
    goto L_08BA0DA0;
L_08BA0DA0:
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
    goto L_08BA0DD4;
L_08BA0DD4:
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
    if (!ctx.execute_signed_add(4u, 0u, 0u)) { rt.arithmetic_overflow(0x08BA10A0u, 0x00002020u); return; }
    // nop
    goto L_08BA10A8;
L_08BA10A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA10CC;
L_08BA10CC:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08BA10D0u, 0x7473616Eu, "unknown not lowered yet"); return;
L_08BA110C:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(110u, 97u, 109u, 1u, 6u);
    rt.unsupported(0x08BA1114u, 0x00006E6Fu, "special? not lowered yet"); return;
L_08BA1144:
    // nop
    // nop
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<110u, 97u, 104u, 1u>();
    rt.unsupported(0x08BA1154u, 0x696C6461u, "unknown not lowered yet"); return;
L_08BA115C:
    rt.unsupported(0x08BA115Cu, 0x00656E69u, "special? not lowered yet"); return;
L_08BA1170:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 104u, 1u>();
    rt.unsupported(0x08BA1174u, 0x00000078u, "special? not lowered yet"); return;
L_08BA117C:
    // nop
    // nop
    // nop
    // nop
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08BA1190u, 0x6963616Eu, "unknown not lowered yet"); return;
L_08BA11EC:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08BA11F0u, 0x41700000u, "unknown not lowered yet"); return;
L_08BA1264:
    ctx.gpr[6] = (26214u << 16u);
    rt.unsupported(0x08BA1268u, 0x40F00000u, "unknown not lowered yet"); return;
L_08BA1278:
    // nop
    // nop
    rt.unsupported(0x08BA1280u, 0x00FF00FFu, "special? not lowered yet"); return;
L_08BA128C:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08BA1290u, 0x41780000u, "unknown not lowered yet"); return;
L_08BA1368:
    rt.unsupported(0x08BA136Cu, 0x08CB2400u, "control flow in delay slot"); return;
L_08BA1390:
    rt.unsupported(0x08BA1394u, 0x08C46D40u, "control flow in delay slot"); return;
L_08BA13B0:
    rt.unsupported(0x08BA13B4u, 0x08C46D40u, "control flow in delay slot"); return;
L_08BA13C4:
    rt.unsupported(0x08BA13C8u, 0x08C46D40u, "control flow in delay slot"); return;
L_08BA1414:
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
    rt.unsupported(0x08BA1460u, 0x08CABC00u, "control flow in delay slot"); return;
L_08BA1460:
    rt.unsupported(0x08BA1464u, 0x08CABC00u, "control flow in delay slot"); return;
L_08BA1478:
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    // nop
    ctx.gpr[9] = (4059u << 16u);
    ctx.gpr[18] = (47299u << 16u);
    rt.unsupported(0x08BA1494u, 0x40800000u, "unknown not lowered yet"); return;
L_08BA14CC:
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08BA14D0u, 0x40000000u, "unknown not lowered yet"); return;
L_08BA14E8:
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    (void)(0u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    ctx.gpr[29] = (58446u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08BA1514u, 0x40000000u, "unknown not lowered yet"); return;
L_08BA1580:
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08BA158Cu, 0x41200000u, "unknown not lowered yet"); return;
L_08BA1740:
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[28] = (25003u << 16u);
    goto L_08BA1760;
L_08BA1760:
    rt.unsupported(0x08BA1760u, 0x0000003Fu, "special? not lowered yet"); return;
L_08BA1780:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    if (static_cast<std::int32_t>(ctx.gpr[8]) >= 0) {
    (void)(ctx.gpr[1] >> 8u);
        goto L_08BA2BA8;
    }
    goto L_08BA1798;
L_08BA1798:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    rt.unsupported(0x08BA179Cu, 0x00010101u, "special? not lowered yet"); return;
L_08BA17FC:
    rt.unsupported(0x08BA17FCu, 0x01020201u, "special? not lowered yet"); return;
L_08BA181C:
    (void)(0u >> (0u & 31u));
    // nop
    (void)(ctx.gpr[3] << 0u);
    // nop
    // nop
    // nop
    // nop
    (void)(ctx.gpr[1] << 4u);
    rt.unsupported(0x08BA183Cu, 0x01030101u, "special? not lowered yet"); return;
L_08BA1878:
    rt.unsupported(0x08BA1878u, 0x22211F1Eu, "unknown not lowered yet"); return;
L_08BA18B0:
    rt.unsupported(0x08BA18B4u, 0x08BAEA10u, "control flow in delay slot"); return;
L_08BA19A0:
    rt.unsupported(0x08BA19A4u, 0x08BAEC08u, "control flow in delay slot"); return;
L_08BA19B4:
    rt.unsupported(0x08BA19B8u, 0x08BAEB20u, "control flow in delay slot"); return;
L_08BA1A2C:
    rt.unsupported(0x08BA1A30u, 0x08BAEB48u, "control flow in delay slot"); return;
L_08BA1AF0:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08BA1AF8u, 0xCFCFFFFFu, "unknown not lowered yet"); return;
L_08BA1B20:
    rt.unsupported(0x08BA1B24u, 0x08BAF3B8u, "control flow in delay slot"); return;
L_08BA1BC8:
    rt.unsupported(0x08BA1BCCu, 0x08BAF3B8u, "control flow in delay slot"); return;
L_08BA1C20:
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[6] = (2706u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    goto L_08BA1C38;
L_08BA1C38:
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08BA1C50;
L_08BA1C50:
    ctx.gpr[31] = (26355u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08BA1C68;
L_08BA1C68:
    ctx.gpr[18] = (47299u << 16u);
    rt.unsupported(0x08BA1C6Cu, 0xC0060A92u, "unknown not lowered yet"); return;
L_08BA1C80:
    ctx.gpr[6] = (2706u << 16u);
    // nop
    ctx.gpr[6] = (2706u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08BA1C98;
L_08BA1C98:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08BA1CB0;
L_08BA1CB0:
    rt.unsupported(0x08BA1CB4u, 0x08BAFA9Cu, "control flow in delay slot"); return;
L_08BA1CF0:
    // nop
    // nop
    // nop
    // nop
    goto L_08BA1D00;
L_08BA1D00:
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
    goto L_08BA1D40;
L_08BA1D40:
    // nop
    // nop
    // nop
    // nop
    goto L_08BA1D50;
L_08BA1D50:
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
    goto L_08BA1D80;
L_08BA1D80:
    // nop
    rt.unsupported(0x08BA1D84u, 0x00000015u, "special? not lowered yet"); return;
L_08BA1DBC:
    rt.unsupported(0x08BA1DBCu, 0x00000005u, "special? not lowered yet"); return;
L_08BA1DE8:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    rt.unsupported(0x08BA1DF4u, 0x00000014u, "special? not lowered yet"); return;
L_08BA1E04:
    jump_target = 0u;
    ctx.gpr[31] = (0x08BA1E0Cu);
    if (0u == 0u) (void)(0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08BA1E0Cu) goto L_08BA1E0C;
    return;
L_08BA1E0C:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08BA1E10u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08BA1E18:
    if (!ctx.execute_signed_add(9u, 0u, 0u)) { rt.arithmetic_overflow(0x08BA1E18u, 0x00004E20u); return; }
    goto L_08BA1E1C;
L_08BA1E1C:
    ctx.gpr[4] = (ctx.hi);
    goto L_08BA1E20;
L_08BA1E20:
    jump_target = 0u;
    ctx.gpr[4] = (ctx.hi);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08BA1E30:
    if (!ctx.execute_signed_add(5u, 0u, 0u)) { rt.arithmetic_overflow(0x08BA1E30u, 0x00002EE0u); return; }
    goto L_08BA1E34;
L_08BA1E34:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08BA1E38;
L_08BA1E38:
    jump_target = 0u;
    rt.unsupported(0x08BA1E3Cu, 0x40400000u, "unknown not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08BA1E3C:
    rt.unsupported(0x08BA1E3Cu, 0x40400000u, "unknown not lowered yet"); return;
L_08BA1E60:
    rt.unsupported(0x08BA1E60u, 0x42F00000u, "unknown not lowered yet"); return;
L_08BA1E88:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    goto L_08BA1EA0;
L_08BA1EA0:
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
    goto L_08BA1EE4;
L_08BA1EE4:
    // nop
    // nop
    // nop
    goto L_08BA1EF0;
L_08BA1EF0:
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
    goto L_08BA1F50;
L_08BA1F50:
    // nop
    rt.unsupported(0x08BA1F54u, 0x77073096u, "unknown not lowered yet"); return;
L_08BA1F78:
    rt.unsupported(0x08BA1F78u, 0xE0D5E91Eu, "unknown not lowered yet"); return;
L_08BA2350:
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
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[28] = (10486u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    goto L_08BA2404;
L_08BA2404:
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[26] = (57672u << 16u);
    ctx.gpr[29] = (28836u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    goto L_08BA24E8;
L_08BA24E8:
    rt.unsupported(0x08BA24ECu, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC2D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2674:
    rt.unsupported(0x08BA2678u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2704:
    rt.unsupported(0x08BA2708u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC3570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2740:
    rt.unsupported(0x08BA2744u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC3610u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA27A0:
    rt.unsupported(0x08BA27A4u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02E09980u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA283C:
    rt.unsupported(0x08BA2840u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC2D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA29E8:
    rt.unsupported(0x08BA29ECu, 0x08BB0F3Cu, "control flow in delay slot"); return;
L_08BA29F0:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08BA29F8u, 0x08BB0F4Cu, "control flow in delay slot"); return;
L_08BA29FC:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08BA2A04u, 0x08BB0F58u, "control flow in delay slot"); return;
L_08BA2A08:
    rt.unsupported(0x08BA2A08u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08BA2A14:
    rt.unsupported(0x08BA2A14u, 0x0000000Du, "special? not lowered yet"); return;
L_08BA2A20:
    rt.unsupported(0x08BA2A20u, 0x0000000Eu, "special? not lowered yet"); return;
L_08BA2A2C:
    // nop
    rt.unsupported(0x08BA2A30u, 0x00000601u, "special? not lowered yet"); return;
L_08BA2A7C:
    rt.unsupported(0x08BA2A80u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC2D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2BA8:
    (void)(0u >> 0u);
    ctx.pc = 0x02EC3C10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2C80:
    rt.unsupported(0x08BA2C84u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC3570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2D14:
    // nop
    rt.unsupported(0x08BA2D18u, 0x00000601u, "special? not lowered yet"); return;
L_08BA2D64:
    rt.unsupported(0x08BA2D68u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02EC3570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA2DBC:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08BA2E8C:
    rt.unsupported(0x08BA2E8Cu, 0x00000601u, "special? not lowered yet"); return;
L_08BA2EC0:
    (void)(0u >> 0u);
    ctx.pc = 0x02EC40E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA30AC:
    rt.unsupported(0x08BA30B0u, 0x08BA2674u, "control flow in delay slot"); return;
L_08BA30D8:
    rt.unsupported(0x08BA30D8u, 0x46323953u, "cop1? not lowered yet"); return;
L_08BA318C:
    rt.unsupported(0x08BA318Cu, 0x0000304Du, "special? not lowered yet"); return;
L_08BA3240:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    // nop
        ctx.pc = 0x08BB6390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08BA3248;
L_08BA3248:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08BA3260u, 0x45464153u, "cop1? not lowered yet"); return;
L_08BA32C0:
    rt.unsupported(0x08BA32C0u, 0x45464153u, "cop1? not lowered yet"); return;
L_08BA32F0:
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08BA3330;
L_08BA3330:
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
    goto L_08BA3360;
L_08BA3360:
    rt.unsupported(0x08BA3364u, 0x08BB1DD8u, "control flow in delay slot"); return;
L_08BA33A4:
    rt.unsupported(0x08BA33A8u, 0x08BB1E5Cu, "control flow in delay slot"); return;
L_08BA33E8:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    rt.unsupported(0x08BA33FCu, 0x40000000u, "unknown not lowered yet"); return;
L_08BA3410:
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
    goto L_08BA3460;
L_08BA3460:
    rt.unsupported(0x08BA3460u, 0x40200000u, "unknown not lowered yet"); return;
L_08BA3480:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08BA3520;
L_08BA3520:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(ctx.gpr[26] << 0u);
    rt.unsupported(0x08BA3548u, 0x009600FAu, "special? not lowered yet"); return;
L_08BA3570:
    ctx.gpr[6] = (26214u << 16u);
    rt.unsupported(0x08BA3574u, 0x40000000u, "unknown not lowered yet"); return;
L_08BA3590:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u | 0u);
    rt.unsupported(0x08BA3598u, 0x000000E8u, "special? not lowered yet"); return;
L_08BA35A8:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08BA35B4u, 0x000000D4u, "special? not lowered yet"); return;
L_08BA3690:
    rt.unsupported(0x08BA3694u, 0x00000035u, "special? not lowered yet"); return;
    ctx.pc = 0x02ECBD00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA3858:
    rt.unsupported(0x08BA3858u, 0x000000CDu, "special? not lowered yet"); return;
L_08BA3874:
    rt.unsupported(0x08BA3874u, 0x000000FEu, "special? not lowered yet"); return;
L_08BA38B8:
    rt.unsupported(0x08BA38B8u, 0x20202000u, "unknown not lowered yet"); return;
L_08BA38E0:
    rt.unsupported(0x08BA38E4u, 0x10101010u, "control flow in delay slot"); return;
L_08BA38E8:
    rt.unsupported(0x08BA38E8u, 0x04040410u, "regimm? not lowered yet"); return;
L_08BA38F8:
    rt.unsupported(0x08BA38F8u, 0x41411010u, "unknown not lowered yet"); return;
L_08BA391C:
    rt.unsupported(0x08BA391Cu, 0x42424242u, "unknown not lowered yet"); return;
L_08BA393C:
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
    goto L_08BA39C0;
L_08BA39C0:
    // nop
    rt.unsupported(0x08BA39C8u, 0x08BA3BFCu, "control flow in delay slot"); return;
L_08BA3A48:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA3A60;
L_08BA3A60:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA3A74;
L_08BA3A74:
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
    goto L_08BA3AD0;
L_08BA3AD0:
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
    goto L_08BA3B08;
L_08BA3B08:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA3B20;
L_08BA3B20:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA3B38;
L_08BA3B38:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08BA3B50;
L_08BA3B50:
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
    goto L_08BA3BA4;
L_08BA3BA4:
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
    goto L_08BA3BFC;
L_08BA3BFC:
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
    goto L_08BA3C54;
L_08BA3C54:
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
    if (ctx.gpr[1] == 0u) (void)(0u);
    ctx.pc = 0x02E8E700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA3CB0:
    if (ctx.gpr[1] == 0u) (void)(0u);
    (void)(ctx.gpr[3] >> 0u);
    (void)(ctx.gpr[5] << (0u & 31u));
    (void)(ctx.gpr[7] >> (0u & 31u));
    jump_target = 0u;
    if (ctx.gpr[11] == 0u) (void)(0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08BA3CD8:
    rt.unsupported(0x08BA3CD8u, 0x00000001u, "special? not lowered yet"); return;
L_08BA3E88:
    rt.unsupported(0x08BA3E88u, 0x00000005u, "special? not lowered yet"); return;
}

void recomp_unit_0231(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0231_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_231(Runtime &runtime) {
    runtime.register_generated_unit(231u, 0x08BA0000u, 16384u, &recomp_unit_0231, &recomp_unit_0231_entry);
    runtime.register_function(0x08BA0000u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0060u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0078u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0090u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA048Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0500u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA054Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0550u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0574u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA05A0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA05B8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA08B0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA08F0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0920u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0970u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0990u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA09B0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0A00u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0A08u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0A0Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0D70u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0DA0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA0DD4u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA10A8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA10CCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA110Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1144u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA115Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1170u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA117Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA11ECu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1264u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1278u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA128Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1368u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1390u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA13B0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA13C4u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1414u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1460u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1478u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA14CCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA14E8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1580u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1740u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1760u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1780u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1798u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA17FCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA181Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1878u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA18B0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA19A0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA19B4u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1A2Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1AF0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1B20u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1BC8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1C20u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1C38u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1C50u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1C68u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1C80u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1C98u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1CB0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1CF0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1D00u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1D40u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1D50u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1D80u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1DBCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1DE8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E04u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E0Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E18u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E1Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E20u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E30u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E34u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E38u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E3Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E60u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1E88u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1EA0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1EE4u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1EF0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1F50u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA1F78u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2350u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2404u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA24E8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2674u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2704u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2740u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA27A0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA283Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA29E8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA29F0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA29FCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2A08u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2A14u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2A20u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2A2Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2A7Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2BA8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2C80u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2D14u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2D64u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2DBCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2E8Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA2EC0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA30ACu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA30D8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA318Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3240u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3248u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA32C0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA32F0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3330u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3360u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA33A4u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA33E8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3410u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3460u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3480u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3520u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3570u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3590u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA35A8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3690u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3858u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3874u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA38B8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA38E0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA38E8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA38F8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA391Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA393Cu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA39C0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3A48u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3A60u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3A74u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3AD0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3B08u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3B20u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3B38u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3B50u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3BA4u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3BFCu, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3C54u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3CB0u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3CD8u, &recomp_unit_0231, "recomp_unit_0231");
    runtime.register_function(0x08BA3E88u, &recomp_unit_0231, "recomp_unit_0231");
}
} // namespace psprecomp
