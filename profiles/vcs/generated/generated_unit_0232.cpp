#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0232[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0,
    38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0,
    54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0,
    70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0,
    86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0,
    102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0,
    118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0,
    134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
};
void recomp_unit_0232_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08BA4000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0232[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08BA4000;
    case 2u: goto L_08BA4078;
    case 3u: goto L_08BA40D0;
    case 4u: goto L_08BA40D8;
    case 5u: goto L_08BA40E0;
    case 6u: goto L_08BA4128;
    case 7u: goto L_08BA4138;
    case 8u: goto L_08BA4174;
    case 9u: goto L_08BA41B8;
    case 10u: goto L_08BA41E8;
    case 11u: goto L_08BA4200;
    case 12u: goto L_08BA4228;
    case 13u: goto L_08BA4230;
    case 14u: goto L_08BA4238;
    case 15u: goto L_08BA4250;
    case 16u: goto L_08BA4260;
    case 17u: goto L_08BA42D4;
    case 18u: goto L_08BA42D8;
    case 19u: goto L_08BA4328;
    case 20u: goto L_08BA434C;
    case 21u: goto L_08BA4350;
    case 22u: goto L_08BA4378;
    case 23u: goto L_08BA4388;
    case 24u: goto L_08BA4390;
    case 25u: goto L_08BA4398;
    case 26u: goto L_08BA43A0;
    case 27u: goto L_08BA43A8;
    case 28u: goto L_08BA43B0;
    case 29u: goto L_08BA43B8;
    case 30u: goto L_08BA43C0;
    case 31u: goto L_08BA43C8;
    case 32u: goto L_08BA43D0;
    case 33u: goto L_08BA43D8;
    case 34u: goto L_08BA43E0;
    case 35u: goto L_08BA43E8;
    case 36u: goto L_08BA43F0;
    case 37u: goto L_08BA43F8;
    case 38u: goto L_08BA4400;
    case 39u: goto L_08BA4408;
    case 40u: goto L_08BA4410;
    case 41u: goto L_08BA4418;
    case 42u: goto L_08BA4420;
    case 43u: goto L_08BA4428;
    case 44u: goto L_08BA4430;
    case 45u: goto L_08BA4438;
    case 46u: goto L_08BA4440;
    case 47u: goto L_08BA4448;
    case 48u: goto L_08BA4450;
    case 49u: goto L_08BA4458;
    case 50u: goto L_08BA4460;
    case 51u: goto L_08BA4468;
    case 52u: goto L_08BA4470;
    case 53u: goto L_08BA4478;
    case 54u: goto L_08BA4480;
    case 55u: goto L_08BA4488;
    case 56u: goto L_08BA4490;
    case 57u: goto L_08BA4498;
    case 58u: goto L_08BA44A0;
    case 59u: goto L_08BA44A8;
    case 60u: goto L_08BA44B0;
    case 61u: goto L_08BA44B8;
    case 62u: goto L_08BA44C0;
    case 63u: goto L_08BA44C8;
    case 64u: goto L_08BA44D0;
    case 65u: goto L_08BA44D8;
    case 66u: goto L_08BA44E0;
    case 67u: goto L_08BA44E8;
    case 68u: goto L_08BA44F0;
    case 69u: goto L_08BA44F8;
    case 70u: goto L_08BA4500;
    case 71u: goto L_08BA4508;
    case 72u: goto L_08BA4510;
    case 73u: goto L_08BA4518;
    case 74u: goto L_08BA4520;
    case 75u: goto L_08BA4528;
    case 76u: goto L_08BA4530;
    case 77u: goto L_08BA4538;
    case 78u: goto L_08BA4540;
    case 79u: goto L_08BA4548;
    case 80u: goto L_08BA4550;
    case 81u: goto L_08BA4558;
    case 82u: goto L_08BA4560;
    case 83u: goto L_08BA4568;
    case 84u: goto L_08BA4570;
    case 85u: goto L_08BA4578;
    case 86u: goto L_08BA4580;
    case 87u: goto L_08BA4588;
    case 88u: goto L_08BA4590;
    case 89u: goto L_08BA4598;
    case 90u: goto L_08BA45A0;
    case 91u: goto L_08BA45A8;
    case 92u: goto L_08BA45B0;
    case 93u: goto L_08BA45B8;
    case 94u: goto L_08BA45C0;
    case 95u: goto L_08BA45C8;
    case 96u: goto L_08BA45D0;
    case 97u: goto L_08BA45D8;
    case 98u: goto L_08BA45E0;
    case 99u: goto L_08BA45E8;
    case 100u: goto L_08BA45F0;
    case 101u: goto L_08BA45F8;
    case 102u: goto L_08BA4600;
    case 103u: goto L_08BA4608;
    case 104u: goto L_08BA4610;
    case 105u: goto L_08BA4618;
    case 106u: goto L_08BA4620;
    case 107u: goto L_08BA4628;
    case 108u: goto L_08BA4630;
    case 109u: goto L_08BA4638;
    case 110u: goto L_08BA4640;
    case 111u: goto L_08BA4648;
    case 112u: goto L_08BA4650;
    case 113u: goto L_08BA4658;
    case 114u: goto L_08BA4660;
    case 115u: goto L_08BA4668;
    case 116u: goto L_08BA4670;
    case 117u: goto L_08BA4678;
    case 118u: goto L_08BA4680;
    case 119u: goto L_08BA4688;
    case 120u: goto L_08BA4690;
    case 121u: goto L_08BA4698;
    case 122u: goto L_08BA46A0;
    case 123u: goto L_08BA46A8;
    case 124u: goto L_08BA46B0;
    case 125u: goto L_08BA46B8;
    case 126u: goto L_08BA46C0;
    case 127u: goto L_08BA46C8;
    case 128u: goto L_08BA46D0;
    case 129u: goto L_08BA46D8;
    case 130u: goto L_08BA46E0;
    case 131u: goto L_08BA46E8;
    case 132u: goto L_08BA46F0;
    case 133u: goto L_08BA46F8;
    case 134u: goto L_08BA4700;
    case 135u: goto L_08BA4708;
    case 136u: goto L_08BA4710;
    case 137u: goto L_08BA4718;
    case 138u: goto L_08BA4720;
    case 139u: goto L_08BA4728;
    case 140u: goto L_08BA4730;
    case 141u: goto L_08BA4738;
    case 142u: goto L_08BA4740;
    case 143u: goto L_08BA4748;
    case 144u: goto L_08BA4750;
    case 145u: goto L_08BA4758;
    case 146u: goto L_08BA4760;
    case 147u: goto L_08BA4768;
    case 148u: goto L_08BA4770;
    case 149u: goto L_08BA4778;
    case 150u: goto L_08BA4780;
    case 151u: goto L_08BA4814;
    case 152u: goto L_08BA4838;
    case 153u: goto L_08BA4870;
    case 154u: goto L_08BA4884;
    case 155u: goto L_08BA4894;
    case 156u: goto L_08BA48F0;
    case 157u: goto L_08BA4904;
    case 158u: goto L_08BA4930;
    case 159u: goto L_08BA49C8;
    case 160u: goto L_08BA4A88;
    case 161u: goto L_08BA4AD0;
    case 162u: goto L_08BA4B78;
    case 163u: goto L_08BA4C50;
    case 164u: goto L_08BA4D10;
    case 165u: goto L_08BA4D38;
    case 166u: goto L_08BA4D70;
    case 167u: goto L_08BA4E10;
    case 168u: goto L_08BA4E20;
    case 169u: goto L_08BA4FD8;
    case 170u: goto L_08BA4FE8;
    case 171u: goto L_08BA5060;
    case 172u: goto L_08BA50C0;
    case 173u: goto L_08BA5180;
    case 174u: goto L_08BA5258;
    case 175u: goto L_08BA5338;
    case 176u: goto L_08BA5394;
    case 177u: goto L_08BA539C;
    case 178u: goto L_08BA53A8;
    case 179u: goto L_08BA53AC;
    case 180u: goto L_08BA53E0;
    case 181u: goto L_08BA53EC;
    case 182u: goto L_08BA5418;
    case 183u: goto L_08BA54C8;
    case 184u: goto L_08BA55A0;
    case 185u: goto L_08BA55B0;
    case 186u: goto L_08BA5608;
    case 187u: goto L_08BA5758;
    case 188u: goto L_08BA57D0;
    case 189u: goto L_08BA5800;
    case 190u: goto L_08BA5810;
    case 191u: goto L_08BA5870;
    case 192u: goto L_08BA58E0;
    case 193u: goto L_08BA5900;
    case 194u: goto L_08BA5930;
    case 195u: goto L_08BA5960;
    case 196u: goto L_08BA59C0;
    case 197u: goto L_08BA5A38;
    case 198u: goto L_08BA5B40;
    case 199u: goto L_08BA5C48;
    case 200u: goto L_08BA5C58;
    case 201u: goto L_08BA5CF0;
    case 202u: goto L_08BA5D08;
    case 203u: goto L_08BA5EAC;
    case 204u: goto L_08BA5ED0;
    case 205u: goto L_08BA5F00;
    case 206u: goto L_08BA5FA8;
    case 207u: goto L_08BA6020;
    case 208u: goto L_08BA6098;
    case 209u: goto L_08BA60E8;
    case 210u: goto L_08BA6118;
    case 211u: goto L_08BA6148;
    case 212u: goto L_08BA6178;
    case 213u: goto L_08BA61A8;
    case 214u: goto L_08BA61D8;
    case 215u: goto L_08BA6250;
    case 216u: goto L_08BA6260;
    case 217u: goto L_08BA6338;
    case 218u: goto L_08BA63F8;
    case 219u: goto L_08BA64A8;
    case 220u: goto L_08BA6580;
    case 221u: goto L_08BA6748;
    case 222u: goto L_08BA6850;
    case 223u: goto L_08BA6900;
    case 224u: goto L_08BA6910;
    case 225u: goto L_08BA6AD8;
    case 226u: goto L_08BA6BB0;
    case 227u: goto L_08BA6C70;
    case 228u: goto L_08BA6CD0;
    case 229u: goto L_08BA6E78;
    case 230u: goto L_08BA6E88;
    case 231u: goto L_08BA6ED0;
    case 232u: goto L_08BA6F18;
    case 233u: goto L_08BA6F60;
    case 234u: goto L_08BA6FA8;
    case 235u: goto L_08BA6FF0;
    case 236u: goto L_08BA7038;
    case 237u: goto L_08BA7080;
    case 238u: goto L_08BA7118;
    case 239u: goto L_08BA7128;
    case 240u: goto L_08BA71E8;
    case 241u: goto L_08BA72C0;
    case 242u: goto L_08BA73C8;
    case 243u: goto L_08BA7410;
    case 244u: goto L_08BA74D0;
    case 245u: goto L_08BA7578;
    case 246u: goto L_08BA7588;
    case 247u: goto L_08BA7740;
    case 248u: goto L_08BA7818;
    case 249u: goto L_08BA7828;
    case 250u: goto L_08BA78E8;
    case 251u: goto L_08BA7924;
    case 252u: goto L_08BA7958;
    case 253u: goto L_08BA7978;
    case 254u: goto L_08BA79C0;
    case 255u: goto L_08BA7A68;
    case 256u: goto L_08BA7AC8;
    case 257u: goto L_08BA7BA0;
    case 258u: goto L_08BA7C60;
    case 259u: goto L_08BA7C90;
    case 260u: goto L_08BA7D38;
    case 261u: goto L_08BA7DF8;
    case 262u: goto L_08BA7ED0;
    case 263u: goto L_08BA7F30;
    case 264u: goto L_08BA7FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08BA4000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08BA4044u, 0x40000000u, "unknown not lowered yet"); return;
L_08BA4078:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08BA4080u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08BA40D0:
    rt.unsupported(0x08BA40D0u, 0x20202020u, "unknown not lowered yet"); return;
L_08BA40D8:
    rt.unsupported(0x08BA40D8u, 0x20202020u, "unknown not lowered yet"); return;
L_08BA40E0:
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    // nop
    // nop
    // nop
    rt.unsupported(0x08BA40FCu, 0xC0100000u, "unknown not lowered yet"); return;
L_08BA4128:
    rt.unsupported(0x08BA4128u, 0x20202020u, "unknown not lowered yet"); return;
L_08BA4138:
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    // nop
    rt.unsupported(0x08BA4158u, 0x00000030u, "special? not lowered yet"); return;
L_08BA4174:
    rt.unsupported(0x08BA4178u, 0x08B89C6Cu, "control flow in delay slot"); return;
L_08BA41B8:
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.gpr[6] = (11842u << 16u);
    ctx.gpr[25] = (ctx.gpr[11] | 15478u);
    ctx.gpr[10] = (14831u << 16u);
    // nop
    rt.unsupported(0x08BA41DCu, 0x43500000u, "unknown not lowered yet"); return;
L_08BA41E8:
    ctx.gpr[23] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-1532), ctx.gpr[23]));
    ctx.gpr[25] = (39321u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[1] + static_cast<std::uint32_t>(-27815)));
    ctx.gpr[18] = (18724u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    ctx.gpr[12] = (29125u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08BC24B8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08BA4200;
    }
L_08BA4200:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(990)));
    ctx.gpr[7] = (18020u << 16u);
    { const float vfpu_constant = std::bit_cast<float>(0x00000000u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    ctx.gpr[3] = (39433u << 16u);
    { const float vfpu_value[1]{static_cast<float>(21060)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<62u, 1u>(vfpu_value); }
    ctx.gpr[2] = (61714u << 16u);
    // nop
    // nop
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[27] = (52091u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 17u, 0x08B9D65Cu>(ctx, &aot_mem); return;
      }
      goto L_08BA4228;
    }
L_08BA4228:
    if (ctx.gpr[4] == ctx.gpr[31]) {
    ctx.gpr[19] = (17427u << 16u);
        ctx.pc = 0x08BBC22Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08BA4230;
L_08BA4230:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[17];
    ctx.gpr[25] = (65267u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08BAEF0Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08BA4238;
    }
L_08BA4238:
    // nop
    ctx.gpr[16] = ((ctx.gpr[31] >> 0u) & 0x00000001u);
    // nop
    rt.unsupported(0x08BA4244u, 0xC3500000u, "unknown not lowered yet"); return;
L_08BA4250:
    // nop
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08BA425Cu, 0x40000000u, "unknown not lowered yet"); return;
L_08BA4260:
    // nop
    ctx.gpr[16] = (0u << 16u);
    // nop
    rt.unsupported(0x08BA426Cu, 0x40240000u, "unknown not lowered yet"); return;
L_08BA42D4:
    rt.unsupported(0x08BA42D4u, 0x42D6BCC4u, "unknown not lowered yet"); return;
L_08BA42D8:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(0));
    rt.unsupported(0x08BA42DCu, 0x430C6BF5u, "unknown not lowered yet"); return;
L_08BA4328:
    (void)(ctx.gpr[31] | 32768u);
    rt.unsupported(0x08BA432Cu, 0x4341C379u, "unknown not lowered yet"); return;
L_08BA434C:
    rt.unsupported(0x08BA434Cu, 0x75154FDDu, "unknown not lowered yet"); return;
L_08BA4350:
    ctx.gpr[24] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[28] = (53938u << 16u);
    rt.unsupported(0x08BA4358u, 0xD5A8A733u, "vfpu not lowered yet"); return;
L_08BA4378:
    rt.unsupported(0x08BA4378u, 0x00000005u, "special? not lowered yet"); return;
L_08BA4388:
    // nop
    // nop
    goto L_08BA4390;
L_08BA4390:
    rt.unsupported(0x08BA4394u, 0x08BA4388u, "control flow in delay slot"); return;
L_08BA4398:
    rt.unsupported(0x08BA439Cu, 0x08BA4390u, "control flow in delay slot"); return;
L_08BA43A0:
    rt.unsupported(0x08BA43A4u, 0x08BA4398u, "control flow in delay slot"); return;
L_08BA43A8:
    rt.unsupported(0x08BA43ACu, 0x08BA43A0u, "control flow in delay slot"); return;
L_08BA43B0:
    rt.unsupported(0x08BA43B4u, 0x08BA43A8u, "control flow in delay slot"); return;
L_08BA43B8:
    rt.unsupported(0x08BA43BCu, 0x08BA43B0u, "control flow in delay slot"); return;
L_08BA43C0:
    rt.unsupported(0x08BA43C4u, 0x08BA43B8u, "control flow in delay slot"); return;
L_08BA43C8:
    rt.unsupported(0x08BA43CCu, 0x08BA43C0u, "control flow in delay slot"); return;
L_08BA43D0:
    rt.unsupported(0x08BA43D4u, 0x08BA43C8u, "control flow in delay slot"); return;
L_08BA43D8:
    rt.unsupported(0x08BA43DCu, 0x08BA43D0u, "control flow in delay slot"); return;
L_08BA43E0:
    rt.unsupported(0x08BA43E4u, 0x08BA43D8u, "control flow in delay slot"); return;
L_08BA43E8:
    rt.unsupported(0x08BA43ECu, 0x08BA43E0u, "control flow in delay slot"); return;
L_08BA43F0:
    rt.unsupported(0x08BA43F4u, 0x08BA43E8u, "control flow in delay slot"); return;
L_08BA43F8:
    rt.unsupported(0x08BA43FCu, 0x08BA43F0u, "control flow in delay slot"); return;
L_08BA4400:
    rt.unsupported(0x08BA4404u, 0x08BA43F8u, "control flow in delay slot"); return;
L_08BA4408:
    rt.unsupported(0x08BA440Cu, 0x08BA4400u, "control flow in delay slot"); return;
L_08BA4410:
    rt.unsupported(0x08BA4414u, 0x08BA4408u, "control flow in delay slot"); return;
L_08BA4418:
    rt.unsupported(0x08BA441Cu, 0x08BA4410u, "control flow in delay slot"); return;
L_08BA4420:
    rt.unsupported(0x08BA4424u, 0x08BA4418u, "control flow in delay slot"); return;
L_08BA4428:
    rt.unsupported(0x08BA442Cu, 0x08BA4420u, "control flow in delay slot"); return;
L_08BA4430:
    rt.unsupported(0x08BA4434u, 0x08BA4428u, "control flow in delay slot"); return;
L_08BA4438:
    rt.unsupported(0x08BA443Cu, 0x08BA4430u, "control flow in delay slot"); return;
L_08BA4440:
    rt.unsupported(0x08BA4444u, 0x08BA4438u, "control flow in delay slot"); return;
L_08BA4448:
    rt.unsupported(0x08BA444Cu, 0x08BA4440u, "control flow in delay slot"); return;
L_08BA4450:
    rt.unsupported(0x08BA4454u, 0x08BA4448u, "control flow in delay slot"); return;
L_08BA4458:
    rt.unsupported(0x08BA445Cu, 0x08BA4450u, "control flow in delay slot"); return;
L_08BA4460:
    rt.unsupported(0x08BA4464u, 0x08BA4458u, "control flow in delay slot"); return;
L_08BA4468:
    rt.unsupported(0x08BA446Cu, 0x08BA4460u, "control flow in delay slot"); return;
L_08BA4470:
    rt.unsupported(0x08BA4474u, 0x08BA4468u, "control flow in delay slot"); return;
L_08BA4478:
    rt.unsupported(0x08BA447Cu, 0x08BA4470u, "control flow in delay slot"); return;
L_08BA4480:
    rt.unsupported(0x08BA4484u, 0x08BA4478u, "control flow in delay slot"); return;
L_08BA4488:
    rt.unsupported(0x08BA448Cu, 0x08BA4480u, "control flow in delay slot"); return;
L_08BA4490:
    rt.unsupported(0x08BA4494u, 0x08BA4488u, "control flow in delay slot"); return;
L_08BA4498:
    rt.unsupported(0x08BA449Cu, 0x08BA4490u, "control flow in delay slot"); return;
L_08BA44A0:
    rt.unsupported(0x08BA44A4u, 0x08BA4498u, "control flow in delay slot"); return;
L_08BA44A8:
    rt.unsupported(0x08BA44ACu, 0x08BA44A0u, "control flow in delay slot"); return;
L_08BA44B0:
    rt.unsupported(0x08BA44B4u, 0x08BA44A8u, "control flow in delay slot"); return;
L_08BA44B8:
    rt.unsupported(0x08BA44BCu, 0x08BA44B0u, "control flow in delay slot"); return;
L_08BA44C0:
    rt.unsupported(0x08BA44C4u, 0x08BA44B8u, "control flow in delay slot"); return;
L_08BA44C8:
    rt.unsupported(0x08BA44CCu, 0x08BA44C0u, "control flow in delay slot"); return;
L_08BA44D0:
    rt.unsupported(0x08BA44D4u, 0x08BA44C8u, "control flow in delay slot"); return;
L_08BA44D8:
    rt.unsupported(0x08BA44DCu, 0x08BA44D0u, "control flow in delay slot"); return;
L_08BA44E0:
    rt.unsupported(0x08BA44E4u, 0x08BA44D8u, "control flow in delay slot"); return;
L_08BA44E8:
    rt.unsupported(0x08BA44ECu, 0x08BA44E0u, "control flow in delay slot"); return;
L_08BA44F0:
    rt.unsupported(0x08BA44F4u, 0x08BA44E8u, "control flow in delay slot"); return;
L_08BA44F8:
    rt.unsupported(0x08BA44FCu, 0x08BA44F0u, "control flow in delay slot"); return;
L_08BA4500:
    rt.unsupported(0x08BA4504u, 0x08BA44F8u, "control flow in delay slot"); return;
L_08BA4508:
    rt.unsupported(0x08BA450Cu, 0x08BA4500u, "control flow in delay slot"); return;
L_08BA4510:
    rt.unsupported(0x08BA4514u, 0x08BA4508u, "control flow in delay slot"); return;
L_08BA4518:
    rt.unsupported(0x08BA451Cu, 0x08BA4510u, "control flow in delay slot"); return;
L_08BA4520:
    rt.unsupported(0x08BA4524u, 0x08BA4518u, "control flow in delay slot"); return;
L_08BA4528:
    rt.unsupported(0x08BA452Cu, 0x08BA4520u, "control flow in delay slot"); return;
L_08BA4530:
    rt.unsupported(0x08BA4534u, 0x08BA4528u, "control flow in delay slot"); return;
L_08BA4538:
    rt.unsupported(0x08BA453Cu, 0x08BA4530u, "control flow in delay slot"); return;
L_08BA4540:
    rt.unsupported(0x08BA4544u, 0x08BA4538u, "control flow in delay slot"); return;
L_08BA4548:
    rt.unsupported(0x08BA454Cu, 0x08BA4540u, "control flow in delay slot"); return;
L_08BA4550:
    rt.unsupported(0x08BA4554u, 0x08BA4548u, "control flow in delay slot"); return;
L_08BA4558:
    rt.unsupported(0x08BA455Cu, 0x08BA4550u, "control flow in delay slot"); return;
L_08BA4560:
    rt.unsupported(0x08BA4564u, 0x08BA4558u, "control flow in delay slot"); return;
L_08BA4568:
    rt.unsupported(0x08BA456Cu, 0x08BA4560u, "control flow in delay slot"); return;
L_08BA4570:
    rt.unsupported(0x08BA4574u, 0x08BA4568u, "control flow in delay slot"); return;
L_08BA4578:
    rt.unsupported(0x08BA457Cu, 0x08BA4570u, "control flow in delay slot"); return;
L_08BA4580:
    rt.unsupported(0x08BA4584u, 0x08BA4578u, "control flow in delay slot"); return;
L_08BA4588:
    rt.unsupported(0x08BA458Cu, 0x08BA4580u, "control flow in delay slot"); return;
L_08BA4590:
    rt.unsupported(0x08BA4594u, 0x08BA4588u, "control flow in delay slot"); return;
L_08BA4598:
    rt.unsupported(0x08BA459Cu, 0x08BA4590u, "control flow in delay slot"); return;
L_08BA45A0:
    rt.unsupported(0x08BA45A4u, 0x08BA4598u, "control flow in delay slot"); return;
L_08BA45A8:
    rt.unsupported(0x08BA45ACu, 0x08BA45A0u, "control flow in delay slot"); return;
L_08BA45B0:
    rt.unsupported(0x08BA45B4u, 0x08BA45A8u, "control flow in delay slot"); return;
L_08BA45B8:
    rt.unsupported(0x08BA45BCu, 0x08BA45B0u, "control flow in delay slot"); return;
L_08BA45C0:
    rt.unsupported(0x08BA45C4u, 0x08BA45B8u, "control flow in delay slot"); return;
L_08BA45C8:
    rt.unsupported(0x08BA45CCu, 0x08BA45C0u, "control flow in delay slot"); return;
L_08BA45D0:
    rt.unsupported(0x08BA45D4u, 0x08BA45C8u, "control flow in delay slot"); return;
L_08BA45D8:
    rt.unsupported(0x08BA45DCu, 0x08BA45D0u, "control flow in delay slot"); return;
L_08BA45E0:
    rt.unsupported(0x08BA45E4u, 0x08BA45D8u, "control flow in delay slot"); return;
L_08BA45E8:
    rt.unsupported(0x08BA45ECu, 0x08BA45E0u, "control flow in delay slot"); return;
L_08BA45F0:
    rt.unsupported(0x08BA45F4u, 0x08BA45E8u, "control flow in delay slot"); return;
L_08BA45F8:
    rt.unsupported(0x08BA45FCu, 0x08BA45F0u, "control flow in delay slot"); return;
L_08BA4600:
    rt.unsupported(0x08BA4604u, 0x08BA45F8u, "control flow in delay slot"); return;
L_08BA4608:
    rt.unsupported(0x08BA460Cu, 0x08BA4600u, "control flow in delay slot"); return;
L_08BA4610:
    rt.unsupported(0x08BA4614u, 0x08BA4608u, "control flow in delay slot"); return;
L_08BA4618:
    rt.unsupported(0x08BA461Cu, 0x08BA4610u, "control flow in delay slot"); return;
L_08BA4620:
    rt.unsupported(0x08BA4624u, 0x08BA4618u, "control flow in delay slot"); return;
L_08BA4628:
    rt.unsupported(0x08BA462Cu, 0x08BA4620u, "control flow in delay slot"); return;
L_08BA4630:
    rt.unsupported(0x08BA4634u, 0x08BA4628u, "control flow in delay slot"); return;
L_08BA4638:
    rt.unsupported(0x08BA463Cu, 0x08BA4630u, "control flow in delay slot"); return;
L_08BA4640:
    rt.unsupported(0x08BA4644u, 0x08BA4638u, "control flow in delay slot"); return;
L_08BA4648:
    rt.unsupported(0x08BA464Cu, 0x08BA4640u, "control flow in delay slot"); return;
L_08BA4650:
    rt.unsupported(0x08BA4654u, 0x08BA4648u, "control flow in delay slot"); return;
L_08BA4658:
    rt.unsupported(0x08BA465Cu, 0x08BA4650u, "control flow in delay slot"); return;
L_08BA4660:
    rt.unsupported(0x08BA4664u, 0x08BA4658u, "control flow in delay slot"); return;
L_08BA4668:
    rt.unsupported(0x08BA466Cu, 0x08BA4660u, "control flow in delay slot"); return;
L_08BA4670:
    rt.unsupported(0x08BA4674u, 0x08BA4668u, "control flow in delay slot"); return;
L_08BA4678:
    rt.unsupported(0x08BA467Cu, 0x08BA4670u, "control flow in delay slot"); return;
L_08BA4680:
    rt.unsupported(0x08BA4684u, 0x08BA4678u, "control flow in delay slot"); return;
L_08BA4688:
    rt.unsupported(0x08BA468Cu, 0x08BA4680u, "control flow in delay slot"); return;
L_08BA4690:
    rt.unsupported(0x08BA4694u, 0x08BA4688u, "control flow in delay slot"); return;
L_08BA4698:
    rt.unsupported(0x08BA469Cu, 0x08BA4690u, "control flow in delay slot"); return;
L_08BA46A0:
    rt.unsupported(0x08BA46A4u, 0x08BA4698u, "control flow in delay slot"); return;
L_08BA46A8:
    rt.unsupported(0x08BA46ACu, 0x08BA46A0u, "control flow in delay slot"); return;
L_08BA46B0:
    rt.unsupported(0x08BA46B4u, 0x08BA46A8u, "control flow in delay slot"); return;
L_08BA46B8:
    rt.unsupported(0x08BA46BCu, 0x08BA46B0u, "control flow in delay slot"); return;
L_08BA46C0:
    rt.unsupported(0x08BA46C4u, 0x08BA46B8u, "control flow in delay slot"); return;
L_08BA46C8:
    rt.unsupported(0x08BA46CCu, 0x08BA46C0u, "control flow in delay slot"); return;
L_08BA46D0:
    rt.unsupported(0x08BA46D4u, 0x08BA46C8u, "control flow in delay slot"); return;
L_08BA46D8:
    rt.unsupported(0x08BA46DCu, 0x08BA46D0u, "control flow in delay slot"); return;
L_08BA46E0:
    rt.unsupported(0x08BA46E4u, 0x08BA46D8u, "control flow in delay slot"); return;
L_08BA46E8:
    rt.unsupported(0x08BA46ECu, 0x08BA46E0u, "control flow in delay slot"); return;
L_08BA46F0:
    rt.unsupported(0x08BA46F4u, 0x08BA46E8u, "control flow in delay slot"); return;
L_08BA46F8:
    rt.unsupported(0x08BA46FCu, 0x08BA46F0u, "control flow in delay slot"); return;
L_08BA4700:
    rt.unsupported(0x08BA4704u, 0x08BA46F8u, "control flow in delay slot"); return;
L_08BA4708:
    rt.unsupported(0x08BA470Cu, 0x08BA4700u, "control flow in delay slot"); return;
L_08BA4710:
    rt.unsupported(0x08BA4714u, 0x08BA4708u, "control flow in delay slot"); return;
L_08BA4718:
    rt.unsupported(0x08BA471Cu, 0x08BA4710u, "control flow in delay slot"); return;
L_08BA4720:
    rt.unsupported(0x08BA4724u, 0x08BA4718u, "control flow in delay slot"); return;
L_08BA4728:
    rt.unsupported(0x08BA472Cu, 0x08BA4720u, "control flow in delay slot"); return;
L_08BA4730:
    rt.unsupported(0x08BA4734u, 0x08BA4728u, "control flow in delay slot"); return;
L_08BA4738:
    rt.unsupported(0x08BA473Cu, 0x08BA4730u, "control flow in delay slot"); return;
L_08BA4740:
    rt.unsupported(0x08BA4744u, 0x08BA4738u, "control flow in delay slot"); return;
L_08BA4748:
    rt.unsupported(0x08BA474Cu, 0x08BA4740u, "control flow in delay slot"); return;
L_08BA4750:
    rt.unsupported(0x08BA4754u, 0x08BA4748u, "control flow in delay slot"); return;
L_08BA4758:
    rt.unsupported(0x08BA475Cu, 0x08BA4750u, "control flow in delay slot"); return;
L_08BA4760:
    rt.unsupported(0x08BA4764u, 0x08BA4758u, "control flow in delay slot"); return;
L_08BA4768:
    rt.unsupported(0x08BA476Cu, 0x08BA4760u, "control flow in delay slot"); return;
L_08BA4770:
    rt.unsupported(0x08BA4774u, 0x08BA4768u, "control flow in delay slot"); return;
L_08BA4778:
    rt.unsupported(0x08BA477Cu, 0x08BA4770u, "control flow in delay slot"); return;
L_08BA4780:
    rt.unsupported(0x08BA4784u, 0x08BA4778u, "control flow in delay slot"); return;
L_08BA4814:
    // nop
    // nop
    // nop
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    (void)(0u << 1u);
    goto L_08BA4838;
L_08BA4838:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02AC02D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4870:
    // nop
    // nop
    ctx.pc = 0x02B3EE70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4884:
    // nop
    ctx.pc = 0x02B3FF40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4894:
    // nop
    ctx.pc = 0x02B418F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA48F0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4904:
    // nop
    ctx.pc = 0x02997DE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4930:
    // nop
    // nop
    ctx.pc = 0x02B3F2E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA49C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0206BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4A88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D81FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4AD0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0208DC70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4B78:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4C50:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02096F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4D10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0209C8C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4D38:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4D70:
    // nop
    // nop
    ctx.pc = 0x02B3EE70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4E10:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D9B040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4E20:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4FD8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02132130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA4FE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0213A590u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5060:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D9B860u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA50C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021AED00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5180:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5258:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5338:
    rt.unsupported(0x08BA5338u, 0x00000035u, "special? not lowered yet"); return;
L_08BA5394:
    { const bool branch_taken = static_cast<std::int32_t>(0u) <= 0;
    (void)(0u & 89u);
      if (branch_taken) {
          goto L_08BA53AC;
      }
      goto L_08BA539C;
    }
L_08BA539C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 1u>(vfpu_d); }
    rt.unsupported(0x08BA53A0u, 0xC0000001u, "unknown not lowered yet"); return;
L_08BA53A8:
    // nop
    goto L_08BA53AC;
L_08BA53AC:
    // nop
    // nop
    // nop
    ctx.pc = 0x0221DAF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA53E0:
    // nop
    // nop
    // nop
    goto L_08BA53EC;
L_08BA53EC:
    // nop
    ctx.pc = 0x0221EA40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5418:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022394A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA54C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA55A0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02279D10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA55B0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5608:
    // nop
    // nop
    ctx.pc = 0x0228CB90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5758:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022E2570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA57D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x022EAED0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5800:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02316640u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5810:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0237DBB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5870:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023E0800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA58E0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DA8EC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5900:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023E6D10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5930:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x023E8E40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5960:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0240CF60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA59C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x024106E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5A38:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5B40:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5C48:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DAF340u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5C58:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02594DB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5CF0:
    // nop
    // nop
    ctx.pc = 0x02A6E690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5D08:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5EAC:
    // nop
    ctx.pc = 0x02993780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5ED0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5F00:
    // nop
    // nop
    ctx.pc = 0x02B3E9C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA5FA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025C7B50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6020:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x025ED2F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6098:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02601A50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA60E8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02610F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6118:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02613290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6148:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02614850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6178:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x026150F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA61A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02615CD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA61D8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x026E7350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6250:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02718EC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6260:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6338:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027387A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA63F8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02749D20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA64A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6580:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6748:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6850:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0279FD50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6900:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027AECA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6910:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6AD8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6BB0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x027DC800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6C70:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB64B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6CD0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6E78:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02801680u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6E88:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028060C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6ED0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028060C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6F18:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028060C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6F60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028060C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6FA8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028099F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA6FF0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028060C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7038:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028060C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7080:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02827E10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7118:
    // nop
    // nop
    ctx.pc = 0x02A6E690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7128:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02B44E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA71E8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA72C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA73C8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028E6DD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7410:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02B44E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA74D0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028FACD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7578:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0294AE90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7588:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7740:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7818:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DB7300u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7828:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029FEAC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA78E8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7924:
    // nop
    ctx.pc = 0x02B3EE70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7958:
    // nop
    // nop
    ctx.pc = 0x02B41950u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7978:
    // nop
    // nop
    ctx.pc = 0x029EE8A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA79C0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02A69B60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7A68:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DC1510u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7AC8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7BA0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02A92630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7C60:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7C90:
    // nop
    // nop
    ctx.pc = 0x02B3E9C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7D38:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02AB29B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7DF8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7ED0:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02DA8C40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7F30:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02AC02D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA7FE8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02ACD090u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0232(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0232_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_232(Runtime &runtime) {
    runtime.register_generated_unit(232u, 0x08BA4000u, 16384u, &recomp_unit_0232, &recomp_unit_0232_entry);
    runtime.register_function(0x08BA4000u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4078u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA40D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA40D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA40E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4128u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4138u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4174u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA41B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA41E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4200u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4228u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4230u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4238u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4250u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4260u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA42D4u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA42D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4328u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA434Cu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4350u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4378u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4388u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4390u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4398u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA43F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4400u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4408u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4410u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4418u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4420u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4428u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4430u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4438u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4440u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4448u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4450u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4458u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4460u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4468u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4470u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4478u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4480u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4488u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4490u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4498u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA44F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4500u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4508u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4510u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4518u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4520u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4528u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4530u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4538u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4540u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4548u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4550u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4558u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4560u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4568u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4570u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4578u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4580u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4588u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4590u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4598u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA45F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4600u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4608u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4610u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4618u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4620u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4628u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4630u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4638u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4640u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4648u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4650u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4658u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4660u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4668u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4670u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4678u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4680u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4688u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4690u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4698u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46B8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA46F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4700u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4708u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4710u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4718u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4720u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4728u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4730u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4738u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4740u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4748u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4750u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4758u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4760u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4768u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4770u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4778u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4780u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4814u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4838u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4870u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4884u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4894u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA48F0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4904u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4930u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA49C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4A88u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4AD0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4B78u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4C50u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4D10u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4D38u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4D70u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4E10u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4E20u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4FD8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA4FE8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5060u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA50C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5180u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5258u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5338u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5394u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA539Cu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53ACu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA53ECu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5418u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA54C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA55A0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA55B0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5608u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5758u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA57D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5800u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5810u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5870u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA58E0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5900u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5930u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5960u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA59C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5A38u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5B40u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5C48u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5C58u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5CF0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5D08u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5EACu, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5ED0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5F00u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA5FA8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6020u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6098u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA60E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6118u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6148u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6178u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA61A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA61D8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6250u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6260u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6338u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA63F8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA64A8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6580u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6748u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6850u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6900u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6910u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6AD8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6BB0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6C70u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6CD0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6E78u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6E88u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6ED0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6F18u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6F60u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6FA8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA6FF0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7038u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7080u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7118u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7128u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA71E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA72C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA73C8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7410u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA74D0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7578u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7588u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7740u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7818u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7828u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA78E8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7924u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7958u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7978u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA79C0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7A68u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7AC8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7BA0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7C60u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7C90u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7D38u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7DF8u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7ED0u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7F30u, &recomp_unit_0232, "recomp_unit_0232");
    runtime.register_function(0x08BA7FE8u, &recomp_unit_0232, "recomp_unit_0232");
}
} // namespace psprecomp
