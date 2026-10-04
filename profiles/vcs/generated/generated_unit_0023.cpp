#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0023[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 13, 0, 14, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0,
    0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52,
    0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 74, 0, 75, 0,
    0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0,
    0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 128, 0, 129, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 138,
    0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 144, 0, 145, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0,
    166, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 174, 0, 175, 0,
    0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194,
    0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0,
    211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225,
    226, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 243, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265,
    0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0,
    0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 292, 0, 0, 293, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305,
    0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314,
    0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 321, 322, 0, 0, 0, 0, 323, 0,
    0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 327, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 339, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 347, 0, 0, 0, 0, 348, 0, 0, 349,
    0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359, 360, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 365, 366, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 389, 390, 0, 391, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 394, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 404,
    0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 407, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0,
    0, 0, 0, 0, 416, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    429, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 440, 0, 441, 442, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 454, 0,
    0, 0, 0, 0, 455, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 460, 461, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 464, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0,
    0, 0, 0, 482, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0,
    0, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0,
    0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 517, 0, 0, 0,
    518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 0, 529,
    0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 533, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0,
    542, 0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557,
    0, 558, 0, 559, 0, 560, 0, 561, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0,
    571, 0, 572, 0, 573, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    591, 0, 592, 0, 593, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 598, 0, 0, 599, 0, 0, 600, 0, 601,
    0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 606, 607, 0, 0, 608, 0, 0, 0, 609, 0, 610, 0, 611, 0, 0, 0,
    0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0,
    0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 621, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0,
    0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 632,
    0, 633, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0,
    0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0, 653, 0, 654, 0, 655, 0, 0, 656,
    0, 0, 657, 0, 658, 0, 0, 659, 0, 0, 0, 660, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 664, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 671,
    0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0,
    0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 690,
    0, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 0,
    0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 712, 0, 713,
    0, 0, 714, 0, 715, 716, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    720, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 730,
    0, 731, 0, 0, 732, 0, 733, 0, 0, 734, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0,
    0, 742, 0, 743, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0,
    749, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0,
    758, 0, 759, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 764, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 768,
    0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 0, 777,
    0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 793, 0, 0, 794, 0, 0, 795, 0,
    0, 796, 0, 797, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 802, 803, 0, 0, 0, 804,
};
void recomp_unit_0023_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08860000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0023[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08860000;
    case 2u: goto L_0886001C;
    case 3u: goto L_0886004C;
    case 4u: goto L_08860094;
    case 5u: goto L_088600C4;
    case 6u: goto L_08860314;
    case 7u: goto L_08860358;
    case 8u: goto L_08860380;
    case 9u: goto L_08860390;
    case 10u: goto L_088603A0;
    case 11u: goto L_088603F4;
    case 12u: goto L_08860400;
    case 13u: goto L_08860410;
    case 14u: goto L_08860418;
    case 15u: goto L_0886041C;
    case 16u: goto L_08860424;
    case 17u: goto L_08860454;
    case 18u: goto L_08860460;
    case 19u: goto L_08860490;
    case 20u: goto L_088604B0;
    case 21u: goto L_088604B8;
    case 22u: goto L_088604C0;
    case 23u: goto L_088604C8;
    case 24u: goto L_088604D4;
    case 25u: goto L_088604E0;
    case 26u: goto L_088604E8;
    case 27u: goto L_088604F0;
    case 28u: goto L_088604F8;
    case 29u: goto L_08860510;
    case 30u: goto L_0886051C;
    case 31u: goto L_08860528;
    case 32u: goto L_08860534;
    case 33u: goto L_0886053C;
    case 34u: goto L_08860544;
    case 35u: goto L_0886054C;
    case 36u: goto L_08860554;
    case 37u: goto L_08860560;
    case 38u: goto L_08860568;
    case 39u: goto L_08860570;
    case 40u: goto L_08860578;
    case 41u: goto L_08860594;
    case 42u: goto L_088605A0;
    case 43u: goto L_088605AC;
    case 44u: goto L_088605B8;
    case 45u: goto L_088605C0;
    case 46u: goto L_088605C8;
    case 47u: goto L_088605D0;
    case 48u: goto L_088605DC;
    case 49u: goto L_088605E4;
    case 50u: goto L_088605EC;
    case 51u: goto L_088605F4;
    case 52u: goto L_088605FC;
    case 53u: goto L_08860608;
    case 54u: goto L_08860620;
    case 55u: goto L_08860628;
    case 56u: goto L_08860630;
    case 57u: goto L_08860640;
    case 58u: goto L_0886064C;
    case 59u: goto L_08860658;
    case 60u: goto L_08860680;
    case 61u: goto L_08860694;
    case 62u: goto L_088606BC;
    case 63u: goto L_088606C4;
    case 64u: goto L_088606CC;
    case 65u: goto L_088606D4;
    case 66u: goto L_088606DC;
    case 67u: goto L_088606E0;
    case 68u: goto L_08860704;
    case 69u: goto L_08860734;
    case 70u: goto L_08860740;
    case 71u: goto L_08860750;
    case 72u: goto L_0886075C;
    case 73u: goto L_0886076C;
    case 74u: goto L_08860770;
    case 75u: goto L_08860778;
    case 76u: goto L_0886078C;
    case 77u: goto L_08860794;
    case 78u: goto L_0886079C;
    case 79u: goto L_088607AC;
    case 80u: goto L_088607B8;
    case 81u: goto L_088607C0;
    case 82u: goto L_088607C8;
    case 83u: goto L_088607D4;
    case 84u: goto L_088607DC;
    case 85u: goto L_088607EC;
    case 86u: goto L_088607F8;
    case 87u: goto L_08860800;
    case 88u: goto L_08860810;
    case 89u: goto L_08860820;
    case 90u: goto L_0886084C;
    case 91u: goto L_08860868;
    case 92u: goto L_08860890;
    case 93u: goto L_088608A4;
    case 94u: goto L_088608D0;
    case 95u: goto L_088608D8;
    case 96u: goto L_088608E0;
    case 97u: goto L_088608EC;
    case 98u: goto L_088608F4;
    case 99u: goto L_08860918;
    case 100u: goto L_08860924;
    case 101u: goto L_08860928;
    case 102u: goto L_0886094C;
    case 103u: goto L_0886095C;
    case 104u: goto L_08860964;
    case 105u: goto L_0886096C;
    case 106u: goto L_0886097C;
    case 107u: goto L_088609D0;
    case 108u: goto L_088609DC;
    case 109u: goto L_088609E8;
    case 110u: goto L_088609F0;
    case 111u: goto L_08860A08;
    case 112u: goto L_08860A20;
    case 113u: goto L_08860A34;
    case 114u: goto L_08860A44;
    case 115u: goto L_08860A54;
    case 116u: goto L_08860A60;
    case 117u: goto L_08860A74;
    case 118u: goto L_08860A84;
    case 119u: goto L_08860A8C;
    case 120u: goto L_08860A9C;
    case 121u: goto L_08860AA8;
    case 122u: goto L_08860ABC;
    case 123u: goto L_08860AC8;
    case 124u: goto L_08860AD4;
    case 125u: goto L_08860ADC;
    case 126u: goto L_08860AE8;
    case 127u: goto L_08860AFC;
    case 128u: goto L_08860B0C;
    case 129u: goto L_08860B14;
    case 130u: goto L_08860B18;
    case 131u: goto L_08860B20;
    case 132u: goto L_08860B30;
    case 133u: goto L_08860B3C;
    case 134u: goto L_08860B50;
    case 135u: goto L_08860B60;
    case 136u: goto L_08860B68;
    case 137u: goto L_08860B6C;
    case 138u: goto L_08860B7C;
    case 139u: goto L_08860B84;
    case 140u: goto L_08860B8C;
    case 141u: goto L_08860B98;
    case 142u: goto L_08860BA8;
    case 143u: goto L_08860BB0;
    case 144u: goto L_08860BB4;
    case 145u: goto L_08860BBC;
    case 146u: goto L_08860BC0;
    case 147u: goto L_08860BC8;
    case 148u: goto L_08860BD0;
    case 149u: goto L_08860C08;
    case 150u: goto L_08860C2C;
    case 151u: goto L_08860C44;
    case 152u: goto L_08860C4C;
    case 153u: goto L_08860C64;
    case 154u: goto L_08860C6C;
    case 155u: goto L_08860C7C;
    case 156u: goto L_0886137C;
    case 157u: goto L_08861384;
    case 158u: goto L_0886138C;
    case 159u: goto L_08861398;
    case 160u: goto L_088613A4;
    case 161u: goto L_088613CC;
    case 162u: goto L_088613D4;
    case 163u: goto L_088613E0;
    case 164u: goto L_088613F0;
    case 165u: goto L_088613F8;
    case 166u: goto L_08861400;
    case 167u: goto L_0886140C;
    case 168u: goto L_08861414;
    case 169u: goto L_08861424;
    case 170u: goto L_08861440;
    case 171u: goto L_08861448;
    case 172u: goto L_08861450;
    case 173u: goto L_0886146C;
    case 174u: goto L_08861470;
    case 175u: goto L_08861478;
    case 176u: goto L_08861488;
    case 177u: goto L_08861490;
    case 178u: goto L_088614AC;
    case 179u: goto L_088614B4;
    case 180u: goto L_088614CC;
    case 181u: goto L_088614D4;
    case 182u: goto L_088614DC;
    case 183u: goto L_088614E8;
    case 184u: goto L_088614F0;
    case 185u: goto L_088614F8;
    case 186u: goto L_08861500;
    case 187u: goto L_08861510;
    case 188u: goto L_08861520;
    case 189u: goto L_08861538;
    case 190u: goto L_08861548;
    case 191u: goto L_0886155C;
    case 192u: goto L_08861568;
    case 193u: goto L_08861574;
    case 194u: goto L_0886157C;
    case 195u: goto L_08861588;
    case 196u: goto L_08861594;
    case 197u: goto L_088615A0;
    case 198u: goto L_088615A8;
    case 199u: goto L_088615B4;
    case 200u: goto L_088615BC;
    case 201u: goto L_088615D4;
    case 202u: goto L_088615E4;
    case 203u: goto L_08861668;
    case 204u: goto L_08861688;
    case 205u: goto L_088616A0;
    case 206u: goto L_088616AC;
    case 207u: goto L_088616B4;
    case 208u: goto L_088616C8;
    case 209u: goto L_088616E4;
    case 210u: goto L_088616F8;
    case 211u: goto L_08861700;
    case 212u: goto L_08861714;
    case 213u: goto L_0886172C;
    case 214u: goto L_08861744;
    case 215u: goto L_0886174C;
    case 216u: goto L_08861780;
    case 217u: goto L_08861788;
    case 218u: goto L_08861790;
    case 219u: goto L_08861798;
    case 220u: goto L_088617A0;
    case 221u: goto L_088617B0;
    case 222u: goto L_088617D4;
    case 223u: goto L_088617EC;
    case 224u: goto L_088617F4;
    case 225u: goto L_088617FC;
    case 226u: goto L_08861800;
    case 227u: goto L_0886180C;
    case 228u: goto L_08861814;
    case 229u: goto L_0886181C;
    case 230u: goto L_08861824;
    case 231u: goto L_08861888;
    case 232u: goto L_0886189C;
    case 233u: goto L_088618A8;
    case 234u: goto L_088618C4;
    case 235u: goto L_088618E0;
    case 236u: goto L_08861960;
    case 237u: goto L_08861968;
    case 238u: goto L_088619A0;
    case 239u: goto L_088619AC;
    case 240u: goto L_088619C8;
    case 241u: goto L_088619D4;
    case 242u: goto L_08861A38;
    case 243u: goto L_08861A3C;
    case 244u: goto L_08861A40;
    case 245u: goto L_08861A44;
    case 246u: goto L_08861A6C;
    case 247u: goto L_08861A7C;
    case 248u: goto L_08861A9C;
    case 249u: goto L_08861AA8;
    case 250u: goto L_08861AB4;
    case 251u: goto L_08861ABC;
    case 252u: goto L_08861ACC;
    case 253u: goto L_08861B10;
    case 254u: goto L_08861B1C;
    case 255u: goto L_08861B24;
    case 256u: goto L_08861B34;
    case 257u: goto L_08861B44;
    case 258u: goto L_08861B64;
    case 259u: goto L_08861B74;
    case 260u: goto L_08861BC0;
    case 261u: goto L_08861BCC;
    case 262u: goto L_08861BD4;
    case 263u: goto L_08861BE4;
    case 264u: goto L_08861BF4;
    case 265u: goto L_08861BFC;
    case 266u: goto L_08861C04;
    case 267u: goto L_08861C10;
    case 268u: goto L_08861C24;
    case 269u: goto L_08861C2C;
    case 270u: goto L_08861C34;
    case 271u: goto L_08861C48;
    case 272u: goto L_08861C5C;
    case 273u: goto L_08861C64;
    case 274u: goto L_08861C88;
    case 275u: goto L_08861C90;
    case 276u: goto L_08861CB8;
    case 277u: goto L_08861CC4;
    case 278u: goto L_08861CD8;
    case 279u: goto L_08861CF0;
    case 280u: goto L_08861CF8;
    case 281u: goto L_08861D04;
    case 282u: goto L_08861D10;
    case 283u: goto L_08861D24;
    case 284u: goto L_08861D2C;
    case 285u: goto L_08861D30;
    case 286u: goto L_08861D38;
    case 287u: goto L_08861D48;
    case 288u: goto L_08861D78;
    case 289u: goto L_08861DAC;
    case 290u: goto L_08861DE0;
    case 291u: goto L_08861DE8;
    case 292u: goto L_08861DEC;
    case 293u: goto L_08861DF8;
    case 294u: goto L_08861E00;
    case 295u: goto L_08861E24;
    case 296u: goto L_08861E2C;
    case 297u: goto L_08861E80;
    case 298u: goto L_08861E94;
    case 299u: goto L_08861EB0;
    case 300u: goto L_08861EB8;
    case 301u: goto L_08861ECC;
    case 302u: goto L_08861ED4;
    case 303u: goto L_08861EE4;
    case 304u: goto L_08861EEC;
    case 305u: goto L_08861EFC;
    case 306u: goto L_08861F04;
    case 307u: goto L_08861F0C;
    case 308u: goto L_08861F20;
    case 309u: goto L_08861F44;
    case 310u: goto L_08861F48;
    case 311u: goto L_08861F5C;
    case 312u: goto L_08861F68;
    case 313u: goto L_08861F70;
    case 314u: goto L_08861F7C;
    case 315u: goto L_08861F94;
    case 316u: goto L_08861FA0;
    case 317u: goto L_08861FA8;
    case 318u: goto L_08861FBC;
    case 319u: goto L_08861FC4;
    case 320u: goto L_08861FD8;
    case 321u: goto L_08861FE0;
    case 322u: goto L_08861FE4;
    case 323u: goto L_08861FF8;
    case 324u: goto L_08862008;
    case 325u: goto L_08862010;
    case 326u: goto L_08862018;
    case 327u: goto L_0886202C;
    case 328u: goto L_08862030;
    case 329u: goto L_08862038;
    case 330u: goto L_08862060;
    case 331u: goto L_088620A4;
    case 332u: goto L_088620AC;
    case 333u: goto L_0886210C;
    case 334u: goto L_08862118;
    case 335u: goto L_08862130;
    case 336u: goto L_0886213C;
    case 337u: goto L_08862148;
    case 338u: goto L_0886218C;
    case 339u: goto L_08862194;
    case 340u: goto L_08862198;
    case 341u: goto L_088621AC;
    case 342u: goto L_088621D4;
    case 343u: goto L_088621E8;
    case 344u: goto L_0886221C;
    case 345u: goto L_0886224C;
    case 346u: goto L_08862258;
    case 347u: goto L_0886225C;
    case 348u: goto L_08862270;
    case 349u: goto L_0886227C;
    case 350u: goto L_08862284;
    case 351u: goto L_08862290;
    case 352u: goto L_088622B0;
    case 353u: goto L_088622D8;
    case 354u: goto L_088622F4;
    case 355u: goto L_08862310;
    case 356u: goto L_0886232C;
    case 357u: goto L_08862358;
    case 358u: goto L_0886236C;
    case 359u: goto L_08862374;
    case 360u: goto L_08862378;
    case 361u: goto L_08862394;
    case 362u: goto L_088623A0;
    case 363u: goto L_088623A8;
    case 364u: goto L_088623B0;
    case 365u: goto L_088623C4;
    case 366u: goto L_088623C8;
    case 367u: goto L_088623D0;
    case 368u: goto L_088623E0;
    case 369u: goto L_088623EC;
    case 370u: goto L_0886240C;
    case 371u: goto L_0886241C;
    case 372u: goto L_0886243C;
    case 373u: goto L_08862458;
    case 374u: goto L_08862478;
    case 375u: goto L_088624A4;
    case 376u: goto L_088624C0;
    case 377u: goto L_088624C8;
    case 378u: goto L_088624D4;
    case 379u: goto L_088624E4;
    case 380u: goto L_088624F4;
    case 381u: goto L_08862510;
    case 382u: goto L_08862524;
    case 383u: goto L_0886252C;
    case 384u: goto L_08862534;
    case 385u: goto L_0886253C;
    case 386u: goto L_08862548;
    case 387u: goto L_0886255C;
    case 388u: goto L_08862568;
    case 389u: goto L_0886256C;
    case 390u: goto L_08862570;
    case 391u: goto L_08862578;
    case 392u: goto L_0886258C;
    case 393u: goto L_088625A8;
    case 394u: goto L_088625AC;
    case 395u: goto L_088625C4;
    case 396u: goto L_088625D0;
    case 397u: goto L_088625D8;
    case 398u: goto L_088625E8;
    case 399u: goto L_08862624;
    case 400u: goto L_08862630;
    case 401u: goto L_08862634;
    case 402u: goto L_08862668;
    case 403u: goto L_08862674;
    case 404u: goto L_0886267C;
    case 405u: goto L_0886269C;
    case 406u: goto L_088626A4;
    case 407u: goto L_088626B0;
    case 408u: goto L_088626B4;
    case 409u: goto L_088626C0;
    case 410u: goto L_088626CC;
    case 411u: goto L_088626D8;
    case 412u: goto L_088626E0;
    case 413u: goto L_088626E8;
    case 414u: goto L_088626F0;
    case 415u: goto L_088626F8;
    case 416u: goto L_08862710;
    case 417u: goto L_08862714;
    case 418u: goto L_0886271C;
    case 419u: goto L_08862748;
    case 420u: goto L_08862764;
    case 421u: goto L_0886276C;
    case 422u: goto L_08862778;
    case 423u: goto L_08862794;
    case 424u: goto L_088627BC;
    case 425u: goto L_088627DC;
    case 426u: goto L_08862804;
    case 427u: goto L_08862844;
    case 428u: goto L_08862868;
    case 429u: goto L_08862880;
    case 430u: goto L_08862884;
    case 431u: goto L_08862890;
    case 432u: goto L_088628D0;
    case 433u: goto L_088628D4;
    case 434u: goto L_088628E8;
    case 435u: goto L_088628FC;
    case 436u: goto L_08862920;
    case 437u: goto L_0886292C;
    case 438u: goto L_0886296C;
    case 439u: goto L_08862988;
    case 440u: goto L_0886299C;
    case 441u: goto L_088629A4;
    case 442u: goto L_088629A8;
    case 443u: goto L_088629B0;
    case 444u: goto L_088629C4;
    case 445u: goto L_088629CC;
    case 446u: goto L_088629E0;
    case 447u: goto L_08862A04;
    case 448u: goto L_08862A34;
    case 449u: goto L_08862A40;
    case 450u: goto L_08862A4C;
    case 451u: goto L_08862AE4;
    case 452u: goto L_08862AEC;
    case 453u: goto L_08862AF4;
    case 454u: goto L_08862AF8;
    case 455u: goto L_08862B10;
    case 456u: goto L_08862B14;
    case 457u: goto L_08862B1C;
    case 458u: goto L_08862B4C;
    case 459u: goto L_08862B50;
    case 460u: goto L_08862B64;
    case 461u: goto L_08862B68;
    case 462u: goto L_08862B70;
    case 463u: goto L_08862BA0;
    case 464u: goto L_08862BA4;
    case 465u: goto L_08862BB8;
    case 466u: goto L_08862BBC;
    case 467u: goto L_08862BE0;
    case 468u: goto L_08862BE8;
    case 469u: goto L_08862C00;
    case 470u: goto L_08862C14;
    case 471u: goto L_08862C34;
    case 472u: goto L_08862C38;
    case 473u: goto L_08862C50;
    case 474u: goto L_08862C6C;
    case 475u: goto L_08862C78;
    case 476u: goto L_08862C90;
    case 477u: goto L_08862CB8;
    case 478u: goto L_08862CC0;
    case 479u: goto L_08862CE0;
    case 480u: goto L_08862CE8;
    case 481u: goto L_08862CF8;
    case 482u: goto L_08862D0C;
    case 483u: goto L_08862D10;
    case 484u: goto L_08862D18;
    case 485u: goto L_08862D20;
    case 486u: goto L_08862D3C;
    case 487u: goto L_08862D50;
    case 488u: goto L_08862D68;
    case 489u: goto L_08862D74;
    case 490u: goto L_08862D8C;
    case 491u: goto L_08862D94;
    case 492u: goto L_08862D9C;
    case 493u: goto L_08862DA4;
    case 494u: goto L_08862DAC;
    case 495u: goto L_08862DB4;
    case 496u: goto L_08862DBC;
    case 497u: goto L_08862DC4;
    case 498u: goto L_08862DCC;
    case 499u: goto L_08862DD4;
    case 500u: goto L_08862DDC;
    case 501u: goto L_08862DE4;
    case 502u: goto L_08862DF0;
    case 503u: goto L_08862DF8;
    case 504u: goto L_08862E04;
    case 505u: goto L_08862E0C;
    case 506u: goto L_08862E18;
    case 507u: goto L_08862E20;
    case 508u: goto L_08862E2C;
    case 509u: goto L_08862E34;
    case 510u: goto L_08862E3C;
    case 511u: goto L_08862E44;
    case 512u: goto L_08862E4C;
    case 513u: goto L_08862E54;
    case 514u: goto L_08862E5C;
    case 515u: goto L_08862E64;
    case 516u: goto L_08862E6C;
    case 517u: goto L_08862E70;
    case 518u: goto L_08862E80;
    case 519u: goto L_08862E8C;
    case 520u: goto L_08862E98;
    case 521u: goto L_08862EA0;
    case 522u: goto L_08862EA8;
    case 523u: goto L_08862EB4;
    case 524u: goto L_08862ECC;
    case 525u: goto L_08862ED4;
    case 526u: goto L_08862EDC;
    case 527u: goto L_08862EE4;
    case 528u: goto L_08862EF0;
    case 529u: goto L_08862EFC;
    case 530u: goto L_08862F14;
    case 531u: goto L_08862F1C;
    case 532u: goto L_08862F24;
    case 533u: goto L_08862F28;
    case 534u: goto L_08862F30;
    case 535u: goto L_08862F40;
    case 536u: goto L_08862F4C;
    case 537u: goto L_08862F58;
    case 538u: goto L_08862F60;
    case 539u: goto L_08862F68;
    case 540u: goto L_08862F70;
    case 541u: goto L_08862F78;
    case 542u: goto L_08862F80;
    case 543u: goto L_08862F88;
    case 544u: goto L_08862F94;
    case 545u: goto L_08862F9C;
    case 546u: goto L_08862FA4;
    case 547u: goto L_08862FAC;
    case 548u: goto L_08862FB4;
    case 549u: goto L_08862FBC;
    case 550u: goto L_08862FC4;
    case 551u: goto L_08862FCC;
    case 552u: goto L_08862FD4;
    case 553u: goto L_08862FDC;
    case 554u: goto L_08862FE4;
    case 555u: goto L_08862FEC;
    case 556u: goto L_08862FF4;
    case 557u: goto L_08862FFC;
    case 558u: goto L_08863004;
    case 559u: goto L_0886300C;
    case 560u: goto L_08863014;
    case 561u: goto L_0886301C;
    case 562u: goto L_08863020;
    case 563u: goto L_08863028;
    case 564u: goto L_08863038;
    case 565u: goto L_08863050;
    case 566u: goto L_08863058;
    case 567u: goto L_08863060;
    case 568u: goto L_08863068;
    case 569u: goto L_08863070;
    case 570u: goto L_08863078;
    case 571u: goto L_08863080;
    case 572u: goto L_08863088;
    case 573u: goto L_08863090;
    case 574u: goto L_08863094;
    case 575u: goto L_0886309C;
    case 576u: goto L_088630D0;
    case 577u: goto L_088630E0;
    case 578u: goto L_088630EC;
    case 579u: goto L_08863160;
    case 580u: goto L_08863170;
    case 581u: goto L_0886318C;
    case 582u: goto L_08863190;
    case 583u: goto L_088631B4;
    case 584u: goto L_088631C0;
    case 585u: goto L_0886321C;
    case 586u: goto L_08863224;
    case 587u: goto L_08863254;
    case 588u: goto L_08863284;
    case 589u: goto L_088632A8;
    case 590u: goto L_088632CC;
    case 591u: goto L_08863380;
    case 592u: goto L_08863388;
    case 593u: goto L_08863390;
    case 594u: goto L_08863394;
    case 595u: goto L_088633B4;
    case 596u: goto L_088633D0;
    case 597u: goto L_088633D8;
    case 598u: goto L_088633DC;
    case 599u: goto L_088633E8;
    case 600u: goto L_088633F4;
    case 601u: goto L_088633FC;
    case 602u: goto L_08863404;
    case 603u: goto L_08863410;
    case 604u: goto L_0886341C;
    case 605u: goto L_0886342C;
    case 606u: goto L_08863440;
    case 607u: goto L_08863444;
    case 608u: goto L_08863450;
    case 609u: goto L_08863460;
    case 610u: goto L_08863468;
    case 611u: goto L_08863470;
    case 612u: goto L_08863494;
    case 613u: goto L_088634AC;
    case 614u: goto L_088634BC;
    case 615u: goto L_088634DC;
    case 616u: goto L_088634EC;
    case 617u: goto L_088634F8;
    case 618u: goto L_08863504;
    case 619u: goto L_0886351C;
    case 620u: goto L_08863524;
    case 621u: goto L_08863528;
    case 622u: goto L_08863530;
    case 623u: goto L_08863540;
    case 624u: goto L_08863554;
    case 625u: goto L_08863560;
    case 626u: goto L_0886356C;
    case 627u: goto L_08863590;
    case 628u: goto L_088635A0;
    case 629u: goto L_088635AC;
    case 630u: goto L_088635E0;
    case 631u: goto L_088635F4;
    case 632u: goto L_088635FC;
    case 633u: goto L_08863604;
    case 634u: goto L_08863610;
    case 635u: goto L_08863624;
    case 636u: goto L_0886362C;
    case 637u: goto L_08863634;
    case 638u: goto L_08863640;
    case 639u: goto L_08863648;
    case 640u: goto L_08863658;
    case 641u: goto L_08863660;
    case 642u: goto L_0886366C;
    case 643u: goto L_08863674;
    case 644u: goto L_08863688;
    case 645u: goto L_0886369C;
    case 646u: goto L_088636C8;
    case 647u: goto L_08863710;
    case 648u: goto L_08863720;
    case 649u: goto L_08863730;
    case 650u: goto L_08863738;
    case 651u: goto L_08863740;
    case 652u: goto L_0886374C;
    case 653u: goto L_08863760;
    case 654u: goto L_08863768;
    case 655u: goto L_08863770;
    case 656u: goto L_0886377C;
    case 657u: goto L_08863788;
    case 658u: goto L_08863790;
    case 659u: goto L_0886379C;
    case 660u: goto L_088637AC;
    case 661u: goto L_088637B0;
    case 662u: goto L_088637CC;
    case 663u: goto L_088637F4;
    case 664u: goto L_08863804;
    case 665u: goto L_08863810;
    case 666u: goto L_08863820;
    case 667u: goto L_08863830;
    case 668u: goto L_0886383C;
    case 669u: goto L_0886385C;
    case 670u: goto L_08863874;
    case 671u: goto L_0886387C;
    case 672u: goto L_08863888;
    case 673u: goto L_088638C0;
    case 674u: goto L_088638D8;
    case 675u: goto L_0886394C;
    case 676u: goto L_08863960;
    case 677u: goto L_08863968;
    case 678u: goto L_08863984;
    case 679u: goto L_08863990;
    case 680u: goto L_08863998;
    case 681u: goto L_088639A0;
    case 682u: goto L_088639A8;
    case 683u: goto L_088639B4;
    case 684u: goto L_088639BC;
    case 685u: goto L_088639C4;
    case 686u: goto L_088639D0;
    case 687u: goto L_088639DC;
    case 688u: goto L_088639E4;
    case 689u: goto L_088639F4;
    case 690u: goto L_088639FC;
    case 691u: goto L_08863A10;
    case 692u: goto L_08863A1C;
    case 693u: goto L_08863A24;
    case 694u: goto L_08863A30;
    case 695u: goto L_08863A38;
    case 696u: goto L_08863A44;
    case 697u: goto L_08863A50;
    case 698u: goto L_08863A58;
    case 699u: goto L_08863A64;
    case 700u: goto L_08863A70;
    case 701u: goto L_08863A78;
    case 702u: goto L_08863A88;
    case 703u: goto L_08863A90;
    case 704u: goto L_08863AA4;
    case 705u: goto L_08863AAC;
    case 706u: goto L_08863AB4;
    case 707u: goto L_08863ABC;
    case 708u: goto L_08863AC4;
    case 709u: goto L_08863AD0;
    case 710u: goto L_08863ADC;
    case 711u: goto L_08863AE4;
    case 712u: goto L_08863AF4;
    case 713u: goto L_08863AFC;
    case 714u: goto L_08863B08;
    case 715u: goto L_08863B10;
    case 716u: goto L_08863B14;
    case 717u: goto L_08863B20;
    case 718u: goto L_08863B24;
    case 719u: goto L_08863B54;
    case 720u: goto L_08863B80;
    case 721u: goto L_08863B90;
    case 722u: goto L_08863B98;
    case 723u: goto L_08863BA0;
    case 724u: goto L_08863BB0;
    case 725u: goto L_08863BC0;
    case 726u: goto L_08863BC8;
    case 727u: goto L_08863BD8;
    case 728u: goto L_08863BE0;
    case 729u: goto L_08863BF4;
    case 730u: goto L_08863BFC;
    case 731u: goto L_08863C04;
    case 732u: goto L_08863C10;
    case 733u: goto L_08863C18;
    case 734u: goto L_08863C24;
    case 735u: goto L_08863C30;
    case 736u: goto L_08863C38;
    case 737u: goto L_08863C44;
    case 738u: goto L_08863C50;
    case 739u: goto L_08863C58;
    case 740u: goto L_08863C68;
    case 741u: goto L_08863C70;
    case 742u: goto L_08863C84;
    case 743u: goto L_08863C8C;
    case 744u: goto L_08863C90;
    case 745u: goto L_08863CB4;
    case 746u: goto L_08863CC8;
    case 747u: goto L_08863CD0;
    case 748u: goto L_08863CDC;
    case 749u: goto L_08863D00;
    case 750u: goto L_08863D08;
    case 751u: goto L_08863D14;
    case 752u: goto L_08863D1C;
    case 753u: goto L_08863D2C;
    case 754u: goto L_08863D3C;
    case 755u: goto L_08863D44;
    case 756u: goto L_08863D54;
    case 757u: goto L_08863D6C;
    case 758u: goto L_08863D80;
    case 759u: goto L_08863D88;
    case 760u: goto L_08863D8C;
    case 761u: goto L_08863D9C;
    case 762u: goto L_08863DC4;
    case 763u: goto L_08863DCC;
    case 764u: goto L_08863DD0;
    case 765u: goto L_08863DD8;
    case 766u: goto L_08863DEC;
    case 767u: goto L_08863DF4;
    case 768u: goto L_08863DFC;
    case 769u: goto L_08863E08;
    case 770u: goto L_08863E14;
    case 771u: goto L_08863E3C;
    case 772u: goto L_08863E44;
    case 773u: goto L_08863E54;
    case 774u: goto L_08863E5C;
    case 775u: goto L_08863E64;
    case 776u: goto L_08863E70;
    case 777u: goto L_08863E7C;
    case 778u: goto L_08863E84;
    case 779u: goto L_08863E94;
    case 780u: goto L_08863EA4;
    case 781u: goto L_08863EAC;
    case 782u: goto L_08863EB4;
    case 783u: goto L_08863EBC;
    case 784u: goto L_08863EC4;
    case 785u: goto L_08863EE0;
    case 786u: goto L_08863EF0;
    case 787u: goto L_08863F18;
    case 788u: goto L_08863F28;
    case 789u: goto L_08863F34;
    case 790u: goto L_08863F44;
    case 791u: goto L_08863F50;
    case 792u: goto L_08863F58;
    case 793u: goto L_08863F60;
    case 794u: goto L_08863F6C;
    case 795u: goto L_08863F78;
    case 796u: goto L_08863F84;
    case 797u: goto L_08863F8C;
    case 798u: goto L_08863FA0;
    case 799u: goto L_08863FAC;
    case 800u: goto L_08863FC8;
    case 801u: goto L_08863FDC;
    case 802u: goto L_08863FE4;
    case 803u: goto L_08863FE8;
    case 804u: goto L_08863FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08860000:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886001C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<8u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vmscl(32u, 36u, 8u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886004C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<8u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<40u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<72u>(ctx.gpr[7]);
    ctx.execute_vfpu_vscl_ct<32u, 32u, 8u, 3u>();
    ctx.execute_vfpu_vscl_ct<33u, 33u, 40u, 3u>();
    ctx.execute_vfpu_vscl_ct<34u, 34u, 72u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860094:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<8u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<40u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<72u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088600C4:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[5]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[5] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[8];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[7] + ctx.fpr[5];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[3] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[7] + ctx.fpr[10];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[3] + ctx.fpr[19];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[11] + ctx.fpr[21];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[10];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[9] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[9];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[3] + ctx.fpr[18];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[21];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[23] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[9] + ctx.fpr[23];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    ctx.fpr[10] = ctx.fpr[25] + ctx.fpr[27];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[10] = ctx.fpr[10] + ctx.fpr[21];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[11] + ctx.fpr[8];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[8] + ctx.fpr[3];
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[21] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[6];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[1] + ctx.fpr[17];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[2] + ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860314:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(2u, 4u, 1u, 3u);
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.execute_vfpu_vdot_ct<8u, 0u, 0u, 3u>();
    ctx.execute_vfpu_vdot_ct<40u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vdot_ct<72u, 2u, 2u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 9u, 3u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 41u, 3u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 73u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860358:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[6] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_08860390;
      }
      goto L_08860380;
    }
L_08860380:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08860390;
L_08860390:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088603A0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 3u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<107u, 1u>(vfpu_value); }
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 8u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088603F4:
    ctx.gpr[5] = (0u | 239u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860400:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1970)));
    ctx.gpr[5] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08860418;
      }
      goto L_08860410;
    }
L_08860410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886041C;
      }
      goto L_08860418;
    }
L_08860418:
    ctx.gpr[2] = (0u | 0u);
    goto L_0886041C;
L_0886041C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[19]) < 102 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088604C0;
      }
      goto L_08860454;
    }
L_08860454:
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[19]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_088604C0;
      }
      goto L_08860460;
    }
L_08860460:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088604B8;
      }
      goto L_08860490;
    }
L_08860490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2168)));
    ctx.gpr[4] = (16339u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088604C8;
      }
      goto L_088604B0;
    }
L_088604B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088604F8;
      }
      goto L_088604B8;
    }
L_088604B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088604C0;
    }
L_088604C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088604C8;
    }
L_088604C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 106 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 158u);
      if (branch_taken) {
          goto L_088604E8;
      }
      goto L_088604D4;
    }
L_088604D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 103 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088604F0;
      }
      goto L_088604E0;
    }
L_088604E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_088604E8;
    }
L_088604E8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088604E0;
      }
      goto L_088604F0;
    }
L_088604F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088604F8;
    }
L_088604F8:
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08860578;
      }
      goto L_08860510;
    }
L_08860510:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 137 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 142 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886054C;
      }
      goto L_0886051C;
    }
L_0886051C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 106 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 136 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886053C;
      }
      goto L_08860528;
    }
L_08860528:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 102 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08860544;
      }
      goto L_08860534;
    }
L_08860534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_0886053C;
    }
L_0886053C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860534;
      }
      goto L_08860544;
    }
L_08860544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_0886054C;
    }
L_0886054C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 158u);
      if (branch_taken) {
          goto L_08860568;
      }
      goto L_08860554;
    }
L_08860554:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 141 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08860544;
      }
      goto L_08860560;
    }
L_08860560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860534;
      }
      goto L_08860568;
    }
L_08860568:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08860544;
      }
      goto L_08860570;
    }
L_08860570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860534;
      }
      goto L_08860578;
    }
L_08860578:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_08860594;
    }
L_08860594:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 136 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 158 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605F4;
      }
      goto L_088605A0;
    }
L_088605A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 107 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 119 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605C8;
      }
      goto L_088605AC;
    }
L_088605AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 102 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 106 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_088605B8;
    }
L_088605B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_088605C0;
    }
L_088605C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860630;
      }
      goto L_088605C8;
    }
L_088605C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_088605E4;
      }
      goto L_088605D0;
    }
L_088605D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 108 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088605C0;
      }
      goto L_088605DC;
    }
L_088605DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088605E4;
    }
L_088605E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_088605EC;
    }
L_088605EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088605C0;
      }
      goto L_088605F4;
    }
L_088605F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_08860620;
      }
      goto L_088605FC;
    }
L_088605FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 146 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-136));
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_08860608;
    }
L_08860608:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26552)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860620:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088605DC;
      }
      goto L_08860628;
    }
L_08860628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088605C0;
      }
      goto L_08860630;
    }
L_08860630:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_08860640;
    }
L_08860640:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088606BC;
      }
      goto L_0886064C;
    }
L_0886064C:
    ctx.gpr[4] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_088606BC;
      }
      goto L_08860658;
    }
L_08860658:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22352));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2440)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2436)));
    ctx.gpr[31] = (0x08860680u);
    ctx.gpr[21] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08860680u) goto L_08860680;
    return;
L_08860680:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08860694u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08860694u) goto L_08860694;
    return;
L_08860694:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088606CC;
      }
      goto L_088606BC;
    }
L_088606BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088606D4;
      }
      goto L_088606C4;
    }
L_088606C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088606CC;
    }
L_088606CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088606E0;
      }
      goto L_088606D4;
    }
L_088606D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088606C4;
      }
      goto L_088606DC;
    }
L_088606DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_088606E0;
L_088606E0:
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
L_08860704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08860734u);
    ctx.gpr[6] = (0u | 309u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08860734u) goto L_08860734;
    return;
L_08860734:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08860770;
      }
      goto L_08860740;
    }
L_08860740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08860750u);
    ctx.gpr[6] = (0u | 313u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08860750u) goto L_08860750;
    return;
L_08860750:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08860770;
      }
      goto L_0886075C;
    }
L_0886075C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886076Cu);
    ctx.gpr[6] = (0u | 311u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0886076Cu) goto L_0886076C;
    return;
L_0886076C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08860770;
L_08860770:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08860794;
      }
      goto L_08860778;
    }
L_08860778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886079C;
      }
      goto L_0886078C;
    }
L_0886078C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088607AC;
      }
      goto L_08860794;
    }
L_08860794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_0886079C;
    }
L_0886079C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1926))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088607C0;
      }
      goto L_088607AC;
    }
L_088607AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088607C8;
      }
      goto L_088607B8;
    }
L_088607B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088607DC;
      }
      goto L_088607C0;
    }
L_088607C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_088607C8;
    }
L_088607C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088607DC;
      }
      goto L_088607D4;
    }
L_088607D4:
    ctx.gpr[4] = (0u | 107u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088607DC;
L_088607DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    ctx.gpr[5] = (0u | 239u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_088607EC;
    }
L_088607EC:
    ctx.gpr[5] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08860800;
      }
      goto L_088607F8;
    }
L_088607F8:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), ctx.gpr[5]);
    goto L_08860800;
L_08860800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_08860810;
    }
L_08860810:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-102));
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(58) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (0u | 239u);
      if (branch_taken) {
          goto L_08860924;
      }
      goto L_08860820;
    }
L_08860820:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-22352));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2428)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860924;
      }
      goto L_0886084C;
    }
L_0886084C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08860868u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08860868u) goto L_08860868;
    return;
L_08860868:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2448)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2444)));
    ctx.gpr[31] = (0x08860890u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08860890u) goto L_08860890;
    return;
L_08860890:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088608A4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088608A4u) goto L_088608A4;
    return;
L_088608A4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    ctx.gpr[5] = (0u | 127u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088608EC;
      }
      goto L_088608D0;
    }
L_088608D0:
    ctx.gpr[31] = (0x088608D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088608D8u) goto L_088608D8;
    return;
L_088608D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
      if (branch_taken) {
          goto L_088608EC;
      }
      goto L_088608E0;
    }
L_088608E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), ctx.gpr[5]);
    goto L_088608EC;
L_088608EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860918;
      }
      goto L_088608F4;
    }
L_088608F4:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2432)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2428), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1970)));
    goto L_08860918;
L_08860918:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08860928;
      }
      goto L_08860924;
    }
L_08860924:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_08860928;
L_08860928:
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
L_0886094C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886095Cu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B7322Cu;
    return;
L_0886095C:
    ctx.gpr[31] = (0x08860964u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7323Cu;
    return;
L_08860964:
    ctx.gpr[31] = (0x0886096Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 469u, 0x08AEDEB8u>(ctx, &aot_mem) && ctx.pc == 0x0886096Cu) goto L_0886096C;
    return;
L_0886096C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886097C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088609DC;
      }
      goto L_088609D0;
    }
L_088609D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088609E8;
      }
      goto L_088609DC;
    }
L_088609DC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_088609E8;
L_088609E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08860A44;
      }
      goto L_088609F0;
    }
L_088609F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08860A08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08860A08u) goto L_08860A08;
    return;
L_08860A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08860A44;
      }
      goto L_08860A20;
    }
L_08860A20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08860A34u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08860A34u) goto L_08860A34;
    return;
L_08860A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08860A44;
L_08860A44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860A8C;
      }
      goto L_08860A54;
    }
L_08860A54:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08860A84;
    }
    goto L_08860A60;
L_08860A60:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08860A84;
    }
    goto L_08860A74;
L_08860A74:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08860A84;
L_08860A84:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08860A54;
      }
      goto L_08860A8C;
    }
L_08860A8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08860AD4;
      }
      goto L_08860A9C;
    }
L_08860A9C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860AC8;
      }
      goto L_08860AA8;
    }
L_08860AA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860AC8;
      }
      goto L_08860ABC;
    }
L_08860ABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08860AC8;
L_08860AC8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08860B18;
      }
      goto L_08860AD4;
    }
L_08860AD4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860B14;
      }
      goto L_08860ADC;
    }
L_08860ADC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08860B0C;
    }
    goto L_08860AE8;
L_08860AE8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08860B0C;
    }
    goto L_08860AFC;
L_08860AFC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08860B0C;
L_08860B0C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08860ADC;
      }
      goto L_08860B14;
    }
L_08860B14:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08860B18;
L_08860B18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08860B6C;
      }
      goto L_08860B20;
    }
L_08860B20:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860B6C;
      }
      goto L_08860B30;
    }
L_08860B30:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08860B60;
    }
    goto L_08860B3C;
L_08860B3C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08860B60;
    }
    goto L_08860B50;
L_08860B50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08860B60;
L_08860B60:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08860B30;
      }
      goto L_08860B68;
    }
L_08860B68:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08860B6C;
L_08860B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08860BC0;
      }
      goto L_08860B7C;
    }
L_08860B7C:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08860BB4;
    }
    goto L_08860B84;
L_08860B84:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08860BB4;
    }
    goto L_08860B8C;
L_08860B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08860BB4;
    }
    goto L_08860B98;
L_08860B98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08860BB0;
      }
      goto L_08860BA8;
    }
L_08860BA8:
    ctx.gpr[31] = (0x08860BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08860BB0u) goto L_08860BB0;
    return;
L_08860BB0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08860BB4;
L_08860BB4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08860B7C;
      }
      goto L_08860BBC;
    }
L_08860BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08860BC0;
L_08860BC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08860BD0;
      }
      goto L_08860BC8;
    }
L_08860BC8:
    ctx.gpr[31] = (0x08860BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08860BD0u) goto L_08860BD0;
    return;
L_08860BD0:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08860C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08860C4C;
      }
      goto L_08860C2C;
    }
L_08860C2C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    ctx.gpr[31] = (0x08860C44u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 664u, 0x08A069DCu>(ctx, &aot_mem) && ctx.pc == 0x08860C44u) goto L_08860C44;
    return;
L_08860C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08860C64;
      }
      goto L_08860C4C;
    }
L_08860C4C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    ctx.gpr[31] = (0x08860C64u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 664u, 0x08A069DCu>(ctx, &aot_mem) && ctx.pc == 0x08860C64u) goto L_08860C64;
    return;
L_08860C64:
    ctx.gpr[31] = (0x08860C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08860C6Cu) goto L_08860C6C;
    return;
L_08860C6C:
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    ctx.gpr[31] = (0x08860C7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 4u, 0x088E02C8u>(ctx, &aot_mem) && ctx.pc == 0x08860C7Cu) goto L_08860C7C;
    return;
L_08860C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (21248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (21504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (57600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (8448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2054));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (56832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (9216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (50943u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (18303u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 62720u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 8u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (17408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (54784u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (55041u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (39680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (20480u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (9472u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (7936u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (23552u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (23296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (24320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (25344u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (25600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (25856u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (24576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (26112u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (26368u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (26624u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (24832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (26880u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (27136u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (27392u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (25088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (27648u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (27904u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[5] = (28160u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (6144u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (6400u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (6656u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (6912u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (24064u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (51456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (51440u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (0u | 65280u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0886137Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x0886137Cu) goto L_0886137C;
    return;
L_0886137C:
    ctx.gpr[31] = (0x08861384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem) && ctx.pc == 0x08861384u) goto L_08861384;
    return;
L_08861384:
    ctx.gpr[31] = (0x0886138Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x0886138Cu) goto L_0886138C;
    return;
L_0886138C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08861398u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08861398u) goto L_08861398;
    return;
L_08861398:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_088613CC;
      }
      goto L_088613A4;
    }
L_088613A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4740));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_088613CC;
L_088613CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088613E0;
      }
      goto L_088613D4;
    }
L_088613D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088613E0;
L_088613E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08861424;
      }
      goto L_088613F0;
    }
L_088613F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08861414;
      }
      goto L_088613F8;
    }
L_088613F8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0886140C;
      }
      goto L_08861400;
    }
L_08861400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0886140C;
L_0886140C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    goto L_08861414;
L_08861414:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_08861448;
      }
      goto L_08861424;
    }
L_08861424:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08861440u);
    ctx.gpr[9] = (0u | 1u);
    goto L_0886097C;
L_08861440:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    goto L_08861448;
L_08861448:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861470;
      }
      goto L_08861450;
    }
L_08861450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0886146Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886146Cu) goto L_0886146C;
    return;
L_0886146C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08861470;
L_08861470:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861490;
      }
      goto L_08861478;
    }
L_08861478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861490;
      }
      goto L_08861488;
    }
L_08861488:
    ctx.gpr[31] = (0x08861490u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08861490u) goto L_08861490;
    return;
L_08861490:
    ctx.gpr[2] = (0u | 1u);
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
L_088614AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088614B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088614DC;
      }
      goto L_088614CC;
    }
L_088614CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088614F0;
      }
      goto L_088614D4;
    }
L_088614D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861500;
      }
      goto L_088614DC;
    }
L_088614DC:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088614D4;
      }
      goto L_088614E8;
    }
L_088614E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188)));
      if (branch_taken) {
          goto L_08861500;
      }
      goto L_088614F0;
    }
L_088614F0:
    ctx.gpr[31] = (0x088614F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 251u, 0x08B21418u>(ctx, &aot_mem) && ctx.pc == 0x088614F8u) goto L_088614F8;
    return;
L_088614F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08861500;
L_08861500:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861510:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861520;
    }
L_08861520:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26512)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861538:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861548;
    }
L_08861548:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_0886155C;
    }
L_0886155C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861568;
    }
L_08861568:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861574;
    }
L_08861574:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_0886157C;
    }
L_0886157C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861588;
    }
L_08861588:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_08861594;
    }
L_08861594:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_088615A0;
    }
L_088615A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_088615A8;
    }
L_088615A8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088615B4;
      }
      goto L_088615B4;
    }
L_088615B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088615BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29184)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088615D4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08861510;
L_088615D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29180)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088615E4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    goto L_08861510;
L_088615E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[9] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[9] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088617FC;
      }
      goto L_08861688;
    }
L_08861688:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26472)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088616A0:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[31] = (0x088616ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem) && ctx.pc == 0x088616ACu) goto L_088616AC;
    return;
L_088616AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_088616B4;
    }
L_088616B4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_088616E4;
      }
      goto L_088616C8;
    }
L_088616C8:
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088616F8;
      }
      goto L_088616E4;
    }
L_088616E4:
    ctx.gpr[6] = (8960u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_088616F8;
L_088616F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_08861700;
    }
L_08861700:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_0886172C;
      }
      goto L_08861714;
    }
L_08861714:
    ctx.gpr[6] = (20480u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861744;
      }
      goto L_0886172C;
    }
L_0886172C:
    ctx.gpr[6] = (20480u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_08861744;
L_08861744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_0886174C;
    }
L_0886174C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_08861780;
    }
L_08861780:
    ctx.gpr[31] = (0x08861788u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29184), ctx.gpr[4]);
    goto L_088615BC;
L_08861788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861800;
      }
      goto L_08861790;
    }
L_08861790:
    ctx.gpr[31] = (0x08861798u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29180), ctx.gpr[4]);
    goto L_088615BC;
L_08861798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08861788;
      }
      goto L_088617A0;
    }
L_088617A0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_088617D4;
      }
      goto L_088617B0;
    }
L_088617B0:
    ctx.gpr[6] = (7936u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088617EC;
      }
      goto L_088617D4;
    }
L_088617D4:
    ctx.gpr[6] = (7936u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29188), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    goto L_088617EC;
L_088617EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08861788;
      }
      goto L_088617F4;
    }
L_088617F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7924), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861788;
      }
      goto L_088617FC;
    }
L_088617FC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08861800;
L_08861800:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886180C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861814:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886181C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861824:
    ctx.gpr[8] = (ctx.gpr[5] & 1023u);
    ctx.gpr[8] = (ctx.gpr[8] << 10u);
    ctx.gpr[9] = (54272u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[4] & 1023u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[7] = (54528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(29552), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0886189Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886189Cu) goto L_0886189C;
    return;
L_0886189C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088618A8:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
      if (branch_taken) {
          goto L_08861968;
      }
      goto L_088618C4;
    }
L_088618C4:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088618E0;
L_088618E0:
    ctx.set_vfpu_scalar_bits_ct<5u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<37u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<69u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<6u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits_ct<38u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits_ct<70u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits_ct<7u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits_ct<39u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits_ct<71u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<104u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<105u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<106u, 34u, 7u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088618E0;
      }
      goto L_08861960;
    }
L_08861960:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088619A0;
      }
      goto L_08861968;
    }
L_08861968:
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), ctx.vfpu_scalar_bits_ct<8u>());
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8), ctx.vfpu_scalar_bits_ct<40u>());
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.vfpu_scalar_bits_ct<72u>());
      if (branch_taken) {
          goto L_08861968;
      }
      goto L_088619A0;
    }
L_088619A0:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088619AC:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
      if (branch_taken) {
          goto L_08861A3C;
      }
      goto L_088619C8;
    }
L_088619C8:
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_088619D4;
L_088619D4:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<11u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<43u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<75u, 34u, 7u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-64);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088619D4;
      }
      goto L_08861A38;
    }
L_08861A38:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_08861A6C;
      }
      goto L_08861A40;
    }
L_08861A3C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_08861A40;
L_08861A40:
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    goto L_08861A44;
L_08861A44:
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    { const bool branch_taken = ctx.gpr[9] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_08861A44;
      }
      goto L_08861A6C;
    }
L_08861A6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861A7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08861B44;
      }
      goto L_08861A9C;
    }
L_08861A9C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 109 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08861ACC;
    }
    goto L_08861AA8;
L_08861AA8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861ABC;
      }
      goto L_08861AB4;
    }
L_08861AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(93));
      if (branch_taken) {
          goto L_08861B34;
      }
      goto L_08861ABC;
    }
L_08861ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto L_08861B34;
      }
      goto L_08861ACC;
    }
L_08861ACC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08861B1C;
      }
      goto L_08861B10;
    }
L_08861B10:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861B24;
      }
      goto L_08861B1C;
    }
L_08861B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(5996));
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861B24;
    }
L_08861B24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-109));
    goto L_08861B34;
L_08861B34:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861B44;
    }
L_08861B44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 230 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08861B74;
      }
      goto L_08861B64;
    }
L_08861B64:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-205));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861BE4;
      }
      goto L_08861B74;
    }
L_08861B74:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(508)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08861BCC;
      }
      goto L_08861BC0;
    }
L_08861BC0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861BD4;
      }
      goto L_08861BCC;
    }
L_08861BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(5996));
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861BD4;
    }
L_08861BD4:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-230));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08861BE4;
L_08861BE4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861BF4;
      }
      goto L_08861BF4;
    }
L_08861BF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861BFC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08861C04;
L_08861C04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861C2C;
      }
      goto L_08861C10;
    }
L_08861C10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08861C04;
      }
      goto L_08861C24;
    }
L_08861C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861C2C;
      }
      goto L_08861C2C;
    }
L_08861C2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08861C48u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08861C5C;
L_08861C48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861C5C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    goto L_08861C64;
L_08861C64:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861C64;
      }
      goto L_08861C88;
    }
L_08861C88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08861CB8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08861BFC;
L_08861CB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861CD8;
      }
      goto L_08861CC4;
    }
L_08861CC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08861CD8;
L_08861CD8:
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
L_08861CF0:
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08861CF8;
L_08861CF8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08861D10;
      }
      goto L_08861D04;
    }
L_08861D04:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08861D2C;
      }
      goto L_08861D10;
    }
L_08861D10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08861CF8;
      }
      goto L_08861D24;
    }
L_08861D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08861D30;
      }
      goto L_08861D2C;
    }
L_08861D2C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08861D30;
L_08861D30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08861D48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08861D48u) goto L_08861D48;
    return;
L_08861D48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (49016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861DE8;
      }
      goto L_08861D78;
    }
L_08861D78:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861DE8;
      }
      goto L_08861DAC;
    }
L_08861DAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861DE8;
      }
      goto L_08861DE0;
    }
L_08861DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08861DEC;
      }
      goto L_08861DE8;
    }
L_08861DE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08861DEC;
L_08861DEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861DF8:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08861E00;
L_08861E00:
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861E00;
      }
      goto L_08861E24;
    }
L_08861E24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08861E94;
      }
      goto L_08861E80;
    }
L_08861E80:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08861EB0;
      }
      goto L_08861E94;
    }
L_08861E94:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[21] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08861EB0;
L_08861EB0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08861EB8;
L_08861EB8:
    ctx.gpr[19] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08861ECCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08861ECCu) goto L_08861ECC;
    return;
L_08861ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861F04;
      }
      goto L_08861ED4;
    }
L_08861ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08861EE4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08861D38;
L_08861EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861EFC;
      }
      goto L_08861EEC;
    }
L_08861EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08861F0C;
      }
      goto L_08861EFC;
    }
L_08861EFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08861F0C;
      }
      goto L_08861F04;
    }
L_08861F04:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_08861F0C;
L_08861F0C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861EB8;
      }
      goto L_08861F20;
    }
L_08861F20:
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
L_08861F44:
    ctx.gpr[8] = (0u | 0u);
    goto L_08861F48;
L_08861F48:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861F48;
      }
      goto L_08861F5C;
    }
L_08861F5C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08861F68;
L_08861F68:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861F94;
      }
      goto L_08861F70;
    }
L_08861F70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08861F94;
      }
      goto L_08861F7C;
    }
L_08861F7C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08861F68;
      }
      goto L_08861F94;
    }
L_08861F94:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861FA0:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08861FA8;
L_08861FA8:
    ctx.gpr[7] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08861FC4;
      }
      goto L_08861FBC;
    }
L_08861FBC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08861FC4;
L_08861FC4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861FA8;
      }
      goto L_08861FD8;
    }
L_08861FD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861FE0:
    ctx.gpr[7] = (0u | 0u);
    goto L_08861FE4;
L_08861FE4:
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08862018;
      }
      goto L_08861FF8;
    }
L_08861FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862010;
      }
      goto L_08862008;
    }
L_08862008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08862030;
      }
      goto L_08862010;
    }
L_08862010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862030;
      }
      goto L_08862018;
    }
L_08862018:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861FE4;
      }
      goto L_0886202C;
    }
L_0886202C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08862030;
L_08862030:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08862060;
L_08862060:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862060;
      }
      goto L_088620A4;
    }
L_088620A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088620AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (50588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    goto L_0886210C;
L_0886210C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088621D4;
      }
      goto L_08862118;
    }
L_08862118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088621D4;
      }
      goto L_08862130;
    }
L_08862130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x0886213Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x0886213Cu) goto L_0886213C;
    return;
L_0886213C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088621AC;
      }
      goto L_08862148;
    }
L_08862148:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862194;
      }
      goto L_0886218C;
    }
L_0886218C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08862198;
      }
      goto L_08862194;
    }
L_08862194:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08862198;
L_08862198:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088621D4;
      }
      goto L_088621AC;
    }
L_088621AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_088621D4;
L_088621D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0886210C;
      }
      goto L_088621E8;
    }
L_088621E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886221C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886224Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x0886224Cu) goto L_0886224C;
    return;
L_0886224C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088622D8;
      }
      goto L_08862258;
    }
L_08862258:
    ctx.gpr[7] = (0u | 0u);
    goto L_0886225C;
L_0886225C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886225C;
      }
      goto L_08862270;
    }
L_08862270:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0886227C;
L_0886227C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088622B0;
      }
      goto L_08862284;
    }
L_08862284:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_088622B0;
      }
      goto L_08862290;
    }
L_08862290:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0886227C;
      }
      goto L_088622B0;
    }
L_088622B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_088622D8;
L_088622D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088622F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08862310;
L_08862310:
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08862358;
      }
      goto L_0886232C;
    }
L_0886232C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08862358;
L_08862358:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862310;
      }
      goto L_0886236C;
    }
L_0886236C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862374:
    ctx.gpr[7] = (0u | 0u);
    goto L_08862378;
L_08862378:
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088623B0;
      }
      goto L_08862394;
    }
L_08862394:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088623A8;
      }
      goto L_088623A0;
    }
L_088623A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088623C8;
      }
      goto L_088623A8;
    }
L_088623A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088623C8;
      }
      goto L_088623B0;
    }
L_088623B0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862378;
      }
      goto L_088623C4;
    }
L_088623C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088623C8;
L_088623C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088623D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088623E0u);
    // nop
    goto L_08861A7C;
L_088623E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088623EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(527));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886240Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29124));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0886240Cu) goto L_0886240C;
    return;
L_0886240C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0886241C;
L_0886241C:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886241C;
      }
      goto L_0886243C;
    }
L_0886243C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(522), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(523), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08862458;
L_08862458:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 106 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862458;
      }
      goto L_08862478;
    }
L_08862478:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088624A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7952), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(522)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088624C8;
      }
      goto L_088624C0;
    }
L_088624C0:
    ctx.gpr[31] = (0x088624C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08862C50;
L_088624C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862510;
      }
      goto L_088624D4;
    }
L_088624D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8025)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08862510;
      }
      goto L_088624E4;
    }
L_088624E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08862510;
      }
      goto L_088624F4;
    }
L_088624F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08862510;
L_08862510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886253C;
      }
      goto L_08862524;
    }
L_08862524:
    ctx.gpr[31] = (0x0886252Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088625E8;
L_0886252C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862524;
      }
      goto L_08862534;
    }
L_08862534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_0886253C;
    }
L_0886253C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(523)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_08862548;
    }
L_08862548:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0886256C;
      }
      goto L_0886255C;
    }
L_0886255C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08862570;
      }
      goto L_08862568;
    }
L_08862568:
    ctx.gpr[5] = (0u | 1u);
    goto L_0886256C;
L_0886256C:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08862570;
L_08862570:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_08862578;
    }
L_08862578:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), 0u);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27808));
    ctx.gpr[16] = (2240u << 16u);
    goto L_0886258C;
L_0886258C:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088625AC;
      }
      goto L_088625A8;
    }
L_088625A8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    goto L_088625AC;
L_088625AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886258C;
      }
      goto L_088625C4;
    }
L_088625C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26272)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088625D8;
      }
      goto L_088625D0;
    }
L_088625D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26272));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_088625D8;
L_088625D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088625E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[5] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862630;
      }
      goto L_08862624;
    }
L_08862624:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08862634;
      }
      goto L_08862630;
    }
L_08862630:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    goto L_08862634;
L_08862634:
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(18144));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08862674;
      }
      goto L_08862668;
    }
L_08862668:
    ctx.gpr[9] = (ctx.gpr[8] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088626B0;
      }
      goto L_08862674;
    }
L_08862674:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0886269C;
      }
      goto L_0886267C;
    }
L_0886267C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0886269C;
      }
      goto L_0886269C;
    }
L_0886269C:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088626A4u);
    // nop
    ctx.pc = jump_target;
    rt.invoke_native_fast_path(0x088B1780u, ctx);
    if (ctx.pc == 0x088626A4u) goto L_088626A4;
    return;
L_088626A4:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088626B4;
      }
      goto L_088626B0;
    }
L_088626B0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088626B4;
L_088626B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088626C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088626D8;
      }
      goto L_088626CC;
    }
L_088626CC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088626E0;
      }
      goto L_088626D8;
    }
L_088626D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088626E0;
L_088626E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088626F0;
      }
      goto L_088626E8;
    }
L_088626E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_088626F0;
L_088626F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088626F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862714;
      }
      goto L_08862710;
    }
L_08862710:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08862714;
L_08862714:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886271C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08862868;
      }
      goto L_08862748;
    }
L_08862748:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_0886276C;
    }
L_0886276C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862778;
    }
L_08862778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862794;
    }
L_08862794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_088627BC;
    }
L_088627BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_088627DC;
    }
L_088627DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862804;
    }
L_08862804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862844;
    }
L_08862844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08862884;
      }
      goto L_08862868;
    }
L_08862868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08862880u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088623D0;
L_08862880:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08862884;
L_08862884:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_088628FC;
      }
      goto L_088628D0;
    }
L_088628D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    goto L_088628D4;
L_088628D4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088628E8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_088623D0;
L_088628E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088628D4;
      }
      goto L_088628FC;
    }
L_088628FC:
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
L_08862920:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886292C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886296Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0886296Cu) goto L_0886296C;
    return;
L_0886296C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088629A4;
      }
      goto L_08862988;
    }
L_08862988:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0886299Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_088623D0;
L_0886299C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088629A8;
      }
      goto L_088629A4;
    }
L_088629A4:
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_088629A8;
L_088629A8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088629CC;
      }
      goto L_088629B0;
    }
L_088629B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x088629C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088629C4u) goto L_088629C4;
    return;
L_088629C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088629E0;
      }
      goto L_088629CC;
    }
L_088629CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x088629E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088629E0u) goto L_088629E0;
    return;
L_088629E0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862A04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08862A34u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08862A34u) goto L_08862A34;
    return;
L_08862A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08862A40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08862A40u) goto L_08862A40;
    return;
L_08862A40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862AEC;
      }
      goto L_08862A4C;
    }
L_08862A4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[19] = ctx.fpr[12] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[0];
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[0];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862AF4;
      }
      goto L_08862AE4;
    }
L_08862AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862AF8;
      }
      goto L_08862AEC;
    }
L_08862AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862AF4;
    }
L_08862AF4:
    ctx.gpr[17] = (0u | 0u);
    goto L_08862AF8;
L_08862AF8:
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[12];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862B14;
      }
      goto L_08862B10;
    }
L_08862B10:
    ctx.gpr[17] = (0u | 0u);
    goto L_08862B14;
L_08862B14:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862B68;
      }
      goto L_08862B1C;
    }
L_08862B1C:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[17];
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[16];
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862B50;
      }
      goto L_08862B4C;
    }
L_08862B4C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08862B50;
L_08862B50:
    ctx.fpr[18] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862B68;
      }
      goto L_08862B64;
    }
L_08862B64:
    ctx.gpr[17] = (0u | 0u);
    goto L_08862B68;
L_08862B68:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862BBC;
      }
      goto L_08862B70;
    }
L_08862B70:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[18] - ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[16];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862BA4;
      }
      goto L_08862BA0;
    }
L_08862BA0:
    ctx.gpr[17] = (0u | 0u);
    goto L_08862BA4;
L_08862BA4:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08862BBC;
      }
      goto L_08862BB8;
    }
L_08862BB8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08862BBC;
L_08862BBC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08862BE8;
      }
      goto L_08862BE0;
    }
L_08862BE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862BE8;
    }
L_08862BE8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08862C14;
      }
      goto L_08862C00;
    }
L_08862C00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862C14;
    }
L_08862C14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862C38;
      }
      goto L_08862C34;
    }
L_08862C34:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08862C38;
L_08862C38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862C50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862C6C;
    }
L_08862C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862C78;
    }
L_08862C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862C90;
    }
L_08862C90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[31] = (0x08862CB8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 178u, 0x08960DB0u>(ctx, &aot_mem) && ctx.pc == 0x08862CB8u) goto L_08862CB8;
    return;
L_08862CB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862CE8;
      }
      goto L_08862CC0;
    }
L_08862CC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08862CE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 182u, 0x08960DD4u>(ctx, &aot_mem) && ctx.pc == 0x08862CE0u) goto L_08862CE0;
    return;
L_08862CE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862D3C;
      }
      goto L_08862CE8;
    }
L_08862CE8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862D10;
      }
      goto L_08862CF8;
    }
L_08862CF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862CF8;
      }
      goto L_08862D0C;
    }
L_08862D0C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08862D10;
L_08862D10:
    ctx.gpr[31] = (0x08862D18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0886309C;
L_08862D18:
    ctx.gpr[31] = (0x08862D20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 238u, 0x08AB9394u>(ctx, &aot_mem) && ctx.pc == 0x08862D20u) goto L_08862D20;
    return;
L_08862D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), 0u);
    goto L_08862D3C;
L_08862D3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08862D68u);
    ctx.gpr[16] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08862D68u) goto L_08862D68;
    return;
L_08862D68:
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08862E6C;
      }
      goto L_08862D74;
    }
L_08862D74:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862D8C:
    ctx.gpr[31] = (0x08862D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08862D94u) goto L_08862D94;
    return;
L_08862D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862D9C;
    }
L_08862D9C:
    ctx.gpr[31] = (0x08862DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08862DA4u) goto L_08862DA4;
    return;
L_08862DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DAC;
    }
L_08862DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DB4;
    }
L_08862DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DBC;
    }
L_08862DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DC4;
    }
L_08862DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DCC;
    }
L_08862DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DD4;
    }
L_08862DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DDC;
    }
L_08862DDC:
    ctx.gpr[31] = (0x08862DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 972u, 0x0898BC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08862DE4u) goto L_08862DE4;
    return;
L_08862DE4:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862DF0;
    }
L_08862DF0:
    ctx.gpr[31] = (0x08862DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08862DF8u) goto L_08862DF8;
    return;
L_08862DF8:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E04;
    }
L_08862E04:
    ctx.gpr[31] = (0x08862E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 980u, 0x0898BC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08862E0Cu) goto L_08862E0C;
    return;
L_08862E0C:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E18;
    }
L_08862E18:
    ctx.gpr[31] = (0x08862E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 984u, 0x0898BCACu>(ctx, &aot_mem) && ctx.pc == 0x08862E20u) goto L_08862E20;
    return;
L_08862E20:
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E2C;
    }
L_08862E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E34;
    }
L_08862E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E3C;
    }
L_08862E3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E44;
    }
L_08862E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E4C;
    }
L_08862E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E54;
    }
L_08862E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E5C;
    }
L_08862E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E64;
    }
L_08862E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08862E70;
      }
      goto L_08862E6C;
    }
L_08862E6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08862E70;
L_08862E70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862E80:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08862EA0;
      }
      goto L_08862E8C;
    }
L_08862E8C:
    ctx.gpr[4] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08862EA8;
      }
      goto L_08862E98;
    }
L_08862E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862EE4;
      }
      goto L_08862EA0;
    }
L_08862EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862EA8;
    }
L_08862EA8:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(49) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862EDC;
      }
      goto L_08862EB4;
    }
L_08862EB4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862ED4;
    }
L_08862ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862EDC;
    }
L_08862EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F24;
      }
      goto L_08862EE4;
    }
L_08862EE4:
    ctx.gpr[4] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08862F24;
      }
      goto L_08862EF0;
    }
L_08862EF0:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(49) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F24;
      }
      goto L_08862EFC;
    }
L_08862EFC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862F1C;
    }
L_08862F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08862F28;
      }
      goto L_08862F24;
    }
L_08862F24:
    ctx.gpr[2] = (0u | 0u);
    goto L_08862F28;
L_08862F28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08862F30:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 117 ? 1u : 0u);
      if (branch_taken) {
          goto L_08862F80;
      }
      goto L_08862F40;
    }
L_08862F40:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
        goto L_08862F70;
    }
    goto L_08862F4C;
L_08862F4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862F58;
    }
L_08862F58:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862F68;
      }
      goto L_08862F60;
    }
L_08862F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862F68;
    }
L_08862F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862F70;
    }
L_08862F70:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862FC4;
      }
      goto L_08862F78;
    }
L_08862F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862FDC;
      }
      goto L_08862F80;
    }
L_08862F80:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 119 ? 1u : 0u);
      if (branch_taken) {
          goto L_08862F9C;
      }
      goto L_08862F88;
    }
L_08862F88:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862F94;
    }
L_08862F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862FF4;
      }
      goto L_08862F9C;
    }
L_08862F9C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886300C;
      }
      goto L_08862FA4;
    }
L_08862FA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FAC;
    }
L_08862FAC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862FBC;
      }
      goto L_08862FB4;
    }
L_08862FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FBC;
    }
L_08862FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862FC4;
    }
L_08862FC4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862FD4;
      }
      goto L_08862FCC;
    }
L_08862FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FD4;
    }
L_08862FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862FDC;
    }
L_08862FDC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08862FEC;
      }
      goto L_08862FE4;
    }
L_08862FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08862FEC;
    }
L_08862FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_08862FF4;
    }
L_08862FF4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863004;
      }
      goto L_08862FFC;
    }
L_08862FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_08863004;
    }
L_08863004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863020;
      }
      goto L_0886300C;
    }
L_0886300C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886301C;
      }
      goto L_08863014;
    }
L_08863014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08862F60;
      }
      goto L_0886301C;
    }
L_0886301C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08863020;
L_08863020:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863028:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863058;
      }
      goto L_08863038;
    }
L_08863038:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863050:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863060;
      }
      goto L_08863058;
    }
L_08863058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863094;
      }
      goto L_08863060;
    }
L_08863060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863094;
      }
      goto L_08863068;
    }
L_08863068:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863078;
      }
      goto L_08863070;
    }
L_08863070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863058;
      }
      goto L_08863078;
    }
L_08863078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863094;
      }
      goto L_08863080;
    }
L_08863080:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863090;
      }
      goto L_08863088;
    }
L_08863088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863058;
      }
      goto L_08863090;
    }
L_08863090:
    ctx.gpr[2] = (0u | 1u);
    goto L_08863094;
L_08863094:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886309C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(516), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088631B4;
      }
      goto L_088630D0;
    }
L_088630D0:
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_088630EC;
      }
      goto L_088630E0;
    }
L_088630E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088630EC;
L_088630EC:
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[8] >> 24u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(84));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863190;
      }
      goto L_08863160;
    }
L_08863160:
    ctx.gpr[10] = (2236u << 16u);
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(29704));
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[11] | 0u);
    goto L_08863170;
L_08863170:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863170;
      }
      goto L_0886318C;
    }
L_0886318C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    goto L_08863190;
L_08863190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[10] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088631B4u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    goto L_08862890;
L_088631B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088631C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886321Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem) && ctx.pc == 0x0886321Cu) goto L_0886321C;
    return;
L_0886321C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863224;
    }
L_08863224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863254;
    }
L_08863254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (16253u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 28836u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863284;
    }
L_08863284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_088632A8;
    }
L_088632A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_088632CC;
    }
L_088632CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08863380u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08863380u) goto L_08863380;
    return;
L_08863380:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863390;
      }
      goto L_08863388;
    }
L_08863388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08863394;
      }
      goto L_08863390;
    }
L_08863390:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863394;
L_08863394:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088633B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088633DC;
      }
      goto L_088633D0;
    }
L_088633D0:
    ctx.gpr[31] = (0x088633D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 365u, 0x08871414u>(ctx, &aot_mem) && ctx.pc == 0x088633D8u) goto L_088633D8;
    return;
L_088633D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29152), ctx.gpr[16]);
    goto L_088633DC;
L_088633DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886341C;
      }
      goto L_088633E8;
    }
L_088633E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863404;
      }
      goto L_088633F4;
    }
L_088633F4:
    ctx.gpr[31] = (0x088633FCu);
    // nop
    ctx.pc = 0x08B73454u;
    return;
L_088633FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863410;
      }
      goto L_08863404;
    }
L_08863404:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08863410u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08863410u) goto L_08863410;
    return;
L_08863410:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7972), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7968), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148), 0u);
    goto L_0886341C;
L_0886341C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886342C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7964)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863460;
      }
      goto L_08863440;
    }
L_08863440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29144)));
    goto L_08863444;
L_08863444:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08863468;
      }
      goto L_08863450;
    }
L_08863450:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08863444;
      }
      goto L_08863460;
    }
L_08863460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863468;
      }
      goto L_08863468;
    }
L_08863468:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7960)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08863494u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088626C0;
L_08863494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29136)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29136), ctx.gpr[6]);
    ctx.gpr[31] = (0x088634ACu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088623EC;
L_088634AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7956));
    ctx.gpr[31] = (0x088634BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088626F8;
L_088634BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088634DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088634ECu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08863470;
L_088634EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088634F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863524;
      }
      goto L_08863504;
    }
L_08863504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08863524;
      }
      goto L_0886351C;
    }
L_0886351C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863528;
      }
      goto L_08863524;
    }
L_08863524:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863528;
L_08863528:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08863540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08863540u) goto L_08863540;
    return;
L_08863540:
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27896));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1396));
    goto L_08863554;
L_08863554:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863590;
      }
      goto L_08863560;
    }
L_08863560:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08863590;
      }
      goto L_0886356C;
    }
L_0886356C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    goto L_08863590;
L_08863590:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08863554;
      }
      goto L_088635A0;
    }
L_088635A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088635AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (2240u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-27896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088635E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088635E0u) goto L_088635E0;
    return;
L_088635E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886369C;
      }
      goto L_088635F4;
    }
L_088635F4:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088635FC;
L_088635FC:
    ctx.gpr[31] = (0x08863604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08863604u) goto L_08863604;
    return;
L_08863604:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08863610u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08863610u) goto L_08863610;
    return;
L_08863610:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08863624u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08863624u) goto L_08863624;
    return;
L_08863624:
    ctx.gpr[31] = (0x0886362Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x0886362Cu) goto L_0886362C;
    return;
L_0886362C:
    ctx.gpr[31] = (0x08863634u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08863634u) goto L_08863634;
    return;
L_08863634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08863660;
      }
      goto L_08863640;
    }
L_08863640:
    ctx.gpr[31] = (0x08863648u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08863648u) goto L_08863648;
    return;
L_08863648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08863658u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08863658u) goto L_08863658;
    return;
L_08863658:
    ctx.gpr[31] = (0x08863660u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08863660u) goto L_08863660;
    return;
L_08863660:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863674;
      }
      goto L_0886366C;
    }
L_0886366C:
    ctx.gpr[31] = (0x08863674u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08863674u) goto L_08863674;
    return;
L_08863674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08863688u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08863688u) goto L_08863688;
    return;
L_08863688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088635FC;
      }
      goto L_0886369C;
    }
L_0886369C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088636C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863738;
      }
      goto L_08863710;
    }
L_08863710:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863738;
      }
      goto L_08863720;
    }
L_08863720:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08863740;
      }
      goto L_08863730;
    }
L_08863730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088637AC;
      }
      goto L_08863738;
    }
L_08863738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088637B0;
      }
      goto L_08863740;
    }
L_08863740:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863768;
      }
      goto L_0886374C;
    }
L_0886374C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08863760u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08863760u) goto L_08863760;
    return;
L_08863760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886379C;
      }
      goto L_08863768;
    }
L_08863768:
    ctx.gpr[31] = (0x08863770u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0886342C;
L_08863770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08863790;
      }
      goto L_0886377C;
    }
L_0886377C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863788u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08863788u) goto L_08863788;
    return;
L_08863788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886379C;
      }
      goto L_08863790;
    }
L_08863790:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0886379Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x0886379Cu) goto L_0886379C;
    return;
L_0886379C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863740;
      }
      goto L_088637AC;
    }
L_088637AC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088637B0;
L_088637B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088637CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08863804;
      }
      goto L_088637F4;
    }
L_088637F4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08863810;
      }
      goto L_08863804;
    }
L_08863804:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08863810;
L_08863810:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863830;
      }
      goto L_08863820;
    }
L_08863820:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_0886383C;
      }
      goto L_08863830;
    }
L_08863830:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    goto L_0886383C;
L_0886383C:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08863874;
      }
      goto L_0886385C;
    }
L_0886385C:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863888;
      }
      goto L_08863874;
    }
L_08863874:
    ctx.gpr[31] = (0x0886387Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x0886387Cu) goto L_0886387C;
    return;
L_0886387C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    goto L_08863888;
L_08863888:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[22];
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088638C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 291u, 0x08A9A650u>(ctx, &aot_mem) && ctx.pc == 0x088638C0u) goto L_088638C0;
    return;
L_088638C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088638D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 64u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[31] = (0x0886394Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x0886394Cu) goto L_0886394C;
    return;
L_0886394C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_08863B20;
      }
      goto L_08863960;
    }
L_08863960:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    goto L_08863968;
L_08863968:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08863998;
    }
    goto L_08863984;
L_08863984:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863B10;
      }
      goto L_08863990;
    }
L_08863990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088639A8;
      }
      goto L_08863998;
    }
L_08863998:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863AB4;
      }
      goto L_088639A0;
    }
L_088639A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863B10;
      }
      goto L_088639A8;
    }
L_088639A8:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639B4;
    }
L_088639B4:
    ctx.gpr[31] = (0x088639BCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088639BCu) goto L_088639BC;
    return;
L_088639BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639C4;
    }
L_088639C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639D0;
    }
L_088639D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088639FC;
      }
      goto L_088639DC;
    }
L_088639DC:
    ctx.gpr[31] = (0x088639E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x088639E4u) goto L_088639E4;
    return;
L_088639E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088639F4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem) && ctx.pc == 0x088639F4u) goto L_088639F4;
    return;
L_088639F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863A1C;
      }
      goto L_088639FC;
    }
L_088639FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863A24;
      }
      goto L_08863A10;
    }
L_08863A10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863B14;
      }
      goto L_08863A1C;
    }
L_08863A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863B24;
      }
      goto L_08863A24;
    }
L_08863A24:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08863A30u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08863A30u) goto L_08863A30;
    return;
L_08863A30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A38;
    }
L_08863A38:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08863A44u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08863A44u) goto L_08863A44;
    return;
L_08863A44:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08863A50u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08863A50u) goto L_08863A50;
    return;
L_08863A50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A58;
    }
L_08863A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A64;
    }
L_08863A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08863A90;
      }
      goto L_08863A70;
    }
L_08863A70:
    ctx.gpr[31] = (0x08863A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08863A78u) goto L_08863A78;
    return;
L_08863A78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863A88u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem) && ctx.pc == 0x08863A88u) goto L_08863A88;
    return;
L_08863A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863AAC;
      }
      goto L_08863A90;
    }
L_08863A90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863A24;
      }
      goto L_08863AA4;
    }
L_08863AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08863A10;
      }
      goto L_08863AAC;
    }
L_08863AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863B24;
      }
      goto L_08863AB4;
    }
L_08863AB4:
    ctx.gpr[31] = (0x08863ABCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08863ABCu) goto L_08863ABC;
    return;
L_08863ABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863AFC;
      }
      goto L_08863AC4;
    }
L_08863AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08863AFC;
      }
      goto L_08863AD0;
    }
L_08863AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08863AFC;
      }
      goto L_08863ADC;
    }
L_08863ADC:
    ctx.gpr[31] = (0x08863AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08863AE4u) goto L_08863AE4;
    return;
L_08863AE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863AF4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem) && ctx.pc == 0x08863AF4u) goto L_08863AF4;
    return;
L_08863AF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863B08;
      }
      goto L_08863AFC;
    }
L_08863AFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08863B14;
      }
      goto L_08863B08;
    }
L_08863B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863B24;
      }
      goto L_08863B10;
    }
L_08863B10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08863B14;
L_08863B14:
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08863968;
      }
      goto L_08863B20;
    }
L_08863B20:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08863B24;
L_08863B24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08863B80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08863B80u) goto L_08863B80;
    return;
L_08863B80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863B90;
    }
L_08863B90:
    ctx.gpr[31] = (0x08863B98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08863B98u) goto L_08863B98;
    return;
L_08863B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863BA0;
    }
L_08863BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863BB0;
    }
L_08863BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863BE0;
      }
      goto L_08863BC0;
    }
L_08863BC0:
    ctx.gpr[31] = (0x08863BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08863BC8u) goto L_08863BC8;
    return;
L_08863BC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863BD8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem) && ctx.pc == 0x08863BD8u) goto L_08863BD8;
    return;
L_08863BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863BFC;
      }
      goto L_08863BE0;
    }
L_08863BE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_08863C84;
      }
      goto L_08863BF4;
    }
L_08863BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863BFC;
    }
L_08863BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08863C90;
      }
      goto L_08863C04;
    }
L_08863C04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08863C10u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08863C10u) goto L_08863C10;
    return;
L_08863C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C18;
    }
L_08863C18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08863C24u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08863C24u) goto L_08863C24;
    return;
L_08863C24:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08863C30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08863C30u) goto L_08863C30;
    return;
L_08863C30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C38;
    }
L_08863C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C44;
    }
L_08863C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08863C70;
      }
      goto L_08863C50;
    }
L_08863C50:
    ctx.gpr[31] = (0x08863C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08863C58u) goto L_08863C58;
    return;
L_08863C58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863C68u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem) && ctx.pc == 0x08863C68u) goto L_08863C68;
    return;
L_08863C68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863C8C;
      }
      goto L_08863C70;
    }
L_08863C70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863C04;
      }
      goto L_08863C84;
    }
L_08863C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863C90;
      }
      goto L_08863C8C;
    }
L_08863C8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863C90;
L_08863C90:
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
L_08863CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08863CC8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08863CC8u) goto L_08863CC8;
    return;
L_08863CC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863D08;
      }
      goto L_08863CD0;
    }
L_08863CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (15395u << 16u);
      if (branch_taken) {
          goto L_08863D08;
      }
      goto L_08863CDC;
    }
L_08863CDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D00;
    }
L_08863D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863D8C;
      }
      goto L_08863D08;
    }
L_08863D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08863D1C;
      }
      goto L_08863D14;
    }
L_08863D14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D1C;
    }
L_08863D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D2C;
    }
L_08863D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D3C;
    }
L_08863D3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D44;
    }
L_08863D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D54;
    }
L_08863D54:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D6C;
    }
L_08863D6C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(796)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863D88;
      }
      goto L_08863D80;
    }
L_08863D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863D8C;
      }
      goto L_08863D88;
    }
L_08863D88:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863D8C;
L_08863D8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863D9C:
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08863DCC;
      }
      goto L_08863DC4;
    }
L_08863DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08863DD0;
      }
      goto L_08863DCC;
    }
L_08863DCC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08863DD0;
L_08863DD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08863EE0;
      }
      goto L_08863DEC;
    }
L_08863DEC:
    ctx.gpr[31] = (0x08863DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08863DF4u) goto L_08863DF4;
    return;
L_08863DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863E7C;
      }
      goto L_08863DFC;
    }
L_08863DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E08;
    }
L_08863E08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E14;
    }
L_08863E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863E44;
      }
      goto L_08863E3C;
    }
L_08863E3C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[5]);
    goto L_08863E44;
L_08863E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E54;
    }
L_08863E54:
    ctx.gpr[31] = (0x08863E5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem) && ctx.pc == 0x08863E5Cu) goto L_08863E5C;
    return;
L_08863E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863E70;
      }
      goto L_08863E64;
    }
L_08863E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08863E70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08863E70u) goto L_08863E70;
    return;
L_08863E70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863E7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem) && ctx.pc == 0x08863E7Cu) goto L_08863E7C;
    return;
L_08863E7C:
    ctx.gpr[31] = (0x08863E84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem) && ctx.pc == 0x08863E84u) goto L_08863E84;
    return;
L_08863E84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08863EA4;
      }
      goto L_08863E94;
    }
L_08863E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08863EAC;
      }
      goto L_08863EA4;
    }
L_08863EA4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08863EAC;
L_08863EAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08863EBC;
      }
      goto L_08863EB4;
    }
L_08863EB4:
    ctx.gpr[31] = (0x08863EBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem) && ctx.pc == 0x08863EBCu) goto L_08863EBC;
    return;
L_08863EBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08863EE0;
      }
      goto L_08863EC4;
    }
L_08863EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08863EE0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08863EE0u) goto L_08863EE0;
    return;
L_08863EE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08863EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x0886415Cu>(ctx, &aot_mem); return;
      }
      goto L_08863F18;
    }
L_08863F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x0886415Cu>(ctx, &aot_mem); return;
      }
      goto L_08863F28;
    }
L_08863F28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08863F34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08863F34u) goto L_08863F34;
    return;
L_08863F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863F50;
      }
      goto L_08863F44;
    }
L_08863F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), ctx.gpr[4]);
    goto L_08863F50;
L_08863F50:
    ctx.gpr[31] = (0x08863F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08863F58u) goto L_08863F58;
    return;
L_08863F58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem); return;
      }
      goto L_08863F60;
    }
L_08863F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem); return;
      }
      goto L_08863F6C;
    }
L_08863F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08863FA0;
      }
      goto L_08863F78;
    }
L_08863F78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem); return;
      }
      goto L_08863F84;
    }
L_08863F84:
    ctx.gpr[31] = (0x08863F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08863F8Cu) goto L_08863F8C;
    return;
L_08863F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem); return;
      }
      goto L_08863FA0;
    }
L_08863FA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 5u, 0x08864040u>(ctx, &aot_mem); return;
      }
      goto L_08863FAC;
    }
L_08863FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
        goto L_08863FE8;
    }
    goto L_08863FC8;
L_08863FC8:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08863FDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x08863FDCu) goto L_08863FDC;
    return;
L_08863FDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08863FF8;
      }
      goto L_08863FE4;
    }
L_08863FE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_08863FE8;
L_08863FE8:
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 3u, 0x08864020u>(ctx, &aot_mem); return;
      }
      goto L_08863FF8;
    }
L_08863FF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08864000u; return;
}

void recomp_unit_0023(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0023_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_23(Runtime &runtime) {
    runtime.register_generated_unit(23u, 0x08860000u, 16384u, &recomp_unit_0023, &recomp_unit_0023_entry);
    runtime.register_function(0x08860000u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886001Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886004Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860094u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088600C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860314u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860358u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860380u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860390u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088603F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860400u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860410u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860418u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886041Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860424u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860454u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860460u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860490u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088604F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860510u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886051Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860528u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860534u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886053Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860544u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886054Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860554u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860560u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860568u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860570u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860578u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860594u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088605FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860608u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860620u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860628u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860630u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860640u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886064Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860658u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860680u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860694u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088606E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860704u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860734u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860740u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860750u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886075Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886076Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860770u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860778u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886078Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860794u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886079Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607B8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088607F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860800u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860810u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860820u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886084Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860868u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860890u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088608F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860918u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860924u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860928u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886094Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886095Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860964u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886096Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886097Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088609F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860A9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860ABCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860ADCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860AFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860B98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860BD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08860C7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886137Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861384u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886138Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861398u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088613F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861400u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886140Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861414u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861424u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861440u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861448u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861450u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886146Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861470u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861478u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861488u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861490u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088614F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861500u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861510u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861520u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861538u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861548u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886155Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861568u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861574u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886157Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861588u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861594u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088615E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861668u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861688u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088616F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861700u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861714u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886172Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861744u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886174Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861780u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861788u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861790u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861798u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088617FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861800u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886180Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861814u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886181Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861824u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861888u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886189Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088618E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861960u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861968u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088619D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861A9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861AB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861ABCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861ACCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861B74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861BFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861C90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861CF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861D78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861DF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861E94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861ECCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861ED4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861EFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F48u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861F94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08861FF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862008u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862010u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862018u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886202Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862030u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862038u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862060u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088620ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886210Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862118u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862130u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886213Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862148u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886218Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862194u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862198u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088621ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088621D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088621E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886221Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886224Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862258u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886225Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862270u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886227Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862284u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862290u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088622F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862310u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886232Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862358u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886236Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862374u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862378u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862394u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088623ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886240Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886241Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886243Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862458u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862478u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088624F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862510u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862524u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886252Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862534u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886253Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862548u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886255Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862568u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886256Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862570u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862578u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886258Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088625E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862624u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862630u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862634u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862668u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862674u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886267Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886269Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626F0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088626F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862710u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862714u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886271Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862748u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862764u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886276Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862778u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862794u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088627DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862804u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862844u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862868u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862880u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862884u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862890u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628D4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088628FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862920u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886292Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886296Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862988u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886299Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629A4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088629E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862A4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862AF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862B70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862BE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862C90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CB8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862CF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D74u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862D9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862DF8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E0Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862E98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EA8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862ECCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862ED4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862EFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F40u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F4Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862F9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FD4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08862FFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863004u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886300Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863014u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886301Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863020u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863028u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863038u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863050u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863058u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863060u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863068u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863070u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863078u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863080u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863088u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863090u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863094u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886309Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088630ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863160u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863170u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886318Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863190u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088631C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886321Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863224u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863254u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863284u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088632CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863380u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863388u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863390u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863394u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633E8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088633FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863404u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863410u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886341Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886342Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863440u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863444u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863450u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863460u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863468u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863470u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863494u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634ECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088634F8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863504u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886351Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863524u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863528u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863530u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863540u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863554u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863560u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886356Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863590u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635E0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088635FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863604u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863610u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863624u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886362Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863634u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863640u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863648u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863658u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863660u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886366Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863674u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863688u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886369Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088636C8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863710u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863720u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863730u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863738u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863740u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886374Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863760u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863768u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863770u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886377Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863788u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863790u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886379Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637ACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637B0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637CCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088637F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863804u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863810u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863820u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863830u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886383Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886385Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863874u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886387Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863888u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638C0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088638D8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x0886394Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863960u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863968u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863984u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863990u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863998u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639A0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639A8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639B4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639BCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639C4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639D0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639DCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639E4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639F4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x088639FCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863A90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863ABCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863ADCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863AFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B20u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863B98u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BB0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BC0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863BFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C04u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C10u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C24u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C30u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C38u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C68u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863C90u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863CDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D00u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D1Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D2Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D80u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D88u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863D9Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DCCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DD0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DD8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DECu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DF4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863DFCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E08u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E14u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E3Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E54u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E5Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E64u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E70u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E7Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863E94u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EA4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EB4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EBCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EC4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EE0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863EF0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F18u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F28u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F34u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F44u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F50u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F58u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F60u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F6Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F78u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F84u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863F8Cu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FA0u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FACu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FC8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FDCu, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FE4u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FE8u, &recomp_unit_0023, "recomp_unit_0023");
    runtime.register_function(0x08863FF8u, &recomp_unit_0023, "recomp_unit_0023");
}
} // namespace psprecomp
