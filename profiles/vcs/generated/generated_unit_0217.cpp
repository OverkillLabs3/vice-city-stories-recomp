#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0217[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 31, 0, 32, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 50, 0, 51, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 59, 0, 60, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68,
    0, 69, 0, 0, 0, 0, 70, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0,
    0, 82, 0, 83, 84, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 93, 0, 94, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0,
    0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 210, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0,
    218, 219, 0, 220, 0, 0, 221, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 235,
    0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0,
    269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276,
    0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 290, 0, 291,
    0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 298, 0, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0,
    0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 311, 0, 312, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0,
    316, 0, 317, 318, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 328, 0, 329, 0, 0,
    330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 333, 0, 0, 0, 0, 0, 0, 334, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0,
    0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 357,
    0, 0, 358, 0, 359, 0, 0, 360, 0, 361, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 389, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0,
    0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 398, 0, 399, 400, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0,
    414, 0, 415, 0, 0, 0, 416, 0, 417, 418, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 425,
    426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0,
    450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477,
    0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 487, 0,
    488, 0, 0, 0, 489, 0, 0, 0, 490, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497,
    0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 505, 0, 0, 506, 0, 0, 507, 0, 0,
    0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 515, 0, 0, 516, 517, 0, 0, 518, 0, 0, 519, 0, 0,
    520, 0, 0, 0, 521, 522, 0, 0, 523, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0,
    0, 0, 532, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 541, 542, 0, 0, 543, 544,
    0, 0, 0, 0, 0, 545, 546, 0, 0, 547, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 551, 552, 0, 0, 553, 0, 0, 554, 0, 555, 0,
    0, 556, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 561, 0, 0, 562, 563, 0, 0, 0, 0, 0, 564, 565, 0, 0, 566, 0, 567, 0,
    568, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0,
    0, 0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0,
    0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 0, 593,
    0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0,
    0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0,
    0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0,
    612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0,
    0, 0, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 626,
    0, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 631, 632, 0, 0, 0, 0, 0, 0, 633, 634, 0, 0, 0, 635,
    0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 649, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 0, 653, 654, 0,
    655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0,
    663, 664, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675,
    0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 682, 0, 0, 683, 0,
    0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 687, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691,
    0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0,
    0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 706, 0, 0, 0, 0, 0, 707,
    0, 0, 708, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 715, 0, 0, 0, 0, 716,
    0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0,
    0, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0,
    0, 729, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0, 733, 0, 0, 734, 0, 735, 736, 0, 737, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0,
    0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 0, 744, 745, 0, 746, 0, 747, 0, 0, 0,
    0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0,
    0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757,
    0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 771, 772, 0, 773, 0, 774, 0,
    775, 0, 0, 0, 0, 0, 776, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 782, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0,
    788, 0, 0, 0, 0, 0, 789, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 0, 0, 0, 795, 796, 0, 797, 0, 798, 799, 0, 0, 0, 800,
};
void recomp_unit_0217_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B68000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0217[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B68000;
    case 2u: goto L_08B68008;
    case 3u: goto L_08B68028;
    case 4u: goto L_08B68038;
    case 5u: goto L_08B6803C;
    case 6u: goto L_08B68044;
    case 7u: goto L_08B6804C;
    case 8u: goto L_08B68060;
    case 9u: goto L_08B6806C;
    case 10u: goto L_08B6809C;
    case 11u: goto L_08B680B4;
    case 12u: goto L_08B680D0;
    case 13u: goto L_08B680E4;
    case 14u: goto L_08B680F4;
    case 15u: goto L_08B68130;
    case 16u: goto L_08B6814C;
    case 17u: goto L_08B68164;
    case 18u: goto L_08B68184;
    case 19u: goto L_08B68190;
    case 20u: goto L_08B681A8;
    case 21u: goto L_08B681B4;
    case 22u: goto L_08B681CC;
    case 23u: goto L_08B681F0;
    case 24u: goto L_08B6820C;
    case 25u: goto L_08B68224;
    case 26u: goto L_08B68234;
    case 27u: goto L_08B68240;
    case 28u: goto L_08B68248;
    case 29u: goto L_08B6825C;
    case 30u: goto L_08B68268;
    case 31u: goto L_08B6826C;
    case 32u: goto L_08B68274;
    case 33u: goto L_08B6827C;
    case 34u: goto L_08B68290;
    case 35u: goto L_08B682AC;
    case 36u: goto L_08B682B8;
    case 37u: goto L_08B682C0;
    case 38u: goto L_08B682C4;
    case 39u: goto L_08B682CC;
    case 40u: goto L_08B682D8;
    case 41u: goto L_08B682EC;
    case 42u: goto L_08B68308;
    case 43u: goto L_08B68314;
    case 44u: goto L_08B68320;
    case 45u: goto L_08B68328;
    case 46u: goto L_08B6833C;
    case 47u: goto L_08B68358;
    case 48u: goto L_08B68364;
    case 49u: goto L_08B6836C;
    case 50u: goto L_08B68370;
    case 51u: goto L_08B68378;
    case 52u: goto L_08B68384;
    case 53u: goto L_08B68398;
    case 54u: goto L_08B683B4;
    case 55u: goto L_08B683BC;
    case 56u: goto L_08B683CC;
    case 57u: goto L_08B683D8;
    case 58u: goto L_08B683E0;
    case 59u: goto L_08B683E4;
    case 60u: goto L_08B683EC;
    case 61u: goto L_08B683F4;
    case 62u: goto L_08B68408;
    case 63u: goto L_08B68438;
    case 64u: goto L_08B68454;
    case 65u: goto L_08B68464;
    case 66u: goto L_08B6846C;
    case 67u: goto L_08B68474;
    case 68u: goto L_08B6847C;
    case 69u: goto L_08B68484;
    case 70u: goto L_08B68498;
    case 71u: goto L_08B6849C;
    case 72u: goto L_08B684A4;
    case 73u: goto L_08B684AC;
    case 74u: goto L_08B684B4;
    case 75u: goto L_08B684BC;
    case 76u: goto L_08B684C4;
    case 77u: goto L_08B684CC;
    case 78u: goto L_08B684DC;
    case 79u: goto L_08B684E8;
    case 80u: goto L_08B684F0;
    case 81u: goto L_08B684F8;
    case 82u: goto L_08B68504;
    case 83u: goto L_08B6850C;
    case 84u: goto L_08B68510;
    case 85u: goto L_08B68518;
    case 86u: goto L_08B68520;
    case 87u: goto L_08B6852C;
    case 88u: goto L_08B68534;
    case 89u: goto L_08B6853C;
    case 90u: goto L_08B68544;
    case 91u: goto L_08B68558;
    case 92u: goto L_08B68564;
    case 93u: goto L_08B68568;
    case 94u: goto L_08B68570;
    case 95u: goto L_08B68578;
    case 96u: goto L_08B685A0;
    case 97u: goto L_08B685EC;
    case 98u: goto L_08B6860C;
    case 99u: goto L_08B6861C;
    case 100u: goto L_08B68628;
    case 101u: goto L_08B68634;
    case 102u: goto L_08B6863C;
    case 103u: goto L_08B68640;
    case 104u: goto L_08B68660;
    case 105u: goto L_08B68670;
    case 106u: goto L_08B68680;
    case 107u: goto L_08B6868C;
    case 108u: goto L_08B68694;
    case 109u: goto L_08B6869C;
    case 110u: goto L_08B686A4;
    case 111u: goto L_08B686B0;
    case 112u: goto L_08B686BC;
    case 113u: goto L_08B686C4;
    case 114u: goto L_08B686C8;
    case 115u: goto L_08B686E4;
    case 116u: goto L_08B68708;
    case 117u: goto L_08B68728;
    case 118u: goto L_08B68734;
    case 119u: goto L_08B68740;
    case 120u: goto L_08B68748;
    case 121u: goto L_08B6876C;
    case 122u: goto L_08B68788;
    case 123u: goto L_08B68794;
    case 124u: goto L_08B687A8;
    case 125u: goto L_08B687B4;
    case 126u: goto L_08B687BC;
    case 127u: goto L_08B687C0;
    case 128u: goto L_08B687C8;
    case 129u: goto L_08B687D0;
    case 130u: goto L_08B687E4;
    case 131u: goto L_08B6881C;
    case 132u: goto L_08B68824;
    case 133u: goto L_08B68828;
    case 134u: goto L_08B68838;
    case 135u: goto L_08B68850;
    case 136u: goto L_08B68868;
    case 137u: goto L_08B6887C;
    case 138u: goto L_08B6888C;
    case 139u: goto L_08B68890;
    case 140u: goto L_08B688C4;
    case 141u: goto L_08B68928;
    case 142u: goto L_08B68940;
    case 143u: goto L_08B68944;
    case 144u: goto L_08B68954;
    case 145u: goto L_08B68968;
    case 146u: goto L_08B68978;
    case 147u: goto L_08B68984;
    case 148u: goto L_08B68998;
    case 149u: goto L_08B689A4;
    case 150u: goto L_08B689C8;
    case 151u: goto L_08B689D4;
    case 152u: goto L_08B689DC;
    case 153u: goto L_08B689EC;
    case 154u: goto L_08B68A00;
    case 155u: goto L_08B68A7C;
    case 156u: goto L_08B68AF8;
    case 157u: goto L_08B68CC4;
    case 158u: goto L_08B68CC8;
    case 159u: goto L_08B68CEC;
    case 160u: goto L_08B68D14;
    case 161u: goto L_08B68D2C;
    case 162u: goto L_08B68D54;
    case 163u: goto L_08B68D5C;
    case 164u: goto L_08B68DB0;
    case 165u: goto L_08B68DB8;
    case 166u: goto L_08B68E44;
    case 167u: goto L_08B68E4C;
    case 168u: goto L_08B68E58;
    case 169u: goto L_08B68E60;
    case 170u: goto L_08B68E74;
    case 171u: goto L_08B68E98;
    case 172u: goto L_08B68ECC;
    case 173u: goto L_08B6908C;
    case 174u: goto L_08B69090;
    case 175u: goto L_08B690B4;
    case 176u: goto L_08B690DC;
    case 177u: goto L_08B690F4;
    case 178u: goto L_08B6911C;
    case 179u: goto L_08B69124;
    case 180u: goto L_08B69134;
    case 181u: goto L_08B69268;
    case 182u: goto L_08B6927C;
    case 183u: goto L_08B692C8;
    case 184u: goto L_08B692E4;
    case 185u: goto L_08B692EC;
    case 186u: goto L_08B69310;
    case 187u: goto L_08B69448;
    case 188u: goto L_08B694CC;
    case 189u: goto L_08B694F8;
    case 190u: goto L_08B69608;
    case 191u: goto L_08B6960C;
    case 192u: goto L_08B69624;
    case 193u: goto L_08B6964C;
    case 194u: goto L_08B69664;
    case 195u: goto L_08B69674;
    case 196u: goto L_08B6969C;
    case 197u: goto L_08B6971C;
    case 198u: goto L_08B69748;
    case 199u: goto L_08B69858;
    case 200u: goto L_08B6985C;
    case 201u: goto L_08B69874;
    case 202u: goto L_08B6989C;
    case 203u: goto L_08B698B4;
    case 204u: goto L_08B698CC;
    case 205u: goto L_08B698F0;
    case 206u: goto L_08B6991C;
    case 207u: goto L_08B69940;
    case 208u: goto L_08B69964;
    case 209u: goto L_08B69990;
    case 210u: goto L_08B699A0;
    case 211u: goto L_08B699A4;
    case 212u: goto L_08B699AC;
    case 213u: goto L_08B699B8;
    case 214u: goto L_08B699C0;
    case 215u: goto L_08B699D4;
    case 216u: goto L_08B699DC;
    case 217u: goto L_08B699EC;
    case 218u: goto L_08B69A00;
    case 219u: goto L_08B69A04;
    case 220u: goto L_08B69A0C;
    case 221u: goto L_08B69A18;
    case 222u: goto L_08B69A1C;
    case 223u: goto L_08B69A24;
    case 224u: goto L_08B69A2C;
    case 225u: goto L_08B69A34;
    case 226u: goto L_08B69A3C;
    case 227u: goto L_08B69A44;
    case 228u: goto L_08B69A48;
    case 229u: goto L_08B69A50;
    case 230u: goto L_08B69A88;
    case 231u: goto L_08B69AC8;
    case 232u: goto L_08B69AD8;
    case 233u: goto L_08B69AE0;
    case 234u: goto L_08B69AEC;
    case 235u: goto L_08B69AFC;
    case 236u: goto L_08B69B08;
    case 237u: goto L_08B69B10;
    case 238u: goto L_08B69B24;
    case 239u: goto L_08B69B2C;
    case 240u: goto L_08B69B5C;
    case 241u: goto L_08B69B78;
    case 242u: goto L_08B69B80;
    case 243u: goto L_08B69BB4;
    case 244u: goto L_08B69BEC;
    case 245u: goto L_08B69BFC;
    case 246u: goto L_08B69C04;
    case 247u: goto L_08B69C14;
    case 248u: goto L_08B69C30;
    case 249u: goto L_08B69C4C;
    case 250u: goto L_08B69C64;
    case 251u: goto L_08B69C78;
    case 252u: goto L_08B69C94;
    case 253u: goto L_08B69CA0;
    case 254u: goto L_08B69CE4;
    case 255u: goto L_08B69CF4;
    case 256u: goto L_08B69CFC;
    case 257u: goto L_08B69D0C;
    case 258u: goto L_08B69D28;
    case 259u: goto L_08B69D44;
    case 260u: goto L_08B69D5C;
    case 261u: goto L_08B69D70;
    case 262u: goto L_08B69D8C;
    case 263u: goto L_08B69D98;
    case 264u: goto L_08B69E04;
    case 265u: goto L_08B69E2C;
    case 266u: goto L_08B69E40;
    case 267u: goto L_08B69E60;
    case 268u: goto L_08B69E70;
    case 269u: goto L_08B69E80;
    case 270u: goto L_08B69E88;
    case 271u: goto L_08B69EAC;
    case 272u: goto L_08B69EC4;
    case 273u: goto L_08B69ED4;
    case 274u: goto L_08B69EDC;
    case 275u: goto L_08B69EEC;
    case 276u: goto L_08B69EFC;
    case 277u: goto L_08B69F0C;
    case 278u: goto L_08B69F18;
    case 279u: goto L_08B69F30;
    case 280u: goto L_08B69F48;
    case 281u: goto L_08B69F58;
    case 282u: goto L_08B69F68;
    case 283u: goto L_08B69F70;
    case 284u: goto L_08B69F90;
    case 285u: goto L_08B69F98;
    case 286u: goto L_08B69FC0;
    case 287u: goto L_08B69FD8;
    case 288u: goto L_08B69FE0;
    case 289u: goto L_08B69FF0;
    case 290u: goto L_08B69FF4;
    case 291u: goto L_08B69FFC;
    case 292u: goto L_08B6A004;
    case 293u: goto L_08B6A00C;
    case 294u: goto L_08B6A05C;
    case 295u: goto L_08B6A08C;
    case 296u: goto L_08B6A098;
    case 297u: goto L_08B6A0B8;
    case 298u: goto L_08B6A0BC;
    case 299u: goto L_08B6A0C8;
    case 300u: goto L_08B6A0D0;
    case 301u: goto L_08B6A0DC;
    case 302u: goto L_08B6A0E4;
    case 303u: goto L_08B6A0F0;
    case 304u: goto L_08B6A0F8;
    case 305u: goto L_08B6A104;
    case 306u: goto L_08B6A10C;
    case 307u: goto L_08B6A114;
    case 308u: goto L_08B6A134;
    case 309u: goto L_08B6A13C;
    case 310u: goto L_08B6A144;
    case 311u: goto L_08B6A148;
    case 312u: goto L_08B6A150;
    case 313u: goto L_08B6A158;
    case 314u: goto L_08B6A168;
    case 315u: goto L_08B6A170;
    case 316u: goto L_08B6A180;
    case 317u: goto L_08B6A188;
    case 318u: goto L_08B6A18C;
    case 319u: goto L_08B6A198;
    case 320u: goto L_08B6A1A0;
    case 321u: goto L_08B6A1A8;
    case 322u: goto L_08B6A1D8;
    case 323u: goto L_08B6A1E4;
    case 324u: goto L_08B6A238;
    case 325u: goto L_08B6A254;
    case 326u: goto L_08B6A260;
    case 327u: goto L_08B6A268;
    case 328u: goto L_08B6A26C;
    case 329u: goto L_08B6A274;
    case 330u: goto L_08B6A280;
    case 331u: goto L_08B6A294;
    case 332u: goto L_08B6A2A8;
    case 333u: goto L_08B6A2AC;
    case 334u: goto L_08B6A2C8;
    case 335u: goto L_08B6A2CC;
    case 336u: goto L_08B6A2DC;
    case 337u: goto L_08B6A2E4;
    case 338u: goto L_08B6A2F8;
    case 339u: goto L_08B6A310;
    case 340u: goto L_08B6A320;
    case 341u: goto L_08B6A32C;
    case 342u: goto L_08B6A338;
    case 343u: goto L_08B6A344;
    case 344u: goto L_08B6A34C;
    case 345u: goto L_08B6A358;
    case 346u: goto L_08B6A368;
    case 347u: goto L_08B6A374;
    case 348u: goto L_08B6A384;
    case 349u: goto L_08B6A390;
    case 350u: goto L_08B6A39C;
    case 351u: goto L_08B6A3A4;
    case 352u: goto L_08B6A3B0;
    case 353u: goto L_08B6A3CC;
    case 354u: goto L_08B6A3E4;
    case 355u: goto L_08B6A3F0;
    case 356u: goto L_08B6A3F8;
    case 357u: goto L_08B6A3FC;
    case 358u: goto L_08B6A408;
    case 359u: goto L_08B6A410;
    case 360u: goto L_08B6A41C;
    case 361u: goto L_08B6A424;
    case 362u: goto L_08B6A428;
    case 363u: goto L_08B6A430;
    case 364u: goto L_08B6A438;
    case 365u: goto L_08B6A448;
    case 366u: goto L_08B6A450;
    case 367u: goto L_08B6A458;
    case 368u: goto L_08B6A46C;
    case 369u: goto L_08B6A494;
    case 370u: goto L_08B6A49C;
    case 371u: goto L_08B6A4AC;
    case 372u: goto L_08B6A4BC;
    case 373u: goto L_08B6A4C8;
    case 374u: goto L_08B6A4D4;
    case 375u: goto L_08B6A4F8;
    case 376u: goto L_08B6A504;
    case 377u: goto L_08B6A510;
    case 378u: goto L_08B6A518;
    case 379u: goto L_08B6A534;
    case 380u: goto L_08B6A538;
    case 381u: goto L_08B6A540;
    case 382u: goto L_08B6A548;
    case 383u: goto L_08B6A554;
    case 384u: goto L_08B6A578;
    case 385u: goto L_08B6A584;
    case 386u: goto L_08B6A590;
    case 387u: goto L_08B6A598;
    case 388u: goto L_08B6A5B4;
    case 389u: goto L_08B6A5B8;
    case 390u: goto L_08B6A5C0;
    case 391u: goto L_08B6A5DC;
    case 392u: goto L_08B6A5E8;
    case 393u: goto L_08B6A5F8;
    case 394u: goto L_08B6A608;
    case 395u: goto L_08B6A610;
    case 396u: goto L_08B6A620;
    case 397u: goto L_08B6A634;
    case 398u: goto L_08B6A638;
    case 399u: goto L_08B6A640;
    case 400u: goto L_08B6A644;
    case 401u: goto L_08B6A64C;
    case 402u: goto L_08B6A658;
    case 403u: goto L_08B6A668;
    case 404u: goto L_08B6A670;
    case 405u: goto L_08B6A67C;
    case 406u: goto L_08B6A68C;
    case 407u: goto L_08B6A69C;
    case 408u: goto L_08B6A6A4;
    case 409u: goto L_08B6A6B8;
    case 410u: goto L_08B6A6CC;
    case 411u: goto L_08B6A6D4;
    case 412u: goto L_08B6A6E4;
    case 413u: goto L_08B6A6EC;
    case 414u: goto L_08B6A700;
    case 415u: goto L_08B6A708;
    case 416u: goto L_08B6A718;
    case 417u: goto L_08B6A720;
    case 418u: goto L_08B6A724;
    case 419u: goto L_08B6A730;
    case 420u: goto L_08B6A740;
    case 421u: goto L_08B6A748;
    case 422u: goto L_08B6A75C;
    case 423u: goto L_08B6A764;
    case 424u: goto L_08B6A774;
    case 425u: goto L_08B6A77C;
    case 426u: goto L_08B6A780;
    case 427u: goto L_08B6A78C;
    case 428u: goto L_08B6A798;
    case 429u: goto L_08B6A7A4;
    case 430u: goto L_08B6A7AC;
    case 431u: goto L_08B6A7BC;
    case 432u: goto L_08B6A7C4;
    case 433u: goto L_08B6A7E4;
    case 434u: goto L_08B6A840;
    case 435u: goto L_08B6A848;
    case 436u: goto L_08B6A880;
    case 437u: goto L_08B6A884;
    case 438u: goto L_08B6A88C;
    case 439u: goto L_08B6A8B8;
    case 440u: goto L_08B6A8C0;
    case 441u: goto L_08B6A8C8;
    case 442u: goto L_08B6A8E8;
    case 443u: goto L_08B6A8FC;
    case 444u: goto L_08B6A910;
    case 445u: goto L_08B6A920;
    case 446u: goto L_08B6A92C;
    case 447u: goto L_08B6A938;
    case 448u: goto L_08B6A948;
    case 449u: goto L_08B6A968;
    case 450u: goto L_08B6A980;
    case 451u: goto L_08B6A990;
    case 452u: goto L_08B6A998;
    case 453u: goto L_08B6A9AC;
    case 454u: goto L_08B6A9C0;
    case 455u: goto L_08B6A9D0;
    case 456u: goto L_08B6A9DC;
    case 457u: goto L_08B6A9E8;
    case 458u: goto L_08B6A9F8;
    case 459u: goto L_08B6AA1C;
    case 460u: goto L_08B6AA20;
    case 461u: goto L_08B6AA3C;
    case 462u: goto L_08B6AA64;
    case 463u: goto L_08B6AA84;
    case 464u: goto L_08B6AA94;
    case 465u: goto L_08B6AAA0;
    case 466u: goto L_08B6AAA8;
    case 467u: goto L_08B6AAB0;
    case 468u: goto L_08B6AAC8;
    case 469u: goto L_08B6AB04;
    case 470u: goto L_08B6AB24;
    case 471u: goto L_08B6AB30;
    case 472u: goto L_08B6AB34;
    case 473u: goto L_08B6AB3C;
    case 474u: goto L_08B6AB44;
    case 475u: goto L_08B6AB6C;
    case 476u: goto L_08B6AB74;
    case 477u: goto L_08B6AB7C;
    case 478u: goto L_08B6AB98;
    case 479u: goto L_08B6ABAC;
    case 480u: goto L_08B6ABD4;
    case 481u: goto L_08B6ABF0;
    case 482u: goto L_08B6AC04;
    case 483u: goto L_08B6AC14;
    case 484u: goto L_08B6AC34;
    case 485u: goto L_08B6AC68;
    case 486u: goto L_08B6AC70;
    case 487u: goto L_08B6AC78;
    case 488u: goto L_08B6AC80;
    case 489u: goto L_08B6AC90;
    case 490u: goto L_08B6ACA0;
    case 491u: goto L_08B6ACA4;
    case 492u: goto L_08B6ACAC;
    case 493u: goto L_08B6ACC8;
    case 494u: goto L_08B6ACD4;
    case 495u: goto L_08B6ACDC;
    case 496u: goto L_08B6ACF4;
    case 497u: goto L_08B6ACFC;
    case 498u: goto L_08B6AD04;
    case 499u: goto L_08B6AD10;
    case 500u: goto L_08B6AD20;
    case 501u: goto L_08B6AD2C;
    case 502u: goto L_08B6AD34;
    case 503u: goto L_08B6AD50;
    case 504u: goto L_08B6AD58;
    case 505u: goto L_08B6AD5C;
    case 506u: goto L_08B6AD68;
    case 507u: goto L_08B6AD74;
    case 508u: goto L_08B6AD84;
    case 509u: goto L_08B6AD90;
    case 510u: goto L_08B6AD98;
    case 511u: goto L_08B6ADA0;
    case 512u: goto L_08B6ADAC;
    case 513u: goto L_08B6ADB8;
    case 514u: goto L_08B6ADC8;
    case 515u: goto L_08B6ADCC;
    case 516u: goto L_08B6ADD8;
    case 517u: goto L_08B6ADDC;
    case 518u: goto L_08B6ADE8;
    case 519u: goto L_08B6ADF4;
    case 520u: goto L_08B6AE00;
    case 521u: goto L_08B6AE10;
    case 522u: goto L_08B6AE14;
    case 523u: goto L_08B6AE20;
    case 524u: goto L_08B6AE24;
    case 525u: goto L_08B6AE30;
    case 526u: goto L_08B6AE3C;
    case 527u: goto L_08B6AE44;
    case 528u: goto L_08B6AE4C;
    case 529u: goto L_08B6AE58;
    case 530u: goto L_08B6AE64;
    case 531u: goto L_08B6AE74;
    case 532u: goto L_08B6AE88;
    case 533u: goto L_08B6AE8C;
    case 534u: goto L_08B6AE98;
    case 535u: goto L_08B6AEA4;
    case 536u: goto L_08B6AEAC;
    case 537u: goto L_08B6AEB8;
    case 538u: goto L_08B6AECC;
    case 539u: goto L_08B6AED4;
    case 540u: goto L_08B6AEE0;
    case 541u: goto L_08B6AEE8;
    case 542u: goto L_08B6AEEC;
    case 543u: goto L_08B6AEF8;
    case 544u: goto L_08B6AEFC;
    case 545u: goto L_08B6AF14;
    case 546u: goto L_08B6AF18;
    case 547u: goto L_08B6AF24;
    case 548u: goto L_08B6AF2C;
    case 549u: goto L_08B6AF34;
    case 550u: goto L_08B6AF40;
    case 551u: goto L_08B6AF54;
    case 552u: goto L_08B6AF58;
    case 553u: goto L_08B6AF64;
    case 554u: goto L_08B6AF70;
    case 555u: goto L_08B6AF78;
    case 556u: goto L_08B6AF84;
    case 557u: goto L_08B6AF98;
    case 558u: goto L_08B6AFA0;
    case 559u: goto L_08B6AFAC;
    case 560u: goto L_08B6AFB4;
    case 561u: goto L_08B6AFB8;
    case 562u: goto L_08B6AFC4;
    case 563u: goto L_08B6AFC8;
    case 564u: goto L_08B6AFE0;
    case 565u: goto L_08B6AFE4;
    case 566u: goto L_08B6AFF0;
    case 567u: goto L_08B6AFF8;
    case 568u: goto L_08B6B000;
    case 569u: goto L_08B6B008;
    case 570u: goto L_08B6B00C;
    case 571u: goto L_08B6B034;
    case 572u: goto L_08B6B070;
    case 573u: goto L_08B6B07C;
    case 574u: goto L_08B6B0A4;
    case 575u: goto L_08B6B0C0;
    case 576u: goto L_08B6B0C8;
    case 577u: goto L_08B6B0D8;
    case 578u: goto L_08B6B0E4;
    case 579u: goto L_08B6B108;
    case 580u: goto L_08B6B114;
    case 581u: goto L_08B6B124;
    case 582u: goto L_08B6B14C;
    case 583u: goto L_08B6B154;
    case 584u: goto L_08B6B170;
    case 585u: goto L_08B6B178;
    case 586u: goto L_08B6B184;
    case 587u: goto L_08B6B198;
    case 588u: goto L_08B6B1B4;
    case 589u: goto L_08B6B1BC;
    case 590u: goto L_08B6B1D8;
    case 591u: goto L_08B6B1E0;
    case 592u: goto L_08B6B1F0;
    case 593u: goto L_08B6B1FC;
    case 594u: goto L_08B6B20C;
    case 595u: goto L_08B6B23C;
    case 596u: goto L_08B6B260;
    case 597u: goto L_08B6B268;
    case 598u: goto L_08B6B278;
    case 599u: goto L_08B6B284;
    case 600u: goto L_08B6B290;
    case 601u: goto L_08B6B2B8;
    case 602u: goto L_08B6B2E0;
    case 603u: goto L_08B6B2F4;
    case 604u: goto L_08B6B310;
    case 605u: goto L_08B6B318;
    case 606u: goto L_08B6B334;
    case 607u: goto L_08B6B33C;
    case 608u: goto L_08B6B348;
    case 609u: goto L_08B6B354;
    case 610u: goto L_08B6B370;
    case 611u: goto L_08B6B378;
    case 612u: goto L_08B6B380;
    case 613u: goto L_08B6B390;
    case 614u: goto L_08B6B3B8;
    case 615u: goto L_08B6B3CC;
    case 616u: goto L_08B6B3E8;
    case 617u: goto L_08B6B3F0;
    case 618u: goto L_08B6B40C;
    case 619u: goto L_08B6B414;
    case 620u: goto L_08B6B41C;
    case 621u: goto L_08B6B428;
    case 622u: goto L_08B6B438;
    case 623u: goto L_08B6B444;
    case 624u: goto L_08B6B464;
    case 625u: goto L_08B6B478;
    case 626u: goto L_08B6B47C;
    case 627u: goto L_08B6B498;
    case 628u: goto L_08B6B49C;
    case 629u: goto L_08B6B4AC;
    case 630u: goto L_08B6B4B4;
    case 631u: goto L_08B6B4C8;
    case 632u: goto L_08B6B4CC;
    case 633u: goto L_08B6B4E8;
    case 634u: goto L_08B6B4EC;
    case 635u: goto L_08B6B4FC;
    case 636u: goto L_08B6B504;
    case 637u: goto L_08B6B514;
    case 638u: goto L_08B6B51C;
    case 639u: goto L_08B6B528;
    case 640u: goto L_08B6B540;
    case 641u: goto L_08B6B548;
    case 642u: goto L_08B6B550;
    case 643u: goto L_08B6B55C;
    case 644u: goto L_08B6B57C;
    case 645u: goto L_08B6B594;
    case 646u: goto L_08B6B59C;
    case 647u: goto L_08B6B5A4;
    case 648u: goto L_08B6B5AC;
    case 649u: goto L_08B6B5B0;
    case 650u: goto L_08B6B5CC;
    case 651u: goto L_08B6B5D4;
    case 652u: goto L_08B6B5E8;
    case 653u: goto L_08B6B5F4;
    case 654u: goto L_08B6B5F8;
    case 655u: goto L_08B6B600;
    case 656u: goto L_08B6B608;
    case 657u: goto L_08B6B620;
    case 658u: goto L_08B6B630;
    case 659u: goto L_08B6B644;
    case 660u: goto L_08B6B650;
    case 661u: goto L_08B6B66C;
    case 662u: goto L_08B6B678;
    case 663u: goto L_08B6B680;
    case 664u: goto L_08B6B684;
    case 665u: goto L_08B6B68C;
    case 666u: goto L_08B6B698;
    case 667u: goto L_08B6B6AC;
    case 668u: goto L_08B6B6D8;
    case 669u: goto L_08B6B704;
    case 670u: goto L_08B6B708;
    case 671u: goto L_08B6B718;
    case 672u: goto L_08B6B72C;
    case 673u: goto L_08B6B74C;
    case 674u: goto L_08B6B770;
    case 675u: goto L_08B6B77C;
    case 676u: goto L_08B6B788;
    case 677u: goto L_08B6B79C;
    case 678u: goto L_08B6B7BC;
    case 679u: goto L_08B6B7C0;
    case 680u: goto L_08B6B7D8;
    case 681u: goto L_08B6B7E4;
    case 682u: goto L_08B6B7EC;
    case 683u: goto L_08B6B7F8;
    case 684u: goto L_08B6B808;
    case 685u: goto L_08B6B824;
    case 686u: goto L_08B6B830;
    case 687u: goto L_08B6B838;
    case 688u: goto L_08B6B83C;
    case 689u: goto L_08B6B850;
    case 690u: goto L_08B6B870;
    case 691u: goto L_08B6B87C;
    case 692u: goto L_08B6B890;
    case 693u: goto L_08B6B8A8;
    case 694u: goto L_08B6B8C0;
    case 695u: goto L_08B6B8F4;
    case 696u: goto L_08B6B920;
    case 697u: goto L_08B6B92C;
    case 698u: goto L_08B6B93C;
    case 699u: goto L_08B6B950;
    case 700u: goto L_08B6B970;
    case 701u: goto L_08B6B994;
    case 702u: goto L_08B6B9A0;
    case 703u: goto L_08B6B9AC;
    case 704u: goto L_08B6B9C0;
    case 705u: goto L_08B6B9E0;
    case 706u: goto L_08B6B9E4;
    case 707u: goto L_08B6B9FC;
    case 708u: goto L_08B6BA08;
    case 709u: goto L_08B6BA10;
    case 710u: goto L_08B6BA1C;
    case 711u: goto L_08B6BA2C;
    case 712u: goto L_08B6BA50;
    case 713u: goto L_08B6BA5C;
    case 714u: goto L_08B6BA64;
    case 715u: goto L_08B6BA68;
    case 716u: goto L_08B6BA7C;
    case 717u: goto L_08B6BA9C;
    case 718u: goto L_08B6BAA8;
    case 719u: goto L_08B6BABC;
    case 720u: goto L_08B6BAD4;
    case 721u: goto L_08B6BAEC;
    case 722u: goto L_08B6BB10;
    case 723u: goto L_08B6BB1C;
    case 724u: goto L_08B6BB24;
    case 725u: goto L_08B6BB30;
    case 726u: goto L_08B6BB4C;
    case 727u: goto L_08B6BB68;
    case 728u: goto L_08B6BB74;
    case 729u: goto L_08B6BB84;
    case 730u: goto L_08B6BB90;
    case 731u: goto L_08B6BB98;
    case 732u: goto L_08B6BBA0;
    case 733u: goto L_08B6BBB0;
    case 734u: goto L_08B6BBBC;
    case 735u: goto L_08B6BBC4;
    case 736u: goto L_08B6BBC8;
    case 737u: goto L_08B6BBD0;
    case 738u: goto L_08B6BBD8;
    case 739u: goto L_08B6BBEC;
    case 740u: goto L_08B6BC08;
    case 741u: goto L_08B6BC34;
    case 742u: goto L_08B6BC3C;
    case 743u: goto L_08B6BC50;
    case 744u: goto L_08B6BC5C;
    case 745u: goto L_08B6BC60;
    case 746u: goto L_08B6BC68;
    case 747u: goto L_08B6BC70;
    case 748u: goto L_08B6BC84;
    case 749u: goto L_08B6BCA0;
    case 750u: goto L_08B6BCD0;
    case 751u: goto L_08B6BCF8;
    case 752u: goto L_08B6BD18;
    case 753u: goto L_08B6BD28;
    case 754u: goto L_08B6BD34;
    case 755u: goto L_08B6BD54;
    case 756u: goto L_08B6BD70;
    case 757u: goto L_08B6BD7C;
    case 758u: goto L_08B6BD88;
    case 759u: goto L_08B6BDAC;
    case 760u: goto L_08B6BDB4;
    case 761u: goto L_08B6BDD0;
    case 762u: goto L_08B6BDE8;
    case 763u: goto L_08B6BDFC;
    case 764u: goto L_08B6BE4C;
    case 765u: goto L_08B6BE58;
    case 766u: goto L_08B6BE60;
    case 767u: goto L_08B6BEA4;
    case 768u: goto L_08B6BEAC;
    case 769u: goto L_08B6BEC0;
    case 770u: goto L_08B6BEC8;
    case 771u: goto L_08B6BEE4;
    case 772u: goto L_08B6BEE8;
    case 773u: goto L_08B6BEF0;
    case 774u: goto L_08B6BEF8;
    case 775u: goto L_08B6BF00;
    case 776u: goto L_08B6BF18;
    case 777u: goto L_08B6BF1C;
    case 778u: goto L_08B6BF24;
    case 779u: goto L_08B6BF2C;
    case 780u: goto L_08B6BF34;
    case 781u: goto L_08B6BF3C;
    case 782u: goto L_08B6BF54;
    case 783u: goto L_08B6BF58;
    case 784u: goto L_08B6BF60;
    case 785u: goto L_08B6BF68;
    case 786u: goto L_08B6BF70;
    case 787u: goto L_08B6BF78;
    case 788u: goto L_08B6BF80;
    case 789u: goto L_08B6BF98;
    case 790u: goto L_08B6BF9C;
    case 791u: goto L_08B6BFA4;
    case 792u: goto L_08B6BFAC;
    case 793u: goto L_08B6BFB4;
    case 794u: goto L_08B6BFBC;
    case 795u: goto L_08B6BFD4;
    case 796u: goto L_08B6BFD8;
    case 797u: goto L_08B6BFE0;
    case 798u: goto L_08B6BFE8;
    case 799u: goto L_08B6BFEC;
    case 800u: goto L_08B6BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B68000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_08B68008;
L_08B68008:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B68038;
      }
      goto L_08B68028;
    }
L_08B68028:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6803C;
      }
      goto L_08B68038;
    }
L_08B68038:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08B6803C;
L_08B6803C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B68008;
      }
      goto L_08B68044;
    }
L_08B68044:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6804C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B6806C;
      }
      goto L_08B68060;
    }
L_08B68060:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B680E4;
      }
      goto L_08B6806C;
    }
L_08B6806C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B6809Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B6809Cu) goto L_08B6809C;
    return;
L_08B6809C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B680B4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B680B4u) goto L_08B680B4;
    return;
L_08B680B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08B680D0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B680D0u) goto L_08B680D0;
    return;
L_08B680D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08B680E4;
L_08B680E4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B680F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B68190;
      }
      goto L_08B68130;
    }
L_08B68130:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B6814Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 635u, 0x08ABEF54u>(ctx, &aot_mem) && ctx.pc == 0x08B6814Cu) goto L_08B6814C;
    return;
L_08B6814C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B681B4;
      }
      goto L_08B68164;
    }
L_08B68164:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B68184u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08B68184u) goto L_08B68184;
    return;
L_08B68184:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B681B4;
      }
      goto L_08B68190;
    }
L_08B68190:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B681A8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B681A8u) goto L_08B681A8;
    return;
L_08B681A8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B681B4;
L_08B681B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B681CCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B681CCu) goto L_08B681CC;
    return;
L_08B681CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B681F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6827C;
      }
      goto L_08B6820C;
    }
L_08B6820C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B68240;
      }
      goto L_08B68224;
    }
L_08B68224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B68240;
      }
      goto L_08B68234;
    }
L_08B68234:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B68240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B68240u) goto L_08B68240;
    return;
L_08B68240:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6826C;
      }
      goto L_08B68248;
    }
L_08B68248:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27644));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5892), 0u);
      if (branch_taken) {
          goto L_08B68268;
      }
      goto L_08B6825C;
    }
L_08B6825C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B68268;
L_08B68268:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6826C;
L_08B6826C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6827C;
      }
      goto L_08B68274;
    }
L_08B68274:
    ctx.gpr[31] = (0x08B6827Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6827Cu) goto L_08B6827C;
    return;
L_08B6827C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B68290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B682ACu);
    ctx.gpr[4] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B682ACu) goto L_08B682AC;
    return;
L_08B682AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B682C4;
      }
      goto L_08B682B8;
    }
L_08B682B8:
    ctx.gpr[31] = (0x08B682C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 566u, 0x088B6F88u>(ctx, &aot_mem) && ctx.pc == 0x08B682C0u) goto L_08B682C0;
    return;
L_08B682C0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B682C4;
L_08B682C4:
    ctx.gpr[31] = (0x08B682CCu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5896), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B682CCu) goto L_08B682CC;
    return;
L_08B682CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[31] = (0x08B682D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B682D8u) goto L_08B682D8;
    return;
L_08B682D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B682EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B68328;
      }
      goto L_08B68308;
    }
L_08B68308:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B68314u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 70u, 0x08990464u>(ctx, &aot_mem) && ctx.pc == 0x08B68314u) goto L_08B68314;
    return;
L_08B68314:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B68328;
      }
      goto L_08B68320;
    }
L_08B68320:
    ctx.gpr[31] = (0x08B68328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B68328u) goto L_08B68328;
    return;
L_08B68328:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6833C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B68358u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B68358u) goto L_08B68358;
    return;
L_08B68358:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B68370;
      }
      goto L_08B68364;
    }
L_08B68364:
    ctx.gpr[31] = (0x08B6836Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 557u, 0x0889E664u>(ctx, &aot_mem) && ctx.pc == 0x08B6836Cu) goto L_08B6836C;
    return;
L_08B6836C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B68370;
L_08B68370:
    ctx.gpr[31] = (0x08B68378u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5900), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B68378u) goto L_08B68378;
    return;
L_08B68378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    ctx.gpr[31] = (0x08B68384u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B68384u) goto L_08B68384;
    return;
L_08B68384:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B68398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B683F4;
      }
      goto L_08B683B4;
    }
L_08B683B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B683E4;
      }
      goto L_08B683BC;
    }
L_08B683BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B683E4;
      }
      goto L_08B683CC;
    }
L_08B683CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B683E4;
    }
    goto L_08B683D8;
L_08B683D8:
    ctx.gpr[31] = (0x08B683E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B683E0u) goto L_08B683E0;
    return;
L_08B683E0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B683E4;
L_08B683E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B683F4;
      }
      goto L_08B683EC;
    }
L_08B683EC:
    ctx.gpr[31] = (0x08B683F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B683F4u) goto L_08B683F4;
    return;
L_08B683F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B68408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B68578;
      }
      goto L_08B68438;
    }
L_08B68438:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27524));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6847C;
      }
      goto L_08B68454;
    }
L_08B68454:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6847C;
      }
      goto L_08B68464;
    }
L_08B68464:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6847C;
      }
      goto L_08B6846C;
    }
L_08B6846C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6847C;
      }
      goto L_08B68474;
    }
L_08B68474:
    ctx.gpr[31] = (0x08B6847Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6847Cu) goto L_08B6847C;
    return;
L_08B6847C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B684C4;
      }
      goto L_08B68484;
    }
L_08B68484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B684A4;
      }
      goto L_08B68498;
    }
L_08B68498:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B6849C;
L_08B6849C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B6849C;
      }
      goto L_08B684A4;
    }
L_08B684A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B684C4;
      }
      goto L_08B684AC;
    }
L_08B684AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B684C4;
      }
      goto L_08B684B4;
    }
L_08B684B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B684C4;
      }
      goto L_08B684BC;
    }
L_08B684BC:
    ctx.gpr[31] = (0x08B684C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B684C4u) goto L_08B684C4;
    return;
L_08B684C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6853C;
      }
      goto L_08B684CC;
    }
L_08B684CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B68518;
      }
      goto L_08B684DC;
    }
L_08B684DC:
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(25856));
    goto L_08B684E8;
L_08B684E8:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08B68510;
    }
    goto L_08B684F0;
L_08B684F0:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08B68510;
    }
    goto L_08B684F8;
L_08B684F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6850C;
      }
      goto L_08B68504;
    }
L_08B68504:
    ctx.gpr[31] = (0x08B6850Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B6850Cu) goto L_08B6850C;
    return;
L_08B6850C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_08B68510;
L_08B68510:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B684E8;
      }
      goto L_08B68518;
    }
L_08B68518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6853C;
      }
      goto L_08B68520;
    }
L_08B68520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6853C;
      }
      goto L_08B6852C;
    }
L_08B6852C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6853C;
      }
      goto L_08B68534;
    }
L_08B68534:
    ctx.gpr[31] = (0x08B6853Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6853Cu) goto L_08B6853C;
    return;
L_08B6853C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08B68568;
      }
      goto L_08B68544;
    }
L_08B68544:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27540));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5896), 0u);
      if (branch_taken) {
          goto L_08B68564;
      }
      goto L_08B68558;
    }
L_08B68558:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B68564;
L_08B68564:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08B68568;
L_08B68568:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B68578;
      }
      goto L_08B68570;
    }
L_08B68570:
    ctx.gpr[31] = (0x08B68578u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B68578u) goto L_08B68578;
    return;
L_08B68578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B685A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B686E4;
      }
      goto L_08B685EC;
    }
L_08B685EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08B6869C;
      }
      goto L_08B6860C;
    }
L_08B6860C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B68640;
      }
      goto L_08B6861C;
    }
L_08B6861C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08B68628u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B68628u) goto L_08B68628;
    return;
L_08B68628:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B68640;
      }
      goto L_08B68634;
    }
L_08B68634:
    ctx.gpr[31] = (0x08B6863Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B6863Cu) goto L_08B6863C;
    return;
L_08B6863C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B68640;
L_08B68640:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B68660u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 607u, 0x088B7308u>(ctx, &aot_mem) && ctx.pc == 0x08B68660u) goto L_08B68660;
    return;
L_08B68660:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B68680;
      }
      goto L_08B68670;
    }
L_08B68670:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B68680u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B68680u) goto L_08B68680;
    return;
L_08B68680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B686C8;
      }
      goto L_08B6868C;
    }
L_08B6868C:
    ctx.gpr[31] = (0x08B68694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B68694u) goto L_08B68694;
    return;
L_08B68694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B686C8;
      }
      goto L_08B6869C;
    }
L_08B6869C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B686C8;
      }
      goto L_08B686A4;
    }
L_08B686A4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08B686B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B686B0u) goto L_08B686B0;
    return;
L_08B686B0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B686C8;
      }
      goto L_08B686BC;
    }
L_08B686BC:
    ctx.gpr[31] = (0x08B686C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B686C4u) goto L_08B686C4;
    return;
L_08B686C4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B686C8;
L_08B686C8:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08B686E4;
L_08B686E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B68708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B68728u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B68728u) goto L_08B68728;
    return;
L_08B68728:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B68748;
      }
      goto L_08B68734;
    }
L_08B68734:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B68740u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B68740u) goto L_08B68740;
    return;
L_08B68740:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B68748;
L_08B68748:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6876C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B687D0;
      }
      goto L_08B68788;
    }
L_08B68788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B687C0;
      }
      goto L_08B68794;
    }
L_08B68794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B687A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B689A4;
L_08B687A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B687C0;
    }
    goto L_08B687B4;
L_08B687B4:
    ctx.gpr[31] = (0x08B687BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B687BCu) goto L_08B687BC;
    return;
L_08B687BC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B687C0;
L_08B687C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B687D0;
      }
      goto L_08B687C8;
    }
L_08B687C8:
    ctx.gpr[31] = (0x08B687D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B687D0u) goto L_08B687D0;
    return;
L_08B687D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B687E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] >> 6u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[8] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B68824;
      }
      goto L_08B6881C;
    }
L_08B6881C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B68828;
      }
      goto L_08B68824;
    }
L_08B68824:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08B68828;
L_08B68828:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B68890;
      }
      goto L_08B68838;
    }
L_08B68838:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08B68850u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B68850u) goto L_08B68850;
    return;
L_08B68850:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B6888C;
      }
      goto L_08B68868;
    }
L_08B68868:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B6887Cu);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B6887Cu) goto L_08B6887C;
    return;
L_08B6887C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08B6888C;
L_08B6888C:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B68890;
L_08B68890:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[16] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B688C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08B68928;
L_08B688C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 63u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B68928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B68998;
      }
      goto L_08B68940;
    }
L_08B68940:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B68944;
L_08B68944:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B68954u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B68954u) goto L_08B68954;
    return;
L_08B68954:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B68984;
      }
      goto L_08B68968;
    }
L_08B68968:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B68978u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B68978u) goto L_08B68978;
    return;
L_08B68978:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08B68984;
L_08B68984:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
        goto L_08B68944;
    }
    goto L_08B68998;
L_08B68998:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B689A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B689EC;
      }
      goto L_08B689C8;
    }
L_08B689C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B689DC;
      }
      goto L_08B689D4;
    }
L_08B689D4:
    ctx.gpr[31] = (0x08B689DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B689DCu) goto L_08B689DC;
    return;
L_08B689DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B689C8;
      }
      goto L_08B689EC;
    }
L_08B689EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B68A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-800));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(796), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B69268;
      }
      goto L_08B68A7C;
    }
L_08B68A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[10]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.gpr[11] = (ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B68DB8;
      }
      goto L_08B68AF8;
    }
L_08B68AF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(552));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(569), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(569))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(568), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B68D5C;
      }
      goto L_08B68CC4;
    }
L_08B68CC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B68CC8;
L_08B68CC8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B68D14;
      }
      goto L_08B68CEC;
    }
L_08B68CEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B68D14;
L_08B68D14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
        goto L_08B68D54;
    }
    goto L_08B68D2C;
L_08B68D2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08B68D54;
L_08B68D54:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B68CC8;
    }
    goto L_08B68D5C;
L_08B68D5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B68DB0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08B6927C;
L_08B68DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69268;
      }
      goto L_08B68DB8;
    }
L_08B68DB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[11] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B68E58;
      }
      goto L_08B68E44;
    }
L_08B68E44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B68E58;
      }
      goto L_08B68E4C;
    }
L_08B68E4C:
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B68ECC;
      }
      goto L_08B68E58;
    }
L_08B68E58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
      if (branch_taken) {
          goto L_08B68E74;
      }
      goto L_08B68E60;
    }
L_08B68E60:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 6u));
    ctx.gpr[9] = (ctx.gpr[9] >> 26u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
      if (branch_taken) {
          goto L_08B68E98;
      }
      goto L_08B68E74;
    }
L_08B68E74:
    ctx.gpr[9] = (0u - ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[9] = (ctx.gpr[9] >> 26u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[9] = (0u - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08B68E98;
L_08B68E98:
    ctx.gpr[2] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[9] = (ctx.gpr[9] << 6u);
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[9]);
    goto L_08B68ECC;
L_08B68ECC:
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[12]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(705), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(705))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(704), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(740));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(756), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(780), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(788)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[11] = (ctx.gpr[11] >> 30u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[10] = (ctx.gpr[10] << 6u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B69134;
      }
      goto L_08B6908C;
    }
L_08B6908C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08B69090;
L_08B69090:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B690DC;
      }
      goto L_08B690B4;
    }
L_08B690B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    goto L_08B690DC;
L_08B690DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_08B6911C;
    }
    goto L_08B690F4;
L_08B690F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_08B6911C;
L_08B6911C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) > 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08B69090;
    }
    goto L_08B69124;
L_08B69124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08B69134;
L_08B69134:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[11]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(452));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(484), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.gpr[31] = (0x08B69268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 175u, 0x088BE284u>(ctx, &aot_mem) && ctx.pc == 0x08B69268u) goto L_08B69268;
    return;
L_08B69268:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6927C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69310;
      }
      goto L_08B692C8;
    }
L_08B692C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69310;
      }
      goto L_08B692E4;
    }
L_08B692E4:
    ctx.gpr[31] = (0x08B692ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B69964;
L_08B692EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B69940;
      }
      goto L_08B69310;
    }
L_08B69310:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6969C;
      }
      goto L_08B69448;
    }
L_08B69448:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B694CCu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 54u, 0x088BC6BCu>(ctx, &aot_mem) && ctx.pc == 0x08B694CCu) goto L_08B694CC;
    return;
L_08B694CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[31] = (0x08B694F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 548u, 0x088BA9D4u>(ctx, &aot_mem) && ctx.pc == 0x08B694F8u) goto L_08B694F8;
    return;
L_08B694F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69664;
      }
      goto L_08B69608;
    }
L_08B69608:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B6960C;
L_08B6960C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B6964C;
    }
    goto L_08B69624;
L_08B69624:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B6964C;
L_08B6964C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6960C;
      }
      goto L_08B69664;
    }
L_08B69664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08B69674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B689A4;
L_08B69674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B698F0;
      }
      goto L_08B6969C;
    }
L_08B6969C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6971Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BCBDCu>(ctx, &aot_mem) && ctx.pc == 0x08B6971Cu) goto L_08B6971C;
    return;
L_08B6971C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[31] = (0x08B69748u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B69748u) goto L_08B69748;
    return;
L_08B69748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(348), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B698B4;
      }
      goto L_08B69858;
    }
L_08B69858:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B6985C;
L_08B6985C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B6989C;
    }
    goto L_08B69874;
L_08B69874:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B6989C;
L_08B6989C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6985C;
      }
      goto L_08B698B4;
    }
L_08B698B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B698CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B689A4;
L_08B698CC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B698F0;
L_08B698F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[31] = (0x08B6991Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 548u, 0x088BA9D4u>(ctx, &aot_mem) && ctx.pc == 0x08B6991Cu) goto L_08B6991C;
    return;
L_08B6991C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B69940;
      }
      goto L_08B69940;
    }
L_08B69940:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B69964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B699DC;
      }
      goto L_08B69990;
    }
L_08B69990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B699AC;
      }
      goto L_08B699A0;
    }
L_08B699A0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08B699A4;
L_08B699A4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B699A4;
      }
      goto L_08B699AC;
    }
L_08B699AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B699C0;
      }
      goto L_08B699B8;
    }
L_08B699B8:
    ctx.gpr[31] = (0x08B699C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B699C0u) goto L_08B699C0;
    return;
L_08B699C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B69990;
      }
      goto L_08B699D4;
    }
L_08B699D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08B699DC;
L_08B699DC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B69A3C;
      }
      goto L_08B699EC;
    }
L_08B699EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B69A0C;
      }
      goto L_08B69A00;
    }
L_08B69A00:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08B69A04;
L_08B69A04:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B69A04;
      }
      goto L_08B69A0C;
    }
L_08B69A0C:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B69A24;
      }
      goto L_08B69A18;
    }
L_08B69A18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08B69A1C;
L_08B69A1C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B69A1C;
      }
      goto L_08B69A24;
    }
L_08B69A24:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69A50;
      }
      goto L_08B69A2C;
    }
L_08B69A2C:
    ctx.gpr[31] = (0x08B69A34u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B69A34u) goto L_08B69A34;
    return;
L_08B69A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69A50;
      }
      goto L_08B69A3C;
    }
L_08B69A3C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B69A50;
      }
      goto L_08B69A44;
    }
L_08B69A44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08B69A48;
L_08B69A48:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B69A48;
      }
      goto L_08B69A50;
    }
L_08B69A50:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B69A88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
        goto L_08B69AE0;
    }
    goto L_08B69AC8;
L_08B69AC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08B69AD8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B69D98;
L_08B69AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B69AE0;
L_08B69AE0:
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B69AECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B69AECu) goto L_08B69AEC;
    return;
L_08B69AEC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B69B10;
      }
      goto L_08B69AFC;
    }
L_08B69AFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B69B08u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B69B08u) goto L_08B69B08;
    return;
L_08B69B08:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B69B10;
L_08B69B10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69B2C;
      }
      goto L_08B69B24;
    }
L_08B69B24:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08B69B2C;
L_08B69B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B69B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69B80;
      }
      goto L_08B69B78;
    }
L_08B69B78:
    ctx.gpr[31] = (0x08B69B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B69B80u) goto L_08B69B80;
    return;
L_08B69B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B69BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69C04;
      }
      goto L_08B69BEC;
    }
L_08B69BEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B69BFCu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08B69D98;
L_08B69BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B69C04;
L_08B69C04:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08B69C94;
      }
      goto L_08B69C14;
    }
L_08B69C14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B69C30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B69C30u) goto L_08B69C30;
    return;
L_08B69C30:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B69C78;
      }
      goto L_08B69C4C;
    }
L_08B69C4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B69C64u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B69C64u) goto L_08B69C64;
    return;
L_08B69C64:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B69C78;
L_08B69C78:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B69C14;
      }
      goto L_08B69C94;
    }
L_08B69C94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B69CA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B69CFC;
      }
      goto L_08B69CE4;
    }
L_08B69CE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B69CF4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B69D98;
L_08B69CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B69CFC;
L_08B69CFC:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08B69D8C;
      }
      goto L_08B69D0C;
    }
L_08B69D0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B69D28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B69D28u) goto L_08B69D28;
    return;
L_08B69D28:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B69D70;
      }
      goto L_08B69D44;
    }
L_08B69D44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B69D5Cu);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B69D5Cu) goto L_08B69D5C;
    return;
L_08B69D5C:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B69D70;
L_08B69D70:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B69D0C;
      }
      goto L_08B69D8C;
    }
L_08B69D8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B69D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_08B69EDC;
      }
      goto L_08B69E04;
    }
L_08B69E04:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
        goto L_08B69E2C;
    }
    goto L_08B69E2C;
L_08B69E2C:
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B69E88;
      }
      goto L_08B69E40;
    }
L_08B69E40:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[31] = (0x08B69E60u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 564u, 0x088BAB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B69E60u) goto L_08B69E60;
    return;
L_08B69E60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B6A00C;
      }
      goto L_08B69E70;
    }
L_08B69E70:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B69E80u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B69E80u) goto L_08B69E80;
    return;
L_08B69E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A00C;
      }
      goto L_08B69E88;
    }
L_08B69E88:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(15))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[31] = (0x08B69EACu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 564u, 0x088BAB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B69EACu) goto L_08B69EAC;
    return;
L_08B69EAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A00C;
      }
      goto L_08B69EC4;
    }
L_08B69EC4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08B69ED4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B69ED4u) goto L_08B69ED4;
    return;
L_08B69ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A00C;
      }
      goto L_08B69EDC;
    }
L_08B69EDC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B69EFC;
      }
      goto L_08B69EEC;
    }
L_08B69EEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B69F0C;
      }
      goto L_08B69EFC;
    }
L_08B69EFC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08B69F0C;
L_08B69F0C:
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B69F70;
      }
      goto L_08B69F18;
    }
L_08B69F18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[31] = (0x08B69F30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B69F30u) goto L_08B69F30;
    return;
L_08B69F30:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08B69F68;
      }
      goto L_08B69F48;
    }
L_08B69F48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B69F58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B69F58u) goto L_08B69F58;
    return;
L_08B69F58:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08B69F68;
L_08B69F68:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08B69F70;
L_08B69F70:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B69F98;
      }
      goto L_08B69F90;
    }
L_08B69F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08B69F98;
L_08B69F98:
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08B69FC0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 564u, 0x088BAB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B69FC0u) goto L_08B69FC0;
    return;
L_08B69FC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B69FE0;
      }
      goto L_08B69FD8;
    }
L_08B69FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B69FF4;
      }
      goto L_08B69FE0;
    }
L_08B69FE0:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B69FF0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B69FF0u) goto L_08B69FF0;
    return;
L_08B69FF0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08B69FF4;
L_08B69FF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A004;
      }
      goto L_08B69FFC;
    }
L_08B69FFC:
    ctx.gpr[31] = (0x08B6A004u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6A004u) goto L_08B6A004;
    return;
L_08B6A004:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    goto L_08B6A00C;
L_08B6A00C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A05C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B6A08Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 241u, 0x088BEA3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B6A08Cu) goto L_08B6A08C;
    return;
L_08B6A08C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B6A114;
      }
      goto L_08B6A0B8;
    }
L_08B6A0B8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B6A0BC;
L_08B6A0BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B6A0D0;
    }
    goto L_08B6A0C8;
L_08B6A0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A0D0;
    }
L_08B6A0D0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B6A0E4;
    }
    goto L_08B6A0DC;
L_08B6A0DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A0E4;
    }
L_08B6A0E4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B6A0F8;
    }
    goto L_08B6A0F0;
L_08B6A0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A0F8;
    }
L_08B6A0F8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B6A10C;
      }
      goto L_08B6A104;
    }
L_08B6A104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A10C;
    }
L_08B6A10C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B6A0BC;
      }
      goto L_08B6A114;
    }
L_08B6A114:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6A148;
      }
      goto L_08B6A134;
    }
L_08B6A134:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A13C;
    }
L_08B6A13C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6A18C;
      }
      goto L_08B6A144;
    }
L_08B6A144:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08B6A148;
L_08B6A148:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6A170;
      }
      goto L_08B6A150;
    }
L_08B6A150:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A158;
    }
L_08B6A158:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B6A170;
    }
    goto L_08B6A168;
L_08B6A168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A170;
    }
L_08B6A170:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B6A188;
    }
    goto L_08B6A180;
L_08B6A180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A188;
    }
L_08B6A188:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B6A18C;
L_08B6A18C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A198;
    }
L_08B6A198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6A1A0;
      }
      goto L_08B6A1A0;
    }
L_08B6A1A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A1A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B6A1D8u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 276u, 0x088BEDBCu>(ctx, &aot_mem) && ctx.pc == 0x08B6A1D8u) goto L_08B6A1D8;
    return;
L_08B6A1D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A1E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6A254u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B6A254u) goto L_08B6A254;
    return;
L_08B6A254:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A26C;
      }
      goto L_08B6A260;
    }
L_08B6A260:
    ctx.gpr[31] = (0x08B6A268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 304u, 0x088C5928u>(ctx, &aot_mem) && ctx.pc == 0x08B6A268u) goto L_08B6A268;
    return;
L_08B6A268:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B6A26C;
L_08B6A26C:
    ctx.gpr[31] = (0x08B6A274u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5904), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B6A274u) goto L_08B6A274;
    return;
L_08B6A274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5904)));
    ctx.gpr[31] = (0x08B6A280u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B6A280u) goto L_08B6A280;
    return;
L_08B6A280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A294:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6A2DC;
      }
      goto L_08B6A2A8;
    }
L_08B6A2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B6A2AC;
L_08B6A2AC:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A2CC;
      }
      goto L_08B6A2C8;
    }
L_08B6A2C8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B6A2CC;
L_08B6A2CC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A2AC;
      }
      goto L_08B6A2DC;
    }
L_08B6A2DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A2E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6A2F8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08B6A294;
L_08B6A2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B6A34C;
      }
      goto L_08B6A320;
    }
L_08B6A320:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32464));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A338;
      }
      goto L_08B6A32C;
    }
L_08B6A32C:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08B6A338;
L_08B6A338:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A34C;
      }
      goto L_08B6A344;
    }
L_08B6A344:
    ctx.gpr[31] = (0x08B6A34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6A34Cu) goto L_08B6A34C;
    return;
L_08B6A34C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B6A3A4;
      }
      goto L_08B6A368;
    }
L_08B6A368:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27492));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A390;
      }
      goto L_08B6A374;
    }
L_08B6A374:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32464));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A390;
      }
      goto L_08B6A384;
    }
L_08B6A384:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08B6A390;
L_08B6A390:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A3A4;
      }
      goto L_08B6A39C;
    }
L_08B6A39C:
    ctx.gpr[31] = (0x08B6A3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6A3A4u) goto L_08B6A3A4;
    return;
L_08B6A3A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A3B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6A458;
      }
      goto L_08B6A3CC;
    }
L_08B6A3CC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22752));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B6A408;
      }
      goto L_08B6A3E4;
    }
L_08B6A3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
        goto L_08B6A3FC;
    }
    goto L_08B6A3F0;
L_08B6A3F0:
    ctx.gpr[31] = (0x08B6A3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08B6A3F8u) goto L_08B6A3F8;
    return;
L_08B6A3F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_08B6A3FC;
L_08B6A3FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_08B6A408;
L_08B6A408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A430;
      }
      goto L_08B6A410;
    }
L_08B6A410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
        goto L_08B6A428;
    }
    goto L_08B6A41C;
L_08B6A41C:
    ctx.gpr[31] = (0x08B6A424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08B6A424u) goto L_08B6A424;
    return;
L_08B6A424:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_08B6A428;
L_08B6A428:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_08B6A430;
L_08B6A430:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6A448;
      }
      goto L_08B6A438;
    }
L_08B6A438:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6A448;
L_08B6A448:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A458;
      }
      goto L_08B6A450;
    }
L_08B6A450:
    ctx.gpr[31] = (0x08B6A458u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6A458u) goto L_08B6A458;
    return;
L_08B6A458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    goto L_08B6A494;
L_08B6A494:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6A5C0;
      }
      goto L_08B6A49C;
    }
L_08B6A49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A5C0;
      }
      goto L_08B6A4AC;
    }
L_08B6A4AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6A540;
      }
      goto L_08B6A4BC;
    }
L_08B6A4BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A4F8;
      }
      goto L_08B6A4C8;
    }
L_08B6A4C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A4F8;
      }
      goto L_08B6A4D4;
    }
L_08B6A4D4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6A538;
      }
      goto L_08B6A4F8;
    }
L_08B6A4F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_08B6A518;
    }
    goto L_08B6A504;
L_08B6A504:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B6A510u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A6D4;
L_08B6A510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08B6A518;
L_08B6A518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B6A534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B6A730;
L_08B6A534:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B6A538;
L_08B6A538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A5B8;
      }
      goto L_08B6A540;
    }
L_08B6A540:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A578;
      }
      goto L_08B6A548;
    }
L_08B6A548:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A578;
      }
      goto L_08B6A554;
    }
L_08B6A554:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6A5B8;
      }
      goto L_08B6A578;
    }
L_08B6A578:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_08B6A598;
    }
    goto L_08B6A584;
L_08B6A584:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B6A590u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A730;
L_08B6A590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08B6A598;
L_08B6A598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B6A5B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B6A6D4;
L_08B6A5B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B6A5B8;
L_08B6A5B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A494;
      }
      goto L_08B6A5C0;
    }
L_08B6A5C0:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
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
L_08B6A5DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A610;
      }
      goto L_08B6A5E8;
    }
L_08B6A5E8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A644;
      }
      goto L_08B6A5F8;
    }
L_08B6A5F8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A5F8;
      }
      goto L_08B6A608;
    }
L_08B6A608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A644;
      }
      goto L_08B6A610;
    }
L_08B6A610:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6A638;
      }
      goto L_08B6A620;
    }
L_08B6A620:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6A620;
      }
      goto L_08B6A634;
    }
L_08B6A634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B6A638;
L_08B6A638:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B6A644;
      }
      goto L_08B6A640;
    }
L_08B6A640:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08B6A644;
L_08B6A644:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A64C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A670;
      }
      goto L_08B6A658;
    }
L_08B6A658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6A670;
      }
      goto L_08B6A668;
    }
L_08B6A668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B6A6CC;
      }
      goto L_08B6A670;
    }
L_08B6A670:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A6A4;
      }
      goto L_08B6A67C;
    }
L_08B6A67C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A69C;
      }
      goto L_08B6A68C;
    }
L_08B6A68C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A68C;
      }
      goto L_08B6A69C;
    }
L_08B6A69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A6CC;
      }
      goto L_08B6A6A4;
    }
L_08B6A6A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B6A6CC;
      }
      goto L_08B6A6B8;
    }
L_08B6A6B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B6A6B8;
      }
      goto L_08B6A6CC;
    }
L_08B6A6CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A6D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B6A6EC;
      }
      goto L_08B6A6E4;
    }
L_08B6A6E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B6A6EC;
L_08B6A6EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6A708;
      }
      goto L_08B6A700;
    }
L_08B6A700:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A724;
      }
      goto L_08B6A708;
    }
L_08B6A708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6A720;
      }
      goto L_08B6A718;
    }
L_08B6A718:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A724;
      }
      goto L_08B6A720;
    }
L_08B6A720:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08B6A724;
L_08B6A724:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A730:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B6A748;
      }
      goto L_08B6A740;
    }
L_08B6A740:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B6A748;
L_08B6A748:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6A764;
      }
      goto L_08B6A75C;
    }
L_08B6A75C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A780;
      }
      goto L_08B6A764;
    }
L_08B6A764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6A77C;
      }
      goto L_08B6A774;
    }
L_08B6A774:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B6A780;
      }
      goto L_08B6A77C;
    }
L_08B6A77C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08B6A780;
L_08B6A780:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A78C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B6A798;
L_08B6A798:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B6A7C4;
      }
      goto L_08B6A7A4;
    }
L_08B6A7A4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A7BC;
      }
      goto L_08B6A7AC;
    }
L_08B6A7AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6A7C4;
      }
      goto L_08B6A7BC;
    }
L_08B6A7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6A840;
      }
      goto L_08B6A7C4;
    }
L_08B6A7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B6A798;
      }
      goto L_08B6A7E4;
    }
L_08B6A7E4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B6A840;
L_08B6A840:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A848:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 3344u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A884;
      }
      goto L_08B6A880;
    }
L_08B6A880:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B6A884;
L_08B6A884:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6A88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B6A8E8;
      }
      goto L_08B6A8B8;
    }
L_08B6A8B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A998;
      }
      goto L_08B6A8C0;
    }
L_08B6A8C0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A8E8;
      }
      goto L_08B6A8C8;
    }
L_08B6A8C8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A998;
      }
      goto L_08B6A8E8;
    }
L_08B6A8E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B6A8FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B6A8FCu) goto L_08B6A8FC;
    return;
L_08B6A8FC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B6A92C;
      }
      goto L_08B6A910;
    }
L_08B6A910:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B6A920u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B6A920u) goto L_08B6A920;
    return;
L_08B6A920:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B6A92C;
L_08B6A92C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A948;
      }
      goto L_08B6A938;
    }
L_08B6A938:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B6A948;
L_08B6A948:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6A980;
      }
      goto L_08B6A968;
    }
L_08B6A968:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B6AA20;
      }
      goto L_08B6A980;
    }
L_08B6A980:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B6AA20;
      }
      goto L_08B6A990;
    }
L_08B6A990:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B6AA20;
      }
      goto L_08B6A998;
    }
L_08B6A998:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B6A9ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B6A9ACu) goto L_08B6A9AC;
    return;
L_08B6A9AC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B6A9DC;
      }
      goto L_08B6A9C0;
    }
L_08B6A9C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B6A9D0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B6A9D0u) goto L_08B6A9D0;
    return;
L_08B6A9D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B6A9DC;
L_08B6A9DC:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6A9F8;
      }
      goto L_08B6A9E8;
    }
L_08B6A9E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B6A9F8;
L_08B6A9F8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6AA20;
      }
      goto L_08B6AA1C;
    }
L_08B6AA1C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B6AA20;
L_08B6AA20:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6AA3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08B6A46C;
L_08B6AA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6AA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6AAB0;
      }
      goto L_08B6AA84;
    }
L_08B6AA84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B6AA94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B6AA64;
L_08B6AA94:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6AAA8;
      }
      goto L_08B6AAA0;
    }
L_08B6AAA0:
    ctx.gpr[31] = (0x08B6AAA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6AAA8u) goto L_08B6AAA8;
    return;
L_08B6AAA8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B6AA84;
      }
      goto L_08B6AAB0;
    }
L_08B6AAB0:
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
L_08B6AAC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B6AB3C;
      }
      goto L_08B6AB04;
    }
L_08B6AB04:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B6AB30;
      }
      goto L_08B6AB24;
    }
L_08B6AB24:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6AB34;
      }
      goto L_08B6AB30;
    }
L_08B6AB30:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B6AB34;
L_08B6AB34:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AB04;
      }
      goto L_08B6AB3C;
    }
L_08B6AB3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B6ABAC;
      }
      goto L_08B6AB44;
    }
L_08B6AB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AB7C;
      }
      goto L_08B6AB6C;
    }
L_08B6AB6C:
    ctx.gpr[31] = (0x08B6AB74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B6A64C;
L_08B6AB74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B6ABAC;
      }
      goto L_08B6AB7C;
    }
L_08B6AB7C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B6AB98u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6A88C;
L_08B6AB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B6AC14;
      }
      goto L_08B6ABAC;
    }
L_08B6ABAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AC04;
      }
      goto L_08B6ABD4;
    }
L_08B6ABD4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B6ABF0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6A88C;
L_08B6ABF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B6AC14;
      }
      goto L_08B6AC04;
    }
L_08B6AC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B6AC14;
L_08B6AC14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6AC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B6AC70;
      }
      goto L_08B6AC68;
    }
L_08B6AC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6ACA4;
      }
      goto L_08B6AC70;
    }
L_08B6AC70:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AC80;
      }
      goto L_08B6AC78;
    }
L_08B6AC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6ACA4;
      }
      goto L_08B6AC80;
    }
L_08B6AC80:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6ACA0;
      }
      goto L_08B6AC90;
    }
L_08B6AC90:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AC90;
      }
      goto L_08B6ACA0;
    }
L_08B6ACA0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08B6ACA4;
L_08B6ACA4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AD50;
      }
      goto L_08B6ACAC;
    }
L_08B6ACAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6ACF4;
      }
      goto L_08B6ACC8;
    }
L_08B6ACC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6ACDC;
      }
      goto L_08B6ACD4;
    }
L_08B6ACD4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6ACDC;
L_08B6ACDC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6ACFC;
      }
      goto L_08B6ACF4;
    }
L_08B6ACF4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B6ACFC;
L_08B6ACFC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AD10;
      }
      goto L_08B6AD04;
    }
L_08B6AD04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6AD34;
      }
      goto L_08B6AD10;
    }
L_08B6AD10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AD2C;
      }
      goto L_08B6AD20;
    }
L_08B6AD20:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6AD34;
      }
      goto L_08B6AD2C;
    }
L_08B6AD2C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B6AD34;
L_08B6AD34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6AE24;
      }
      goto L_08B6AD50;
    }
L_08B6AD50:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6AD5C;
      }
      goto L_08B6AD58;
    }
L_08B6AD58:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_08B6AD5C;
L_08B6AD5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AD74;
      }
      goto L_08B6AD68;
    }
L_08B6AD68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6AD98;
      }
      goto L_08B6AD74;
    }
L_08B6AD74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AD90;
      }
      goto L_08B6AD84;
    }
L_08B6AD84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6AD98;
      }
      goto L_08B6AD90;
    }
L_08B6AD90:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B6AD98;
L_08B6AD98:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6ADDC;
      }
      goto L_08B6ADA0;
    }
L_08B6ADA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6ADB8;
      }
      goto L_08B6ADAC;
    }
L_08B6ADAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B6ADDC;
      }
      goto L_08B6ADB8;
    }
L_08B6ADB8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08B6ADDC;
    }
    goto L_08B6ADC8;
L_08B6ADC8:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08B6ADCC;
L_08B6ADCC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
        goto L_08B6ADCC;
    }
    goto L_08B6ADD8;
L_08B6ADD8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B6ADDC;
L_08B6ADDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AE24;
      }
      goto L_08B6ADE8;
    }
L_08B6ADE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AE00;
      }
      goto L_08B6ADF4;
    }
L_08B6ADF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6AE24;
      }
      goto L_08B6AE00;
    }
L_08B6AE00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08B6AE24;
    }
    goto L_08B6AE10;
L_08B6AE10:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B6AE14;
L_08B6AE14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08B6AE14;
    }
    goto L_08B6AE20;
L_08B6AE20:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B6AE24;
L_08B6AE24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B00C;
      }
      goto L_08B6AE30;
    }
L_08B6AE30:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B6AE3C;
L_08B6AE3C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6B000;
      }
      goto L_08B6AE44;
    }
L_08B6AE44:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AE58;
      }
      goto L_08B6AE4C;
    }
L_08B6AE4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6B000;
      }
      goto L_08B6AE58;
    }
L_08B6AE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6AF34;
      }
      goto L_08B6AE64;
    }
L_08B6AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AE8C;
      }
      goto L_08B6AE74;
    }
L_08B6AE74:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B6AE88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A6D4;
L_08B6AE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08B6AE8C;
L_08B6AE8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B6AEA4;
      }
      goto L_08B6AE98;
    }
L_08B6AE98:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6AECC;
      }
      goto L_08B6AEA4;
    }
L_08B6AEA4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AEB8;
      }
      goto L_08B6AEAC;
    }
L_08B6AEAC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6AECC;
      }
      goto L_08B6AEB8;
    }
L_08B6AEB8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6AF2C;
      }
      goto L_08B6AECC;
    }
L_08B6AECC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AEE0;
      }
      goto L_08B6AED4;
    }
L_08B6AED4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6AEFC;
      }
      goto L_08B6AEE0;
    }
L_08B6AEE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AEEC;
      }
      goto L_08B6AEE8;
    }
L_08B6AEE8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B6AEEC;
L_08B6AEEC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B6AEF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A730;
L_08B6AEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08B6AEFC;
L_08B6AEFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AF18;
      }
      goto L_08B6AF14;
    }
L_08B6AF14:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B6AF18;
L_08B6AF18:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B6AF24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A6D4;
L_08B6AF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B000;
      }
      goto L_08B6AF2C;
    }
L_08B6AF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AFF8;
      }
      goto L_08B6AF34;
    }
L_08B6AF34:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AF58;
      }
      goto L_08B6AF40;
    }
L_08B6AF40:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B6AF54u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A730;
L_08B6AF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08B6AF58;
L_08B6AF58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6AF70;
      }
      goto L_08B6AF64;
    }
L_08B6AF64:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6AF98;
      }
      goto L_08B6AF70;
    }
L_08B6AF70:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AF84;
      }
      goto L_08B6AF78;
    }
L_08B6AF78:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6AF98;
      }
      goto L_08B6AF84;
    }
L_08B6AF84:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6AFF8;
      }
      goto L_08B6AF98;
    }
L_08B6AF98:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AFAC;
      }
      goto L_08B6AFA0;
    }
L_08B6AFA0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B6AFC8;
      }
      goto L_08B6AFAC;
    }
L_08B6AFAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AFB8;
      }
      goto L_08B6AFB4;
    }
L_08B6AFB4:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B6AFB8;
L_08B6AFB8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B6AFC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A6D4;
L_08B6AFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08B6AFC8;
L_08B6AFC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AFE4;
      }
      goto L_08B6AFE0;
    }
L_08B6AFE0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B6AFE4;
L_08B6AFE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B6AFF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6A730;
L_08B6AFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B000;
      }
      goto L_08B6AFF8;
    }
L_08B6AFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6AE3C;
      }
      goto L_08B6B000;
    }
L_08B6B000:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B00C;
      }
      goto L_08B6B008;
    }
L_08B6B008:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B6B00C;
L_08B6B00C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B6B1FC;
      }
      goto L_08B6B070;
    }
L_08B6B070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B0C8;
      }
      goto L_08B6B07C;
    }
L_08B6B07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B0E4;
      }
      goto L_08B6B0A4;
    }
L_08B6B0A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B6B0C0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6A88C;
L_08B6B0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B0C8;
    }
L_08B6B0C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6B0D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B6AAC8;
L_08B6B0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B0E4;
    }
L_08B6B0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B178;
      }
      goto L_08B6B108;
    }
L_08B6B108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B6B114u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08B6A5DC;
L_08B6B114:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6B154;
      }
      goto L_08B6B124;
    }
L_08B6B124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B184;
      }
      goto L_08B6B14C;
    }
L_08B6B14C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B1E0;
      }
      goto L_08B6B154;
    }
L_08B6B154:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6B170u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B6A88C;
L_08B6B170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B178;
    }
L_08B6B178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B184;
    }
L_08B6B184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B1BC;
      }
      goto L_08B6B198;
    }
L_08B6B198:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6B1B4u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B6A88C;
L_08B6B1B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B1BC;
    }
L_08B6B1BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B6B1D8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6A88C;
L_08B6B1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B1E0;
    }
L_08B6B1E0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6B1F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B6AAC8;
L_08B6B1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B1FC;
    }
L_08B6B1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6B284;
      }
      goto L_08B6B20C;
    }
L_08B6B20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B268;
      }
      goto L_08B6B23C;
    }
L_08B6B23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B6B260u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B6A88C;
L_08B6B260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B268;
    }
L_08B6B268:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6B278u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B6AAC8;
L_08B6B278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B284;
    }
L_08B6B284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B6B290u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08B6A64C;
L_08B6B290:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B33C;
      }
      goto L_08B6B2B8;
    }
L_08B6B2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B33C;
      }
      goto L_08B6B2E0;
    }
L_08B6B2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B318;
      }
      goto L_08B6B2F4;
    }
L_08B6B2F4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6B310u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B6A88C;
L_08B6B310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B318;
    }
L_08B6B318:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B6B334u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6A88C;
L_08B6B334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B33C;
    }
L_08B6B33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B6B348u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_08B6A5DC;
L_08B6B348:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6B370;
      }
      goto L_08B6B354;
    }
L_08B6B354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B6B370;
L_08B6B370:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B414;
      }
      goto L_08B6B378;
    }
L_08B6B378:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B414;
      }
      goto L_08B6B380;
    }
L_08B6B380:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B6B3B8;
      }
      goto L_08B6B390;
    }
L_08B6B390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B414;
      }
      goto L_08B6B3B8;
    }
L_08B6B3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B3F0;
      }
      goto L_08B6B3CC;
    }
L_08B6B3CC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B6B3E8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B6A88C;
L_08B6B3E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B3F0;
    }
L_08B6B3F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B6B40Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B6A88C;
L_08B6B40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B414;
    }
L_08B6B414:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6B428;
      }
      goto L_08B6B41C;
    }
L_08B6B41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B428;
    }
L_08B6B428:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B6B438u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B6AAC8;
L_08B6B438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6B444;
      }
      goto L_08B6B444;
    }
L_08B6B444:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6B4AC;
      }
      goto L_08B6B478;
    }
L_08B6B478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B6B47C;
L_08B6B47C:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B49C;
      }
      goto L_08B6B498;
    }
L_08B6B498:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B6B49C;
L_08B6B49C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B47C;
      }
      goto L_08B6B4AC;
    }
L_08B6B4AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B4B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6B4FC;
      }
      goto L_08B6B4C8;
    }
L_08B6B4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B6B4CC;
L_08B6B4CC:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B4EC;
      }
      goto L_08B6B4E8;
    }
L_08B6B4E8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B6B4EC;
L_08B6B4EC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B4CC;
      }
      goto L_08B6B4FC;
    }
L_08B6B4FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B550;
      }
      goto L_08B6B514;
    }
L_08B6B514:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
        goto L_08B6B540;
    }
    goto L_08B6B51C;
L_08B6B51C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
        goto L_08B6B540;
    }
    goto L_08B6B528;
L_08B6B528:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08B6B540;
L_08B6B540:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B550;
      }
      goto L_08B6B548;
    }
L_08B6B548:
    ctx.gpr[31] = (0x08B6B550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6B550u) goto L_08B6B550;
    return;
L_08B6B550:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B55C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6B608;
      }
      goto L_08B6B57C;
    }
L_08B6B57C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27316));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6908));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(6900));
      if (branch_taken) {
          goto L_08B6B59C;
      }
      goto L_08B6B594;
    }
L_08B6B594:
    ctx.gpr[31] = (0x08B6B59Cu);
    // nop
    goto L_08B6B620;
L_08B6B59C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[7] = (2231u << 16u);
      if (branch_taken) {
          goto L_08B6B5B0;
      }
      goto L_08B6B5A4;
    }
L_08B6B5A4:
    ctx.gpr[31] = (0x08B6B5ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B6B620;
L_08B6B5AC:
    ctx.gpr[7] = (2231u << 16u);
    goto L_08B6B5B0;
L_08B6B5B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08B6B5CCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-19196));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08B6B5CCu) goto L_08B6B5CC;
    return;
L_08B6B5CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6B5F8;
      }
      goto L_08B6B5D4;
    }
L_08B6B5D4:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27332));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5908), 0u);
      if (branch_taken) {
          goto L_08B6B5F4;
      }
      goto L_08B6B5E8;
    }
L_08B6B5E8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B6B5F4;
L_08B6B5F4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6B5F8;
L_08B6B5F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B608;
      }
      goto L_08B6B600;
    }
L_08B6B600:
    ctx.gpr[31] = (0x08B6B608u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6B608u) goto L_08B6B608;
    return;
L_08B6B608:
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
L_08B6B620:
    ctx.gpr[5] = (ctx.gpr[4] - 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6B644;
      }
      goto L_08B6B630;
    }
L_08B6B630:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B6B630;
      }
      goto L_08B6B644;
    }
L_08B6B644:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6B66Cu);
    ctx.gpr[4] = (0u | 6928u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B6B66Cu) goto L_08B6B66C;
    return;
L_08B6B66C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    std::fprintf(stderr, "[diag-0217-660] alloc(6928)=0x%08X\n", ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B684;
      }
      goto L_08B6B678;
    }
L_08B6B678:
    ctx.gpr[31] = (0x08B6B680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 454u, 0x08939CE4u>(ctx, &aot_mem) && ctx.pc == 0x08B6B680u) goto L_08B6B680;
    return;
L_08B6B680:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B6B684;
L_08B6B684:
    ctx.gpr[31] = (0x08B6B68Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5908), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B6B68Cu) goto L_08B6B68C;
    return;
L_08B6B68C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    ctx.gpr[31] = (0x08B6B698u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B6B698u) goto L_08B6B698;
    return;
L_08B6B698:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B6AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6B6D8u);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08B6B6D8u) goto L_08B6B6D8;
    return;
L_08B6B6D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B6B72C;
      }
      goto L_08B6B704;
    }
L_08B6B704:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    goto L_08B6B708;
L_08B6B708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6B718u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08B6B890;
L_08B6B718:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B6B708;
      }
      goto L_08B6B72C;
    }
L_08B6B72C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B74C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B6B788;
      }
      goto L_08B6B770;
    }
L_08B6B770:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B6B77Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B6B850;
L_08B6B77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B6B770;
      }
      goto L_08B6B788;
    }
L_08B6B788:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B79C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B6B7F8;
      }
      goto L_08B6B7BC;
    }
L_08B6B7BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08B6B7C0;
L_08B6B7C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (0u | 1u);
        goto L_08B6B7D8;
    }
    goto L_08B6B7D8;
L_08B6B7D8:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B7EC;
      }
      goto L_08B6B7E4;
    }
L_08B6B7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6B7F8;
      }
      goto L_08B6B7EC;
    }
L_08B6B7EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6B7C0;
      }
      goto L_08B6B7F8;
    }
L_08B6B7F8:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6B838;
      }
      goto L_08B6B808;
    }
L_08B6B808:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B6B824u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08B6B8A8;
L_08B6B824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B6B830u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B6B890;
L_08B6B830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B6B83C;
      }
      goto L_08B6B838;
    }
L_08B6B838:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B6B83C;
L_08B6B83C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6B870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B6B8A8;
L_08B6B870:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B6B87Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6B890;
L_08B6B87C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B890:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B8A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B8C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6B8F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08B6B8F4u) goto L_08B6B8F4;
    return;
L_08B6B8F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B6B950;
      }
      goto L_08B6B920;
    }
L_08B6B920:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08B6B92C;
L_08B6B92C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B6B93Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08B6BABC;
L_08B6B93C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08B6B92C;
      }
      goto L_08B6B950;
    }
L_08B6B950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B970:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B6B9AC;
      }
      goto L_08B6B994;
    }
L_08B6B994:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B6B9A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B6BA7C;
L_08B6B9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B6B994;
      }
      goto L_08B6B9AC;
    }
L_08B6B9AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6B9C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08B6BA1C;
      }
      goto L_08B6B9E0;
    }
L_08B6B9E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08B6B9E4;
L_08B6B9E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (0u | 1u);
        goto L_08B6B9FC;
    }
    goto L_08B6B9FC;
L_08B6B9FC:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BA10;
      }
      goto L_08B6BA08;
    }
L_08B6BA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BA1C;
      }
      goto L_08B6BA10;
    }
L_08B6BA10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B6B9E4;
      }
      goto L_08B6BA1C;
    }
L_08B6BA1C:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6BA64;
      }
      goto L_08B6BA2C;
    }
L_08B6BA2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B6BA50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B6BAD4;
L_08B6BA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08B6BA5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B6BABC;
L_08B6BA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B6BA68;
      }
      goto L_08B6BA64;
    }
L_08B6BA64:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B6BA68;
L_08B6BA68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BA7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6BA9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B6BAD4;
L_08B6BA9C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08B6BAA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B6BABC;
L_08B6BAA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BAEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6BB30;
      }
      goto L_08B6BB10;
    }
L_08B6BB10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6BB24;
      }
      goto L_08B6BB1C;
    }
L_08B6BB1C:
    ctx.gpr[31] = (0x08B6BB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6BB24u) goto L_08B6BB24;
    return;
L_08B6BB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B6BB10;
      }
      goto L_08B6BB30;
    }
L_08B6BB30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BB4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6BBD8;
      }
      goto L_08B6BB68;
    }
L_08B6BB68:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BB98;
      }
      goto L_08B6BB74;
    }
L_08B6BB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BB98;
      }
      goto L_08B6BB84;
    }
L_08B6BB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BB98;
      }
      goto L_08B6BB90;
    }
L_08B6BB90:
    ctx.gpr[31] = (0x08B6BB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B6BB98u) goto L_08B6BB98;
    return;
L_08B6BB98:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6BBC8;
      }
      goto L_08B6BBA0;
    }
L_08B6BBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6BBC8;
      }
      goto L_08B6BBB0;
    }
L_08B6BBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B6BBC8;
    }
    goto L_08B6BBBC;
L_08B6BBBC:
    ctx.gpr[31] = (0x08B6BBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B6BBC4u) goto L_08B6BBC4;
    return;
L_08B6BBC4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6BBC8;
L_08B6BBC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BBD8;
      }
      goto L_08B6BBD0;
    }
L_08B6BBD0:
    ctx.gpr[31] = (0x08B6BBD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6BBD8u) goto L_08B6BBD8;
    return;
L_08B6BBD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BBEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6BC70;
      }
      goto L_08B6BC08;
    }
L_08B6BC08:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27284));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-17588));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 208u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B6BC34u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08B6BC34u) goto L_08B6BC34;
    return;
L_08B6BC34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6BC60;
      }
      goto L_08B6BC3C;
    }
L_08B6BC3C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27300));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5864), 0u);
      if (branch_taken) {
          goto L_08B6BC5C;
      }
      goto L_08B6BC50;
    }
L_08B6BC50:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B6BC5C;
L_08B6BC5C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6BC60;
L_08B6BC60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BC70;
      }
      goto L_08B6BC68;
    }
L_08B6BC68:
    ctx.gpr[31] = (0x08B6BC70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B6BC70u) goto L_08B6BC70;
    return;
L_08B6BC70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 96u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BCA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (2234u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BCD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B6BD18;
      }
      goto L_08B6BCF8;
    }
L_08B6BCF8:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B6BD18;
      }
      goto L_08B6BD18;
    }
L_08B6BD18:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08B6BD28u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B6BD28u) goto L_08B6BD28;
    return;
L_08B6BD28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BD34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6BDD0;
      }
      goto L_08B6BD54;
    }
L_08B6BD54:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[5] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B6BD7C;
      }
      goto L_08B6BD70;
    }
L_08B6BD70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B6BD70;
      }
      goto L_08B6BD7C;
    }
L_08B6BD7C:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B6BD88u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B6BDE8;
L_08B6BD88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B6BDACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08B6BDFC;
L_08B6BDAC:
    ctx.gpr[31] = (0x08B6BDB4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B6BDE8;
L_08B6BDB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6BDD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 67u, 0x08B6C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08B6BDD0u) goto L_08B6BDD0;
    return;
L_08B6BDD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6BDFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[19] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 17 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 4u, 0x08B6C038u>(ctx, &aot_mem); return;
      }
      goto L_08B6BE4C;
    }
L_08B6BE4C:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_08B6BE58;
L_08B6BE58:
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08B6BEAC;
    }
    goto L_08B6BE60;
L_08B6BE60:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08B6BEC8;
      }
      goto L_08B6BEA4;
    }
L_08B6BEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6BEE8;
      }
      goto L_08B6BEAC;
    }
L_08B6BEAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6BEC0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 5u, 0x08B6C064u>(ctx, &aot_mem) && ctx.pc == 0x08B6BEC0u) goto L_08B6BEC0;
    return;
L_08B6BEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 4u, 0x08B6C038u>(ctx, &aot_mem); return;
      }
      goto L_08B6BEC8;
    }
L_08B6BEC8:
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B6BEE4;
    }
    goto L_08B6BEE4;
L_08B6BEE4:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_08B6BEE8;
L_08B6BEE8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BF70;
      }
      goto L_08B6BEF0;
    }
L_08B6BEF0:
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (0u | 0u);
        goto L_08B6BF00;
    }
    goto L_08B6BEF8;
L_08B6BEF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6BF1C;
      }
      goto L_08B6BF00;
    }
L_08B6BF00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B6BF18;
    }
    goto L_08B6BF18;
L_08B6BF18:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08B6BF1C;
L_08B6BF1C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BF2C;
      }
      goto L_08B6BF24;
    }
L_08B6BF24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B6BFEC;
      }
      goto L_08B6BF2C;
    }
L_08B6BF2C:
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.gpr[6] = (0u | 0u);
        goto L_08B6BF3C;
    }
    goto L_08B6BF34;
L_08B6BF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6BF58;
      }
      goto L_08B6BF3C;
    }
L_08B6BF3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B6BF54;
    }
    goto L_08B6BF54;
L_08B6BF54:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08B6BF58;
L_08B6BF58:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BF68;
      }
      goto L_08B6BF60;
    }
L_08B6BF60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6BFE8;
      }
      goto L_08B6BF68;
    }
L_08B6BF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B6BFE8;
      }
      goto L_08B6BF70;
    }
L_08B6BF70:
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.gpr[6] = (0u | 0u);
        goto L_08B6BF80;
    }
    goto L_08B6BF78;
L_08B6BF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6BF9C;
      }
      goto L_08B6BF80;
    }
L_08B6BF80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B6BF98;
    }
    goto L_08B6BF98;
L_08B6BF98:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08B6BF9C;
L_08B6BF9C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BFAC;
      }
      goto L_08B6BFA4;
    }
L_08B6BFA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B6BFE8;
      }
      goto L_08B6BFAC;
    }
L_08B6BFAC:
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[7] = (0u | 0u);
        goto L_08B6BFBC;
    }
    goto L_08B6BFB4;
L_08B6BFB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B6BFD8;
      }
      goto L_08B6BFBC;
    }
L_08B6BFBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B6BFD4;
    }
    goto L_08B6BFD4;
L_08B6BFD4:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08B6BFD8;
L_08B6BFD8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6BFE8;
      }
      goto L_08B6BFE0;
    }
L_08B6BFE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6BFE8;
      }
      goto L_08B6BFE8;
    }
L_08B6BFE8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B6BFEC;
L_08B6BFEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B6BFFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 50u, 0x08B6C588u>(ctx, &aot_mem) && ctx.pc == 0x08B6BFFCu) goto L_08B6BFFC;
    return;
L_08B6BFFC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B6C000u; return;
}

void recomp_unit_0217(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0217_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_217(Runtime &runtime) {
    runtime.register_generated_unit(217u, 0x08B68000u, 16384u, &recomp_unit_0217, &recomp_unit_0217_entry);
    runtime.register_function(0x08B68000u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68008u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68028u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68038u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6803Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68044u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6804Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68060u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6806Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6809Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B680B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B680D0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B680E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B680F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68130u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6814Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68164u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68184u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68190u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B681A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B681B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B681CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B681F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6820Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68224u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68234u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68240u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68248u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6825Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68268u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6826Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68274u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6827Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68290u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B682ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68308u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68314u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68320u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68328u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6833Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68358u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68364u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6836Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68370u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68378u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68384u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68398u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B683F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68408u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68438u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68454u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68464u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6846Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68474u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6847Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68484u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68498u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6849Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B684F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68504u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6850Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68510u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68518u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68520u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6852Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68534u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6853Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68544u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68558u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68564u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68568u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68570u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68578u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B685A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B685ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6860Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6861Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68628u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68634u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6863Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68640u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68660u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68670u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68680u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6868Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68694u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6869Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B686A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B686B0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B686BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B686C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B686C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B686E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68708u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68728u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68734u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68740u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68748u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6876Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68788u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68794u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687D0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B687E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6881Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68824u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68828u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68838u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68850u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68868u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6887Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6888Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68890u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B688C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68928u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68940u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68944u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68954u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68968u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68978u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68984u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68998u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B689A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B689C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B689D4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B689DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B689ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68A00u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68A7Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68AF8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68CC4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68CC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68CECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68D14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68D2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68D54u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68D5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68DB0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68DB8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68E44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68E4Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68E58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68E60u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68E74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68E98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B68ECCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6908Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69090u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B690B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B690DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B690F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6911Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69124u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69134u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69268u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6927Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B692C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B692E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B692ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69310u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69448u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B694CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B694F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69608u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6960Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69624u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6964Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69664u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69674u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6969Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6971Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69748u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69858u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6985Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69874u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6989Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B698B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B698CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B698F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6991Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69940u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69964u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69990u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699D4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B699ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A00u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A0Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A18u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A48u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69A88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69AC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69AD8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69AE0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69AECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69AFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B08u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69B80u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69BB4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69BECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69BFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C30u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C4Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C64u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69C94u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69CA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69CE4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69CF4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69CFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D0Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D28u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D8Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69D98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E40u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E60u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E80u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69E88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69EACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69EC4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69ED4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69EDCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69EECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69EFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F0Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F18u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F30u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F48u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F90u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69F98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69FC0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69FD8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69FE0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69FF0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69FF4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B69FFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A004u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A00Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A05Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A08Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A098u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0D0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A0F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A104u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A10Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A114u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A134u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A13Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A144u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A148u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A150u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A158u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A168u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A170u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A180u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A188u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A18Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A198u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A1A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A1A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A1D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A1E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A238u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A254u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A260u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A268u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A26Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A274u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A280u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A294u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A2F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A310u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A320u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A32Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A338u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A344u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A34Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A358u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A368u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A374u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A384u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A390u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A39Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3B0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A3FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A408u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A410u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A41Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A424u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A428u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A430u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A438u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A448u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A450u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A458u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A46Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A494u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A49Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A4ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A4BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A4C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A4D4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A4F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A504u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A510u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A518u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A534u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A538u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A540u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A548u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A554u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A578u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A584u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A590u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A598u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A5B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A5B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A5C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A5DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A5E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A5F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A608u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A610u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A620u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A634u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A638u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A640u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A644u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A64Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A658u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A668u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A670u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A67Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A68Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A69Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A6A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A6B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A6CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A6D4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A6E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A6ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A700u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A708u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A718u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A720u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A724u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A730u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A740u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A748u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A75Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A764u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A774u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A77Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A780u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A78Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A798u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A7A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A7ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A7BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A7C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A7E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A840u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A848u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A880u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A884u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A88Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A8B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A8C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A8C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A8E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A8FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A910u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A920u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A92Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A938u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A948u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A968u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A980u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A990u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A998u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A9ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A9C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A9D0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A9DCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A9E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6A9F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AA1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AA20u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AA3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AA64u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AA84u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AA94u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AAA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AAA8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AAB0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AAC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB30u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB6Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB7Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AB98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ABACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ABD4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ABF0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC80u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AC90u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACA4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACD4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACDCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACF4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ACFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD20u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD84u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD90u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AD98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADB8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADCCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADD8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADDCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADE8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6ADF4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE00u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE20u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE30u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE4Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE64u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE8Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AE98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEA4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEB8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AECCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AED4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEE0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEE8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEF8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AEFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF18u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF40u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF54u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF64u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF84u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AF98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFB4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFB8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFC4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFE0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFE4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFF0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6AFF8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B000u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B008u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B00Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B034u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B070u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B07Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B0A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B0C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B0C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B0D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B0E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B108u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B114u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B124u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B14Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B154u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B170u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B178u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B184u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B198u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B1B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B1BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B1D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B1E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B1F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B1FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B20Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B23Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B260u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B268u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B278u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B284u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B290u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B2B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B2E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B2F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B310u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B318u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B334u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B33Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B348u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B354u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B370u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B378u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B380u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B390u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B3B8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B3CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B3E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B3F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B40Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B414u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B41Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B428u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B438u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B444u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B464u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B478u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B47Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B498u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B49Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B4FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B504u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B514u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B51Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B528u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B540u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B548u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B550u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B55Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B57Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B594u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B59Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5B0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5D4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B5F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B600u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B608u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B620u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B630u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B644u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B650u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B66Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B678u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B680u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B684u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B68Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B698u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B6ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B6D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B704u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B708u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B718u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B72Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B74Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B770u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B77Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B788u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B79Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B7BCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B7C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B7D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B7E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B7ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B7F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B808u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B824u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B830u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B838u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B83Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B850u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B870u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B87Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B890u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B8A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B8C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B8F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B920u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B92Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B93Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B950u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B970u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B994u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B9A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B9ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B9C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B9E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B9E4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6B9FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA08u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA64u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA7Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BA9Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BAA8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BABCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BAD4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BAECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB30u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB4Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB84u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB90u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BB98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBB0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBBCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBC4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBD0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBD8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BBECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC08u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC60u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BC84u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BCA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BCD0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BCF8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD18u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD28u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD54u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD7Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BD88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BDACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BDB4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BDD0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BDE8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BDFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BE4Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BE58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BE60u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEA4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEC0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEE4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEE8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEF0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BEF8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF00u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF18u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF54u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF58u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF60u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF68u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF80u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BF9Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFA4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFB4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFBCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFD4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFD8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFE0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFE8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x08B6BFFCu, &recomp_unit_0217, "recomp_unit_0217");
}
} // namespace psprecomp
