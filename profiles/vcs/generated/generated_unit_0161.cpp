#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0161[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 15, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 27, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37,
    0, 38, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47,
    0, 0, 48, 0, 49, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107,
    0, 108, 0, 109, 0, 0, 110, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0,
    136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0,
    175, 0, 176, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 199,
    0, 0, 0, 200, 0, 0, 201, 0, 202, 203, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211,
    212, 0, 213, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 219, 0, 220, 221, 222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0,
    227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239, 240, 0, 241, 242, 0,
    243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253,
    254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0,
    0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 267, 0, 268, 0,
    269, 0, 270, 271, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 283, 0,
    284, 0, 285, 0, 286, 287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 316, 0,
    317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 326,
    0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 345, 0, 0, 346,
    347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0,
    0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 374, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 383, 384, 0, 385, 0, 0, 0, 386,
    0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395,
    0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 399, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 0,
    0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0,
    437, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0,
    448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467,
    0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0,
    0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0,
    514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 0, 521, 0, 0, 522, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 535, 0, 0, 0, 536, 0,
    0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 543, 0, 0, 0, 0, 544, 545, 0, 0, 0,
    0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 556, 0, 0, 0, 0, 557, 0, 0, 558,
    0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 564, 0, 565, 566, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 570,
    571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 575, 0, 0, 576, 0, 577, 0, 0, 0, 578, 579, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0,
    0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0,
    0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0,
    0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0,
    0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 632,
    0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643,
    0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 664,
    0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669,
    0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0,
    681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0,
    0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 695, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0,
    705, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 711, 712, 0, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0,
    717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727,
};
void recomp_unit_0161_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A88000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0161[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A88000;
    case 2u: goto L_08A88030;
    case 3u: goto L_08A88038;
    case 4u: goto L_08A88044;
    case 5u: goto L_08A88048;
    case 6u: goto L_08A88084;
    case 7u: goto L_08A88090;
    case 8u: goto L_08A880BC;
    case 9u: goto L_08A880D0;
    case 10u: goto L_08A880E4;
    case 11u: goto L_08A88108;
    case 12u: goto L_08A88128;
    case 13u: goto L_08A8813C;
    case 14u: goto L_08A88144;
    case 15u: goto L_08A8814C;
    case 16u: goto L_08A88150;
    case 17u: goto L_08A88164;
    case 18u: goto L_08A881A0;
    case 19u: goto L_08A881A8;
    case 20u: goto L_08A881B4;
    case 21u: goto L_08A881D8;
    case 22u: goto L_08A881F4;
    case 23u: goto L_08A88204;
    case 24u: goto L_08A8822C;
    case 25u: goto L_08A8823C;
    case 26u: goto L_08A8824C;
    case 27u: goto L_08A88250;
    case 28u: goto L_08A88254;
    case 29u: goto L_08A8825C;
    case 30u: goto L_08A8826C;
    case 31u: goto L_08A88290;
    case 32u: goto L_08A882A8;
    case 33u: goto L_08A882B4;
    case 34u: goto L_08A882C4;
    case 35u: goto L_08A882E0;
    case 36u: goto L_08A882E8;
    case 37u: goto L_08A882FC;
    case 38u: goto L_08A88304;
    case 39u: goto L_08A88310;
    case 40u: goto L_08A88314;
    case 41u: goto L_08A88334;
    case 42u: goto L_08A8833C;
    case 43u: goto L_08A88340;
    case 44u: goto L_08A88348;
    case 45u: goto L_08A88360;
    case 46u: goto L_08A88370;
    case 47u: goto L_08A8837C;
    case 48u: goto L_08A88388;
    case 49u: goto L_08A88390;
    case 50u: goto L_08A88394;
    case 51u: goto L_08A883A0;
    case 52u: goto L_08A883F0;
    case 53u: goto L_08A8840C;
    case 54u: goto L_08A88434;
    case 55u: goto L_08A88440;
    case 56u: goto L_08A88458;
    case 57u: goto L_08A8846C;
    case 58u: goto L_08A88470;
    case 59u: goto L_08A884A0;
    case 60u: goto L_08A884BC;
    case 61u: goto L_08A88524;
    case 62u: goto L_08A88548;
    case 63u: goto L_08A88558;
    case 64u: goto L_08A88560;
    case 65u: goto L_08A88580;
    case 66u: goto L_08A885C4;
    case 67u: goto L_08A885F0;
    case 68u: goto L_08A88668;
    case 69u: goto L_08A88674;
    case 70u: goto L_08A8869C;
    case 71u: goto L_08A886A8;
    case 72u: goto L_08A886B0;
    case 73u: goto L_08A886B8;
    case 74u: goto L_08A886C8;
    case 75u: goto L_08A886E0;
    case 76u: goto L_08A886EC;
    case 77u: goto L_08A8872C;
    case 78u: goto L_08A88750;
    case 79u: goto L_08A88764;
    case 80u: goto L_08A8878C;
    case 81u: goto L_08A8879C;
    case 82u: goto L_08A887B0;
    case 83u: goto L_08A887C0;
    case 84u: goto L_08A887D0;
    case 85u: goto L_08A887E0;
    case 86u: goto L_08A887F0;
    case 87u: goto L_08A88810;
    case 88u: goto L_08A88820;
    case 89u: goto L_08A88830;
    case 90u: goto L_08A88838;
    case 91u: goto L_08A88860;
    case 92u: goto L_08A88870;
    case 93u: goto L_08A88884;
    case 94u: goto L_08A88894;
    case 95u: goto L_08A888A4;
    case 96u: goto L_08A888C8;
    case 97u: goto L_08A888D8;
    case 98u: goto L_08A888E4;
    case 99u: goto L_08A888F4;
    case 100u: goto L_08A888FC;
    case 101u: goto L_08A88920;
    case 102u: goto L_08A88930;
    case 103u: goto L_08A88940;
    case 104u: goto L_08A88948;
    case 105u: goto L_08A88964;
    case 106u: goto L_08A88974;
    case 107u: goto L_08A8897C;
    case 108u: goto L_08A88984;
    case 109u: goto L_08A8898C;
    case 110u: goto L_08A88998;
    case 111u: goto L_08A889A0;
    case 112u: goto L_08A889A4;
    case 113u: goto L_08A889CC;
    case 114u: goto L_08A889DC;
    case 115u: goto L_08A889F0;
    case 116u: goto L_08A889F8;
    case 117u: goto L_08A88A20;
    case 118u: goto L_08A88A30;
    case 119u: goto L_08A88A3C;
    case 120u: goto L_08A88A50;
    case 121u: goto L_08A88A58;
    case 122u: goto L_08A88A7C;
    case 123u: goto L_08A88A8C;
    case 124u: goto L_08A88A98;
    case 125u: goto L_08A88AAC;
    case 126u: goto L_08A88AB4;
    case 127u: goto L_08A88AC8;
    case 128u: goto L_08A88AD0;
    case 129u: goto L_08A88AE0;
    case 130u: goto L_08A88B10;
    case 131u: goto L_08A88B38;
    case 132u: goto L_08A88B48;
    case 133u: goto L_08A88B60;
    case 134u: goto L_08A88B70;
    case 135u: goto L_08A88B78;
    case 136u: goto L_08A88B80;
    case 137u: goto L_08A88B88;
    case 138u: goto L_08A88BB0;
    case 139u: goto L_08A88BC8;
    case 140u: goto L_08A88BE8;
    case 141u: goto L_08A88BF8;
    case 142u: goto L_08A88C18;
    case 143u: goto L_08A88C20;
    case 144u: goto L_08A88C28;
    case 145u: goto L_08A88C34;
    case 146u: goto L_08A88C3C;
    case 147u: goto L_08A88C40;
    case 148u: goto L_08A88C58;
    case 149u: goto L_08A88C68;
    case 150u: goto L_08A88C94;
    case 151u: goto L_08A88CA4;
    case 152u: goto L_08A88CC0;
    case 153u: goto L_08A88CC8;
    case 154u: goto L_08A88CD8;
    case 155u: goto L_08A88CE4;
    case 156u: goto L_08A88D14;
    case 157u: goto L_08A88D20;
    case 158u: goto L_08A88D2C;
    case 159u: goto L_08A88D3C;
    case 160u: goto L_08A88D44;
    case 161u: goto L_08A88D54;
    case 162u: goto L_08A88D5C;
    case 163u: goto L_08A88D64;
    case 164u: goto L_08A88DC0;
    case 165u: goto L_08A88DC8;
    case 166u: goto L_08A88DD4;
    case 167u: goto L_08A88DDC;
    case 168u: goto L_08A88DE0;
    case 169u: goto L_08A88E1C;
    case 170u: goto L_08A88E2C;
    case 171u: goto L_08A88E40;
    case 172u: goto L_08A88E48;
    case 173u: goto L_08A88E6C;
    case 174u: goto L_08A88E74;
    case 175u: goto L_08A88E80;
    case 176u: goto L_08A88E88;
    case 177u: goto L_08A88E8C;
    case 178u: goto L_08A88EC8;
    case 179u: goto L_08A88ED8;
    case 180u: goto L_08A88EEC;
    case 181u: goto L_08A88EF4;
    case 182u: goto L_08A88F18;
    case 183u: goto L_08A88F20;
    case 184u: goto L_08A88F2C;
    case 185u: goto L_08A88F34;
    case 186u: goto L_08A88F38;
    case 187u: goto L_08A88F78;
    case 188u: goto L_08A88F88;
    case 189u: goto L_08A88F9C;
    case 190u: goto L_08A88FA4;
    case 191u: goto L_08A88FCC;
    case 192u: goto L_08A8902C;
    case 193u: goto L_08A89038;
    case 194u: goto L_08A89044;
    case 195u: goto L_08A8904C;
    case 196u: goto L_08A89064;
    case 197u: goto L_08A89070;
    case 198u: goto L_08A89078;
    case 199u: goto L_08A8907C;
    case 200u: goto L_08A8908C;
    case 201u: goto L_08A89098;
    case 202u: goto L_08A890A0;
    case 203u: goto L_08A890A4;
    case 204u: goto L_08A890AC;
    case 205u: goto L_08A890BC;
    case 206u: goto L_08A890C8;
    case 207u: goto L_08A890D0;
    case 208u: goto L_08A890DC;
    case 209u: goto L_08A890E8;
    case 210u: goto L_08A890F4;
    case 211u: goto L_08A890FC;
    case 212u: goto L_08A89100;
    case 213u: goto L_08A89108;
    case 214u: goto L_08A8910C;
    case 215u: goto L_08A89114;
    case 216u: goto L_08A89120;
    case 217u: goto L_08A8912C;
    case 218u: goto L_08A89134;
    case 219u: goto L_08A89138;
    case 220u: goto L_08A89140;
    case 221u: goto L_08A89144;
    case 222u: goto L_08A89148;
    case 223u: goto L_08A89158;
    case 224u: goto L_08A89160;
    case 225u: goto L_08A8916C;
    case 226u: goto L_08A89174;
    case 227u: goto L_08A89180;
    case 228u: goto L_08A89188;
    case 229u: goto L_08A89190;
    case 230u: goto L_08A89198;
    case 231u: goto L_08A891A0;
    case 232u: goto L_08A891AC;
    case 233u: goto L_08A891B4;
    case 234u: goto L_08A891BC;
    case 235u: goto L_08A891C4;
    case 236u: goto L_08A891CC;
    case 237u: goto L_08A891D8;
    case 238u: goto L_08A891E0;
    case 239u: goto L_08A891E8;
    case 240u: goto L_08A891EC;
    case 241u: goto L_08A891F4;
    case 242u: goto L_08A891F8;
    case 243u: goto L_08A89200;
    case 244u: goto L_08A89208;
    case 245u: goto L_08A89254;
    case 246u: goto L_08A892AC;
    case 247u: goto L_08A892B4;
    case 248u: goto L_08A892C0;
    case 249u: goto L_08A892CC;
    case 250u: goto L_08A892D4;
    case 251u: goto L_08A892E4;
    case 252u: goto L_08A892F0;
    case 253u: goto L_08A892FC;
    case 254u: goto L_08A89300;
    case 255u: goto L_08A89314;
    case 256u: goto L_08A8933C;
    case 257u: goto L_08A8936C;
    case 258u: goto L_08A89378;
    case 259u: goto L_08A89384;
    case 260u: goto L_08A89394;
    case 261u: goto L_08A893B8;
    case 262u: goto L_08A893C4;
    case 263u: goto L_08A893D0;
    case 264u: goto L_08A893DC;
    case 265u: goto L_08A893E4;
    case 266u: goto L_08A893EC;
    case 267u: goto L_08A893F0;
    case 268u: goto L_08A893F8;
    case 269u: goto L_08A89400;
    case 270u: goto L_08A89408;
    case 271u: goto L_08A8940C;
    case 272u: goto L_08A89414;
    case 273u: goto L_08A8941C;
    case 274u: goto L_08A89424;
    case 275u: goto L_08A89430;
    case 276u: goto L_08A89450;
    case 277u: goto L_08A89458;
    case 278u: goto L_08A89478;
    case 279u: goto L_08A894D4;
    case 280u: goto L_08A894E4;
    case 281u: goto L_08A894EC;
    case 282u: goto L_08A894F4;
    case 283u: goto L_08A894F8;
    case 284u: goto L_08A89500;
    case 285u: goto L_08A89508;
    case 286u: goto L_08A89510;
    case 287u: goto L_08A89514;
    case 288u: goto L_08A8951C;
    case 289u: goto L_08A89524;
    case 290u: goto L_08A8952C;
    case 291u: goto L_08A8953C;
    case 292u: goto L_08A8955C;
    case 293u: goto L_08A89584;
    case 294u: goto L_08A89590;
    case 295u: goto L_08A895A8;
    case 296u: goto L_08A895B0;
    case 297u: goto L_08A895B8;
    case 298u: goto L_08A895BC;
    case 299u: goto L_08A895C4;
    case 300u: goto L_08A89608;
    case 301u: goto L_08A89610;
    case 302u: goto L_08A8961C;
    case 303u: goto L_08A8962C;
    case 304u: goto L_08A8963C;
    case 305u: goto L_08A89648;
    case 306u: goto L_08A89654;
    case 307u: goto L_08A89674;
    case 308u: goto L_08A89684;
    case 309u: goto L_08A89694;
    case 310u: goto L_08A896B8;
    case 311u: goto L_08A896C8;
    case 312u: goto L_08A896D4;
    case 313u: goto L_08A896DC;
    case 314u: goto L_08A896E4;
    case 315u: goto L_08A896F0;
    case 316u: goto L_08A896F8;
    case 317u: goto L_08A89700;
    case 318u: goto L_08A8970C;
    case 319u: goto L_08A89718;
    case 320u: goto L_08A8972C;
    case 321u: goto L_08A89738;
    case 322u: goto L_08A8974C;
    case 323u: goto L_08A89758;
    case 324u: goto L_08A89764;
    case 325u: goto L_08A89774;
    case 326u: goto L_08A8977C;
    case 327u: goto L_08A89784;
    case 328u: goto L_08A8978C;
    case 329u: goto L_08A897A0;
    case 330u: goto L_08A897C8;
    case 331u: goto L_08A897F0;
    case 332u: goto L_08A89808;
    case 333u: goto L_08A8982C;
    case 334u: goto L_08A8983C;
    case 335u: goto L_08A89848;
    case 336u: goto L_08A8985C;
    case 337u: goto L_08A89864;
    case 338u: goto L_08A89880;
    case 339u: goto L_08A898A8;
    case 340u: goto L_08A898B0;
    case 341u: goto L_08A898BC;
    case 342u: goto L_08A898D4;
    case 343u: goto L_08A898E0;
    case 344u: goto L_08A898E8;
    case 345u: goto L_08A898F0;
    case 346u: goto L_08A898FC;
    case 347u: goto L_08A89900;
    case 348u: goto L_08A8990C;
    case 349u: goto L_08A8991C;
    case 350u: goto L_08A89924;
    case 351u: goto L_08A89934;
    case 352u: goto L_08A8994C;
    case 353u: goto L_08A89954;
    case 354u: goto L_08A89964;
    case 355u: goto L_08A8997C;
    case 356u: goto L_08A8998C;
    case 357u: goto L_08A89998;
    case 358u: goto L_08A899B8;
    case 359u: goto L_08A899C4;
    case 360u: goto L_08A899D0;
    case 361u: goto L_08A899D8;
    case 362u: goto L_08A899E0;
    case 363u: goto L_08A899E8;
    case 364u: goto L_08A899F4;
    case 365u: goto L_08A89A08;
    case 366u: goto L_08A89A14;
    case 367u: goto L_08A89A28;
    case 368u: goto L_08A89A74;
    case 369u: goto L_08A89A88;
    case 370u: goto L_08A89AAC;
    case 371u: goto L_08A89ACC;
    case 372u: goto L_08A89AF4;
    case 373u: goto L_08A89B00;
    case 374u: goto L_08A89B20;
    case 375u: goto L_08A89B24;
    case 376u: goto L_08A89B3C;
    case 377u: goto L_08A89B4C;
    case 378u: goto L_08A89B54;
    case 379u: goto L_08A89B94;
    case 380u: goto L_08A89BBC;
    case 381u: goto L_08A89BCC;
    case 382u: goto L_08A89BDC;
    case 383u: goto L_08A89BE0;
    case 384u: goto L_08A89BE4;
    case 385u: goto L_08A89BEC;
    case 386u: goto L_08A89BFC;
    case 387u: goto L_08A89C04;
    case 388u: goto L_08A89C0C;
    case 389u: goto L_08A89C18;
    case 390u: goto L_08A89C20;
    case 391u: goto L_08A89C28;
    case 392u: goto L_08A89C34;
    case 393u: goto L_08A89C3C;
    case 394u: goto L_08A89C70;
    case 395u: goto L_08A89C7C;
    case 396u: goto L_08A89C8C;
    case 397u: goto L_08A89CA4;
    case 398u: goto L_08A89CB8;
    case 399u: goto L_08A89CBC;
    case 400u: goto L_08A89CCC;
    case 401u: goto L_08A89CD8;
    case 402u: goto L_08A89CE0;
    case 403u: goto L_08A89CE8;
    case 404u: goto L_08A89CF4;
    case 405u: goto L_08A89D04;
    case 406u: goto L_08A89D0C;
    case 407u: goto L_08A89D14;
    case 408u: goto L_08A89D1C;
    case 409u: goto L_08A89D28;
    case 410u: goto L_08A89D34;
    case 411u: goto L_08A89D38;
    case 412u: goto L_08A89D60;
    case 413u: goto L_08A89D68;
    case 414u: goto L_08A89D70;
    case 415u: goto L_08A89D80;
    case 416u: goto L_08A89DA8;
    case 417u: goto L_08A89DCC;
    case 418u: goto L_08A89E18;
    case 419u: goto L_08A89E24;
    case 420u: goto L_08A89E60;
    case 421u: goto L_08A89EB4;
    case 422u: goto L_08A89EC0;
    case 423u: goto L_08A89EE4;
    case 424u: goto L_08A89F10;
    case 425u: goto L_08A89F24;
    case 426u: goto L_08A89F30;
    case 427u: goto L_08A89F3C;
    case 428u: goto L_08A89F70;
    case 429u: goto L_08A89FA0;
    case 430u: goto L_08A89FB0;
    case 431u: goto L_08A8A008;
    case 432u: goto L_08A8A038;
    case 433u: goto L_08A8A064;
    case 434u: goto L_08A8A094;
    case 435u: goto L_08A8A0E8;
    case 436u: goto L_08A8A0F4;
    case 437u: goto L_08A8A100;
    case 438u: goto L_08A8A108;
    case 439u: goto L_08A8A118;
    case 440u: goto L_08A8A120;
    case 441u: goto L_08A8A12C;
    case 442u: goto L_08A8A140;
    case 443u: goto L_08A8A148;
    case 444u: goto L_08A8A154;
    case 445u: goto L_08A8A15C;
    case 446u: goto L_08A8A164;
    case 447u: goto L_08A8A16C;
    case 448u: goto L_08A8A180;
    case 449u: goto L_08A8A190;
    case 450u: goto L_08A8A1A8;
    case 451u: goto L_08A8A1B0;
    case 452u: goto L_08A8A1B8;
    case 453u: goto L_08A8A1C0;
    case 454u: goto L_08A8A1D8;
    case 455u: goto L_08A8A1E4;
    case 456u: goto L_08A8A21C;
    case 457u: goto L_08A8A224;
    case 458u: goto L_08A8A23C;
    case 459u: goto L_08A8A24C;
    case 460u: goto L_08A8A258;
    case 461u: goto L_08A8A260;
    case 462u: goto L_08A8A27C;
    case 463u: goto L_08A8A288;
    case 464u: goto L_08A8A2B8;
    case 465u: goto L_08A8A2E4;
    case 466u: goto L_08A8A2EC;
    case 467u: goto L_08A8A2FC;
    case 468u: goto L_08A8A308;
    case 469u: goto L_08A8A3BC;
    case 470u: goto L_08A8A3C4;
    case 471u: goto L_08A8A3CC;
    case 472u: goto L_08A8A410;
    case 473u: goto L_08A8A430;
    case 474u: goto L_08A8A4CC;
    case 475u: goto L_08A8A4E0;
    case 476u: goto L_08A8A4F4;
    case 477u: goto L_08A8A514;
    case 478u: goto L_08A8A548;
    case 479u: goto L_08A8A564;
    case 480u: goto L_08A8A56C;
    case 481u: goto L_08A8A574;
    case 482u: goto L_08A8A598;
    case 483u: goto L_08A8A5B0;
    case 484u: goto L_08A8A5D4;
    case 485u: goto L_08A8A60C;
    case 486u: goto L_08A8A614;
    case 487u: goto L_08A8A628;
    case 488u: goto L_08A8A638;
    case 489u: goto L_08A8A654;
    case 490u: goto L_08A8A66C;
    case 491u: goto L_08A8A678;
    case 492u: goto L_08A8A6AC;
    case 493u: goto L_08A8A6B8;
    case 494u: goto L_08A8A6C0;
    case 495u: goto L_08A8A6C4;
    case 496u: goto L_08A8A6D4;
    case 497u: goto L_08A8A6E4;
    case 498u: goto L_08A8A6EC;
    case 499u: goto L_08A8A6F4;
    case 500u: goto L_08A8A6FC;
    case 501u: goto L_08A8A71C;
    case 502u: goto L_08A8A804;
    case 503u: goto L_08A8A814;
    case 504u: goto L_08A8A824;
    case 505u: goto L_08A8A83C;
    case 506u: goto L_08A8A848;
    case 507u: goto L_08A8A87C;
    case 508u: goto L_08A8A880;
    case 509u: goto L_08A8A8A8;
    case 510u: goto L_08A8A8B0;
    case 511u: goto L_08A8A8C4;
    case 512u: goto L_08A8A8DC;
    case 513u: goto L_08A8A8F8;
    case 514u: goto L_08A8A900;
    case 515u: goto L_08A8A914;
    case 516u: goto L_08A8A91C;
    case 517u: goto L_08A8A924;
    case 518u: goto L_08A8A92C;
    case 519u: goto L_08A8A934;
    case 520u: goto L_08A8A978;
    case 521u: goto L_08A8A988;
    case 522u: goto L_08A8A994;
    case 523u: goto L_08A8A998;
    case 524u: goto L_08A8A9C0;
    case 525u: goto L_08A8A9D8;
    case 526u: goto L_08A8AA00;
    case 527u: goto L_08A8AA8C;
    case 528u: goto L_08A8AAA8;
    case 529u: goto L_08A8AB24;
    case 530u: goto L_08A8AB34;
    case 531u: goto L_08A8AB3C;
    case 532u: goto L_08A8AB50;
    case 533u: goto L_08A8AB5C;
    case 534u: goto L_08A8AB64;
    case 535u: goto L_08A8AB68;
    case 536u: goto L_08A8AB78;
    case 537u: goto L_08A8AB88;
    case 538u: goto L_08A8AB90;
    case 539u: goto L_08A8AB98;
    case 540u: goto L_08A8ABA0;
    case 541u: goto L_08A8ABA8;
    case 542u: goto L_08A8ABD4;
    case 543u: goto L_08A8ABD8;
    case 544u: goto L_08A8ABEC;
    case 545u: goto L_08A8ABF0;
    case 546u: goto L_08A8AC10;
    case 547u: goto L_08A8AC44;
    case 548u: goto L_08A8AC94;
    case 549u: goto L_08A8ACE0;
    case 550u: goto L_08A8ACE8;
    case 551u: goto L_08A8ACF0;
    case 552u: goto L_08A8ACF8;
    case 553u: goto L_08A8AD24;
    case 554u: goto L_08A8AD44;
    case 555u: goto L_08A8AD58;
    case 556u: goto L_08A8AD5C;
    case 557u: goto L_08A8AD70;
    case 558u: goto L_08A8AD7C;
    case 559u: goto L_08A8AD90;
    case 560u: goto L_08A8AD9C;
    case 561u: goto L_08A8ADAC;
    case 562u: goto L_08A8ADB4;
    case 563u: goto L_08A8ADBC;
    case 564u: goto L_08A8ADC0;
    case 565u: goto L_08A8ADC8;
    case 566u: goto L_08A8ADCC;
    case 567u: goto L_08A8ADD0;
    case 568u: goto L_08A8ADD8;
    case 569u: goto L_08A8ADF0;
    case 570u: goto L_08A8ADFC;
    case 571u: goto L_08A8AE00;
    case 572u: goto L_08A8AE0C;
    case 573u: goto L_08A8AE14;
    case 574u: goto L_08A8AE3C;
    case 575u: goto L_08A8AE40;
    case 576u: goto L_08A8AE4C;
    case 577u: goto L_08A8AE54;
    case 578u: goto L_08A8AE64;
    case 579u: goto L_08A8AE68;
    case 580u: goto L_08A8AE70;
    case 581u: goto L_08A8AECC;
    case 582u: goto L_08A8AEF8;
    case 583u: goto L_08A8AFE0;
    case 584u: goto L_08A8B018;
    case 585u: goto L_08A8B068;
    case 586u: goto L_08A8B088;
    case 587u: goto L_08A8B0A0;
    case 588u: goto L_08A8B0B0;
    case 589u: goto L_08A8B0CC;
    case 590u: goto L_08A8B100;
    case 591u: goto L_08A8B164;
    case 592u: goto L_08A8B1A4;
    case 593u: goto L_08A8B1B4;
    case 594u: goto L_08A8B1C0;
    case 595u: goto L_08A8B1E4;
    case 596u: goto L_08A8B210;
    case 597u: goto L_08A8B24C;
    case 598u: goto L_08A8B254;
    case 599u: goto L_08A8B264;
    case 600u: goto L_08A8B278;
    case 601u: goto L_08A8B284;
    case 602u: goto L_08A8B290;
    case 603u: goto L_08A8B2B0;
    case 604u: goto L_08A8B2C0;
    case 605u: goto L_08A8B2EC;
    case 606u: goto L_08A8B310;
    case 607u: goto L_08A8B350;
    case 608u: goto L_08A8B36C;
    case 609u: goto L_08A8B378;
    case 610u: goto L_08A8B3A4;
    case 611u: goto L_08A8B3C0;
    case 612u: goto L_08A8B3D4;
    case 613u: goto L_08A8B3F0;
    case 614u: goto L_08A8B3F8;
    case 615u: goto L_08A8B41C;
    case 616u: goto L_08A8B438;
    case 617u: goto L_08A8B440;
    case 618u: goto L_08A8B44C;
    case 619u: goto L_08A8B484;
    case 620u: goto L_08A8B498;
    case 621u: goto L_08A8B4A4;
    case 622u: goto L_08A8B4C4;
    case 623u: goto L_08A8B4D4;
    case 624u: goto L_08A8B4E0;
    case 625u: goto L_08A8B4E8;
    case 626u: goto L_08A8B4F8;
    case 627u: goto L_08A8B50C;
    case 628u: goto L_08A8B528;
    case 629u: goto L_08A8B548;
    case 630u: goto L_08A8B568;
    case 631u: goto L_08A8B570;
    case 632u: goto L_08A8B57C;
    case 633u: goto L_08A8B59C;
    case 634u: goto L_08A8B5A4;
    case 635u: goto L_08A8B5C4;
    case 636u: goto L_08A8B5D4;
    case 637u: goto L_08A8B5DC;
    case 638u: goto L_08A8B610;
    case 639u: goto L_08A8B61C;
    case 640u: goto L_08A8B624;
    case 641u: goto L_08A8B65C;
    case 642u: goto L_08A8B668;
    case 643u: goto L_08A8B67C;
    case 644u: goto L_08A8B684;
    case 645u: goto L_08A8B6B4;
    case 646u: goto L_08A8B7A0;
    case 647u: goto L_08A8B7B8;
    case 648u: goto L_08A8B7C8;
    case 649u: goto L_08A8B7D8;
    case 650u: goto L_08A8B818;
    case 651u: goto L_08A8B824;
    case 652u: goto L_08A8B888;
    case 653u: goto L_08A8B8A8;
    case 654u: goto L_08A8B8C0;
    case 655u: goto L_08A8B908;
    case 656u: goto L_08A8B938;
    case 657u: goto L_08A8B95C;
    case 658u: goto L_08A8B980;
    case 659u: goto L_08A8B990;
    case 660u: goto L_08A8B9A0;
    case 661u: goto L_08A8B9B0;
    case 662u: goto L_08A8B9C0;
    case 663u: goto L_08A8B9D8;
    case 664u: goto L_08A8B9FC;
    case 665u: goto L_08A8BA1C;
    case 666u: goto L_08A8BA38;
    case 667u: goto L_08A8BA54;
    case 668u: goto L_08A8BA70;
    case 669u: goto L_08A8BA7C;
    case 670u: goto L_08A8BA90;
    case 671u: goto L_08A8BAAC;
    case 672u: goto L_08A8BAC8;
    case 673u: goto L_08A8BAD0;
    case 674u: goto L_08A8BAD8;
    case 675u: goto L_08A8BAF4;
    case 676u: goto L_08A8BB04;
    case 677u: goto L_08A8BB14;
    case 678u: goto L_08A8BB24;
    case 679u: goto L_08A8BB3C;
    case 680u: goto L_08A8BB60;
    case 681u: goto L_08A8BB80;
    case 682u: goto L_08A8BBA8;
    case 683u: goto L_08A8BBB8;
    case 684u: goto L_08A8BBE8;
    case 685u: goto L_08A8BBF4;
    case 686u: goto L_08A8BC18;
    case 687u: goto L_08A8BC28;
    case 688u: goto L_08A8BC54;
    case 689u: goto L_08A8BC5C;
    case 690u: goto L_08A8BC64;
    case 691u: goto L_08A8BC6C;
    case 692u: goto L_08A8BC74;
    case 693u: goto L_08A8BCCC;
    case 694u: goto L_08A8BCD8;
    case 695u: goto L_08A8BD04;
    case 696u: goto L_08A8BD0C;
    case 697u: goto L_08A8BD1C;
    case 698u: goto L_08A8BD80;
    case 699u: goto L_08A8BD98;
    case 700u: goto L_08A8BDB0;
    case 701u: goto L_08A8BE44;
    case 702u: goto L_08A8BE54;
    case 703u: goto L_08A8BE6C;
    case 704u: goto L_08A8BE74;
    case 705u: goto L_08A8BE80;
    case 706u: goto L_08A8BE8C;
    case 707u: goto L_08A8BE94;
    case 708u: goto L_08A8BEA4;
    case 709u: goto L_08A8BEB4;
    case 710u: goto L_08A8BEC4;
    case 711u: goto L_08A8BEC8;
    case 712u: goto L_08A8BECC;
    case 713u: goto L_08A8BEDC;
    case 714u: goto L_08A8BEE4;
    case 715u: goto L_08A8BEF0;
    case 716u: goto L_08A8BEF8;
    case 717u: goto L_08A8BF00;
    case 718u: goto L_08A8BF08;
    case 719u: goto L_08A8BF5C;
    case 720u: goto L_08A8BF6C;
    case 721u: goto L_08A8BF94;
    case 722u: goto L_08A8BFA0;
    case 723u: goto L_08A8BFCC;
    case 724u: goto L_08A8BFD4;
    case 725u: goto L_08A8BFE4;
    case 726u: goto L_08A8BFEC;
    case 727u: goto L_08A8BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A88000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A88048;
      }
      goto L_08A88030;
    }
L_08A88030:
    ctx.gpr[31] = (0x08A88038u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A88038u) goto L_08A88038;
    return;
L_08A88038:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A88030;
      }
      goto L_08A88044;
    }
L_08A88044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08A88048;
L_08A88048:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A88084u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 635u, 0x08A87E60u>(ctx, &aot_mem) && ctx.pc == 0x08A88084u) goto L_08A88084;
    return;
L_08A88084:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88090u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A89478;
L_08A88090:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A880D0;
      }
      goto L_08A880BC;
    }
L_08A880BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A880E4;
      }
      goto L_08A880D0;
    }
L_08A880D0:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A880E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 548u, 0x08B6E938u>(ctx, &aot_mem) && ctx.pc == 0x08A880E4u) goto L_08A880E4;
    return;
L_08A880E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
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
L_08A88108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A88128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 661u, 0x08A87FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A88128u) goto L_08A88128;
    return;
L_08A88128:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8813Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 93u, 0x08A3C788u>(ctx, &aot_mem) && ctx.pc == 0x08A8813Cu) goto L_08A8813C;
    return;
L_08A8813C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8814C;
      }
      goto L_08A88144;
    }
L_08A88144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A88150;
      }
      goto L_08A8814C;
    }
L_08A8814C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A88150;
L_08A88150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A881A8;
      }
      goto L_08A881A0;
    }
L_08A881A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A88470;
      }
      goto L_08A881A8;
    }
L_08A881A8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x08A881B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A881B4u) goto L_08A881B4;
    return;
L_08A881B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A882E0;
      }
      goto L_08A881D8;
    }
L_08A881D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08A881F4;
L_08A881F4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A88204u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem) && ctx.pc == 0x08A88204u) goto L_08A88204;
    return;
L_08A88204:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A88250;
      }
      goto L_08A8822C;
    }
L_08A8822C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A88254;
    }
    goto L_08A8823C;
L_08A8823C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A88254;
      }
      goto L_08A8824C;
    }
L_08A8824C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A88250;
L_08A88250:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A88254;
L_08A88254:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A882A8;
      }
      goto L_08A8825C;
    }
L_08A8825C:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8826Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem) && ctx.pc == 0x08A8826Cu) goto L_08A8826C;
    return;
L_08A8826C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A882A8;
      }
      goto L_08A88290;
    }
L_08A88290:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08A882E8;
      }
      goto L_08A882A8;
    }
L_08A882A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A882C4;
      }
      goto L_08A882B4;
    }
L_08A882B4:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08A882E8;
      }
      goto L_08A882C4;
    }
L_08A882C4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A881F4;
      }
      goto L_08A882E0;
    }
L_08A882E0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    goto L_08A882E8;
L_08A882E8:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88314;
      }
      goto L_08A882FC;
    }
L_08A882FC:
    ctx.gpr[31] = (0x08A88304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A88304u) goto L_08A88304;
    return;
L_08A88304:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A882FC;
      }
      goto L_08A88310;
    }
L_08A88310:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    goto L_08A88314;
L_08A88314:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88340;
      }
      goto L_08A88334;
    }
L_08A88334:
    ctx.gpr[31] = (0x08A8833Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8833Cu) goto L_08A8833C;
    return;
L_08A8833C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08A88340;
L_08A88340:
    ctx.gpr[31] = (0x08A88348u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 598u, 0x08A53344u>(ctx, &aot_mem) && ctx.pc == 0x08A88348u) goto L_08A88348;
    return;
L_08A88348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8840C;
      }
      goto L_08A88360;
    }
L_08A88360:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08A88370;
L_08A88370:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A883F0;
      }
      goto L_08A8837C;
    }
L_08A8837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A88394;
    }
    goto L_08A88388;
L_08A88388:
    ctx.gpr[31] = (0x08A88390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88390u) goto L_08A88390;
    return;
L_08A88390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A88394;
L_08A88394:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A883F0;
      }
      goto L_08A883A0;
    }
L_08A883A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A883F0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A89B54;
L_08A883F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A88370;
      }
      goto L_08A8840C;
    }
L_08A8840C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8846C;
      }
      goto L_08A88434;
    }
L_08A88434:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08A88458;
      }
      goto L_08A88440;
    }
L_08A88440:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8846C;
      }
      goto L_08A88458;
    }
L_08A88458:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A8846Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 548u, 0x08B6E938u>(ctx, &aot_mem) && ctx.pc == 0x08A8846Cu) goto L_08A8846C;
    return;
L_08A8846C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A88470;
L_08A88470:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A884A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A884BCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 931u, 0x0897F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08A884BCu) goto L_08A884BC;
    return;
L_08A884BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (19056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_08A886A8;
      }
      goto L_08A88524;
    }
L_08A88524:
    ctx.gpr[9] = (34953u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-30584));
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[2] = (0u | 45696u);
    ctx.gpr[13] = (0u | 45788u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[6] = (0u | 0u);
    goto L_08A88548;
L_08A88548:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88560;
      }
      goto L_08A88558;
    }
L_08A88558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88674;
      }
      goto L_08A88560;
    }
L_08A88560:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-19832)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-19836)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(96))))));
      if (branch_taken) {
          goto L_08A885C4;
      }
      goto L_08A88580;
    }
L_08A88580:
    ctx.gpr[5] = (ctx.gpr[11] - ctx.gpr[5]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A885F0;
      }
      goto L_08A885C4;
    }
L_08A885C4:
    ctx.gpr[5] = (ctx.gpr[11] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A885F0;
L_08A885F0:
    ctx.gpr[11] = (ctx.gpr[7] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (ctx.gpr[5] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[11] - ctx.gpr[12]);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[2]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[14]);
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[15] = (static_cast<std::int32_t>(ctx.gpr[15]) < 0 ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] & 255u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88674;
      }
      goto L_08A88668;
    }
L_08A88668:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08A88674;
L_08A88674:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[3] = (ctx.gpr[3] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A88548;
      }
      goto L_08A8869C;
    }
L_08A8869C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[14]));
    goto L_08A886A8;
L_08A886A8:
    ctx.gpr[31] = (0x08A886B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8AA00;
L_08A886B0:
    ctx.gpr[31] = (0x08A886B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 26u, 0x08A8C214u>(ctx, &aot_mem) && ctx.pc == 0x08A886B8u) goto L_08A886B8;
    return;
L_08A886B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A886C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A886E0u);
    // nop
    goto L_08A8A934;
L_08A886E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A886EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A88AE0;
      }
      goto L_08A8872C;
    }
L_08A8872C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88948;
      }
      goto L_08A88750;
    }
L_08A88750:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88838;
      }
      goto L_08A88764;
    }
L_08A88764:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x08A8878Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A8878Cu) goto L_08A8878C;
    return;
L_08A8878C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A887B0;
      }
      goto L_08A8879C;
    }
L_08A8879C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A887D0;
      }
      goto L_08A887B0;
    }
L_08A887B0:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A887C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A887C0u) goto L_08A887C0;
    return;
L_08A887C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08A887D0;
L_08A887D0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A887F0;
      }
      goto L_08A887E0;
    }
L_08A887E0:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A887F0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A887F0u) goto L_08A887F0;
    return;
L_08A887F0:
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[31] = (0x08A88810u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88810u) goto L_08A88810;
    return;
L_08A88810:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88830;
      }
      goto L_08A88820;
    }
L_08A88820:
    ctx.gpr[6] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A88830u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88830u) goto L_08A88830;
    return;
L_08A88830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88940;
      }
      goto L_08A88838;
    }
L_08A88838:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[31] = (0x08A88860u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88860u) goto L_08A88860;
    return;
L_08A88860:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88884;
      }
      goto L_08A88870;
    }
L_08A88870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A888A4;
      }
      goto L_08A88884;
    }
L_08A88884:
    ctx.gpr[6] = (ctx.gpr[21] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A88894u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88894u) goto L_08A88894;
    return;
L_08A88894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08A888A4;
L_08A888A4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49))))));
    ctx.gpr[31] = (0x08A888C8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A888C8u) goto L_08A888C8;
    return;
L_08A888C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A888E4;
      }
      goto L_08A888D8;
    }
L_08A888D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A888FC;
      }
      goto L_08A888E4;
    }
L_08A888E4:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A888F4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A888F4u) goto L_08A888F4;
    return;
L_08A888F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A888FC;
L_08A888FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55))))));
    ctx.gpr[31] = (0x08A88920u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88920u) goto L_08A88920;
    return;
L_08A88920:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88940;
      }
      goto L_08A88930;
    }
L_08A88930:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A88940u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88940u) goto L_08A88940;
    return;
L_08A88940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88AE0;
      }
      goto L_08A88948;
    }
L_08A88948:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A88974;
      }
      goto L_08A88964;
    }
L_08A88964:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8897C;
      }
      goto L_08A88974;
    }
L_08A88974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
    goto L_08A8897C;
L_08A8897C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A889A4;
      }
      goto L_08A88984;
    }
L_08A88984:
    ctx.gpr[31] = (0x08A8898Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A8898Cu) goto L_08A8898C;
    return;
L_08A8898C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A889A4;
      }
      goto L_08A88998;
    }
L_08A88998:
    ctx.gpr[31] = (0x08A889A0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A889A0u) goto L_08A889A0;
    return;
L_08A889A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A889A4;
L_08A889A4:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61))))));
    ctx.gpr[31] = (0x08A889CCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A889CCu) goto L_08A889CC;
    return;
L_08A889CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A889F8;
      }
      goto L_08A889DC;
    }
L_08A889DC:
    ctx.gpr[17] = (ctx.gpr[20] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A889F0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A889F0u) goto L_08A889F0;
    return;
L_08A889F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A889F8;
      }
      goto L_08A889F8;
    }
L_08A889F8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(67))))));
    ctx.gpr[31] = (0x08A88A20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88A20u) goto L_08A88A20;
    return;
L_08A88A20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88A3C;
      }
      goto L_08A88A30;
    }
L_08A88A30:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A88A58;
      }
      goto L_08A88A3C;
    }
L_08A88A3C:
    ctx.gpr[17] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A88A50u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88A50u) goto L_08A88A50;
    return;
L_08A88A50:
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08A88A58;
L_08A88A58:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73))))));
    ctx.gpr[31] = (0x08A88A7Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88A7Cu) goto L_08A88A7C;
    return;
L_08A88A7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88A98;
      }
      goto L_08A88A8C;
    }
L_08A88A8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A88AB4;
      }
      goto L_08A88A98;
    }
L_08A88A98:
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A88AACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88AACu) goto L_08A88AAC;
    return;
L_08A88AAC:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A88AB4;
L_08A88AB4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A88AD0;
      }
      goto L_08A88AC8;
    }
L_08A88AC8:
    ctx.gpr[31] = (0x08A88AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A88AD0u) goto L_08A88AD0;
    return;
L_08A88AD0:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A88AE0;
L_08A88AE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A88B38u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8AE14;
L_08A88B38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A88B80;
      }
      goto L_08A88B48;
    }
L_08A88B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(10001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88B78;
      }
      goto L_08A88B60;
    }
L_08A88B60:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A88B88;
      }
      goto L_08A88B70;
    }
L_08A88B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88B88;
      }
      goto L_08A88B78;
    }
L_08A88B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88BB0;
      }
      goto L_08A88B80;
    }
L_08A88B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88BB0;
      }
      goto L_08A88B88;
    }
L_08A88B88:
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A88BB0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A886EC;
L_08A88BB0:
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
L_08A88BC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A88C20;
      }
      goto L_08A88BE8;
    }
L_08A88BE8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A88BF8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A8AE14;
L_08A88BF8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 51200u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88C28;
      }
      goto L_08A88C18;
    }
L_08A88C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88C58;
      }
      goto L_08A88C20;
    }
L_08A88C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88C94;
      }
      goto L_08A88C28;
    }
L_08A88C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A88C40;
    }
    goto L_08A88C34;
L_08A88C34:
    ctx.gpr[31] = (0x08A88C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88C3Cu) goto L_08A88C3C;
    return;
L_08A88C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A88C40;
L_08A88C40:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88C94;
      }
      goto L_08A88C58;
    }
L_08A88C58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A88C68;
      }
      goto L_08A88C68;
    }
L_08A88C68:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A88C94u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A886EC;
L_08A88C94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A88CC8;
      }
      goto L_08A88CC0;
    }
L_08A88CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88CD8;
      }
      goto L_08A88CC8;
    }
L_08A88CC8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A88CD8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A88B10;
L_08A88CD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88D54;
      }
      goto L_08A88D14;
    }
L_08A88D14:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88D2C;
      }
      goto L_08A88D20;
    }
L_08A88D20:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A88D44;
      }
      goto L_08A88D2C;
    }
L_08A88D2C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A88D14;
      }
      goto L_08A88D3C;
    }
L_08A88D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88D54;
      }
      goto L_08A88D44;
    }
L_08A88D44:
    ctx.gpr[4] = (0u | 45788u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A88D5C;
      }
      goto L_08A88D54;
    }
L_08A88D54:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_08A88D5C;
L_08A88D5C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A88DE0;
      }
      goto L_08A88DC0;
    }
L_08A88DC0:
    ctx.gpr[31] = (0x08A88DC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A88DC8u) goto L_08A88DC8;
    return;
L_08A88DC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88DE0;
      }
      goto L_08A88DD4;
    }
L_08A88DD4:
    ctx.gpr[31] = (0x08A88DDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A88DDCu) goto L_08A88DDC;
    return;
L_08A88DDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A88DE0;
L_08A88DE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[31] = (0x08A88E1Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88E1Cu) goto L_08A88E1C;
    return;
L_08A88E1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88E48;
      }
      goto L_08A88E2C;
    }
L_08A88E2C:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A88E40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88E40u) goto L_08A88E40;
    return;
L_08A88E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A88E48;
      }
      goto L_08A88E48;
    }
L_08A88E48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A88E8C;
      }
      goto L_08A88E6C;
    }
L_08A88E6C:
    ctx.gpr[31] = (0x08A88E74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A88E74u) goto L_08A88E74;
    return;
L_08A88E74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88E8C;
      }
      goto L_08A88E80;
    }
L_08A88E80:
    ctx.gpr[31] = (0x08A88E88u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A88E88u) goto L_08A88E88;
    return;
L_08A88E88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A88E8C;
L_08A88E8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(11))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[31] = (0x08A88EC8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88EC8u) goto L_08A88EC8;
    return;
L_08A88EC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88EF4;
      }
      goto L_08A88ED8;
    }
L_08A88ED8:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A88EECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88EECu) goto L_08A88EEC;
    return;
L_08A88EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A88EF4;
      }
      goto L_08A88EF4;
    }
L_08A88EF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A88F38;
      }
      goto L_08A88F18;
    }
L_08A88F18:
    ctx.gpr[31] = (0x08A88F20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A88F20u) goto L_08A88F20;
    return;
L_08A88F20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88F38;
      }
      goto L_08A88F2C;
    }
L_08A88F2C:
    ctx.gpr[31] = (0x08A88F34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A88F34u) goto L_08A88F34;
    return;
L_08A88F34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A88F38;
L_08A88F38:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[31] = (0x08A88F78u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 577u, 0x08A87A98u>(ctx, &aot_mem) && ctx.pc == 0x08A88F78u) goto L_08A88F78;
    return;
L_08A88F78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A88FA4;
      }
      goto L_08A88F88;
    }
L_08A88F88:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A88F9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88F9Cu) goto L_08A88F9C;
    return;
L_08A88F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A88FA4;
      }
      goto L_08A88FA4;
    }
L_08A88FA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88FCC:
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
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[9] = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A89038;
      }
      goto L_08A8902C;
    }
L_08A8902C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A89044;
      }
      goto L_08A89038;
    }
L_08A89038:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08A89044;
L_08A89044:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8907C;
      }
      goto L_08A8904C;
    }
L_08A8904C:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x08A89064u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A89064u) goto L_08A89064;
    return;
L_08A89064:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A8907C;
      }
      goto L_08A89070;
    }
L_08A89070:
    ctx.gpr[31] = (0x08A89078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A89078u) goto L_08A89078;
    return;
L_08A89078:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08A8907C;
L_08A8907C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A890AC;
      }
      goto L_08A8908C;
    }
L_08A8908C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
        goto L_08A890A4;
    }
    goto L_08A89098;
L_08A89098:
    ctx.gpr[31] = (0x08A890A0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A88D64;
L_08A890A0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
    goto L_08A890A4;
L_08A890A4:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A8908C;
      }
      goto L_08A890AC;
    }
L_08A890AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A890DC;
      }
      goto L_08A890BC;
    }
L_08A890BC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A890D0;
      }
      goto L_08A890C8;
    }
L_08A890C8:
    ctx.gpr[31] = (0x08A890D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A890D0:
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A8910C;
      }
      goto L_08A890DC;
    }
L_08A890DC:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89108;
      }
      goto L_08A890E8;
    }
L_08A890E8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08A89100;
    }
    goto L_08A890F4;
L_08A890F4:
    ctx.gpr[31] = (0x08A890FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A890FC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A89100;
L_08A89100:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A890E8;
      }
      goto L_08A89108;
    }
L_08A89108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A8910C;
L_08A8910C:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08A89148;
    }
    goto L_08A89114;
L_08A89114:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89144;
      }
      goto L_08A89120;
    }
L_08A89120:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
        goto L_08A89138;
    }
    goto L_08A8912C;
L_08A8912C:
    ctx.gpr[31] = (0x08A89134u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A88D64;
L_08A89134:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    goto L_08A89138;
L_08A89138:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89120;
      }
      goto L_08A89140;
    }
L_08A89140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A89144;
L_08A89144:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08A89148;
L_08A89148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A891F8;
      }
      goto L_08A89158;
    }
L_08A89158:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A891E8;
      }
      goto L_08A89160;
    }
L_08A89160:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A8916C;
    }
L_08A8916C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A89174;
    }
L_08A89174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A89180;
    }
L_08A89180:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89190;
      }
      goto L_08A89188;
    }
L_08A89188:
    ctx.gpr[31] = (0x08A89190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A89190u) goto L_08A89190;
    return;
L_08A89190:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A89198;
    }
L_08A89198:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A891A0;
    }
L_08A891A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A891AC;
    }
L_08A891AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A891BC;
      }
      goto L_08A891B4;
    }
L_08A891B4:
    ctx.gpr[31] = (0x08A891BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A891BCu) goto L_08A891BC;
    return;
L_08A891BC:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
        goto L_08A891EC;
    }
    goto L_08A891C4;
L_08A891C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A891E8;
      }
      goto L_08A891CC;
    }
L_08A891CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
        goto L_08A891EC;
    }
    goto L_08A891D8;
L_08A891D8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
        goto L_08A891EC;
    }
    goto L_08A891E0;
L_08A891E0:
    ctx.gpr[31] = (0x08A891E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A891E8u) goto L_08A891E8;
    return;
L_08A891E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    goto L_08A891EC;
L_08A891EC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A89158;
      }
      goto L_08A891F4;
    }
L_08A891F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A891F8;
L_08A891F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89208;
      }
      goto L_08A89200;
    }
L_08A89200:
    ctx.gpr[31] = (0x08A89208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A89208u) goto L_08A89208;
    return;
L_08A89208:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[19] = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[20] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[20] = (ctx.gpr[7] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A89430;
      }
      goto L_08A892AC;
    }
L_08A892AC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A892E4;
      }
      goto L_08A892B4;
    }
L_08A892B4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A892D4;
      }
      goto L_08A892C0;
    }
L_08A892C0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A892CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A892CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A892D4;
L_08A892D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A89458;
      }
      goto L_08A892E4;
    }
L_08A892E4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_08A89300;
      }
      goto L_08A892F0;
    }
L_08A892F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A892FCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08A88D64;
L_08A892FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A89300;
L_08A89300:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A89314u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A88D64;
L_08A89314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-88));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A89394;
      }
      goto L_08A8933C;
    }
L_08A8933C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A8936Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8936Cu) goto L_08A8936C;
    return;
L_08A8936C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A89378u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89378u) goto L_08A89378;
    return;
L_08A89378:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A89384u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89384u) goto L_08A89384;
    return;
L_08A89384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A8933C;
      }
      goto L_08A89394;
    }
L_08A89394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A893B8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A893B8u) goto L_08A893B8;
    return;
L_08A893B8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A893C4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A893C4u) goto L_08A893C4;
    return;
L_08A893C4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A893D0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A893D0u) goto L_08A893D0;
    return;
L_08A893D0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A893EC;
      }
      goto L_08A893DC;
    }
L_08A893DC:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A893F0;
    }
    goto L_08A893E4;
L_08A893E4:
    ctx.gpr[31] = (0x08A893ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A893ECu) goto L_08A893EC;
    return;
L_08A893EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A893F0;
L_08A893F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89408;
      }
      goto L_08A893F8;
    }
L_08A893F8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A8940C;
    }
    goto L_08A89400;
L_08A89400:
    ctx.gpr[31] = (0x08A89408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A89408u) goto L_08A89408;
    return;
L_08A89408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A8940C;
L_08A8940C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89424;
      }
      goto L_08A89414;
    }
L_08A89414:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89424;
      }
      goto L_08A8941C;
    }
L_08A8941C:
    ctx.gpr[31] = (0x08A89424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A89424u) goto L_08A89424;
    return;
L_08A89424:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A89458;
      }
      goto L_08A89430;
    }
L_08A89430:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A89450u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08A88FCC;
L_08A89450:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    goto L_08A89458;
L_08A89458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x08A894D4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08A89254;
L_08A894D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A894F4;
      }
      goto L_08A894E4;
    }
L_08A894E4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A894F8;
    }
    goto L_08A894EC;
L_08A894EC:
    ctx.gpr[31] = (0x08A894F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A894F4u) goto L_08A894F4;
    return;
L_08A894F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A894F8;
L_08A894F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89510;
      }
      goto L_08A89500;
    }
L_08A89500:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_08A89514;
    }
    goto L_08A89508;
L_08A89508:
    ctx.gpr[31] = (0x08A89510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A89510u) goto L_08A89510;
    return;
L_08A89510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A89514;
L_08A89514:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8952C;
      }
      goto L_08A8951C;
    }
L_08A8951C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8952C;
      }
      goto L_08A89524;
    }
L_08A89524:
    ctx.gpr[31] = (0x08A8952Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A8952Cu) goto L_08A8952C;
    return;
L_08A8952C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8953Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8AD44;
L_08A8953C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8955C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[8] = (0u | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A895B8;
      }
      goto L_08A89584;
    }
L_08A89584:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A895B0;
      }
      goto L_08A89590;
    }
L_08A89590:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89584;
      }
      goto L_08A895A8;
    }
L_08A895A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A895B8;
      }
      goto L_08A895B0;
    }
L_08A895B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A895BC;
      }
      goto L_08A895B8;
    }
L_08A895B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A895BC;
L_08A895BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A895C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A89694;
      }
      goto L_08A89608;
    }
L_08A89608:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8963C;
      }
      goto L_08A89610;
    }
L_08A89610:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8962C;
      }
      goto L_08A8961C;
    }
L_08A8961C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A8962C;
L_08A8962C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A897A0;
      }
      goto L_08A8963C;
    }
L_08A8963C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A89654;
      }
      goto L_08A89648;
    }
L_08A89648:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A89654;
L_08A89654:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89684;
      }
      goto L_08A89674;
    }
L_08A89674:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08A89684u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A89684u) goto L_08A89684;
    return;
L_08A89684:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A897A0;
      }
      goto L_08A89694;
    }
L_08A89694:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A896C8;
      }
      goto L_08A896B8;
    }
L_08A896B8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A896D4;
      }
      goto L_08A896C8;
    }
L_08A896C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    goto L_08A896D4;
L_08A896D4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A89700;
      }
      goto L_08A896DC;
    }
L_08A896DC:
    ctx.gpr[31] = (0x08A896E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A896E4u) goto L_08A896E4;
    return;
L_08A896E4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A89700;
    }
    goto L_08A896F0;
L_08A896F0:
    ctx.gpr[31] = (0x08A896F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A896F8u) goto L_08A896F8;
    return;
L_08A896F8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A89700;
L_08A89700:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A89718;
      }
      goto L_08A8970C;
    }
L_08A8970C:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A89738;
      }
      goto L_08A89718;
    }
L_08A89718:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8972Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8972Cu) goto L_08A8972C;
    return;
L_08A8972C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A89738;
L_08A89738:
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A8974Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8974Cu) goto L_08A8974C;
    return;
L_08A8974C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A89764;
      }
      goto L_08A89758;
    }
L_08A89758:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8977C;
      }
      goto L_08A89764;
    }
L_08A89764:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89774u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A89774u) goto L_08A89774;
    return;
L_08A89774:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A8977C;
L_08A8977C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8978C;
      }
      goto L_08A89784;
    }
L_08A89784:
    ctx.gpr[31] = (0x08A8978Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A8978Cu) goto L_08A8978C;
    return;
L_08A8978C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_08A897A0;
L_08A897A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A897C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A897F0u);
    // nop
    goto L_08A8AE14;
L_08A897F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A89808u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 622u, 0x08B6ED5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89808u) goto L_08A89808;
    return;
L_08A89808:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A8982Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 623u, 0x08B6ED70u>(ctx, &aot_mem) && ctx.pc == 0x08A8982Cu) goto L_08A8982C;
    return;
L_08A8982C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A89848;
      }
      goto L_08A8983C;
    }
L_08A8983C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8985C;
      }
      goto L_08A89848;
    }
L_08A89848:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A8985Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08A895C4;
L_08A8985C:
    ctx.gpr[31] = (0x08A89864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8AD44;
L_08A89864:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A898A8u);
    // nop
    goto L_08A89998;
L_08A898A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A898E8;
      }
      goto L_08A898B0;
    }
L_08A898B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A898BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8AE14;
L_08A898BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A898D4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 630u, 0x08B6EDD4u>(ctx, &aot_mem) && ctx.pc == 0x08A898D4u) goto L_08A898D4;
    return;
L_08A898D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A898F0;
      }
      goto L_08A898E0;
    }
L_08A898E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A89924;
      }
      goto L_08A898E8;
    }
L_08A898E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89964;
      }
      goto L_08A898F0;
    }
L_08A898F0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A89924;
      }
      goto L_08A898FC;
    }
L_08A898FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A89900;
L_08A89900:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A8991C;
    }
    goto L_08A8990C;
L_08A8990C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A8991C;
L_08A8991C:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A89900;
    }
    goto L_08A89924;
L_08A89924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A89954;
      }
      goto L_08A89934;
    }
L_08A89934:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A8994Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8994Cu) goto L_08A8994C;
    return;
L_08A8994C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A89954;
      }
      goto L_08A89954;
    }
L_08A89954:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A89964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8AD44;
L_08A89964:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8997C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8998Cu);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_08A89998;
L_08A8998C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A899E0;
      }
      goto L_08A899B8;
    }
L_08A899B8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A899E0;
      }
      goto L_08A899C4;
    }
L_08A899C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A899D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A8955C;
L_08A899D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A899E8;
      }
      goto L_08A899D8;
    }
L_08A899D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A89A14;
      }
      goto L_08A899E0;
    }
L_08A899E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A89A14;
      }
      goto L_08A899E8;
    }
L_08A899E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A899F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A8AE14;
L_08A899F4:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A89A08u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 597u, 0x08B6EC68u>(ctx, &aot_mem) && ctx.pc == 0x08A89A08u) goto L_08A89A08;
    return;
L_08A89A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A89A14;
L_08A89A14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 44u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A89AAC;
      }
      goto L_08A89A74;
    }
L_08A89A74:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89A88u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A89880;
L_08A89A88:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89A74;
      }
      goto L_08A89AAC;
    }
L_08A89AAC:
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
L_08A89ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89B4C;
      }
      goto L_08A89AF4;
    }
L_08A89AF4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    goto L_08A89B00;
L_08A89B00:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89B3C;
      }
      goto L_08A89B20;
    }
L_08A89B20:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A89B24;
L_08A89B24:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A89B24;
      }
      goto L_08A89B3C;
    }
L_08A89B3C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A89B00;
      }
      goto L_08A89B4C;
    }
L_08A89B4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08A89B94u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem) && ctx.pc == 0x08A89B94u) goto L_08A89B94;
    return;
L_08A89B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A89BE0;
      }
      goto L_08A89BBC;
    }
L_08A89BBC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08A89BE4;
    }
    goto L_08A89BCC;
L_08A89BCC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A89BE4;
      }
      goto L_08A89BDC;
    }
L_08A89BDC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A89BE0;
L_08A89BE0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A89BE4;
L_08A89BE4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A89C04;
    }
    goto L_08A89BEC;
L_08A89BEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A89C04;
      }
      goto L_08A89BFC;
    }
L_08A89BFC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A89C04;
L_08A89C04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89C3C;
      }
      goto L_08A89C0C;
    }
L_08A89C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A89C28;
      }
      goto L_08A89C18;
    }
L_08A89C18:
    ctx.gpr[31] = (0x08A89C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A89C20u) goto L_08A89C20;
    return;
L_08A89C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    goto L_08A89C28;
L_08A89C28:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89C34u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 501u, 0x08A52CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A89C34u) goto L_08A89C34;
    return;
L_08A89C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89D80;
      }
      goto L_08A89C3C;
    }
L_08A89C3C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[10] = (ctx.gpr[10] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[20] = (ctx.gpr[4] << 2u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A89C70;
    }
    goto L_08A89C70;
L_08A89C70:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89CBC;
      }
      goto L_08A89C7C;
    }
L_08A89C7C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08A89CA4;
      }
      goto L_08A89C8C;
    }
L_08A89C8C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A89CBC;
      }
      goto L_08A89CA4;
    }
L_08A89CA4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A89CB8u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 548u, 0x08B6E938u>(ctx, &aot_mem) && ctx.pc == 0x08A89CB8u) goto L_08A89CB8;
    return;
L_08A89CB8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08A89CBC;
L_08A89CBC:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89CE0;
      }
      goto L_08A89CCC;
    }
L_08A89CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 45792u);
      if (branch_taken) {
          goto L_08A89CE8;
      }
      goto L_08A89CD8;
    }
L_08A89CD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A89D14;
      }
      goto L_08A89CE0;
    }
L_08A89CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89D80;
      }
      goto L_08A89CE8;
    }
L_08A89CE8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A89CF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A89CF4u) goto L_08A89CF4;
    return;
L_08A89CF4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A89D38;
      }
      goto L_08A89D04;
    }
L_08A89D04:
    ctx.gpr[31] = (0x08A89D0Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A8AE70;
L_08A89D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89D38;
      }
      goto L_08A89D14;
    }
L_08A89D14:
    ctx.gpr[31] = (0x08A89D1Cu);
    ctx.gpr[21] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A89D1Cu) goto L_08A89D1C;
    return;
L_08A89D1C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A89D38;
      }
      goto L_08A89D28;
    }
L_08A89D28:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89D34u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A8AE70;
L_08A89D34:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08A89D38;
L_08A89D38:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A89D70;
      }
      goto L_08A89D60;
    }
L_08A89D60:
    ctx.gpr[31] = (0x08A89D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A89D68u) goto L_08A89D68;
    return;
L_08A89D68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    goto L_08A89D70;
L_08A89D70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A89D80u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 501u, 0x08A52CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A89D80u) goto L_08A89D80;
    return;
L_08A89D80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89DA8:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1648), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1652), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1660), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1664), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1668), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1672), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1684), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1644), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A89E18u);
    ctx.gpr[6] = (0u | 1404u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89E18u) goto L_08A89E18;
    return;
L_08A89E18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A89E24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A8A9D8;
L_08A89E24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(222));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A89E60;
    }
    goto L_08A89E60;
L_08A89E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(204));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10085)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (18766u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17999));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (2217u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08A89EB4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89EB4u) goto L_08A89EB4;
    return;
L_08A89EB4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 102u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    goto L_08A89EC0;
L_08A89EC0:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A89EC0;
      }
      goto L_08A89EE4;
    }
L_08A89EE4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1624));
      if (branch_taken) {
          goto L_08A8A038;
      }
      goto L_08A89F10;
    }
L_08A89F10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.gpr[17] = (0u | 0u);
    goto L_08A89F24;
L_08A89F24:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A89FA0;
      }
      goto L_08A89F30;
    }
L_08A89F30:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A89F3Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem) && ctx.pc == 0x08A89F3Cu) goto L_08A89F3C;
    return;
L_08A89F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1624)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1616), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1620), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A89F70u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem) && ctx.pc == 0x08A89F70u) goto L_08A89F70;
    return;
L_08A89F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1632)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1616), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1620), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1622)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_08A89FA0;
L_08A89FA0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A008;
      }
      goto L_08A89FB0;
    }
L_08A89FB0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_08A8A008;
L_08A8A008:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A89F24;
      }
      goto L_08A8A038;
    }
L_08A8A038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8A064u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1644)));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A064u) goto L_08A8A064;
    return;
L_08A8A064:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1660)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1684)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[18] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A118;
      }
      goto L_08A8A0E8;
    }
L_08A8A0E8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A108;
      }
      goto L_08A8A0F4;
    }
L_08A8A0F4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8A108;
      }
      goto L_08A8A100;
    }
L_08A8A100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A118;
      }
      goto L_08A8A108;
    }
L_08A8A108:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8A0E8;
      }
      goto L_08A8A118;
    }
L_08A8A118:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A154;
      }
      goto L_08A8A120;
    }
L_08A8A120:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8A12Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8A71C;
L_08A8A12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8A15C;
      }
      goto L_08A8A140;
    }
L_08A8A140:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A8A148u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8A148u) goto L_08A8A148;
    return;
L_08A8A148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8A16C;
      }
      goto L_08A8A154;
    }
L_08A8A154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A1C0;
      }
      goto L_08A8A15C;
    }
L_08A8A15C:
    ctx.gpr[31] = (0x08A8A164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8A164u) goto L_08A8A164;
    return;
L_08A8A164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08A8A16C;
L_08A8A16C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A8A180u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A89880;
L_08A8A180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8A190u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A89880;
L_08A8A190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A8A1B8;
      }
      goto L_08A8A1A8;
    }
L_08A8A1A8:
    ctx.gpr[31] = (0x08A8A1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1B0u) goto L_08A8A1B0;
    return;
L_08A8A1B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    goto L_08A8A1B8;
L_08A8A1B8:
    ctx.gpr[31] = (0x08A8A1C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 537u, 0x08A52F08u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1C0u) goto L_08A8A1C0;
    return;
L_08A8A1C0:
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
L_08A8A1D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A1E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[20] = (ctx.gpr[6] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A8A224;
      }
      goto L_08A8A21C;
    }
L_08A8A21C:
    ctx.gpr[31] = (0x08A8A224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A224u) goto L_08A8A224;
    return;
L_08A8A224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8A23Cu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A23Cu) goto L_08A8A23C;
    return;
L_08A8A23C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A410;
      }
      goto L_08A8A24C;
    }
L_08A8A24C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A410;
      }
      goto L_08A8A258;
    }
L_08A8A258:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A27C;
      }
      goto L_08A8A260;
    }
L_08A8A260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
      if (branch_taken) {
          goto L_08A8A288;
      }
      goto L_08A8A27C;
    }
L_08A8A27C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    goto L_08A8A288;
L_08A8A288:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] ^ 46u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A2EC;
      }
      goto L_08A8A2B8;
    }
L_08A8A2B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08A8A2FC;
      }
      goto L_08A8A2E4;
    }
L_08A8A2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8A308;
      }
      goto L_08A8A2EC;
    }
L_08A8A2EC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F4;
      }
      goto L_08A8A2FC;
    }
L_08A8A2FC:
    ctx.gpr[7] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A8A308;
L_08A8A308:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 46u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A3C4;
      }
      goto L_08A8A3BC;
    }
L_08A8A3BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8A3C4;
L_08A8A3C4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A410;
      }
      goto L_08A8A3CC;
    }
L_08A8A3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 4095u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A8A410;
L_08A8A410:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8A430u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A430u) goto L_08A8A430;
    return;
L_08A8A430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2392), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2384)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2384), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (60u << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08A8A4E0;
      }
      goto L_08A8A4CC;
    }
L_08A8A4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2396), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2392), 0u);
    goto L_08A8A4E0;
L_08A8A4E0:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2400));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A8A4F4;
L_08A8A4F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A8A598;
      }
      goto L_08A8A548;
    }
L_08A8A548:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    goto L_08A8A564;
L_08A8A564:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A598;
      }
      goto L_08A8A56C;
    }
L_08A8A56C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A598;
      }
      goto L_08A8A574;
    }
L_08A8A574:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8A564;
      }
      goto L_08A8A598;
    }
L_08A8A598:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A8A5B0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A5B0u) goto L_08A8A5B0;
    return;
L_08A8A5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08A8A5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    goto L_08A8A60C;
L_08A8A60C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A6FC;
      }
      goto L_08A8A614;
    }
L_08A8A614:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A6FC;
      }
      goto L_08A8A628;
    }
L_08A8A628:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10084)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8A66C;
      }
      goto L_08A8A638;
    }
L_08A8A638:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8A654u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8B6B4;
L_08A8A654:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8A60C;
      }
      goto L_08A8A66C;
    }
L_08A8A66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A654;
      }
      goto L_08A8A678;
    }
L_08A8A678:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A8A6ACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8A6ACu) goto L_08A8A6AC;
    return;
L_08A8A6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A8A6C4;
    }
    goto L_08A8A6B8;
L_08A8A6B8:
    ctx.gpr[31] = (0x08A8A6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A6C0u) goto L_08A8A6C0;
    return;
L_08A8A6C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A8A6C4;
L_08A8A6C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8A6E4;
      }
      goto L_08A8A6D4;
    }
L_08A8A6D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A8A6EC;
      }
      goto L_08A8A6E4;
    }
L_08A8A6E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A8A6EC;
L_08A8A6EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A654;
      }
      goto L_08A8A6F4;
    }
L_08A8A6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A6FC;
      }
      goto L_08A8A6FC;
    }
L_08A8A6FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A71C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A880;
      }
      goto L_08A8A804;
    }
L_08A8A804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A824;
      }
      goto L_08A8A814;
    }
L_08A8A814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08A8A824;
L_08A8A824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08A8A848;
    }
    goto L_08A8A83C;
L_08A8A83C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A8A848;
L_08A8A848:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A804;
      }
      goto L_08A8A87C;
    }
L_08A8A87C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_08A8A880;
L_08A8A880:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A8A8A8;
L_08A8A8A8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8A92C;
      }
      goto L_08A8A8B0;
    }
L_08A8A8B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
      if (branch_taken) {
          goto L_08A8A8DC;
      }
      goto L_08A8A8C4;
    }
L_08A8A8C4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8A8F8;
      }
      goto L_08A8A8DC;
    }
L_08A8A8DC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A8A8F8;
L_08A8A8F8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A92C;
      }
      goto L_08A8A900;
    }
L_08A8A900:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A8A91C;
      }
      goto L_08A8A914;
    }
L_08A8A914:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8A924;
      }
      goto L_08A8A91C;
    }
L_08A8A91C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    goto L_08A8A924;
L_08A8A924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A8A8;
      }
      goto L_08A8A92C;
    }
L_08A8A92C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8A9C0;
      }
      goto L_08A8A978;
    }
L_08A8A978:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A998;
      }
      goto L_08A8A988;
    }
L_08A8A988:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8A994u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A8A094;
L_08A8A994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08A8A998;
L_08A8A998:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8A978;
      }
      goto L_08A8A9C0;
    }
L_08A8A9C0:
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
L_08A8A9D8:
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AA00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1520));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[31]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2388), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (60u << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2412)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1480), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8AAA8;
      }
      goto L_08A8AA8C;
    }
L_08A8AA8C:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2404)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2408), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2404), 0u);
    goto L_08A8AAA8;
L_08A8AAA8:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2412));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1484), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1485), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1486), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1487), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1488), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1489), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1488))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A8AB24;
L_08A8AB24:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1400u);
    ctx.gpr[31] = (0x08A8AB34u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 104u, 0x08A3C868u>(ctx, &aot_mem) && ctx.pc == 0x08A8AB34u) goto L_08A8AB34;
    return;
L_08A8AB34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8ABA8;
      }
      goto L_08A8AB3C;
    }
L_08A8AB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8AB50u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A8BDB0;
L_08A8AB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A8AB68;
    }
    goto L_08A8AB5C;
L_08A8AB5C:
    ctx.gpr[31] = (0x08A8AB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AB64u) goto L_08A8AB64;
    return;
L_08A8AB64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A8AB68;
L_08A8AB68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8AB88;
      }
      goto L_08A8AB78;
    }
L_08A8AB78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A8AB90;
      }
      goto L_08A8AB88;
    }
L_08A8AB88:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A8AB90;
L_08A8AB90:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ABA0;
      }
      goto L_08A8AB98;
    }
L_08A8AB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A8AB24;
      }
      goto L_08A8ABA0;
    }
L_08A8ABA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AD24;
      }
      goto L_08A8ABA8;
    }
L_08A8ABA8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 31u);
      if (branch_taken) {
          goto L_08A8AD24;
      }
      goto L_08A8ABD4;
    }
L_08A8ABD4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A8ABD8;
L_08A8ABD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ACF8;
      }
      goto L_08A8ABEC;
    }
L_08A8ABEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08A8ABF0;
L_08A8ABF0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ACF8;
      }
      goto L_08A8AC10;
    }
L_08A8AC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ACF8;
      }
      goto L_08A8AC44;
    }
L_08A8AC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8AC94u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08A8A5D4;
L_08A8AC94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(594), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A8ACE8;
    }
    goto L_08A8ACE0;
L_08A8ACE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A8ACF0;
      }
      goto L_08A8ACE8;
    }
L_08A8ACE8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A8ACF0;
L_08A8ACF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08A8ABF0;
      }
      goto L_08A8ACF8;
    }
L_08A8ACF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8ABD8;
      }
      goto L_08A8AD24;
    }
L_08A8AD24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AD44:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8AE0C;
      }
      goto L_08A8AD58;
    }
L_08A8AD58:
    ctx.gpr[5] = (0u | 44u);
    goto L_08A8AD5C;
L_08A8AD5C:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8ADFC;
      }
      goto L_08A8AD70;
    }
L_08A8AD70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[11]);
    goto L_08A8AD7C;
L_08A8AD7C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[13] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[13];
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ADCC;
      }
      goto L_08A8AD90;
    }
L_08A8AD90:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    if (ctx.gpr[13] == ctx.gpr[2]) {
    ctx.gpr[12] = (0u | 1u);
        goto L_08A8ADC0;
    }
    goto L_08A8AD9C;
L_08A8AD9C:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[15];
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8ADB4;
      }
      goto L_08A8ADAC;
    }
L_08A8ADAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8ADC0;
      }
      goto L_08A8ADB4;
    }
L_08A8ADB4:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[2];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8AD9C;
      }
      goto L_08A8ADBC;
    }
L_08A8ADBC:
    ctx.gpr[12] = (0u | 1u);
    goto L_08A8ADC0;
L_08A8ADC0:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
      if (branch_taken) {
          goto L_08A8ADD0;
      }
      goto L_08A8ADC8;
    }
L_08A8ADC8:
    ctx.gpr[3] = (0u | 1u);
    goto L_08A8ADCC;
L_08A8ADCC:
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    goto L_08A8ADD0;
L_08A8ADD0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADF0;
      }
      goto L_08A8ADD8;
    }
L_08A8ADD8:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08A8AE00;
      }
      goto L_08A8ADF0;
    }
L_08A8ADF0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8AD7C;
      }
      goto L_08A8ADFC;
    }
L_08A8ADFC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    goto L_08A8AE00;
L_08A8AE00:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8AD5C;
      }
      goto L_08A8AE0C;
    }
L_08A8AE0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[6] = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8AE64;
      }
      goto L_08A8AE3C;
    }
L_08A8AE3C:
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[2]);
    goto L_08A8AE40;
L_08A8AE40:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8AE54;
      }
      goto L_08A8AE4C;
    }
L_08A8AE4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AE68;
      }
      goto L_08A8AE54;
    }
L_08A8AE54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A8AE40;
      }
      goto L_08A8AE64;
    }
L_08A8AE64:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8AE68;
L_08A8AE68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (2217u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24104));
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[31] = (0x08A8AECCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AECCu) goto L_08A8AECC;
    return;
L_08A8AECC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(592), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(594), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    ctx.gpr[7] = (2216u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(31404));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[31] = (0x08A8AEF8u);
    ctx.gpr[6] = (0u | 1404u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AEF8u) goto L_08A8AEF8;
    return;
L_08A8AEF8:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20000), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19996), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19860), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19848), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19844), ctx.gpr[4]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-19840), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (34953u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30584));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19836), ctx.gpr[4]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19832), ctx.gpr[4]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19824), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19820), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19816), 0u);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-19748), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AFE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2928));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2888), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2892), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2896), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2900), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2904), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2908), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2912), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2916), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2920), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2924), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A8B018u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 931u, 0x0897F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B018u) goto L_08A8B018;
    return;
L_08A8B018:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (19056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(100));
    ctx.gpr[19] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2868), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2384), 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B068u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A8AE14;
L_08A8B068:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A8B1E4;
      }
      goto L_08A8B088;
    }
L_08A8B088:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1428));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (1u << 16u);
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_08A8B0A0;
L_08A8B0A0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B0B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A8A9D8;
L_08A8B0B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2876), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8B0CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2872), ctx.gpr[18]);
    goto L_08A8A514;
L_08A8B0CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2880), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B100u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 103u, 0x08A3C840u>(ctx, &aot_mem) && ctx.pc == 0x08A8B100u) goto L_08A8B100;
    return;
L_08A8B100:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1428))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1430))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1432))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1434)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2880)));
    ctx.gpr[31] = (0x08A8B164u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B164u) goto L_08A8B164;
    return;
L_08A8B164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2392)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2392), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2384)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2384), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2856), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2872)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2876)));
      if (branch_taken) {
          goto L_08A8B1C0;
      }
      goto L_08A8B1A4;
    }
L_08A8B1A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2876), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8B1B4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B1B4u) goto L_08A8B1B4;
    return;
L_08A8B1B4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2876)));
      if (branch_taken) {
          goto L_08A8B1C0;
      }
      goto L_08A8B1C0;
    }
L_08A8B1C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B0A0;
      }
      goto L_08A8B1E4;
    }
L_08A8B1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B65C;
      }
      goto L_08A8B210;
    }
L_08A8B210:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[23] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2864), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] ^ 47u);
    ctx.gpr[19] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_08A8B24C;
L_08A8B24C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_08A8B5A4;
      }
      goto L_08A8B254;
    }
L_08A8B254:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
      if (branch_taken) {
          goto L_08A8B284;
      }
      goto L_08A8B264;
    }
L_08A8B264:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2864)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8B5A4;
      }
      goto L_08A8B278;
    }
L_08A8B278:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B5A4;
      }
      goto L_08A8B284;
    }
L_08A8B284:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1444));
    ctx.gpr[31] = (0x08A8B290u);
    ctx.gpr[5] = (0u | 1412u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 94u, 0x08B60818u>(ctx, &aot_mem) && ctx.pc == 0x08A8B290u) goto L_08A8B290;
    return;
L_08A8B290:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(1460), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B2C0;
      }
      goto L_08A8B2B0;
    }
L_08A8B2B0:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08A8B2C0;
L_08A8B2C0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 176u);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A8B2EC;
L_08A8B2EC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1448)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1444)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A8B2EC;
      }
      goto L_08A8B310;
    }
L_08A8B310:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2868)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B350u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A8A9D8;
L_08A8B350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2864)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8B3C0;
      }
      goto L_08A8B36C;
    }
L_08A8B36C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B3C0;
      }
      goto L_08A8B378;
    }
L_08A8B378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B3A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A8A514;
L_08A8B3A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2864), ctx.gpr[5]);
    goto L_08A8B3C0;
L_08A8B3C0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8B3F8;
      }
      goto L_08A8B3D4;
    }
L_08A8B3D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8B3F0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A8A514;
L_08A8B3F0:
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    goto L_08A8B3F8;
L_08A8B3F8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8B528;
      }
      goto L_08A8B41C;
    }
L_08A8B41C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B440;
      }
      goto L_08A8B438;
    }
L_08A8B438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B50C;
      }
      goto L_08A8B440;
    }
L_08A8B440:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B4E8;
      }
      goto L_08A8B44C;
    }
L_08A8B44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B4E8;
      }
      goto L_08A8B484;
    }
L_08A8B484:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8B498u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A8A514;
L_08A8B498:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8B4E8;
      }
      goto L_08A8B4A4;
    }
L_08A8B4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2858), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8B4E0;
      }
      goto L_08A8B4C4;
    }
L_08A8B4C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2884), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8B4D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B4D4u) goto L_08A8B4D4;
    return;
L_08A8B4D4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2884)));
      if (branch_taken) {
          goto L_08A8B4E0;
      }
      goto L_08A8B4E0;
    }
L_08A8B4E0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2859), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A8B4E8;
L_08A8B4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B50C;
      }
      goto L_08A8B4F8;
    }
L_08A8B4F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8B50Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A8A1E4;
L_08A8B50C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8B41C;
      }
      goto L_08A8B528;
    }
L_08A8B528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B57C;
      }
      goto L_08A8B548;
    }
L_08A8B548:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] ^ 47u);
    ctx.gpr[19] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08A8B570;
      }
      goto L_08A8B568;
    }
L_08A8B568:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), 0u);
      if (branch_taken) {
          goto L_08A8B59C;
      }
      goto L_08A8B570;
    }
L_08A8B570:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8B59C;
      }
      goto L_08A8B57C;
    }
L_08A8B57C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 47u);
    ctx.gpr[19] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_08A8B59C;
L_08A8B59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B24C;
      }
      goto L_08A8B5A4;
    }
L_08A8B5A4:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2860), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8B5DC;
      }
      goto L_08A8B5C4;
    }
L_08A8B5C4:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A8B5D4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B5D4u) goto L_08A8B5D4;
    return;
L_08A8B5D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8B5DC;
      }
      goto L_08A8B5DC;
    }
L_08A8B5DC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2861), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2862), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2864)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A8B624;
      }
      goto L_08A8B610;
    }
L_08A8B610:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A8B61Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B61Cu) goto L_08A8B61C;
    return;
L_08A8B61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8B624;
      }
      goto L_08A8B624;
    }
L_08A8B624:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2863), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B210;
      }
      goto L_08A8B65C;
    }
L_08A8B65C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B684;
      }
      goto L_08A8B668;
    }
L_08A8B668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B684;
      }
      goto L_08A8B67C;
    }
L_08A8B67C:
    ctx.gpr[31] = (0x08A8B684u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 661u, 0x08A87FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8B684u) goto L_08A8B684;
    return;
L_08A8B684:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2892)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2896)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2900)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2904)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2908)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2912)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2916)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2920)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2924)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2928));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A8BD98;
      }
      goto L_08A8B7A0;
    }
L_08A8B7A0:
    ctx.gpr[14] = (ctx.gpr[7] & 4095u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08A8B7B8;
L_08A8B7B8:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BD0C;
      }
      goto L_08A8B7C8;
    }
L_08A8B7C8:
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[25] = (ctx.gpr[25] & 4095u);
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08A8BD0C;
      }
      goto L_08A8B7D8;
    }
L_08A8B7D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] & 61440u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8B824;
      }
      goto L_08A8B818;
    }
L_08A8B818:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A8BD04;
      }
      goto L_08A8B824;
    }
L_08A8B824:
    ctx.gpr[25] = (ctx.gpr[6] | 0u);
    ctx.gpr[24] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(192))))));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[9] = (1u << 16u);
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[11] = (1u << 16u);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[3] = (1u << 16u);
    ctx.gpr[12] = (1u << 16u);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[16] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A8B8A8;
      }
      goto L_08A8B888;
    }
L_08A8B888:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A8B8C0;
      }
      goto L_08A8B8A8;
    }
L_08A8B8A8:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[24]);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(8));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
    goto L_08A8B8C0;
L_08A8B8C0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152))))));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(154))))));
    ctx.gpr[14] = (ctx.gpr[14] - ctx.gpr[15]);
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[14] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[24] = (ctx.gpr[24] ^ 31u);
    ctx.gpr[24] = (ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828)));
      if (branch_taken) {
          goto L_08A8BB80;
      }
      goto L_08A8B908;
    }
L_08A8B908:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[19] = (ctx.gpr[24] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    ctx.gpr[25] = (0u | 45724u);
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[17] = (0u | 45548u);
    ctx.gpr[18] = (1u << 16u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8B95C;
      }
      goto L_08A8B938;
    }
L_08A8B938:
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A8B980;
      }
      goto L_08A8B95C;
    }
L_08A8B95C:
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-32));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A8B980;
L_08A8B980:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B9A0;
      }
      goto L_08A8B990;
    }
L_08A8B990:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08A8B9A0;
L_08A8B9A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B9C0;
      }
      goto L_08A8B9B0;
    }
L_08A8B9B0:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08A8B9C0;
L_08A8B9C0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820)));
    ctx.gpr[15] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[5] + ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[16];
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A8B9FC;
      }
      goto L_08A8B9D8;
    }
L_08A8B9D8:
    ctx.gpr[24] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[9]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(-19812))))));
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    goto L_08A8B9FC;
L_08A8B9FC:
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
      if (branch_taken) {
          goto L_08A8BA38;
      }
      goto L_08A8BA1C;
    }
L_08A8BA1C:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A8BA54;
      }
      goto L_08A8BA38;
    }
L_08A8BA38:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    goto L_08A8BA54;
L_08A8BA54:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[14]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
      if (branch_taken) {
          goto L_08A8BA7C;
      }
      goto L_08A8BA70;
    }
L_08A8BA70:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A8BA7C;
L_08A8BA7C:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[14] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A8BAAC;
      }
      goto L_08A8BA90;
    }
L_08A8BA90:
    ctx.gpr[8] = (ctx.gpr[14] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A8BAC8;
      }
      goto L_08A8BAAC;
    }
L_08A8BAAC:
    ctx.gpr[8] = (ctx.gpr[14] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08A8BAC8;
L_08A8BAC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A8BAD8;
      }
      goto L_08A8BAD0;
    }
L_08A8BAD0:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_08A8BAD8;
L_08A8BAD8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BB04;
      }
      goto L_08A8BAF4;
    }
L_08A8BAF4:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08A8BB04;
L_08A8BB04:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BB24;
      }
      goto L_08A8BB14;
    }
L_08A8BB14:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08A8BB24;
L_08A8BB24:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[9]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[18];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A8BB60;
      }
      goto L_08A8BB3C;
    }
L_08A8BB3C:
    ctx.gpr[9] = (ctx.gpr[18] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-19988)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    goto L_08A8BB60;
L_08A8BB60:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A8BC54;
      }
      goto L_08A8BB80;
    }
L_08A8BB80:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BBB8;
      }
      goto L_08A8BBA8;
    }
L_08A8BBA8:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08A8BBB8;
L_08A8BBB8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[8] = (ctx.gpr[15] + ctx.gpr[15]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
      if (branch_taken) {
          goto L_08A8BBF4;
      }
      goto L_08A8BBE8;
    }
L_08A8BBE8:
    ctx.gpr[8] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08A8BBF4;
L_08A8BBF4:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8BC28;
      }
      goto L_08A8BC18;
    }
L_08A8BC18:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08A8BC28;
L_08A8BC28:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_08A8BC54;
L_08A8BC54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A8BC64;
      }
      goto L_08A8BC5C;
    }
L_08A8BC5C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A8BC64;
L_08A8BC64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A8BC74;
      }
      goto L_08A8BC6C;
    }
L_08A8BC6C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08A8BC74;
L_08A8BC74:
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19848), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852)));
      if (branch_taken) {
          goto L_08A8BCD8;
      }
      goto L_08A8BCCC;
    }
L_08A8BCCC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08A8BCD8;
L_08A8BCD8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (14080u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19836), ctx.gpr[4]);
    goto L_08A8BD04;
L_08A8BD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BD98;
      }
      goto L_08A8BD0C;
    }
L_08A8BD0C:
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    if (ctx.gpr[6] == ctx.gpr[15]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
        goto L_08A8BD1C;
    }
    goto L_08A8BD1C;
L_08A8BD1C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[10] ^ ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B7B8;
      }
      goto L_08A8BD80;
    }
L_08A8BD80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    goto L_08A8BD98;
L_08A8BD98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8BDB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2404)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2388)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(42));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2388), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem); return;
      }
      goto L_08A8BE44;
    }
L_08A8BE44:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem); return;
      }
      goto L_08A8BE54;
    }
L_08A8BE54:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8BE74;
      }
      goto L_08A8BE6C;
    }
L_08A8BE6C:
    ctx.gpr[31] = (0x08A8BE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE74u) goto L_08A8BE74;
    return;
L_08A8BE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08A8BE80u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE80u) goto L_08A8BE80;
    return;
L_08A8BE80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8BE8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 459u, 0x08A52A20u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE8Cu) goto L_08A8BE8C;
    return;
L_08A8BE8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BEDC;
      }
      goto L_08A8BE94;
    }
L_08A8BE94:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8BEC8;
      }
      goto L_08A8BEA4;
    }
L_08A8BEA4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A8BECC;
    }
    goto L_08A8BEB4;
L_08A8BEB4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A8BECC;
      }
      goto L_08A8BEC4;
    }
L_08A8BEC4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A8BEC8;
L_08A8BEC8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A8BECC;
L_08A8BECC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BEF8;
      }
      goto L_08A8BEDC;
    }
L_08A8BEDC:
    ctx.gpr[31] = (0x08A8BEE4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 459u, 0x08A52A20u>(ctx, &aot_mem) && ctx.pc == 0x08A8BEE4u) goto L_08A8BEE4;
    return;
L_08A8BEE4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A8BF00;
      }
      goto L_08A8BEF0;
    }
L_08A8BEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BF08;
      }
      goto L_08A8BEF8;
    }
L_08A8BEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem); return;
      }
      goto L_08A8BF00;
    }
L_08A8BF00:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8BF08;
L_08A8BF08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-19748))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BF6C;
      }
      goto L_08A8BF5C;
    }
L_08A8BF5C:
    ctx.gpr[5] = (0u | 45788u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A8BF6C;
L_08A8BF6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
    ctx.gpr[7] = (ctx.gpr[22] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8BF94u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08A8A5D4;
L_08A8BF94:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem); return;
      }
      goto L_08A8BFA0;
    }
L_08A8BFA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[22] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(594)));
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BFD4;
      }
      goto L_08A8BFCC;
    }
L_08A8BFCC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4096));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    goto L_08A8BFD4;
L_08A8BFD4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 25u, 0x08A8C1ECu>(ctx, &aot_mem); return;
      }
      goto L_08A8BFE4;
    }
L_08A8BFE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 24u, 0x08A8C1C0u>(ctx, &aot_mem); return;
      }
      goto L_08A8BFEC;
    }
L_08A8BFEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(604)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 14u, 0x08A8C0F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8BFFC;
    }
L_08A8BFFC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(604), ctx.gpr[5]);
    ctx.pc = 0x08A8C000u; return;
}

void recomp_unit_0161(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0161_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_161(Runtime &runtime) {
    runtime.register_generated_unit(161u, 0x08A88000u, 16384u, &recomp_unit_0161, &recomp_unit_0161_entry);
    runtime.register_function(0x08A88000u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88030u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88038u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88044u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88048u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88084u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88090u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88108u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88128u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8813Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88144u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8814Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88150u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88164u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88204u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8822Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8823Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8824Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88250u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88254u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8825Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8826Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88290u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88304u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88310u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88314u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88334u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8833Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88340u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88348u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88360u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88370u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8837Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88388u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88390u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88394u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8840Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88434u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88440u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88458u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8846Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88470u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A884BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88524u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88548u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88558u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88560u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88580u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88668u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88674u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8869Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8872Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88750u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88764u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8878Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8879Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88810u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88820u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88830u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88838u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88860u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88870u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88884u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88894u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88920u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88930u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88940u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88948u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88964u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88974u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8897Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88984u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8898Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88998u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88ED8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8902Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89038u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89044u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8904Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89064u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89070u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89078u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8907Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8908Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89098u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89100u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89108u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8910Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89114u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89120u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8912Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89134u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89138u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89140u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89144u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89148u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89158u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89160u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8916Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89174u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89180u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89188u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89190u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89198u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89200u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89208u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89254u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89300u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89314u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8933Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8936Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89378u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89384u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89394u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89400u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89408u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8940Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89414u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8941Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89424u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89430u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89450u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89458u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89478u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89500u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89508u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89510u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89514u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8951Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89524u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8952Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8953Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8955Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89584u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89590u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89608u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89610u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8961Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8962Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8963Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89648u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89654u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89674u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89684u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89694u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89700u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8970Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89718u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8972Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89738u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8974Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89758u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89764u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89774u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8977Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89784u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8978Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89808u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8982Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8983Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89848u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8985Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89864u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89880u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89900u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8990Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8991Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89924u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89934u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8994Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89954u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89964u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8997Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8998Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89998u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89ACCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A008u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A038u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A064u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A094u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A100u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A108u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A118u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A120u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A12Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A140u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A148u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A154u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A15Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A164u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A16Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A180u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A190u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A21Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A224u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A23Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A24Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A258u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A260u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A27Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A288u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A308u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A410u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A430u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A514u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A548u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A564u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A56Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A574u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A598u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A60Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A614u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A628u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A638u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A654u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A66Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A678u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A71Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A804u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A814u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A824u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A83Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A848u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A87Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A880u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A900u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A914u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A91Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A924u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A92Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A934u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A978u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A988u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A994u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A998u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AECCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AFE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B018u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B068u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B088u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B100u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B164u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B210u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B24Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B254u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B264u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B278u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B284u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B290u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B310u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B350u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B36Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B378u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B41Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B438u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B440u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B44Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B484u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B50Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B528u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B548u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B568u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B570u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B57Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B59Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B610u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B61Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B624u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B65Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B668u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B67Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B684u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B818u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B824u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B888u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B908u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B938u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B95Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B980u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B990u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BECCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFFCu, &recomp_unit_0161, "recomp_unit_0161");
}
} // namespace psprecomp
