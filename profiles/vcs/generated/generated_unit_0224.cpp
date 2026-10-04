#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0224[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 10, 11, 12, 0, 0, 0, 13, 0, 14, 0, 0, 15, 16, 0, 0, 0,
    17, 18, 0, 19, 0, 20, 21, 0, 22, 0, 23, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49,
    0, 50, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 60, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 70, 0, 0, 71, 0, 72, 73, 0, 0, 0, 74, 0, 75,
    76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 80, 81, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 86, 0, 0, 0, 87, 88,
    0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99,
    0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 109, 0,
    0, 110, 0, 111, 0, 0, 0, 112, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118,
    0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 128, 0, 129, 0, 130, 0, 0, 131, 0,
    132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154,
    0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 175, 0, 176, 177, 0, 178, 0, 179,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 186, 0,
    0, 187, 0, 188, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0, 0, 194, 0,
    195, 0, 0, 196, 0, 0, 0, 0, 197, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203,
};
void recomp_unit_0224_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B84000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0224[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B84000;
    case 2u: goto L_08B84020;
    case 3u: goto L_08B84040;
    case 4u: goto L_08B84048;
    case 5u: goto L_08B84108;
    case 6u: goto L_08B84110;
    case 7u: goto L_08B84124;
    case 8u: goto L_08B84130;
    case 9u: goto L_08B8413C;
    case 10u: goto L_08B84140;
    case 11u: goto L_08B84144;
    case 12u: goto L_08B84148;
    case 13u: goto L_08B84158;
    case 14u: goto L_08B84160;
    case 15u: goto L_08B8416C;
    case 16u: goto L_08B84170;
    case 17u: goto L_08B84180;
    case 18u: goto L_08B84184;
    case 19u: goto L_08B8418C;
    case 20u: goto L_08B84194;
    case 21u: goto L_08B84198;
    case 22u: goto L_08B841A0;
    case 23u: goto L_08B841A8;
    case 24u: goto L_08B841AC;
    case 25u: goto L_08B841B4;
    case 26u: goto L_08B841BC;
    case 27u: goto L_08B841C4;
    case 28u: goto L_08B841CC;
    case 29u: goto L_08B841D4;
    case 30u: goto L_08B841E0;
    case 31u: goto L_08B841F4;
    case 32u: goto L_08B84214;
    case 33u: goto L_08B84228;
    case 34u: goto L_08B84258;
    case 35u: goto L_08B84268;
    case 36u: goto L_08B84274;
    case 37u: goto L_08B8427C;
    case 38u: goto L_08B844F8;
    case 39u: goto L_08B846E0;
    case 40u: goto L_08B84C24;
    case 41u: goto L_08B8595C;
    case 42u: goto L_08B85A68;
    case 43u: goto L_08B85BA0;
    case 44u: goto L_08B866C4;
    case 45u: goto L_08B8691C;
    case 46u: goto L_08B871D8;
    case 47u: goto L_08B871E4;
    case 48u: goto L_08B871F0;
    case 49u: goto L_08B871FC;
    case 50u: goto L_08B87204;
    case 51u: goto L_08B87208;
    case 52u: goto L_08B87214;
    case 53u: goto L_08B8721C;
    case 54u: goto L_08B87228;
    case 55u: goto L_08B87234;
    case 56u: goto L_08B87240;
    case 57u: goto L_08B87248;
    case 58u: goto L_08B87254;
    case 59u: goto L_08B8725C;
    case 60u: goto L_08B87260;
    case 61u: goto L_08B8726C;
    case 62u: goto L_08B87278;
    case 63u: goto L_08B8728C;
    case 64u: goto L_08B87294;
    case 65u: goto L_08B8729C;
    case 66u: goto L_08B872AC;
    case 67u: goto L_08B872B4;
    case 68u: goto L_08B872C0;
    case 69u: goto L_08B872C8;
    case 70u: goto L_08B872CC;
    case 71u: goto L_08B872D8;
    case 72u: goto L_08B872E0;
    case 73u: goto L_08B872E4;
    case 74u: goto L_08B872F4;
    case 75u: goto L_08B872FC;
    case 76u: goto L_08B87300;
    case 77u: goto L_08B87310;
    case 78u: goto L_08B8731C;
    case 79u: goto L_08B8732C;
    case 80u: goto L_08B87334;
    case 81u: goto L_08B87338;
    case 82u: goto L_08B87344;
    case 83u: goto L_08B8734C;
    case 84u: goto L_08B87354;
    case 85u: goto L_08B87364;
    case 86u: goto L_08B87368;
    case 87u: goto L_08B87378;
    case 88u: goto L_08B8737C;
    case 89u: goto L_08B87388;
    case 90u: goto L_08B87390;
    case 91u: goto L_08B8739C;
    case 92u: goto L_08B873A4;
    case 93u: goto L_08B873B4;
    case 94u: goto L_08B873C0;
    case 95u: goto L_08B873D0;
    case 96u: goto L_08B873D8;
    case 97u: goto L_08B873E4;
    case 98u: goto L_08B873F0;
    case 99u: goto L_08B873FC;
    case 100u: goto L_08B87404;
    case 101u: goto L_08B87414;
    case 102u: goto L_08B87424;
    case 103u: goto L_08B87434;
    case 104u: goto L_08B87440;
    case 105u: goto L_08B8744C;
    case 106u: goto L_08B8745C;
    case 107u: goto L_08B87468;
    case 108u: goto L_08B87474;
    case 109u: goto L_08B87478;
    case 110u: goto L_08B87484;
    case 111u: goto L_08B8748C;
    case 112u: goto L_08B8749C;
    case 113u: goto L_08B874A0;
    case 114u: goto L_08B874B8;
    case 115u: goto L_08B874C8;
    case 116u: goto L_08B874D0;
    case 117u: goto L_08B874F0;
    case 118u: goto L_08B874FC;
    case 119u: goto L_08B87508;
    case 120u: goto L_08B87518;
    case 121u: goto L_08B87520;
    case 122u: goto L_08B87530;
    case 123u: goto L_08B87534;
    case 124u: goto L_08B87540;
    case 125u: goto L_08B87548;
    case 126u: goto L_08B87550;
    case 127u: goto L_08B87558;
    case 128u: goto L_08B8755C;
    case 129u: goto L_08B87564;
    case 130u: goto L_08B8756C;
    case 131u: goto L_08B87578;
    case 132u: goto L_08B87580;
    case 133u: goto L_08B87588;
    case 134u: goto L_08B87594;
    case 135u: goto L_08B8759C;
    case 136u: goto L_08B875A4;
    case 137u: goto L_08B875B4;
    case 138u: goto L_08B875C0;
    case 139u: goto L_08B875D0;
    case 140u: goto L_08B875E4;
    case 141u: goto L_08B875F8;
    case 142u: goto L_08B8760C;
    case 143u: goto L_08B876F8;
    case 144u: goto L_08B87720;
    case 145u: goto L_08B87728;
    case 146u: goto L_08B87738;
    case 147u: goto L_08B87A28;
    case 148u: goto L_08B87A88;
    case 149u: goto L_08B87BA8;
    case 150u: goto L_08B87BC0;
    case 151u: goto L_08B87BD8;
    case 152u: goto L_08B87BE4;
    case 153u: goto L_08B87BF4;
    case 154u: goto L_08B87BFC;
    case 155u: goto L_08B87C0C;
    case 156u: goto L_08B87C14;
    case 157u: goto L_08B87C20;
    case 158u: goto L_08B87C28;
    case 159u: goto L_08B87C38;
    case 160u: goto L_08B87C3C;
    case 161u: goto L_08B87C54;
    case 162u: goto L_08B87D84;
    case 163u: goto L_08B87D8C;
    case 164u: goto L_08B87D98;
    case 165u: goto L_08B87DAC;
    case 166u: goto L_08B87DC0;
    case 167u: goto L_08B87DD8;
    case 168u: goto L_08B87DF0;
    case 169u: goto L_08B87E04;
    case 170u: goto L_08B87E18;
    case 171u: goto L_08B87E2C;
    case 172u: goto L_08B87E40;
    case 173u: goto L_08B87E48;
    case 174u: goto L_08B87E5C;
    case 175u: goto L_08B87E60;
    case 176u: goto L_08B87E68;
    case 177u: goto L_08B87E6C;
    case 178u: goto L_08B87E74;
    case 179u: goto L_08B87E7C;
    case 180u: goto L_08B87E90;
    case 181u: goto L_08B87EAC;
    case 182u: goto L_08B87EC4;
    case 183u: goto L_08B87ECC;
    case 184u: goto L_08B87EDC;
    case 185u: goto L_08B87EF4;
    case 186u: goto L_08B87EF8;
    case 187u: goto L_08B87F04;
    case 188u: goto L_08B87F0C;
    case 189u: goto L_08B87F10;
    case 190u: goto L_08B87F2C;
    case 191u: goto L_08B87F48;
    case 192u: goto L_08B87F68;
    case 193u: goto L_08B87F6C;
    case 194u: goto L_08B87F78;
    case 195u: goto L_08B87F80;
    case 196u: goto L_08B87F8C;
    case 197u: goto L_08B87FA0;
    case 198u: goto L_08B87FA4;
    case 199u: goto L_08B87FB0;
    case 200u: goto L_08B87FB8;
    case 201u: goto L_08B87FC4;
    case 202u: goto L_08B87FD8;
    case 203u: goto L_08B87FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B84000:
    rt.unsupported(0x08B84004u, 0x08ADA14Cu, "control flow in delay slot"); return;
L_08B84020:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    ctx.gpr[2] = (ctx.gpr[19] ^ 26956u);
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B8402Cu, 0x61746E65u, "vfpu0 not lowered yet"); return;
L_08B84040:
    ctx.gpr[20] = (ctx.gpr[26] + static_cast<std::uint32_t>(17989));
    rt.unsupported(0x08B84044u, 0x00000029u, "special? not lowered yet"); return;
L_08B84048:
    rt.unsupported(0x08B84048u, 0x69676552u, "unknown not lowered yet"); return;
L_08B84108:
    rt.unsupported(0x08B8410Cu, 0x5441444Eu, "control flow in delay slot"); return;
L_08B84110:
    rt.unsupported(0x08B84110u, 0x72462F41u, "unknown not lowered yet"); return;
L_08B84124:
    rt.unsupported(0x08B84124u, 0x43534944u, "unknown not lowered yet"); return;
L_08B84130:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B84134u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B8413Cu, 0x55527325u, "control flow in delay slot"); return;
L_08B8413C:
    rt.unsupported(0x08B84140u, 0x5441444Eu, "control flow in delay slot"); return;
L_08B84140:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B84144u, 0x72462F41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 14u, 0x08B9527Cu>(ctx, &aot_mem); return;
    }
    goto L_08B84148;
L_08B84144:
    rt.unsupported(0x08B84144u, 0x72462F41u, "unknown not lowered yet"); return;
L_08B84148:
    rt.unsupported(0x08B84148u, 0x45746E6Fu, "cop1? not lowered yet"); return;
L_08B84158:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B8415Cu, 0x41545349u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 43u, 0x08B99690u>(ctx, &aot_mem); return;
    }
    goto L_08B84160;
L_08B84160:
    rt.unsupported(0x08B84160u, 0x4D5F4554u, "unknown not lowered yet"); return;
L_08B8416C:
    // nop
    goto L_08B84170;
L_08B84170:
    rt.unsupported(0x08B84170u, 0x44494C53u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B84174u, 0x4D5F5245u, "unknown not lowered yet"); return;
L_08B84180:
    // nop
    goto L_08B84184;
L_08B84184:
    rt.unsupported(0x08B84188u, 0x5F4C4F52u, "control flow in delay slot"); return;
L_08B8418C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B84190u, 0x4D455449u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 8u, 0x08B946D0u>(ctx, &aot_mem); return;
    }
    goto L_08B84194;
L_08B84194:
    // nop
    goto L_08B84198;
L_08B84198:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B8419Cu, 0x495F4D4Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 44u, 0x08B996A8u>(ctx, &aot_mem); return;
    }
    goto L_08B841A0;
L_08B841A0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B841A4u, 0x43415254u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 19u, 0x08B956F4u>(ctx, &aot_mem); return;
    }
    goto L_08B841A8;
L_08B841A8:
    if (0u != 0u) ctx.gpr[10] = (0u);
    goto L_08B841AC;
L_08B841AC:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B841B0u, 0x495F4D4Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 45u, 0x08B996BCu>(ctx, &aot_mem); return;
    }
    goto L_08B841B4;
L_08B841B4:
    rt.unsupported(0x08B841B8u, 0x544C554Du, "control flow in delay slot"); return;
L_08B841BC:
    rt.unsupported(0x08B841BCu, 0x414C5049u, "unknown not lowered yet"); return;
L_08B841C4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B841C8u, 0x495F4D4Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 46u, 0x08B996D4u>(ctx, &aot_mem); return;
    }
    goto L_08B841CC;
L_08B841CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B841D0u, 0x49444152u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 21u, 0x08B95720u>(ctx, &aot_mem); return;
    }
    goto L_08B841D4;
L_08B841D4:
    rt.unsupported(0x08B841D4u, 0x43495F4Fu, "unknown not lowered yet"); return;
L_08B841E0:
    rt.unsupported(0x08B841E0u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B841F4:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B841F8u, 0x20737275u, "unknown not lowered yet"); return;
L_08B84214:
    rt.unsupported(0x08B84214u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B84228:
    rt.unsupported(0x08B84228u, 0x202D2054u, "unknown not lowered yet"); return;
L_08B84258:
    rt.unsupported(0x08B84258u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B84268:
    rt.unsupported(0x08B84268u, 0x4F435F54u, "unknown not lowered yet"); return;
L_08B84274:
    if (ctx.gpr[1] != 0u) {
    ctx.execute_vfpu_vscl_ct<104u, 101u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 125u, 0x08B8F6F8u>(ctx, &aot_mem); return;
    }
    goto L_08B8427C;
L_08B8427C:
    ctx.execute_vfpu_vscl_ct<32u, 97u, 114u, 1u>();
    rt.unsupported(0x08B84280u, 0x20642520u, "unknown not lowered yet"); return;
L_08B844F8:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B84514u, 0x00000001u, "special? not lowered yet"); return;
L_08B846E0:
    // nop
    // nop
    ctx.pc = 0x02AEC130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B84C24:
    // nop
    ctx.pc = 0x02B92FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B8595C:
    // nop
    ctx.pc = 0x0277B880u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B85A68:
    // nop
    // nop
    ctx.pc = 0x02CAAA30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B85BA0:
    // nop
    // nop
    ctx.pc = 0x02CAB900u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B866C4:
    // nop
    ctx.pc = 0x027615F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B8691C:
    // nop
    ctx.pc = 0x02BA9E70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B871D8:
    rt.unsupported(0x08B871D8u, 0x47495254u, "cop1? not lowered yet"); return;
L_08B871E4:
    rt.unsupported(0x08B871E4u, 0x4552505Fu, "cop1? not lowered yet"); return;
L_08B871F0:
    rt.unsupported(0x08B871F0u, 0x47495254u, "cop1? not lowered yet"); return;
L_08B871FC:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    rt.unsupported(0x08B87200u, 0x45535345u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 35u, 0x08B9EF50u>(ctx, &aot_mem); return;
    }
    goto L_08B87204;
L_08B87204:
    (void)(0u << (0u & 31u));
    goto L_08B87208;
L_08B87208:
    rt.unsupported(0x08B87208u, 0x47495254u, "cop1? not lowered yet"); return;
L_08B87214:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B87218u, 0x00004445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 16u, 0x08B98760u>(ctx, &aot_mem); return;
    }
    goto L_08B8721C;
L_08B8721C:
    rt.unsupported(0x08B8721Cu, 0x47495254u, "cop1? not lowered yet"); return;
L_08B87228:
    rt.unsupported(0x08B87228u, 0x4552505Fu, "cop1? not lowered yet"); return;
L_08B87234:
    rt.unsupported(0x08B87234u, 0x47495254u, "cop1? not lowered yet"); return;
L_08B87240:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B87244u, 0x00004445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 19u, 0x08B9878Cu>(ctx, &aot_mem); return;
    }
    goto L_08B87248;
L_08B87248:
    rt.unsupported(0x08B87248u, 0x47495254u, "cop1? not lowered yet"); return;
L_08B87254:
    rt.unsupported(0x08B87258u, 0x53534552u, "control flow in delay slot"); return;
L_08B8725C:
    rt.unsupported(0x08B8725Cu, 0x00004445u, "special? not lowered yet"); return;
L_08B87260:
    rt.unsupported(0x08B87260u, 0x47495254u, "cop1? not lowered yet"); return;
L_08B8726C:
    rt.unsupported(0x08B8726Cu, 0x4C484749u, "unknown not lowered yet"); return;
L_08B87278:
    rt.unsupported(0x08B87278u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B8728C:
    rt.unsupported(0x08B87290u, 0x5F59425Fu, "control flow in delay slot"); return;
L_08B87294:
    rt.unsupported(0x08B87294u, 0x454D414Eu, "cop1? not lowered yet"); return;
L_08B8729C:
    rt.unsupported(0x08B8729Cu, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B872AC:
    rt.unsupported(0x08B872ACu, 0x4154535Fu, "unknown not lowered yet"); return;
L_08B872B4:
    rt.unsupported(0x08B872B4u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B872C0:
    if (ctx.gpr[10] != ctx.gpr[14]) {
    rt.unsupported(0x08B872C4u, 0x4154535Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 22u, 0x08B987F8u>(ctx, &aot_mem); return;
    }
    goto L_08B872C8;
L_08B872C8:
    rt.unsupported(0x08B872C8u, 0x00004554u, "special? not lowered yet"); return;
L_08B872CC:
    rt.unsupported(0x08B872CCu, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B872D8:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B872DCu, 0x41505F45u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 4u, 0x08B9C3E8u>(ctx, &aot_mem); return;
    }
    goto L_08B872E0;
L_08B872E0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08B872E4;
L_08B872E4:
    rt.unsupported(0x08B872E4u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B872F4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B872F8u, 0x45474150u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 12u, 0x08B9CC1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B872FC;
L_08B872FC:
    // nop
    goto L_08B87300;
L_08B87300:
    rt.unsupported(0x08B87300u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87310:
    rt.unsupported(0x08B87310u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B8731C:
    rt.unsupported(0x08B8731Cu, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B8732C:
    rt.unsupported(0x08B87330u, 0x505F5245u, "control flow in delay slot"); return;
L_08B87334:
    rt.unsupported(0x08B87334u, 0x00454741u, "special? not lowered yet"); return;
L_08B87338:
    rt.unsupported(0x08B87338u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87344:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    rt.unsupported(0x08B87348u, 0x494C4C4Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 2u, 0x08B9C0C4u>(ctx, &aot_mem); return;
    }
    goto L_08B8734C;
L_08B8734C:
    if (ctx.gpr[2] != ctx.gpr[31]) {
    rt.unsupported(0x08B87350u, 0x00545845u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 40u, 0x08B99088u>(ctx, &aot_mem); return;
    }
    goto L_08B87354;
L_08B87354:
    rt.unsupported(0x08B87354u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87364:
    // nop
    goto L_08B87368;
L_08B87368:
    rt.unsupported(0x08B87368u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87378:
    rt.unsupported(0x08B87378u, 0x0000454Du, "special? not lowered yet"); return;
L_08B8737C:
    rt.unsupported(0x08B8737Cu, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87388:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    rt.unsupported(0x08B8738Cu, 0x00454741u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 42u, 0x08B994D8u>(ctx, &aot_mem); return;
    }
    goto L_08B87390;
L_08B87390:
    rt.unsupported(0x08B87390u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B8739C:
    rt.unsupported(0x08B873A0u, 0x5049544Cu, "control flow in delay slot"); return;
L_08B873A4:
    rt.unsupported(0x08B873A4u, 0x4559414Cu, "cop1? not lowered yet"); return;
L_08B873B4:
    rt.unsupported(0x08B873B4u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B873C0:
    rt.unsupported(0x08B873C0u, 0x44454D41u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B873C4u, 0x454C455Fu, "cop1? not lowered yet"); return;
L_08B873D0:
    rt.unsupported(0x08B873D0u, 0x454C4249u, "cop1? not lowered yet"); return;
L_08B873D8:
    rt.unsupported(0x08B873D8u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B873E4:
    rt.unsupported(0x08B873E4u, 0x4F545F4Eu, "unknown not lowered yet"); return;
L_08B873F0:
    rt.unsupported(0x08B873F0u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B873FC:
    rt.unsupported(0x08B873FCu, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B87404:
    rt.unsupported(0x08B87404u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87414:
    rt.unsupported(0x08B87414u, 0x4E4F435Fu, "unknown not lowered yet"); return;
L_08B87424:
    rt.unsupported(0x08B87424u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87434:
    rt.unsupported(0x08B87434u, 0x4E4F435Fu, "unknown not lowered yet"); return;
L_08B87440:
    rt.unsupported(0x08B87440u, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B8744C:
    rt.unsupported(0x08B8744Cu, 0x4F545455u, "unknown not lowered yet"); return;
L_08B8745C:
    rt.unsupported(0x08B8745Cu, 0x49544341u, "cop2/vfpu not lowered yet"); return;
L_08B87468:
    rt.unsupported(0x08B87468u, 0x4D41475Fu, "unknown not lowered yet"); return;
L_08B87474:
    ctx.lo = 0u;
    goto L_08B87478;
L_08B87478:
    rt.unsupported(0x08B87478u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B87484:
    rt.unsupported(0x08B87484u, 0x4D554C4Fu, "unknown not lowered yet"); return;
L_08B8748C:
    rt.unsupported(0x08B8748Cu, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B8749C:
    rt.unsupported(0x08B8749Cu, 0x0053454Cu, "syscall not lowered yet"); return;
L_08B874A0:
    rt.unsupported(0x08B874A0u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B874B8:
    rt.unsupported(0x08B874B8u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B874C8:
    rt.unsupported(0x08B874C8u, 0x4B4F4F4Cu, "cop2/vfpu not lowered yet"); return;
L_08B874D0:
    rt.unsupported(0x08B874D0u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B874F0:
    rt.unsupported(0x08B874F0u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B874FC:
    rt.unsupported(0x08B874FCu, 0x4E4F5F57u, "unknown not lowered yet"); return;
L_08B87508:
    rt.unsupported(0x08B87508u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B87518:
    rt.unsupported(0x08B87518u, 0x43415254u, "unknown not lowered yet"); return;
L_08B87520:
    rt.unsupported(0x08B87520u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B87530:
    rt.memory().memory_barrier();
    goto L_08B87534;
L_08B87534:
    rt.unsupported(0x08B87534u, 0x4B4F4F48u, "cop2/vfpu not lowered yet"); return;
L_08B87540:
    rt.unsupported(0x08B87540u, 0x474E4952u, "cop1? not lowered yet"); return;
L_08B87548:
    rt.unsupported(0x08B8754Cu, 0x554F535Fu, "control flow in delay slot"); return;
L_08B87550:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B87554u, 0x454E4F4Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 6u, 0x08B9829Cu>(ctx, &aot_mem); return;
    }
    goto L_08B87558;
L_08B87558:
    // nop
    goto L_08B8755C;
L_08B8755C:
    rt.unsupported(0x08B87560u, 0x554F535Fu, "control flow in delay slot"); return;
L_08B87564:
    rt.unsupported(0x08B87568u, 0x54415453u, "control flow in delay slot"); return;
L_08B8756C:
    rt.unsupported(0x08B8756Cu, 0x49545F53u, "cop2/vfpu not lowered yet"); return;
L_08B87578:
    rt.unsupported(0x08B8757Cu, 0x554F535Fu, "control flow in delay slot"); return;
L_08B87580:
    rt.unsupported(0x08B87584u, 0x54415453u, "control flow in delay slot"); return;
L_08B87588:
    rt.unsupported(0x08B87588u, 0x41565F53u, "unknown not lowered yet"); return;
L_08B87594:
    rt.unsupported(0x08B87598u, 0x554F535Fu, "control flow in delay slot"); return;
L_08B8759C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B875A0u, 0x45495242u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 9u, 0x08B982E8u>(ctx, &aot_mem); return;
    }
    goto L_08B875A4;
L_08B875A4:
    (void)(std::rotr(0u, static_cast<int>(0u & 31u)));
    if (0u != 0u) ctx.gpr[10] = (0u);
    rt.unsupported(0x08B875ACu, 0x48534E45u, "cop2/vfpu not lowered yet"); return;
L_08B875B4:
    rt.unsupported(0x08B875B4u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B875C0:
    rt.unsupported(0x08B875C0u, 0x6867696Cu, "unknown not lowered yet"); return;
L_08B875D0:
    rt.unsupported(0x08B875D0u, 0x756E614Du, "unknown not lowered yet"); return;
L_08B875E4:
    rt.unsupported(0x08B875E4u, 0x436D754Eu, "unknown not lowered yet"); return;
L_08B875F8:
    ctx.execute_vfpu_vhdp(67u, 111u, 110u, 1u);
    rt.unsupported(0x08B875FCu, 0x72416769u, "unknown not lowered yet"); return;
L_08B8760C:
    ctx.execute_vfpu_vhdp(67u, 111u, 110u, 1u);
    rt.unsupported(0x08B87610u, 0x72416769u, "unknown not lowered yet"); return;
L_08B876F8:
    ctx.execute_vfpu_vscl_ct<119u, 97u, 116u, 1u>();
    ctx.execute_vfpu_vhdp(114u, 114u, 101u, 1u);
    rt.unsupported(0x08B87700u, 0x7463656Cu, "unknown not lowered yet"); return;
L_08B87720:
    rt.unsupported(0x08B87720u, 0x0000594Eu, "special? not lowered yet"); return;
L_08B87728:
    rt.unsupported(0x08B87728u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B87738:
    (void)(0u & 0u);
    // nop
    rt.unsupported(0x08B87740u, 0x7070632Eu, "unknown not lowered yet"); return;
L_08B87A28:
    rt.unsupported(0x08B87A2Cu, 0x08B0D3C8u, "control flow in delay slot"); return;
L_08B87A88:
    rt.unsupported(0x08B87A8Cu, 0x08B0C9A4u, "control flow in delay slot"); return;
L_08B87BA8:
    rt.unsupported(0x08B87BACu, 0x08B1108Cu, "control flow in delay slot"); return;
L_08B87BC0:
    rt.unsupported(0x08B87BC0u, 0x61655743u, "vfpu0 not lowered yet"); return;
L_08B87BD8:
    rt.unsupported(0x08B87BD8u, 0x74696157u, "unknown not lowered yet"); return;
L_08B87BE4:
    rt.unsupported(0x08B87BE4u, 0x43646E41u, "unknown not lowered yet"); return;
L_08B87BF4:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B87BF8u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 27u, 0x08BA1144u>(ctx, &aot_mem); return;
    }
    goto L_08B87BFC;
L_08B87BFC:
    rt.unsupported(0x08B87BFCu, 0x70696C42u, "unknown not lowered yet"); return;
L_08B87C0C:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B87C10u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 28u, 0x08BA115Cu>(ctx, &aot_mem); return;
    }
    goto L_08B87C14;
L_08B87C14:
    rt.unsupported(0x08B87C14u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B87C20:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B87C24u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 29u, 0x08BA1170u>(ctx, &aot_mem); return;
    }
    goto L_08B87C28;
L_08B87C28:
    rt.unsupported(0x08B87C28u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B87C38:
    // nop
    goto L_08B87C3C;
L_08B87C3C:
    rt.unsupported(0x08B87C3Cu, 0x43746553u, "unknown not lowered yet"); return;
L_08B87C54:
    rt.unsupported(0x08B87C58u, 0x08B15770u, "control flow in delay slot"); return;
L_08B87D84:
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 110u, 0x08BA2E8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B87D8C;
L_08B87D8C:
    rt.unsupported(0x08B87D8Cu, 0x78457372u, "unknown not lowered yet"); return;
L_08B87D98:
    rt.unsupported(0x08B87D98u, 0x70726157u, "unknown not lowered yet"); return;
L_08B87DAC:
    rt.unsupported(0x08B87DACu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B87DC0:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B87DC4u, 0x72657961u, "unknown not lowered yet"); return;
L_08B87DD8:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B87DDCu, 0x72657961u, "unknown not lowered yet"); return;
L_08B87DF0:
    rt.unsupported(0x08B87DF0u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B87E04:
    rt.unsupported(0x08B87E04u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B87E18:
    rt.unsupported(0x08B87E18u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B87E2C:
    rt.unsupported(0x08B87E2Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B87E40:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 36u, 0x08BA1390u>(ctx, &aot_mem); return;
    }
    goto L_08B87E48;
L_08B87E48:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<114u, 66u, 1u, 1u>();
    rt.unsupported(0x08B87E50u, 0x68537069u, "unknown not lowered yet"); return;
L_08B87E5C:
    // nop
    goto L_08B87E60;
L_08B87E60:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 37u, 0x08BA13B0u>(ctx, &aot_mem); return;
    }
    goto L_08B87E68;
L_08B87E68:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    goto L_08B87E6C;
L_08B87E6C:
    rt.unsupported(0x08B87E6Cu, 0x63497261u, "vfpu0 not lowered yet"); return;
L_08B87E74:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 38u, 0x08BA13C4u>(ctx, &aot_mem); return;
    }
    goto L_08B87E7C;
L_08B87E7C:
    rt.unsupported(0x08B87E7Cu, 0x696C4272u, "unknown not lowered yet"); return;
L_08B87E90:
    rt.unsupported(0x08B87E90u, 0x4D746553u, "unknown not lowered yet"); return;
L_08B87EAC:
    rt.unsupported(0x08B87EACu, 0x61706552u, "vfpu0 not lowered yet"); return;
L_08B87EC4:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 39u, 0x08BA1414u>(ctx, &aot_mem); return;
    }
    goto L_08B87ECC;
L_08B87ECC:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B87ED4u, 0x466E4F65u, "cop1? not lowered yet"); return;
L_08B87EDC:
    rt.unsupported(0x08B87EDCu, 0x73727542u, "unknown not lowered yet"); return;
L_08B87EF4:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B87EF8;
L_08B87EF8:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 5u, 0x08BA048Cu>(ctx, &aot_mem); return;
    }
    goto L_08B87F04;
L_08B87F04:
    if (ctx.gpr[19] != ctx.gpr[14]) {
    rt.unsupported(0x08B87F08u, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 58u, 0x08B9A4D0u>(ctx, &aot_mem); return;
    }
    goto L_08B87F0C;
L_08B87F0C:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B87F10;
L_08B87F10:
    rt.unsupported(0x08B87F10u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B87F2C:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B87F30u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B87F48:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B87F4Cu, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B87F68:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    goto L_08B87F6C;
L_08B87F6C:
    ctx.execute_vfpu_compare3(118u, 101u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 6u, 0x08BA0500u>(ctx, &aot_mem); return;
    }
    goto L_08B87F78;
L_08B87F78:
    if (ctx.gpr[19] == ctx.gpr[15]) {
    rt.unsupported(0x08B87F7Cu, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 81u, 0x08B9B944u>(ctx, &aot_mem); return;
    }
    goto L_08B87F80;
L_08B87F80:
    rt.unsupported(0x08B87F80u, 0x45726F46u, "cop1? not lowered yet"); return;
L_08B87F8C:
    rt.unsupported(0x08B87F8Cu, 0x4C746547u, "unknown not lowered yet"); return;
L_08B87FA0:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B87FA4;
L_08B87FA4:
    rt.unsupported(0x08B87FA4u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B87FB0:
    rt.unsupported(0x08B87FB0u, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08B87FB8:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 7u, 0x08BA054Cu>(ctx, &aot_mem); return;
    }
    goto L_08B87FC4;
L_08B87FC4:
    rt.unsupported(0x08B87FC4u, 0x746E4572u, "unknown not lowered yet"); return;
L_08B87FD8:
    rt.unsupported(0x08B87FD8u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B87FF0:
    rt.unsupported(0x08B87FF0u, 0x72417349u, "unknown not lowered yet"); return;
}

void recomp_unit_0224(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0224_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_224(Runtime &runtime) {
    runtime.register_generated_unit(224u, 0x08B84000u, 16384u, &recomp_unit_0224, &recomp_unit_0224_entry);
    runtime.register_function(0x08B84000u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84020u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84040u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84048u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84108u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84110u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84124u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84130u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8413Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84140u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84144u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84148u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84158u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84160u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8416Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84170u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84180u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84184u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8418Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84194u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84198u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841A0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841A8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841BCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841C4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841CCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841D4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B841F4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84214u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84228u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84258u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84268u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84274u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8427Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B844F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B846E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B84C24u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8595Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B85A68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B85BA0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B866C4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8691Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B871FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87204u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87208u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87214u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8721Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87228u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87234u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87240u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87248u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87254u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8725Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87260u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8726Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87278u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8728Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87294u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8729Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872CCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872F4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B872FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87300u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87310u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8731Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8732Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87334u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87338u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87344u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8734Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87354u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87364u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87368u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87378u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8737Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87388u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87390u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8739Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B873FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87404u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87414u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87424u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87434u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87440u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8744Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8745Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87468u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87474u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87478u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87484u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8748Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8749Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874A0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874B8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B874FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87508u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87518u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87520u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87530u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87534u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87540u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87548u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87550u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87558u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8755Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87564u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8756Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87578u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87580u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87588u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87594u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8759Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B875F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B8760Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B876F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87720u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87728u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87738u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87A28u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87A88u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BA8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BC0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BE4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BF4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87BFCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C0Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C14u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C20u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C28u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C38u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C3Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87C54u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87D84u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87D8Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87D98u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DC0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87DF0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E18u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E2Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E40u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E48u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E5Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E60u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E6Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E74u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E7Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87E90u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EC4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87ECCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EDCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EF4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87EF8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F0Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F10u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F2Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F48u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F6Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F78u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F80u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87F8Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FA0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FA4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FB0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FB8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FC4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x08B87FF0u, &recomp_unit_0224, "recomp_unit_0224");
}
} // namespace psprecomp
