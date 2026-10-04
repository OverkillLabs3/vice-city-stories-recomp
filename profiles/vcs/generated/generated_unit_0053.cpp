#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0053[4082] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 9, 10, 0, 0, 11, 0, 12, 0, 13,
    0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 32,
    0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 38, 0, 39, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 43, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 55, 56, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 64, 0, 65,
    0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 76,
    0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87, 0,
    88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0,
    99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110,
    0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122,
    0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133,
    0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 252,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 354, 355, 0, 0, 0, 0, 356, 0,
    357, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370,
    0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378,
    0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391,
    0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0,
    0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 415, 416, 0, 0, 0, 417, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0,
    0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0,
    450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 458,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 465, 0, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 474, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 482,
    0, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0,
    490, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 513,
    0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0,
    0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0,
    0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 531, 532, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0,
    539, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0,
    551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0, 559, 560,
    0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0,
    0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0,
    0, 577, 0, 578, 0, 0, 579, 0, 0, 0, 580, 581, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0,
    0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 592, 0, 593, 0,
    0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 603,
    0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0,
    0, 614, 615, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 624,
    0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0,
    0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0,
    649, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0,
    0, 0, 662, 0, 0, 0, 663, 664, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 0,
    0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 0,
    685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0,
    0, 0, 0, 0, 692, 0, 0, 0, 693, 694, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706,
};
void recomp_unit_0053_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D8004u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0053[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D8004;
    case 2u: goto L_088D8010;
    case 3u: goto L_088D8018;
    case 4u: goto L_088D8028;
    case 5u: goto L_088D8030;
    case 6u: goto L_088D8040;
    case 7u: goto L_088D8048;
    case 8u: goto L_088D8054;
    case 9u: goto L_088D8060;
    case 10u: goto L_088D8064;
    case 11u: goto L_088D8070;
    case 12u: goto L_088D8078;
    case 13u: goto L_088D8080;
    case 14u: goto L_088D8090;
    case 15u: goto L_088D8098;
    case 16u: goto L_088D80A0;
    case 17u: goto L_088D80A8;
    case 18u: goto L_088D80B8;
    case 19u: goto L_088D80C0;
    case 20u: goto L_088D80D0;
    case 21u: goto L_088D80D8;
    case 22u: goto L_088D80E8;
    case 23u: goto L_088D80F0;
    case 24u: goto L_088D80FC;
    case 25u: goto L_088D8114;
    case 26u: goto L_088D8134;
    case 27u: goto L_088D8140;
    case 28u: goto L_088D8148;
    case 29u: goto L_088D8154;
    case 30u: goto L_088D8160;
    case 31u: goto L_088D817C;
    case 32u: goto L_088D8180;
    case 33u: goto L_088D8188;
    case 34u: goto L_088D8190;
    case 35u: goto L_088D819C;
    case 36u: goto L_088D81A8;
    case 37u: goto L_088D81C4;
    case 38u: goto L_088D81C8;
    case 39u: goto L_088D81D0;
    case 40u: goto L_088D81D8;
    case 41u: goto L_088D81E4;
    case 42u: goto L_088D81F0;
    case 43u: goto L_088D820C;
    case 44u: goto L_088D8210;
    case 45u: goto L_088D8218;
    case 46u: goto L_088D8220;
    case 47u: goto L_088D822C;
    case 48u: goto L_088D8238;
    case 49u: goto L_088D8254;
    case 50u: goto L_088D8258;
    case 51u: goto L_088D8260;
    case 52u: goto L_088D8268;
    case 53u: goto L_088D8274;
    case 54u: goto L_088D8280;
    case 55u: goto L_088D829C;
    case 56u: goto L_088D82A0;
    case 57u: goto L_088D82A8;
    case 58u: goto L_088D82B0;
    case 59u: goto L_088D82BC;
    case 60u: goto L_088D82C4;
    case 61u: goto L_088D82CC;
    case 62u: goto L_088D82D8;
    case 63u: goto L_088D82F4;
    case 64u: goto L_088D82F8;
    case 65u: goto L_088D8300;
    case 66u: goto L_088D8308;
    case 67u: goto L_088D8314;
    case 68u: goto L_088D8320;
    case 69u: goto L_088D833C;
    case 70u: goto L_088D8340;
    case 71u: goto L_088D8348;
    case 72u: goto L_088D8350;
    case 73u: goto L_088D835C;
    case 74u: goto L_088D8368;
    case 75u: goto L_088D8370;
    case 76u: goto L_088D8380;
    case 77u: goto L_088D8388;
    case 78u: goto L_088D83A0;
    case 79u: goto L_088D83A8;
    case 80u: goto L_088D83B0;
    case 81u: goto L_088D83B8;
    case 82u: goto L_088D83C8;
    case 83u: goto L_088D83D0;
    case 84u: goto L_088D83DC;
    case 85u: goto L_088D83E4;
    case 86u: goto L_088D83EC;
    case 87u: goto L_088D83FC;
    case 88u: goto L_088D8404;
    case 89u: goto L_088D840C;
    case 90u: goto L_088D8414;
    case 91u: goto L_088D8424;
    case 92u: goto L_088D842C;
    case 93u: goto L_088D843C;
    case 94u: goto L_088D8444;
    case 95u: goto L_088D8454;
    case 96u: goto L_088D845C;
    case 97u: goto L_088D846C;
    case 98u: goto L_088D8474;
    case 99u: goto L_088D8484;
    case 100u: goto L_088D848C;
    case 101u: goto L_088D8494;
    case 102u: goto L_088D84A4;
    case 103u: goto L_088D84AC;
    case 104u: goto L_088D84B8;
    case 105u: goto L_088D84C0;
    case 106u: goto L_088D84D0;
    case 107u: goto L_088D84D8;
    case 108u: goto L_088D84E8;
    case 109u: goto L_088D84F0;
    case 110u: goto L_088D8500;
    case 111u: goto L_088D8508;
    case 112u: goto L_088D8518;
    case 113u: goto L_088D8520;
    case 114u: goto L_088D8528;
    case 115u: goto L_088D8530;
    case 116u: goto L_088D8540;
    case 117u: goto L_088D8548;
    case 118u: goto L_088D8550;
    case 119u: goto L_088D8558;
    case 120u: goto L_088D8568;
    case 121u: goto L_088D8570;
    case 122u: goto L_088D8580;
    case 123u: goto L_088D8588;
    case 124u: goto L_088D8598;
    case 125u: goto L_088D85A0;
    case 126u: goto L_088D85B0;
    case 127u: goto L_088D85BC;
    case 128u: goto L_088D8654;
    case 129u: goto L_088D865C;
    case 130u: goto L_088D8664;
    case 131u: goto L_088D866C;
    case 132u: goto L_088D8674;
    case 133u: goto L_088D8680;
    case 134u: goto L_088D8688;
    case 135u: goto L_088D8690;
    case 136u: goto L_088D86A0;
    case 137u: goto L_088D86B8;
    case 138u: goto L_088D86D4;
    case 139u: goto L_088D86F0;
    case 140u: goto L_088D870C;
    case 141u: goto L_088D8728;
    case 142u: goto L_088D8744;
    case 143u: goto L_088D8760;
    case 144u: goto L_088D8778;
    case 145u: goto L_088D8784;
    case 146u: goto L_088D8798;
    case 147u: goto L_088D87A4;
    case 148u: goto L_088D87AC;
    case 149u: goto L_088D87C0;
    case 150u: goto L_088D87D4;
    case 151u: goto L_088D87EC;
    case 152u: goto L_088D87FC;
    case 153u: goto L_088D881C;
    case 154u: goto L_088D8830;
    case 155u: goto L_088D8878;
    case 156u: goto L_088D8924;
    case 157u: goto L_088D893C;
    case 158u: goto L_088D8948;
    case 159u: goto L_088D8954;
    case 160u: goto L_088D896C;
    case 161u: goto L_088D8994;
    case 162u: goto L_088D89B0;
    case 163u: goto L_088D89B8;
    case 164u: goto L_088D89D0;
    case 165u: goto L_088D8A08;
    case 166u: goto L_088D8A10;
    case 167u: goto L_088D8A34;
    case 168u: goto L_088D8A58;
    case 169u: goto L_088D8A70;
    case 170u: goto L_088D8A94;
    case 171u: goto L_088D8AB0;
    case 172u: goto L_088D8AC4;
    case 173u: goto L_088D8ACC;
    case 174u: goto L_088D8AE4;
    case 175u: goto L_088D8AF4;
    case 176u: goto L_088D8B24;
    case 177u: goto L_088D8B30;
    case 178u: goto L_088D8B58;
    case 179u: goto L_088D8B68;
    case 180u: goto L_088D8BCC;
    case 181u: goto L_088D8BE0;
    case 182u: goto L_088D8C28;
    case 183u: goto L_088D8C58;
    case 184u: goto L_088D8C70;
    case 185u: goto L_088D8C98;
    case 186u: goto L_088D8CC0;
    case 187u: goto L_088D8CE8;
    case 188u: goto L_088D8D10;
    case 189u: goto L_088D8D38;
    case 190u: goto L_088D8D60;
    case 191u: goto L_088D8D88;
    case 192u: goto L_088D8DB0;
    case 193u: goto L_088D8DD8;
    case 194u: goto L_088D8E00;
    case 195u: goto L_088D8E28;
    case 196u: goto L_088D8E50;
    case 197u: goto L_088D8E78;
    case 198u: goto L_088D8EA0;
    case 199u: goto L_088D8EC8;
    case 200u: goto L_088D8EF0;
    case 201u: goto L_088D8F18;
    case 202u: goto L_088D8F40;
    case 203u: goto L_088D8F58;
    case 204u: goto L_088D8F68;
    case 205u: goto L_088D8F7C;
    case 206u: goto L_088D8FC4;
    case 207u: goto L_088D8FE4;
    case 208u: goto L_088D902C;
    case 209u: goto L_088D904C;
    case 210u: goto L_088D9094;
    case 211u: goto L_088D90AC;
    case 212u: goto L_088D90F0;
    case 213u: goto L_088D9104;
    case 214u: goto L_088D9110;
    case 215u: goto L_088D9118;
    case 216u: goto L_088D9154;
    case 217u: goto L_088D91A0;
    case 218u: goto L_088D91A8;
    case 219u: goto L_088D91C8;
    case 220u: goto L_088D9210;
    case 221u: goto L_088D921C;
    case 222u: goto L_088D9228;
    case 223u: goto L_088D925C;
    case 224u: goto L_088D9280;
    case 225u: goto L_088D9288;
    case 226u: goto L_088D92A8;
    case 227u: goto L_088D9308;
    case 228u: goto L_088D9354;
    case 229u: goto L_088D93A0;
    case 230u: goto L_088D93EC;
    case 231u: goto L_088D9438;
    case 232u: goto L_088D9484;
    case 233u: goto L_088D94DC;
    case 234u: goto L_088D9528;
    case 235u: goto L_088D9574;
    case 236u: goto L_088D95C4;
    case 237u: goto L_088D9610;
    case 238u: goto L_088D963C;
    case 239u: goto L_088D967C;
    case 240u: goto L_088D96A8;
    case 241u: goto L_088D96E8;
    case 242u: goto L_088D9720;
    case 243u: goto L_088D9734;
    case 244u: goto L_088D9774;
    case 245u: goto L_088D979C;
    case 246u: goto L_088D97B0;
    case 247u: goto L_088D97F0;
    case 248u: goto L_088D9818;
    case 249u: goto L_088D982C;
    case 250u: goto L_088D986C;
    case 251u: goto L_088D9874;
    case 252u: goto L_088D9880;
    case 253u: goto L_088D9894;
    case 254u: goto L_088D98AC;
    case 255u: goto L_088D98B4;
    case 256u: goto L_088D98BC;
    case 257u: goto L_088D98D0;
    case 258u: goto L_088D98E4;
    case 259u: goto L_088D98F8;
    case 260u: goto L_088D9908;
    case 261u: goto L_088D9948;
    case 262u: goto L_088D999C;
    case 263u: goto L_088D99B0;
    case 264u: goto L_088D99E8;
    case 265u: goto L_088D9A14;
    case 266u: goto L_088D9A3C;
    case 267u: goto L_088D9A68;
    case 268u: goto L_088D9A88;
    case 269u: goto L_088D9AB4;
    case 270u: goto L_088D9AD4;
    case 271u: goto L_088D9B00;
    case 272u: goto L_088D9B28;
    case 273u: goto L_088D9B60;
    case 274u: goto L_088D9B84;
    case 275u: goto L_088D9B94;
    case 276u: goto L_088D9BB0;
    case 277u: goto L_088D9BC4;
    case 278u: goto L_088D9BCC;
    case 279u: goto L_088D9BE8;
    case 280u: goto L_088D9BFC;
    case 281u: goto L_088D9C04;
    case 282u: goto L_088D9C38;
    case 283u: goto L_088D9C64;
    case 284u: goto L_088D9C98;
    case 285u: goto L_088D9CC4;
    case 286u: goto L_088D9CCC;
    case 287u: goto L_088D9CD8;
    case 288u: goto L_088D9CEC;
    case 289u: goto L_088D9D04;
    case 290u: goto L_088D9D14;
    case 291u: goto L_088D9D34;
    case 292u: goto L_088D9D40;
    case 293u: goto L_088D9D50;
    case 294u: goto L_088D9D58;
    case 295u: goto L_088D9D7C;
    case 296u: goto L_088D9D9C;
    case 297u: goto L_088D9DC4;
    case 298u: goto L_088D9DD0;
    case 299u: goto L_088D9DD8;
    case 300u: goto L_088D9DF0;
    case 301u: goto L_088D9DF8;
    case 302u: goto L_088D9E24;
    case 303u: goto L_088D9E5C;
    case 304u: goto L_088D9E64;
    case 305u: goto L_088D9E70;
    case 306u: goto L_088D9E78;
    case 307u: goto L_088D9EC8;
    case 308u: goto L_088D9ED0;
    case 309u: goto L_088D9ED8;
    case 310u: goto L_088D9F44;
    case 311u: goto L_088D9F70;
    case 312u: goto L_088D9FA8;
    case 313u: goto L_088D9FD0;
    case 314u: goto L_088D9FF8;
    case 315u: goto L_088DA024;
    case 316u: goto L_088DA050;
    case 317u: goto L_088DA07C;
    case 318u: goto L_088DA0A8;
    case 319u: goto L_088DA0D4;
    case 320u: goto L_088DA100;
    case 321u: goto L_088DA10C;
    case 322u: goto L_088DA120;
    case 323u: goto L_088DA138;
    case 324u: goto L_088DA148;
    case 325u: goto L_088DA168;
    case 326u: goto L_088DA180;
    case 327u: goto L_088DA1E0;
    case 328u: goto L_088DA1F0;
    case 329u: goto L_088DA210;
    case 330u: goto L_088DA228;
    case 331u: goto L_088DA254;
    case 332u: goto L_088DA26C;
    case 333u: goto L_088DA2A0;
    case 334u: goto L_088DA2B4;
    case 335u: goto L_088DA2C0;
    case 336u: goto L_088DA2D0;
    case 337u: goto L_088DA2D8;
    case 338u: goto L_088DA318;
    case 339u: goto L_088DA32C;
    case 340u: goto L_088DA334;
    case 341u: goto L_088DA33C;
    case 342u: goto L_088DA344;
    case 343u: goto L_088DA34C;
    case 344u: goto L_088DA360;
    case 345u: goto L_088DA3C4;
    case 346u: goto L_088DA3E8;
    case 347u: goto L_088DA3FC;
    case 348u: goto L_088DA408;
    case 349u: goto L_088DA41C;
    case 350u: goto L_088DA428;
    case 351u: goto L_088DA440;
    case 352u: goto L_088DA44C;
    case 353u: goto L_088DA454;
    case 354u: goto L_088DA464;
    case 355u: goto L_088DA468;
    case 356u: goto L_088DA47C;
    case 357u: goto L_088DA484;
    case 358u: goto L_088DA488;
    case 359u: goto L_088DA498;
    case 360u: goto L_088DA4B4;
    case 361u: goto L_088DA4C8;
    case 362u: goto L_088DA4F8;
    case 363u: goto L_088DA504;
    case 364u: goto L_088DA564;
    case 365u: goto L_088DA574;
    case 366u: goto L_088DA5A0;
    case 367u: goto L_088DA5F8;
    case 368u: goto L_088DA648;
    case 369u: goto L_088DA674;
    case 370u: goto L_088DA680;
    case 371u: goto L_088DA68C;
    case 372u: goto L_088DA694;
    case 373u: goto L_088DA6AC;
    case 374u: goto L_088DA6BC;
    case 375u: goto L_088DA6CC;
    case 376u: goto L_088DA6E0;
    case 377u: goto L_088DA6F0;
    case 378u: goto L_088DA700;
    case 379u: goto L_088DA710;
    case 380u: goto L_088DA720;
    case 381u: goto L_088DA734;
    case 382u: goto L_088DA744;
    case 383u: goto L_088DA750;
    case 384u: goto L_088DA760;
    case 385u: goto L_088DA770;
    case 386u: goto L_088DA780;
    case 387u: goto L_088DA79C;
    case 388u: goto L_088DA7B0;
    case 389u: goto L_088DA7BC;
    case 390u: goto L_088DA7D0;
    case 391u: goto L_088DA800;
    case 392u: goto L_088DA808;
    case 393u: goto L_088DA810;
    case 394u: goto L_088DA834;
    case 395u: goto L_088DA854;
    case 396u: goto L_088DA878;
    case 397u: goto L_088DA87C;
    case 398u: goto L_088DA8A0;
    case 399u: goto L_088DA8A4;
    case 400u: goto L_088DA8CC;
    case 401u: goto L_088DA8D4;
    case 402u: goto L_088DA8E4;
    case 403u: goto L_088DA8EC;
    case 404u: goto L_088DA8FC;
    case 405u: goto L_088DA910;
    case 406u: goto L_088DA920;
    case 407u: goto L_088DA92C;
    case 408u: goto L_088DA93C;
    case 409u: goto L_088DA960;
    case 410u: goto L_088DA970;
    case 411u: goto L_088DA980;
    case 412u: goto L_088DA9C0;
    case 413u: goto L_088DA9C8;
    case 414u: goto L_088DA9D0;
    case 415u: goto L_088DA9D8;
    case 416u: goto L_088DA9DC;
    case 417u: goto L_088DA9EC;
    case 418u: goto L_088DA9F0;
    case 419u: goto L_088DAA18;
    case 420u: goto L_088DAA34;
    case 421u: goto L_088DAA78;
    case 422u: goto L_088DAAD8;
    case 423u: goto L_088DAB00;
    case 424u: goto L_088DAB38;
    case 425u: goto L_088DAB44;
    case 426u: goto L_088DAB5C;
    case 427u: goto L_088DAB6C;
    case 428u: goto L_088DAB7C;
    case 429u: goto L_088DAB88;
    case 430u: goto L_088DAB90;
    case 431u: goto L_088DAB98;
    case 432u: goto L_088DABA0;
    case 433u: goto L_088DABB4;
    case 434u: goto L_088DABC0;
    case 435u: goto L_088DABD4;
    case 436u: goto L_088DABE8;
    case 437u: goto L_088DABFC;
    case 438u: goto L_088DAC14;
    case 439u: goto L_088DAC28;
    case 440u: goto L_088DAC38;
    case 441u: goto L_088DAC4C;
    case 442u: goto L_088DAC5C;
    case 443u: goto L_088DAC74;
    case 444u: goto L_088DAC88;
    case 445u: goto L_088DAC98;
    case 446u: goto L_088DACB0;
    case 447u: goto L_088DACC8;
    case 448u: goto L_088DACDC;
    case 449u: goto L_088DACF0;
    case 450u: goto L_088DAD04;
    case 451u: goto L_088DAD18;
    case 452u: goto L_088DAD38;
    case 453u: goto L_088DAD44;
    case 454u: goto L_088DAD50;
    case 455u: goto L_088DAD5C;
    case 456u: goto L_088DAD64;
    case 457u: goto L_088DAD6C;
    case 458u: goto L_088DAD80;
    case 459u: goto L_088DAD8C;
    case 460u: goto L_088DADA8;
    case 461u: goto L_088DADB0;
    case 462u: goto L_088DADC4;
    case 463u: goto L_088DADD0;
    case 464u: goto L_088DADEC;
    case 465u: goto L_088DADF0;
    case 466u: goto L_088DAE14;
    case 467u: goto L_088DAE24;
    case 468u: goto L_088DAE30;
    case 469u: goto L_088DAE40;
    case 470u: goto L_088DAE4C;
    case 471u: goto L_088DAE54;
    case 472u: goto L_088DAE64;
    case 473u: goto L_088DAE78;
    case 474u: goto L_088DAE90;
    case 475u: goto L_088DAE98;
    case 476u: goto L_088DAEA8;
    case 477u: goto L_088DAEB4;
    case 478u: goto L_088DAEC4;
    case 479u: goto L_088DAED0;
    case 480u: goto L_088DAEE4;
    case 481u: goto L_088DAEF8;
    case 482u: goto L_088DAF00;
    case 483u: goto L_088DAF08;
    case 484u: goto L_088DAF14;
    case 485u: goto L_088DAF1C;
    case 486u: goto L_088DAF28;
    case 487u: goto L_088DAF3C;
    case 488u: goto L_088DAF5C;
    case 489u: goto L_088DAF78;
    case 490u: goto L_088DAF84;
    case 491u: goto L_088DAF88;
    case 492u: goto L_088DAF94;
    case 493u: goto L_088DAFA0;
    case 494u: goto L_088DAFC8;
    case 495u: goto L_088DAFF8;
    case 496u: goto L_088DB004;
    case 497u: goto L_088DB030;
    case 498u: goto L_088DB03C;
    case 499u: goto L_088DB050;
    case 500u: goto L_088DB058;
    case 501u: goto L_088DB08C;
    case 502u: goto L_088DB094;
    case 503u: goto L_088DB0C0;
    case 504u: goto L_088DB0D0;
    case 505u: goto L_088DB0E8;
    case 506u: goto L_088DB0FC;
    case 507u: goto L_088DB134;
    case 508u: goto L_088DB1C8;
    case 509u: goto L_088DB1D0;
    case 510u: goto L_088DB1DC;
    case 511u: goto L_088DB1E4;
    case 512u: goto L_088DB1F4;
    case 513u: goto L_088DB200;
    case 514u: goto L_088DB208;
    case 515u: goto L_088DB210;
    case 516u: goto L_088DB218;
    case 517u: goto L_088DB248;
    case 518u: goto L_088DB264;
    case 519u: goto L_088DB288;
    case 520u: goto L_088DB2B4;
    case 521u: goto L_088DB2F0;
    case 522u: goto L_088DB30C;
    case 523u: goto L_088DB320;
    case 524u: goto L_088DB338;
    case 525u: goto L_088DB348;
    case 526u: goto L_088DB368;
    case 527u: goto L_088DB37C;
    case 528u: goto L_088DB3C4;
    case 529u: goto L_088DB41C;
    case 530u: goto L_088DB428;
    case 531u: goto L_088DB434;
    case 532u: goto L_088DB438;
    case 533u: goto L_088DB44C;
    case 534u: goto L_088DB454;
    case 535u: goto L_088DB45C;
    case 536u: goto L_088DB464;
    case 537u: goto L_088DB474;
    case 538u: goto L_088DB47C;
    case 539u: goto L_088DB484;
    case 540u: goto L_088DB48C;
    case 541u: goto L_088DB494;
    case 542u: goto L_088DB4A8;
    case 543u: goto L_088DB4B4;
    case 544u: goto L_088DB4BC;
    case 545u: goto L_088DB4C4;
    case 546u: goto L_088DB4D0;
    case 547u: goto L_088DB4D8;
    case 548u: goto L_088DB4E0;
    case 549u: goto L_088DB4F4;
    case 550u: goto L_088DB4FC;
    case 551u: goto L_088DB504;
    case 552u: goto L_088DB520;
    case 553u: goto L_088DB540;
    case 554u: goto L_088DB548;
    case 555u: goto L_088DB558;
    case 556u: goto L_088DB560;
    case 557u: goto L_088DB568;
    case 558u: goto L_088DB574;
    case 559u: goto L_088DB57C;
    case 560u: goto L_088DB580;
    case 561u: goto L_088DB58C;
    case 562u: goto L_088DB598;
    case 563u: goto L_088DB5A4;
    case 564u: goto L_088DB5B4;
    case 565u: goto L_088DB5C0;
    case 566u: goto L_088DB5D0;
    case 567u: goto L_088DB5DC;
    case 568u: goto L_088DB5F8;
    case 569u: goto L_088DB610;
    case 570u: goto L_088DB618;
    case 571u: goto L_088DB624;
    case 572u: goto L_088DB62C;
    case 573u: goto L_088DB638;
    case 574u: goto L_088DB644;
    case 575u: goto L_088DB66C;
    case 576u: goto L_088DB678;
    case 577u: goto L_088DB688;
    case 578u: goto L_088DB690;
    case 579u: goto L_088DB69C;
    case 580u: goto L_088DB6AC;
    case 581u: goto L_088DB6B0;
    case 582u: goto L_088DB6B8;
    case 583u: goto L_088DB6CC;
    case 584u: goto L_088DB6DC;
    case 585u: goto L_088DB6EC;
    case 586u: goto L_088DB6F4;
    case 587u: goto L_088DB70C;
    case 588u: goto L_088DB728;
    case 589u: goto L_088DB748;
    case 590u: goto L_088DB75C;
    case 591u: goto L_088DB76C;
    case 592u: goto L_088DB774;
    case 593u: goto L_088DB77C;
    case 594u: goto L_088DB790;
    case 595u: goto L_088DB7A0;
    case 596u: goto L_088DB7AC;
    case 597u: goto L_088DB7C0;
    case 598u: goto L_088DB7CC;
    case 599u: goto L_088DB7D8;
    case 600u: goto L_088DB7E4;
    case 601u: goto L_088DB7EC;
    case 602u: goto L_088DB7F4;
    case 603u: goto L_088DB800;
    case 604u: goto L_088DB810;
    case 605u: goto L_088DB81C;
    case 606u: goto L_088DB824;
    case 607u: goto L_088DB830;
    case 608u: goto L_088DB83C;
    case 609u: goto L_088DB848;
    case 610u: goto L_088DB854;
    case 611u: goto L_088DB86C;
    case 612u: goto L_088DB874;
    case 613u: goto L_088DB87C;
    case 614u: goto L_088DB888;
    case 615u: goto L_088DB88C;
    case 616u: goto L_088DB894;
    case 617u: goto L_088DB8A8;
    case 618u: goto L_088DB8B0;
    case 619u: goto L_088DB8BC;
    case 620u: goto L_088DB8CC;
    case 621u: goto L_088DB8D8;
    case 622u: goto L_088DB8EC;
    case 623u: goto L_088DB8F4;
    case 624u: goto L_088DB900;
    case 625u: goto L_088DB908;
    case 626u: goto L_088DB90C;
    case 627u: goto L_088DB914;
    case 628u: goto L_088DB92C;
    case 629u: goto L_088DB93C;
    case 630u: goto L_088DB944;
    case 631u: goto L_088DB950;
    case 632u: goto L_088DB958;
    case 633u: goto L_088DB964;
    case 634u: goto L_088DB974;
    case 635u: goto L_088DB97C;
    case 636u: goto L_088DB988;
    case 637u: goto L_088DB998;
    case 638u: goto L_088DB9B4;
    case 639u: goto L_088DB9C8;
    case 640u: goto L_088DB9D4;
    case 641u: goto L_088DB9EC;
    case 642u: goto L_088DBA08;
    case 643u: goto L_088DBA28;
    case 644u: goto L_088DBA40;
    case 645u: goto L_088DBA50;
    case 646u: goto L_088DBA58;
    case 647u: goto L_088DBA60;
    case 648u: goto L_088DBA74;
    case 649u: goto L_088DBA84;
    case 650u: goto L_088DBA8C;
    case 651u: goto L_088DBA98;
    case 652u: goto L_088DBAAC;
    case 653u: goto L_088DBAB8;
    case 654u: goto L_088DBAC4;
    case 655u: goto L_088DBACC;
    case 656u: goto L_088DBAD8;
    case 657u: goto L_088DBB08;
    case 658u: goto L_088DBBAC;
    case 659u: goto L_088DBBD4;
    case 660u: goto L_088DBBF0;
    case 661u: goto L_088DBBF8;
    case 662u: goto L_088DBC0C;
    case 663u: goto L_088DBC1C;
    case 664u: goto L_088DBC20;
    case 665u: goto L_088DBC28;
    case 666u: goto L_088DBC98;
    case 667u: goto L_088DBCAC;
    case 668u: goto L_088DBCD4;
    case 669u: goto L_088DBCDC;
    case 670u: goto L_088DBCE4;
    case 671u: goto L_088DBCEC;
    case 672u: goto L_088DBCF4;
    case 673u: goto L_088DBD0C;
    case 674u: goto L_088DBD3C;
    case 675u: goto L_088DBD44;
    case 676u: goto L_088DBD58;
    case 677u: goto L_088DBD60;
    case 678u: goto L_088DBD68;
    case 679u: goto L_088DBD80;
    case 680u: goto L_088DBDB0;
    case 681u: goto L_088DBDB8;
    case 682u: goto L_088DBDDC;
    case 683u: goto L_088DBDE8;
    case 684u: goto L_088DBDF4;
    case 685u: goto L_088DBE04;
    case 686u: goto L_088DBE28;
    case 687u: goto L_088DBE3C;
    case 688u: goto L_088DBE48;
    case 689u: goto L_088DBE58;
    case 690u: goto L_088DBE70;
    case 691u: goto L_088DBE7C;
    case 692u: goto L_088DBE94;
    case 693u: goto L_088DBEA4;
    case 694u: goto L_088DBEA8;
    case 695u: goto L_088DBEB4;
    case 696u: goto L_088DBECC;
    case 697u: goto L_088DBEDC;
    case 698u: goto L_088DBEE4;
    case 699u: goto L_088DBF0C;
    case 700u: goto L_088DBF14;
    case 701u: goto L_088DBF2C;
    case 702u: goto L_088DBF58;
    case 703u: goto L_088DBF64;
    case 704u: goto L_088DBF80;
    case 705u: goto L_088DBFC0;
    case 706u: goto L_088DBFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D8004:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D8010;
    }
L_088D8010:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8004;
      }
      goto L_088D8018;
    }
L_088D8018:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D8028u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 396u, 0x08859764u>(ctx, &aot_mem) && ctx.pc == 0x088D8028u) goto L_088D8028;
    return;
L_088D8028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D8030;
    }
L_088D8030:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D8040u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 381u, 0x08859688u>(ctx, &aot_mem) && ctx.pc == 0x088D8040u) goto L_088D8040;
    return;
L_088D8040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D8048;
    }
L_088D8048:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_088D8060;
      }
      goto L_088D8054;
    }
L_088D8054:
    ctx.gpr[16] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_088D8064;
      }
      goto L_088D8060;
    }
L_088D8060:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_088D8064;
L_088D8064:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8098;
      }
      goto L_088D8070;
    }
L_088D8070:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D80F0;
      }
      goto L_088D8078;
    }
L_088D8078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_088D80C0;
      }
      goto L_088D8080;
    }
L_088D8080:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D8090u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 237u, 0x08858E40u>(ctx, &aot_mem) && ctx.pc == 0x088D8090u) goto L_088D8090;
    return;
L_088D8090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D8098;
    }
L_088D8098:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D80D8;
      }
      goto L_088D80A0;
    }
L_088D80A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80F0;
      }
      goto L_088D80A8;
    }
L_088D80A8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D80B8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 282u, 0x088590D4u>(ctx, &aot_mem) && ctx.pc == 0x088D80B8u) goto L_088D80B8;
    return;
L_088D80B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D80C0;
    }
L_088D80C0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D80D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 252u, 0x08858F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D80D0u) goto L_088D80D0;
    return;
L_088D80D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D80D8;
    }
L_088D80D8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D80E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 267u, 0x08858FF8u>(ctx, &aot_mem) && ctx.pc == 0x088D80E8u) goto L_088D80E8;
    return;
L_088D80E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D80F0;
    }
L_088D80F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D80FC;
      }
      goto L_088D80FC;
    }
L_088D80FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21528)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088D8148;
      }
      goto L_088D8134;
    }
L_088D8134:
    ctx.gpr[7] = (0u | 137u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8154;
      }
      goto L_088D8140;
    }
L_088D8140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8190;
      }
      goto L_088D8148;
    }
L_088D8148:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8154;
    }
L_088D8154:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23560)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8188;
      }
      goto L_088D8160;
    }
L_088D8160:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23560), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23560)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D8180;
      }
      goto L_088D817C;
    }
L_088D817C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23560), static_cast<std::uint8_t>(0u));
    goto L_088D8180;
L_088D8180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8188;
    }
L_088D8188:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23560), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D8190;
L_088D8190:
    ctx.gpr[7] = (0u | 115u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D81D8;
      }
      goto L_088D819C;
    }
L_088D819C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23559)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D81D0;
      }
      goto L_088D81A8;
    }
L_088D81A8:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23559), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23559)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D81C8;
      }
      goto L_088D81C4;
    }
L_088D81C4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23559), static_cast<std::uint8_t>(0u));
    goto L_088D81C8;
L_088D81C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D81D0;
    }
L_088D81D0:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23559), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D81D8;
L_088D81D8:
    ctx.gpr[7] = (0u | 147u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8220;
      }
      goto L_088D81E4;
    }
L_088D81E4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23558)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8218;
      }
      goto L_088D81F0;
    }
L_088D81F0:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23558), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23558)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D8210;
      }
      goto L_088D820C;
    }
L_088D820C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23558), static_cast<std::uint8_t>(0u));
    goto L_088D8210;
L_088D8210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8218;
    }
L_088D8218:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23558), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D8220;
L_088D8220:
    ctx.gpr[7] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8268;
      }
      goto L_088D822C;
    }
L_088D822C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23557)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8260;
      }
      goto L_088D8238;
    }
L_088D8238:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23557), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23557)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D8258;
      }
      goto L_088D8254;
    }
L_088D8254:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23557), static_cast<std::uint8_t>(0u));
    goto L_088D8258;
L_088D8258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8260;
    }
L_088D8260:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23557), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D8268;
L_088D8268:
    ctx.gpr[7] = (0u | 122u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D82B0;
      }
      goto L_088D8274;
    }
L_088D8274:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23556)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D82A8;
      }
      goto L_088D8280;
    }
L_088D8280:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23556), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23556)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D82A0;
      }
      goto L_088D829C;
    }
L_088D829C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23556), static_cast<std::uint8_t>(0u));
    goto L_088D82A0;
L_088D82A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D82A8;
    }
L_088D82A8:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23556), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D82B0;
L_088D82B0:
    ctx.gpr[7] = (0u | 145u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 144u);
      if (branch_taken) {
          goto L_088D82CC;
      }
      goto L_088D82BC;
    }
L_088D82BC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 143u);
      if (branch_taken) {
          goto L_088D82CC;
      }
      goto L_088D82C4;
    }
L_088D82C4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8308;
      }
      goto L_088D82CC;
    }
L_088D82CC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23555)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8300;
      }
      goto L_088D82D8;
    }
L_088D82D8:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23555), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23555)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D82F8;
      }
      goto L_088D82F4;
    }
L_088D82F4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23555), static_cast<std::uint8_t>(0u));
    goto L_088D82F8;
L_088D82F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8300;
    }
L_088D8300:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23555), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D8308;
L_088D8308:
    ctx.gpr[7] = (0u | 135u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8350;
      }
      goto L_088D8314;
    }
L_088D8314:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23554)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8348;
      }
      goto L_088D8320;
    }
L_088D8320:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23554), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23554)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D8340;
      }
      goto L_088D833C;
    }
L_088D833C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23554), static_cast<std::uint8_t>(0u));
    goto L_088D8340;
L_088D8340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8348;
    }
L_088D8348:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23554), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088D8350;
L_088D8350:
    ctx.gpr[7] = (0u | 107u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D8388;
      }
      goto L_088D835C;
    }
L_088D835C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26352)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D83A8;
      }
      goto L_088D8368;
    }
L_088D8368:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D83D0;
      }
      goto L_088D8370;
    }
L_088D8370:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21529)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
      if (branch_taken) {
          goto L_088D83DC;
      }
      goto L_088D8380;
    }
L_088D8380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8404;
      }
      goto L_088D8388;
    }
L_088D8388:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 3336u);
    ctx.gpr[31] = (0x088D83A0u);
    ctx.gpr[8] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088D83A0u) goto L_088D83A0;
    return;
L_088D83A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D83A8;
    }
L_088D83A8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8474;
      }
      goto L_088D83B0;
    }
L_088D83B0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D83D0;
      }
      goto L_088D83B8;
    }
L_088D83B8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21529)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
      if (branch_taken) {
          goto L_088D8520;
      }
      goto L_088D83C8;
    }
L_088D83C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8548;
      }
      goto L_088D83D0;
    }
L_088D83D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D83DC;
    }
L_088D83DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D845C;
      }
      goto L_088D83E4;
    }
L_088D83E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_088D842C;
      }
      goto L_088D83EC;
    }
L_088D83EC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D83FCu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 483u, 0x08859C94u>(ctx, &aot_mem) && ctx.pc == 0x088D83FCu) goto L_088D83FC;
    return;
L_088D83FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8404;
    }
L_088D8404:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8444;
      }
      goto L_088D840C;
    }
L_088D840C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D845C;
      }
      goto L_088D8414;
    }
L_088D8414:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8424u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 535u, 0x08859FF4u>(ctx, &aot_mem) && ctx.pc == 0x088D8424u) goto L_088D8424;
    return;
L_088D8424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D842C;
    }
L_088D842C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D843Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 510u, 0x08859E54u>(ctx, &aot_mem) && ctx.pc == 0x088D843Cu) goto L_088D843C;
    return;
L_088D843C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8444;
    }
L_088D8444:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8454u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 456u, 0x08859AD4u>(ctx, &aot_mem) && ctx.pc == 0x088D8454u) goto L_088D8454;
    return;
L_088D8454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D845C;
    }
L_088D845C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D846Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 483u, 0x08859C94u>(ctx, &aot_mem) && ctx.pc == 0x088D846Cu) goto L_088D846C;
    return;
L_088D846C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8474;
    }
L_088D8474:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21529)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8629));
      if (branch_taken) {
          goto L_088D84AC;
      }
      goto L_088D8484;
    }
L_088D8484:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D8508;
      }
      goto L_088D848C;
    }
L_088D848C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_088D84D8;
      }
      goto L_088D8494;
    }
L_088D8494:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D84A4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 683u, 0x0885A994u>(ctx, &aot_mem) && ctx.pc == 0x088D84A4u) goto L_088D84A4;
    return;
L_088D84A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D84AC;
    }
L_088D84AC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D84F0;
      }
      goto L_088D84B8;
    }
L_088D84B8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8508;
      }
      goto L_088D84C0;
    }
L_088D84C0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D84D0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 735u, 0x0885ACF4u>(ctx, &aot_mem) && ctx.pc == 0x088D84D0u) goto L_088D84D0;
    return;
L_088D84D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D84D8;
    }
L_088D84D8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D84E8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 710u, 0x0885AB54u>(ctx, &aot_mem) && ctx.pc == 0x088D84E8u) goto L_088D84E8;
    return;
L_088D84E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D84F0;
    }
L_088D84F0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8500u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 656u, 0x0885A7D4u>(ctx, &aot_mem) && ctx.pc == 0x088D8500u) goto L_088D8500;
    return;
L_088D8500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8508;
    }
L_088D8508:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8518u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 683u, 0x0885A994u>(ctx, &aot_mem) && ctx.pc == 0x088D8518u) goto L_088D8518;
    return;
L_088D8518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8520;
    }
L_088D8520:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D85A0;
      }
      goto L_088D8528;
    }
L_088D8528:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_088D8570;
      }
      goto L_088D8530;
    }
L_088D8530:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8540u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 583u, 0x0885A314u>(ctx, &aot_mem) && ctx.pc == 0x088D8540u) goto L_088D8540;
    return;
L_088D8540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8548;
    }
L_088D8548:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8588;
      }
      goto L_088D8550;
    }
L_088D8550:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85A0;
      }
      goto L_088D8558;
    }
L_088D8558:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8568u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 635u, 0x0885A674u>(ctx, &aot_mem) && ctx.pc == 0x088D8568u) goto L_088D8568;
    return;
L_088D8568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8570;
    }
L_088D8570:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8580u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 610u, 0x0885A4D4u>(ctx, &aot_mem) && ctx.pc == 0x088D8580u) goto L_088D8580;
    return;
L_088D8580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D8588;
    }
L_088D8588:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D8598u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 556u, 0x0885A154u>(ctx, &aot_mem) && ctx.pc == 0x088D8598u) goto L_088D8598;
    return;
L_088D8598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D85B0;
      }
      goto L_088D85A0;
    }
L_088D85A0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D85B0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 583u, 0x0885A314u>(ctx, &aot_mem) && ctx.pc == 0x088D85B0u) goto L_088D85B0;
    return;
L_088D85B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D85BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (18204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (2237u << 16u);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[30] = (0u | 175u);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_088D8654;
L_088D8654:
    ctx.gpr[31] = (0x088D865Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 245u, 0x089E93CCu>(ctx, &aot_mem) && ctx.pc == 0x088D865Cu) goto L_088D865C;
    return;
L_088D865C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D866C;
      }
      goto L_088D8664;
    }
L_088D8664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D881C;
      }
      goto L_088D866C;
    }
L_088D866C:
    ctx.gpr[31] = (0x088D8674u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 243u, 0x089E9384u>(ctx, &aot_mem) && ctx.pc == 0x088D8674u) goto L_088D8674;
    return;
L_088D8674:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D881C;
      }
      goto L_088D8680;
    }
L_088D8680:
    ctx.gpr[31] = (0x088D8688u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 244u, 0x089E93A8u>(ctx, &aot_mem) && ctx.pc == 0x088D8688u) goto L_088D8688;
    return;
L_088D8688:
    ctx.gpr[31] = (0x088D8690u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 246u, 0x089E93F0u>(ctx, &aot_mem) && ctx.pc == 0x088D8690u) goto L_088D8690;
    return;
L_088D8690:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8760;
      }
      goto L_088D86A0;
    }
L_088D86A0:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17752)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D86B8:
    ctx.gpr[4] = (0u | 176u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D86D4u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D86D4u) goto L_088D86D4;
    return;
L_088D86D4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_088D87A4;
      }
      goto L_088D86F0;
    }
L_088D86F0:
    ctx.gpr[4] = (0u | 298u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D870Cu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D870Cu) goto L_088D870C;
    return;
L_088D870C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12347));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_088D87A4;
      }
      goto L_088D8728;
    }
L_088D8728:
    ctx.gpr[4] = (0u | 177u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D8744u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D8744u) goto L_088D8744;
    return;
L_088D8744:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_088D87A4;
      }
      goto L_088D8760;
    }
L_088D8760:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D8778u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D8778u) goto L_088D8778;
    return;
L_088D8778:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19500));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D8798;
      }
      goto L_088D8784;
    }
L_088D8784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088D8798;
L_088D8798:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 127u);
    goto L_088D87A4;
L_088D87A4:
    ctx.gpr[31] = (0x088D87ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 247u, 0x089E9414u>(ctx, &aot_mem) && ctx.pc == 0x088D87ACu) goto L_088D87AC;
    return;
L_088D87AC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D87C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088D87C0u) goto L_088D87C0;
    return;
L_088D87C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D881C;
      }
      goto L_088D87D4;
    }
L_088D87D4:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D87ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D87ECu) goto L_088D87EC;
    return;
L_088D87EC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D881C;
      }
      goto L_088D87FC;
    }
L_088D87FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D881Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D881Cu) goto L_088D881C;
    return;
L_088D881C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8654;
      }
      goto L_088D8830;
    }
L_088D8830:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14864));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (2237u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[4] = (17352u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u | 80u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[22] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_088D8924;
L_088D8924:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[18] << 6u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BCC;
      }
      goto L_088D893C;
    }
L_088D893C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BCC;
      }
      goto L_088D8948;
    }
L_088D8948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8994;
      }
      goto L_088D8954;
    }
L_088D8954:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D896Cu);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D896Cu) goto L_088D896C;
    return;
L_088D896C:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D8A94;
      }
      goto L_088D8994;
    }
L_088D8994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088D8A08;
      }
      goto L_088D89B0;
    }
L_088D89B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D8A58;
      }
      goto L_088D89B8;
    }
L_088D89B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D89D0u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D89D0u) goto L_088D89D0;
    return;
L_088D89D0:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 100u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D8A94;
      }
      goto L_088D8A08;
    }
L_088D8A08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8A58;
      }
      goto L_088D8A10;
    }
L_088D8A10:
    ctx.gpr[4] = (0u | 268u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (17436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 268u);
    ctx.gpr[31] = (0x088D8A34u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8A34u) goto L_088D8A34;
    return;
L_088D8A34:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    ctx.gpr[17] = (0u | 60u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D8A94;
      }
      goto L_088D8A58;
    }
L_088D8A58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8A70u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8A70u) goto L_088D8A70;
    return;
L_088D8A70:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088D8A94;
L_088D8A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D8AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088D8AB0u) goto L_088D8AB0;
    return;
L_088D8AB0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088D8B24;
      }
      goto L_088D8AC4;
    }
L_088D8AC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B24;
      }
      goto L_088D8ACC;
    }
L_088D8ACC:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D8AE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D8AE4u) goto L_088D8AE4;
    return;
L_088D8AE4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D8B24;
      }
      goto L_088D8AF4;
    }
L_088D8AF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D8B24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D8B24u) goto L_088D8B24;
    return;
L_088D8B24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8BCC;
      }
      goto L_088D8B30;
    }
L_088D8B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088D8B58u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D8B58u) goto L_088D8B58;
    return;
L_088D8B58:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_088D8BCC;
      }
      goto L_088D8B68;
    }
L_088D8B68:
    ctx.gpr[5] = (0u | 228u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 23000u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23000));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088D8BCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D8BCCu) goto L_088D8BCC;
    return;
L_088D8BCC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8924;
      }
      goto L_088D8BE0;
    }
L_088D8BE0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(88) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9CC4;
      }
      goto L_088D8C58;
    }
L_088D8C58:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8C70:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 165u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8C98u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8C98u) goto L_088D8C98;
    return;
L_088D8C98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8CC0;
    }
L_088D8CC0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 118u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8CE8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8CE8u) goto L_088D8CE8;
    return;
L_088D8CE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8D10;
    }
L_088D8D10:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 126u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8D38u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8D38u) goto L_088D8D38;
    return;
L_088D8D38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8D60;
    }
L_088D8D60:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8D88u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8D88u) goto L_088D8D88;
    return;
L_088D8D88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8DB0;
    }
L_088D8DB0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 150u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8DD8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8DD8u) goto L_088D8DD8;
    return;
L_088D8DD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8E00;
    }
L_088D8E00:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 151u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8E28u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8E28u) goto L_088D8E28;
    return;
L_088D8E28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8E50;
    }
L_088D8E50:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 152u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8E78u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8E78u) goto L_088D8E78;
    return;
L_088D8E78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8EA0;
    }
L_088D8EA0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 153u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8EC8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8EC8u) goto L_088D8EC8;
    return;
L_088D8EC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8EF0;
    }
L_088D8EF0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 154u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D8F18u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8F18u) goto L_088D8F18;
    return;
L_088D8F18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8F40;
    }
L_088D8F40:
    ctx.gpr[4] = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D8F58u);
    ctx.gpr[5] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D8F58u) goto L_088D8F58;
    return;
L_088D8F58:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D8F68u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D8F68u) goto L_088D8F68;
    return;
L_088D8F68:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D8F7Cu);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D8F7Cu) goto L_088D8F7C;
    return;
L_088D8F7C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D8FC4;
    }
L_088D8FC4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 39243u);
    ctx.gpr[18] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D8FE4u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D8FE4u) goto L_088D8FE4;
    return;
L_088D8FE4:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D902C;
    }
L_088D902C:
    ctx.gpr[4] = (0u | 235u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 16000u);
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D904Cu);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D904Cu) goto L_088D904C;
    return;
L_088D904C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9094;
    }
L_088D9094:
    ctx.gpr[4] = (0u | 208u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D90ACu);
    ctx.gpr[5] = (0u | 208u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D90ACu) goto L_088D90AC;
    return;
L_088D90AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D90F0;
    }
L_088D90F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9118;
      }
      goto L_088D9104;
    }
L_088D9104:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088D9110u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x088D9110u) goto L_088D9110;
    return;
L_088D9110:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D91A0;
      }
      goto L_088D9118;
    }
L_088D9118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[19] = (0u | 16000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9154u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D9154u) goto L_088D9154;
    return;
L_088D9154:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D91A0;
    }
L_088D91A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D91A8;
    }
L_088D91A8:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 22050u);
    ctx.gpr[18] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D91C8u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D91C8u) goto L_088D91C8;
    return;
L_088D91C8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9210;
    }
L_088D9210:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D921Cu);
    ctx.gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088D921Cu) goto L_088D921C;
    return;
L_088D921C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D9280;
      }
      goto L_088D9228;
    }
L_088D9228:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[4] = (0u | 5964u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D925Cu);
    ctx.gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D925Cu) goto L_088D925C;
    return;
L_088D925C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9280;
    }
L_088D9280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D9288;
    }
L_088D9288:
    ctx.gpr[4] = (0u | 314u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x088D92A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D92A8u) goto L_088D92A8;
    return;
L_088D92A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9308;
    }
L_088D9308:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9354;
    }
L_088D9354:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D93A0;
    }
L_088D93A0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D93EC;
    }
L_088D93EC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9438;
    }
L_088D9438:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9484;
    }
L_088D9484:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 14000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D94DC;
    }
L_088D94DC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9528;
    }
L_088D9528:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 270u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9574;
    }
L_088D9574:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 201u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[4] = (17817u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D95C4;
    }
L_088D95C4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 202u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9610;
    }
L_088D9610:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 348u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D963Cu);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D963Cu) goto L_088D963C;
    return;
L_088D963C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(18600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D967C;
    }
L_088D967C:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 43u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D96A8u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D96A8u) goto L_088D96A8;
    return;
L_088D96A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(18600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D96E8;
    }
L_088D96E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26332)));
    ctx.gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (17761u << 16u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(114));
    ctx.gpr[31] = (0x088D9720u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9720u) goto L_088D9720;
    return;
L_088D9720:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 4u);
    ctx.gpr[31] = (0x088D9734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D9734u) goto L_088D9734;
    return;
L_088D9734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9774;
    }
L_088D9774:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 335u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17761u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D979Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D979Cu) goto L_088D979C;
    return;
L_088D979C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 4u);
    ctx.gpr[31] = (0x088D97B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D97B0u) goto L_088D97B0;
    return;
L_088D97B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D97F0;
    }
L_088D97F0:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 217u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (17761u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D9818u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9818u) goto L_088D9818;
    return;
L_088D9818:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 4u);
    ctx.gpr[31] = (0x088D982Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D982Cu) goto L_088D982C;
    return;
L_088D982C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D986C;
    }
L_088D986C:
    ctx.gpr[31] = (0x088D9874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088D9874u) goto L_088D9874;
    return;
L_088D9874:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D98BC;
      }
      goto L_088D9880;
    }
L_088D9880:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(311)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088D98BC;
      }
      goto L_088D9894;
    }
L_088D9894:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D98AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D98E4;
      }
      goto L_088D98B4;
    }
L_088D98B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D98BC;
    }
L_088D98BC:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D98D0u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D98D0u) goto L_088D98D0;
    return;
L_088D98D0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D9908;
      }
      goto L_088D98E4;
    }
L_088D98E4:
    ctx.gpr[4] = (0u | 38u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D98F8u);
    ctx.gpr[5] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D98F8u) goto L_088D98F8;
    return;
L_088D98F8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_088D9908;
L_088D9908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 7u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9948;
    }
L_088D9948:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23553)));
    ctx.gpr[4] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(39));
    ctx.gpr[31] = (0x088D999Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D999Cu) goto L_088D999C;
    return;
L_088D999C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D99B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D99B0u) goto L_088D99B0;
    return;
L_088D99B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D99E8;
    }
L_088D99E8:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17864u << 16u);
    ctx.gpr[4] = (0u | 265u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D9A14u);
    ctx.gpr[5] = (0u | 265u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9A14u) goto L_088D9A14;
    return;
L_088D9A14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9A3C;
    }
L_088D9A3C:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 208u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D9A68u);
    ctx.gpr[5] = (0u | 208u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9A68u) goto L_088D9A68;
    return;
L_088D9A68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9A88;
    }
L_088D9A88:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 208u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D9AB4u);
    ctx.gpr[5] = (0u | 208u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9AB4u) goto L_088D9AB4;
    return;
L_088D9AB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9AD4;
    }
L_088D9AD4:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 203u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088D9B00u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9B00u) goto L_088D9B00;
    return;
L_088D9B00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9B28;
    }
L_088D9B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26336)));
    ctx.gpr[5] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (17725u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9B60u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D9B60u) goto L_088D9B60;
    return;
L_088D9B60:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9B84u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D9B84u) goto L_088D9B84;
    return;
L_088D9B84:
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(25));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9B94;
    }
L_088D9B94:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088D9BB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088D9BB0u) goto L_088D9BB0;
    return;
L_088D9BB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088D9BC4u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 496u, 0x088D789Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9BC4u) goto L_088D9BC4;
    return;
L_088D9BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D9BCC;
    }
L_088D9BCC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088D9BE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088D9BE8u) goto L_088D9BE8;
    return;
L_088D9BE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x088D9BFCu);
    ctx.gpr[6] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 496u, 0x088D789Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9BFCu) goto L_088D9BFC;
    return;
L_088D9BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D9C04;
    }
L_088D9C04:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 10600u);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D9C38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D9C38u) goto L_088D9C38;
    return;
L_088D9C38:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9C64;
    }
L_088D9C64:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 22000u);
    ctx.gpr[4] = (0u | 120u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x088D9C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088D9C98u) goto L_088D9C98;
    return;
L_088D9C98:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D9CCC;
      }
      goto L_088D9CC4;
    }
L_088D9CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D9CCC;
    }
L_088D9CCC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088D9CD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088D9CD8u) goto L_088D9CD8;
    return;
L_088D9CD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D9CEC;
    }
L_088D9CEC:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9D04u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088D9D04u) goto L_088D9D04;
    return;
L_088D9D04:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D9D50;
      }
      goto L_088D9D14;
    }
L_088D9D14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23553)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23553), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088D9D40;
      }
      goto L_088D9D34;
    }
L_088D9D34:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    goto L_088D9D40;
L_088D9D40:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088D9D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D9D50u) goto L_088D9D50;
    return;
L_088D9D50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D7C;
      }
      goto L_088D9D58;
    }
L_088D9D58:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088D9D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088D9D7Cu) goto L_088D9D7C;
    return;
L_088D9D7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 43 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D9E5C;
      }
      goto L_088D9DC4;
    }
L_088D9DC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_088D9DF0;
      }
      goto L_088D9DD0;
    }
L_088D9DD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D9EC8;
      }
      goto L_088D9DD8;
    }
L_088D9DD8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17224)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9DF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9EC8;
      }
      goto L_088D9DF8;
    }
L_088D9DF8:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (17608u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D9E24u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9E24u) goto L_088D9E24;
    return;
L_088D9E24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088DA100;
      }
      goto L_088D9E5C;
    }
L_088D9E5C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 67u);
      if (branch_taken) {
          goto L_088D9ED0;
      }
      goto L_088D9E64;
    }
L_088D9E64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 44 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D9F44;
      }
      goto L_088D9E70;
    }
L_088D9E70:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17056u << 16u);
      if (branch_taken) {
          goto L_088D9EC8;
      }
      goto L_088D9E78;
    }
L_088D9E78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20812u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088DA100;
      }
      goto L_088D9EC8;
    }
L_088D9EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA168;
      }
      goto L_088D9ED0;
    }
L_088D9ED0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9EC8;
      }
      goto L_088D9ED8;
    }
L_088D9ED8:
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 28159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA100;
      }
      goto L_088D9F44;
    }
L_088D9F44:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 166u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (17608u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088D9F70u);
    ctx.gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9F70u) goto L_088D9F70;
    return;
L_088D9F70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088DA100;
      }
      goto L_088D9FA8;
    }
L_088D9FA8:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 5974u);
    ctx.gpr[4] = (0u | 5974u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088D9FD0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088D9FD0u) goto L_088D9FD0;
    return;
L_088D9FD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DA168;
      }
      goto L_088D9FF8;
    }
L_088D9FF8:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17864u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DA024u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DA024u) goto L_088DA024;
    return;
L_088DA024:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088DA100;
      }
      goto L_088DA050;
    }
L_088DA050:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17864u << 16u);
    ctx.gpr[4] = (0u | 200u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DA07Cu);
    ctx.gpr[5] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DA07Cu) goto L_088DA07C;
    return;
L_088DA07C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088DA100;
      }
      goto L_088DA0A8;
    }
L_088DA0A8:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17608u << 16u);
    ctx.gpr[4] = (0u | 326u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DA0D4u);
    ctx.gpr[5] = (0u | 326u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DA0D4u) goto L_088DA0D4;
    return;
L_088DA0D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    goto L_088DA100;
L_088DA100:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA10Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088DA10Cu) goto L_088DA10C;
    return;
L_088DA10C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA168;
      }
      goto L_088DA120;
    }
L_088DA120:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DA138u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088DA138u) goto L_088DA138;
    return;
L_088DA138:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DA168;
      }
      goto L_088DA148;
    }
L_088DA148:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088DA168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DA168u) goto L_088DA168;
    return;
L_088DA168:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6308)));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA1E0;
    }
L_088DA1E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[5] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA1F0;
    }
L_088DA1F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[19] = (2237u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088DA254;
      }
      goto L_088DA210;
    }
L_088DA210:
    ctx.gpr[4] = (0u | 176u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DA228u);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088DA228u) goto L_088DA228;
    return;
L_088DA228:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6276)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(65));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DA2A0;
      }
      goto L_088DA254;
    }
L_088DA254:
    ctx.gpr[4] = (0u | 175u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DA26Cu);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088DA26Cu) goto L_088DA26C;
    return;
L_088DA26C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DA2A0;
L_088DA2A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2024)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA2C0;
      }
      goto L_088DA2B4;
    }
L_088DA2B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DA2C0;
L_088DA2C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23552)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23552)));
        goto L_088DA2D8;
    }
    goto L_088DA2D0;
L_088DA2D0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23552), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23552)));
    goto L_088DA2D8;
L_088DA2D8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23552), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA318u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DA318u) goto L_088DA318;
    return;
L_088DA318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA3C4;
      }
      goto L_088DA32C;
    }
L_088DA32C:
    ctx.gpr[31] = (0x088DA334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x088DA334u) goto L_088DA334;
    return;
L_088DA334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA34C;
      }
      goto L_088DA33C;
    }
L_088DA33C:
    ctx.gpr[31] = (0x088DA344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x088DA344u) goto L_088DA344;
    return;
L_088DA344:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA3C4;
      }
      goto L_088DA34C;
    }
L_088DA34C:
    ctx.gpr[4] = (0u | 290u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DA360u);
    ctx.gpr[5] = (0u | 290u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DA360u) goto L_088DA360;
    return;
L_088DA360:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088DA3C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DA3C4u) goto L_088DA3C4;
    return;
L_088DA3C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088DA3E8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 197u, 0x089DD460u>(ctx, &aot_mem) && ctx.pc == 0x088DA3E8u) goto L_088DA3E8;
    return;
L_088DA3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA408;
      }
      goto L_088DA3FC;
    }
L_088DA3FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DA408;
L_088DA408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA428;
      }
      goto L_088DA41C;
    }
L_088DA41C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DA428;
L_088DA428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA44C;
      }
      goto L_088DA440;
    }
L_088DA440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088DA454;
      }
      goto L_088DA44C;
    }
L_088DA44C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088DA454;
L_088DA454:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA468;
      }
      goto L_088DA464;
    }
L_088DA464:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088DA468;
L_088DA468:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA484;
      }
      goto L_088DA47C;
    }
L_088DA47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA488;
      }
      goto L_088DA484;
    }
L_088DA484:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    goto L_088DA488;
L_088DA488:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA574;
      }
      goto L_088DA498;
    }
L_088DA498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30400)));
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA574;
      }
      goto L_088DA4B4;
    }
L_088DA4B4:
    ctx.gpr[4] = (0u | 261u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DA4C8u);
    ctx.gpr[5] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DA4C8u) goto L_088DA4C8;
    return;
L_088DA4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30400)));
    ctx.gpr[4] = (2237u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088DA504;
      }
      goto L_088DA4F8;
    }
L_088DA4F8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088DA504;
L_088DA504:
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (0u | 5u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088DA564u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DA564u) goto L_088DA564;
    return;
L_088DA564:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-30400), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088DA574;
L_088DA574:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA5A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DAA34;
      }
      goto L_088DA5F8;
    }
L_088DA5F8:
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2237u << 16u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[30] = (0u | 11u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 120u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[23] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28320));
    goto L_088DA648;
L_088DA648:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088DAA18;
      }
      goto L_088DA674;
    }
L_088DA674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6AC;
      }
      goto L_088DA680;
    }
L_088DA680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA694;
      }
      goto L_088DA68C;
    }
L_088DA68C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA18;
      }
      goto L_088DA694;
    }
L_088DA694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6BC;
      }
      goto L_088DA6AC;
    }
L_088DA6AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088DA6BC;
L_088DA6BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088DA6CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088DA6CCu) goto L_088DA6CC;
    return;
L_088DA6CC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088DA87C;
    }
    goto L_088DA6E0;
L_088DA6E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA710;
      }
      goto L_088DA6F0;
    }
L_088DA6F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA710;
      }
      goto L_088DA700;
    }
L_088DA700:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088DA87C;
    }
    goto L_088DA710;
L_088DA710:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DA720u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088DA720u) goto L_088DA720;
    return;
L_088DA720:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DA734u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088DA734u) goto L_088DA734;
    return;
L_088DA734:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088DA878;
      }
      goto L_088DA744;
    }
L_088DA744:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088DA834;
      }
      goto L_088DA750;
    }
L_088DA750:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(62)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA810;
      }
      goto L_088DA760;
    }
L_088DA760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA808;
      }
      goto L_088DA770;
    }
L_088DA770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
        goto L_088DA79C;
    }
    goto L_088DA780;
L_088DA780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(114));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DA7B0;
      }
      goto L_088DA79C;
    }
L_088DA79C:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(119));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088DA7B0;
L_088DA7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088DA7BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DA7BCu) goto L_088DA7BC;
    return;
L_088DA7BC:
    ctx.gpr[17] = (ctx.gpr[2] >> 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x088DA7D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088DA7D0u) goto L_088DA7D0;
    return;
L_088DA7D0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088DA854;
      }
      goto L_088DA800;
    }
L_088DA800:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_088DA854;
      }
      goto L_088DA808;
    }
L_088DA808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088DA87C;
      }
      goto L_088DA810;
    }
L_088DA810:
    ctx.gpr[5] = (0u | 190u);
    ctx.gpr[6] = (0u | 6543u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088DA854;
      }
      goto L_088DA834;
    }
L_088DA834:
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 13961u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    goto L_088DA854;
L_088DA854:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DA878u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DA878u) goto L_088DA878;
    return;
L_088DA878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088DA87C;
L_088DA87C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA18;
      }
      goto L_088DA8A0;
    }
L_088DA8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088DA8A4;
L_088DA8A4:
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 74 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 76 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DA9D0;
      }
      goto L_088DA8CC;
    }
L_088DA8CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA9D0;
      }
      goto L_088DA8D4;
    }
L_088DA8D4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA8EC;
      }
      goto L_088DA8E4;
    }
L_088DA8E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088DA9F0;
      }
      goto L_088DA8EC;
    }
L_088DA8EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DA8FCu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088DA8FCu) goto L_088DA8FC;
    return;
L_088DA8FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DA910u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088DA910u) goto L_088DA910;
    return;
L_088DA910:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DA9C8;
      }
      goto L_088DA920;
    }
L_088DA920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(61)));
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088DA93C;
    }
    goto L_088DA92C;
L_088DA92C:
    ctx.gpr[4] = (0u | 6735u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DA980;
      }
      goto L_088DA93C;
    }
L_088DA93C:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[5] = (0u | 75u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA970;
      }
      goto L_088DA960;
    }
L_088DA960:
    ctx.gpr[4] = (0u | 22000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DA980;
      }
      goto L_088DA970;
    }
L_088DA970:
    ctx.gpr[4] = (0u | 126u);
    ctx.gpr[5] = (0u | 18000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088DA980;
L_088DA980:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA9D8;
      }
      goto L_088DA9C0;
    }
L_088DA9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA9DC;
      }
      goto L_088DA9C8;
    }
L_088DA9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088DA9F0;
      }
      goto L_088DA9D0;
    }
L_088DA9D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088DA9F0;
      }
      goto L_088DA9D8;
    }
L_088DA9D8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23551), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_088DA9DC;
L_088DA9DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DA9ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DA9ECu) goto L_088DA9EC;
    return;
L_088DA9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088DA9F0;
L_088DA9F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6308)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088DA8A4;
    }
    goto L_088DAA18;
L_088DAA18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DA648;
      }
      goto L_088DAA34;
    }
L_088DAA34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAA78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_088DB0FC;
      }
      goto L_088DAAD8;
    }
L_088DAAD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2237u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28320));
    goto L_088DAB00;
L_088DAB00:
    ctx.gpr[21] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[2] = (0u | 249u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    ctx.gpr[3] = (0u | 344u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[12] = (0u | 263u);
      if (branch_taken) {
          goto L_088DAD5C;
      }
      goto L_088DAB38;
    }
L_088DAB38:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 207 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-59));
      if (branch_taken) {
          goto L_088DAD5C;
      }
      goto L_088DAB44;
    }
L_088DAB44:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26324)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23540)));
      if (branch_taken) {
          goto L_088DAB7C;
      }
      goto L_088DAB6C;
    }
L_088DAB6C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(290) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAB88;
      }
      goto L_088DAB7C;
    }
L_088DAB7C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(290) ? 1u : 0u);
    goto L_088DAB88;
L_088DAB88:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB98;
      }
      goto L_088DAB90;
    }
L_088DAB90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_088DAB98;
L_088DAB98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23540), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DABA0;
    }
L_088DABA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(34));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DABB4;
    }
L_088DABB4:
    ctx.gpr[4] = (0u | 286u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DABC0;
    }
L_088DABC0:
    ctx.gpr[4] = (0u | 222u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DABD4;
    }
L_088DABD4:
    ctx.gpr[4] = (0u | 211u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DABE8;
    }
L_088DABE8:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DABFC;
    }
L_088DABFC:
    ctx.gpr[4] = (0u | 331u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1512), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC14;
    }
L_088DAC14:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC28;
    }
L_088DAC28:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC38;
    }
L_088DAC38:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC4C;
    }
L_088DAC4C:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC5C;
    }
L_088DAC5C:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC74;
    }
L_088DAC74:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC88;
    }
L_088DAC88:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAC98;
    }
L_088DAC98:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DACB0;
    }
L_088DACB0:
    ctx.gpr[4] = (0u | 281u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DACC8;
    }
L_088DACC8:
    ctx.gpr[4] = (0u | 5883u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DACDC;
    }
L_088DACDC:
    ctx.gpr[4] = (0u | 5879u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DACF0;
    }
L_088DACF0:
    ctx.gpr[4] = (0u | 5876u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAD04;
    }
L_088DAD04:
    ctx.gpr[4] = (0u | 5877u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAD18;
    }
L_088DAD18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26320)));
    ctx.gpr[4] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5880));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAD38;
    }
L_088DAD38:
    ctx.gpr[4] = (0u | 172u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAD44;
    }
L_088DAD44:
    ctx.gpr[4] = (0u | 173u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAD50;
    }
L_088DAD50:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAD64;
      }
      goto L_088DAD5C;
    }
L_088DAD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB0E8;
      }
      goto L_088DAD64;
    }
L_088DAD64:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DADA8;
      }
      goto L_088DAD6C;
    }
L_088DAD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23548)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD8C;
      }
      goto L_088DAD80;
    }
L_088DAD80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23548), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DADEC;
      }
      goto L_088DAD8C;
    }
L_088DAD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088DB0E8;
      }
      goto L_088DADA8;
    }
L_088DADA8:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088DADF0;
    }
    goto L_088DADB0;
L_088DADB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23544)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DADD0;
      }
      goto L_088DADC4;
    }
L_088DADC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23544), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DADEC;
      }
      goto L_088DADD0;
    }
L_088DADD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6308)));
      if (branch_taken) {
          goto L_088DB0E8;
      }
      goto L_088DADEC;
    }
L_088DADEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_088DADF0;
L_088DADF0:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[5] = (0u | 177u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088DAE24;
      }
      goto L_088DAE14;
    }
L_088DAE14:
    ctx.gpr[4] = (0u | 28509u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(287) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAE24;
    }
L_088DAE24:
    ctx.gpr[5] = (0u | 178u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAE40;
      }
      goto L_088DAE30;
    }
L_088DAE30:
    ctx.gpr[4] = (0u | 32000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(287) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAE40;
    }
L_088DAE40:
    ctx.gpr[5] = (0u | 185u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 186u);
      if (branch_taken) {
          goto L_088DAE54;
      }
      goto L_088DAE4C;
    }
L_088DAE4C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAE90;
      }
      goto L_088DAE54;
    }
L_088DAE54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DAE64u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DAE64u) goto L_088DAE64;
    return;
L_088DAE64:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    ctx.gpr[31] = (0x088DAE78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088DAE78u) goto L_088DAE78;
    return;
L_088DAE78:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(287) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAE90;
    }
L_088DAE90:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAEA8;
      }
      goto L_088DAE98;
    }
L_088DAE98:
    ctx.gpr[4] = (0u | 5382u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(287) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAEA8;
    }
L_088DAEA8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DAEB4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DAEB4u) goto L_088DAEB4;
    return;
L_088DAEB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(287) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAEC4;
    }
L_088DAEC4:
    ctx.gpr[5] = (ctx.gpr[7] < static_cast<std::uint32_t>(290) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAED0;
    }
L_088DAED0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DAEE4u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem) && ctx.pc == 0x088DAEE4u) goto L_088DAEE4;
    return;
L_088DAEE4:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(287) ? 1u : 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088DAEF8;
L_088DAEF8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(290) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAF14;
      }
      goto L_088DAF00;
    }
L_088DAF00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF14;
      }
      goto L_088DAF08;
    }
L_088DAF08:
    ctx.gpr[4] = (0u | 103u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DAF1C;
      }
      goto L_088DAF14;
    }
L_088DAF14:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DAF1C;
L_088DAF1C:
    ctx.gpr[4] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DAF5C;
      }
      goto L_088DAF28;
    }
L_088DAF28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DAF5C;
      }
      goto L_088DAF3C;
    }
L_088DAF3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DAF5C;
L_088DAF5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23550)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23550), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_088DAF84;
      }
      goto L_088DAF78;
    }
L_088DAF78:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DAF88;
      }
      goto L_088DAF84;
    }
L_088DAF84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088DAF88;
L_088DAF88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_088DAFA0;
      }
      goto L_088DAF94;
    }
L_088DAF94:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088DB03C;
      }
      goto L_088DAFA0;
    }
L_088DAFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6266)));
    ctx.gpr[5] = (0u | 185u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAFF8;
      }
      goto L_088DAFC8;
    }
L_088DAFC8:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (0u | 20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DB03C;
      }
      goto L_088DAFF8;
    }
L_088DAFF8:
    ctx.gpr[5] = (0u | 186u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_088DB030;
      }
      goto L_088DB004;
    }
L_088DB004:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(6276)));
    ctx.gpr[4] = (0u | 107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DB03C;
      }
      goto L_088DB030;
    }
L_088DB030:
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088DB03C;
L_088DB03C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB050u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DB050u) goto L_088DB050;
    return;
L_088DB050:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088DB08C;
      }
      goto L_088DB058;
    }
L_088DB058:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23550)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23550), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB08Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DB08Cu) goto L_088DB08C;
    return;
L_088DB08C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DB0D0;
      }
      goto L_088DB094;
    }
L_088DB094:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23550)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23550), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DB0C0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DB0C0u) goto L_088DB0C0;
    return;
L_088DB0C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB0D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DB0D0u) goto L_088DB0D0;
    return;
L_088DB0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6308)));
    goto L_088DB0E8;
L_088DB0E8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB00;
      }
      goto L_088DB0FC;
    }
L_088DB0FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[20] = (2240u << 16u);
    ctx.gpr[30] = (2237u << 16u);
    ctx.gpr[4] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[22] = (0u | 7u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-25136));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_088DB1C8;
L_088DB1C8:
    ctx.gpr[31] = (0x088DB1D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 31u, 0x08880328u>(ctx, &aot_mem) && ctx.pc == 0x088DB1D0u) goto L_088DB1D0;
    return;
L_088DB1D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB368;
      }
      goto L_088DB1DC;
    }
L_088DB1DC:
    ctx.gpr[31] = (0x088DB1E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 31u, 0x08880328u>(ctx, &aot_mem) && ctx.pc == 0x088DB1E4u) goto L_088DB1E4;
    return;
L_088DB1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB208;
      }
      goto L_088DB1F4;
    }
L_088DB1F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 261u);
      if (branch_taken) {
          goto L_088DB2B4;
      }
      goto L_088DB200;
    }
L_088DB200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB368;
      }
      goto L_088DB208;
    }
L_088DB208:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB264;
      }
      goto L_088DB210;
    }
L_088DB210:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17076u << 16u);
      if (branch_taken) {
          goto L_088DB200;
      }
      goto L_088DB218;
    }
L_088DB218:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    ctx.gpr[4] = (0u | 297u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (17917u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088DB248u);
    ctx.gpr[5] = (0u | 297u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DB248u) goto L_088DB248;
    return;
L_088DB248:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088DB2F0;
      }
      goto L_088DB264;
    }
L_088DB264:
    ctx.gpr[4] = (0u | 268u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088DB288u);
    ctx.gpr[5] = (0u | 268u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DB288u) goto L_088DB288;
    return;
L_088DB288:
    ctx.gpr[4] = (0u | 25u);
    ctx.gpr[5] = (ctx.gpr[2] << 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088DB2F0;
      }
      goto L_088DB2B4;
    }
L_088DB2B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13879));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088DB2F0;
L_088DB2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB30Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088DB30Cu) goto L_088DB30C;
    return;
L_088DB30C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB368;
      }
      goto L_088DB320;
    }
L_088DB320:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB338u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088DB338u) goto L_088DB338;
    return;
L_088DB338:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB368;
      }
      goto L_088DB348;
    }
L_088DB348:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DB368u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088DB368u) goto L_088DB368;
    return;
L_088DB368:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1C8;
      }
      goto L_088DB37C;
    }
L_088DB37C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB3C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26314)));
    ctx.gpr[17] = (ctx.gpr[28] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8648)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[21] = (ctx.gpr[20] << 2u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088DB438;
      }
      goto L_088DB41C;
    }
L_088DB41C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB438;
      }
      goto L_088DB428;
    }
L_088DB428:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB434u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 474u, 0x088CA5E4u>(ctx, &aot_mem) && ctx.pc == 0x088DB434u) goto L_088DB434;
    return;
L_088DB434:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26268)));
    goto L_088DB438;
L_088DB438:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26248)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088DB454;
      }
      goto L_088DB44C;
    }
L_088DB44C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB454;
    }
L_088DB454:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB484;
      }
      goto L_088DB45C;
    }
L_088DB45C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DB4BC;
      }
      goto L_088DB464;
    }
L_088DB464:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DB474u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 497u, 0x0880A350u>(ctx, &aot_mem) && ctx.pc == 0x088DB474u) goto L_088DB474;
    return;
L_088DB474:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB4C4;
      }
      goto L_088DB47C;
    }
L_088DB47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB4D0;
      }
      goto L_088DB484;
    }
L_088DB484:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB4D8;
      }
      goto L_088DB48C;
    }
L_088DB48C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB4BC;
      }
      goto L_088DB494;
    }
L_088DB494:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB4A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 502u, 0x0880A390u>(ctx, &aot_mem) && ctx.pc == 0x088DB4A8u) goto L_088DB4A8;
    return;
L_088DB4A8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB4E0;
      }
      goto L_088DB4B4;
    }
L_088DB4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB504;
      }
      goto L_088DB4BC;
    }
L_088DB4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB4C4;
    }
L_088DB4C4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23531), static_cast<std::uint8_t>(0u));
    goto L_088DB4D0;
L_088DB4D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB4D8;
    }
L_088DB4D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26304)));
      if (branch_taken) {
          goto L_088DB560;
      }
      goto L_088DB4E0;
    }
L_088DB4E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB4FC;
      }
      goto L_088DB4F4;
    }
L_088DB4F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26304)));
      if (branch_taken) {
          goto L_088DB560;
      }
      goto L_088DB4FC;
    }
L_088DB4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB504;
    }
L_088DB504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23531)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23531), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23531)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 480 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB548;
      }
      goto L_088DB520;
    }
L_088DB520:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23834), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23531), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23526), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8648)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB558;
      }
      goto L_088DB540;
    }
L_088DB540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB548;
    }
L_088DB548:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26248)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB558u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 497u, 0x0880A350u>(ctx, &aot_mem) && ctx.pc == 0x088DB558u) goto L_088DB558;
    return;
L_088DB558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB560;
    }
L_088DB560:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB568;
    }
L_088DB568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB57C;
      }
      goto L_088DB574;
    }
L_088DB574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 19u);
      if (branch_taken) {
          goto L_088DB580;
      }
      goto L_088DB57C;
    }
L_088DB57C:
    ctx.gpr[18] = (0u | 22u);
    goto L_088DB580;
L_088DB580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23834)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB638;
      }
      goto L_088DB58C;
    }
L_088DB58C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB5D0;
      }
      goto L_088DB598;
    }
L_088DB598:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB5A4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 435u, 0x088CA378u>(ctx, &aot_mem) && ctx.pc == 0x088DB5A4u) goto L_088DB5A4;
    return;
L_088DB5A4:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB5B4u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088DB5B4u) goto L_088DB5B4;
    return;
L_088DB5B4:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088DB5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088DB5C0u) goto L_088DB5C0;
    return;
L_088DB5C0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23531), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23526), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB5D0;
    }
L_088DB5D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB5DC;
    }
L_088DB5DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23526)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23526), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23526)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 90 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB62C;
      }
      goto L_088DB5F8;
    }
L_088DB5F8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB610u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 476u, 0x088CA6A8u>(ctx, &aot_mem) && ctx.pc == 0x088DB610u) goto L_088DB610;
    return;
L_088DB610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB618;
    }
L_088DB618:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB624u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 467u, 0x088CA578u>(ctx, &aot_mem) && ctx.pc == 0x088DB624u) goto L_088DB624;
    return;
L_088DB624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB62C;
    }
L_088DB62C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB638;
    }
L_088DB638:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26273)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB7C0;
      }
      goto L_088DB644;
    }
L_088DB644:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26248)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 67u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088DB66Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 474u, 0x0880A214u>(ctx, &aot_mem) && ctx.pc == 0x088DB66Cu) goto L_088DB66C;
    return;
L_088DB66C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB690;
      }
      goto L_088DB678;
    }
L_088DB678:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB688u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem) && ctx.pc == 0x088DB688u) goto L_088DB688;
    return;
L_088DB688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26240)));
      if (branch_taken) {
          goto L_088DB6B0;
      }
      goto L_088DB690;
    }
L_088DB690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26248)));
    ctx.gpr[31] = (0x088DB69Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DB69Cu) goto L_088DB69C;
    return;
L_088DB69C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB6ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem) && ctx.pc == 0x088DB6ACu) goto L_088DB6AC;
    return;
L_088DB6AC:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26240)));
    goto L_088DB6B0;
L_088DB6B0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB6F4;
      }
      goto L_088DB6B8;
    }
L_088DB6B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[31] = (0x088DB6CCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem) && ctx.pc == 0x088DB6CCu) goto L_088DB6CC;
    return;
L_088DB6CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB6DCu);
    ctx.gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem) && ctx.pc == 0x088DB6DCu) goto L_088DB6DC;
    return;
L_088DB6DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB6ECu);
    ctx.gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem) && ctx.pc == 0x088DB6ECu) goto L_088DB6EC;
    return;
L_088DB6EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB7A0;
      }
      goto L_088DB6F4;
    }
L_088DB6F4:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26160));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB70Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088DB70Cu) goto L_088DB70C;
    return;
L_088DB70C:
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB774;
      }
      goto L_088DB728;
    }
L_088DB728:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DB748u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088DB748u) goto L_088DB748;
    return;
L_088DB748:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088DB75Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 30u, 0x089B8234u>(ctx, &aot_mem) && ctx.pc == 0x088DB75Cu) goto L_088DB75C;
    return;
L_088DB75C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DB76Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 13u, 0x089B80C8u>(ctx, &aot_mem) && ctx.pc == 0x088DB76Cu) goto L_088DB76C;
    return;
L_088DB76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB77C;
      }
      goto L_088DB774;
    }
L_088DB774:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (0u | 63u);
    goto L_088DB77C;
L_088DB77C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DB790u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem) && ctx.pc == 0x088DB790u) goto L_088DB790;
    return;
L_088DB790:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DB7A0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem) && ctx.pc == 0x088DB7A0u) goto L_088DB7A0;
    return;
L_088DB7A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB7ACu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 546u, 0x0880A624u>(ctx, &aot_mem) && ctx.pc == 0x088DB7ACu) goto L_088DB7AC;
    return;
L_088DB7AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23536), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB7C0;
    }
L_088DB7C0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB7CC;
    }
L_088DB7CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB7F4;
      }
      goto L_088DB7D8;
    }
L_088DB7D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26248)));
    ctx.gpr[31] = (0x088DB7E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 493u, 0x088CA7A8u>(ctx, &aot_mem) && ctx.pc == 0x088DB7E4u) goto L_088DB7E4;
    return;
L_088DB7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB824;
      }
      goto L_088DB7EC;
    }
L_088DB7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB8B0;
      }
      goto L_088DB7F4;
    }
L_088DB7F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB800u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 435u, 0x088CA378u>(ctx, &aot_mem) && ctx.pc == 0x088DB800u) goto L_088DB800;
    return;
L_088DB800:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB810u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088DB810u) goto L_088DB810;
    return;
L_088DB810:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088DB81Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088DB81Cu) goto L_088DB81C;
    return;
L_088DB81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB824;
    }
L_088DB824:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB830;
    }
L_088DB830:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23536)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB848;
      }
      goto L_088DB83C;
    }
L_088DB83C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23536), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB848;
    }
L_088DB848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23834)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB874;
      }
      goto L_088DB854;
    }
L_088DB854:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26284)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26284), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088DB88C;
      }
      goto L_088DB86C;
    }
L_088DB86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB88C;
      }
      goto L_088DB874;
    }
L_088DB874:
    ctx.gpr[31] = (0x088DB87Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 527u, 0x08985EF0u>(ctx, &aot_mem) && ctx.pc == 0x088DB87Cu) goto L_088DB87C;
    return;
L_088DB87C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB88C;
      }
      goto L_088DB888;
    }
L_088DB888:
    ctx.gpr[23] = (0u | 1u);
    goto L_088DB88C;
L_088DB88C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB894;
    }
L_088DB894:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DB8A8u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088DB8A8u) goto L_088DB8A8;
    return;
L_088DB8A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(26284), 0u);
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB8B0;
    }
L_088DB8B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26278)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBA8C;
      }
      goto L_088DB8BC;
    }
L_088DB8BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23834)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088DB8F4;
      }
      goto L_088DB8CC;
    }
L_088DB8CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_088DB90C;
      }
      goto L_088DB8D8;
    }
L_088DB8D8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26284)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26284), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088DB90C;
      }
      goto L_088DB8EC;
    }
L_088DB8EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB90C;
      }
      goto L_088DB8F4;
    }
L_088DB8F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB900u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem) && ctx.pc == 0x088DB900u) goto L_088DB900;
    return;
L_088DB900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB90C;
      }
      goto L_088DB908;
    }
L_088DB908:
    ctx.gpr[23] = (0u | 1u);
    goto L_088DB90C;
L_088DB90C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB958;
      }
      goto L_088DB914;
    }
L_088DB914:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB92Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088DB92Cu) goto L_088DB92C;
    return;
L_088DB92C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(26284), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB93Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 476u, 0x088CA6A8u>(ctx, &aot_mem) && ctx.pc == 0x088DB93Cu) goto L_088DB93C;
    return;
L_088DB93C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB944;
    }
L_088DB944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB950u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 467u, 0x088CA578u>(ctx, &aot_mem) && ctx.pc == 0x088DB950u) goto L_088DB950;
    return;
L_088DB950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB958;
    }
L_088DB958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB97C;
      }
      goto L_088DB964;
    }
L_088DB964:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB974u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem) && ctx.pc == 0x088DB974u) goto L_088DB974;
    return;
L_088DB974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB97C;
    }
L_088DB97C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26248)));
    ctx.gpr[31] = (0x088DB988u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088DB988u) goto L_088DB988;
    return;
L_088DB988:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB998u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem) && ctx.pc == 0x088DB998u) goto L_088DB998;
    return;
L_088DB998:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2651)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB9C8;
      }
      goto L_088DB9B4;
    }
L_088DB9B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[31] = (0x088DB9C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem) && ctx.pc == 0x088DB9C8u) goto L_088DB9C8;
    return;
L_088DB9C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26240)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DB9D4;
    }
L_088DB9D4:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26160));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB9ECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088DB9ECu) goto L_088DB9EC;
    return;
L_088DB9EC:
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBA58;
      }
      goto L_088DBA08;
    }
L_088DBA08:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DBA28u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088DBA28u) goto L_088DBA28;
    return;
L_088DBA28:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DBA40u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 30u, 0x089B8234u>(ctx, &aot_mem) && ctx.pc == 0x088DBA40u) goto L_088DBA40;
    return;
L_088DBA40:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DBA50u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 13u, 0x089B80C8u>(ctx, &aot_mem) && ctx.pc == 0x088DBA50u) goto L_088DBA50;
    return;
L_088DBA50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DBA60;
      }
      goto L_088DBA58;
    }
L_088DBA58:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 63u);
    goto L_088DBA60;
L_088DBA60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DBA74u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem) && ctx.pc == 0x088DBA74u) goto L_088DBA74;
    return;
L_088DBA74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DBA84u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem) && ctx.pc == 0x088DBA84u) goto L_088DBA84;
    return;
L_088DBA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DBA8C;
    }
L_088DBA8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DBA98;
    }
L_088DBA98:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[28]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-23536)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-23536), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088DBAB8;
      }
      goto L_088DBAAC;
    }
L_088DBAAC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DBAB8;
    }
L_088DBAB8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x088DBAC4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem) && ctx.pc == 0x088DBAC4u) goto L_088DBAC4;
    return;
L_088DBAC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD8;
      }
      goto L_088DBACC;
    }
L_088DBACC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23536), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DBAD8;
L_088DBAD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBB08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23860)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23848)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    ctx.gpr[4] = (50306u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 20857u);
    ctx.gpr[5] = (17073u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 38535u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16592));
    ctx.gpr[5] = (16693u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 12059u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50299u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7799u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (17205u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 45679u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23820)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23800)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23804)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23812), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23796), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBBAC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBBF8;
      }
      goto L_088DBBD4;
    }
L_088DBBD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_088DBBF0;
    }
    goto L_088DBBF0;
L_088DBBF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088DBC20;
      }
      goto L_088DBBF8;
    }
L_088DBBF8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBC20;
      }
      goto L_088DBC0C;
    }
L_088DBC0C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_088DBC1C;
    }
    goto L_088DBC1C;
L_088DBC1C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088DBC20;
L_088DBC20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6052), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_088DBCE4;
      }
      goto L_088DBC98;
    }
L_088DBC98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBCDC;
      }
      goto L_088DBCAC;
    }
L_088DBCAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBCEC;
      }
      goto L_088DBCD4;
    }
L_088DBCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD44;
      }
      goto L_088DBCDC;
    }
L_088DBCDC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 19u, 0x088DC15Cu>(ctx, &aot_mem); return;
      }
      goto L_088DBCE4;
    }
L_088DBCE4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 19u, 0x088DC15Cu>(ctx, &aot_mem); return;
      }
      goto L_088DBCEC;
    }
L_088DBCEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD0C;
      }
      goto L_088DBCF4;
    }
L_088DBCF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBDB8;
      }
      goto L_088DBD0C;
    }
L_088DBD0C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(6052));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088DBD3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088DBC28;
L_088DBD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 19u, 0x088DC15Cu>(ctx, &aot_mem); return;
      }
      goto L_088DBD44;
    }
L_088DBD44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBDB8;
      }
      goto L_088DBD58;
    }
L_088DBD58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088DBDB8;
      }
      goto L_088DBD60;
    }
L_088DBD60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DBD80;
      }
      goto L_088DBD68;
    }
L_088DBD68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBDB8;
      }
      goto L_088DBD80;
    }
L_088DBD80:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(6052));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088DBDB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088DBC28;
L_088DBDB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 19u, 0x088DC15Cu>(ctx, &aot_mem); return;
      }
      goto L_088DBDB8;
    }
L_088DBDB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(94)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
      if (branch_taken) {
          goto L_088DBDE8;
      }
      goto L_088DBDDC;
    }
L_088DBDDC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088DBEA8;
      }
      goto L_088DBDE8;
    }
L_088DBDE8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBE04;
      }
      goto L_088DBDF4;
    }
L_088DBDF4:
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DBEA8;
      }
      goto L_088DBE04;
    }
L_088DBE04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x088DBE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088DBE28u) goto L_088DBE28;
    return;
L_088DBE28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23460)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23464)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DBE3Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBE3Cu) goto L_088DBE3C;
    return;
L_088DBE3C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DBE48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088DBE48u) goto L_088DBE48;
    return;
L_088DBE48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(95)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088DBE70;
      }
      goto L_088DBE58;
    }
L_088DBE58:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088DBEA4;
      }
      goto L_088DBE70;
    }
L_088DBE70:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_088DBE94;
      }
      goto L_088DBE7C;
    }
L_088DBE7C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088DBEA4;
      }
      goto L_088DBE94;
    }
L_088DBE94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    goto L_088DBEA4;
L_088DBEA4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088DBEA8;
L_088DBEA8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6056), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[23];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088DBECC;
      }
      goto L_088DBEB4;
    }
L_088DBEB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23504)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6056), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088DBEE4;
      }
      goto L_088DBECC;
    }
L_088DBECC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088DBEE4;
      }
      goto L_088DBEDC;
    }
L_088DBEDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23500)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088DBEE4;
L_088DBEE4:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 10u, 0x088DC094u>(ctx, &aot_mem); return;
      }
      goto L_088DBF0C;
    }
L_088DBF0C:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 11u, 0x088DC098u>(ctx, &aot_mem); return;
    }
    goto L_088DBF14;
L_088DBF14:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DBF64;
      }
      goto L_088DBF2C;
    }
L_088DBF2C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23512)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088DBF58;
    }
    goto L_088DBF58;
L_088DBF58:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 10u, 0x088DC094u>(ctx, &aot_mem); return;
      }
      goto L_088DBF64;
    }
L_088DBF64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088DBFC0;
      }
      goto L_088DBF80;
    }
L_088DBF80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(94)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23516)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = ctx.fpr[22] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[15] - ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[19];
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 2u, 0x088DC018u>(ctx, &aot_mem); return;
      }
      goto L_088DBFC0;
    }
L_088DBFC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 1u, 0x088DC004u>(ctx, &aot_mem); return;
      }
      goto L_088DBFC8;
    }
L_088DBFC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(94)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23516)));
    ctx.fpr[19] = ctx.fpr[22] - ctx.fpr[19];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 2u, 0x088DC018u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 1u, 0x088DC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0053(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0053_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_53(Runtime &runtime) {
    runtime.register_generated_unit(53u, 0x088D8000u, 16384u, &recomp_unit_0053, &recomp_unit_0053_entry);
    runtime.register_function(0x088D8004u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8010u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8018u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8028u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8040u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8048u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8054u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8060u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8064u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8070u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8078u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8080u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8090u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8098u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8114u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8134u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8140u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8148u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8154u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8160u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D817Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8180u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8188u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8190u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D819Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D820Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8210u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8218u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8220u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D822Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8238u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8258u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8260u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8268u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8274u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D829Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8300u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8308u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8314u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8320u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D833Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8340u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8348u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8350u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D835Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8370u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8380u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8388u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D840Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8424u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D842Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D843Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8444u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8454u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D845Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D846Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8474u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D848Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8494u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8500u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8508u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8518u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8520u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8530u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8540u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8548u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8550u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8570u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8580u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8588u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8598u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8654u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D865Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8664u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D866Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8680u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8688u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8690u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D870Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8728u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8760u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8778u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8784u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8798u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D881Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8830u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8878u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8924u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D893Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8948u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8954u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D896Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8994u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8ACCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D902Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D904Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9094u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9104u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9110u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9118u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9154u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9210u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D921Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D925Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9288u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9308u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9354u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9438u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9574u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9610u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D963Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D967Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9720u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9774u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D979Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9818u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D982Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D986Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9874u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9880u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9894u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9908u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9948u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D999Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ED0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ED8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA024u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA07Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA100u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA10Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA120u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA138u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA148u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA168u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA180u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA210u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA26Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA318u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA32Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA33Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA344u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA34Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA360u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA408u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA41Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA428u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA440u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA44Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA454u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA464u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA468u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA47Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA488u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA498u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA504u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA564u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA574u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA648u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA680u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA68Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA694u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA700u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA710u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA720u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA750u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA760u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA770u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA780u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA79Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA800u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA808u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA810u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA834u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA854u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA878u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA87Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA910u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA920u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA92Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA93Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA960u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA970u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA980u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAED0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB004u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB03Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB058u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB08Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB094u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB134u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB200u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB208u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB210u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB218u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB248u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB264u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB288u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB30Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB320u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB338u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB348u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB37Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB41Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB428u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB434u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB438u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB44Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB454u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB45Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB464u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB474u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB47Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB48Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB494u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB504u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB520u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB540u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB548u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB560u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB574u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB57Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB580u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB58Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB598u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB610u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB618u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB624u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB62Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB638u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB644u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB66Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB678u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB688u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB690u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB69Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB70Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB728u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB748u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB75Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB76Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB774u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB77Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB790u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB800u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB810u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB81Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB824u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB830u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB83Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB848u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB854u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB86Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB874u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB87Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB888u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB88Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB894u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB900u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB908u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB90Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB914u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB92Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB93Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB944u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB950u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB958u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB964u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB974u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB97Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB988u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB998u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBACCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFC8u, &recomp_unit_0053, "recomp_unit_0053");
}
} // namespace psprecomp
