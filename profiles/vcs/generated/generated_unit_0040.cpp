#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0040[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0,
    43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72,
    0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0,
    143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    165, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 175,
    0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0,
    184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 197, 198, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0,
    229, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261,
    0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 286, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 290, 0,
    291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0,
    0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 320, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0,
    0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 353,
    0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0,
    0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0,
    402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 418, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424,
    0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469,
    470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 477,
    0, 478, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0,
    486, 0, 487, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 494, 0,
    0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0,
    0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0,
    0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 520, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0,
    525, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533,
    0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0,
    0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0,
    0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 559,
    0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0,
    567, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0,
    575, 0, 576, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0,
    584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 589, 0, 0, 0, 0, 0, 590, 0,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0,
    0, 0, 597, 0, 598, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 603, 604, 0, 605, 606, 0, 0,
    0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 627, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0,
    0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0,
    0, 637, 0, 0, 0, 638, 0, 639, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 0, 645, 0, 646,
    0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 650, 0, 651, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0,
    0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    0, 662, 0, 0, 663, 0, 0, 0, 0, 664, 0, 665, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0,
    0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0, 685, 0, 0, 686, 0,
    687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0,
    696, 0, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0,
    708, 0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0,
    0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 722, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 727,
    0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738,
    0, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 0, 0, 749, 0, 750,
    0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0,
    762, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0,
    0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 0, 780, 0, 781, 0, 782, 0, 783,
    0, 784, 0, 0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 790, 0, 791, 0, 792, 0, 0, 0, 0, 0, 793, 0,
    794, 0, 795, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 0,
    0, 805, 0, 0, 806, 0, 807, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 813, 0, 0, 814, 0, 815, 0, 816,
    0, 0, 817, 0, 818, 0, 0, 819, 0, 820, 0, 821, 0, 0, 822, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 826, 827, 0, 0, 0,
    0, 828, 0, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839,
};
void recomp_unit_0040_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0040[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A4000;
    case 2u: goto L_088A401C;
    case 3u: goto L_088A402C;
    case 4u: goto L_088A4034;
    case 5u: goto L_088A405C;
    case 6u: goto L_088A4074;
    case 7u: goto L_088A4078;
    case 8u: goto L_088A4090;
    case 9u: goto L_088A40B4;
    case 10u: goto L_088A4120;
    case 11u: goto L_088A4128;
    case 12u: goto L_088A4148;
    case 13u: goto L_088A4160;
    case 14u: goto L_088A416C;
    case 15u: goto L_088A4188;
    case 16u: goto L_088A41A4;
    case 17u: goto L_088A41BC;
    case 18u: goto L_088A41C8;
    case 19u: goto L_088A41F0;
    case 20u: goto L_088A42CC;
    case 21u: goto L_088A42E8;
    case 22u: goto L_088A430C;
    case 23u: goto L_088A4330;
    case 24u: goto L_088A436C;
    case 25u: goto L_088A4374;
    case 26u: goto L_088A4388;
    case 27u: goto L_088A4390;
    case 28u: goto L_088A43D8;
    case 29u: goto L_088A43E8;
    case 30u: goto L_088A4400;
    case 31u: goto L_088A441C;
    case 32u: goto L_088A4438;
    case 33u: goto L_088A4454;
    case 34u: goto L_088A4490;
    case 35u: goto L_088A44CC;
    case 36u: goto L_088A4538;
    case 37u: goto L_088A459C;
    case 38u: goto L_088A45B4;
    case 39u: goto L_088A45C4;
    case 40u: goto L_088A45D0;
    case 41u: goto L_088A45E4;
    case 42u: goto L_088A45F4;
    case 43u: goto L_088A4600;
    case 44u: goto L_088A4614;
    case 45u: goto L_088A461C;
    case 46u: goto L_088A462C;
    case 47u: goto L_088A4638;
    case 48u: goto L_088A4640;
    case 49u: goto L_088A4650;
    case 50u: goto L_088A4668;
    case 51u: goto L_088A46B4;
    case 52u: goto L_088A46CC;
    case 53u: goto L_088A46EC;
    case 54u: goto L_088A46F8;
    case 55u: goto L_088A46FC;
    case 56u: goto L_088A4734;
    case 57u: goto L_088A475C;
    case 58u: goto L_088A478C;
    case 59u: goto L_088A47E8;
    case 60u: goto L_088A47FC;
    case 61u: goto L_088A4820;
    case 62u: goto L_088A4854;
    case 63u: goto L_088A4864;
    case 64u: goto L_088A486C;
    case 65u: goto L_088A4880;
    case 66u: goto L_088A4888;
    case 67u: goto L_088A4894;
    case 68u: goto L_088A48A0;
    case 69u: goto L_088A48B4;
    case 70u: goto L_088A48EC;
    case 71u: goto L_088A48F4;
    case 72u: goto L_088A48FC;
    case 73u: goto L_088A4904;
    case 74u: goto L_088A4910;
    case 75u: goto L_088A4930;
    case 76u: goto L_088A4938;
    case 77u: goto L_088A4950;
    case 78u: goto L_088A4958;
    case 79u: goto L_088A4A44;
    case 80u: goto L_088A4A68;
    case 81u: goto L_088A4A98;
    case 82u: goto L_088A4AA8;
    case 83u: goto L_088A4AB4;
    case 84u: goto L_088A4AD0;
    case 85u: goto L_088A4AF0;
    case 86u: goto L_088A4B00;
    case 87u: goto L_088A4B04;
    case 88u: goto L_088A4B40;
    case 89u: goto L_088A4B70;
    case 90u: goto L_088A4B84;
    case 91u: goto L_088A4BA0;
    case 92u: goto L_088A4BC0;
    case 93u: goto L_088A4BCC;
    case 94u: goto L_088A4BD0;
    case 95u: goto L_088A4C30;
    case 96u: goto L_088A4C3C;
    case 97u: goto L_088A4CF4;
    case 98u: goto L_088A4D30;
    case 99u: goto L_088A4D40;
    case 100u: goto L_088A4D58;
    case 101u: goto L_088A4D5C;
    case 102u: goto L_088A4D84;
    case 103u: goto L_088A4D90;
    case 104u: goto L_088A4D94;
    case 105u: goto L_088A4DF4;
    case 106u: goto L_088A4E3C;
    case 107u: goto L_088A4E4C;
    case 108u: goto L_088A4E58;
    case 109u: goto L_088A4E78;
    case 110u: goto L_088A4EA0;
    case 111u: goto L_088A4EA8;
    case 112u: goto L_088A4EB4;
    case 113u: goto L_088A4ED4;
    case 114u: goto L_088A4EE0;
    case 115u: goto L_088A4F04;
    case 116u: goto L_088A4F0C;
    case 117u: goto L_088A4F24;
    case 118u: goto L_088A4F28;
    case 119u: goto L_088A4F48;
    case 120u: goto L_088A4F50;
    case 121u: goto L_088A4F70;
    case 122u: goto L_088A4F98;
    case 123u: goto L_088A4FA0;
    case 124u: goto L_088A4FB8;
    case 125u: goto L_088A4FC8;
    case 126u: goto L_088A4FD8;
    case 127u: goto L_088A4FEC;
    case 128u: goto L_088A4FF4;
    case 129u: goto L_088A5004;
    case 130u: goto L_088A5018;
    case 131u: goto L_088A502C;
    case 132u: goto L_088A5040;
    case 133u: goto L_088A5058;
    case 134u: goto L_088A507C;
    case 135u: goto L_088A5084;
    case 136u: goto L_088A5098;
    case 137u: goto L_088A50A0;
    case 138u: goto L_088A50B0;
    case 139u: goto L_088A50C8;
    case 140u: goto L_088A50D8;
    case 141u: goto L_088A50E8;
    case 142u: goto L_088A50F8;
    case 143u: goto L_088A5100;
    case 144u: goto L_088A510C;
    case 145u: goto L_088A5118;
    case 146u: goto L_088A5130;
    case 147u: goto L_088A5140;
    case 148u: goto L_088A5148;
    case 149u: goto L_088A5158;
    case 150u: goto L_088A5160;
    case 151u: goto L_088A5170;
    case 152u: goto L_088A5178;
    case 153u: goto L_088A5190;
    case 154u: goto L_088A51B0;
    case 155u: goto L_088A51C8;
    case 156u: goto L_088A51D0;
    case 157u: goto L_088A51D8;
    case 158u: goto L_088A51E8;
    case 159u: goto L_088A51F4;
    case 160u: goto L_088A520C;
    case 161u: goto L_088A5224;
    case 162u: goto L_088A522C;
    case 163u: goto L_088A5234;
    case 164u: goto L_088A5268;
    case 165u: goto L_088A5280;
    case 166u: goto L_088A5284;
    case 167u: goto L_088A5290;
    case 168u: goto L_088A5298;
    case 169u: goto L_088A52A0;
    case 170u: goto L_088A52AC;
    case 171u: goto L_088A52CC;
    case 172u: goto L_088A52D8;
    case 173u: goto L_088A52E0;
    case 174u: goto L_088A52F0;
    case 175u: goto L_088A52FC;
    case 176u: goto L_088A5304;
    case 177u: goto L_088A5314;
    case 178u: goto L_088A531C;
    case 179u: goto L_088A5328;
    case 180u: goto L_088A5334;
    case 181u: goto L_088A5340;
    case 182u: goto L_088A5368;
    case 183u: goto L_088A5378;
    case 184u: goto L_088A5380;
    case 185u: goto L_088A5388;
    case 186u: goto L_088A5390;
    case 187u: goto L_088A53B4;
    case 188u: goto L_088A53BC;
    case 189u: goto L_088A53E8;
    case 190u: goto L_088A5450;
    case 191u: goto L_088A5468;
    case 192u: goto L_088A549C;
    case 193u: goto L_088A54B4;
    case 194u: goto L_088A54C4;
    case 195u: goto L_088A54DC;
    case 196u: goto L_088A550C;
    case 197u: goto L_088A5514;
    case 198u: goto L_088A5518;
    case 199u: goto L_088A5520;
    case 200u: goto L_088A5528;
    case 201u: goto L_088A5530;
    case 202u: goto L_088A553C;
    case 203u: goto L_088A5548;
    case 204u: goto L_088A5554;
    case 205u: goto L_088A557C;
    case 206u: goto L_088A5590;
    case 207u: goto L_088A5598;
    case 208u: goto L_088A55A0;
    case 209u: goto L_088A55BC;
    case 210u: goto L_088A55C4;
    case 211u: goto L_088A55CC;
    case 212u: goto L_088A55D4;
    case 213u: goto L_088A55DC;
    case 214u: goto L_088A5604;
    case 215u: goto L_088A560C;
    case 216u: goto L_088A5614;
    case 217u: goto L_088A5634;
    case 218u: goto L_088A563C;
    case 219u: goto L_088A5650;
    case 220u: goto L_088A5664;
    case 221u: goto L_088A566C;
    case 222u: goto L_088A5680;
    case 223u: goto L_088A5694;
    case 224u: goto L_088A5698;
    case 225u: goto L_088A56C4;
    case 226u: goto L_088A56D4;
    case 227u: goto L_088A56E4;
    case 228u: goto L_088A56F4;
    case 229u: goto L_088A5700;
    case 230u: goto L_088A5708;
    case 231u: goto L_088A5718;
    case 232u: goto L_088A5724;
    case 233u: goto L_088A572C;
    case 234u: goto L_088A573C;
    case 235u: goto L_088A574C;
    case 236u: goto L_088A575C;
    case 237u: goto L_088A576C;
    case 238u: goto L_088A5790;
    case 239u: goto L_088A57A0;
    case 240u: goto L_088A57A8;
    case 241u: goto L_088A57B8;
    case 242u: goto L_088A57C0;
    case 243u: goto L_088A57D0;
    case 244u: goto L_088A57D8;
    case 245u: goto L_088A57EC;
    case 246u: goto L_088A57F8;
    case 247u: goto L_088A581C;
    case 248u: goto L_088A582C;
    case 249u: goto L_088A5834;
    case 250u: goto L_088A5840;
    case 251u: goto L_088A5848;
    case 252u: goto L_088A5854;
    case 253u: goto L_088A58A4;
    case 254u: goto L_088A58B4;
    case 255u: goto L_088A58C0;
    case 256u: goto L_088A58D0;
    case 257u: goto L_088A58DC;
    case 258u: goto L_088A58E4;
    case 259u: goto L_088A58EC;
    case 260u: goto L_088A58F4;
    case 261u: goto L_088A58FC;
    case 262u: goto L_088A5904;
    case 263u: goto L_088A590C;
    case 264u: goto L_088A5918;
    case 265u: goto L_088A5920;
    case 266u: goto L_088A592C;
    case 267u: goto L_088A5938;
    case 268u: goto L_088A5950;
    case 269u: goto L_088A5958;
    case 270u: goto L_088A5964;
    case 271u: goto L_088A5994;
    case 272u: goto L_088A59A4;
    case 273u: goto L_088A59B0;
    case 274u: goto L_088A59B8;
    case 275u: goto L_088A59C4;
    case 276u: goto L_088A59CC;
    case 277u: goto L_088A59D8;
    case 278u: goto L_088A59E0;
    case 279u: goto L_088A5A1C;
    case 280u: goto L_088A5A28;
    case 281u: goto L_088A5A5C;
    case 282u: goto L_088A5A68;
    case 283u: goto L_088A5A94;
    case 284u: goto L_088A5AA0;
    case 285u: goto L_088A5AC8;
    case 286u: goto L_088A5ACC;
    case 287u: goto L_088A5AD8;
    case 288u: goto L_088A5AE8;
    case 289u: goto L_088A5AF0;
    case 290u: goto L_088A5AF8;
    case 291u: goto L_088A5B00;
    case 292u: goto L_088A5B08;
    case 293u: goto L_088A5B10;
    case 294u: goto L_088A5B1C;
    case 295u: goto L_088A5B28;
    case 296u: goto L_088A5B40;
    case 297u: goto L_088A5B48;
    case 298u: goto L_088A5B60;
    case 299u: goto L_088A5B6C;
    case 300u: goto L_088A5B88;
    case 301u: goto L_088A5BA8;
    case 302u: goto L_088A5BBC;
    case 303u: goto L_088A5BC4;
    case 304u: goto L_088A5BCC;
    case 305u: goto L_088A5BD4;
    case 306u: goto L_088A5BF4;
    case 307u: goto L_088A5C14;
    case 308u: goto L_088A5C44;
    case 309u: goto L_088A5C48;
    case 310u: goto L_088A5C50;
    case 311u: goto L_088A5C5C;
    case 312u: goto L_088A5C6C;
    case 313u: goto L_088A5C78;
    case 314u: goto L_088A5C84;
    case 315u: goto L_088A5C90;
    case 316u: goto L_088A5CA4;
    case 317u: goto L_088A5CBC;
    case 318u: goto L_088A5CC8;
    case 319u: goto L_088A5D08;
    case 320u: goto L_088A5D14;
    case 321u: goto L_088A5D18;
    case 322u: goto L_088A5D40;
    case 323u: goto L_088A5D50;
    case 324u: goto L_088A5D68;
    case 325u: goto L_088A5D94;
    case 326u: goto L_088A5DC0;
    case 327u: goto L_088A5DCC;
    case 328u: goto L_088A5DE4;
    case 329u: goto L_088A5DFC;
    case 330u: goto L_088A5E14;
    case 331u: goto L_088A5E1C;
    case 332u: goto L_088A5E28;
    case 333u: goto L_088A5E4C;
    case 334u: goto L_088A5E58;
    case 335u: goto L_088A5E64;
    case 336u: goto L_088A5E7C;
    case 337u: goto L_088A5EA4;
    case 338u: goto L_088A5EB0;
    case 339u: goto L_088A5EC0;
    case 340u: goto L_088A5ED4;
    case 341u: goto L_088A5EE4;
    case 342u: goto L_088A5EEC;
    case 343u: goto L_088A5EF8;
    case 344u: goto L_088A5F04;
    case 345u: goto L_088A5F08;
    case 346u: goto L_088A5F2C;
    case 347u: goto L_088A5F38;
    case 348u: goto L_088A5F40;
    case 349u: goto L_088A5F4C;
    case 350u: goto L_088A5F54;
    case 351u: goto L_088A5F60;
    case 352u: goto L_088A5F68;
    case 353u: goto L_088A5F7C;
    case 354u: goto L_088A5F84;
    case 355u: goto L_088A5F8C;
    case 356u: goto L_088A5FAC;
    case 357u: goto L_088A5FB4;
    case 358u: goto L_088A5FCC;
    case 359u: goto L_088A5FF0;
    case 360u: goto L_088A5FF8;
    case 361u: goto L_088A6000;
    case 362u: goto L_088A6020;
    case 363u: goto L_088A6028;
    case 364u: goto L_088A6044;
    case 365u: goto L_088A6050;
    case 366u: goto L_088A605C;
    case 367u: goto L_088A6080;
    case 368u: goto L_088A6090;
    case 369u: goto L_088A609C;
    case 370u: goto L_088A60A8;
    case 371u: goto L_088A60C0;
    case 372u: goto L_088A60E0;
    case 373u: goto L_088A60E8;
    case 374u: goto L_088A60F0;
    case 375u: goto L_088A60F8;
    case 376u: goto L_088A6108;
    case 377u: goto L_088A6114;
    case 378u: goto L_088A6120;
    case 379u: goto L_088A6138;
    case 380u: goto L_088A6140;
    case 381u: goto L_088A6180;
    case 382u: goto L_088A61D4;
    case 383u: goto L_088A61DC;
    case 384u: goto L_088A6208;
    case 385u: goto L_088A6210;
    case 386u: goto L_088A6218;
    case 387u: goto L_088A6220;
    case 388u: goto L_088A6228;
    case 389u: goto L_088A6230;
    case 390u: goto L_088A6238;
    case 391u: goto L_088A6240;
    case 392u: goto L_088A6248;
    case 393u: goto L_088A6250;
    case 394u: goto L_088A625C;
    case 395u: goto L_088A6264;
    case 396u: goto L_088A62AC;
    case 397u: goto L_088A62C0;
    case 398u: goto L_088A62C8;
    case 399u: goto L_088A62CC;
    case 400u: goto L_088A62EC;
    case 401u: goto L_088A62F8;
    case 402u: goto L_088A6300;
    case 403u: goto L_088A631C;
    case 404u: goto L_088A6334;
    case 405u: goto L_088A633C;
    case 406u: goto L_088A6348;
    case 407u: goto L_088A6350;
    case 408u: goto L_088A6388;
    case 409u: goto L_088A639C;
    case 410u: goto L_088A63B0;
    case 411u: goto L_088A63BC;
    case 412u: goto L_088A63C4;
    case 413u: goto L_088A6404;
    case 414u: goto L_088A6418;
    case 415u: goto L_088A6428;
    case 416u: goto L_088A6430;
    case 417u: goto L_088A6470;
    case 418u: goto L_088A6484;
    case 419u: goto L_088A6488;
    case 420u: goto L_088A649C;
    case 421u: goto L_088A64A8;
    case 422u: goto L_088A64B4;
    case 423u: goto L_088A64F0;
    case 424u: goto L_088A64FC;
    case 425u: goto L_088A6504;
    case 426u: goto L_088A6510;
    case 427u: goto L_088A651C;
    case 428u: goto L_088A6528;
    case 429u: goto L_088A6534;
    case 430u: goto L_088A6540;
    case 431u: goto L_088A6550;
    case 432u: goto L_088A656C;
    case 433u: goto L_088A6574;
    case 434u: goto L_088A657C;
    case 435u: goto L_088A65A0;
    case 436u: goto L_088A65C4;
    case 437u: goto L_088A65D4;
    case 438u: goto L_088A65E4;
    case 439u: goto L_088A6638;
    case 440u: goto L_088A6640;
    case 441u: goto L_088A6648;
    case 442u: goto L_088A6664;
    case 443u: goto L_088A6678;
    case 444u: goto L_088A66BC;
    case 445u: goto L_088A66DC;
    case 446u: goto L_088A672C;
    case 447u: goto L_088A6748;
    case 448u: goto L_088A6760;
    case 449u: goto L_088A677C;
    case 450u: goto L_088A67C4;
    case 451u: goto L_088A6808;
    case 452u: goto L_088A6838;
    case 453u: goto L_088A68A8;
    case 454u: goto L_088A68D8;
    case 455u: goto L_088A68EC;
    case 456u: goto L_088A68F8;
    case 457u: goto L_088A693C;
    case 458u: goto L_088A694C;
    case 459u: goto L_088A6954;
    case 460u: goto L_088A6958;
    case 461u: goto L_088A6970;
    case 462u: goto L_088A6994;
    case 463u: goto L_088A69A8;
    case 464u: goto L_088A69BC;
    case 465u: goto L_088A69C4;
    case 466u: goto L_088A69D0;
    case 467u: goto L_088A69E4;
    case 468u: goto L_088A69F4;
    case 469u: goto L_088A69FC;
    case 470u: goto L_088A6A00;
    case 471u: goto L_088A6A18;
    case 472u: goto L_088A6A30;
    case 473u: goto L_088A6A44;
    case 474u: goto L_088A6A4C;
    case 475u: goto L_088A6A58;
    case 476u: goto L_088A6A6C;
    case 477u: goto L_088A6A7C;
    case 478u: goto L_088A6A84;
    case 479u: goto L_088A6A88;
    case 480u: goto L_088A6AA0;
    case 481u: goto L_088A6AB4;
    case 482u: goto L_088A6AC8;
    case 483u: goto L_088A6AD0;
    case 484u: goto L_088A6ADC;
    case 485u: goto L_088A6AF0;
    case 486u: goto L_088A6B00;
    case 487u: goto L_088A6B08;
    case 488u: goto L_088A6B0C;
    case 489u: goto L_088A6B24;
    case 490u: goto L_088A6B34;
    case 491u: goto L_088A6B3C;
    case 492u: goto L_088A6B5C;
    case 493u: goto L_088A6B70;
    case 494u: goto L_088A6B78;
    case 495u: goto L_088A6B84;
    case 496u: goto L_088A6B98;
    case 497u: goto L_088A6BA8;
    case 498u: goto L_088A6BB0;
    case 499u: goto L_088A6BB4;
    case 500u: goto L_088A6BCC;
    case 501u: goto L_088A6BDC;
    case 502u: goto L_088A6BE4;
    case 503u: goto L_088A6C04;
    case 504u: goto L_088A6C18;
    case 505u: goto L_088A6C20;
    case 506u: goto L_088A6C44;
    case 507u: goto L_088A6C5C;
    case 508u: goto L_088A6C78;
    case 509u: goto L_088A6C8C;
    case 510u: goto L_088A6C98;
    case 511u: goto L_088A6CA8;
    case 512u: goto L_088A6CB4;
    case 513u: goto L_088A6CD0;
    case 514u: goto L_088A6CE4;
    case 515u: goto L_088A6CF0;
    case 516u: goto L_088A6D04;
    case 517u: goto L_088A6D14;
    case 518u: goto L_088A6D1C;
    case 519u: goto L_088A6D2C;
    case 520u: goto L_088A6D30;
    case 521u: goto L_088A6D38;
    case 522u: goto L_088A6D4C;
    case 523u: goto L_088A6D68;
    case 524u: goto L_088A6D78;
    case 525u: goto L_088A6D80;
    case 526u: goto L_088A6D84;
    case 527u: goto L_088A6D9C;
    case 528u: goto L_088A6DB0;
    case 529u: goto L_088A6DC4;
    case 530u: goto L_088A6DCC;
    case 531u: goto L_088A6DE0;
    case 532u: goto L_088A6DEC;
    case 533u: goto L_088A6DFC;
    case 534u: goto L_088A6E08;
    case 535u: goto L_088A6E24;
    case 536u: goto L_088A6E34;
    case 537u: goto L_088A6E3C;
    case 538u: goto L_088A6E40;
    case 539u: goto L_088A6E58;
    case 540u: goto L_088A6E70;
    case 541u: goto L_088A6E84;
    case 542u: goto L_088A6E8C;
    case 543u: goto L_088A6EA0;
    case 544u: goto L_088A6EAC;
    case 545u: goto L_088A6EC0;
    case 546u: goto L_088A6ED0;
    case 547u: goto L_088A6EDC;
    case 548u: goto L_088A6EE4;
    case 549u: goto L_088A6EF4;
    case 550u: goto L_088A6F04;
    case 551u: goto L_088A6F10;
    case 552u: goto L_088A6F20;
    case 553u: goto L_088A6F30;
    case 554u: goto L_088A6F40;
    case 555u: goto L_088A6F4C;
    case 556u: goto L_088A6F60;
    case 557u: goto L_088A6F70;
    case 558u: goto L_088A6F78;
    case 559u: goto L_088A6F7C;
    case 560u: goto L_088A6F94;
    case 561u: goto L_088A6FAC;
    case 562u: goto L_088A6FC0;
    case 563u: goto L_088A6FC8;
    case 564u: goto L_088A6FD4;
    case 565u: goto L_088A6FE8;
    case 566u: goto L_088A6FF8;
    case 567u: goto L_088A7000;
    case 568u: goto L_088A7004;
    case 569u: goto L_088A701C;
    case 570u: goto L_088A7034;
    case 571u: goto L_088A7048;
    case 572u: goto L_088A7050;
    case 573u: goto L_088A705C;
    case 574u: goto L_088A7070;
    case 575u: goto L_088A7080;
    case 576u: goto L_088A7088;
    case 577u: goto L_088A708C;
    case 578u: goto L_088A70A4;
    case 579u: goto L_088A70BC;
    case 580u: goto L_088A70D0;
    case 581u: goto L_088A70D8;
    case 582u: goto L_088A70E4;
    case 583u: goto L_088A70F4;
    case 584u: goto L_088A7100;
    case 585u: goto L_088A711C;
    case 586u: goto L_088A7144;
    case 587u: goto L_088A7154;
    case 588u: goto L_088A715C;
    case 589u: goto L_088A7160;
    case 590u: goto L_088A7178;
    case 591u: goto L_088A7194;
    case 592u: goto L_088A71A8;
    case 593u: goto L_088A71B0;
    case 594u: goto L_088A71BC;
    case 595u: goto L_088A71C8;
    case 596u: goto L_088A71F8;
    case 597u: goto L_088A7208;
    case 598u: goto L_088A7210;
    case 599u: goto L_088A7214;
    case 600u: goto L_088A722C;
    case 601u: goto L_088A724C;
    case 602u: goto L_088A725C;
    case 603u: goto L_088A7264;
    case 604u: goto L_088A7268;
    case 605u: goto L_088A7270;
    case 606u: goto L_088A7274;
    case 607u: goto L_088A728C;
    case 608u: goto L_088A729C;
    case 609u: goto L_088A72A8;
    case 610u: goto L_088A72B0;
    case 611u: goto L_088A72B8;
    case 612u: goto L_088A72C4;
    case 613u: goto L_088A72E0;
    case 614u: goto L_088A72F4;
    case 615u: goto L_088A7310;
    case 616u: goto L_088A7320;
    case 617u: goto L_088A7330;
    case 618u: goto L_088A7338;
    case 619u: goto L_088A7354;
    case 620u: goto L_088A7358;
    case 621u: goto L_088A7400;
    case 622u: goto L_088A7414;
    case 623u: goto L_088A741C;
    case 624u: goto L_088A7428;
    case 625u: goto L_088A743C;
    case 626u: goto L_088A744C;
    case 627u: goto L_088A7454;
    case 628u: goto L_088A7458;
    case 629u: goto L_088A7470;
    case 630u: goto L_088A7484;
    case 631u: goto L_088A7498;
    case 632u: goto L_088A74A0;
    case 633u: goto L_088A7544;
    case 634u: goto L_088A7554;
    case 635u: goto L_088A7564;
    case 636u: goto L_088A7570;
    case 637u: goto L_088A7584;
    case 638u: goto L_088A7594;
    case 639u: goto L_088A759C;
    case 640u: goto L_088A75A0;
    case 641u: goto L_088A75B8;
    case 642u: goto L_088A75CC;
    case 643u: goto L_088A75E0;
    case 644u: goto L_088A75E8;
    case 645u: goto L_088A75F4;
    case 646u: goto L_088A75FC;
    case 647u: goto L_088A760C;
    case 648u: goto L_088A7620;
    case 649u: goto L_088A762C;
    case 650u: goto L_088A7634;
    case 651u: goto L_088A763C;
    case 652u: goto L_088A7640;
    case 653u: goto L_088A765C;
    case 654u: goto L_088A766C;
    case 655u: goto L_088A7678;
    case 656u: goto L_088A768C;
    case 657u: goto L_088A769C;
    case 658u: goto L_088A76A4;
    case 659u: goto L_088A76A8;
    case 660u: goto L_088A76C0;
    case 661u: goto L_088A76EC;
    case 662u: goto L_088A7704;
    case 663u: goto L_088A7710;
    case 664u: goto L_088A7724;
    case 665u: goto L_088A772C;
    case 666u: goto L_088A7730;
    case 667u: goto L_088A773C;
    case 668u: goto L_088A7748;
    case 669u: goto L_088A7750;
    case 670u: goto L_088A7790;
    case 671u: goto L_088A77CC;
    case 672u: goto L_088A77E0;
    case 673u: goto L_088A77EC;
    case 674u: goto L_088A77F8;
    case 675u: goto L_088A7808;
    case 676u: goto L_088A7810;
    case 677u: goto L_088A7818;
    case 678u: goto L_088A7820;
    case 679u: goto L_088A7830;
    case 680u: goto L_088A783C;
    case 681u: goto L_088A7844;
    case 682u: goto L_088A784C;
    case 683u: goto L_088A7854;
    case 684u: goto L_088A785C;
    case 685u: goto L_088A786C;
    case 686u: goto L_088A7878;
    case 687u: goto L_088A7880;
    case 688u: goto L_088A7890;
    case 689u: goto L_088A78A8;
    case 690u: goto L_088A78BC;
    case 691u: goto L_088A78C4;
    case 692u: goto L_088A78CC;
    case 693u: goto L_088A78D4;
    case 694u: goto L_088A78EC;
    case 695u: goto L_088A78F8;
    case 696u: goto L_088A7900;
    case 697u: goto L_088A7910;
    case 698u: goto L_088A7918;
    case 699u: goto L_088A7920;
    case 700u: goto L_088A7928;
    case 701u: goto L_088A7930;
    case 702u: goto L_088A7938;
    case 703u: goto L_088A7940;
    case 704u: goto L_088A7950;
    case 705u: goto L_088A7964;
    case 706u: goto L_088A7970;
    case 707u: goto L_088A7978;
    case 708u: goto L_088A7980;
    case 709u: goto L_088A7988;
    case 710u: goto L_088A7990;
    case 711u: goto L_088A79A0;
    case 712u: goto L_088A79B4;
    case 713u: goto L_088A79C0;
    case 714u: goto L_088A79C8;
    case 715u: goto L_088A79D8;
    case 716u: goto L_088A79E0;
    case 717u: goto L_088A79F0;
    case 718u: goto L_088A7A08;
    case 719u: goto L_088A7A1C;
    case 720u: goto L_088A7A2C;
    case 721u: goto L_088A7A34;
    case 722u: goto L_088A7A38;
    case 723u: goto L_088A7A50;
    case 724u: goto L_088A7A5C;
    case 725u: goto L_088A7A64;
    case 726u: goto L_088A7A74;
    case 727u: goto L_088A7A7C;
    case 728u: goto L_088A7A84;
    case 729u: goto L_088A7A8C;
    case 730u: goto L_088A7A94;
    case 731u: goto L_088A7A9C;
    case 732u: goto L_088A7AA8;
    case 733u: goto L_088A7ABC;
    case 734u: goto L_088A7AD0;
    case 735u: goto L_088A7AE4;
    case 736u: goto L_088A7AEC;
    case 737u: goto L_088A7AF4;
    case 738u: goto L_088A7AFC;
    case 739u: goto L_088A7B08;
    case 740u: goto L_088A7B14;
    case 741u: goto L_088A7B1C;
    case 742u: goto L_088A7B24;
    case 743u: goto L_088A7B2C;
    case 744u: goto L_088A7B34;
    case 745u: goto L_088A7B40;
    case 746u: goto L_088A7B4C;
    case 747u: goto L_088A7B54;
    case 748u: goto L_088A7B64;
    case 749u: goto L_088A7B74;
    case 750u: goto L_088A7B7C;
    case 751u: goto L_088A7B84;
    case 752u: goto L_088A7B98;
    case 753u: goto L_088A7BA0;
    case 754u: goto L_088A7BA8;
    case 755u: goto L_088A7BB0;
    case 756u: goto L_088A7BC0;
    case 757u: goto L_088A7BD4;
    case 758u: goto L_088A7BE0;
    case 759u: goto L_088A7BE8;
    case 760u: goto L_088A7BF0;
    case 761u: goto L_088A7BF8;
    case 762u: goto L_088A7C00;
    case 763u: goto L_088A7C10;
    case 764u: goto L_088A7C24;
    case 765u: goto L_088A7C30;
    case 766u: goto L_088A7C38;
    case 767u: goto L_088A7C48;
    case 768u: goto L_088A7C50;
    case 769u: goto L_088A7C5C;
    case 770u: goto L_088A7C64;
    case 771u: goto L_088A7C70;
    case 772u: goto L_088A7C84;
    case 773u: goto L_088A7C8C;
    case 774u: goto L_088A7CA0;
    case 775u: goto L_088A7CB4;
    case 776u: goto L_088A7CBC;
    case 777u: goto L_088A7CC4;
    case 778u: goto L_088A7CCC;
    case 779u: goto L_088A7CD8;
    case 780u: goto L_088A7CE4;
    case 781u: goto L_088A7CEC;
    case 782u: goto L_088A7CF4;
    case 783u: goto L_088A7CFC;
    case 784u: goto L_088A7D04;
    case 785u: goto L_088A7D10;
    case 786u: goto L_088A7D1C;
    case 787u: goto L_088A7D24;
    case 788u: goto L_088A7D34;
    case 789u: goto L_088A7D40;
    case 790u: goto L_088A7D50;
    case 791u: goto L_088A7D58;
    case 792u: goto L_088A7D60;
    case 793u: goto L_088A7D78;
    case 794u: goto L_088A7D80;
    case 795u: goto L_088A7D88;
    case 796u: goto L_088A7D90;
    case 797u: goto L_088A7DA0;
    case 798u: goto L_088A7DB4;
    case 799u: goto L_088A7DC0;
    case 800u: goto L_088A7DC8;
    case 801u: goto L_088A7DD0;
    case 802u: goto L_088A7DD8;
    case 803u: goto L_088A7DE0;
    case 804u: goto L_088A7DF0;
    case 805u: goto L_088A7E04;
    case 806u: goto L_088A7E10;
    case 807u: goto L_088A7E18;
    case 808u: goto L_088A7E28;
    case 809u: goto L_088A7E30;
    case 810u: goto L_088A7E44;
    case 811u: goto L_088A7E4C;
    case 812u: goto L_088A7E54;
    case 813u: goto L_088A7E60;
    case 814u: goto L_088A7E6C;
    case 815u: goto L_088A7E74;
    case 816u: goto L_088A7E7C;
    case 817u: goto L_088A7E88;
    case 818u: goto L_088A7E90;
    case 819u: goto L_088A7E9C;
    case 820u: goto L_088A7EA4;
    case 821u: goto L_088A7EAC;
    case 822u: goto L_088A7EB8;
    case 823u: goto L_088A7ECC;
    case 824u: goto L_088A7ED4;
    case 825u: goto L_088A7EE4;
    case 826u: goto L_088A7EEC;
    case 827u: goto L_088A7EF0;
    case 828u: goto L_088A7F04;
    case 829u: goto L_088A7F18;
    case 830u: goto L_088A7F24;
    case 831u: goto L_088A7F2C;
    case 832u: goto L_088A7F3C;
    case 833u: goto L_088A7F64;
    case 834u: goto L_088A7FAC;
    case 835u: goto L_088A7FC0;
    case 836u: goto L_088A7FD0;
    case 837u: goto L_088A7FE0;
    case 838u: goto L_088A7FF0;
    case 839u: goto L_088A7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A4000:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
      if (branch_taken) {
          goto L_088A402C;
      }
      goto L_088A401C;
    }
L_088A401C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088A4034;
      }
      goto L_088A402C;
    }
L_088A402C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088A4034;
L_088A4034:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25136)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4074;
      }
      goto L_088A405C;
    }
L_088A405C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25136)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25136)));
        goto L_088A4074;
    }
    goto L_088A4074;
L_088A4074:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A4078;
L_088A4078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A41F0;
      }
      goto L_088A4090;
    }
L_088A4090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A4128;
      }
      goto L_088A40B4;
    }
L_088A40B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25128)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25116)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A4120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088A4120u) goto L_088A4120;
    return;
L_088A4120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4148;
      }
      goto L_088A4128;
    }
L_088A4128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A4148;
L_088A4148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
        goto L_088A416C;
    }
    goto L_088A4160;
L_088A4160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088A416C;
      }
      goto L_088A416C;
    }
L_088A416C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A41A4;
      }
      goto L_088A4188;
    }
L_088A4188:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25124)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A41A4;
L_088A41A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A41C8;
      }
      goto L_088A41BC;
    }
L_088A41BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A41F0;
      }
      goto L_088A41C8;
    }
L_088A41C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25140)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    goto L_088A41F0;
L_088A41F0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2238u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14064)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A4374;
      }
      goto L_088A42CC;
    }
L_088A42CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4374;
      }
      goto L_088A42E8;
    }
L_088A42E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4374;
      }
      goto L_088A430C;
    }
L_088A430C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4374;
      }
      goto L_088A4330;
    }
L_088A4330:
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x088A436Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A436Cu) goto L_088A436C;
    return;
L_088A436C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4388;
      }
      goto L_088A4374;
    }
L_088A4374:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088A4388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A4388u) goto L_088A4388;
    return;
L_088A4388:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A43D8;
      }
      goto L_088A4390;
    }
L_088A4390:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088A43D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088A43D8u) goto L_088A43D8;
    return;
L_088A43D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A43E8;
    }
L_088A43E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1088)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A44CC;
      }
      goto L_088A4400;
    }
L_088A4400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A441C;
    }
L_088A441C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48665u << 16u);
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A4438;
    }
L_088A4438:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A4454;
    }
L_088A4454:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A4490;
    }
L_088A4490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A44CC;
    }
L_088A44CC:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (47410u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16903u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A4538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088A4538u) goto L_088A4538;
    return;
L_088A4538:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (0x088A459Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A459Cu) goto L_088A459C;
    return;
L_088A459C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1088)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A45E4;
      }
      goto L_088A45B4;
    }
L_088A45B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088A45D0;
      }
      goto L_088A45C4;
    }
L_088A45C4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088A45D0;
L_088A45D0:
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A45E4;
    }
L_088A45E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088A4600;
      }
      goto L_088A45F4;
    }
L_088A45F4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088A4600;
L_088A4600:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1088)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A461C;
      }
      goto L_088A4614;
    }
L_088A4614:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A461C;
L_088A461C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A4638;
      }
      goto L_088A462C;
    }
L_088A462C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A4638u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 41u, 0x088A8374u>(ctx, &aot_mem) && ctx.pc == 0x088A4638u) goto L_088A4638;
    return;
L_088A4638:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A47E8;
      }
      goto L_088A4640;
    }
L_088A4640:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A47E8;
      }
      goto L_088A4650;
    }
L_088A4650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A47E8;
      }
      goto L_088A4668;
    }
L_088A4668:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A46CC;
      }
      goto L_088A46B4;
    }
L_088A46B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088A46FC;
      }
      goto L_088A46CC;
    }
L_088A46CC:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A46F8;
      }
      goto L_088A46EC;
    }
L_088A46EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088A46FC;
      }
      goto L_088A46F8;
    }
L_088A46F8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_088A46FC;
L_088A46FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.gpr[5] = (15363u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A475C;
      }
      goto L_088A4734;
    }
L_088A4734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.gpr[5] = (15363u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088A475C;
L_088A475C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[31] = (0x088A478Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A478Cu) goto L_088A478C;
    return;
L_088A478C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (0x088A47E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088A47E8u) goto L_088A47E8;
    return;
L_088A47E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A57D0;
      }
      goto L_088A47FC;
    }
L_088A47FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4854;
      }
      goto L_088A4820;
    }
L_088A4820:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A57D0;
      }
      goto L_088A4854;
    }
L_088A4854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A48A0;
      }
      goto L_088A4864;
    }
L_088A4864:
    ctx.gpr[31] = (0x088A486Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A486Cu) goto L_088A486C;
    return;
L_088A486C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25060)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25064)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088A4880u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4880u) goto L_088A4880;
    return;
L_088A4880:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A48A0;
      }
      goto L_088A4888;
    }
L_088A4888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A48A0;
      }
      goto L_088A4894;
    }
L_088A4894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
    ctx.gpr[31] = (0x088A48A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 734u, 0x08A77A90u>(ctx, &aot_mem) && ctx.pc == 0x088A48A0u) goto L_088A48A0;
    return;
L_088A48A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A4958;
      }
      goto L_088A48B4;
    }
L_088A48B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A4910;
      }
      goto L_088A48EC;
    }
L_088A48EC:
    ctx.gpr[31] = (0x088A48F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A48F4u) goto L_088A48F4;
    return;
L_088A48F4:
    ctx.gpr[31] = (0x088A48FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x088A48FCu) goto L_088A48FC;
    return;
L_088A48FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4910;
      }
      goto L_088A4904;
    }
L_088A4904:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088A4910;
L_088A4910:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4938;
      }
      goto L_088A4930;
    }
L_088A4930:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088A4958;
      }
      goto L_088A4938;
    }
L_088A4938:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4958;
      }
      goto L_088A4950;
    }
L_088A4950:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088A4958;
L_088A4958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x088A4A44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem) && ctx.pc == 0x088A4A44u) goto L_088A4A44;
    return;
L_088A4A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A57C0;
      }
      goto L_088A4A68;
    }
L_088A4A68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A4AA8;
      }
      goto L_088A4A98;
    }
L_088A4A98:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A4AB4;
      }
      goto L_088A4AA8;
    }
L_088A4AA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A4AB4;
L_088A4AB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088A5514;
      }
      goto L_088A4AD0;
    }
L_088A4AD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4B04;
      }
      goto L_088A4AF0;
    }
L_088A4AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4B04;
      }
      goto L_088A4B00;
    }
L_088A4B00:
    ctx.gpr[19] = (0u | 1u);
    goto L_088A4B04;
L_088A4B04:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BA0;
      }
      goto L_088A4B40;
    }
L_088A4B40:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BA0;
      }
      goto L_088A4B70;
    }
L_088A4B70:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BA0;
      }
      goto L_088A4B84;
    }
L_088A4B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (14801u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[5] | 46871u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088A4BA0;
L_088A4BA0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088A4BCC;
      }
      goto L_088A4BC0;
    }
L_088A4BC0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088A4BD0;
      }
      goto L_088A4BCC;
    }
L_088A4BCC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_088A4BD0;
L_088A4BD0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
        goto L_088A4C3C;
    }
    goto L_088A4C30;
L_088A4C30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088A4C3C;
      }
      goto L_088A4C3C;
    }
L_088A4C3C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4EA8;
      }
      goto L_088A4CF4;
    }
L_088A4CF4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_088A4D40;
      }
      goto L_088A4D30;
    }
L_088A4D30:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088A4D40;
L_088A4D40:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4D5C;
      }
      goto L_088A4D58;
    }
L_088A4D58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_088A4D5C;
L_088A4D5C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
      if (branch_taken) {
          goto L_088A4D90;
      }
      goto L_088A4D84;
    }
L_088A4D84:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088A4D94;
      }
      goto L_088A4D90;
    }
L_088A4D90:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_088A4D94;
L_088A4D94:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088A4DF4;
    }
    goto L_088A4DF4;
L_088A4DF4:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088A4E3Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A4E3Cu) goto L_088A4E3C;
    return;
L_088A4E3C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x088A4E4Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A4E4Cu) goto L_088A4E4C;
    return;
L_088A4E4C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x088A4E58u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 571u, 0x088A27ECu>(ctx, &aot_mem) && ctx.pc == 0x088A4E58u) goto L_088A4E58;
    return;
L_088A4E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_088A4EA0;
      }
      goto L_088A4E78;
    }
L_088A4E78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A4EA0;
L_088A4EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4EB4;
      }
      goto L_088A4EA8;
    }
L_088A4EA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x088A4EB4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 571u, 0x088A27ECu>(ctx, &aot_mem) && ctx.pc == 0x088A4EB4u) goto L_088A4EB4;
    return;
L_088A4EB4:
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4F50;
      }
      goto L_088A4ED4;
    }
L_088A4ED4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x088A4EE0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A4EE0u) goto L_088A4EE0;
    return;
L_088A4EE0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[31] = (0x088A4F04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem) && ctx.pc == 0x088A4F04u) goto L_088A4F04;
    return;
L_088A4F04:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
        goto L_088A4F28;
    }
    goto L_088A4F0C;
L_088A4F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4F48;
      }
      goto L_088A4F24;
    }
L_088A4F24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    goto L_088A4F28;
L_088A4F28:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25112)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088A4F48;
L_088A4F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F98;
      }
      goto L_088A4F50;
    }
L_088A4F50:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_088A4F98;
      }
      goto L_088A4F70;
    }
L_088A4F70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A4F98;
L_088A4F98:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5178;
      }
      goto L_088A4FA0;
    }
L_088A4FA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4FF4;
      }
      goto L_088A4FB8;
    }
L_088A4FB8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[31] = (0x088A4FC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 552u, 0x088A268Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4FC8u) goto L_088A4FC8;
    return;
L_088A4FC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x088A4FD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A4FD8u) goto L_088A4FD8;
    return;
L_088A4FD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[31] = (0x088A4FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A4FECu) goto L_088A4FEC;
    return;
L_088A4FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5018;
      }
      goto L_088A4FF4;
    }
L_088A4FF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[31] = (0x088A5004u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5004u) goto L_088A5004;
    return;
L_088A5004:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[31] = (0x088A5018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A5018u) goto L_088A5018;
    return;
L_088A5018:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5084;
      }
      goto L_088A502C;
    }
L_088A502C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[31] = (0x088A5040u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5040u) goto L_088A5040;
    return;
L_088A5040:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088A5058u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A5058u) goto L_088A5058;
    return;
L_088A5058:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A507Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 593u, 0x088A295Cu>(ctx, &aot_mem) && ctx.pc == 0x088A507Cu) goto L_088A507C;
    return;
L_088A507C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A50F8;
      }
      goto L_088A5084;
    }
L_088A5084:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x088A5098u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 552u, 0x088A268Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5098u) goto L_088A5098;
    return;
L_088A5098:
    ctx.gpr[31] = (0x088A50A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A50A0u) goto L_088A50A0;
    return;
L_088A50A0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A50B0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A50B0u) goto L_088A50B0;
    return;
L_088A50B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[31] = (0x088A50C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 575u, 0x088A2828u>(ctx, &aot_mem) && ctx.pc == 0x088A50C8u) goto L_088A50C8;
    return;
L_088A50C8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088A50D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A50D8u) goto L_088A50D8;
    return;
L_088A50D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x088A50E8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 554u, 0x088A26B8u>(ctx, &aot_mem) && ctx.pc == 0x088A50E8u) goto L_088A50E8;
    return;
L_088A50E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A50F8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 593u, 0x088A295Cu>(ctx, &aot_mem) && ctx.pc == 0x088A50F8u) goto L_088A50F8;
    return;
L_088A50F8:
    ctx.gpr[31] = (0x088A5100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 573u, 0x088A2818u>(ctx, &aot_mem) && ctx.pc == 0x088A5100u) goto L_088A5100;
    return;
L_088A5100:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x088A510Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 551u, 0x088A2670u>(ctx, &aot_mem) && ctx.pc == 0x088A510Cu) goto L_088A510C;
    return;
L_088A510C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088A5118u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 595u, 0x088A298Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5118u) goto L_088A5118;
    return;
L_088A5118:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A5130u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 573u, 0x088A2818u>(ctx, &aot_mem) && ctx.pc == 0x088A5130u) goto L_088A5130;
    return;
L_088A5130:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A5140u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A5140u) goto L_088A5140;
    return;
L_088A5140:
    ctx.gpr[31] = (0x088A5148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5148u) goto L_088A5148;
    return;
L_088A5148:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5158u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5158u) goto L_088A5158;
    return;
L_088A5158:
    ctx.gpr[31] = (0x088A5160u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 575u, 0x088A2828u>(ctx, &aot_mem) && ctx.pc == 0x088A5160u) goto L_088A5160;
    return;
L_088A5160:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A5170u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 593u, 0x088A295Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5170u) goto L_088A5170;
    return;
L_088A5170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A51F4;
      }
      goto L_088A5178;
    }
L_088A5178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A51B0;
      }
      goto L_088A5190;
    }
L_088A5190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088A51B0;
L_088A51B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A51D0;
      }
      goto L_088A51C8;
    }
L_088A51C8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A51D0;
L_088A51D0:
    ctx.gpr[31] = (0x088A51D8u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A51D8u) goto L_088A51D8;
    return;
L_088A51D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A51E8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A51E8u) goto L_088A51E8;
    return;
L_088A51E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A51F4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 591u, 0x088A2938u>(ctx, &aot_mem) && ctx.pc == 0x088A51F4u) goto L_088A51F4;
    return;
L_088A51F4:
    ctx.gpr[6] = (48419u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088A520Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A520Cu) goto L_088A520C;
    return;
L_088A520C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A550C;
      }
      goto L_088A5224;
    }
L_088A5224:
    ctx.gpr[31] = (0x088A522Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 585u, 0x088A28B8u>(ctx, &aot_mem) && ctx.pc == 0x088A522Cu) goto L_088A522C;
    return;
L_088A522C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_088A5380;
      }
      goto L_088A5234;
    }
L_088A5234:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088A5280;
      }
      goto L_088A5268;
    }
L_088A5268:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2048)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5284;
      }
      goto L_088A5280;
    }
L_088A5280:
    ctx.gpr[20] = (0u | 1u);
    goto L_088A5284;
L_088A5284:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x088A5290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 586u, 0x088A28C8u>(ctx, &aot_mem) && ctx.pc == 0x088A5290u) goto L_088A5290;
    return;
L_088A5290:
    ctx.gpr[31] = (0x088A5298u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 582u, 0x088A2890u>(ctx, &aot_mem) && ctx.pc == 0x088A5298u) goto L_088A5298;
    return;
L_088A5298:
    ctx.gpr[31] = (0x088A52A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 583u, 0x088A28A8u>(ctx, &aot_mem) && ctx.pc == 0x088A52A0u) goto L_088A52A0;
    return;
L_088A52A0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A52ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A52ACu) goto L_088A52AC;
    return;
L_088A52AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A52CCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 548u, 0x088A2608u>(ctx, &aot_mem) && ctx.pc == 0x088A52CCu) goto L_088A52CC;
    return;
L_088A52CC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A52D8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 571u, 0x088A27ECu>(ctx, &aot_mem) && ctx.pc == 0x088A52D8u) goto L_088A52D8;
    return;
L_088A52D8:
    ctx.gpr[31] = (0x088A52E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A52E0u) goto L_088A52E0;
    return;
L_088A52E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A52F0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 553u, 0x088A26A0u>(ctx, &aot_mem) && ctx.pc == 0x088A52F0u) goto L_088A52F0;
    return;
L_088A52F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x088A52FCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A52FCu) goto L_088A52FC;
    return;
L_088A52FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5314;
      }
      goto L_088A5304;
    }
L_088A5304:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A531C;
      }
      goto L_088A5314;
    }
L_088A5314:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A531C;
L_088A531C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x088A5328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A5328u) goto L_088A5328;
    return;
L_088A5328:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A5334u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A5334u) goto L_088A5334;
    return;
L_088A5334:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x088A5340u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x088A5340u) goto L_088A5340;
    return;
L_088A5340:
    ctx.gpr[4] = (16166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1320)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A5368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A5368u) goto L_088A5368;
    return;
L_088A5368:
    ctx.gpr[5] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A5378u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 572u, 0x088A27FCu>(ctx, &aot_mem) && ctx.pc == 0x088A5378u) goto L_088A5378;
    return;
L_088A5378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A550C;
      }
      goto L_088A5380;
    }
L_088A5380:
    ctx.gpr[31] = (0x088A5388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 51u, 0x08AD0598u>(ctx, &aot_mem) && ctx.pc == 0x088A5388u) goto L_088A5388;
    return;
L_088A5388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A550C;
      }
      goto L_088A5390;
    }
L_088A5390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A550C;
      }
      goto L_088A53B4;
    }
L_088A53B4:
    ctx.gpr[31] = (0x088A53BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 400u, 0x0894624Cu>(ctx, &aot_mem) && ctx.pc == 0x088A53BCu) goto L_088A53BC;
    return;
L_088A53BC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A550C;
      }
      goto L_088A53E8;
    }
L_088A53E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15477u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088A5450u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 587u, 0x088A28D0u>(ctx, &aot_mem) && ctx.pc == 0x088A5450u) goto L_088A5450;
    return;
L_088A5450:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A5468u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 587u, 0x088A28D0u>(ctx, &aot_mem) && ctx.pc == 0x088A5468u) goto L_088A5468;
    return;
L_088A5468:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[23] = (0u | 500u);
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x088A549Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088A549Cu) goto L_088A549C;
    return;
L_088A549C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088A54B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A54B4u) goto L_088A54B4;
    return;
L_088A54B4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A54C4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 587u, 0x088A28D0u>(ctx, &aot_mem) && ctx.pc == 0x088A54C4u) goto L_088A54C4;
    return;
L_088A54C4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A54DCu);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 587u, 0x088A28D0u>(ctx, &aot_mem) && ctx.pc == 0x088A54DCu) goto L_088A54DC;
    return;
L_088A54DC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[31] = (0x088A550Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088A550Cu) goto L_088A550C;
    return;
L_088A550C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5518;
      }
      goto L_088A5514;
    }
L_088A5514:
    ctx.gpr[19] = (0u | 1u);
    goto L_088A5518;
L_088A5518:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A57B8;
      }
      goto L_088A5520;
    }
L_088A5520:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A57B8;
      }
      goto L_088A5528;
    }
L_088A5528:
    ctx.gpr[31] = (0x088A5530u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 596u, 0x088A2994u>(ctx, &aot_mem) && ctx.pc == 0x088A5530u) goto L_088A5530;
    return;
L_088A5530:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A553Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 589u, 0x088A290Cu>(ctx, &aot_mem) && ctx.pc == 0x088A553Cu) goto L_088A553C;
    return;
L_088A553C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A5548u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 574u, 0x088A2820u>(ctx, &aot_mem) && ctx.pc == 0x088A5548u) goto L_088A5548;
    return;
L_088A5548:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A5554u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 551u, 0x088A2670u>(ctx, &aot_mem) && ctx.pc == 0x088A5554u) goto L_088A5554;
    return;
L_088A5554:
    ctx.gpr[4] = (15395u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5590;
      }
      goto L_088A557C;
    }
L_088A557C:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088A5590;
L_088A5590:
    ctx.gpr[31] = (0x088A5598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 608u, 0x088A2A14u>(ctx, &aot_mem) && ctx.pc == 0x088A5598u) goto L_088A5598;
    return;
L_088A5598:
    ctx.gpr[31] = (0x088A55A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 567u, 0x088A27A0u>(ctx, &aot_mem) && ctx.pc == 0x088A55A0u) goto L_088A55A0;
    return;
L_088A55A0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5634;
      }
      goto L_088A55BC;
    }
L_088A55BC:
    ctx.gpr[31] = (0x088A55C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 585u, 0x088A28B8u>(ctx, &aot_mem) && ctx.pc == 0x088A55C4u) goto L_088A55C4;
    return;
L_088A55C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5604;
      }
      goto L_088A55CC;
    }
L_088A55CC:
    ctx.gpr[31] = (0x088A55D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 608u, 0x088A2A14u>(ctx, &aot_mem) && ctx.pc == 0x088A55D4u) goto L_088A55D4;
    return;
L_088A55D4:
    ctx.gpr[31] = (0x088A55DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 567u, 0x088A27A0u>(ctx, &aot_mem) && ctx.pc == 0x088A55DCu) goto L_088A55DC;
    return;
L_088A55DC:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088A5634;
      }
      goto L_088A5604;
    }
L_088A5604:
    ctx.gpr[31] = (0x088A560Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 608u, 0x088A2A14u>(ctx, &aot_mem) && ctx.pc == 0x088A560Cu) goto L_088A560C;
    return;
L_088A560C:
    ctx.gpr[31] = (0x088A5614u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 567u, 0x088A27A0u>(ctx, &aot_mem) && ctx.pc == 0x088A5614u) goto L_088A5614;
    return;
L_088A5614:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088A5634;
L_088A5634:
    ctx.gpr[31] = (0x088A563Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 608u, 0x088A2A14u>(ctx, &aot_mem) && ctx.pc == 0x088A563Cu) goto L_088A563C;
    return;
L_088A563C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5664;
      }
      goto L_088A5650;
    }
L_088A5650:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5694;
      }
      goto L_088A5664;
    }
L_088A5664:
    ctx.gpr[31] = (0x088A566Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 608u, 0x088A2A14u>(ctx, &aot_mem) && ctx.pc == 0x088A566Cu) goto L_088A566C;
    return;
L_088A566C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5698;
      }
      goto L_088A5680;
    }
L_088A5680:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5698;
      }
      goto L_088A5694;
    }
L_088A5694:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_088A5698;
L_088A5698:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x088A56C4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 568u, 0x088A27ACu>(ctx, &aot_mem) && ctx.pc == 0x088A56C4u) goto L_088A56C4;
    return;
L_088A56C4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088A56D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A56D4u) goto L_088A56D4;
    return;
L_088A56D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A56E4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 548u, 0x088A2608u>(ctx, &aot_mem) && ctx.pc == 0x088A56E4u) goto L_088A56E4;
    return;
L_088A56E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A56F4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A56F4u) goto L_088A56F4;
    return;
L_088A56F4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A5700u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 571u, 0x088A27ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5700u) goto L_088A5700;
    return;
L_088A5700:
    ctx.gpr[31] = (0x088A5708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5708u) goto L_088A5708;
    return;
L_088A5708:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5718u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5718u) goto L_088A5718;
    return;
L_088A5718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A5724u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 591u, 0x088A2938u>(ctx, &aot_mem) && ctx.pc == 0x088A5724u) goto L_088A5724;
    return;
L_088A5724:
    ctx.gpr[31] = (0x088A572Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A572Cu) goto L_088A572C;
    return;
L_088A572C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A573Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 556u, 0x088A26ECu>(ctx, &aot_mem) && ctx.pc == 0x088A573Cu) goto L_088A573C;
    return;
L_088A573C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A574Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 593u, 0x088A295Cu>(ctx, &aot_mem) && ctx.pc == 0x088A574Cu) goto L_088A574C;
    return;
L_088A574C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088A575Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A575Cu) goto L_088A575C;
    return;
L_088A575C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088A576Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 563u, 0x088A274Cu>(ctx, &aot_mem) && ctx.pc == 0x088A576Cu) goto L_088A576C;
    return;
L_088A576C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (48960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x088A5790u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 573u, 0x088A2818u>(ctx, &aot_mem) && ctx.pc == 0x088A5790u) goto L_088A5790;
    return;
L_088A5790:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088A57A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A57A0u) goto L_088A57A0;
    return;
L_088A57A0:
    ctx.gpr[31] = (0x088A57A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 575u, 0x088A2828u>(ctx, &aot_mem) && ctx.pc == 0x088A57A8u) goto L_088A57A8;
    return;
L_088A57A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A57B8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 593u, 0x088A295Cu>(ctx, &aot_mem) && ctx.pc == 0x088A57B8u) goto L_088A57B8;
    return;
L_088A57B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A57D0;
      }
      goto L_088A57C0;
    }
L_088A57C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A57D0;
L_088A57D0:
    ctx.gpr[31] = (0x088A57D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 598u, 0x088A29A4u>(ctx, &aot_mem) && ctx.pc == 0x088A57D8u) goto L_088A57D8;
    return;
L_088A57D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A58DC;
      }
      goto L_088A57EC;
    }
L_088A57EC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[31] = (0x088A57F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 574u, 0x088A2820u>(ctx, &aot_mem) && ctx.pc == 0x088A57F8u) goto L_088A57F8;
    return;
L_088A57F8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A581Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 568u, 0x088A27ACu>(ctx, &aot_mem) && ctx.pc == 0x088A581Cu) goto L_088A581C;
    return;
L_088A581C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A582Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 547u, 0x088A25F0u>(ctx, &aot_mem) && ctx.pc == 0x088A582Cu) goto L_088A582C;
    return;
L_088A582C:
    ctx.gpr[31] = (0x088A5834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 589u, 0x088A290Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5834u) goto L_088A5834;
    return;
L_088A5834:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A5840u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 551u, 0x088A2670u>(ctx, &aot_mem) && ctx.pc == 0x088A5840u) goto L_088A5840;
    return;
L_088A5840:
    ctx.gpr[31] = (0x088A5848u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5848u) goto L_088A5848;
    return;
L_088A5848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088A5854u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 598u, 0x088A29A4u>(ctx, &aot_mem) && ctx.pc == 0x088A5854u) goto L_088A5854;
    return;
L_088A5854:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.gpr[5] = (16025u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1472)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A58A4u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 568u, 0x088A27ACu>(ctx, &aot_mem) && ctx.pc == 0x088A58A4u) goto L_088A58A4;
    return;
L_088A58A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A58B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A58B4u) goto L_088A58B4;
    return;
L_088A58B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A58C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x088A58C0u) goto L_088A58C0;
    return;
L_088A58C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A58D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A58D0u) goto L_088A58D0;
    return;
L_088A58D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A58DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 591u, 0x088A2938u>(ctx, &aot_mem) && ctx.pc == 0x088A58DCu) goto L_088A58DC;
    return;
L_088A58DC:
    ctx.gpr[31] = (0x088A58E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 585u, 0x088A28B8u>(ctx, &aot_mem) && ctx.pc == 0x088A58E4u) goto L_088A58E4;
    return;
L_088A58E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A59B0;
      }
      goto L_088A58EC;
    }
L_088A58EC:
    ctx.gpr[31] = (0x088A58F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A58F4u) goto L_088A58F4;
    return;
L_088A58F4:
    ctx.gpr[31] = (0x088A58FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x088A58FCu) goto L_088A58FC;
    return;
L_088A58FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A59B0;
      }
      goto L_088A5904;
    }
L_088A5904:
    ctx.gpr[31] = (0x088A590Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 610u, 0x088A2A24u>(ctx, &aot_mem) && ctx.pc == 0x088A590Cu) goto L_088A590C;
    return;
L_088A590C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A59B0;
      }
      goto L_088A5918;
    }
L_088A5918:
    ctx.gpr[31] = (0x088A5920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 589u, 0x088A290Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5920u) goto L_088A5920;
    return;
L_088A5920:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A592Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 574u, 0x088A2820u>(ctx, &aot_mem) && ctx.pc == 0x088A592Cu) goto L_088A592C;
    return;
L_088A592C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A5938u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 551u, 0x088A2670u>(ctx, &aot_mem) && ctx.pc == 0x088A5938u) goto L_088A5938;
    return;
L_088A5938:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A59B0;
      }
      goto L_088A5950;
    }
L_088A5950:
    ctx.gpr[31] = (0x088A5958u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5958u) goto L_088A5958;
    return;
L_088A5958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088A5964u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 597u, 0x088A299Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5964u) goto L_088A5964;
    return;
L_088A5964:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A5994u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 574u, 0x088A2820u>(ctx, &aot_mem) && ctx.pc == 0x088A5994u) goto L_088A5994;
    return;
L_088A5994:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A59A4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 555u, 0x088A26D0u>(ctx, &aot_mem) && ctx.pc == 0x088A59A4u) goto L_088A59A4;
    return;
L_088A59A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A59B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 591u, 0x088A2938u>(ctx, &aot_mem) && ctx.pc == 0x088A59B0u) goto L_088A59B0;
    return;
L_088A59B0:
    ctx.gpr[31] = (0x088A59B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 589u, 0x088A290Cu>(ctx, &aot_mem) && ctx.pc == 0x088A59B8u) goto L_088A59B8;
    return;
L_088A59B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x088A59C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A59C4u) goto L_088A59C4;
    return;
L_088A59C4:
    ctx.gpr[31] = (0x088A59CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 586u, 0x088A28C8u>(ctx, &aot_mem) && ctx.pc == 0x088A59CCu) goto L_088A59CC;
    return;
L_088A59CC:
    ctx.gpr[4] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5ACC;
      }
      goto L_088A59D8;
    }
L_088A59D8:
    ctx.gpr[31] = (0x088A59E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A59E0u) goto L_088A59E0;
    return;
L_088A59E0:
    ctx.gpr[4] = (17601u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A5A1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 557u, 0x088A2708u>(ctx, &aot_mem) && ctx.pc == 0x088A5A1Cu) goto L_088A5A1C;
    return;
L_088A5A1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5A28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A5A28u) goto L_088A5A28;
    return;
L_088A5A28:
    ctx.gpr[4] = (50435u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A5A5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 563u, 0x088A274Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5A5Cu) goto L_088A5A5C;
    return;
L_088A5A5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5A68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A5A68u) goto L_088A5A68;
    return;
L_088A5A68:
    ctx.gpr[4] = (17645u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A5A94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 557u, 0x088A2708u>(ctx, &aot_mem) && ctx.pc == 0x088A5A94u) goto L_088A5A94;
    return;
L_088A5A94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A5AA0u) goto L_088A5AA0;
    return;
L_088A5AA0:
    ctx.gpr[4] = (50413u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A5AC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 563u, 0x088A274Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5AC8u) goto L_088A5AC8;
    return;
L_088A5AC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A5ACC;
L_088A5ACC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x088A5AD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088A5AD8u) goto L_088A5AD8;
    return;
L_088A5AD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B00;
      }
      goto L_088A5AE8;
    }
L_088A5AE8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B00;
      }
      goto L_088A5AF0;
    }
L_088A5AF0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B00;
      }
      goto L_088A5AF8;
    }
L_088A5AF8:
    ctx.gpr[31] = (0x088A5B00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 269u, 0x088A9EE0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B00u) goto L_088A5B00;
    return;
L_088A5B00:
    ctx.gpr[31] = (0x088A5B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 589u, 0x088A290Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B08u) goto L_088A5B08;
    return;
L_088A5B08:
    ctx.gpr[31] = (0x088A5B10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 570u, 0x088A27D0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B10u) goto L_088A5B10;
    return;
L_088A5B10:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5B1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 586u, 0x088A28C8u>(ctx, &aot_mem) && ctx.pc == 0x088A5B1Cu) goto L_088A5B1C;
    return;
L_088A5B1C:
    ctx.gpr[4] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5B40;
      }
      goto L_088A5B28;
    }
L_088A5B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1088)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
        goto L_088A5D18;
    }
    goto L_088A5B40;
L_088A5B40:
    if (ctx.gpr[18] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
        goto L_088A5D18;
    }
    goto L_088A5B48;
L_088A5B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A5B60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 610u, 0x088A2A24u>(ctx, &aot_mem) && ctx.pc == 0x088A5B60u) goto L_088A5B60;
    return;
L_088A5B60:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5C48;
      }
      goto L_088A5B6C;
    }
L_088A5B6C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5C48;
      }
      goto L_088A5B88;
    }
L_088A5B88:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A5BBC;
      }
      goto L_088A5BA8;
    }
L_088A5BA8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[24];
    goto L_088A5BBC;
L_088A5BBC:
    ctx.gpr[31] = (0x088A5BC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A5BC4u) goto L_088A5BC4;
    return;
L_088A5BC4:
    ctx.gpr[31] = (0x088A5BCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x088A5BCCu) goto L_088A5BCC;
    return;
L_088A5BCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15800u << 16u);
      if (branch_taken) {
          goto L_088A5BF4;
      }
      goto L_088A5BD4;
    }
L_088A5BD4:
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1536)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A5C14;
      }
      goto L_088A5BF4;
    }
L_088A5BF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1536)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A5C14;
L_088A5C14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25052)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25056)));
    ctx.gpr[5] = (16253u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 28836u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A5C44u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1576));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 677u, 0x088A2EC4u>(ctx, &aot_mem) && ctx.pc == 0x088A5C44u) goto L_088A5C44;
    return;
L_088A5C44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1536), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A5C48;
L_088A5C48:
    ctx.gpr[31] = (0x088A5C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C50u) goto L_088A5C50;
    return;
L_088A5C50:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088A5C5Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 566u, 0x088A2774u>(ctx, &aot_mem) && ctx.pc == 0x088A5C5Cu) goto L_088A5C5C;
    return;
L_088A5C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5C6Cu);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C6Cu) goto L_088A5C6C;
    return;
L_088A5C6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A5C78u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 566u, 0x088A2774u>(ctx, &aot_mem) && ctx.pc == 0x088A5C78u) goto L_088A5C78;
    return;
L_088A5C78:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5C84u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1536)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5C84u) goto L_088A5C84;
    return;
L_088A5C84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088A5C90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 566u, 0x088A2774u>(ctx, &aot_mem) && ctx.pc == 0x088A5C90u) goto L_088A5C90;
    return;
L_088A5C90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088A5CA4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 568u, 0x088A27ACu>(ctx, &aot_mem) && ctx.pc == 0x088A5CA4u) goto L_088A5CA4;
    return;
L_088A5CA4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A5CBCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 549u, 0x088A2628u>(ctx, &aot_mem) && ctx.pc == 0x088A5CBCu) goto L_088A5CBC;
    return;
L_088A5CBC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A5CC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 571u, 0x088A27ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5CC8u) goto L_088A5CC8;
    return;
L_088A5CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1552)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1556)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1560)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A5D08u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 548u, 0x088A2608u>(ctx, &aot_mem) && ctx.pc == 0x088A5D08u) goto L_088A5D08;
    return;
L_088A5D08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A5D14u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 571u, 0x088A27ECu>(ctx, &aot_mem) && ctx.pc == 0x088A5D14u) goto L_088A5D14;
    return;
L_088A5D14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    goto L_088A5D18;
L_088A5D18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A5DC0;
      }
      goto L_088A5D40;
    }
L_088A5D40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5DC0;
      }
      goto L_088A5D50;
    }
L_088A5D50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5DC0;
      }
      goto L_088A5D68;
    }
L_088A5D68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5DC0;
      }
      goto L_088A5D94;
    }
L_088A5D94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088A5DC0u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088A5DC0u) goto L_088A5DC0;
    return;
L_088A5DC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5DE4;
      }
      goto L_088A5DCC;
    }
L_088A5DCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088A5DE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 656u, 0x08B0B7F4u>(ctx, &aot_mem) && ctx.pc == 0x088A5DE4u) goto L_088A5DE4;
    return;
L_088A5DE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5EA4;
      }
      goto L_088A5DFC;
    }
L_088A5DFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5EA4;
      }
      goto L_088A5E14;
    }
L_088A5E14:
    ctx.gpr[31] = (0x088A5E1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 586u, 0x088A28C8u>(ctx, &aot_mem) && ctx.pc == 0x088A5E1Cu) goto L_088A5E1C;
    return;
L_088A5E1C:
    ctx.gpr[4] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5EA4;
      }
      goto L_088A5E28;
    }
L_088A5E28:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x088A5E4Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 568u, 0x088A27ACu>(ctx, &aot_mem) && ctx.pc == 0x088A5E4Cu) goto L_088A5E4C;
    return;
L_088A5E4C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.gpr[31] = (0x088A5E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A5E58u) goto L_088A5E58;
    return;
L_088A5E58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A5E64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A5E64u) goto L_088A5E64;
    return;
L_088A5E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1600)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1604)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1608)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[31] = (0x088A5E7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem) && ctx.pc == 0x088A5E7Cu) goto L_088A5E7C;
    return;
L_088A5E7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1616)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 65u);
    ctx.gpr[31] = (0x088A5EA4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem) && ctx.pc == 0x088A5EA4u) goto L_088A5EA4;
    return;
L_088A5EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A5F4C;
      }
      goto L_088A5EB0;
    }
L_088A5EB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1061))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5EE4;
      }
      goto L_088A5EC0;
    }
L_088A5EC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A5ED4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 590u, 0x088A2914u>(ctx, &aot_mem) && ctx.pc == 0x088A5ED4u) goto L_088A5ED4;
    return;
L_088A5ED4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1061))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1061), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A5F04;
      }
      goto L_088A5EE4;
    }
L_088A5EE4:
    ctx.gpr[31] = (0x088A5EECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 610u, 0x088A2A24u>(ctx, &aot_mem) && ctx.pc == 0x088A5EECu) goto L_088A5EEC;
    return;
L_088A5EEC:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
        goto L_088A5F08;
    }
    goto L_088A5EF8;
L_088A5EF8:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A5F04;
L_088A5F04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    goto L_088A5F08;
L_088A5F08:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A5F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 610u, 0x088A2A24u>(ctx, &aot_mem) && ctx.pc == 0x088A5F2Cu) goto L_088A5F2C;
    return;
L_088A5F2C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5F4C;
      }
      goto L_088A5F38;
    }
L_088A5F38:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F4C;
      }
      goto L_088A5F40;
    }
L_088A5F40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A5F4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 41u, 0x088A8374u>(ctx, &aot_mem) && ctx.pc == 0x088A5F4Cu) goto L_088A5F4C;
    return;
L_088A5F4C:
    ctx.gpr[31] = (0x088A5F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 586u, 0x088A28C8u>(ctx, &aot_mem) && ctx.pc == 0x088A5F54u) goto L_088A5F54;
    return;
L_088A5F54:
    ctx.gpr[4] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6050;
      }
      goto L_088A5F60;
    }
L_088A5F60:
    ctx.gpr[31] = (0x088A5F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5F68u) goto L_088A5F68;
    return;
L_088A5F68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6050;
      }
      goto L_088A5F7C;
    }
L_088A5F7C:
    ctx.gpr[31] = (0x088A5F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 585u, 0x088A28B8u>(ctx, &aot_mem) && ctx.pc == 0x088A5F84u) goto L_088A5F84;
    return;
L_088A5F84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5FF8;
      }
      goto L_088A5F8C;
    }
L_088A5F8C:
    ctx.gpr[4] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(948)));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5FCC;
      }
      goto L_088A5FAC;
    }
L_088A5FAC:
    ctx.gpr[31] = (0x088A5FB4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(948)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5FB4u) goto L_088A5FB4;
    return;
L_088A5FB4:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A5FCC;
L_088A5FCC:
    ctx.gpr[6] = (50716u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A5FF0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 475u, 0x08B061F8u>(ctx, &aot_mem) && ctx.pc == 0x088A5FF0u) goto L_088A5FF0;
    return;
L_088A5FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6080;
      }
      goto L_088A5FF8;
    }
L_088A5FF8:
    ctx.gpr[31] = (0x088A6000u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(948)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6000u) goto L_088A6000;
    return;
L_088A6000:
    ctx.gpr[4] = (14851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6044;
      }
      goto L_088A6020;
    }
L_088A6020:
    ctx.gpr[31] = (0x088A6028u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(948)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 584u, 0x088A28B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6028u) goto L_088A6028;
    return;
L_088A6028:
    ctx.gpr[4] = (14851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A6080;
      }
      goto L_088A6044;
    }
L_088A6044:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A6080;
      }
      goto L_088A6050;
    }
L_088A6050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1783)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6080;
      }
      goto L_088A605C;
    }
L_088A605C:
    ctx.gpr[6] = (50716u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A6080u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 475u, 0x08B061F8u>(ctx, &aot_mem) && ctx.pc == 0x088A6080u) goto L_088A6080;
    return;
L_088A6080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6138;
      }
      goto L_088A6090;
    }
L_088A6090:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.gpr[31] = (0x088A609Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 589u, 0x088A290Cu>(ctx, &aot_mem) && ctx.pc == 0x088A609Cu) goto L_088A609C;
    return;
L_088A609C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A60A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A60A8u) goto L_088A60A8;
    return;
L_088A60A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A60C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088A60C0u) goto L_088A60C0;
    return;
L_088A60C0:
    ctx.gpr[4] = (50716u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A60F0;
      }
      goto L_088A60E0;
    }
L_088A60E0:
    ctx.gpr[31] = (0x088A60E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 577u, 0x088A2838u>(ctx, &aot_mem) && ctx.pc == 0x088A60E8u) goto L_088A60E8;
    return;
L_088A60E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088A6138;
      }
      goto L_088A60F0;
    }
L_088A60F0:
    ctx.gpr[31] = (0x088A60F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 577u, 0x088A2838u>(ctx, &aot_mem) && ctx.pc == 0x088A60F8u) goto L_088A60F8;
    return;
L_088A60F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A6108u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 576u, 0x088A2830u>(ctx, &aot_mem) && ctx.pc == 0x088A6108u) goto L_088A6108;
    return;
L_088A6108:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.gpr[31] = (0x088A6114u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 569u, 0x088A27C0u>(ctx, &aot_mem) && ctx.pc == 0x088A6114u) goto L_088A6114;
    return;
L_088A6114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A6120u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6120u) goto L_088A6120;
    return;
L_088A6120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A6138;
L_088A6138:
    ctx.gpr[31] = (0x088A6140u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 947u, 0x08AFFEFCu>(ctx, &aot_mem) && ctx.pc == 0x088A6140u) goto L_088A6140;
    return;
L_088A6140:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A61D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A61D4u) goto L_088A61D4;
    return;
L_088A61D4:
    ctx.gpr[31] = (0x088A61DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088A61DCu) goto L_088A61DC;
    return;
L_088A61DC:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A6238;
      }
      goto L_088A6208;
    }
L_088A6208:
    ctx.gpr[31] = (0x088A6210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6210u) goto L_088A6210;
    return;
L_088A6210:
    ctx.gpr[31] = (0x088A6218u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088A6218u) goto L_088A6218;
    return;
L_088A6218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6238;
      }
      goto L_088A6220;
    }
L_088A6220:
    ctx.gpr[31] = (0x088A6228u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6228u) goto L_088A6228;
    return;
L_088A6228:
    ctx.gpr[31] = (0x088A6230u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x088A6230u) goto L_088A6230;
    return;
L_088A6230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6334;
      }
      goto L_088A6238;
    }
L_088A6238:
    ctx.gpr[31] = (0x088A6240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6240u) goto L_088A6240;
    return;
L_088A6240:
    ctx.gpr[31] = (0x088A6248u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x088A6248u) goto L_088A6248;
    return;
L_088A6248:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A62C8;
      }
      goto L_088A6250;
    }
L_088A6250:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x088A625Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A625Cu) goto L_088A625C;
    return;
L_088A625C:
    ctx.gpr[31] = (0x088A6264u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088A6264u) goto L_088A6264;
    return;
L_088A6264:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[30] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_088A62AC;
    }
    goto L_088A62AC;
L_088A62AC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088A62C0;
    }
    goto L_088A62C0;
L_088A62C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A62CC;
      }
      goto L_088A62C8;
    }
L_088A62C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088A62CC;
L_088A62CC:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48793u << 16u);
      if (branch_taken) {
          goto L_088A631C;
      }
      goto L_088A62EC;
    }
L_088A62EC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A62F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A62F8u) goto L_088A62F8;
    return;
L_088A62F8:
    ctx.gpr[31] = (0x088A6300u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088A6300u) goto L_088A6300;
    return;
L_088A6300:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A633C;
      }
      goto L_088A631C;
    }
L_088A631C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A633C;
      }
      goto L_088A6334;
    }
L_088A6334:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088A633C;
L_088A633C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[31] = (0x088A6348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6348u) goto L_088A6348;
    return;
L_088A6348:
    ctx.gpr[31] = (0x088A6350u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6350u) goto L_088A6350;
    return;
L_088A6350:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[30] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
        goto L_088A6388;
    }
    goto L_088A6388;
L_088A6388:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088A639C;
    }
    goto L_088A639C;
L_088A639C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6488;
      }
      goto L_088A63B0;
    }
L_088A63B0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[31] = (0x088A63BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A63BCu) goto L_088A63BC;
    return;
L_088A63BC:
    ctx.gpr[31] = (0x088A63C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x088A63C4u) goto L_088A63C4;
    return;
L_088A63C4:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1104)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[30] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1104)));
        goto L_088A6404;
    }
    goto L_088A6404;
L_088A6404:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088A6418;
    }
    goto L_088A6418;
L_088A6418:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1108)));
    ctx.gpr[31] = (0x088A6428u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6428u) goto L_088A6428;
    return;
L_088A6428:
    ctx.gpr[31] = (0x088A6430u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6430u) goto L_088A6430;
    return;
L_088A6430:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1108)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1108)));
        goto L_088A6470;
    }
    goto L_088A6470;
L_088A6470:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088A6484;
    }
    goto L_088A6484;
L_088A6484:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A6488;
L_088A6488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A64A8;
      }
      goto L_088A649C;
    }
L_088A649C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088A64B4;
      }
      goto L_088A64A8;
    }
L_088A64A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_088A64B4;
L_088A64B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A64F0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A64F0u) goto L_088A64F0;
    return;
L_088A64F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A651C;
      }
      goto L_088A64FC;
    }
L_088A64FC:
    ctx.gpr[31] = (0x088A6504u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6504u) goto L_088A6504;
    return;
L_088A6504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A651C;
      }
      goto L_088A6510;
    }
L_088A6510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A65C4;
      }
      goto L_088A651C;
    }
L_088A651C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6540;
      }
      goto L_088A6528;
    }
L_088A6528:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4209)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6540;
      }
      goto L_088A6534;
    }
L_088A6534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A65C4;
      }
      goto L_088A6540;
    }
L_088A6540:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A6550u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088A6550u) goto L_088A6550;
    return;
L_088A6550:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_088A657C;
      }
      goto L_088A656C;
    }
L_088A656C:
    ctx.gpr[31] = (0x088A6574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088A6574u) goto L_088A6574;
    return;
L_088A6574:
    ctx.gpr[31] = (0x088A657Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894CE40u>(ctx, &aot_mem) && ctx.pc == 0x088A657Cu) goto L_088A657C;
    return;
L_088A657C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A65C4;
      }
      goto L_088A65A0;
    }
L_088A65A0:
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A65C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088A65C4u) goto L_088A65C4;
    return;
L_088A65C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A677C;
      }
      goto L_088A65D4;
    }
L_088A65D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A677C;
      }
      goto L_088A65E4;
    }
L_088A65E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16543u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16314u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A6638u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6638u) goto L_088A6638;
    return;
L_088A6638:
    ctx.gpr[31] = (0x088A6640u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6640u) goto L_088A6640;
    return;
L_088A6640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A677C;
      }
      goto L_088A6648;
    }
L_088A6648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A677C;
      }
      goto L_088A6664;
    }
L_088A6664:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[31] = (0x088A6678u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 117u, 0x08A40A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6678u) goto L_088A6678;
    return;
L_088A6678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_088A66BC;
L_088A66BC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A66DCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 550u, 0x088A2648u>(ctx, &aot_mem) && ctx.pc == 0x088A66DCu) goto L_088A66DC;
    return;
L_088A66DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088A672Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 46u, 0x08A4842Cu>(ctx, &aot_mem) && ctx.pc == 0x088A672Cu) goto L_088A672C;
    return;
L_088A672C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088A6748u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 255u, 0x08A41568u>(ctx, &aot_mem) && ctx.pc == 0x088A6748u) goto L_088A6748;
    return;
L_088A6748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 55u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A6760u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088A6760u) goto L_088A6760;
    return;
L_088A6760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A66BC;
      }
      goto L_088A677C;
    }
L_088A677C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A67C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A6808u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 662u, 0x08AFEF74u>(ctx, &aot_mem) && ctx.pc == 0x088A6808u) goto L_088A6808;
    return;
L_088A6808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[23] = (0u | 249u);
      if (branch_taken) {
          goto L_088A6EE4;
      }
      goto L_088A6838;
    }
L_088A6838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(948)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16073u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088A68A8;
    }
    goto L_088A68A8;
L_088A68A8:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A68EC;
      }
      goto L_088A68D8;
    }
L_088A68D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6C20;
      }
      goto L_088A68EC;
    }
L_088A68EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A69C4;
      }
      goto L_088A68F8;
    }
L_088A68F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16068u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38922u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(968)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A6954;
      }
      goto L_088A693C;
    }
L_088A693C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6958;
      }
      goto L_088A694C;
    }
L_088A694C:
    ctx.gpr[31] = (0x088A6954u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6954u) goto L_088A6954;
    return;
L_088A6954:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A6958;
L_088A6958:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6970u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6970u) goto L_088A6970;
    return;
L_088A6970:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A6994u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x088A6994u) goto L_088A6994;
    return;
L_088A6994:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088A69A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 5u, 0x088600C4u>(ctx, &aot_mem) && ctx.pc == 0x088A69A8u) goto L_088A69A8;
    return;
L_088A69A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A69BCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A69BCu) goto L_088A69BC;
    return;
L_088A69BC:
    ctx.gpr[31] = (0x088A69C4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A69C4u) goto L_088A69C4;
    return;
L_088A69C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(972)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6A4C;
      }
      goto L_088A69D0;
    }
L_088A69D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A69FC;
      }
      goto L_088A69E4;
    }
L_088A69E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6A00;
      }
      goto L_088A69F4;
    }
L_088A69F4:
    ctx.gpr[31] = (0x088A69FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A69FCu) goto L_088A69FC;
    return;
L_088A69FC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A6A00;
L_088A6A00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6A18u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6A18u) goto L_088A6A18;
    return;
L_088A6A18:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A6A30u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6A30u) goto L_088A6A30;
    return;
L_088A6A30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6A44u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6A44u) goto L_088A6A44;
    return;
L_088A6A44:
    ctx.gpr[31] = (0x088A6A4Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6A4Cu) goto L_088A6A4C;
    return;
L_088A6A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(976)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6AD0;
      }
      goto L_088A6A58;
    }
L_088A6A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A6A84;
      }
      goto L_088A6A6C;
    }
L_088A6A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6A88;
      }
      goto L_088A6A7C;
    }
L_088A6A7C:
    ctx.gpr[31] = (0x088A6A84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6A84u) goto L_088A6A84;
    return;
L_088A6A84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A6A88;
L_088A6A88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6AA0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6AA0u) goto L_088A6AA0;
    return;
L_088A6AA0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x088A6AB4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6AB4u) goto L_088A6AB4;
    return;
L_088A6AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6AC8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6AC8u) goto L_088A6AC8;
    return;
L_088A6AC8:
    ctx.gpr[31] = (0x088A6AD0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6AD0u) goto L_088A6AD0;
    return;
L_088A6AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(980)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6B78;
      }
      goto L_088A6ADC;
    }
L_088A6ADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(980)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A6B08;
      }
      goto L_088A6AF0;
    }
L_088A6AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6B0C;
      }
      goto L_088A6B00;
    }
L_088A6B00:
    ctx.gpr[31] = (0x088A6B08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6B08u) goto L_088A6B08;
    return;
L_088A6B08:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A6B0C;
L_088A6B0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6B24u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6B24u) goto L_088A6B24;
    return;
L_088A6B24:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A6B34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6B34u) goto L_088A6B34;
    return;
L_088A6B34:
    ctx.gpr[31] = (0x088A6B3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x088A6B3Cu) goto L_088A6B3C;
    return;
L_088A6B3C:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A6B5Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6B5Cu) goto L_088A6B5C;
    return;
L_088A6B5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6B70u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6B70u) goto L_088A6B70;
    return;
L_088A6B70:
    ctx.gpr[31] = (0x088A6B78u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6B78u) goto L_088A6B78;
    return;
L_088A6B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6C20;
      }
      goto L_088A6B84;
    }
L_088A6B84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A6BB0;
      }
      goto L_088A6B98;
    }
L_088A6B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6BB4;
      }
      goto L_088A6BA8;
    }
L_088A6BA8:
    ctx.gpr[31] = (0x088A6BB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6BB0u) goto L_088A6BB0;
    return;
L_088A6BB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A6BB4;
L_088A6BB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6BCCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6BCCu) goto L_088A6BCC;
    return;
L_088A6BCC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A6BDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A6BDCu) goto L_088A6BDC;
    return;
L_088A6BDC:
    ctx.gpr[31] = (0x088A6BE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x088A6BE4u) goto L_088A6BE4;
    return;
L_088A6BE4:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088A6C04u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6C04u) goto L_088A6C04;
    return;
L_088A6C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6C18u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6C18u) goto L_088A6C18;
    return;
L_088A6C18:
    ctx.gpr[31] = (0x088A6C20u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6C20u) goto L_088A6C20;
    return;
L_088A6C20:
    ctx.gpr[19] = (2179u << 16u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[18] = (0u | 9u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[23] = (0u | 12u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(992));
    goto L_088A6C44;
L_088A6C44:
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[16] = (ctx.gpr[22] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(956)));
    ctx.gpr[17] = (ctx.gpr[21] << 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A6CA8;
      }
      goto L_088A6C5C;
    }
L_088A6C5C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(956)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088A6C78u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 821u, 0x08AFF730u>(ctx, &aot_mem) && ctx.pc == 0x088A6C78u) goto L_088A6C78;
    return;
L_088A6C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(956)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A6C8Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x088A6C8Cu) goto L_088A6C8C;
    return;
L_088A6C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6CA8;
      }
      goto L_088A6C98;
    }
L_088A6C98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A6CA8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6CA8u) goto L_088A6CA8;
    return;
L_088A6CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(956)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6D14;
      }
      goto L_088A6CB4;
    }
L_088A6CB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(956)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088A6CD0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 821u, 0x08AFF730u>(ctx, &aot_mem) && ctx.pc == 0x088A6CD0u) goto L_088A6CD0;
    return;
L_088A6CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(956)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A6CE4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x088A6CE4u) goto L_088A6CE4;
    return;
L_088A6CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6D14;
      }
      goto L_088A6CF0;
    }
L_088A6CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_088A6D04;
    }
    goto L_088A6D04;
L_088A6D04:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A6D14u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6D14u) goto L_088A6D14;
    return;
L_088A6D14:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088A6D2C;
      }
      goto L_088A6D1C;
    }
L_088A6D1C:
    ctx.gpr[18] = (0u | 14u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 15u);
      if (branch_taken) {
          goto L_088A6D30;
      }
      goto L_088A6D2C;
    }
L_088A6D2C:
    ctx.gpr[18] = (0u | 0u);
    goto L_088A6D30;
L_088A6D30:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6C44;
      }
      goto L_088A6D38;
    }
L_088A6D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 249u);
      if (branch_taken) {
          goto L_088A6DFC;
      }
      goto L_088A6D4C;
    }
L_088A6D4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (2186u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10032));
      if (branch_taken) {
          goto L_088A6D80;
      }
      goto L_088A6D68;
    }
L_088A6D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6D84;
      }
      goto L_088A6D78;
    }
L_088A6D78:
    ctx.gpr[31] = (0x088A6D80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6D80u) goto L_088A6D80;
    return;
L_088A6D80:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_088A6D84;
L_088A6D84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6D9Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6D9Cu) goto L_088A6D9C;
    return;
L_088A6D9C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    ctx.gpr[31] = (0x088A6DB0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x088A6DB0u) goto L_088A6DB0;
    return;
L_088A6DB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6DC4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6DC4u) goto L_088A6DC4;
    return;
L_088A6DC4:
    ctx.gpr[31] = (0x088A6DCCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6DCCu) goto L_088A6DCC;
    return;
L_088A6DCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A6DE0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x088A6DE0u) goto L_088A6DE0;
    return;
L_088A6DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6DFC;
      }
      goto L_088A6DEC;
    }
L_088A6DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A6DFCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6DFCu) goto L_088A6DFC;
    return;
L_088A6DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6ED0;
      }
      goto L_088A6E08;
    }
L_088A6E08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(964)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (2186u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10032));
      if (branch_taken) {
          goto L_088A6E3C;
      }
      goto L_088A6E24;
    }
L_088A6E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6E40;
      }
      goto L_088A6E34;
    }
L_088A6E34:
    ctx.gpr[31] = (0x088A6E3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E3Cu) goto L_088A6E3C;
    return;
L_088A6E3C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_088A6E40;
L_088A6E40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6E58u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6E58u) goto L_088A6E58;
    return;
L_088A6E58:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A6E70u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x088A6E70u) goto L_088A6E70;
    return;
L_088A6E70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6E84u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6E84u) goto L_088A6E84;
    return;
L_088A6E84:
    ctx.gpr[31] = (0x088A6E8Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6E8Cu) goto L_088A6E8C;
    return;
L_088A6E8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(964)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A6EA0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x088A6EA0u) goto L_088A6EA0;
    return;
L_088A6EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6ED0;
      }
      goto L_088A6EAC;
    }
L_088A6EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_088A6EC0;
    }
    goto L_088A6EC0;
L_088A6EC0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A6ED0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 502u, 0x08B01DD0u>(ctx, &aot_mem) && ctx.pc == 0x088A6ED0u) goto L_088A6ED0;
    return;
L_088A6ED0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A6EDCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem) && ctx.pc == 0x088A6EDCu) goto L_088A6EDC;
    return;
L_088A6EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A70D8;
      }
      goto L_088A6EE4;
    }
L_088A6EE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-997));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6F40;
      }
      goto L_088A6EF4;
    }
L_088A6EF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 277u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6F40;
      }
      goto L_088A6F04;
    }
L_088A6F04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088A6F40;
      }
      goto L_088A6F10;
    }
L_088A6F10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 257u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6F40;
      }
      goto L_088A6F20;
    }
L_088A6F20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 225u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6F40;
      }
      goto L_088A6F30;
    }
L_088A6F30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 248u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A70D8;
      }
      goto L_088A6F40;
    }
L_088A6F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6FC8;
      }
      goto L_088A6F4C;
    }
L_088A6F4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(968)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A6F78;
      }
      goto L_088A6F60;
    }
L_088A6F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A6F7C;
      }
      goto L_088A6F70;
    }
L_088A6F70:
    ctx.gpr[31] = (0x088A6F78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6F78u) goto L_088A6F78;
    return;
L_088A6F78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A6F7C;
L_088A6F7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A6F94u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A6F94u) goto L_088A6F94;
    return;
L_088A6F94:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A6FACu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x088A6FACu) goto L_088A6FAC;
    return;
L_088A6FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A6FC0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A6FC0u) goto L_088A6FC0;
    return;
L_088A6FC0:
    ctx.gpr[31] = (0x088A6FC8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A6FC8u) goto L_088A6FC8;
    return;
L_088A6FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(980)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7050;
      }
      goto L_088A6FD4;
    }
L_088A6FD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(980)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A7000;
      }
      goto L_088A6FE8;
    }
L_088A6FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A7004;
      }
      goto L_088A6FF8;
    }
L_088A6FF8:
    ctx.gpr[31] = (0x088A7000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7000u) goto L_088A7000;
    return;
L_088A7000:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A7004;
L_088A7004:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A701Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A701Cu) goto L_088A701C;
    return;
L_088A701C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A7034u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x088A7034u) goto L_088A7034;
    return;
L_088A7034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A7048u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A7048u) goto L_088A7048;
    return;
L_088A7048:
    ctx.gpr[31] = (0x088A7050u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A7050u) goto L_088A7050;
    return;
L_088A7050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A70D8;
      }
      goto L_088A705C;
    }
L_088A705C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A7088;
      }
      goto L_088A7070;
    }
L_088A7070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A708C;
      }
      goto L_088A7080;
    }
L_088A7080:
    ctx.gpr[31] = (0x088A7088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7088u) goto L_088A7088;
    return;
L_088A7088:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A708C;
L_088A708C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A70A4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A70A4u) goto L_088A70A4;
    return;
L_088A70A4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A70BCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x088A70BCu) goto L_088A70BC;
    return;
L_088A70BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A70D0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A70D0u) goto L_088A70D0;
    return;
L_088A70D0:
    ctx.gpr[31] = (0x088A70D8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A70D8u) goto L_088A70D8;
    return;
L_088A70D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088A70F4;
      }
      goto L_088A70E4;
    }
L_088A70E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 248u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A71B0;
      }
      goto L_088A70F4;
    }
L_088A70F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(972)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A71B0;
      }
      goto L_088A7100;
    }
L_088A7100:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A711Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 29u, 0x08A0019Cu>(ctx, &aot_mem) && ctx.pc == 0x088A711Cu) goto L_088A711C;
    return;
L_088A711C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1049)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(972)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A715C;
      }
      goto L_088A7144;
    }
L_088A7144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A7160;
      }
      goto L_088A7154;
    }
L_088A7154:
    ctx.gpr[31] = (0x088A715Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A715Cu) goto L_088A715C;
    return;
L_088A715C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A7160;
L_088A7160:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A7178u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A7178u) goto L_088A7178;
    return;
L_088A7178:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x088A7194u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x088A7194u) goto L_088A7194;
    return;
L_088A7194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A71A8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A71A8u) goto L_088A71A8;
    return;
L_088A71A8:
    ctx.gpr[31] = (0x088A71B0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A71B0u) goto L_088A71B0;
    return;
L_088A71B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088A7544;
      }
      goto L_088A71BC;
    }
L_088A71BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(976)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A741C;
      }
      goto L_088A71C8;
    }
L_088A71C8:
    ctx.gpr[5] = (48969u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(976)));
    ctx.gpr[5] = (16268u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] | 48716u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A7210;
      }
      goto L_088A71F8;
    }
L_088A71F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A7214;
      }
      goto L_088A7208;
    }
L_088A7208:
    ctx.gpr[31] = (0x088A7210u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7210u) goto L_088A7210;
    return;
L_088A7210:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A7214;
L_088A7214:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A722Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A722Cu) goto L_088A722C;
    return;
L_088A722C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A7264;
      }
      goto L_088A724C;
    }
L_088A724C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088A7268;
    }
    goto L_088A725C;
L_088A725C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088A7274;
      }
      goto L_088A7264;
    }
L_088A7264:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A7268;
L_088A7268:
    ctx.gpr[31] = (0x088A7270u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A7270u) goto L_088A7270;
    return;
L_088A7270:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A7274;
L_088A7274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A72A8;
      }
      goto L_088A728C;
    }
L_088A728C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A72A8;
      }
      goto L_088A729C;
    }
L_088A729C:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_088A72B8;
      }
      goto L_088A72A8;
    }
L_088A72A8:
    ctx.gpr[31] = (0x088A72B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A72B0u) goto L_088A72B0;
    return;
L_088A72B0:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    goto L_088A72B8;
L_088A72B8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A72C4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x088A72C4u) goto L_088A72C4;
    return;
L_088A72C4:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A72F4;
      }
      goto L_088A72E0;
    }
L_088A72E0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_088A7320;
      }
      goto L_088A72F4;
    }
L_088A72F4:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A7320;
      }
      goto L_088A7310;
    }
L_088A7310:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
    goto L_088A7320;
L_088A7320:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A7338;
      }
      goto L_088A7330;
    }
L_088A7330:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088A7358;
      }
      goto L_088A7338;
    }
L_088A7338:
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48716u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A7358;
      }
      goto L_088A7354;
    }
L_088A7354:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A7358;
L_088A7358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(948)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16255u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 40370u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x088A7400u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x088A7400u) goto L_088A7400;
    return;
L_088A7400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A7414u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A7414u) goto L_088A7414;
    return;
L_088A7414:
    ctx.gpr[31] = (0x088A741Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A741Cu) goto L_088A741C;
    return;
L_088A741C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A765C;
      }
      goto L_088A7428;
    }
L_088A7428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A7454;
      }
      goto L_088A743C;
    }
L_088A743C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A7458;
      }
      goto L_088A744C;
    }
L_088A744C:
    ctx.gpr[31] = (0x088A7454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7454u) goto L_088A7454;
    return;
L_088A7454:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A7458;
L_088A7458:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A7470u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A7470u) goto L_088A7470;
    return;
L_088A7470:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    ctx.gpr[31] = (0x088A7484u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x088A7484u) goto L_088A7484;
    return;
L_088A7484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A7498u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A7498u) goto L_088A7498;
    return;
L_088A7498:
    ctx.gpr[31] = (0x088A74A0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A74A0u) goto L_088A74A0;
    return;
L_088A74A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A765C;
      }
      goto L_088A7544;
    }
L_088A7544:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A7564;
      }
      goto L_088A7554;
    }
L_088A7554:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A765C;
      }
      goto L_088A7564;
    }
L_088A7564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15523u << 16u);
      if (branch_taken) {
          goto L_088A7640;
      }
      goto L_088A7570;
    }
L_088A7570:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A759C;
      }
      goto L_088A7584;
    }
L_088A7584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A75A0;
      }
      goto L_088A7594;
    }
L_088A7594:
    ctx.gpr[31] = (0x088A759Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A759Cu) goto L_088A759C;
    return;
L_088A759C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088A75A0;
L_088A75A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A75B8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A75B8u) goto L_088A75B8;
    return;
L_088A75B8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    ctx.gpr[31] = (0x088A75CCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x088A75CCu) goto L_088A75CC;
    return;
L_088A75CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A75E0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A75E0u) goto L_088A75E0;
    return;
L_088A75E0:
    ctx.gpr[31] = (0x088A75E8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A75E8u) goto L_088A75E8;
    return;
L_088A75E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15523u << 16u);
      if (branch_taken) {
          goto L_088A7640;
      }
      goto L_088A75F4;
    }
L_088A75F4:
    ctx.gpr[31] = (0x088A75FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem) && ctx.pc == 0x088A75FCu) goto L_088A75FC;
    return;
L_088A75FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7634;
      }
      goto L_088A760C;
    }
L_088A760C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (43691u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A7634;
      }
      goto L_088A7620;
    }
L_088A7620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A762Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A762Cu) goto L_088A762C;
    return;
L_088A762C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15523u << 16u);
      if (branch_taken) {
          goto L_088A7640;
      }
      goto L_088A7634;
    }
L_088A7634:
    ctx.gpr[31] = (0x088A763Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x088A763Cu) goto L_088A763C;
    return;
L_088A763C:
    ctx.gpr[4] = (15523u << 16u);
    goto L_088A7640;
L_088A7640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A765C;
L_088A765C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_088A7730;
    }
    goto L_088A766C;
L_088A766C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_088A7730;
    }
    goto L_088A7678;
L_088A7678:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A76A4;
      }
      goto L_088A768C;
    }
L_088A768C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A76A8;
      }
      goto L_088A769C;
    }
L_088A769C:
    ctx.gpr[31] = (0x088A76A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A76A4u) goto L_088A76A4;
    return;
L_088A76A4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_088A76A8;
L_088A76A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A76C0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x088A76C0u) goto L_088A76C0;
    return;
L_088A76C0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25108)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25104)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A7704;
      }
      goto L_088A76EC;
    }
L_088A76EC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25104)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25104)));
        goto L_088A7704;
    }
    goto L_088A7704;
L_088A7704:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088A7710u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem) && ctx.pc == 0x088A7710u) goto L_088A7710;
    return;
L_088A7710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088A7724u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A7724u) goto L_088A7724;
    return;
L_088A7724:
    ctx.gpr[31] = (0x088A772Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x088A772Cu) goto L_088A772C;
    return;
L_088A772C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_088A7730;
L_088A7730:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7750;
      }
      goto L_088A773C;
    }
L_088A773C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7750;
      }
      goto L_088A7748;
    }
L_088A7748:
    ctx.gpr[31] = (0x088A7750u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7750u) goto L_088A7750;
    return;
L_088A7750:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A7ED4;
      }
      goto L_088A77CC;
    }
L_088A77CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[6] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088A79E0;
      }
      goto L_088A77E0;
    }
L_088A77E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_088A78A8;
      }
      goto L_088A77EC;
    }
L_088A77EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088A78A8;
      }
      goto L_088A77F8;
    }
L_088A77F8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_088A7844;
      }
      goto L_088A7808;
    }
L_088A7808:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7820;
    }
    goto L_088A7810;
L_088A7810:
    ctx.gpr[31] = (0x088A7818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7818u) goto L_088A7818;
    return;
L_088A7818:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7820;
L_088A7820:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A7830u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7830u) goto L_088A7830;
    return;
L_088A7830:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A783Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A783Cu) goto L_088A783C;
    return;
L_088A783C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7878;
      }
      goto L_088A7844;
    }
L_088A7844:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A785C;
    }
    goto L_088A784C;
L_088A784C:
    ctx.gpr[31] = (0x088A7854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7854u) goto L_088A7854;
    return;
L_088A7854:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A785C;
L_088A785C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A786Cu);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A786Cu) goto L_088A786C;
    return;
L_088A786C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7878u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7878u) goto L_088A7878;
    return;
L_088A7878:
    ctx.gpr[31] = (0x088A7880u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7880u) goto L_088A7880;
    return;
L_088A7880:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A7890u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7890u) goto L_088A7890;
    return;
L_088A7890:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A78A8;
    }
L_088A78A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[20] = (2203u << 16u);
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_088A7918;
      }
      goto L_088A78BC;
    }
L_088A78BC:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A78D4;
    }
    goto L_088A78C4;
L_088A78C4:
    ctx.gpr[31] = (0x088A78CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A78CCu) goto L_088A78CC;
    return;
L_088A78CC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A78D4;
L_088A78D4:
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A78ECu);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x088A78ECu) goto L_088A78EC;
    return;
L_088A78EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A78F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A78F8u) goto L_088A78F8;
    return;
L_088A78F8:
    ctx.gpr[31] = (0x088A7900u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7900u) goto L_088A7900;
    return;
L_088A7900:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A7910u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7910u) goto L_088A7910;
    return;
L_088A7910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7918;
    }
L_088A7918:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088A7928;
      }
      goto L_088A7920;
    }
L_088A7920:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A7978;
      }
      goto L_088A7928;
    }
L_088A7928:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7940;
    }
    goto L_088A7930;
L_088A7930:
    ctx.gpr[31] = (0x088A7938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7938u) goto L_088A7938;
    return;
L_088A7938:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7940;
L_088A7940:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7950u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A7950u) goto L_088A7950;
    return;
L_088A7950:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A7964u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7964u) goto L_088A7964;
    return;
L_088A7964:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7970u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7970u) goto L_088A7970;
    return;
L_088A7970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A79C0;
      }
      goto L_088A7978;
    }
L_088A7978:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7990;
    }
    goto L_088A7980;
L_088A7980:
    ctx.gpr[31] = (0x088A7988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7988u) goto L_088A7988;
    return;
L_088A7988:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7990;
L_088A7990:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A79A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A79A0u) goto L_088A79A0;
    return;
L_088A79A0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A79B4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A79B4u) goto L_088A79B4;
    return;
L_088A79B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A79C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A79C0u) goto L_088A79C0;
    return;
L_088A79C0:
    ctx.gpr[31] = (0x088A79C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A79C8u) goto L_088A79C8;
    return;
L_088A79C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A79D8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A79D8u) goto L_088A79D8;
    return;
L_088A79D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A79E0;
    }
L_088A79E0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A7A8C;
      }
      goto L_088A79F0;
    }
L_088A79F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A7A7C;
      }
      goto L_088A7A08;
    }
L_088A7A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7A7C;
      }
      goto L_088A7A1C;
    }
L_088A7A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[19] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_088A7A38;
      }
      goto L_088A7A2C;
    }
L_088A7A2C:
    ctx.gpr[31] = (0x088A7A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7A34u) goto L_088A7A34;
    return;
L_088A7A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088A7A38;
L_088A7A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x088A7A50u);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x088A7A50u) goto L_088A7A50;
    return;
L_088A7A50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7A5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7A5Cu) goto L_088A7A5C;
    return;
L_088A7A5C:
    ctx.gpr[31] = (0x088A7A64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7A64u) goto L_088A7A64;
    return;
L_088A7A64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7A74u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A74u) goto L_088A7A74;
    return;
L_088A7A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7A7C;
    }
L_088A7A7C:
    ctx.gpr[31] = (0x088A7A84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x088A7A84u) goto L_088A7A84;
    return;
L_088A7A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7A8C;
    }
L_088A7A8C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088A7A9C;
      }
      goto L_088A7A94;
    }
L_088A7A94:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A7C50;
      }
      goto L_088A7A9C;
    }
L_088A7A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7B84;
      }
      goto L_088A7AA8;
    }
L_088A7AA8:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2228));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A7B74;
      }
      goto L_088A7ABC;
    }
L_088A7ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7B74;
      }
      goto L_088A7AD0;
    }
L_088A7AD0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_088A7B1C;
      }
      goto L_088A7AE4;
    }
L_088A7AE4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7AFC;
    }
    goto L_088A7AEC;
L_088A7AEC:
    ctx.gpr[31] = (0x088A7AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7AF4u) goto L_088A7AF4;
    return;
L_088A7AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7AFC;
L_088A7AFC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A7B08u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7B08u) goto L_088A7B08;
    return;
L_088A7B08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7B14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7B14u) goto L_088A7B14;
    return;
L_088A7B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7B4C;
      }
      goto L_088A7B1C;
    }
L_088A7B1C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7B34;
    }
    goto L_088A7B24;
L_088A7B24:
    ctx.gpr[31] = (0x088A7B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7B2Cu) goto L_088A7B2C;
    return;
L_088A7B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7B34;
L_088A7B34:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A7B40u);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7B40u) goto L_088A7B40;
    return;
L_088A7B40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7B4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7B4Cu) goto L_088A7B4C;
    return;
L_088A7B4C:
    ctx.gpr[31] = (0x088A7B54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7B54u) goto L_088A7B54;
    return;
L_088A7B54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7B64u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7B64u) goto L_088A7B64;
    return;
L_088A7B64:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7B74;
    }
L_088A7B74:
    ctx.gpr[31] = (0x088A7B7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x088A7B7Cu) goto L_088A7B7C;
    return;
L_088A7B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7B84;
    }
L_088A7B84:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2203u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_088A7BE8;
      }
      goto L_088A7B98;
    }
L_088A7B98:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7BB0;
    }
    goto L_088A7BA0;
L_088A7BA0:
    ctx.gpr[31] = (0x088A7BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7BA8u) goto L_088A7BA8;
    return;
L_088A7BA8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7BB0;
L_088A7BB0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7BC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A7BC0u) goto L_088A7BC0;
    return;
L_088A7BC0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A7BD4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7BD4u) goto L_088A7BD4;
    return;
L_088A7BD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7BE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7BE0u) goto L_088A7BE0;
    return;
L_088A7BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7C30;
      }
      goto L_088A7BE8;
    }
L_088A7BE8:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7C00;
    }
    goto L_088A7BF0;
L_088A7BF0:
    ctx.gpr[31] = (0x088A7BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7BF8u) goto L_088A7BF8;
    return;
L_088A7BF8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7C00;
L_088A7C00:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7C10u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A7C10u) goto L_088A7C10;
    return;
L_088A7C10:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A7C24u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7C24u) goto L_088A7C24;
    return;
L_088A7C24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7C30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7C30u) goto L_088A7C30;
    return;
L_088A7C30:
    ctx.gpr[31] = (0x088A7C38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7C38u) goto L_088A7C38;
    return;
L_088A7C38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A7C48u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7C48u) goto L_088A7C48;
    return;
L_088A7C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7C50;
    }
L_088A7C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7C5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7C5Cu) goto L_088A7C5C;
    return;
L_088A7C5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7D60;
      }
      goto L_088A7C64;
    }
L_088A7C64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7C70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7C70u) goto L_088A7C70;
    return;
L_088A7C70:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088A7D50;
      }
      goto L_088A7C84;
    }
L_088A7C84:
    ctx.gpr[31] = (0x088A7C8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7C8Cu) goto L_088A7C8C;
    return;
L_088A7C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7D50;
      }
      goto L_088A7CA0;
    }
L_088A7CA0:
    ctx.gpr[19] = (2203u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_088A7CEC;
      }
      goto L_088A7CB4;
    }
L_088A7CB4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7CCC;
    }
    goto L_088A7CBC;
L_088A7CBC:
    ctx.gpr[31] = (0x088A7CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7CC4u) goto L_088A7CC4;
    return;
L_088A7CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7CCC;
L_088A7CCC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A7CD8u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7CD8u) goto L_088A7CD8;
    return;
L_088A7CD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7CE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7CE4u) goto L_088A7CE4;
    return;
L_088A7CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7D1C;
      }
      goto L_088A7CEC;
    }
L_088A7CEC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7D04;
    }
    goto L_088A7CF4;
L_088A7CF4:
    ctx.gpr[31] = (0x088A7CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7CFCu) goto L_088A7CFC;
    return;
L_088A7CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7D04;
L_088A7D04:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A7D10u);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7D10u) goto L_088A7D10;
    return;
L_088A7D10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7D1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7D1Cu) goto L_088A7D1C;
    return;
L_088A7D1C:
    ctx.gpr[31] = (0x088A7D24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7D24u) goto L_088A7D24;
    return;
L_088A7D24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7D34u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D34u) goto L_088A7D34;
    return;
L_088A7D34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7D40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7D40u) goto L_088A7D40;
    return;
L_088A7D40:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7D50;
    }
L_088A7D50:
    ctx.gpr[31] = (0x088A7D58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x088A7D58u) goto L_088A7D58;
    return;
L_088A7D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E28;
      }
      goto L_088A7D60;
    }
L_088A7D60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2203u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_088A7DC8;
      }
      goto L_088A7D78;
    }
L_088A7D78:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7D90;
    }
    goto L_088A7D80;
L_088A7D80:
    ctx.gpr[31] = (0x088A7D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7D88u) goto L_088A7D88;
    return;
L_088A7D88:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7D90;
L_088A7D90:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7DA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A7DA0u) goto L_088A7DA0;
    return;
L_088A7DA0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A7DB4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7DB4u) goto L_088A7DB4;
    return;
L_088A7DB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7DC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7DC0u) goto L_088A7DC0;
    return;
L_088A7DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E10;
      }
      goto L_088A7DC8;
    }
L_088A7DC8:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_088A7DE0;
    }
    goto L_088A7DD0;
L_088A7DD0:
    ctx.gpr[31] = (0x088A7DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7DD8u) goto L_088A7DD8;
    return;
L_088A7DD8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_088A7DE0;
L_088A7DE0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7DF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A7DF0u) goto L_088A7DF0;
    return;
L_088A7DF0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A7E04u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7E04u) goto L_088A7E04;
    return;
L_088A7E04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7E10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7E10u) goto L_088A7E10;
    return;
L_088A7E10:
    ctx.gpr[31] = (0x088A7E18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7E18u) goto L_088A7E18;
    return;
L_088A7E18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A7E28u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7E28u) goto L_088A7E28;
    return;
L_088A7E28:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7ECC;
      }
      goto L_088A7E30;
    }
L_088A7E30:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7E44u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x088A7E44u) goto L_088A7E44;
    return;
L_088A7E44:
    ctx.gpr[31] = (0x088A7E4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7E4Cu) goto L_088A7E4C;
    return;
L_088A7E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (0u | 6u);
      if (branch_taken) {
          goto L_088A7E60;
      }
      goto L_088A7E54;
    }
L_088A7E54:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7E60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x088A7E60u) goto L_088A7E60;
    return;
L_088A7E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A7E90;
      }
      goto L_088A7E6C;
    }
L_088A7E6C:
    ctx.gpr[31] = (0x088A7E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088A7E74u) goto L_088A7E74;
    return;
L_088A7E74:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A7E90;
      }
      goto L_088A7E7C;
    }
L_088A7E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A7E90;
      }
      goto L_088A7E88;
    }
L_088A7E88:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A7E90;
L_088A7E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088A7ECC;
      }
      goto L_088A7E9C;
    }
L_088A7E9C:
    ctx.gpr[31] = (0x088A7EA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7EA4u) goto L_088A7EA4;
    return;
L_088A7EA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7ECC;
      }
      goto L_088A7EAC;
    }
L_088A7EAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7EB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7EB8u) goto L_088A7EB8;
    return;
L_088A7EB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x088A7ECCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x088A7ECCu) goto L_088A7ECC;
    return;
L_088A7ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7F3C;
      }
      goto L_088A7ED4;
    }
L_088A7ED4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[19] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_088A7EF0;
      }
      goto L_088A7EE4;
    }
L_088A7EE4:
    ctx.gpr[31] = (0x088A7EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088A7EECu) goto L_088A7EEC;
    return;
L_088A7EEC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088A7EF0;
L_088A7EF0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7F04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x088A7F04u) goto L_088A7F04;
    return;
L_088A7F04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A7F18u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x088A7F18u) goto L_088A7F18;
    return;
L_088A7F18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7F24u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x088A7F24u) goto L_088A7F24;
    return;
L_088A7F24:
    ctx.gpr[31] = (0x088A7F2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x088A7F2Cu) goto L_088A7F2C;
    return;
L_088A7F2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7F3Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7F3Cu) goto L_088A7F3C;
    return;
L_088A7F3C:
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
L_088A7F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (17480u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[5] & 496u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7FC0;
      }
      goto L_088A7FAC;
    }
L_088A7FAC:
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088A7FE0;
      }
      goto L_088A7FC0;
    }
L_088A7FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A7FE0;
      }
      goto L_088A7FD0;
    }
L_088A7FD0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088A7FE0;
L_088A7FE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 1u, 0x088A8004u>(ctx, &aot_mem); return;
      }
      goto L_088A7FF0;
    }
L_088A7FF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 2u, 0x088A800Cu>(ctx, &aot_mem); return;
    }
    goto L_088A7FFC;
L_088A7FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 5u, 0x088A8038u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 1u, 0x088A8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0040(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0040_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_40(Runtime &runtime) {
    runtime.register_generated_unit(40u, 0x088A4000u, 16384u, &recomp_unit_0040, &recomp_unit_0040_entry);
    runtime.register_function(0x088A4000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A401Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A402Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4034u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A405Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4074u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4078u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A40B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4120u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4128u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4148u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4160u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A416Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4188u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A430Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4330u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A436Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4374u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4388u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4390u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4400u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A441Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4438u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4454u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4490u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4538u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A459Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4600u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4614u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A461Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A462Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4638u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4640u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4650u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4668u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4734u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A475Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A478Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4820u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4854u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4864u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A486Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4880u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4888u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4894u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4904u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4910u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4930u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4938u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4950u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4ED4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5004u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5018u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A502Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5040u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5058u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A507Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5084u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5098u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5100u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A510Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5118u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5130u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5140u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5148u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5158u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5160u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5170u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5178u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5190u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A520Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5224u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A522Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5234u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5268u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5280u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5284u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5290u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5298u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5304u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5314u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A531Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5328u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5334u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5340u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5368u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5378u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5380u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5388u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5390u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5450u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5468u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A549Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A54DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A550Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5514u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5518u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5520u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5528u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5530u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A553Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5548u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5554u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A557Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5590u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5598u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5604u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A560Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5614u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5634u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A563Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5650u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5664u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A566Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5680u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5694u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5698u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5700u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5708u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5718u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5724u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A572Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A573Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A574Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A575Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A576Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5790u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A581Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A582Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5834u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5840u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5848u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5854u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5904u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A590Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5918u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5920u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A592Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5938u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5950u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5964u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5994u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5ACCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5BF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5ED4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6020u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6028u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6044u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6050u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A605Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6080u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A609Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6108u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6114u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6120u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6138u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6140u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6180u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6208u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6210u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6218u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6220u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6228u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6230u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6238u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6240u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6248u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6250u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A625Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6264u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6300u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A631Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6334u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A633Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6348u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6350u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6388u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A639Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6404u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6418u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6428u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6430u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6470u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6484u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6488u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A649Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6504u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6510u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A651Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6528u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6534u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6540u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6550u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A656Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6574u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A657Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6638u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6640u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6648u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6664u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6678u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A672Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6748u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6760u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A677Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6808u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6838u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A693Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A694Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6954u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6970u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6994u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A69FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ADCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6DFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ED0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7004u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A701Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7034u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7048u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7050u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A705Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7070u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7080u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7088u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A708Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7100u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A711Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7144u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7154u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A715Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7160u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7178u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7194u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7208u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7210u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7214u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A722Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A724Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A725Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7264u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7268u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7270u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7274u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A728Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A729Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7310u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7320u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7330u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7338u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7354u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7358u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7400u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7414u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A741Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7428u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A743Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A744Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7454u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7458u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7470u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7484u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7498u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7544u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7554u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7564u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7570u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7584u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7594u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A759Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A760Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7620u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A762Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7634u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A763Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7640u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A765Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A766Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7678u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A768Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A769Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7704u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7710u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7724u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A772Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7730u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A773Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7748u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7750u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7790u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7808u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7810u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7818u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7820u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7830u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A783Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7844u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A784Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7854u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A785Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A786Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7878u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7880u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7890u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7900u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7910u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7918u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7920u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7928u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7930u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7938u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7940u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7950u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7964u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7970u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7978u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7980u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7988u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7990u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7ABCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7ECCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7ED4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FFCu, &recomp_unit_0040, "recomp_unit_0040");
}
} // namespace psprecomp
