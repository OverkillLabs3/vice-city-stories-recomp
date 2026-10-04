#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0050[4093] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13,
    0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0,
    0, 0, 0, 82, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 162, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183,
    184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 206, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0,
    0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 220,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241,
    0, 0, 0, 242, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0,
    0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0,
    0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 0, 300, 301, 0,
    0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310,
    0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    316, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0,
    0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350,
    0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 359, 360, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0,
    0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 0,
    0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 390,
    0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0,
    399, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0,
    0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    445, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0,
    0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0,
    0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 481, 0, 0, 482, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490,
    0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497,
    0, 0, 498, 0, 499, 500, 0, 501, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 507, 0, 508, 509, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 516, 0, 517, 518, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520,
    0, 521, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0,
    0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0,
    534, 0, 0, 0, 535, 0, 0, 536, 537, 0, 538, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545,
    0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 552, 553, 0, 0, 0, 0, 0, 0, 554, 0,
    555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0,
    0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0,
    0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 580, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584,
    0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590, 591, 0, 0, 0, 0, 0, 0, 0,
    0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 597, 598, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0,
    602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0,
    608, 0, 609, 610, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 616, 0, 617, 0, 0, 618, 0, 619, 620, 0, 0,
    0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 627, 628, 0, 0, 0,
    0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 631, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0,
    0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0,
    640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 654, 0, 655, 0, 0, 0, 656, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 672, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677,
    0, 0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0,
    0, 0, 687, 0, 0, 0, 688, 689, 0, 690, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0,
    0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0,
    0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 714,
    715, 0, 0, 0, 0, 0, 0, 716, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725,
    0, 726, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 732, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0,
    0, 0, 737, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0,
    0, 745, 0, 746, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0,
    0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759,
    0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 766, 0, 767, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0,
    0, 775, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 0, 783,
    0, 784, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 791, 792, 0, 793, 0, 0, 794,
    0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 798, 799, 0, 800, 0, 0, 0, 0, 0, 0, 801, 802, 0, 0, 0, 803,
    804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0, 0, 0,
    0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 813, 0,
    0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 817, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822,
    0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 830, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 832, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834,
};
void recomp_unit_0050_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088CC000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0050[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CC000;
    case 2u: goto L_088CC00C;
    case 3u: goto L_088CC024;
    case 4u: goto L_088CC030;
    case 5u: goto L_088CC03C;
    case 6u: goto L_088CC068;
    case 7u: goto L_088CC084;
    case 8u: goto L_088CC0B0;
    case 9u: goto L_088CC0BC;
    case 10u: goto L_088CC0C4;
    case 11u: goto L_088CC0DC;
    case 12u: goto L_088CC0F0;
    case 13u: goto L_088CC0FC;
    case 14u: goto L_088CC110;
    case 15u: goto L_088CC11C;
    case 16u: goto L_088CC13C;
    case 17u: goto L_088CC148;
    case 18u: goto L_088CC160;
    case 19u: goto L_088CC164;
    case 20u: goto L_088CC178;
    case 21u: goto L_088CC190;
    case 22u: goto L_088CC198;
    case 23u: goto L_088CC1B0;
    case 24u: goto L_088CC1B4;
    case 25u: goto L_088CC1BC;
    case 26u: goto L_088CC1D4;
    case 27u: goto L_088CC1E4;
    case 28u: goto L_088CC1F0;
    case 29u: goto L_088CC224;
    case 30u: goto L_088CC23C;
    case 31u: goto L_088CC260;
    case 32u: goto L_088CC274;
    case 33u: goto L_088CC280;
    case 34u: goto L_088CC28C;
    case 35u: goto L_088CC2A0;
    case 36u: goto L_088CC2A8;
    case 37u: goto L_088CC2D4;
    case 38u: goto L_088CC2EC;
    case 39u: goto L_088CC314;
    case 40u: goto L_088CC324;
    case 41u: goto L_088CC330;
    case 42u: goto L_088CC374;
    case 43u: goto L_088CC380;
    case 44u: goto L_088CC390;
    case 45u: goto L_088CC3AC;
    case 46u: goto L_088CC3BC;
    case 47u: goto L_088CC3D4;
    case 48u: goto L_088CC418;
    case 49u: goto L_088CC428;
    case 50u: goto L_088CC430;
    case 51u: goto L_088CC468;
    case 52u: goto L_088CC484;
    case 53u: goto L_088CC4AC;
    case 54u: goto L_088CC4B8;
    case 55u: goto L_088CC4E4;
    case 56u: goto L_088CC500;
    case 57u: goto L_088CC52C;
    case 58u: goto L_088CC534;
    case 59u: goto L_088CC584;
    case 60u: goto L_088CC588;
    case 61u: goto L_088CC5B8;
    case 62u: goto L_088CC5C0;
    case 63u: goto L_088CC5C8;
    case 64u: goto L_088CC5F4;
    case 65u: goto L_088CC62C;
    case 66u: goto L_088CC638;
    case 67u: goto L_088CC650;
    case 68u: goto L_088CC65C;
    case 69u: goto L_088CC668;
    case 70u: goto L_088CC694;
    case 71u: goto L_088CC6B0;
    case 72u: goto L_088CC6DC;
    case 73u: goto L_088CC6E8;
    case 74u: goto L_088CC6F0;
    case 75u: goto L_088CC708;
    case 76u: goto L_088CC71C;
    case 77u: goto L_088CC728;
    case 78u: goto L_088CC73C;
    case 79u: goto L_088CC748;
    case 80u: goto L_088CC768;
    case 81u: goto L_088CC774;
    case 82u: goto L_088CC78C;
    case 83u: goto L_088CC790;
    case 84u: goto L_088CC7A4;
    case 85u: goto L_088CC7BC;
    case 86u: goto L_088CC7C4;
    case 87u: goto L_088CC7DC;
    case 88u: goto L_088CC7E0;
    case 89u: goto L_088CC7E8;
    case 90u: goto L_088CC800;
    case 91u: goto L_088CC810;
    case 92u: goto L_088CC81C;
    case 93u: goto L_088CC850;
    case 94u: goto L_088CC868;
    case 95u: goto L_088CC88C;
    case 96u: goto L_088CC8A0;
    case 97u: goto L_088CC8AC;
    case 98u: goto L_088CC8BC;
    case 99u: goto L_088CC8E8;
    case 100u: goto L_088CC900;
    case 101u: goto L_088CC928;
    case 102u: goto L_088CC938;
    case 103u: goto L_088CC97C;
    case 104u: goto L_088CC988;
    case 105u: goto L_088CC9BC;
    case 106u: goto L_088CC9D8;
    case 107u: goto L_088CC9EC;
    case 108u: goto L_088CCA14;
    case 109u: goto L_088CCA1C;
    case 110u: goto L_088CCA24;
    case 111u: goto L_088CCA50;
    case 112u: goto L_088CCA88;
    case 113u: goto L_088CCA94;
    case 114u: goto L_088CCAAC;
    case 115u: goto L_088CCAB8;
    case 116u: goto L_088CCAC4;
    case 117u: goto L_088CCAF0;
    case 118u: goto L_088CCB0C;
    case 119u: goto L_088CCB38;
    case 120u: goto L_088CCB44;
    case 121u: goto L_088CCB4C;
    case 122u: goto L_088CCB64;
    case 123u: goto L_088CCB78;
    case 124u: goto L_088CCB84;
    case 125u: goto L_088CCB98;
    case 126u: goto L_088CCBA4;
    case 127u: goto L_088CCBC4;
    case 128u: goto L_088CCBD0;
    case 129u: goto L_088CCBE8;
    case 130u: goto L_088CCBEC;
    case 131u: goto L_088CCC00;
    case 132u: goto L_088CCC18;
    case 133u: goto L_088CCC20;
    case 134u: goto L_088CCC38;
    case 135u: goto L_088CCC3C;
    case 136u: goto L_088CCC50;
    case 137u: goto L_088CCC5C;
    case 138u: goto L_088CCCB8;
    case 139u: goto L_088CCCC0;
    case 140u: goto L_088CCCF4;
    case 141u: goto L_088CCD08;
    case 142u: goto L_088CCD18;
    case 143u: goto L_088CCD24;
    case 144u: goto L_088CCD2C;
    case 145u: goto L_088CCD34;
    case 146u: goto L_088CCD44;
    case 147u: goto L_088CCD50;
    case 148u: goto L_088CCD58;
    case 149u: goto L_088CCD5C;
    case 150u: goto L_088CCD9C;
    case 151u: goto L_088CCDFC;
    case 152u: goto L_088CCE0C;
    case 153u: goto L_088CCE18;
    case 154u: goto L_088CCE28;
    case 155u: goto L_088CCE34;
    case 156u: goto L_088CCE3C;
    case 157u: goto L_088CCE44;
    case 158u: goto L_088CCE50;
    case 159u: goto L_088CCE5C;
    case 160u: goto L_088CCE64;
    case 161u: goto L_088CCE90;
    case 162u: goto L_088CCE98;
    case 163u: goto L_088CCE9C;
    case 164u: goto L_088CCEA8;
    case 165u: goto L_088CCEB8;
    case 166u: goto L_088CCF08;
    case 167u: goto L_088CCF18;
    case 168u: goto L_088CCF28;
    case 169u: goto L_088CCF3C;
    case 170u: goto L_088CCF44;
    case 171u: goto L_088CCF4C;
    case 172u: goto L_088CCF6C;
    case 173u: goto L_088CCF8C;
    case 174u: goto L_088CCFA4;
    case 175u: goto L_088CCFF4;
    case 176u: goto L_088CD004;
    case 177u: goto L_088CD014;
    case 178u: goto L_088CD028;
    case 179u: goto L_088CD030;
    case 180u: goto L_088CD044;
    case 181u: goto L_088CD05C;
    case 182u: goto L_088CD064;
    case 183u: goto L_088CD07C;
    case 184u: goto L_088CD080;
    case 185u: goto L_088CD094;
    case 186u: goto L_088CD0AC;
    case 187u: goto L_088CD0B4;
    case 188u: goto L_088CD0CC;
    case 189u: goto L_088CD0D0;
    case 190u: goto L_088CD0D8;
    case 191u: goto L_088CD0E8;
    case 192u: goto L_088CD104;
    case 193u: goto L_088CD114;
    case 194u: goto L_088CD168;
    case 195u: goto L_088CD170;
    case 196u: goto L_088CD184;
    case 197u: goto L_088CD190;
    case 198u: goto L_088CD198;
    case 199u: goto L_088CD1A8;
    case 200u: goto L_088CD1B4;
    case 201u: goto L_088CD1C0;
    case 202u: goto L_088CD1FC;
    case 203u: goto L_088CD204;
    case 204u: goto L_088CD21C;
    case 205u: goto L_088CD264;
    case 206u: goto L_088CD268;
    case 207u: goto L_088CD270;
    case 208u: goto L_088CD2B0;
    case 209u: goto L_088CD2E4;
    case 210u: goto L_088CD2F0;
    case 211u: goto L_088CD308;
    case 212u: goto L_088CD310;
    case 213u: goto L_088CD31C;
    case 214u: goto L_088CD324;
    case 215u: goto L_088CD32C;
    case 216u: goto L_088CD340;
    case 217u: goto L_088CD358;
    case 218u: goto L_088CD360;
    case 219u: goto L_088CD378;
    case 220u: goto L_088CD37C;
    case 221u: goto L_088CD390;
    case 222u: goto L_088CD3A8;
    case 223u: goto L_088CD3B0;
    case 224u: goto L_088CD3C8;
    case 225u: goto L_088CD3CC;
    case 226u: goto L_088CD3D4;
    case 227u: goto L_088CD3F4;
    case 228u: goto L_088CD404;
    case 229u: goto L_088CD418;
    case 230u: goto L_088CD42C;
    case 231u: goto L_088CD430;
    case 232u: goto L_088CD438;
    case 233u: goto L_088CD448;
    case 234u: goto L_088CD464;
    case 235u: goto L_088CD474;
    case 236u: goto L_088CD47C;
    case 237u: goto L_088CD494;
    case 238u: goto L_088CD4AC;
    case 239u: goto L_088CD4EC;
    case 240u: goto L_088CD4F4;
    case 241u: goto L_088CD4FC;
    case 242u: goto L_088CD50C;
    case 243u: goto L_088CD510;
    case 244u: goto L_088CD51C;
    case 245u: goto L_088CD528;
    case 246u: goto L_088CD530;
    case 247u: goto L_088CD55C;
    case 248u: goto L_088CD5A0;
    case 249u: goto L_088CD5C0;
    case 250u: goto L_088CD5DC;
    case 251u: goto L_088CD620;
    case 252u: goto L_088CD628;
    case 253u: goto L_088CD630;
    case 254u: goto L_088CD634;
    case 255u: goto L_088CD644;
    case 256u: goto L_088CD654;
    case 257u: goto L_088CD65C;
    case 258u: goto L_088CD668;
    case 259u: goto L_088CD678;
    case 260u: goto L_088CD688;
    case 261u: goto L_088CD694;
    case 262u: goto L_088CD6C4;
    case 263u: goto L_088CD6D0;
    case 264u: goto L_088CD6DC;
    case 265u: goto L_088CD704;
    case 266u: goto L_088CD734;
    case 267u: goto L_088CD750;
    case 268u: goto L_088CD770;
    case 269u: goto L_088CD778;
    case 270u: goto L_088CD784;
    case 271u: goto L_088CD78C;
    case 272u: goto L_088CD79C;
    case 273u: goto L_088CD7B8;
    case 274u: goto L_088CD7C8;
    case 275u: goto L_088CD7EC;
    case 276u: goto L_088CD7F8;
    case 277u: goto L_088CD808;
    case 278u: goto L_088CD81C;
    case 279u: goto L_088CD824;
    case 280u: goto L_088CD838;
    case 281u: goto L_088CD848;
    case 282u: goto L_088CD84C;
    case 283u: goto L_088CD860;
    case 284u: goto L_088CD87C;
    case 285u: goto L_088CD88C;
    case 286u: goto L_088CD8A8;
    case 287u: goto L_088CD8B0;
    case 288u: goto L_088CD8C0;
    case 289u: goto L_088CD8CC;
    case 290u: goto L_088CD8DC;
    case 291u: goto L_088CD934;
    case 292u: goto L_088CD96C;
    case 293u: goto L_088CD974;
    case 294u: goto L_088CD97C;
    case 295u: goto L_088CD9B8;
    case 296u: goto L_088CD9C8;
    case 297u: goto L_088CD9D4;
    case 298u: goto L_088CD9DC;
    case 299u: goto L_088CD9E8;
    case 300u: goto L_088CD9F4;
    case 301u: goto L_088CD9F8;
    case 302u: goto L_088CDA04;
    case 303u: goto L_088CDA0C;
    case 304u: goto L_088CDA28;
    case 305u: goto L_088CDA38;
    case 306u: goto L_088CDA70;
    case 307u: goto L_088CDAA0;
    case 308u: goto L_088CDAB0;
    case 309u: goto L_088CDAE4;
    case 310u: goto L_088CDAFC;
    case 311u: goto L_088CDB08;
    case 312u: goto L_088CDB1C;
    case 313u: goto L_088CDB2C;
    case 314u: goto L_088CDB40;
    case 315u: goto L_088CDB78;
    case 316u: goto L_088CDB80;
    case 317u: goto L_088CDB84;
    case 318u: goto L_088CDBA4;
    case 319u: goto L_088CDBD8;
    case 320u: goto L_088CDBE4;
    case 321u: goto L_088CDBEC;
    case 322u: goto L_088CDBFC;
    case 323u: goto L_088CDC28;
    case 324u: goto L_088CDC30;
    case 325u: goto L_088CDC38;
    case 326u: goto L_088CDC40;
    case 327u: goto L_088CDC4C;
    case 328u: goto L_088CDC54;
    case 329u: goto L_088CDC60;
    case 330u: goto L_088CDC78;
    case 331u: goto L_088CDC84;
    case 332u: goto L_088CDC90;
    case 333u: goto L_088CDC98;
    case 334u: goto L_088CDCA4;
    case 335u: goto L_088CDCAC;
    case 336u: goto L_088CDCBC;
    case 337u: goto L_088CDCCC;
    case 338u: goto L_088CDCD4;
    case 339u: goto L_088CDCE0;
    case 340u: goto L_088CDCF0;
    case 341u: goto L_088CDD0C;
    case 342u: goto L_088CDD1C;
    case 343u: goto L_088CDD28;
    case 344u: goto L_088CDD30;
    case 345u: goto L_088CDD40;
    case 346u: goto L_088CDD48;
    case 347u: goto L_088CDD54;
    case 348u: goto L_088CDD64;
    case 349u: goto L_088CDD70;
    case 350u: goto L_088CDD7C;
    case 351u: goto L_088CDD88;
    case 352u: goto L_088CDD90;
    case 353u: goto L_088CDD98;
    case 354u: goto L_088CDDA0;
    case 355u: goto L_088CDDAC;
    case 356u: goto L_088CDDB4;
    case 357u: goto L_088CDDBC;
    case 358u: goto L_088CDDC4;
    case 359u: goto L_088CDDD0;
    case 360u: goto L_088CDDD4;
    case 361u: goto L_088CDDE0;
    case 362u: goto L_088CDDE8;
    case 363u: goto L_088CDDF0;
    case 364u: goto L_088CDE14;
    case 365u: goto L_088CDE38;
    case 366u: goto L_088CDE40;
    case 367u: goto L_088CDE48;
    case 368u: goto L_088CDE68;
    case 369u: goto L_088CDE70;
    case 370u: goto L_088CDE78;
    case 371u: goto L_088CDE8C;
    case 372u: goto L_088CDE9C;
    case 373u: goto L_088CDEB4;
    case 374u: goto L_088CDEBC;
    case 375u: goto L_088CDEC4;
    case 376u: goto L_088CDECC;
    case 377u: goto L_088CDEDC;
    case 378u: goto L_088CDEE4;
    case 379u: goto L_088CDEEC;
    case 380u: goto L_088CDEF4;
    case 381u: goto L_088CDF08;
    case 382u: goto L_088CDF10;
    case 383u: goto L_088CDF24;
    case 384u: goto L_088CDF2C;
    case 385u: goto L_088CDF3C;
    case 386u: goto L_088CDF48;
    case 387u: goto L_088CDF58;
    case 388u: goto L_088CDF60;
    case 389u: goto L_088CDF74;
    case 390u: goto L_088CDF7C;
    case 391u: goto L_088CDF90;
    case 392u: goto L_088CDF98;
    case 393u: goto L_088CDFA8;
    case 394u: goto L_088CDFB4;
    case 395u: goto L_088CDFC4;
    case 396u: goto L_088CDFCC;
    case 397u: goto L_088CDFDC;
    case 398u: goto L_088CDFEC;
    case 399u: goto L_088CE000;
    case 400u: goto L_088CE004;
    case 401u: goto L_088CE018;
    case 402u: goto L_088CE020;
    case 403u: goto L_088CE030;
    case 404u: goto L_088CE044;
    case 405u: goto L_088CE048;
    case 406u: goto L_088CE05C;
    case 407u: goto L_088CE070;
    case 408u: goto L_088CE084;
    case 409u: goto L_088CE0A0;
    case 410u: goto L_088CE0A8;
    case 411u: goto L_088CE0B0;
    case 412u: goto L_088CE0F0;
    case 413u: goto L_088CE100;
    case 414u: goto L_088CE118;
    case 415u: goto L_088CE130;
    case 416u: goto L_088CE140;
    case 417u: goto L_088CE160;
    case 418u: goto L_088CE19C;
    case 419u: goto L_088CE1A4;
    case 420u: goto L_088CE1AC;
    case 421u: goto L_088CE1B4;
    case 422u: goto L_088CE1CC;
    case 423u: goto L_088CE1D8;
    case 424u: goto L_088CE1E0;
    case 425u: goto L_088CE1E8;
    case 426u: goto L_088CE1F8;
    case 427u: goto L_088CE200;
    case 428u: goto L_088CE224;
    case 429u: goto L_088CE234;
    case 430u: goto L_088CE248;
    case 431u: goto L_088CE250;
    case 432u: goto L_088CE274;
    case 433u: goto L_088CE284;
    case 434u: goto L_088CE298;
    case 435u: goto L_088CE2A8;
    case 436u: goto L_088CE2B8;
    case 437u: goto L_088CE2E4;
    case 438u: goto L_088CE2EC;
    case 439u: goto L_088CE304;
    case 440u: goto L_088CE30C;
    case 441u: goto L_088CE314;
    case 442u: goto L_088CE31C;
    case 443u: goto L_088CE358;
    case 444u: goto L_088CE368;
    case 445u: goto L_088CE380;
    case 446u: goto L_088CE388;
    case 447u: goto L_088CE39C;
    case 448u: goto L_088CE3AC;
    case 449u: goto L_088CE3B4;
    case 450u: goto L_088CE3D8;
    case 451u: goto L_088CE3E8;
    case 452u: goto L_088CE404;
    case 453u: goto L_088CE414;
    case 454u: goto L_088CE450;
    case 455u: goto L_088CE460;
    case 456u: goto L_088CE478;
    case 457u: goto L_088CE484;
    case 458u: goto L_088CE498;
    case 459u: goto L_088CE4AC;
    case 460u: goto L_088CE4E4;
    case 461u: goto L_088CE4F4;
    case 462u: goto L_088CE50C;
    case 463u: goto L_088CE518;
    case 464u: goto L_088CE528;
    case 465u: goto L_088CE530;
    case 466u: goto L_088CE538;
    case 467u: goto L_088CE544;
    case 468u: goto L_088CE55C;
    case 469u: goto L_088CE56C;
    case 470u: goto L_088CE590;
    case 471u: goto L_088CE5BC;
    case 472u: goto L_088CE5D4;
    case 473u: goto L_088CE5DC;
    case 474u: goto L_088CE5E8;
    case 475u: goto L_088CE61C;
    case 476u: goto L_088CE624;
    case 477u: goto L_088CE628;
    case 478u: goto L_088CE654;
    case 479u: goto L_088CE6D4;
    case 480u: goto L_088CE6DC;
    case 481u: goto L_088CE6E0;
    case 482u: goto L_088CE6EC;
    case 483u: goto L_088CE70C;
    case 484u: goto L_088CE718;
    case 485u: goto L_088CE720;
    case 486u: goto L_088CE730;
    case 487u: goto L_088CE73C;
    case 488u: goto L_088CE748;
    case 489u: goto L_088CE75C;
    case 490u: goto L_088CE77C;
    case 491u: goto L_088CE788;
    case 492u: goto L_088CE790;
    case 493u: goto L_088CE79C;
    case 494u: goto L_088CE7D0;
    case 495u: goto L_088CE7E0;
    case 496u: goto L_088CE7F0;
    case 497u: goto L_088CE7FC;
    case 498u: goto L_088CE808;
    case 499u: goto L_088CE810;
    case 500u: goto L_088CE814;
    case 501u: goto L_088CE81C;
    case 502u: goto L_088CE824;
    case 503u: goto L_088CE830;
    case 504u: goto L_088CE83C;
    case 505u: goto L_088CE844;
    case 506u: goto L_088CE84C;
    case 507u: goto L_088CE850;
    case 508u: goto L_088CE858;
    case 509u: goto L_088CE85C;
    case 510u: goto L_088CE880;
    case 511u: goto L_088CE8A0;
    case 512u: goto L_088CE8AC;
    case 513u: goto L_088CE8B8;
    case 514u: goto L_088CE8C4;
    case 515u: goto L_088CE8D0;
    case 516u: goto L_088CE8D8;
    case 517u: goto L_088CE8E0;
    case 518u: goto L_088CE8E4;
    case 519u: goto L_088CE930;
    case 520u: goto L_088CE97C;
    case 521u: goto L_088CE984;
    case 522u: goto L_088CE990;
    case 523u: goto L_088CE9A0;
    case 524u: goto L_088CE9A8;
    case 525u: goto L_088CE9B8;
    case 526u: goto L_088CE9D8;
    case 527u: goto L_088CE9F8;
    case 528u: goto L_088CEA10;
    case 529u: goto L_088CEA20;
    case 530u: goto L_088CEA34;
    case 531u: goto L_088CEA3C;
    case 532u: goto L_088CEA5C;
    case 533u: goto L_088CEA74;
    case 534u: goto L_088CEA80;
    case 535u: goto L_088CEA90;
    case 536u: goto L_088CEA9C;
    case 537u: goto L_088CEAA0;
    case 538u: goto L_088CEAA8;
    case 539u: goto L_088CEAAC;
    case 540u: goto L_088CEABC;
    case 541u: goto L_088CEACC;
    case 542u: goto L_088CEAD4;
    case 543u: goto L_088CEADC;
    case 544u: goto L_088CEAE4;
    case 545u: goto L_088CEAFC;
    case 546u: goto L_088CEB08;
    case 547u: goto L_088CEB18;
    case 548u: goto L_088CEB28;
    case 549u: goto L_088CEB34;
    case 550u: goto L_088CEB3C;
    case 551u: goto L_088CEB48;
    case 552u: goto L_088CEB58;
    case 553u: goto L_088CEB5C;
    case 554u: goto L_088CEB78;
    case 555u: goto L_088CEB80;
    case 556u: goto L_088CEB98;
    case 557u: goto L_088CEBAC;
    case 558u: goto L_088CEBB8;
    case 559u: goto L_088CEBC8;
    case 560u: goto L_088CEBDC;
    case 561u: goto L_088CEBEC;
    case 562u: goto L_088CEC10;
    case 563u: goto L_088CEC34;
    case 564u: goto L_088CEC40;
    case 565u: goto L_088CEC54;
    case 566u: goto L_088CEC64;
    case 567u: goto L_088CEC6C;
    case 568u: goto L_088CEC78;
    case 569u: goto L_088CEC94;
    case 570u: goto L_088CECA0;
    case 571u: goto L_088CECC4;
    case 572u: goto L_088CECCC;
    case 573u: goto L_088CECE0;
    case 574u: goto L_088CED04;
    case 575u: goto L_088CED10;
    case 576u: goto L_088CED1C;
    case 577u: goto L_088CED28;
    case 578u: goto L_088CED30;
    case 579u: goto L_088CED48;
    case 580u: goto L_088CED50;
    case 581u: goto L_088CED54;
    case 582u: goto L_088CED60;
    case 583u: goto L_088CED70;
    case 584u: goto L_088CED7C;
    case 585u: goto L_088CEDA0;
    case 586u: goto L_088CEDAC;
    case 587u: goto L_088CEDBC;
    case 588u: goto L_088CEDC4;
    case 589u: goto L_088CEDD0;
    case 590u: goto L_088CEDDC;
    case 591u: goto L_088CEDE0;
    case 592u: goto L_088CEE04;
    case 593u: goto L_088CEE0C;
    case 594u: goto L_088CEE18;
    case 595u: goto L_088CEE2C;
    case 596u: goto L_088CEE34;
    case 597u: goto L_088CEE3C;
    case 598u: goto L_088CEE40;
    case 599u: goto L_088CEE50;
    case 600u: goto L_088CEE58;
    case 601u: goto L_088CEE74;
    case 602u: goto L_088CEE80;
    case 603u: goto L_088CEE88;
    case 604u: goto L_088CEEAC;
    case 605u: goto L_088CEEB8;
    case 606u: goto L_088CEED8;
    case 607u: goto L_088CEEF4;
    case 608u: goto L_088CEF00;
    case 609u: goto L_088CEF08;
    case 610u: goto L_088CEF0C;
    case 611u: goto L_088CEF14;
    case 612u: goto L_088CEF1C;
    case 613u: goto L_088CEF28;
    case 614u: goto L_088CEF44;
    case 615u: goto L_088CEF50;
    case 616u: goto L_088CEF54;
    case 617u: goto L_088CEF5C;
    case 618u: goto L_088CEF68;
    case 619u: goto L_088CEF70;
    case 620u: goto L_088CEF74;
    case 621u: goto L_088CEF84;
    case 622u: goto L_088CEF94;
    case 623u: goto L_088CEFA0;
    case 624u: goto L_088CEFC0;
    case 625u: goto L_088CEFD0;
    case 626u: goto L_088CEFE4;
    case 627u: goto L_088CEFEC;
    case 628u: goto L_088CEFF0;
    case 629u: goto L_088CF00C;
    case 630u: goto L_088CF01C;
    case 631u: goto L_088CF030;
    case 632u: goto L_088CF034;
    case 633u: goto L_088CF04C;
    case 634u: goto L_088CF068;
    case 635u: goto L_088CF078;
    case 636u: goto L_088CF090;
    case 637u: goto L_088CF0B0;
    case 638u: goto L_088CF0BC;
    case 639u: goto L_088CF0F0;
    case 640u: goto L_088CF100;
    case 641u: goto L_088CF118;
    case 642u: goto L_088CF124;
    case 643u: goto L_088CF128;
    case 644u: goto L_088CF130;
    case 645u: goto L_088CF148;
    case 646u: goto L_088CF15C;
    case 647u: goto L_088CF170;
    case 648u: goto L_088CF178;
    case 649u: goto L_088CF19C;
    case 650u: goto L_088CF1A4;
    case 651u: goto L_088CF1C0;
    case 652u: goto L_088CF1D8;
    case 653u: goto L_088CF1F4;
    case 654u: goto L_088CF204;
    case 655u: goto L_088CF20C;
    case 656u: goto L_088CF21C;
    case 657u: goto L_088CF220;
    case 658u: goto L_088CF228;
    case 659u: goto L_088CF230;
    case 660u: goto L_088CF238;
    case 661u: goto L_088CF25C;
    case 662u: goto L_088CF268;
    case 663u: goto L_088CF280;
    case 664u: goto L_088CF2AC;
    case 665u: goto L_088CF2C0;
    case 666u: goto L_088CF2D4;
    case 667u: goto L_088CF2E4;
    case 668u: goto L_088CF30C;
    case 669u: goto L_088CF318;
    case 670u: goto L_088CF324;
    case 671u: goto L_088CF32C;
    case 672u: goto L_088CF330;
    case 673u: goto L_088CF340;
    case 674u: goto L_088CF348;
    case 675u: goto L_088CF354;
    case 676u: goto L_088CF35C;
    case 677u: goto L_088CF37C;
    case 678u: goto L_088CF388;
    case 679u: goto L_088CF394;
    case 680u: goto L_088CF39C;
    case 681u: goto L_088CF3A4;
    case 682u: goto L_088CF3C0;
    case 683u: goto L_088CF3CC;
    case 684u: goto L_088CF3D4;
    case 685u: goto L_088CF3E4;
    case 686u: goto L_088CF3EC;
    case 687u: goto L_088CF408;
    case 688u: goto L_088CF418;
    case 689u: goto L_088CF41C;
    case 690u: goto L_088CF424;
    case 691u: goto L_088CF430;
    case 692u: goto L_088CF444;
    case 693u: goto L_088CF454;
    case 694u: goto L_088CF46C;
    case 695u: goto L_088CF478;
    case 696u: goto L_088CF490;
    case 697u: goto L_088CF49C;
    case 698u: goto L_088CF4B8;
    case 699u: goto L_088CF4D4;
    case 700u: goto L_088CF4E4;
    case 701u: goto L_088CF4F4;
    case 702u: goto L_088CF504;
    case 703u: goto L_088CF510;
    case 704u: goto L_088CF520;
    case 705u: goto L_088CF530;
    case 706u: goto L_088CF538;
    case 707u: goto L_088CF54C;
    case 708u: goto L_088CF55C;
    case 709u: goto L_088CF598;
    case 710u: goto L_088CF5A8;
    case 711u: goto L_088CF5C0;
    case 712u: goto L_088CF5EC;
    case 713u: goto L_088CF5F4;
    case 714u: goto L_088CF5FC;
    case 715u: goto L_088CF600;
    case 716u: goto L_088CF61C;
    case 717u: goto L_088CF620;
    case 718u: goto L_088CF644;
    case 719u: goto L_088CF654;
    case 720u: goto L_088CF66C;
    case 721u: goto L_088CF698;
    case 722u: goto L_088CF6B4;
    case 723u: goto L_088CF6C4;
    case 724u: goto L_088CF6D8;
    case 725u: goto L_088CF6FC;
    case 726u: goto L_088CF704;
    case 727u: goto L_088CF708;
    case 728u: goto L_088CF710;
    case 729u: goto L_088CF718;
    case 730u: goto L_088CF738;
    case 731u: goto L_088CF74C;
    case 732u: goto L_088CF750;
    case 733u: goto L_088CF754;
    case 734u: goto L_088CF774;
    case 735u: goto L_088CF7BC;
    case 736u: goto L_088CF7F8;
    case 737u: goto L_088CF808;
    case 738u: goto L_088CF810;
    case 739u: goto L_088CF818;
    case 740u: goto L_088CF828;
    case 741u: goto L_088CF838;
    case 742u: goto L_088CF844;
    case 743u: goto L_088CF868;
    case 744u: goto L_088CF870;
    case 745u: goto L_088CF884;
    case 746u: goto L_088CF88C;
    case 747u: goto L_088CF894;
    case 748u: goto L_088CF89C;
    case 749u: goto L_088CF8AC;
    case 750u: goto L_088CF8C4;
    case 751u: goto L_088CF8E8;
    case 752u: goto L_088CF8F0;
    case 753u: goto L_088CF904;
    case 754u: goto L_088CF90C;
    case 755u: goto L_088CF914;
    case 756u: goto L_088CF91C;
    case 757u: goto L_088CF924;
    case 758u: goto L_088CF960;
    case 759u: goto L_088CF97C;
    case 760u: goto L_088CF98C;
    case 761u: goto L_088CF9B8;
    case 762u: goto L_088CF9C8;
    case 763u: goto L_088CFA0C;
    case 764u: goto L_088CFA28;
    case 765u: goto L_088CFA50;
    case 766u: goto L_088CFA94;
    case 767u: goto L_088CFA9C;
    case 768u: goto L_088CFAA0;
    case 769u: goto L_088CFAC0;
    case 770u: goto L_088CFB24;
    case 771u: goto L_088CFB30;
    case 772u: goto L_088CFB3C;
    case 773u: goto L_088CFB54;
    case 774u: goto L_088CFB6C;
    case 775u: goto L_088CFB84;
    case 776u: goto L_088CFB8C;
    case 777u: goto L_088CFB94;
    case 778u: goto L_088CFBA8;
    case 779u: goto L_088CFBB8;
    case 780u: goto L_088CFBCC;
    case 781u: goto L_088CFBE4;
    case 782u: goto L_088CFBEC;
    case 783u: goto L_088CFBFC;
    case 784u: goto L_088CFC04;
    case 785u: goto L_088CFC0C;
    case 786u: goto L_088CFC14;
    case 787u: goto L_088CFC20;
    case 788u: goto L_088CFC28;
    case 789u: goto L_088CFC44;
    case 790u: goto L_088CFC4C;
    case 791u: goto L_088CFC64;
    case 792u: goto L_088CFC68;
    case 793u: goto L_088CFC70;
    case 794u: goto L_088CFC7C;
    case 795u: goto L_088CFC84;
    case 796u: goto L_088CFCA0;
    case 797u: goto L_088CFCA8;
    case 798u: goto L_088CFCC0;
    case 799u: goto L_088CFCC4;
    case 800u: goto L_088CFCCC;
    case 801u: goto L_088CFCE8;
    case 802u: goto L_088CFCEC;
    case 803u: goto L_088CFCFC;
    case 804u: goto L_088CFD00;
    case 805u: goto L_088CFD18;
    case 806u: goto L_088CFD28;
    case 807u: goto L_088CFD58;
    case 808u: goto L_088CFD68;
    case 809u: goto L_088CFD8C;
    case 810u: goto L_088CFDA4;
    case 811u: goto L_088CFDD8;
    case 812u: goto L_088CFDE4;
    case 813u: goto L_088CFDF8;
    case 814u: goto L_088CFE10;
    case 815u: goto L_088CFE30;
    case 816u: goto L_088CFE38;
    case 817u: goto L_088CFE84;
    case 818u: goto L_088CFE90;
    case 819u: goto L_088CFEA4;
    case 820u: goto L_088CFEB0;
    case 821u: goto L_088CFEB4;
    case 822u: goto L_088CFEFC;
    case 823u: goto L_088CFF08;
    case 824u: goto L_088CFF1C;
    case 825u: goto L_088CFF30;
    case 826u: goto L_088CFF40;
    case 827u: goto L_088CFF48;
    case 828u: goto L_088CFF68;
    case 829u: goto L_088CFF74;
    case 830u: goto L_088CFF78;
    case 831u: goto L_088CFFA4;
    case 832u: goto L_088CFFAC;
    case 833u: goto L_088CFFB0;
    case 834u: goto L_088CFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CC000:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC024;
      }
      goto L_088CC00C;
    }
L_088CC00C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_088CC024;
L_088CC024:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088CC030;
    }
    goto L_088CC030;
L_088CC030:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC0C4;
      }
      goto L_088CC03C;
    }
L_088CC03C:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 14287u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 3713u);
      if (branch_taken) {
          goto L_088CC084;
      }
      goto L_088CC068;
    }
L_088CC068:
    ctx.gpr[5] = (17768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC0B0;
      }
      goto L_088CC084;
    }
L_088CC084:
    ctx.gpr[5] = (17768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_088CC0B0;
L_088CC0B0:
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088CC0BC;
    }
    goto L_088CC0BC;
L_088CC0BC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CC0C4;
L_088CC0C4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC164;
      }
      goto L_088CC0DC;
    }
L_088CC0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088CC0FC;
      }
      goto L_088CC0F0;
    }
L_088CC0F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088CC0FC;
L_088CC0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088CC11C;
      }
      goto L_088CC110;
    }
L_088CC110:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088CC11C;
L_088CC11C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088CC148;
      }
      goto L_088CC13C;
    }
L_088CC13C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC160;
      }
      goto L_088CC148;
    }
L_088CC148:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC160;
L_088CC160:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CC164;
L_088CC164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC198;
      }
      goto L_088CC178;
    }
L_088CC178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CC190;
    }
    goto L_088CC190;
L_088CC190:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC1B4;
      }
      goto L_088CC198;
    }
L_088CC198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-197));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CC1B0;
    }
    goto L_088CC1B0;
L_088CC1B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CC1B4;
L_088CC1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23760), ctx.gpr[4]);
    goto L_088CC1BC;
L_088CC1BC:
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CC1D4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CC1D4u) goto L_088CC1D4;
    return;
L_088CC1D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CC374;
      }
      goto L_088CC1E4;
    }
L_088CC1E4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC274;
      }
      goto L_088CC1F0;
    }
L_088CC1F0:
    ctx.gpr[4] = (0u | 5956u);
    ctx.gpr[5] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (18042u << 16u);
      if (branch_taken) {
          goto L_088CC23C;
      }
      goto L_088CC224;
    }
L_088CC224:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC260;
      }
      goto L_088CC23C;
    }
L_088CC23C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC260;
L_088CC260:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC324;
      }
      goto L_088CC274;
    }
L_088CC274:
    ctx.gpr[4] = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC2A8;
      }
      goto L_088CC280;
    }
L_088CC280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC2A0;
      }
      goto L_088CC28C;
    }
L_088CC28C:
    ctx.gpr[4] = (0u | 5966u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088CC324;
      }
      goto L_088CC2A0;
    }
L_088CC2A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC324;
      }
      goto L_088CC2A8;
    }
L_088CC2A8:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 45u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC2EC;
      }
      goto L_088CC2D4;
    }
L_088CC2D4:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC314;
      }
      goto L_088CC2EC;
    }
L_088CC2EC:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC314;
L_088CC314:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CC324;
L_088CC324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC374;
      }
      goto L_088CC330;
    }
L_088CC330:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17164u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CC374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CC374u) goto L_088CC374;
    return;
L_088CC374:
    ctx.gpr[4] = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC380;
    }
L_088CC380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC390;
    }
L_088CC390:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC3AC;
    }
L_088CC3AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC3BC;
    }
L_088CC3BC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC3D4;
    }
L_088CC3D4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088CC418u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CC418u) goto L_088CC418;
    return;
L_088CC418:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_088CC588;
      }
      goto L_088CC428;
    }
L_088CC428:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_088CC4B8;
      }
      goto L_088CC430;
    }
L_088CC430:
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (0u | 5958u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_088CC484;
      }
      goto L_088CC468;
    }
L_088CC468:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC4AC;
      }
      goto L_088CC484;
    }
L_088CC484:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC4AC;
L_088CC4AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC534;
      }
      goto L_088CC4B8;
    }
L_088CC4B8:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 50u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC500;
      }
      goto L_088CC4E4;
    }
L_088CC4E4:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC52C;
      }
      goto L_088CC500;
    }
L_088CC500:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC52C;
L_088CC52C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CC534;
L_088CC534:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CC584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CC584u) goto L_088CC584;
    return;
L_088CC584:
    ctx.gpr[4] = (16128u << 16u);
    goto L_088CC588;
L_088CC588:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] | ctx.gpr[19]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CC7E8;
      }
      goto L_088CC5B8;
    }
L_088CC5B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_088CC5C8;
      }
      goto L_088CC5C0;
    }
L_088CC5C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[5] = (17640u << 16u);
      if (branch_taken) {
          goto L_088CC668;
      }
      goto L_088CC5C8;
    }
L_088CC5C8:
    ctx.gpr[5] = (17545u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (0u | 9000u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 1102u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
        goto L_088CC5F4;
    }
    goto L_088CC5F4;
L_088CC5F4:
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (20224u << 16u);
      if (branch_taken) {
          goto L_088CC638;
      }
      goto L_088CC62C;
    }
L_088CC62C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC650;
      }
      goto L_088CC638;
    }
L_088CC638:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_088CC650;
L_088CC650:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088CC65C;
    }
    goto L_088CC65C;
L_088CC65C:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CC6F0;
      }
      goto L_088CC668;
    }
L_088CC668:
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (0u | 7143u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 1857u);
      if (branch_taken) {
          goto L_088CC6B0;
      }
      goto L_088CC694;
    }
L_088CC694:
    ctx.gpr[6] = (17640u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC6DC;
      }
      goto L_088CC6B0;
    }
L_088CC6B0:
    ctx.gpr[6] = (17640u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_088CC6DC;
L_088CC6DC:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088CC6E8;
    }
    goto L_088CC6E8;
L_088CC6E8:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088CC6F0;
L_088CC6F0:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC790;
      }
      goto L_088CC708;
    }
L_088CC708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088CC728;
      }
      goto L_088CC71C;
    }
L_088CC71C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088CC728;
L_088CC728:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088CC748;
      }
      goto L_088CC73C;
    }
L_088CC73C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088CC748;
L_088CC748:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_088CC774;
      }
      goto L_088CC768;
    }
L_088CC768:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC78C;
      }
      goto L_088CC774;
    }
L_088CC774:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_088CC78C;
L_088CC78C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088CC790;
L_088CC790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CC7C4;
      }
      goto L_088CC7A4;
    }
L_088CC7A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(98));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CC7BC;
    }
    goto L_088CC7BC;
L_088CC7BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CC7E0;
      }
      goto L_088CC7C4;
    }
L_088CC7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-98));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CC7DC;
    }
    goto L_088CC7DC;
L_088CC7DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088CC7E0;
L_088CC7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23756), ctx.gpr[5]);
    goto L_088CC7E8;
L_088CC7E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088CC800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CC800u) goto L_088CC800;
    return;
L_088CC800:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CC97C;
      }
      goto L_088CC810;
    }
L_088CC810:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC8A0;
      }
      goto L_088CC81C;
    }
L_088CC81C:
    ctx.gpr[4] = (0u | 5957u);
    ctx.gpr[5] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (18042u << 16u);
      if (branch_taken) {
          goto L_088CC868;
      }
      goto L_088CC850;
    }
L_088CC850:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC88C;
      }
      goto L_088CC868;
    }
L_088CC868:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC88C;
L_088CC88C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CC938;
      }
      goto L_088CC8A0;
    }
L_088CC8A0:
    ctx.gpr[4] = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC8BC;
      }
      goto L_088CC8AC;
    }
L_088CC8AC:
    ctx.gpr[4] = (0u | 306u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC938;
      }
      goto L_088CC8BC;
    }
L_088CC8BC:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 46u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088CC900;
      }
      goto L_088CC8E8;
    }
L_088CC8E8:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CC928;
      }
      goto L_088CC900;
    }
L_088CC900:
    ctx.gpr[4] = (18042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CC928;
L_088CC928:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CC938;
L_088CC938:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17164u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CC97Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CC97Cu) goto L_088CC97C;
    return;
L_088CC97C:
    ctx.gpr[4] = (ctx.gpr[20] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_088CCCC0;
      }
      goto L_088CC988;
    }
L_088CC988:
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
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CC9BC;
    }
L_088CC9BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CC9D8;
    }
L_088CC9D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CC9EC;
    }
L_088CC9EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088CCA14u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CCA14u) goto L_088CCA14;
    return;
L_088CCA14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088CCA24;
      }
      goto L_088CCA1C;
    }
L_088CCA1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[4] = (17768u << 16u);
      if (branch_taken) {
          goto L_088CCAC4;
      }
      goto L_088CCA24;
    }
L_088CCA24:
    ctx.gpr[4] = (17673u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 18000u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 2204u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_088CCA50;
    }
    goto L_088CCA50;
L_088CCA50:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_088CCA94;
      }
      goto L_088CCA88;
    }
L_088CCA88:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CCAAC;
      }
      goto L_088CCA94;
    }
L_088CCA94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_088CCAAC;
L_088CCAAC:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088CCAB8;
    }
    goto L_088CCAB8;
L_088CCAB8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CCB4C;
      }
      goto L_088CCAC4;
    }
L_088CCAC4:
    ctx.gpr[5] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 14287u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 3713u);
      if (branch_taken) {
          goto L_088CCB0C;
      }
      goto L_088CCAF0;
    }
L_088CCAF0:
    ctx.gpr[6] = (17768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CCB38;
      }
      goto L_088CCB0C;
    }
L_088CCB0C:
    ctx.gpr[6] = (17768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_088CCB38;
L_088CCB38:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088CCB44;
    }
    goto L_088CCB44;
L_088CCB44:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CCB4C;
L_088CCB4C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CCBEC;
      }
      goto L_088CCB64;
    }
L_088CCB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088CCB84;
      }
      goto L_088CCB78;
    }
L_088CCB78:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088CCB84;
L_088CCB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088CCBA4;
      }
      goto L_088CCB98;
    }
L_088CCB98:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088CCBA4;
L_088CCBA4:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088CCBD0;
      }
      goto L_088CCBC4;
    }
L_088CCBC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CCBE8;
      }
      goto L_088CCBD0;
    }
L_088CCBD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CCBE8;
L_088CCBE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CCBEC;
L_088CCBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CCC20;
      }
      goto L_088CCC00;
    }
L_088CCC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CCC18;
    }
    goto L_088CCC18;
L_088CCC18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CCC3C;
      }
      goto L_088CCC20;
    }
L_088CCC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-197));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CCC38;
    }
    goto L_088CCC38;
L_088CCC38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CCC3C;
L_088CCC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23752), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CCC50;
    }
L_088CCC50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 5967u);
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CCC5C;
    }
L_088CCC5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CCCB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CCCB8u) goto L_088CCCB8;
    return;
L_088CCCB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCD08;
      }
      goto L_088CCCC0;
    }
L_088CCCC0:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CCCF4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 494u, 0x088CA7B0u>(ctx, &aot_mem) && ctx.pc == 0x088CCCF4u) goto L_088CCCF4;
    return;
L_088CCCF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088CCD08;
L_088CCD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCD2C;
      }
      goto L_088CCD18;
    }
L_088CCD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCD2C;
      }
      goto L_088CCD24;
    }
L_088CCD24:
    ctx.gpr[31] = (0x088CCD2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088CCD2Cu) goto L_088CCD2C;
    return;
L_088CCD2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CCD5C;
      }
      goto L_088CCD34;
    }
L_088CCD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCD58;
      }
      goto L_088CCD44;
    }
L_088CCD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCD58;
      }
      goto L_088CCD50;
    }
L_088CCD50:
    ctx.gpr[31] = (0x088CCD58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088CCD58u) goto L_088CCD58;
    return;
L_088CCD58:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CCD5C;
L_088CCD5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCD9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[6] = (17561u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CCDFC;
    }
L_088CCDFC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[19] = (0u | 17u);
    ctx.gpr[31] = (0x088CCE0Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088CCE0Cu) goto L_088CCE0C;
    return;
L_088CCE0C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CCE44;
      }
      goto L_088CCE18;
    }
L_088CCE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CCE28;
    }
L_088CCE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CCE34;
    }
L_088CCE34:
    ctx.gpr[31] = (0x088CCE3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088CCE3Cu) goto L_088CCE3C;
    return;
L_088CCE3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CCE44;
    }
L_088CCE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088CCE50u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088CCE50u) goto L_088CCE50;
    return;
L_088CCE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_088CCE64;
    }
    goto L_088CCE5C;
L_088CCE5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088CCE9C;
      }
      goto L_088CCE64;
    }
L_088CCE64:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCE98;
      }
      goto L_088CCE90;
    }
L_088CCE90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088CCE9C;
      }
      goto L_088CCE98;
    }
L_088CCE98:
    ctx.gpr[20] = (0u | 0u);
    goto L_088CCE9C;
L_088CCE9C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CD184;
      }
      goto L_088CCEA8;
    }
L_088CCEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1885)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CCF44;
      }
      goto L_088CCEB8;
    }
L_088CCEB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[21] = (0u | 127u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_088CCF08;
    }
    goto L_088CCF08;
L_088CCF08:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_088CCF28;
    }
    goto L_088CCF18;
L_088CCF18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CCF3C;
      }
      goto L_088CCF28;
    }
L_088CCF28:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_088CCF3C;
L_088CCF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCF4C;
      }
      goto L_088CCF44;
    }
L_088CCF44:
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[18] = (0u | 25000u);
    goto L_088CCF4C;
L_088CCF4C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CCF6C;
    }
L_088CCF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CCF8C;
    }
L_088CCF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CCFA4;
    }
L_088CCFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1888)));
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_088CCFF4;
    }
    goto L_088CCFF4;
L_088CCFF4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_088CD014;
    }
    goto L_088CD004;
L_088CD004:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CD028;
      }
      goto L_088CD014;
    }
L_088CD014:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14000));
    goto L_088CD028;
L_088CD028:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD0D0;
      }
      goto L_088CD030;
    }
L_088CD030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD064;
      }
      goto L_088CD044;
    }
L_088CD044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_088CD05C;
    }
    goto L_088CD05C;
L_088CD05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CD080;
      }
      goto L_088CD064;
    }
L_088CD064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_088CD07C;
    }
    goto L_088CD07C;
L_088CD07C:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_088CD080;
L_088CD080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD0B4;
      }
      goto L_088CD094;
    }
L_088CD094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088CD0AC;
    }
    goto L_088CD0AC;
L_088CD0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CD0D0;
      }
      goto L_088CD0B4;
    }
L_088CD0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-800));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088CD0CC;
    }
    goto L_088CD0CC;
L_088CD0CC:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088CD0D0;
L_088CD0D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CD168;
      }
      goto L_088CD0D8;
    }
L_088CD0D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CD0E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CD0E8u) goto L_088CD0E8;
    return;
L_088CD0E8:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[21] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088CD104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CD104u) goto L_088CD104;
    return;
L_088CD104:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088CD168;
      }
      goto L_088CD114;
    }
L_088CD114:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5924u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CD168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CD168u) goto L_088CD168;
    return;
L_088CD168:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_088CD510;
    }
    goto L_088CD170;
L_088CD170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(712), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CD184;
    }
L_088CD184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_088CD510;
    }
    goto L_088CD190;
L_088CD190:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088CD1C0;
    }
    goto L_088CD198;
L_088CD198:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088CD1A8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088CD1A8u) goto L_088CD1A8;
    return;
L_088CD1A8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CD1B4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088CD1B4u) goto L_088CD1B4;
    return;
L_088CD1B4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088CD1FC;
      }
      goto L_088CD1C0;
    }
L_088CD1C0:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    goto L_088CD1FC;
L_088CD1FC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
        goto L_088CD204;
    }
    goto L_088CD204;
L_088CD204:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x088CD21Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x088CD21Cu) goto L_088CD21C;
    return;
L_088CD21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD268;
      }
      goto L_088CD264;
    }
L_088CD264:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_088CD268;
L_088CD268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (ctx.gpr[22] << 7u);
      if (branch_taken) {
          goto L_088CD310;
      }
      goto L_088CD270;
    }
L_088CD270:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[4] = (0u | 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 127u);
        goto L_088CD2B0;
    }
    goto L_088CD2B0;
L_088CD2B0:
    ctx.gpr[5] = (ctx.gpr[22] << 6u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (0u | 22000u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14000));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088CD2F0;
      }
      goto L_088CD2E4;
    }
L_088CD2E4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088CD2F0;
L_088CD2F0:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (0u | 22000u);
        goto L_088CD308;
    }
    goto L_088CD308;
L_088CD308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088CD31C;
      }
      goto L_088CD310;
    }
L_088CD310:
    ctx.gpr[18] = (0u | 127u);
    ctx.gpr[21] = (0u | 18000u);
    ctx.gpr[22] = (0u | 1u);
    goto L_088CD31C;
L_088CD31C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD3CC;
      }
      goto L_088CD324;
    }
L_088CD324:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD3CC;
      }
      goto L_088CD32C;
    }
L_088CD32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD360;
      }
      goto L_088CD340;
    }
L_088CD340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088CD358;
    }
    goto L_088CD358;
L_088CD358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CD37C;
      }
      goto L_088CD360;
    }
L_088CD360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_088CD378;
    }
    goto L_088CD378;
L_088CD378:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088CD37C;
L_088CD37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD3B0;
      }
      goto L_088CD390;
    }
L_088CD390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_088CD3A8;
    }
    goto L_088CD3A8;
L_088CD3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CD3CC;
      }
      goto L_088CD3B0;
    }
L_088CD3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-800));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_088CD3C8;
    }
    goto L_088CD3C8;
L_088CD3C8:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_088CD3CC;
L_088CD3CC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (17914u << 16u);
      if (branch_taken) {
          goto L_088CD418;
      }
      goto L_088CD3D4;
    }
L_088CD3D4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_088CD404;
    }
    goto L_088CD3F4;
L_088CD3F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CD418;
      }
      goto L_088CD404;
    }
L_088CD404:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_088CD418;
L_088CD418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD430;
      }
      goto L_088CD42C;
    }
L_088CD42C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    goto L_088CD430;
L_088CD430:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CD4EC;
      }
      goto L_088CD438;
    }
L_088CD438:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CD448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CD448u) goto L_088CD448;
    return;
L_088CD448:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088CD464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CD464u) goto L_088CD464;
    return;
L_088CD464:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CD4EC;
      }
      goto L_088CD474;
    }
L_088CD474:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD494;
      }
      goto L_088CD47C;
    }
L_088CD47C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (0u | 5923u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CD4AC;
      }
      goto L_088CD494;
    }
L_088CD494:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5924u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_088CD4AC;
L_088CD4AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CD4ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CD4ECu) goto L_088CD4EC;
    return;
L_088CD4EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CD4F4;
    }
L_088CD4F4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD50C;
      }
      goto L_088CD4FC;
    }
L_088CD4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(712), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[21]);
    goto L_088CD50C;
L_088CD50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_088CD510;
L_088CD510:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CD51C;
    }
L_088CD51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD530;
      }
      goto L_088CD528;
    }
L_088CD528:
    ctx.gpr[31] = (0x088CD530u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x088CD530u) goto L_088CD530;
    return;
L_088CD530:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD55C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CD5A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088CD5A0u) goto L_088CD5A0;
    return;
L_088CD5A0:
    ctx.gpr[4] = (17692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088CD934;
      }
      goto L_088CD5C0;
    }
L_088CD5C0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (16320u << 16u);
      if (branch_taken) {
          goto L_088CD628;
      }
      goto L_088CD5DC;
    }
L_088CD5DC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1920)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[5] = (15150u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[7] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.gpr[5] = (ctx.gpr[5] | 49980u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088CD630;
      }
      goto L_088CD620;
    }
L_088CD620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD634;
      }
      goto L_088CD628;
    }
L_088CD628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD934;
      }
      goto L_088CD630;
    }
L_088CD630:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_088CD634;
L_088CD634:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CD644;
    }
    goto L_088CD644;
L_088CD644:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088CD654;
    }
    goto L_088CD654;
L_088CD654:
    ctx.gpr[31] = (0x088CD65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088CD65Cu) goto L_088CD65C;
    return;
L_088CD65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CD704;
      }
      goto L_088CD668;
    }
L_088CD668:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD6C4;
      }
      goto L_088CD678;
    }
L_088CD678:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088CD688u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088CD688u) goto L_088CD688;
    return;
L_088CD688:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088CD694u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088CD694u) goto L_088CD694;
    return;
L_088CD694:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23840)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[2]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2048)));
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD6C4;
    }
L_088CD6C4:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088CD6D0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088CD6D0u) goto L_088CD6D0;
    return;
L_088CD6D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CD6DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088CD6DCu) goto L_088CD6DC;
    return;
L_088CD6DC:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23840)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2048)));
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD704;
    }
L_088CD704:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(604)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(608)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1980)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23856)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23864)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23840)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23844)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2048)));
      if (branch_taken) {
          goto L_088CD750;
      }
      goto L_088CD734;
    }
L_088CD734:
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
      if (branch_taken) {
          goto L_088CD770;
      }
      goto L_088CD750;
    }
L_088CD750:
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_088CD770;
L_088CD770:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088CD784;
      }
      goto L_088CD778;
    }
L_088CD778:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088CD784;
L_088CD784:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (16046u << 16u);
      if (branch_taken) {
          goto L_088CD79C;
      }
      goto L_088CD78C;
    }
L_088CD78C:
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16046u << 16u);
    goto L_088CD79C;
L_088CD79C:
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CD7B8;
    }
    goto L_088CD7B8;
L_088CD7B8:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088CD7C8;
    }
    goto L_088CD7C8;
L_088CD7C8:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[19]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[24];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
      if (branch_taken) {
          goto L_088CD7F8;
      }
      goto L_088CD7EC;
    }
L_088CD7EC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23852)));
    goto L_088CD7F8;
L_088CD7F8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD824;
      }
      goto L_088CD808;
    }
L_088CD808:
    ctx.fpr[22] = ctx.fpr[16] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088CD81C;
    }
    goto L_088CD81C;
L_088CD81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD838;
      }
      goto L_088CD824;
    }
L_088CD824:
    ctx.fpr[22] = ctx.fpr[16] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088CD838;
    }
    goto L_088CD838;
L_088CD838:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD84C;
      }
      goto L_088CD848;
    }
L_088CD848:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088CD84C;
L_088CD84C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2048), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CD860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CD860u) goto L_088CD860;
    return;
L_088CD860:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088CD87Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CD87Cu) goto L_088CD87C;
    return;
L_088CD87C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (17979u << 16u);
      if (branch_taken) {
          goto L_088CD934;
      }
      goto L_088CD88C;
    }
L_088CD88C:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 128 ? 1u : 0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CD8B0;
      }
      goto L_088CD8A8;
    }
L_088CD8A8:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CD8B0;
L_088CD8B0:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
        goto L_088CD8CC;
    }
    goto L_088CD8C0;
L_088CD8C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CD8DC;
      }
      goto L_088CD8CC;
    }
L_088CD8CC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CD8DC;
L_088CD8DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CD934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CD934u) goto L_088CD934;
    return;
L_088CD934:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
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
L_088CD96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CD974;
      }
      goto L_088CD974;
    }
L_088CD974:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD97C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (17436u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CDB80;
      }
      goto L_088CD9B8;
    }
L_088CD9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CD9DC;
      }
      goto L_088CD9C8;
    }
L_088CD9C8:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CD9E8;
      }
      goto L_088CD9D4;
    }
L_088CD9D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD9F4;
      }
      goto L_088CD9DC;
    }
L_088CD9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1884)));
      if (branch_taken) {
          goto L_088CD9F8;
      }
      goto L_088CD9E8;
    }
L_088CD9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1493)));
      if (branch_taken) {
          goto L_088CD9F8;
      }
      goto L_088CD9F4;
    }
L_088CD9F4:
    ctx.gpr[4] = (0u | 4u);
    goto L_088CD9F8;
L_088CD9F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDA04;
    }
L_088CDA04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDA0C;
    }
L_088CDA0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDA28;
    }
L_088CDA28:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CDA38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CDA38u) goto L_088CDA38;
    return;
L_088CDA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CDA70;
    }
    goto L_088CDA70;
L_088CDA70:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088CDAA0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CDAA0u) goto L_088CDAA0;
    return;
L_088CDAA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CDB78;
      }
      goto L_088CDAB0;
    }
L_088CDAB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 296u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[5] = (0u | 296u);
    ctx.gpr[31] = (0x088CDAE4u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x088CDAE4u) goto L_088CDAE4;
    return;
L_088CDAE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CDB08;
      }
      goto L_088CDAFC;
    }
L_088CDAFC:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_088CDB08;
L_088CDB08:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[13];
        goto L_088CDB2C;
    }
    goto L_088CDB1C;
L_088CDB1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CDB40;
      }
      goto L_088CDB2C;
    }
L_088CDB2C:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088CDB40;
L_088CDB40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CDB78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CDB78u) goto L_088CDB78;
    return;
L_088CDB78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088CDB84;
      }
      goto L_088CDB80;
    }
L_088CDB80:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CDB84;
L_088CDB84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_088CDBA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CDBD8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088CDBD8u) goto L_088CDBD8;
    return;
L_088CDBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CDBFC;
      }
      goto L_088CDBE4;
    }
L_088CDBE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDBFC;
      }
      goto L_088CDBEC;
    }
L_088CDBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDC30;
      }
      goto L_088CDBFC;
    }
L_088CDBFC:
    ctx.gpr[4] = (17579u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088CDC4C;
      }
      goto L_088CDC28;
    }
L_088CDC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDC38;
      }
      goto L_088CDC30;
    }
L_088CDC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CDC38;
    }
L_088CDC38:
    ctx.gpr[31] = (0x088CDC40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088CDC40u) goto L_088CDC40;
    return;
L_088CDC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CE624;
      }
      goto L_088CDC4C;
    }
L_088CDC4C:
    ctx.gpr[31] = (0x088CDC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088CDC54u) goto L_088CDC54;
    return;
L_088CDC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDCAC;
      }
      goto L_088CDC60;
    }
L_088CDC60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CDCAC;
      }
      goto L_088CDC78;
    }
L_088CDC78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088CDC98;
      }
      goto L_088CDC84;
    }
L_088CDC84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CDC90u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088CDC90u) goto L_088CDC90;
    return;
L_088CDC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDCA4;
      }
      goto L_088CDC98;
    }
L_088CDC98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CDCA4u);
    ctx.gpr[5] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088CDCA4u) goto L_088CDCA4;
    return;
L_088CDCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CDCAC;
    }
L_088CDCAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CDCBC;
    }
L_088CDCBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CDCCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CDCCCu) goto L_088CDCCC;
    return;
L_088CDCCC:
    ctx.gpr[31] = (0x088CDCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088CDCD4u) goto L_088CDCD4;
    return;
L_088CDCD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CDD48;
      }
      goto L_088CDCE0;
    }
L_088CDCE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDD48;
      }
      goto L_088CDCF0;
    }
L_088CDCF0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDD1C;
      }
      goto L_088CDD0C;
    }
L_088CDD0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088CDD1C;
L_088CDD1C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(644));
    ctx.gpr[31] = (0x088CDD28u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem) && ctx.pc == 0x088CDD28u) goto L_088CDD28;
    return;
L_088CDD28:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CDD30;
    }
L_088CDD30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CDD40u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088CE654;
L_088CDD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CDD48;
    }
L_088CDD48:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE2EC;
      }
      goto L_088CDD54;
    }
L_088CDD54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CDDA0;
      }
      goto L_088CDD64;
    }
L_088CDD64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -969 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -967 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CDD88;
      }
      goto L_088CDD70;
    }
L_088CDD70:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDDD0;
      }
      goto L_088CDD7C;
    }
L_088CDD7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDDD4;
      }
      goto L_088CDD88;
    }
L_088CDD88:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 174 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CDDC4;
      }
      goto L_088CDD90;
    }
L_088CDD90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDD98;
    }
L_088CDD98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDDD0;
      }
      goto L_088CDDA0;
    }
L_088CDDA0:
    ctx.gpr[5] = (0u | 229u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 208u);
      if (branch_taken) {
          goto L_088CDDC4;
      }
      goto L_088CDDAC;
    }
L_088CDDAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 184u);
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDDB4;
    }
L_088CDDB4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDDBC;
    }
L_088CDDBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDDD0;
      }
      goto L_088CDDC4;
    }
L_088CDDC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088CDDD4;
      }
      goto L_088CDDD0;
    }
L_088CDDD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(644)));
    goto L_088CDDD4;
L_088CDDD4:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088CDDF0;
      }
      goto L_088CDDE0;
    }
L_088CDDE0:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CDE14;
      }
      goto L_088CDDE8;
    }
L_088CDDE8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDE38;
      }
      goto L_088CDDF0;
    }
L_088CDDF0:
    ctx.gpr[2] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1885)));
    ctx.gpr[2] = (16916u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1886)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1888));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(1892));
      if (branch_taken) {
          goto L_088CDE40;
      }
      goto L_088CDE14;
    }
L_088CDE14:
    ctx.gpr[2] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1494)));
    ctx.gpr[2] = (16916u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1495)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1496));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(1500));
      if (branch_taken) {
          goto L_088CDE40;
      }
      goto L_088CDE38;
    }
L_088CDE38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CDE40;
    }
L_088CDE40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CE1AC;
      }
      goto L_088CDE48;
    }
L_088CDE48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_088CDE9C;
      }
      goto L_088CDE68;
    }
L_088CDE68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDE78;
      }
      goto L_088CDE70;
    }
L_088CDE70:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDE9C;
      }
      goto L_088CDE78;
    }
L_088CDE78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDE8C;
    }
L_088CDE8C:
    ctx.gpr[8] = (16230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 26214u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDE9C;
    }
L_088CDE9C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[2] = (ctx.gpr[2] & 496u);
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CDEC4;
      }
      goto L_088CDEB4;
    }
L_088CDEB4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDEC4;
      }
      goto L_088CDEBC;
    }
L_088CDEBC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDECC;
      }
      goto L_088CDEC4;
    }
L_088CDEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDECC;
    }
L_088CDECC:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(92))))));
    ctx.gpr[3] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 70u);
      if (branch_taken) {
          goto L_088CDEF4;
      }
      goto L_088CDEDC;
    }
L_088CDEDC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 52u);
      if (branch_taken) {
          goto L_088CDF60;
      }
      goto L_088CDEE4;
    }
L_088CDEE4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CDFCC;
      }
      goto L_088CDEEC;
    }
L_088CDEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDEF4;
    }
L_088CDEF4:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (0u | 6u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088CDF24;
      }
      goto L_088CDF08;
    }
L_088CDF08:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDF10;
    }
L_088CDF10:
    ctx.gpr[8] = (15948u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDF24;
    }
L_088CDF24:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CDF3C;
      }
      goto L_088CDF2C;
    }
L_088CDF2C:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    goto L_088CDF3C;
L_088CDF3C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDF48;
    }
L_088CDF48:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_088CDF58;
L_088CDF58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDF60;
    }
L_088CDF60:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (0u | 6u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CDF90;
      }
      goto L_088CDF74;
    }
L_088CDF74:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CDFC4;
      }
      goto L_088CDF7C;
    }
L_088CDF7C:
    ctx.gpr[8] = (15948u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088CDFC4;
      }
      goto L_088CDF90;
    }
L_088CDF90:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CDFA8;
      }
      goto L_088CDF98;
    }
L_088CDF98:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    goto L_088CDFA8;
L_088CDFA8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CDFC4;
      }
      goto L_088CDFB4;
    }
L_088CDFB4:
    ctx.gpr[8] = (15820u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_088CDFC4;
L_088CDFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CDFCC;
    }
L_088CDFCC:
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[3] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_088CE020;
      }
      goto L_088CDFDC;
    }
L_088CDFDC:
    ctx.gpr[3] = (15820u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_088CDFEC;
L_088CDFEC:
    ctx.gpr[3] = (ctx.gpr[2] << 2u);
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CE004;
      }
      goto L_088CE000;
    }
L_088CE000:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_088CE004;
L_088CE004:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDFEC;
      }
      goto L_088CE018;
    }
L_088CE018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE05C;
      }
      goto L_088CE020;
    }
L_088CE020:
    ctx.gpr[3] = (15692u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_088CE030;
L_088CE030:
    ctx.gpr[3] = (ctx.gpr[2] << 2u);
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CE048;
      }
      goto L_088CE044;
    }
L_088CE044:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_088CE048;
L_088CE048:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE030;
      }
      goto L_088CE05C;
    }
L_088CE05C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CE1A4;
      }
      goto L_088CE070;
    }
L_088CE070:
    ctx.gpr[11] = (16256u << 16u);
    ctx.gpr[8] = (ctx.gpr[19] | ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CE0A8;
      }
      goto L_088CE084;
    }
L_088CE084:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CE0A0;
    }
    goto L_088CE0A0;
L_088CE0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE0A8;
    }
L_088CE0A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CE160;
      }
      goto L_088CE0B0;
    }
L_088CE0B0:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[8] = (16416u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CE0F0;
    }
    goto L_088CE0F0;
L_088CE0F0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_088CE140;
    }
    goto L_088CE100;
L_088CE100:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_088CE140;
    }
    goto L_088CE118;
L_088CE118:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_088CE140;
    }
    goto L_088CE130;
L_088CE130:
    ctx.gpr[6] = (16179u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    goto L_088CE140;
L_088CE140:
    ctx.gpr[6] = (16243u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[16];
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE160;
    }
L_088CE160:
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CE19C;
    }
    goto L_088CE19C;
L_088CE19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE1A4;
    }
L_088CE1A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE1D8;
      }
      goto L_088CE1AC;
    }
L_088CE1AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CE1CC;
      }
      goto L_088CE1B4;
    }
L_088CE1B4:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_088CE1CC;
L_088CE1CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(617))))));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    goto L_088CE1D8;
L_088CE1D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (18060u << 16u);
      if (branch_taken) {
          goto L_088CE250;
      }
      goto L_088CE1E0;
    }
L_088CE1E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.gpr[6] = (18060u << 16u);
      if (branch_taken) {
          goto L_088CE250;
      }
      goto L_088CE1E8;
    }
L_088CE1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (17995u << 16u);
      if (branch_taken) {
          goto L_088CE200;
      }
      goto L_088CE1F8;
    }
L_088CE1F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 22050u);
      if (branch_taken) {
          goto L_088CE2A8;
      }
      goto L_088CE200;
    }
L_088CE200:
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_088CE234;
    }
    goto L_088CE224;
L_088CE224:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CE248;
      }
      goto L_088CE234;
    }
L_088CE234:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_088CE248;
L_088CE248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE2A8;
      }
      goto L_088CE250;
    }
L_088CE250:
    ctx.gpr[6] = (ctx.gpr[6] | 40960u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_088CE284;
    }
    goto L_088CE274;
L_088CE274:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CE298;
      }
      goto L_088CE284;
    }
L_088CE284:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_088CE298;
L_088CE298:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_088CE2A8;
L_088CE2A8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CE2E4;
      }
      goto L_088CE2B8;
    }
L_088CE2B8:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[4] = (16752u << 16u);
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CE304;
      }
      goto L_088CE2E4;
    }
L_088CE2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 105u);
      if (branch_taken) {
          goto L_088CE304;
      }
      goto L_088CE2EC;
    }
L_088CE2EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[6] = (16916u << 16u);
    ctx.gpr[4] = (0u | 90u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    goto L_088CE304;
L_088CE304:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE314;
      }
      goto L_088CE30C;
    }
L_088CE30C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088CE314;
L_088CE314:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE388;
      }
      goto L_088CE31C;
    }
L_088CE31C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17669u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CE368;
      }
      goto L_088CE358;
    }
L_088CE358:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_088CE380;
      }
      goto L_088CE368;
    }
L_088CE368:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
    goto L_088CE380;
L_088CE380:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088CE388;
L_088CE388:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CE39Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CE39Cu) goto L_088CE39C;
    return;
L_088CE39C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CE61C;
      }
      goto L_088CE3AC;
    }
L_088CE3AC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE3B4;
    }
L_088CE3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (15523u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55050u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CE3E8;
      }
      goto L_088CE3D8;
    }
L_088CE3D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088CE3E8;
L_088CE3E8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(648)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[7] = (ctx.gpr[7] >> 4u);
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_088CE498;
      }
      goto L_088CE404;
    }
L_088CE404:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CE484;
      }
      goto L_088CE414;
    }
L_088CE414:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21352));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CE460;
      }
      goto L_088CE450;
    }
L_088CE450:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088CE478;
      }
      goto L_088CE460;
    }
L_088CE460:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_088CE478;
L_088CE478:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE484;
    }
L_088CE484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE498;
    }
L_088CE498:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
      if (branch_taken) {
          goto L_088CE518;
      }
      goto L_088CE4AC;
    }
L_088CE4AC:
    ctx.gpr[6] = (17948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2232u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21352));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CE4F4;
      }
      goto L_088CE4E4;
    }
L_088CE4E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088CE50C;
      }
      goto L_088CE4F4;
    }
L_088CE4F4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_088CE50C;
L_088CE50C:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CE528;
      }
      goto L_088CE518;
    }
L_088CE518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088CE528;
L_088CE528:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_088CE590;
    }
    goto L_088CE530;
L_088CE530:
    ctx.gpr[31] = (0x088CE538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 454u, 0x088C63C0u>(ctx, &aot_mem) && ctx.pc == 0x088CE538u) goto L_088CE538;
    return;
L_088CE538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088CE55C;
      }
      goto L_088CE544;
    }
L_088CE544:
    ctx.gpr[4] = (0u | 5918u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5918u);
      if (branch_taken) {
          goto L_088CE56C;
      }
      goto L_088CE55C;
    }
L_088CE55C:
    ctx.gpr[4] = (0u | 87u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 87u);
    goto L_088CE56C;
L_088CE56C:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CE5BC;
      }
      goto L_088CE590;
    }
L_088CE590:
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088CE5BC;
L_088CE5BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 73u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_088CE5DC;
      }
      goto L_088CE5D4;
    }
L_088CE5D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CE5E8;
      }
      goto L_088CE5DC;
    }
L_088CE5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088CE5E8;
L_088CE5E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CE61Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CE61Cu) goto L_088CE61C;
    return;
L_088CE61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CE628;
      }
      goto L_088CE624;
    }
L_088CE624:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CE628;
L_088CE628:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_088CE654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[17] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CE6DC;
      }
      goto L_088CE6D4;
    }
L_088CE6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 21u);
      if (branch_taken) {
          goto L_088CE6E0;
      }
      goto L_088CE6DC;
    }
L_088CE6DC:
    ctx.gpr[22] = (0u | 27u);
    goto L_088CE6E0;
L_088CE6E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE70C;
      }
      goto L_088CE6EC;
    }
L_088CE6EC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23744), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23745), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CE70C;
L_088CE70C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x088CE718u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 158u, 0x0888876Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE718u) goto L_088CE718;
    return;
L_088CE718:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE748;
      }
      goto L_088CE720;
    }
L_088CE720:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    ctx.gpr[31] = (0x088CE730u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x088CE730u) goto L_088CE730;
    return;
L_088CE730:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x088CE73Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x088CE73Cu) goto L_088CE73C;
    return;
L_088CE73C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(190), static_cast<std::uint16_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_088CE75C;
      }
      goto L_088CE748;
    }
L_088CE748:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(190), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088CE75C;
L_088CE75C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CE788;
      }
      goto L_088CE77C;
    }
L_088CE77C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088CE790;
      }
      goto L_088CE788;
    }
L_088CE788:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CE790;
L_088CE790:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CE79Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem) && ctx.pc == 0x088CE79Cu) goto L_088CE79C;
    return;
L_088CE79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[24];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CE7D0;
    }
    goto L_088CE7D0;
L_088CE7D0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088CE7E0;
    }
    goto L_088CE7E0;
L_088CE7E0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 184 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088CE824;
      }
      goto L_088CE7F0;
    }
L_088CE7F0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < -967 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 174u);
      if (branch_taken) {
          goto L_088CE814;
      }
      goto L_088CE7FC;
    }
L_088CE7FC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < -969 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE808;
    }
L_088CE808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
      if (branch_taken) {
          goto L_088CE85C;
      }
      goto L_088CE810;
    }
L_088CE810:
    ctx.gpr[7] = (0u | 174u);
    goto L_088CE814;
L_088CE814:
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
        goto L_088CE85C;
    }
    goto L_088CE81C;
L_088CE81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE824;
    }
L_088CE824:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 229u);
      if (branch_taken) {
          goto L_088CE850;
      }
      goto L_088CE830;
    }
L_088CE830:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 185 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 208 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CE858;
      }
      goto L_088CE83C;
    }
L_088CE83C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE844;
    }
L_088CE844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
      if (branch_taken) {
          goto L_088CE85C;
      }
      goto L_088CE84C;
    }
L_088CE84C:
    ctx.gpr[7] = (0u | 229u);
    goto L_088CE850;
L_088CE850:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088CE8B8;
      }
      goto L_088CE858;
    }
L_088CE858:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
    goto L_088CE85C;
L_088CE85C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088CE8A0;
      }
      goto L_088CE880;
    }
L_088CE880:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(190), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088CE8AC;
      }
      goto L_088CE8A0;
    }
L_088CE8A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088CE8AC;
L_088CE8AC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088CE8C4;
      }
      goto L_088CE8B8;
    }
L_088CE8B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CE8C4;
L_088CE8C4:
    ctx.gpr[4] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088CE8E4;
    }
    goto L_088CE8D0;
L_088CE8D0:
    if (ctx.gpr[5] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_088CE930;
    }
    goto L_088CE8D8;
L_088CE8D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE97C;
      }
      goto L_088CE8E0;
    }
L_088CE8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088CE8E4;
L_088CE8E4:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1885)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1886)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23728)));
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[9] = (2232u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (2237u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1888));
    ctx.gpr[23] = (0u | 174u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23732)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-21160));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1280));
      if (branch_taken) {
          goto L_088CE984;
      }
      goto L_088CE930;
    }
L_088CE930:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1494)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1495)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1396)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23728)));
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[9] = (2232u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (2237u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1496));
    ctx.gpr[23] = (0u | 174u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23732)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-21160));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1280));
      if (branch_taken) {
          goto L_088CE984;
      }
      goto L_088CE97C;
    }
L_088CE97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF774;
      }
      goto L_088CE984;
    }
L_088CE984:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088CE9A0;
      }
      goto L_088CE990;
    }
L_088CE990:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CE9A8;
      }
      goto L_088CE9A0;
    }
L_088CE9A0:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088CE9A8;
L_088CE9A8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_088CEAA8;
      }
      goto L_088CE9B8;
    }
L_088CE9B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (17723u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088CEA3C;
      }
      goto L_088CE9D8;
    }
L_088CE9D8:
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CE9F8;
    }
    goto L_088CE9F8;
L_088CE9F8:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[30];
        goto L_088CEA20;
    }
    goto L_088CEA10;
L_088CEA10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088CEA34;
      }
      goto L_088CEA20;
    }
L_088CEA20:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[18] = (0u - ctx.gpr[18]);
    goto L_088CEA34;
L_088CEA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEA90;
      }
      goto L_088CEA3C;
    }
L_088CEA3C:
    ctx.gpr[6] = (48716u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CEA5C;
    }
    goto L_088CEA5C;
L_088CEA5C:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[30];
        goto L_088CEA80;
    }
    goto L_088CEA74;
L_088CEA74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CEA90;
      }
      goto L_088CEA80;
    }
L_088CEA80:
    ctx.gpr[18] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[18]);
    goto L_088CEA90;
L_088CEA90:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEAA0;
      }
      goto L_088CEA9C;
    }
L_088CEA9C:
    ctx.gpr[18] = (0u - ctx.gpr[18]);
    goto L_088CEAA0;
L_088CEAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEAAC;
      }
      goto L_088CEAA8;
    }
L_088CEAA8:
    ctx.gpr[18] = (0u | 0u);
    goto L_088CEAAC;
L_088CEAAC:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CEABC;
      }
      goto L_088CEABC;
    }
L_088CEABC:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_088CEAD4;
    }
    goto L_088CEACC;
L_088CEACC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_088CEAD4;
      }
      goto L_088CEAD4;
    }
L_088CEAD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[6] = (20352u << 16u);
      if (branch_taken) {
          goto L_088CEAE4;
      }
      goto L_088CEADC;
    }
L_088CEADC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[13];
    goto L_088CEAE4;
L_088CEAE4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
        goto L_088CEB08;
    }
    goto L_088CEAFC;
L_088CEAFC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CEB18;
      }
      goto L_088CEB08;
    }
L_088CEB08:
    ctx.gpr[21] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[6] + ctx.gpr[21]);
    goto L_088CEB18;
L_088CEB18:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088CEB34;
      }
      goto L_088CEB28;
    }
L_088CEB28:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088CEB3C;
      }
      goto L_088CEB34;
    }
L_088CEB34:
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088CEB3C;
L_088CEB3C:
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CEBC8;
      }
      goto L_088CEB48;
    }
L_088CEB48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEB5C;
      }
      goto L_088CEB58;
    }
L_088CEB58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1400));
    goto L_088CEB5C;
L_088CEB5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CEB78u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEB78u) goto L_088CEB78;
    return;
L_088CEB78:
    ctx.gpr[31] = (0x088CEB80u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 363u, 0x088C5CD0u>(ctx, &aot_mem) && ctx.pc == 0x088CEB80u) goto L_088CEB80;
    return;
L_088CEB80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088CEB98;
    }
    goto L_088CEB98;
L_088CEB98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23724)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088CEBB8;
      }
      goto L_088CEBAC;
    }
L_088CEBAC:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088CEBB8;
L_088CEBB8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    goto L_088CEBC8;
L_088CEBC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEBEC;
      }
      goto L_088CEBDC;
    }
L_088CEBDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088CEBEC;
L_088CEBEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(644));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x088CEC10u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x088CEC10u) goto L_088CEC10;
    return;
L_088CEC10:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_088CF35C;
      }
      goto L_088CEC34;
    }
L_088CEC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_088CEE0C;
      }
      goto L_088CEC40;
    }
L_088CEC40:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CECCC;
      }
      goto L_088CEC54;
    }
L_088CEC54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC64;
    }
L_088CEC64:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC6C;
    }
L_088CEC6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(190))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC78;
    }
L_088CEC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CEC94;
    }
L_088CEC94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CECC4;
      }
      goto L_088CECA0;
    }
L_088CECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(94)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CECCC;
      }
      goto L_088CECC4;
    }
L_088CECC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
      if (branch_taken) {
          goto L_088CF750;
      }
      goto L_088CECCC;
    }
L_088CECCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 220 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088CED04;
      }
      goto L_088CECE0;
    }
L_088CECE0:
    ctx.gpr[6] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CED1C;
      }
      goto L_088CED04;
    }
L_088CED04:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CED30;
      }
      goto L_088CED10;
    }
L_088CED10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CED30;
      }
      goto L_088CED1C;
    }
L_088CED1C:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(800) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CED30;
      }
      goto L_088CED28;
    }
L_088CED28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), ctx.gpr[4]);
    goto L_088CED30;
L_088CED30:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_088CED50;
      }
      goto L_088CED48;
    }
L_088CED48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 4270u);
      if (branch_taken) {
          goto L_088CED54;
      }
      goto L_088CED50;
    }
L_088CED50:
    ctx.gpr[6] = (0u | 22050u);
    goto L_088CED54;
L_088CED54:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEDC4;
      }
      goto L_088CED60;
    }
L_088CED60:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088CED7C;
      }
      goto L_088CED70;
    }
L_088CED70:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088CED7C;
L_088CED7C:
    ctx.gpr[6] = (17723u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
        goto L_088CEDAC;
    }
    goto L_088CEDA0;
L_088CEDA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CEDBC;
      }
      goto L_088CEDAC;
    }
L_088CEDAC:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_088CEDBC;
L_088CEDBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CEDD0;
      }
      goto L_088CEDC4;
    }
L_088CEDC4:
    ctx.gpr[7] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_088CEDD0;
L_088CEDD0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CEDE0;
      }
      goto L_088CEDDC;
    }
L_088CEDDC:
    ctx.gpr[5] = (ctx.gpr[4] >> 1u);
    goto L_088CEDE0;
L_088CEDE0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(5885));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x088CEE04u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem) && ctx.pc == 0x088CEE04u) goto L_088CEE04;
    return;
L_088CEE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
      if (branch_taken) {
          goto L_088CF754;
      }
      goto L_088CEE0C;
    }
L_088CEE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088CEE3C;
      }
      goto L_088CEE18;
    }
L_088CEE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1654))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE34;
      }
      goto L_088CEE2C;
    }
L_088CEE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088CEE40;
      }
      goto L_088CEE34;
    }
L_088CEE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEE40;
      }
      goto L_088CEE3C;
    }
L_088CEE3C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088CEE40;
L_088CEE40:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE50;
    }
L_088CEE50:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE58;
    }
L_088CEE58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[7] = (ctx.gpr[7] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE74;
    }
L_088CEE74:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEE80;
    }
L_088CEE80:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CEEAC;
      }
      goto L_088CEE88;
    }
L_088CEE88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (15395u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CEEB8;
      }
      goto L_088CEEAC;
    }
L_088CEEAC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(190))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CF1A4;
      }
      goto L_088CEEB8;
    }
L_088CEEB8:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-21352));
    ctx.gpr[8] = (16840u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088CEF00;
      }
      goto L_088CEED8;
    }
L_088CEED8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[7] = (ctx.gpr[7] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF00;
      }
      goto L_088CEEF4;
    }
L_088CEEF4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(190))))));
        goto L_088CEF0C;
    }
    goto L_088CEF00;
L_088CEF00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF14;
      }
      goto L_088CEF08;
    }
L_088CEF08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(190))))));
    goto L_088CEF0C;
L_088CEF0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CF04C;
      }
      goto L_088CEF14;
    }
L_088CEF14:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CEF28;
      }
      goto L_088CEF1C;
    }
L_088CEF1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_088CEF74;
      }
      goto L_088CEF28;
    }
L_088CEF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_088CEF54;
    }
    goto L_088CEF44;
L_088CEF44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23744)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF68;
      }
      goto L_088CEF50;
    }
L_088CEF50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_088CEF54;
L_088CEF54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF5C;
    }
L_088CEF5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23745)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF68;
    }
L_088CEF68:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEF84;
      }
      goto L_088CEF70;
    }
L_088CEF70:
    ctx.gpr[4] = (16153u << 16u);
    goto L_088CEF74;
L_088CEF74:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088CEF84;
L_088CEF84:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088CEFA0;
      }
      goto L_088CEF94;
    }
L_088CEF94:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (18115u << 16u);
      if (branch_taken) {
          goto L_088CEFF0;
      }
      goto L_088CEFA0;
    }
L_088CEFA0:
    ctx.gpr[4] = (18026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24576u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
        goto L_088CEFD0;
    }
    goto L_088CEFC0;
L_088CEFC0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CEFE4;
      }
      goto L_088CEFD0;
    }
L_088CEFD0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14000));
    goto L_088CEFE4;
L_088CEFE4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088CF034;
      }
      goto L_088CEFEC;
    }
L_088CEFEC:
    ctx.gpr[4] = (18115u << 16u);
    goto L_088CEFF0;
L_088CEFF0:
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
        goto L_088CF01C;
    }
    goto L_088CF00C;
L_088CF00C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_088CF030;
      }
      goto L_088CF01C;
    }
L_088CF01C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14000));
    goto L_088CF030;
L_088CF030:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088CF034;
L_088CF034:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CF0B0;
      }
      goto L_088CF04C;
    }
L_088CF04C:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_088CF078;
      }
      goto L_088CF068;
    }
L_088CF068:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088CF090;
      }
      goto L_088CF078;
    }
L_088CF078:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_088CF090;
L_088CF090:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088CF0B0;
L_088CF0B0:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF118;
      }
      goto L_088CF0BC;
    }
L_088CF0BC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17669u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CF100;
      }
      goto L_088CF0F0;
    }
L_088CF0F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_088CF118;
      }
      goto L_088CF100;
    }
L_088CF100:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[30];
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4270));
    goto L_088CF118;
L_088CF118:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CF128;
      }
      goto L_088CF124;
    }
L_088CF124:
    ctx.gpr[7] = (ctx.gpr[7] >> 1u);
    goto L_088CF128;
L_088CF128:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF15C;
      }
      goto L_088CF130;
    }
L_088CF130:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF148u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088CF148u) goto L_088CF148;
    return;
L_088CF148:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_088CF15C;
L_088CF15C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF178;
      }
      goto L_088CF170;
    }
L_088CF170:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088CF178;
L_088CF178:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x088CF19Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem) && ctx.pc == 0x088CF19Cu) goto L_088CF19C;
    return;
L_088CF19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF354;
      }
      goto L_088CF1A4;
    }
L_088CF1A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088CF1C0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 30u, 0x089B8234u>(ctx, &aot_mem) && ctx.pc == 0x088CF1C0u) goto L_088CF1C0;
    return;
L_088CF1C0:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088CF1D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 13u, 0x089B80C8u>(ctx, &aot_mem) && ctx.pc == 0x088CF1D8u) goto L_088CF1D8;
    return;
L_088CF1D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_088CF228;
      }
      goto L_088CF1F4;
    }
L_088CF1F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088CF20C;
      }
      goto L_088CF204;
    }
L_088CF204:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CF220;
      }
      goto L_088CF20C;
    }
L_088CF20C:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088CF21C;
    }
    goto L_088CF21C;
L_088CF21C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CF220;
L_088CF220:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    goto L_088CF228;
L_088CF228:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF2AC;
      }
      goto L_088CF230;
    }
L_088CF230:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF280;
      }
      goto L_088CF238;
    }
L_088CF238:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(94)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088CF268;
    }
    goto L_088CF25C;
L_088CF25C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088CF280;
      }
      goto L_088CF268;
    }
L_088CF268:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088CEC40;
      }
      goto L_088CF280;
    }
L_088CF280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(5884));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088CF2ACu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 474u, 0x0880A214u>(ctx, &aot_mem) && ctx.pc == 0x088CF2ACu) goto L_088CF2AC;
    return;
L_088CF2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x088CF2C0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CF2C0u) goto L_088CF2C0;
    return;
L_088CF2C0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CF2D4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem) && ctx.pc == 0x088CF2D4u) goto L_088CF2D4;
    return;
L_088CF2D4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088CF2E4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem) && ctx.pc == 0x088CF2E4u) goto L_088CF2E4;
    return;
L_088CF2E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16480));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CF318;
      }
      goto L_088CF30C;
    }
L_088CF30C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22050));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
      if (branch_taken) {
          goto L_088CF330;
      }
      goto L_088CF318;
    }
L_088CF318:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CF32C;
      }
      goto L_088CF324;
    }
L_088CF324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_088CF330;
      }
      goto L_088CF32C;
    }
L_088CF32C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22050));
    goto L_088CF330;
L_088CF330:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088CF340u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem) && ctx.pc == 0x088CF340u) goto L_088CF340;
    return;
L_088CF340:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF354;
      }
      goto L_088CF348;
    }
L_088CF348:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF354u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 546u, 0x0880A624u>(ctx, &aot_mem) && ctx.pc == 0x088CF354u) goto L_088CF354;
    return;
L_088CF354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
      if (branch_taken) {
          goto L_088CF754;
      }
      goto L_088CF35C;
    }
L_088CF35C:
    ctx.gpr[21] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21352));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CF424;
      }
      goto L_088CF37C;
    }
L_088CF37C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF39C;
      }
      goto L_088CF388;
    }
L_088CF388:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF394u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088CF394u) goto L_088CF394;
    return;
L_088CF394:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CF39C;
L_088CF39C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3CC;
      }
      goto L_088CF3A4;
    }
L_088CF3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3CC;
      }
      goto L_088CF3C0;
    }
L_088CF3C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3D4;
      }
      goto L_088CF3CC;
    }
L_088CF3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CF408;
      }
      goto L_088CF3D4;
    }
L_088CF3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_088CF3EC;
    }
    goto L_088CF3E4;
L_088CF3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088CF408;
      }
      goto L_088CF3EC;
    }
L_088CF3EC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088CF408;
    }
    goto L_088CF408;
L_088CF408:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF41C;
      }
      goto L_088CF418;
    }
L_088CF418:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088CF41C;
L_088CF41C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088CF61C;
      }
      goto L_088CF424;
    }
L_088CF424:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748))))));
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[4] = (17948u << 16u);
        goto L_088CF620;
    }
    goto L_088CF430;
L_088CF430:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CF46C;
      }
      goto L_088CF444;
    }
L_088CF444:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088CF454u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x088CF454u) goto L_088CF454;
    return;
L_088CF454:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23736), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088CF46C;
L_088CF46C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23740), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088CF4D4;
      }
      goto L_088CF478;
    }
L_088CF478:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF4D4;
      }
      goto L_088CF490;
    }
L_088CF490:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (15395u << 16u);
      if (branch_taken) {
          goto L_088CF4D4;
      }
      goto L_088CF49C;
    }
L_088CF49C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (15948u << 16u);
      if (branch_taken) {
          goto L_088CF54C;
      }
      goto L_088CF4B8;
    }
L_088CF4B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF54C;
      }
      goto L_088CF4D4;
    }
L_088CF4D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 229u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF4E4;
    }
L_088CF4E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-968));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF4F4;
    }
L_088CF4F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-969));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF504;
    }
L_088CF504:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF510;
    }
L_088CF510:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CF530;
      }
      goto L_088CF520;
    }
L_088CF520:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_088CF538;
      }
      goto L_088CF530;
    }
L_088CF530:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088CF54C;
      }
      goto L_088CF538;
    }
L_088CF538:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088CF54C;
L_088CF54C:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17948u << 16u);
      if (branch_taken) {
          goto L_088CF620;
      }
      goto L_088CF55C;
    }
L_088CF55C:
    ctx.gpr[4] = (16243u << 16u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(617))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_088CF5A8;
      }
      goto L_088CF598;
    }
L_088CF598:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19000));
      if (branch_taken) {
          goto L_088CF5C0;
      }
      goto L_088CF5A8;
    }
L_088CF5A8:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19000));
    goto L_088CF5C0;
L_088CF5C0:
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088CF5F4;
      }
      goto L_088CF5EC;
    }
L_088CF5EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088CF5F4;
L_088CF5F4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CF600;
      }
      goto L_088CF5FC;
    }
L_088CF5FC:
    ctx.gpr[6] = (ctx.gpr[4] >> 1u);
    goto L_088CF600;
L_088CF600:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(5886));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 63u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088CF61Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem) && ctx.pc == 0x088CF61Cu) goto L_088CF61C;
    return;
L_088CF61C:
    ctx.gpr[4] = (17948u << 16u);
    goto L_088CF620;
L_088CF620:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
      if (branch_taken) {
          goto L_088CF654;
      }
      goto L_088CF644;
    }
L_088CF644:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088CF66C;
      }
      goto L_088CF654;
    }
L_088CF654:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22050));
    goto L_088CF66C;
L_088CF66C:
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(217)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088CF6FC;
      }
      goto L_088CF698;
    }
L_088CF698:
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
        goto L_088CF6C4;
    }
    goto L_088CF6B4;
L_088CF6B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_088CF6D8;
      }
      goto L_088CF6C4;
    }
L_088CF6C4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    goto L_088CF6D8;
L_088CF6D8:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 40u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088CF6FC;
L_088CF6FC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CF708;
      }
      goto L_088CF704;
    }
L_088CF704:
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    goto L_088CF708;
L_088CF708:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF718;
      }
      goto L_088CF710;
    }
L_088CF710:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088CF718;
L_088CF718:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 52u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x088CF738u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 594u, 0x088C6D14u>(ctx, &aot_mem) && ctx.pc == 0x088CF738u) goto L_088CF738;
    return;
L_088CF738:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 1 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_088CF74C;
    }
    goto L_088CF74C;
L_088CF74C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23746), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CF750;
L_088CF750:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(214))))));
    goto L_088CF754;
L_088CF754:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-23748), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23745), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23744), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CF774;
L_088CF774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF7BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CFA9C;
      }
      goto L_088CF7F8;
    }
L_088CF7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088CF818;
      }
      goto L_088CF808;
    }
L_088CF808:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CF89C;
      }
      goto L_088CF810;
    }
L_088CF810:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF91C;
      }
      goto L_088CF818;
    }
L_088CF818:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF884;
      }
      goto L_088CF828;
    }
L_088CF828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088CF838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem) && ctx.pc == 0x088CF838u) goto L_088CF838;
    return;
L_088CF838:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CF870;
      }
      goto L_088CF844;
    }
L_088CF844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1552)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF870;
      }
      goto L_088CF868;
    }
L_088CF868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CF884;
      }
      goto L_088CF870;
    }
L_088CF870:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF828;
      }
      goto L_088CF884;
    }
L_088CF884:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF894;
      }
      goto L_088CF88C;
    }
L_088CF88C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF924;
      }
      goto L_088CF894;
    }
L_088CF894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CF89C;
    }
L_088CF89C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF904;
      }
      goto L_088CF8AC;
    }
L_088CF8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CF8F0;
      }
      goto L_088CF8C4;
    }
L_088CF8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CF8F0;
      }
      goto L_088CF8E8;
    }
L_088CF8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CF904;
      }
      goto L_088CF8F0;
    }
L_088CF8F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF8AC;
      }
      goto L_088CF904;
    }
L_088CF904:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF914;
      }
      goto L_088CF90C;
    }
L_088CF90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF924;
      }
      goto L_088CF914;
    }
L_088CF914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CF91C;
    }
L_088CF91C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CF924;
    }
L_088CF924:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088CF960;
    }
    goto L_088CF960;
L_088CF960:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CFA94;
      }
      goto L_088CF97C;
    }
L_088CF97C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CF98Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CF98Cu) goto L_088CF98C;
    return;
L_088CF98C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x088CF9B8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CF9B8u) goto L_088CF9B8;
    return;
L_088CF9B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_088CFA94;
      }
      goto L_088CF9C8;
    }
L_088CF9C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (17835u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 338u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17835u << 16u);
      if (branch_taken) {
          goto L_088CFA28;
      }
      goto L_088CFA0C;
    }
L_088CFA0C:
    ctx.gpr[4] = (17835u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CFA50;
      }
      goto L_088CFA28;
    }
L_088CFA28:
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088CFA50;
L_088CFA50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088CFA94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CFA94u) goto L_088CFA94;
    return;
L_088CFA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFAA0;
      }
      goto L_088CFA9C;
    }
L_088CFA9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CFAA0;
L_088CFAA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFAC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CFFAC;
      }
      goto L_088CFB24;
    }
L_088CFB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFB84;
      }
      goto L_088CFB30;
    }
L_088CFB30:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB84;
      }
      goto L_088CFB3C;
    }
L_088CFB3C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1884)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1888)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1892));
      if (branch_taken) {
          goto L_088CFB8C;
      }
      goto L_088CFB6C;
    }
L_088CFB6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1493)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1496)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
      if (branch_taken) {
          goto L_088CFB8C;
      }
      goto L_088CFB84;
    }
L_088CFB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088CFFB0;
      }
      goto L_088CFB8C;
    }
L_088CFB8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CFFA4;
      }
      goto L_088CFB94;
    }
L_088CFB94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CFBA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 397u, 0x088C6080u>(ctx, &aot_mem) && ctx.pc == 0x088CFBA8u) goto L_088CFBA8;
    return;
L_088CFBA8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 82u);
      if (branch_taken) {
          goto L_088CFD18;
      }
      goto L_088CFBB8;
    }
L_088CFBB8:
    ctx.gpr[23] = (0u | 70u);
    ctx.gpr[22] = (0u | 52u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[19] = (0u | 2u);
    goto L_088CFBCC;
L_088CFBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFBEC;
      }
      goto L_088CFBE4;
    }
L_088CFBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFD00;
      }
      goto L_088CFBEC;
    }
L_088CFBEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088CFC14;
      }
      goto L_088CFBFC;
    }
L_088CFBFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088CFC70;
      }
      goto L_088CFC04;
    }
L_088CFC04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088CFCCC;
      }
      goto L_088CFC0C;
    }
L_088CFC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFCEC;
      }
      goto L_088CFC14;
    }
L_088CFC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CFC28;
      }
      goto L_088CFC20;
    }
L_088CFC20:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088CFC4C;
      }
      goto L_088CFC28;
    }
L_088CFC28:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088CFC44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 662u, 0x088C7414u>(ctx, &aot_mem) && ctx.pc == 0x088CFC44u) goto L_088CFC44;
    return;
L_088CFC44:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088CFC68;
      }
      goto L_088CFC4C;
    }
L_088CFC4C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088CFC64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 682u, 0x088C75B4u>(ctx, &aot_mem) && ctx.pc == 0x088CFC64u) goto L_088CFC64;
    return;
L_088CFC64:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CFC68;
L_088CFC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFCEC;
      }
      goto L_088CFC70;
    }
L_088CFC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088CFC84;
      }
      goto L_088CFC7C;
    }
L_088CFC7C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088CFCA8;
      }
      goto L_088CFC84;
    }
L_088CFC84:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088CFCA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 662u, 0x088C7414u>(ctx, &aot_mem) && ctx.pc == 0x088CFCA0u) goto L_088CFCA0;
    return;
L_088CFCA0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088CFCC4;
      }
      goto L_088CFCA8;
    }
L_088CFCA8:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088CFCC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 682u, 0x088C75B4u>(ctx, &aot_mem) && ctx.pc == 0x088CFCC0u) goto L_088CFCC0;
    return;
L_088CFCC0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CFCC4;
L_088CFCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFCEC;
      }
      goto L_088CFCCC;
    }
L_088CFCCC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CFCE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 662u, 0x088C7414u>(ctx, &aot_mem) && ctx.pc == 0x088CFCE8u) goto L_088CFCE8;
    return;
L_088CFCE8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CFCEC;
L_088CFCEC:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CFD00;
      }
      goto L_088CFCFC;
    }
L_088CFCFC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088CFD00;
L_088CFD00:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFBCC;
      }
      goto L_088CFD18;
    }
L_088CFD18:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088CFFA4;
      }
      goto L_088CFD28;
    }
L_088CFD28:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16928u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088CFD58u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem) && ctx.pc == 0x088CFD58u) goto L_088CFD58;
    return;
L_088CFD58:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088CFFA4;
      }
      goto L_088CFD68;
    }
L_088CFD68:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(311)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (17820u << 16u);
        goto L_088CFEB4;
    }
    goto L_088CFD8C;
L_088CFD8C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20288)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFDA4:
    ctx.gpr[4] = (17995u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (18184u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 47104u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 290u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088CFDE4;
      }
      goto L_088CFDD8;
    }
L_088CFDD8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CFDF8;
      }
      goto L_088CFDE4;
    }
L_088CFDE4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_088CFDF8;
L_088CFDF8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFE30;
      }
      goto L_088CFE10;
    }
L_088CFE10:
    ctx.gpr[9] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (2237u << 16u);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088CFF40;
      }
      goto L_088CFE30;
    }
L_088CFE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088CFFB0;
      }
      goto L_088CFE38;
    }
L_088CFE38:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (17820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (2237u << 16u);
    ctx.gpr[7] = (0u | 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 8u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088CFE90;
      }
      goto L_088CFE84;
    }
L_088CFE84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CFEA4;
      }
      goto L_088CFE90;
    }
L_088CFE90:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    goto L_088CFEA4;
L_088CFEA4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088CFF40;
      }
      goto L_088CFEB0;
    }
L_088CFEB0:
    ctx.gpr[4] = (17820u << 16u);
    goto L_088CFEB4;
L_088CFEB4:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (17963u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 57344u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 313u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (2237u << 16u);
    ctx.gpr[7] = (0u | 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 8u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088CFF08;
      }
      goto L_088CFEFC;
    }
L_088CFEFC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088CFF1C;
      }
      goto L_088CFF08;
    }
L_088CFF08:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    goto L_088CFF1C;
L_088CFF1C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088CFF40;
      }
      goto L_088CFF30;
    }
L_088CFF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088CFF40;
L_088CFF40:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 290u);
      if (branch_taken) {
          goto L_088CFF74;
      }
      goto L_088CFF48;
    }
L_088CFF48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(311)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
        goto L_088CFF78;
    }
    goto L_088CFF68;
L_088CFF68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CFF74;
L_088CFF74:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088CFF78;
L_088CFF78:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x088CFFA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x088CFFA4u) goto L_088CFFA4;
    return;
L_088CFFA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088CFFB0;
      }
      goto L_088CFFAC;
    }
L_088CFFAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088CFFB0;
L_088CFFB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_088CFFF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.pc = 0x088D0000u; return;
}

void recomp_unit_0050(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0050_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_50(Runtime &runtime) {
    runtime.register_generated_unit(50u, 0x088CC000u, 16384u, &recomp_unit_0050, &recomp_unit_0050_entry);
    runtime.register_function(0x088CC000u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC00Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC024u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC030u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC03Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC068u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC084u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC110u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC11Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC13Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC148u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC160u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC164u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC178u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC190u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC198u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC224u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC23Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC260u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC274u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC280u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC28Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC314u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC324u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC330u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC374u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC380u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC390u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC418u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC428u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC430u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC468u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC484u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC500u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC52Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC534u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC584u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC588u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC5B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC5C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC5C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC5F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC62Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC638u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC650u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC65Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC668u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC694u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC708u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC71Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC728u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC73Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC748u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC768u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC774u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC78Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC790u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC800u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC810u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC81Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC850u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC868u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC88Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC900u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC928u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC938u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC97Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC988u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA24u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD24u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCEA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCEB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD004u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD014u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD028u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD030u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD044u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD05Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD064u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD07Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD080u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD094u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD104u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD114u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD168u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD170u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD184u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD190u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD198u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD204u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD21Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD264u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD268u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD270u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD308u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD310u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD31Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD324u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD32Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD340u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD358u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD360u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD378u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD37Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD390u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD404u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD418u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD42Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD430u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD438u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD448u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD464u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD474u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD47Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD494u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD50Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD510u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD51Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD528u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD530u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD55Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD5A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD5C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD5DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD620u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD628u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD630u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD634u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD644u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD654u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD65Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD668u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD678u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD688u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD694u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD6C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD6D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD6DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD704u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD734u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD750u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD770u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD778u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD784u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD78Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD79Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD808u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD81Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD824u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD838u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD848u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD84Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD860u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD87Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD88Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD934u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD96Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD974u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD97Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBD8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDECCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF24u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE000u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE004u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE018u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE020u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE030u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE044u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE048u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE05Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE070u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE084u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE100u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE118u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE130u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE140u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE160u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE19Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE200u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE224u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE234u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE248u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE250u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE274u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE284u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE298u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE304u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE30Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE314u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE31Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE358u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE368u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE380u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE388u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE39Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE404u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE414u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE450u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE460u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE478u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE484u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE498u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE4ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE4E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE4F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE50Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE518u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE528u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE530u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE538u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE544u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE55Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE56Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE590u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE61Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE624u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE628u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE654u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE70Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE718u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE720u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE730u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE73Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE748u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE75Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE77Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE788u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE790u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE79Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE808u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE810u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE814u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE81Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE824u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE830u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE83Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE844u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE84Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE850u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE858u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE85Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE880u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE930u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE97Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE984u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE990u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEABCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEACCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEADCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEED8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF00Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF01Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF030u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF034u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF04Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF068u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF078u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF090u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF100u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF118u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF124u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF128u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF130u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF148u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF15Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF170u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF178u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF19Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF204u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF20Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF21Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF220u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF228u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF230u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF238u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF25Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF268u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF280u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF30Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF318u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF324u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF32Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF330u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF340u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF348u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF354u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF35Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF37Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF388u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF394u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF39Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF408u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF418u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF41Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF424u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF430u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF444u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF454u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF46Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF478u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF490u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF49Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF504u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF510u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF520u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF530u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF538u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF54Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF55Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF598u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF600u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF61Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF620u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF644u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF654u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF66Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF698u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF704u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF708u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF710u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF718u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF738u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF74Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF750u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF754u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF774u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF7BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF7F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF808u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF810u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF818u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF828u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF838u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF844u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF868u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF870u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF884u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF88Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF894u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF89Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF904u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF90Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF914u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF91Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF924u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF960u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF97Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF98Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFAA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFAC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB24u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDD8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFF0u, &recomp_unit_0050, "recomp_unit_0050");
}
} // namespace psprecomp
