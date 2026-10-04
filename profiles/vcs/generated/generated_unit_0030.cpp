#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0030[4082] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0, 18,
    19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 0, 30, 31, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 37, 38, 0, 39, 0, 0,
    40, 0, 41, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 51, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 59, 0, 0, 60, 0,
    0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 66, 0, 67, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0, 72, 0, 73, 0, 0,
    74, 0, 75, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    84, 85, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 92, 93, 0, 0, 0,
    94, 0, 0, 95, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102,
    0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 108, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 117, 118, 0, 0, 0, 119, 0, 0,
    120, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 126, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 132, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0,
    146, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152,
    0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 161, 162, 0, 163,
    0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0,
    178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 184, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0,
    191, 0, 192, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0,
    211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0,
    0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0,
    230, 0, 231, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256,
    0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 269, 0, 0, 0, 0, 270, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305,
    0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 348, 349, 0, 350, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368,
    0, 0, 0, 369, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 385, 0,
    0, 0, 0, 0, 0, 386, 387, 0, 0, 0, 388, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 415, 416, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 421, 0, 422, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 429,
    0, 430, 0, 0, 0, 0, 431, 0, 432, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0,
    438, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 444, 445, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 451, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0,
    454, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 460, 461, 0, 462, 0, 0, 0, 0,
    463, 0, 464, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 471,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 475, 0, 0, 476, 0, 477, 478, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 482, 0, 0, 483, 0, 484, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 519, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 527, 0, 528, 0, 0, 529, 0, 530, 531,
    0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537,
    0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543,
    544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 550,
    0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 557, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 559, 0, 560, 561, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 568, 0, 0, 0, 0, 0,
    0, 569, 0, 0, 0, 570, 0, 571, 572, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 576, 577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 581, 582,
    0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 587, 0, 0, 588, 0, 589, 0, 0, 590, 0, 591, 592, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0,
    0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0,
    0, 0, 600, 0, 0, 0, 601, 0, 602, 603, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 610, 0, 0, 0, 0, 0, 0,
    611, 0, 0, 0, 612, 0, 613, 614, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0, 618, 619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 623, 624, 0,
    625, 0, 0, 626, 0, 0, 627, 0, 628, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 634, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0,
    0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0,
    0, 0, 0, 642, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0,
    655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0,
    0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0,
    0, 677, 0, 0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 0, 689,
    0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0,
    0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0,
    0, 0, 711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 0,
    0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729,
    0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0,
    734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0,
    746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 748, 0, 0, 0, 0, 0,
    0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 752, 0, 0, 0, 0,
    0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 755, 0,
    0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 758, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762,
    0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 768, 0, 0, 0, 0, 769, 0, 0,
    770, 0, 0, 771, 0, 772, 773, 0, 0, 774, 0, 775, 0, 0, 0, 776, 777, 0, 0, 778, 0, 0, 0, 0, 779, 780, 0, 781, 0, 0, 782, 0,
    0, 0, 783, 0, 784, 0, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0,
    793, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0,
    801, 0, 802, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0,
    810, 0, 811, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0,
    819, 0, 820, 0, 821, 0, 822, 823, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0,
    0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837,
    0, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0,
    0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849,
};
void recomp_unit_0030_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0887C004u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0030[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887C004;
    case 2u: goto L_0887C01C;
    case 3u: goto L_0887C028;
    case 4u: goto L_0887C030;
    case 5u: goto L_0887C034;
    case 6u: goto L_0887C04C;
    case 7u: goto L_0887C058;
    case 8u: goto L_0887C060;
    case 9u: goto L_0887C068;
    case 10u: goto L_0887C074;
    case 11u: goto L_0887C07C;
    case 12u: goto L_0887C084;
    case 13u: goto L_0887C0D0;
    case 14u: goto L_0887C0DC;
    case 15u: goto L_0887C0E4;
    case 16u: goto L_0887C0EC;
    case 17u: goto L_0887C0F8;
    case 18u: goto L_0887C100;
    case 19u: goto L_0887C104;
    case 20u: goto L_0887C10C;
    case 21u: goto L_0887C124;
    case 22u: goto L_0887C1AC;
    case 23u: goto L_0887C1BC;
    case 24u: goto L_0887C1C4;
    case 25u: goto L_0887C1D0;
    case 26u: goto L_0887C1E4;
    case 27u: goto L_0887C1EC;
    case 28u: goto L_0887C1FC;
    case 29u: goto L_0887C20C;
    case 30u: goto L_0887C21C;
    case 31u: goto L_0887C220;
    case 32u: goto L_0887C224;
    case 33u: goto L_0887C22C;
    case 34u: goto L_0887C240;
    case 35u: goto L_0887C254;
    case 36u: goto L_0887C268;
    case 37u: goto L_0887C26C;
    case 38u: goto L_0887C270;
    case 39u: goto L_0887C278;
    case 40u: goto L_0887C284;
    case 41u: goto L_0887C28C;
    case 42u: goto L_0887C290;
    case 43u: goto L_0887C298;
    case 44u: goto L_0887C2A0;
    case 45u: goto L_0887C2B4;
    case 46u: goto L_0887C2E4;
    case 47u: goto L_0887C2F4;
    case 48u: goto L_0887C308;
    case 49u: goto L_0887C318;
    case 50u: goto L_0887C328;
    case 51u: goto L_0887C32C;
    case 52u: goto L_0887C330;
    case 53u: goto L_0887C338;
    case 54u: goto L_0887C340;
    case 55u: goto L_0887C350;
    case 56u: goto L_0887C358;
    case 57u: goto L_0887C364;
    case 58u: goto L_0887C36C;
    case 59u: goto L_0887C370;
    case 60u: goto L_0887C37C;
    case 61u: goto L_0887C388;
    case 62u: goto L_0887C390;
    case 63u: goto L_0887C3A0;
    case 64u: goto L_0887C3B0;
    case 65u: goto L_0887C3B8;
    case 66u: goto L_0887C3BC;
    case 67u: goto L_0887C3C4;
    case 68u: goto L_0887C3CC;
    case 69u: goto L_0887C3D8;
    case 70u: goto L_0887C3E0;
    case 71u: goto L_0887C3E4;
    case 72u: goto L_0887C3F0;
    case 73u: goto L_0887C3F8;
    case 74u: goto L_0887C404;
    case 75u: goto L_0887C40C;
    case 76u: goto L_0887C410;
    case 77u: goto L_0887C41C;
    case 78u: goto L_0887C434;
    case 79u: goto L_0887C440;
    case 80u: goto L_0887C448;
    case 81u: goto L_0887C450;
    case 82u: goto L_0887C464;
    case 83u: goto L_0887C474;
    case 84u: goto L_0887C484;
    case 85u: goto L_0887C488;
    case 86u: goto L_0887C48C;
    case 87u: goto L_0887C494;
    case 88u: goto L_0887C4A0;
    case 89u: goto L_0887C4CC;
    case 90u: goto L_0887C4DC;
    case 91u: goto L_0887C4EC;
    case 92u: goto L_0887C4F0;
    case 93u: goto L_0887C4F4;
    case 94u: goto L_0887C504;
    case 95u: goto L_0887C510;
    case 96u: goto L_0887C514;
    case 97u: goto L_0887C524;
    case 98u: goto L_0887C534;
    case 99u: goto L_0887C544;
    case 100u: goto L_0887C568;
    case 101u: goto L_0887C574;
    case 102u: goto L_0887C580;
    case 103u: goto L_0887C588;
    case 104u: goto L_0887C590;
    case 105u: goto L_0887C5A4;
    case 106u: goto L_0887C5B4;
    case 107u: goto L_0887C5C4;
    case 108u: goto L_0887C5C8;
    case 109u: goto L_0887C5CC;
    case 110u: goto L_0887C5D4;
    case 111u: goto L_0887C5E4;
    case 112u: goto L_0887C5F8;
    case 113u: goto L_0887C610;
    case 114u: goto L_0887C640;
    case 115u: goto L_0887C650;
    case 116u: goto L_0887C660;
    case 117u: goto L_0887C664;
    case 118u: goto L_0887C668;
    case 119u: goto L_0887C678;
    case 120u: goto L_0887C684;
    case 121u: goto L_0887C68C;
    case 122u: goto L_0887C694;
    case 123u: goto L_0887C6A8;
    case 124u: goto L_0887C6B8;
    case 125u: goto L_0887C6C8;
    case 126u: goto L_0887C6CC;
    case 127u: goto L_0887C6D0;
    case 128u: goto L_0887C6E0;
    case 129u: goto L_0887C6F4;
    case 130u: goto L_0887C704;
    case 131u: goto L_0887C714;
    case 132u: goto L_0887C718;
    case 133u: goto L_0887C71C;
    case 134u: goto L_0887C730;
    case 135u: goto L_0887C73C;
    case 136u: goto L_0887C744;
    case 137u: goto L_0887C74C;
    case 138u: goto L_0887C798;
    case 139u: goto L_0887C7A8;
    case 140u: goto L_0887C7B4;
    case 141u: goto L_0887C7C0;
    case 142u: goto L_0887C7CC;
    case 143u: goto L_0887C7E4;
    case 144u: goto L_0887C7F0;
    case 145u: goto L_0887C7FC;
    case 146u: goto L_0887C804;
    case 147u: goto L_0887C808;
    case 148u: goto L_0887C814;
    case 149u: goto L_0887C848;
    case 150u: goto L_0887C868;
    case 151u: goto L_0887C874;
    case 152u: goto L_0887C880;
    case 153u: goto L_0887C890;
    case 154u: goto L_0887C898;
    case 155u: goto L_0887C8A0;
    case 156u: goto L_0887C8AC;
    case 157u: goto L_0887C8BC;
    case 158u: goto L_0887C8D0;
    case 159u: goto L_0887C8E0;
    case 160u: goto L_0887C8F0;
    case 161u: goto L_0887C8F4;
    case 162u: goto L_0887C8F8;
    case 163u: goto L_0887C900;
    case 164u: goto L_0887C90C;
    case 165u: goto L_0887C91C;
    case 166u: goto L_0887C940;
    case 167u: goto L_0887C94C;
    case 168u: goto L_0887C954;
    case 169u: goto L_0887C958;
    case 170u: goto L_0887C960;
    case 171u: goto L_0887C968;
    case 172u: goto L_0887C998;
    case 173u: goto L_0887C9C0;
    case 174u: goto L_0887C9C8;
    case 175u: goto L_0887C9DC;
    case 176u: goto L_0887C9F0;
    case 177u: goto L_0887C9FC;
    case 178u: goto L_0887CA04;
    case 179u: goto L_0887CA10;
    case 180u: goto L_0887CA18;
    case 181u: goto L_0887CA2C;
    case 182u: goto L_0887CA38;
    case 183u: goto L_0887CA40;
    case 184u: goto L_0887CA44;
    case 185u: goto L_0887CA4C;
    case 186u: goto L_0887CA54;
    case 187u: goto L_0887CA60;
    case 188u: goto L_0887CA68;
    case 189u: goto L_0887CA70;
    case 190u: goto L_0887CA78;
    case 191u: goto L_0887CA84;
    case 192u: goto L_0887CA8C;
    case 193u: goto L_0887CA90;
    case 194u: goto L_0887CA98;
    case 195u: goto L_0887CAA0;
    case 196u: goto L_0887CAA8;
    case 197u: goto L_0887CAB4;
    case 198u: goto L_0887CAC8;
    case 199u: goto L_0887CAD0;
    case 200u: goto L_0887CAE0;
    case 201u: goto L_0887CAF8;
    case 202u: goto L_0887CB0C;
    case 203u: goto L_0887CB14;
    case 204u: goto L_0887CB28;
    case 205u: goto L_0887CB30;
    case 206u: goto L_0887CB44;
    case 207u: goto L_0887CB4C;
    case 208u: goto L_0887CB60;
    case 209u: goto L_0887CB68;
    case 210u: goto L_0887CB7C;
    case 211u: goto L_0887CB84;
    case 212u: goto L_0887CB98;
    case 213u: goto L_0887CBA0;
    case 214u: goto L_0887CBB4;
    case 215u: goto L_0887CBBC;
    case 216u: goto L_0887CBD0;
    case 217u: goto L_0887CBD8;
    case 218u: goto L_0887CBEC;
    case 219u: goto L_0887CBF4;
    case 220u: goto L_0887CC08;
    case 221u: goto L_0887CC10;
    case 222u: goto L_0887CC24;
    case 223u: goto L_0887CC2C;
    case 224u: goto L_0887CC34;
    case 225u: goto L_0887CC3C;
    case 226u: goto L_0887CC50;
    case 227u: goto L_0887CC60;
    case 228u: goto L_0887CC6C;
    case 229u: goto L_0887CC78;
    case 230u: goto L_0887CC84;
    case 231u: goto L_0887CC8C;
    case 232u: goto L_0887CC90;
    case 233u: goto L_0887CC98;
    case 234u: goto L_0887CCAC;
    case 235u: goto L_0887CCCC;
    case 236u: goto L_0887CCD4;
    case 237u: goto L_0887CD0C;
    case 238u: goto L_0887CD24;
    case 239u: goto L_0887CD30;
    case 240u: goto L_0887CD38;
    case 241u: goto L_0887CD60;
    case 242u: goto L_0887CD68;
    case 243u: goto L_0887CD88;
    case 244u: goto L_0887CD98;
    case 245u: goto L_0887CDA0;
    case 246u: goto L_0887CDE4;
    case 247u: goto L_0887CE40;
    case 248u: goto L_0887CE48;
    case 249u: goto L_0887CEB8;
    case 250u: goto L_0887CED0;
    case 251u: goto L_0887CEF8;
    case 252u: goto L_0887CF24;
    case 253u: goto L_0887CF48;
    case 254u: goto L_0887CF50;
    case 255u: goto L_0887CF78;
    case 256u: goto L_0887CF80;
    case 257u: goto L_0887CF88;
    case 258u: goto L_0887CF90;
    case 259u: goto L_0887CFA8;
    case 260u: goto L_0887CFC8;
    case 261u: goto L_0887CFD4;
    case 262u: goto L_0887CFDC;
    case 263u: goto L_0887CFF0;
    case 264u: goto L_0887D004;
    case 265u: goto L_0887D010;
    case 266u: goto L_0887D024;
    case 267u: goto L_0887D04C;
    case 268u: goto L_0887D07C;
    case 269u: goto L_0887D08C;
    case 270u: goto L_0887D0A0;
    case 271u: goto L_0887D0A4;
    case 272u: goto L_0887D0B0;
    case 273u: goto L_0887D0C0;
    case 274u: goto L_0887D0C8;
    case 275u: goto L_0887D0D0;
    case 276u: goto L_0887D0DC;
    case 277u: goto L_0887D0E4;
    case 278u: goto L_0887D0F0;
    case 279u: goto L_0887D108;
    case 280u: goto L_0887D120;
    case 281u: goto L_0887D138;
    case 282u: goto L_0887D144;
    case 283u: goto L_0887D150;
    case 284u: goto L_0887D16C;
    case 285u: goto L_0887D17C;
    case 286u: goto L_0887D190;
    case 287u: goto L_0887D208;
    case 288u: goto L_0887D21C;
    case 289u: goto L_0887D228;
    case 290u: goto L_0887D250;
    case 291u: goto L_0887D268;
    case 292u: goto L_0887D278;
    case 293u: goto L_0887D290;
    case 294u: goto L_0887D2AC;
    case 295u: goto L_0887D2D8;
    case 296u: goto L_0887D328;
    case 297u: goto L_0887D334;
    case 298u: goto L_0887D350;
    case 299u: goto L_0887D364;
    case 300u: goto L_0887D388;
    case 301u: goto L_0887D3EC;
    case 302u: goto L_0887D428;
    case 303u: goto L_0887D43C;
    case 304u: goto L_0887D478;
    case 305u: goto L_0887D480;
    case 306u: goto L_0887D488;
    case 307u: goto L_0887D490;
    case 308u: goto L_0887D498;
    case 309u: goto L_0887D4A4;
    case 310u: goto L_0887D4B8;
    case 311u: goto L_0887D4C4;
    case 312u: goto L_0887D4D4;
    case 313u: goto L_0887D4DC;
    case 314u: goto L_0887D4E4;
    case 315u: goto L_0887D4EC;
    case 316u: goto L_0887D508;
    case 317u: goto L_0887D514;
    case 318u: goto L_0887D540;
    case 319u: goto L_0887D54C;
    case 320u: goto L_0887D55C;
    case 321u: goto L_0887D560;
    case 322u: goto L_0887D584;
    case 323u: goto L_0887D598;
    case 324u: goto L_0887D5B0;
    case 325u: goto L_0887D5BC;
    case 326u: goto L_0887D5C8;
    case 327u: goto L_0887D5E0;
    case 328u: goto L_0887D610;
    case 329u: goto L_0887D618;
    case 330u: goto L_0887D624;
    case 331u: goto L_0887D63C;
    case 332u: goto L_0887D654;
    case 333u: goto L_0887D66C;
    case 334u: goto L_0887D678;
    case 335u: goto L_0887D734;
    case 336u: goto L_0887D748;
    case 337u: goto L_0887D758;
    case 338u: goto L_0887D760;
    case 339u: goto L_0887D768;
    case 340u: goto L_0887D770;
    case 341u: goto L_0887D77C;
    case 342u: goto L_0887D78C;
    case 343u: goto L_0887D7C0;
    case 344u: goto L_0887D7C8;
    case 345u: goto L_0887D7DC;
    case 346u: goto L_0887D7F4;
    case 347u: goto L_0887D80C;
    case 348u: goto L_0887D824;
    case 349u: goto L_0887D828;
    case 350u: goto L_0887D830;
    case 351u: goto L_0887D840;
    case 352u: goto L_0887D848;
    case 353u: goto L_0887D854;
    case 354u: goto L_0887D85C;
    case 355u: goto L_0887D864;
    case 356u: goto L_0887D87C;
    case 357u: goto L_0887D89C;
    case 358u: goto L_0887D8A4;
    case 359u: goto L_0887D8D4;
    case 360u: goto L_0887D964;
    case 361u: goto L_0887D9F0;
    case 362u: goto L_0887DA00;
    case 363u: goto L_0887DAD0;
    case 364u: goto L_0887DAD8;
    case 365u: goto L_0887DAE0;
    case 366u: goto L_0887DB58;
    case 367u: goto L_0887DB78;
    case 368u: goto L_0887DB80;
    case 369u: goto L_0887DB90;
    case 370u: goto L_0887DB94;
    case 371u: goto L_0887DC08;
    case 372u: goto L_0887DC14;
    case 373u: goto L_0887DC2C;
    case 374u: goto L_0887DC34;
    case 375u: goto L_0887DC50;
    case 376u: goto L_0887DC58;
    case 377u: goto L_0887DC60;
    case 378u: goto L_0887DCB4;
    case 379u: goto L_0887DCBC;
    case 380u: goto L_0887DCC8;
    case 381u: goto L_0887DCE0;
    case 382u: goto L_0887DCE8;
    case 383u: goto L_0887DCF0;
    case 384u: goto L_0887DCF8;
    case 385u: goto L_0887DCFC;
    case 386u: goto L_0887DD18;
    case 387u: goto L_0887DD1C;
    case 388u: goto L_0887DD2C;
    case 389u: goto L_0887DD30;
    case 390u: goto L_0887DD78;
    case 391u: goto L_0887DDE4;
    case 392u: goto L_0887DDF8;
    case 393u: goto L_0887DE1C;
    case 394u: goto L_0887DE24;
    case 395u: goto L_0887DE2C;
    case 396u: goto L_0887DE34;
    case 397u: goto L_0887DE4C;
    case 398u: goto L_0887DE64;
    case 399u: goto L_0887DE6C;
    case 400u: goto L_0887DE7C;
    case 401u: goto L_0887DEE0;
    case 402u: goto L_0887DF00;
    case 403u: goto L_0887DF54;
    case 404u: goto L_0887DFB0;
    case 405u: goto L_0887E008;
    case 406u: goto L_0887E010;
    case 407u: goto L_0887E034;
    case 408u: goto L_0887E044;
    case 409u: goto L_0887E04C;
    case 410u: goto L_0887E15C;
    case 411u: goto L_0887E160;
    case 412u: goto L_0887E1A4;
    case 413u: goto L_0887E1E0;
    case 414u: goto L_0887E208;
    case 415u: goto L_0887E210;
    case 416u: goto L_0887E214;
    case 417u: goto L_0887E220;
    case 418u: goto L_0887E234;
    case 419u: goto L_0887E258;
    case 420u: goto L_0887E280;
    case 421u: goto L_0887E28C;
    case 422u: goto L_0887E294;
    case 423u: goto L_0887E298;
    case 424u: goto L_0887E2A0;
    case 425u: goto L_0887E2C0;
    case 426u: goto L_0887E2E8;
    case 427u: goto L_0887E2F4;
    case 428u: goto L_0887E2FC;
    case 429u: goto L_0887E300;
    case 430u: goto L_0887E308;
    case 431u: goto L_0887E31C;
    case 432u: goto L_0887E324;
    case 433u: goto L_0887E328;
    case 434u: goto L_0887E330;
    case 435u: goto L_0887E348;
    case 436u: goto L_0887E370;
    case 437u: goto L_0887E37C;
    case 438u: goto L_0887E384;
    case 439u: goto L_0887E388;
    case 440u: goto L_0887E390;
    case 441u: goto L_0887E3B0;
    case 442u: goto L_0887E3D8;
    case 443u: goto L_0887E3E4;
    case 444u: goto L_0887E3EC;
    case 445u: goto L_0887E3F0;
    case 446u: goto L_0887E3F8;
    case 447u: goto L_0887E418;
    case 448u: goto L_0887E440;
    case 449u: goto L_0887E44C;
    case 450u: goto L_0887E454;
    case 451u: goto L_0887E458;
    case 452u: goto L_0887E460;
    case 453u: goto L_0887E47C;
    case 454u: goto L_0887E484;
    case 455u: goto L_0887E488;
    case 456u: goto L_0887E490;
    case 457u: goto L_0887E4A8;
    case 458u: goto L_0887E4D0;
    case 459u: goto L_0887E4DC;
    case 460u: goto L_0887E4E4;
    case 461u: goto L_0887E4E8;
    case 462u: goto L_0887E4F0;
    case 463u: goto L_0887E504;
    case 464u: goto L_0887E50C;
    case 465u: goto L_0887E510;
    case 466u: goto L_0887E518;
    case 467u: goto L_0887E530;
    case 468u: goto L_0887E568;
    case 469u: goto L_0887E574;
    case 470u: goto L_0887E57C;
    case 471u: goto L_0887E580;
    case 472u: goto L_0887E588;
    case 473u: goto L_0887E5BC;
    case 474u: goto L_0887E5DC;
    case 475u: goto L_0887E60C;
    case 476u: goto L_0887E618;
    case 477u: goto L_0887E620;
    case 478u: goto L_0887E624;
    case 479u: goto L_0887E62C;
    case 480u: goto L_0887E644;
    case 481u: goto L_0887E660;
    case 482u: goto L_0887E690;
    case 483u: goto L_0887E69C;
    case 484u: goto L_0887E6A4;
    case 485u: goto L_0887E6A8;
    case 486u: goto L_0887E6B0;
    case 487u: goto L_0887E6C8;
    case 488u: goto L_0887E6E4;
    case 489u: goto L_0887E714;
    case 490u: goto L_0887E720;
    case 491u: goto L_0887E728;
    case 492u: goto L_0887E72C;
    case 493u: goto L_0887E734;
    case 494u: goto L_0887E74C;
    case 495u: goto L_0887E768;
    case 496u: goto L_0887E798;
    case 497u: goto L_0887E7A4;
    case 498u: goto L_0887E7AC;
    case 499u: goto L_0887E7B0;
    case 500u: goto L_0887E7B8;
    case 501u: goto L_0887E7D0;
    case 502u: goto L_0887E7EC;
    case 503u: goto L_0887E81C;
    case 504u: goto L_0887E828;
    case 505u: goto L_0887E830;
    case 506u: goto L_0887E834;
    case 507u: goto L_0887E83C;
    case 508u: goto L_0887E854;
    case 509u: goto L_0887E870;
    case 510u: goto L_0887E8A0;
    case 511u: goto L_0887E8AC;
    case 512u: goto L_0887E8B4;
    case 513u: goto L_0887E8B8;
    case 514u: goto L_0887E8C0;
    case 515u: goto L_0887E8D8;
    case 516u: goto L_0887E8F4;
    case 517u: goto L_0887E924;
    case 518u: goto L_0887E930;
    case 519u: goto L_0887E938;
    case 520u: goto L_0887E93C;
    case 521u: goto L_0887E944;
    case 522u: goto L_0887E97C;
    case 523u: goto L_0887E998;
    case 524u: goto L_0887E9C8;
    case 525u: goto L_0887E9D4;
    case 526u: goto L_0887E9DC;
    case 527u: goto L_0887E9E0;
    case 528u: goto L_0887E9E8;
    case 529u: goto L_0887E9F4;
    case 530u: goto L_0887E9FC;
    case 531u: goto L_0887EA00;
    case 532u: goto L_0887EA08;
    case 533u: goto L_0887EA10;
    case 534u: goto L_0887EA24;
    case 535u: goto L_0887EA40;
    case 536u: goto L_0887EA70;
    case 537u: goto L_0887EA80;
    case 538u: goto L_0887EA88;
    case 539u: goto L_0887EA90;
    case 540u: goto L_0887EA98;
    case 541u: goto L_0887EAC0;
    case 542u: goto L_0887EAF8;
    case 543u: goto L_0887EB00;
    case 544u: goto L_0887EB04;
    case 545u: goto L_0887EB38;
    case 546u: goto L_0887EB4C;
    case 547u: goto L_0887EB54;
    case 548u: goto L_0887EB5C;
    case 549u: goto L_0887EB6C;
    case 550u: goto L_0887EB80;
    case 551u: goto L_0887EB88;
    case 552u: goto L_0887EB90;
    case 553u: goto L_0887EBA0;
    case 554u: goto L_0887EBD8;
    case 555u: goto L_0887EBE4;
    case 556u: goto L_0887EBEC;
    case 557u: goto L_0887EBF8;
    case 558u: goto L_0887EC10;
    case 559u: goto L_0887EC20;
    case 560u: goto L_0887EC28;
    case 561u: goto L_0887EC2C;
    case 562u: goto L_0887EC34;
    case 563u: goto L_0887EC40;
    case 564u: goto L_0887EC4C;
    case 565u: goto L_0887EC54;
    case 566u: goto L_0887EC60;
    case 567u: goto L_0887EC68;
    case 568u: goto L_0887EC6C;
    case 569u: goto L_0887EC88;
    case 570u: goto L_0887EC98;
    case 571u: goto L_0887ECA0;
    case 572u: goto L_0887ECA4;
    case 573u: goto L_0887ECAC;
    case 574u: goto L_0887ECBC;
    case 575u: goto L_0887ECC8;
    case 576u: goto L_0887ECD0;
    case 577u: goto L_0887ECD4;
    case 578u: goto L_0887ECE0;
    case 579u: goto L_0887ECE8;
    case 580u: goto L_0887ECF4;
    case 581u: goto L_0887ECFC;
    case 582u: goto L_0887ED00;
    case 583u: goto L_0887ED08;
    case 584u: goto L_0887ED14;
    case 585u: goto L_0887ED20;
    case 586u: goto L_0887ED28;
    case 587u: goto L_0887ED2C;
    case 588u: goto L_0887ED38;
    case 589u: goto L_0887ED40;
    case 590u: goto L_0887ED4C;
    case 591u: goto L_0887ED54;
    case 592u: goto L_0887ED58;
    case 593u: goto L_0887ED64;
    case 594u: goto L_0887ED78;
    case 595u: goto L_0887ED9C;
    case 596u: goto L_0887EDD4;
    case 597u: goto L_0887EDE0;
    case 598u: goto L_0887EDE8;
    case 599u: goto L_0887EDF4;
    case 600u: goto L_0887EE0C;
    case 601u: goto L_0887EE1C;
    case 602u: goto L_0887EE24;
    case 603u: goto L_0887EE28;
    case 604u: goto L_0887EE30;
    case 605u: goto L_0887EE3C;
    case 606u: goto L_0887EE48;
    case 607u: goto L_0887EE50;
    case 608u: goto L_0887EE5C;
    case 609u: goto L_0887EE64;
    case 610u: goto L_0887EE68;
    case 611u: goto L_0887EE84;
    case 612u: goto L_0887EE94;
    case 613u: goto L_0887EE9C;
    case 614u: goto L_0887EEA0;
    case 615u: goto L_0887EEA8;
    case 616u: goto L_0887EEB8;
    case 617u: goto L_0887EEC4;
    case 618u: goto L_0887EECC;
    case 619u: goto L_0887EED0;
    case 620u: goto L_0887EEDC;
    case 621u: goto L_0887EEE4;
    case 622u: goto L_0887EEF0;
    case 623u: goto L_0887EEF8;
    case 624u: goto L_0887EEFC;
    case 625u: goto L_0887EF04;
    case 626u: goto L_0887EF10;
    case 627u: goto L_0887EF1C;
    case 628u: goto L_0887EF24;
    case 629u: goto L_0887EF28;
    case 630u: goto L_0887EF34;
    case 631u: goto L_0887EF3C;
    case 632u: goto L_0887EF48;
    case 633u: goto L_0887EF50;
    case 634u: goto L_0887EF54;
    case 635u: goto L_0887EF60;
    case 636u: goto L_0887EF74;
    case 637u: goto L_0887EF98;
    case 638u: goto L_0887EFB8;
    case 639u: goto L_0887EFDC;
    case 640u: goto L_0887EFF0;
    case 641u: goto L_0887EFFC;
    case 642u: goto L_0887F010;
    case 643u: goto L_0887F014;
    case 644u: goto L_0887F024;
    case 645u: goto L_0887F038;
    case 646u: goto L_0887F06C;
    case 647u: goto L_0887F088;
    case 648u: goto L_0887F0A0;
    case 649u: goto L_0887F0AC;
    case 650u: goto L_0887F0B4;
    case 651u: goto L_0887F0C8;
    case 652u: goto L_0887F0D8;
    case 653u: goto L_0887F0E4;
    case 654u: goto L_0887F0F8;
    case 655u: goto L_0887F104;
    case 656u: goto L_0887F10C;
    case 657u: goto L_0887F12C;
    case 658u: goto L_0887F138;
    case 659u: goto L_0887F14C;
    case 660u: goto L_0887F164;
    case 661u: goto L_0887F170;
    case 662u: goto L_0887F178;
    case 663u: goto L_0887F184;
    case 664u: goto L_0887F1A4;
    case 665u: goto L_0887F1B8;
    case 666u: goto L_0887F1CC;
    case 667u: goto L_0887F1E4;
    case 668u: goto L_0887F1F8;
    case 669u: goto L_0887F210;
    case 670u: goto L_0887F23C;
    case 671u: goto L_0887F248;
    case 672u: goto L_0887F250;
    case 673u: goto L_0887F258;
    case 674u: goto L_0887F260;
    case 675u: goto L_0887F268;
    case 676u: goto L_0887F27C;
    case 677u: goto L_0887F288;
    case 678u: goto L_0887F294;
    case 679u: goto L_0887F2A0;
    case 680u: goto L_0887F2A8;
    case 681u: goto L_0887F2B0;
    case 682u: goto L_0887F2BC;
    case 683u: goto L_0887F2C8;
    case 684u: goto L_0887F2D4;
    case 685u: goto L_0887F2DC;
    case 686u: goto L_0887F2E4;
    case 687u: goto L_0887F2EC;
    case 688u: goto L_0887F2F4;
    case 689u: goto L_0887F300;
    case 690u: goto L_0887F308;
    case 691u: goto L_0887F314;
    case 692u: goto L_0887F31C;
    case 693u: goto L_0887F324;
    case 694u: goto L_0887F32C;
    case 695u: goto L_0887F338;
    case 696u: goto L_0887F344;
    case 697u: goto L_0887F350;
    case 698u: goto L_0887F368;
    case 699u: goto L_0887F388;
    case 700u: goto L_0887F39C;
    case 701u: goto L_0887F3B4;
    case 702u: goto L_0887F3C0;
    case 703u: goto L_0887F3DC;
    case 704u: goto L_0887F3F0;
    case 705u: goto L_0887F408;
    case 706u: goto L_0887F414;
    case 707u: goto L_0887F44C;
    case 708u: goto L_0887F464;
    case 709u: goto L_0887F470;
    case 710u: goto L_0887F47C;
    case 711u: goto L_0887F48C;
    case 712u: goto L_0887F498;
    case 713u: goto L_0887F4A8;
    case 714u: goto L_0887F4BC;
    case 715u: goto L_0887F4DC;
    case 716u: goto L_0887F514;
    case 717u: goto L_0887F52C;
    case 718u: goto L_0887F534;
    case 719u: goto L_0887F540;
    case 720u: goto L_0887F550;
    case 721u: goto L_0887F55C;
    case 722u: goto L_0887F568;
    case 723u: goto L_0887F57C;
    case 724u: goto L_0887F59C;
    case 725u: goto L_0887F5B4;
    case 726u: goto L_0887F5C0;
    case 727u: goto L_0887F5D8;
    case 728u: goto L_0887F5E4;
    case 729u: goto L_0887F600;
    case 730u: goto L_0887F624;
    case 731u: goto L_0887F62C;
    case 732u: goto L_0887F64C;
    case 733u: goto L_0887F660;
    case 734u: goto L_0887F684;
    case 735u: goto L_0887F6A0;
    case 736u: goto L_0887F6B4;
    case 737u: goto L_0887F708;
    case 738u: goto L_0887F710;
    case 739u: goto L_0887F72C;
    case 740u: goto L_0887F734;
    case 741u: goto L_0887F7A0;
    case 742u: goto L_0887F7BC;
    case 743u: goto L_0887F7D8;
    case 744u: goto L_0887F7E8;
    case 745u: goto L_0887F7F0;
    case 746u: goto L_0887F804;
    case 747u: goto L_0887F868;
    case 748u: goto L_0887F86C;
    case 749u: goto L_0887F888;
    case 750u: goto L_0887F8BC;
    case 751u: goto L_0887F8EC;
    case 752u: goto L_0887F8F0;
    case 753u: goto L_0887F914;
    case 754u: goto L_0887F978;
    case 755u: goto L_0887F97C;
    case 756u: goto L_0887F9A0;
    case 757u: goto L_0887F9A8;
    case 758u: goto L_0887F9AC;
    case 759u: goto L_0887F9C4;
    case 760u: goto L_0887F9D0;
    case 761u: goto L_0887F9F0;
    case 762u: goto L_0887FA00;
    case 763u: goto L_0887FA0C;
    case 764u: goto L_0887FA18;
    case 765u: goto L_0887FA24;
    case 766u: goto L_0887FA58;
    case 767u: goto L_0887FA60;
    case 768u: goto L_0887FA64;
    case 769u: goto L_0887FA78;
    case 770u: goto L_0887FA84;
    case 771u: goto L_0887FA90;
    case 772u: goto L_0887FA98;
    case 773u: goto L_0887FA9C;
    case 774u: goto L_0887FAA8;
    case 775u: goto L_0887FAB0;
    case 776u: goto L_0887FAC0;
    case 777u: goto L_0887FAC4;
    case 778u: goto L_0887FAD0;
    case 779u: goto L_0887FAE4;
    case 780u: goto L_0887FAE8;
    case 781u: goto L_0887FAF0;
    case 782u: goto L_0887FAFC;
    case 783u: goto L_0887FB0C;
    case 784u: goto L_0887FB14;
    case 785u: goto L_0887FB20;
    case 786u: goto L_0887FB28;
    case 787u: goto L_0887FB3C;
    case 788u: goto L_0887FB4C;
    case 789u: goto L_0887FBA8;
    case 790u: goto L_0887FBAC;
    case 791u: goto L_0887FBE0;
    case 792u: goto L_0887FBE8;
    case 793u: goto L_0887FC04;
    case 794u: goto L_0887FC10;
    case 795u: goto L_0887FC24;
    case 796u: goto L_0887FC48;
    case 797u: goto L_0887FC58;
    case 798u: goto L_0887FC64;
    case 799u: goto L_0887FC70;
    case 800u: goto L_0887FC7C;
    case 801u: goto L_0887FC84;
    case 802u: goto L_0887FC8C;
    case 803u: goto L_0887FC9C;
    case 804u: goto L_0887FCA4;
    case 805u: goto L_0887FCB8;
    case 806u: goto L_0887FCC0;
    case 807u: goto L_0887FCD8;
    case 808u: goto L_0887FCE0;
    case 809u: goto L_0887FCF4;
    case 810u: goto L_0887FD04;
    case 811u: goto L_0887FD0C;
    case 812u: goto L_0887FD20;
    case 813u: goto L_0887FD28;
    case 814u: goto L_0887FD40;
    case 815u: goto L_0887FD48;
    case 816u: goto L_0887FD5C;
    case 817u: goto L_0887FD6C;
    case 818u: goto L_0887FD74;
    case 819u: goto L_0887FD84;
    case 820u: goto L_0887FD8C;
    case 821u: goto L_0887FD94;
    case 822u: goto L_0887FD9C;
    case 823u: goto L_0887FDA0;
    case 824u: goto L_0887FDA8;
    case 825u: goto L_0887FDB0;
    case 826u: goto L_0887FDD0;
    case 827u: goto L_0887FDDC;
    case 828u: goto L_0887FDF0;
    case 829u: goto L_0887FE08;
    case 830u: goto L_0887FE14;
    case 831u: goto L_0887FE1C;
    case 832u: goto L_0887FE30;
    case 833u: goto L_0887FE38;
    case 834u: goto L_0887FE50;
    case 835u: goto L_0887FE58;
    case 836u: goto L_0887FE6C;
    case 837u: goto L_0887FE80;
    case 838u: goto L_0887FE90;
    case 839u: goto L_0887FE9C;
    case 840u: goto L_0887FEA8;
    case 841u: goto L_0887FEB0;
    case 842u: goto L_0887FED4;
    case 843u: goto L_0887FEF4;
    case 844u: goto L_0887FF40;
    case 845u: goto L_0887FF50;
    case 846u: goto L_0887FF68;
    case 847u: goto L_0887FF74;
    case 848u: goto L_0887FF8C;
    case 849u: goto L_0887FFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887C004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C0EC;
      }
      goto L_0887C01C;
    }
L_0887C01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C034;
    }
    goto L_0887C028;
L_0887C028:
    ctx.gpr[31] = (0x0887C030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C030u) goto L_0887C030;
    return;
L_0887C030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C034;
L_0887C034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C0EC;
      }
      goto L_0887C04C;
    }
L_0887C04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C060;
      }
      goto L_0887C058;
    }
L_0887C058:
    ctx.gpr[31] = (0x0887C060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C060u) goto L_0887C060;
    return;
L_0887C060:
    ctx.gpr[31] = (0x0887C068u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem) && ctx.pc == 0x0887C068u) goto L_0887C068;
    return;
L_0887C068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887C07C;
      }
      goto L_0887C074;
    }
L_0887C074:
    ctx.gpr[31] = (0x0887C07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C07Cu) goto L_0887C07C;
    return;
L_0887C07C:
    ctx.gpr[31] = (0x0887C084u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C084u) goto L_0887C084;
    return;
L_0887C084:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0887C0D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 93u, 0x08A3C788u>(ctx, &aot_mem) && ctx.pc == 0x0887C0D0u) goto L_0887C0D0;
    return;
L_0887C0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C0E4;
      }
      goto L_0887C0DC;
    }
L_0887C0DC:
    ctx.gpr[31] = (0x0887C0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C0E4u) goto L_0887C0E4;
    return;
L_0887C0E4:
    ctx.gpr[31] = (0x0887C0ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem) && ctx.pc == 0x0887C0ECu) goto L_0887C0EC;
    return;
L_0887C0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C104;
    }
    goto L_0887C0F8;
L_0887C0F8:
    ctx.gpr[31] = (0x0887C100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C100u) goto L_0887C100;
    return;
L_0887C100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C104;
L_0887C104:
    ctx.gpr[31] = (0x0887C10Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem) && ctx.pc == 0x0887C10Cu) goto L_0887C10C;
    return;
L_0887C10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_0887C7A8;
      }
      goto L_0887C124;
    }
L_0887C124:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2183u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(14));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0887C1ACu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13788));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C1ACu) goto L_0887C1AC;
    return;
L_0887C1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[16] = (0u | 136u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887C1C4;
      }
      goto L_0887C1BC;
    }
L_0887C1BC:
    ctx.gpr[31] = (0x0887C1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C1C4u) goto L_0887C1C4;
    return;
L_0887C1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[31] = (0x0887C1D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem) && ctx.pc == 0x0887C1D0u) goto L_0887C1D0;
    return;
L_0887C1D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 136u);
    ctx.gpr[31] = (0x0887C1E4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 104u, 0x08A3C868u>(ctx, &aot_mem) && ctx.pc == 0x0887C1E4u) goto L_0887C1E4;
    return;
L_0887C1E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C1EC;
    }
L_0887C1EC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C220;
      }
      goto L_0887C1FC;
    }
L_0887C1FC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0887C224;
    }
    goto L_0887C20C;
L_0887C20C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887C224;
      }
      goto L_0887C21C;
    }
L_0887C21C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887C220;
L_0887C220:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0887C224;
L_0887C224:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C22C;
    }
L_0887C22C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C26C;
      }
      goto L_0887C240;
    }
L_0887C240:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0887C270;
    }
    goto L_0887C254;
L_0887C254:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887C270;
      }
      goto L_0887C268;
    }
L_0887C268:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887C26C;
L_0887C26C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0887C270;
L_0887C270:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C2E4;
      }
      goto L_0887C278;
    }
L_0887C278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C290;
    }
    goto L_0887C284;
L_0887C284:
    ctx.gpr[31] = (0x0887C28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C28Cu) goto L_0887C28C;
    return;
L_0887C28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C290;
L_0887C290:
    ctx.gpr[31] = (0x0887C298u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A54DD0u>(ctx, &aot_mem) && ctx.pc == 0x0887C298u) goto L_0887C298;
    return;
L_0887C298:
    ctx.gpr[31] = (0x0887C2A0u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_0887C2A0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0887C2B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_0887C2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887C2E4;
L_0887C2E4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[19] + ctx.gpr[16]);
    goto L_0887C2F4;
L_0887C2F4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C32C;
      }
      goto L_0887C308;
    }
L_0887C308:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_0887C330;
    }
    goto L_0887C318;
L_0887C318:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0887C330;
      }
      goto L_0887C328;
    }
L_0887C328:
    ctx.gpr[6] = (0u | 1u);
    goto L_0887C32C;
L_0887C32C:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_0887C330;
L_0887C330:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C340;
      }
      goto L_0887C338;
    }
L_0887C338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C350;
      }
      goto L_0887C340;
    }
L_0887C340:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887C2F4;
      }
      goto L_0887C350;
    }
L_0887C350:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C358;
    }
L_0887C358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C370;
    }
    goto L_0887C364;
L_0887C364:
    ctx.gpr[31] = (0x0887C36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C36Cu) goto L_0887C36C;
    return;
L_0887C36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C370;
L_0887C370:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0887C390;
      }
      goto L_0887C37C;
    }
L_0887C37C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887C388u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x0887C388u) goto L_0887C388;
    return;
L_0887C388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C3CC;
      }
      goto L_0887C390;
    }
L_0887C390:
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C3A0;
    }
L_0887C3A0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C3BC;
    }
    goto L_0887C3B0;
L_0887C3B0:
    ctx.gpr[31] = (0x0887C3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C3B8u) goto L_0887C3B8;
    return;
L_0887C3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C3BC;
L_0887C3BC:
    ctx.gpr[31] = (0x0887C3C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 216u, 0x08A54D38u>(ctx, &aot_mem) && ctx.pc == 0x0887C3C4u) goto L_0887C3C4;
    return;
L_0887C3C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C3CC;
    }
L_0887C3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C3E4;
    }
    goto L_0887C3D8;
L_0887C3D8:
    ctx.gpr[31] = (0x0887C3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C3E0u) goto L_0887C3E0;
    return;
L_0887C3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C3E4;
L_0887C3E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C3F0;
    }
L_0887C3F0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C41C;
      }
      goto L_0887C3F8;
    }
L_0887C3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C410;
    }
    goto L_0887C404;
L_0887C404:
    ctx.gpr[31] = (0x0887C40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C40Cu) goto L_0887C40C;
    return;
L_0887C40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C410;
L_0887C410:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887C41Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 234u, 0x08A54E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C41Cu) goto L_0887C41C;
    return;
L_0887C41C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_0887C434;
L_0887C434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0887C448;
      }
      goto L_0887C440;
    }
L_0887C440:
    ctx.gpr[31] = (0x0887C448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C448u) goto L_0887C448;
    return;
L_0887C448:
    ctx.gpr[31] = (0x0887C450u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C450u) goto L_0887C450;
    return;
L_0887C450:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C488;
      }
      goto L_0887C464;
    }
L_0887C464:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0887C48C;
    }
    goto L_0887C474;
L_0887C474:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0887C48C;
      }
      goto L_0887C484;
    }
L_0887C484:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887C488;
L_0887C488:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0887C48C;
L_0887C48C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_0887C4A0;
      }
      goto L_0887C494;
    }
L_0887C494:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_0887C514;
      }
      goto L_0887C4A0;
    }
L_0887C4A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C4F0;
      }
      goto L_0887C4CC;
    }
L_0887C4CC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0887C4F4;
    }
    goto L_0887C4DC;
L_0887C4DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0887C4F4;
      }
      goto L_0887C4EC;
    }
L_0887C4EC:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887C4F0;
L_0887C4F0:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0887C4F4;
L_0887C4F4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887C514;
      }
      goto L_0887C504;
    }
L_0887C504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C514;
      }
      goto L_0887C510;
    }
L_0887C510:
    ctx.gpr[22] = (0u | 0u);
    goto L_0887C514;
L_0887C514:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887C434;
      }
      goto L_0887C524;
    }
L_0887C524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887C7A8;
      }
      goto L_0887C534;
    }
L_0887C534:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    goto L_0887C544;
L_0887C544:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C544;
      }
      goto L_0887C568;
    }
L_0887C568:
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(34));
    goto L_0887C574;
L_0887C574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0887C588;
      }
      goto L_0887C580;
    }
L_0887C580:
    ctx.gpr[31] = (0x0887C588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C588u) goto L_0887C588;
    return;
L_0887C588:
    ctx.gpr[31] = (0x0887C590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C590u) goto L_0887C590;
    return;
L_0887C590:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C5C8;
      }
      goto L_0887C5A4;
    }
L_0887C5A4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0887C5CC;
    }
    goto L_0887C5B4;
L_0887C5B4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0887C5CC;
      }
      goto L_0887C5C4;
    }
L_0887C5C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887C5C8;
L_0887C5C8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0887C5CC;
L_0887C5CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C5E4;
      }
      goto L_0887C5D4;
    }
L_0887C5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0887C5E4;
L_0887C5E4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887C574;
      }
      goto L_0887C5F8;
    }
L_0887C5F8:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(166));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    goto L_0887C610;
L_0887C610:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C664;
      }
      goto L_0887C640;
    }
L_0887C640:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0887C668;
    }
    goto L_0887C650;
L_0887C650:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0887C668;
      }
      goto L_0887C660;
    }
L_0887C660:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887C664;
L_0887C664:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0887C668;
L_0887C668:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C798;
      }
      goto L_0887C678;
    }
L_0887C678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0887C68C;
      }
      goto L_0887C684;
    }
L_0887C684:
    ctx.gpr[31] = (0x0887C68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C68Cu) goto L_0887C68C;
    return;
L_0887C68C:
    ctx.gpr[31] = (0x0887C694u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C694u) goto L_0887C694;
    return;
L_0887C694:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C6CC;
      }
      goto L_0887C6A8;
    }
L_0887C6A8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0887C6D0;
    }
    goto L_0887C6B8;
L_0887C6B8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0887C6D0;
      }
      goto L_0887C6C8;
    }
L_0887C6C8:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887C6CC;
L_0887C6CC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0887C6D0;
L_0887C6D0:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C798;
      }
      goto L_0887C6E0;
    }
L_0887C6E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C718;
      }
      goto L_0887C6F4;
    }
L_0887C6F4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_0887C71C;
    }
    goto L_0887C704;
L_0887C704:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0887C71C;
      }
      goto L_0887C714;
    }
L_0887C714:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887C718;
L_0887C718:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0887C71C;
L_0887C71C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C798;
      }
      goto L_0887C730;
    }
L_0887C730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C744;
      }
      goto L_0887C73C;
    }
L_0887C73C:
    ctx.gpr[31] = (0x0887C744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C744u) goto L_0887C744;
    return;
L_0887C744:
    ctx.gpr[31] = (0x0887C74Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem) && ctx.pc == 0x0887C74Cu) goto L_0887C74C;
    return;
L_0887C74C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(174), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(175), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(174), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 136u);
    ctx.gpr[31] = (0x0887C798u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 118u, 0x08A3C94Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C798u) goto L_0887C798;
    return;
L_0887C798:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0887C610;
      }
      goto L_0887C7A8;
    }
L_0887C7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0887C808;
      }
      goto L_0887C7B4;
    }
L_0887C7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887C808;
      }
      goto L_0887C7C0;
    }
L_0887C7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C808;
      }
      goto L_0887C7CC;
    }
L_0887C7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0887C7E4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08B73024u;
    return;
L_0887C7E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_0887C7FC;
      }
      goto L_0887C7F0;
    }
L_0887C7F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C808;
      }
      goto L_0887C7FC;
    }
L_0887C7FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887C808;
      }
      goto L_0887C804;
    }
L_0887C804:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    goto L_0887C808;
L_0887C808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_0887C968;
      }
      goto L_0887C814;
    }
L_0887C814:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(189), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(190), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(191), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2183u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(198));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0887C848u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13788));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C848u) goto L_0887C848;
    return;
L_0887C848:
    ctx.gpr[16] = (0u | 136u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0887C868u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08B73014u;
    return;
L_0887C868:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_0887C898;
      }
      goto L_0887C874;
    }
L_0887C874:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C898;
      }
      goto L_0887C880;
    }
L_0887C880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0887C890u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_0887C890:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0887C968;
      }
      goto L_0887C898;
    }
L_0887C898:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887C968;
      }
      goto L_0887C8A0;
    }
L_0887C8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (0x0887C8ACu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_0887C8AC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C968;
      }
      goto L_0887C8BC;
    }
L_0887C8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C8F4;
      }
      goto L_0887C8D0;
    }
L_0887C8D0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_0887C8F8;
    }
    goto L_0887C8E0;
L_0887C8E0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887C8F8;
      }
      goto L_0887C8F0;
    }
L_0887C8F0:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887C8F4;
L_0887C8F4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0887C8F8;
L_0887C8F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C968;
      }
      goto L_0887C900;
    }
L_0887C900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x0887C90Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_0887C90C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(260));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 17u);
    goto L_0887C91C;
L_0887C91C:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(192)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C91C;
      }
      goto L_0887C940;
    }
L_0887C940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_0887C958;
    }
    goto L_0887C94C;
L_0887C94C:
    ctx.gpr[31] = (0x0887C954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C954u) goto L_0887C954;
    return;
L_0887C954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887C958;
L_0887C958:
    ctx.gpr[31] = (0x0887C960u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A54DD0u>(ctx, &aot_mem) && ctx.pc == 0x0887C960u) goto L_0887C960;
    return;
L_0887C960:
    ctx.gpr[31] = (0x0887C968u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0887C998;
L_0887C968:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887C9C0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19660), static_cast<std::uint8_t>(ctx.gpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 340u, 0x08935484u>(ctx, &aot_mem) && ctx.pc == 0x0887C9C0u) goto L_0887C9C0;
    return;
L_0887C9C0:
    ctx.gpr[31] = (0x0887C9C8u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_0887C9C8:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26560));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_0887C9F0;
      }
      goto L_0887C9DC;
    }
L_0887C9DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887C9F0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C9F0u) goto L_0887C9F0;
    return;
L_0887C9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887CA04;
      }
      goto L_0887C9FC;
    }
L_0887C9FC:
    ctx.gpr[31] = (0x0887CA04u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_0887CA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887CA18;
      }
      goto L_0887CA10;
    }
L_0887CA10:
    ctx.gpr[31] = (0x0887CA18u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_0887CA18:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[31] = (0x0887CA2Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 630u, 0x0886FCACu>(ctx, &aot_mem) && ctx.pc == 0x0887CA2Cu) goto L_0887CA2C;
    return;
L_0887CA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA44;
      }
      goto L_0887CA38;
    }
L_0887CA38:
    ctx.gpr[31] = (0x0887CA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CA40u) goto L_0887CA40;
    return;
L_0887CA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887CA44;
L_0887CA44:
    ctx.gpr[31] = (0x0887CA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 255u, 0x08A54FE4u>(ctx, &aot_mem) && ctx.pc == 0x0887CA4Cu) goto L_0887CA4C;
    return;
L_0887CA4C:
    ctx.gpr[31] = (0x0887CA54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 99u, 0x08A3C804u>(ctx, &aot_mem) && ctx.pc == 0x0887CA54u) goto L_0887CA54;
    return;
L_0887CA54:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x0887CA60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 135u, 0x08ADC724u>(ctx, &aot_mem) && ctx.pc == 0x0887CA60u) goto L_0887CA60;
    return;
L_0887CA60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA78;
      }
      goto L_0887CA68;
    }
L_0887CA68:
    ctx.gpr[31] = (0x0887CA70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x0887CA70u) goto L_0887CA70;
    return;
L_0887CA70:
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27280), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_0887CA78;
L_0887CA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA90;
      }
      goto L_0887CA84;
    }
L_0887CA84:
    ctx.gpr[31] = (0x0887CA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CA8Cu) goto L_0887CA8C;
    return;
L_0887CA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887CA90;
L_0887CA90:
    ctx.gpr[31] = (0x0887CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 42u, 0x08A54358u>(ctx, &aot_mem) && ctx.pc == 0x0887CA98u) goto L_0887CA98;
    return;
L_0887CA98:
    ctx.gpr[31] = (0x0887CAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 1005u, 0x08AC3C94u>(ctx, &aot_mem) && ctx.pc == 0x0887CAA0u) goto L_0887CAA0;
    return;
L_0887CAA0:
    ctx.gpr[31] = (0x0887CAA8u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_0887CAA8:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CAC8;
      }
      goto L_0887CAB4;
    }
L_0887CAB4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887CAC8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CAC8u) goto L_0887CAC8;
    return;
L_0887CAC8:
    ctx.gpr[31] = (0x0887CAD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x0887CAD0u) goto L_0887CAD0;
    return;
L_0887CAD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC10;
      }
      goto L_0887CAE0;
    }
L_0887CAE0:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23944)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CAF8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26548));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26536));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CB0Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB0Cu) goto L_0887CB0C;
    return;
L_0887CB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB14;
    }
L_0887CB14:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26528));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26520));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CB28u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB28u) goto L_0887CB28;
    return;
L_0887CB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB30;
    }
L_0887CB30:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26508));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CB44u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB44u) goto L_0887CB44;
    return;
L_0887CB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB4C;
    }
L_0887CB4C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26500));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26496));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CB60u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB60u) goto L_0887CB60;
    return;
L_0887CB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB68;
    }
L_0887CB68:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26488));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26480));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CB7Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB7Cu) goto L_0887CB7C;
    return;
L_0887CB7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB84;
    }
L_0887CB84:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26472));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26460));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CB98u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB98u) goto L_0887CB98;
    return;
L_0887CB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CBA0;
    }
L_0887CBA0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26452));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26440));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CBB4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CBB4u) goto L_0887CBB4;
    return;
L_0887CBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CBBC;
    }
L_0887CBBC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26432));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26416));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CBD0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CBD0u) goto L_0887CBD0;
    return;
L_0887CBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CBD8;
    }
L_0887CBD8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26408));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26396));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CBECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CBECu) goto L_0887CBEC;
    return;
L_0887CBEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CBF4;
    }
L_0887CBF4:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26388));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26384));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CC08u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CC08u) goto L_0887CC08;
    return;
L_0887CC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CC10;
    }
L_0887CC10:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26376));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0887CC24u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CC24u) goto L_0887CC24;
    return;
L_0887CC24:
    ctx.gpr[31] = (0x0887CC2Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_0887CC2C:
    ctx.gpr[31] = (0x0887CC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 110u, 0x08870784u>(ctx, &aot_mem) && ctx.pc == 0x0887CC34u) goto L_0887CC34;
    return;
L_0887CC34:
    ctx.gpr[31] = (0x0887CC3Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_0887CC3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887CC50u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CC50u) goto L_0887CC50;
    return;
L_0887CC50:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887CC60u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x0887CC60u) goto L_0887CC60;
    return;
L_0887CC60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887CC6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 532u, 0x08A06154u>(ctx, &aot_mem) && ctx.pc == 0x0887CC6Cu) goto L_0887CC6C;
    return;
L_0887CC6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887CC78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CC78u) goto L_0887CC78;
    return;
L_0887CC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC90;
      }
      goto L_0887CC84;
    }
L_0887CC84:
    ctx.gpr[31] = (0x0887CC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CC8Cu) goto L_0887CC8C;
    return;
L_0887CC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_0887CC90;
L_0887CC90:
    ctx.gpr[31] = (0x0887CC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 730u, 0x08A53CC4u>(ctx, &aot_mem) && ctx.pc == 0x0887CC98u) goto L_0887CC98;
    return;
L_0887CC98:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887CCACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CCACu) goto L_0887CCAC;
    return;
L_0887CCAC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
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
L_0887CCCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CCD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-26368), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-26367), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[15])) && ctx.fpr[12] == ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887CD24;
      }
      goto L_0887CD0C;
    }
L_0887CD0C:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_0887CD38;
    }
    goto L_0887CD24;
L_0887CD24:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0887CD30u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x0887CD30u) goto L_0887CD30;
    return;
L_0887CD30:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0887CD38;
L_0887CD38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8048));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CD60:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-26368), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CD68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-26368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CEB8;
      }
      goto L_0887CD88;
    }
L_0887CD88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-26367)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(8048));
      if (branch_taken) {
          goto L_0887CE48;
      }
      goto L_0887CD98;
    }
L_0887CD98:
    ctx.gpr[31] = (0x0887CDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0887CDA0u) goto L_0887CDA0;
    return;
L_0887CDA0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0887CDE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0887CDE4u) goto L_0887CDE4;
    return;
L_0887CDE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 237u);
    ctx.gpr[8] = (0u | 130u);
    ctx.gpr[9] = (0u | 180u);
    ctx.gpr[10] = (0u | 200u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0887CE40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x0887CE40u) goto L_0887CE40;
    return;
L_0887CE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CEB8;
      }
      goto L_0887CE48;
    }
L_0887CE48:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 237u);
    ctx.gpr[8] = (0u | 130u);
    ctx.gpr[9] = (0u | 180u);
    ctx.gpr[10] = (0u | 200u);
    ctx.gpr[11] = (0u | 1024u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0887CEB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x0887CEB8u) goto L_0887CEB8;
    return;
L_0887CEB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CED0:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
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
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CEF8:
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887CF48;
      }
      goto L_0887CF24;
    }
L_0887CF24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887CF48;
L_0887CF48:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0887CF78u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_0887D144;
L_0887CF78:
    ctx.gpr[31] = (0x0887CF80u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    goto L_0887D144;
L_0887CF80:
    ctx.gpr[31] = (0x0887CF88u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    goto L_0887D334;
L_0887CF88:
    ctx.gpr[31] = (0x0887CF90u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    goto L_0887D21C;
L_0887CF90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0887D004;
      }
      goto L_0887CFC8;
    }
L_0887CFC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887CFD4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887D43C;
L_0887CFD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFF0;
      }
      goto L_0887CFDC;
    }
L_0887CFDC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D010;
      }
      goto L_0887CFF0;
    }
L_0887CFF0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D010;
      }
      goto L_0887D004;
    }
L_0887D004:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_0887D010;
L_0887D010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 1u);
      if (branch_taken) {
          goto L_0887D0F0;
      }
      goto L_0887D04C;
    }
L_0887D04C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0887D07Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 82u, 0x0894855Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D07Cu) goto L_0887D07C;
    return;
L_0887D07C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887D08Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 394u, 0x089F2404u>(ctx, &aot_mem) && ctx.pc == 0x0887D08Cu) goto L_0887D08C;
    return;
L_0887D08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0887D0E4;
      }
      goto L_0887D0A0;
    }
L_0887D0A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0887D0A4;
L_0887D0A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887D0C8;
      }
      goto L_0887D0B0;
    }
L_0887D0B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0887D0A4;
      }
      goto L_0887D0C0;
    }
L_0887D0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D0E4;
      }
      goto L_0887D0C8;
    }
L_0887D0C8:
    ctx.gpr[31] = (0x0887D0D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 566u, 0x089F3530u>(ctx, &aot_mem) && ctx.pc == 0x0887D0D0u) goto L_0887D0D0;
    return;
L_0887D0D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887D0DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0887D150;
L_0887D0DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D0F0;
      }
      goto L_0887D0E4;
    }
L_0887D0E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887D0F0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887D150;
L_0887D0F0:
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
L_0887D108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D138;
      }
      goto L_0887D120;
    }
L_0887D120:
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0887D138u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    goto L_0887D228;
L_0887D138:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D144:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887D208;
      }
      goto L_0887D16C;
    }
L_0887D16C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887D208;
      }
      goto L_0887D17C;
    }
L_0887D17C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0887D190u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 409u, 0x089F26B4u>(ctx, &aot_mem) && ctx.pc == 0x0887D190u) goto L_0887D190;
    return;
L_0887D190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3960)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887D208;
L_0887D208:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D21C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D278;
      }
      goto L_0887D250;
    }
L_0887D250:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x0887D268u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem) && ctx.pc == 0x0887D268u) goto L_0887D268;
    return;
L_0887D268:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887D278u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0887D290;
L_0887D278:
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
L_0887D290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0887D328;
      }
      goto L_0887D2AC;
    }
L_0887D2AC:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0887D2D8;
    }
    goto L_0887D2D8;
L_0887D2D8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), 0u);
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
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887D328u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    goto L_0887CEF8;
L_0887D328:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887D350u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0887D21C;
L_0887D350:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0887D428;
      }
      goto L_0887D388;
    }
L_0887D388:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x0887D3ECu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_0887D290;
L_0887D3EC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887D428;
L_0887D428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887D478u);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0887D478u) goto L_0887D478;
    return;
L_0887D478:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4E4;
      }
      goto L_0887D480;
    }
L_0887D480:
    ctx.gpr[31] = (0x0887D488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0887D488u) goto L_0887D488;
    return;
L_0887D488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4DC;
      }
      goto L_0887D490;
    }
L_0887D490:
    ctx.gpr[31] = (0x0887D498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887D024;
L_0887D498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4D4;
      }
      goto L_0887D4A4;
    }
L_0887D4A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[31] = (0x0887D4B8u);
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x0887D4B8u) goto L_0887D4B8;
    return;
L_0887D4B8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_0887D4EC;
    }
    goto L_0887D4C4;
L_0887D4C4:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887D4EC;
      }
      goto L_0887D4D4;
    }
L_0887D4D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D8A4;
      }
      goto L_0887D4DC;
    }
L_0887D4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D8A4;
      }
      goto L_0887D4E4;
    }
L_0887D4E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D8A4;
      }
      goto L_0887D4EC;
    }
L_0887D4EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[6] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x0887D508u);
    ctx.gpr[19] = (ctx.gpr[4] | ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 623u, 0x08A2FE10u>(ctx, &aot_mem) && ctx.pc == 0x0887D508u) goto L_0887D508;
    return;
L_0887D508:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D760;
      }
      goto L_0887D514;
    }
L_0887D514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0887D540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 82u, 0x0894855Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D540u) goto L_0887D540;
    return;
L_0887D540:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887D54Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887D108;
L_0887D54C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D758;
      }
      goto L_0887D55C;
    }
L_0887D55C:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    goto L_0887D560;
L_0887D560:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[19] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887D584u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 394u, 0x089F2404u>(ctx, &aot_mem) && ctx.pc == 0x0887D584u) goto L_0887D584;
    return;
L_0887D584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D598;
    }
L_0887D598:
    ctx.gpr[23] = (ctx.gpr[22] << 6u);
    ctx.gpr[23] = (ctx.gpr[21] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887D734;
      }
      goto L_0887D5B0;
    }
L_0887D5B0:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0887D5BCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0887D144;
L_0887D5BC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0887D5C8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_0887D150;
L_0887D5C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D734;
      }
      goto L_0887D5E0;
    }
L_0887D5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0887D610u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2FC38u>(ctx, &aot_mem) && ctx.pc == 0x0887D610u) goto L_0887D610;
    return;
L_0887D610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D734;
      }
      goto L_0887D618;
    }
L_0887D618:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0887D624u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0887D334;
L_0887D624:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x0887D63Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_0887D364;
L_0887D63C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D734;
      }
      goto L_0887D654;
    }
L_0887D654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D734;
      }
      goto L_0887D66C;
    }
L_0887D66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0887D678u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 342u, 0x08911370u>(ctx, &aot_mem) && ctx.pc == 0x0887D678u) goto L_0887D678;
    return;
L_0887D678:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 1u);
    goto L_0887D734;
L_0887D734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D598;
      }
      goto L_0887D748;
    }
L_0887D748:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
      if (branch_taken) {
          goto L_0887D560;
      }
      goto L_0887D758;
    }
L_0887D758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D828;
      }
      goto L_0887D760;
    }
L_0887D760:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D828;
      }
      goto L_0887D768;
    }
L_0887D768:
    ctx.gpr[31] = (0x0887D770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887D108;
L_0887D770:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x0887D77Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0887D144;
L_0887D77C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887D78Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2128));
    goto L_0887D150;
L_0887D78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2128));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0887D7C0u);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2FC38u>(ctx, &aot_mem) && ctx.pc == 0x0887D7C0u) goto L_0887D7C0;
    return;
L_0887D7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D828;
      }
      goto L_0887D7C8;
    }
L_0887D7C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2128));
    ctx.gpr[31] = (0x0887D7DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0887D150;
L_0887D7DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x0887D7F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0887D364;
L_0887D7F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D828;
      }
      goto L_0887D80C;
    }
L_0887D80C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D828;
      }
      goto L_0887D824;
    }
L_0887D824:
    ctx.gpr[18] = (0u | 1u);
    goto L_0887D828;
L_0887D828:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D864;
      }
      goto L_0887D830;
    }
L_0887D830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    ctx.gpr[31] = (0x0887D840u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 342u, 0x08911370u>(ctx, &aot_mem) && ctx.pc == 0x0887D840u) goto L_0887D840;
    return;
L_0887D840:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D85C;
      }
      goto L_0887D848;
    }
L_0887D848:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887D854u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0887D43C;
L_0887D854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D8A4;
      }
      goto L_0887D85C;
    }
L_0887D85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D8A4;
      }
      goto L_0887D864;
    }
L_0887D864:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887D87Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_0887D8D4;
L_0887D87C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x0887D89Cu);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    goto L_0887D228;
L_0887D89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0887D8A4;
      }
      goto L_0887D8A4;
    }
L_0887D8A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D8D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[16]);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(336));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887D9F0;
      }
      goto L_0887D964;
    }
L_0887D964:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = ctx.fpr[28] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DA00;
      }
      goto L_0887D9F0;
    }
L_0887D9F0:
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    goto L_0887DA00;
L_0887DA00:
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DAD8;
      }
      goto L_0887DAD0;
    }
L_0887DAD0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887DAE0;
      }
      goto L_0887DAD8;
    }
L_0887DAD8:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0887DAE0;
L_0887DAE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16328u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61206u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_0887DB58;
L_0887DB58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_0887DB80;
      }
      goto L_0887DB78;
    }
L_0887DB78:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_0887DB94;
      }
      goto L_0887DB80;
    }
L_0887DB80:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB94;
      }
      goto L_0887DB90;
    }
L_0887DB90:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0887DB94;
L_0887DB94:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC60;
      }
      goto L_0887DC08;
    }
L_0887DC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC34;
      }
      goto L_0887DC14;
    }
L_0887DC14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0887DC2Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0887DD78;
L_0887DC2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC58;
      }
      goto L_0887DC34;
    }
L_0887DC34:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DCF8;
      }
      goto L_0887DC50;
    }
L_0887DC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DCFC;
      }
      goto L_0887DC58;
    }
L_0887DC58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DD30;
      }
      goto L_0887DC60;
    }
L_0887DC60:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0887DCB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x0887DCB4u) goto L_0887DCB4;
    return;
L_0887DCB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DCF0;
      }
      goto L_0887DCBC;
    }
L_0887DCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DCF0;
      }
      goto L_0887DCC8;
    }
L_0887DCC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0887DCE0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0887DD78;
L_0887DCE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DCF0;
      }
      goto L_0887DCE8;
    }
L_0887DCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DD30;
      }
      goto L_0887DCF0;
    }
L_0887DCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC34;
      }
      goto L_0887DCF8;
    }
L_0887DCF8:
    ctx.gpr[16] = (0u | 9999u);
    goto L_0887DCFC;
L_0887DCFC:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DD1C;
      }
      goto L_0887DD18;
    }
L_0887DD18:
    ctx.gpr[16] = (0u | 9999u);
    goto L_0887DD1C;
L_0887DD1C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DB58;
      }
      goto L_0887DD2C;
    }
L_0887DD2C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887DD30;
L_0887DD30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DD78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-496));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[8] = (14979u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[18]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887DE2C;
      }
      goto L_0887DDE4;
    }
L_0887DDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE24;
      }
      goto L_0887DDF8;
    }
L_0887DDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE34;
      }
      goto L_0887DE1C;
    }
L_0887DE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE6C;
      }
      goto L_0887DE24;
    }
L_0887DE24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E160;
      }
      goto L_0887DE2C;
    }
L_0887DE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E160;
      }
      goto L_0887DE34;
    }
L_0887DE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887DE6C;
      }
      goto L_0887DE4C;
    }
L_0887DE4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1640)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DE6C;
      }
      goto L_0887DE64;
    }
L_0887DE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E160;
      }
      goto L_0887DE6C;
    }
L_0887DE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0887DE7Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 407u, 0x089F264Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DE7Cu) goto L_0887DE7C;
    return;
L_0887DE7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E044;
      }
      goto L_0887DEE0;
    }
L_0887DEE0:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[22] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0887DF00u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_0887CED0;
L_0887DF00:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(336));
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
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E034;
      }
      goto L_0887DF54;
    }
L_0887DF54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E034;
      }
      goto L_0887DFB0;
    }
L_0887DFB0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0887E008u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x0887E008u) goto L_0887E008;
    return;
L_0887E008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E034;
      }
      goto L_0887E010;
    }
L_0887E010:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    goto L_0887E034;
L_0887E034:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEE0;
      }
      goto L_0887E044;
    }
L_0887E044:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E15C;
      }
      goto L_0887E04C;
    }
L_0887E04C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E160;
      }
      goto L_0887E15C;
    }
L_0887E15C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0887E160;
L_0887E160:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E1E0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E1E0u) goto L_0887E1E0;
    return;
L_0887E1E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E214;
    }
    goto L_0887E208;
L_0887E208:
    ctx.gpr[31] = (0x0887E210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E210u) goto L_0887E210;
    return;
L_0887E210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E214;
L_0887E214:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0887E220u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 650u, 0x089EBFB4u>(ctx, &aot_mem) && ctx.pc == 0x0887E220u) goto L_0887E220;
    return;
L_0887E220:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E234u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E234u) goto L_0887E234;
    return;
L_0887E234:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E280u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E280u) goto L_0887E280;
    return;
L_0887E280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E298;
    }
    goto L_0887E28C;
L_0887E28C:
    ctx.gpr[31] = (0x0887E294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E294u) goto L_0887E294;
    return;
L_0887E294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E298;
L_0887E298:
    ctx.gpr[31] = (0x0887E2A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E2A0u) goto L_0887E2A0;
    return;
L_0887E2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E2C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E2E8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E2E8u) goto L_0887E2E8;
    return;
L_0887E2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E300;
      }
      goto L_0887E2F4;
    }
L_0887E2F4:
    ctx.gpr[31] = (0x0887E2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E2FCu) goto L_0887E2FC;
    return;
L_0887E2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E300;
L_0887E300:
    ctx.gpr[31] = (0x0887E308u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E308u) goto L_0887E308;
    return;
L_0887E308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E328;
      }
      goto L_0887E31C;
    }
L_0887E31C:
    ctx.gpr[31] = (0x0887E324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E324u) goto L_0887E324;
    return;
L_0887E324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E328;
L_0887E328:
    ctx.gpr[31] = (0x0887E330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem) && ctx.pc == 0x0887E330u) goto L_0887E330;
    return;
L_0887E330:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E370u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E370u) goto L_0887E370;
    return;
L_0887E370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E388;
    }
    goto L_0887E37C;
L_0887E37C:
    ctx.gpr[31] = (0x0887E384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E384u) goto L_0887E384;
    return;
L_0887E384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E388;
L_0887E388:
    ctx.gpr[31] = (0x0887E390u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E390u) goto L_0887E390;
    return;
L_0887E390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E3B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E3D8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E3D8u) goto L_0887E3D8;
    return;
L_0887E3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E3F0;
    }
    goto L_0887E3E4;
L_0887E3E4:
    ctx.gpr[31] = (0x0887E3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E3ECu) goto L_0887E3EC;
    return;
L_0887E3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E3F0;
L_0887E3F0:
    ctx.gpr[31] = (0x0887E3F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E3F8u) goto L_0887E3F8;
    return;
L_0887E3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E440u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E440u) goto L_0887E440;
    return;
L_0887E440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E458;
      }
      goto L_0887E44C;
    }
L_0887E44C:
    ctx.gpr[31] = (0x0887E454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E454u) goto L_0887E454;
    return;
L_0887E454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E458;
L_0887E458:
    ctx.gpr[31] = (0x0887E460u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E460u) goto L_0887E460;
    return;
L_0887E460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E488;
      }
      goto L_0887E47C;
    }
L_0887E47C:
    ctx.gpr[31] = (0x0887E484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E484u) goto L_0887E484;
    return;
L_0887E484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E488;
L_0887E488:
    ctx.gpr[31] = (0x0887E490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem) && ctx.pc == 0x0887E490u) goto L_0887E490;
    return;
L_0887E490:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E4D0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E4D0u) goto L_0887E4D0;
    return;
L_0887E4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E4E8;
      }
      goto L_0887E4DC;
    }
L_0887E4DC:
    ctx.gpr[31] = (0x0887E4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E4E4u) goto L_0887E4E4;
    return;
L_0887E4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E4E8;
L_0887E4E8:
    ctx.gpr[31] = (0x0887E4F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E4F0u) goto L_0887E4F0;
    return;
L_0887E4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E510;
      }
      goto L_0887E504;
    }
L_0887E504:
    ctx.gpr[31] = (0x0887E50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E50Cu) goto L_0887E50C;
    return;
L_0887E50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E510;
L_0887E510:
    ctx.gpr[31] = (0x0887E518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem) && ctx.pc == 0x0887E518u) goto L_0887E518;
    return;
L_0887E518:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E568u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E568u) goto L_0887E568;
    return;
L_0887E568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E580;
    }
    goto L_0887E574;
L_0887E574:
    ctx.gpr[31] = (0x0887E57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E57Cu) goto L_0887E57C;
    return;
L_0887E57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E580;
L_0887E580:
    ctx.gpr[31] = (0x0887E588u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E588u) goto L_0887E588;
    return;
L_0887E588:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887E5BCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E5BCu) goto L_0887E5BC;
    return;
L_0887E5BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E5DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E60Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E60Cu) goto L_0887E60C;
    return;
L_0887E60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E624;
    }
    goto L_0887E618;
L_0887E618:
    ctx.gpr[31] = (0x0887E620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E620u) goto L_0887E620;
    return;
L_0887E620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E624;
L_0887E624:
    ctx.gpr[31] = (0x0887E62Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E62Cu) goto L_0887E62C;
    return;
L_0887E62C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E644u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E644u) goto L_0887E644;
    return;
L_0887E644:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E690u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E690u) goto L_0887E690;
    return;
L_0887E690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E6A8;
    }
    goto L_0887E69C;
L_0887E69C:
    ctx.gpr[31] = (0x0887E6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E6A4u) goto L_0887E6A4;
    return;
L_0887E6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E6A8;
L_0887E6A8:
    ctx.gpr[31] = (0x0887E6B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E6B0u) goto L_0887E6B0;
    return;
L_0887E6B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E6C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E6C8u) goto L_0887E6C8;
    return;
L_0887E6C8:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E6E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E714u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E714u) goto L_0887E714;
    return;
L_0887E714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E72C;
    }
    goto L_0887E720;
L_0887E720:
    ctx.gpr[31] = (0x0887E728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E728u) goto L_0887E728;
    return;
L_0887E728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E72C;
L_0887E72C:
    ctx.gpr[31] = (0x0887E734u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E734u) goto L_0887E734;
    return;
L_0887E734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E74Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E74Cu) goto L_0887E74C;
    return;
L_0887E74C:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E798u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E798u) goto L_0887E798;
    return;
L_0887E798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E7B0;
    }
    goto L_0887E7A4;
L_0887E7A4:
    ctx.gpr[31] = (0x0887E7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E7ACu) goto L_0887E7AC;
    return;
L_0887E7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E7B0;
L_0887E7B0:
    ctx.gpr[31] = (0x0887E7B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E7B8u) goto L_0887E7B8;
    return;
L_0887E7B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E7D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E7D0u) goto L_0887E7D0;
    return;
L_0887E7D0:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E7EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E81Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E81Cu) goto L_0887E81C;
    return;
L_0887E81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E834;
    }
    goto L_0887E828;
L_0887E828:
    ctx.gpr[31] = (0x0887E830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E830u) goto L_0887E830;
    return;
L_0887E830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E834;
L_0887E834:
    ctx.gpr[31] = (0x0887E83Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E83Cu) goto L_0887E83C;
    return;
L_0887E83C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E854u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E854u) goto L_0887E854;
    return;
L_0887E854:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E8A0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E8A0u) goto L_0887E8A0;
    return;
L_0887E8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E8B8;
    }
    goto L_0887E8AC;
L_0887E8AC:
    ctx.gpr[31] = (0x0887E8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E8B4u) goto L_0887E8B4;
    return;
L_0887E8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E8B8;
L_0887E8B8:
    ctx.gpr[31] = (0x0887E8C0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E8C0u) goto L_0887E8C0;
    return;
L_0887E8C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887E8D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E8D8u) goto L_0887E8D8;
    return;
L_0887E8D8:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E8F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E924u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E924u) goto L_0887E924;
    return;
L_0887E924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E93C;
    }
    goto L_0887E930;
L_0887E930:
    ctx.gpr[31] = (0x0887E938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E938u) goto L_0887E938;
    return;
L_0887E938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E93C;
L_0887E93C:
    ctx.gpr[31] = (0x0887E944u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E944u) goto L_0887E944;
    return;
L_0887E944:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887E97Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887E97Cu) goto L_0887E97C;
    return;
L_0887E97C:
    ctx.gpr[2] = (0u | 0u);
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
L_0887E998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887E9C8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E9C8u) goto L_0887E9C8;
    return;
L_0887E9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887E9E0;
    }
    goto L_0887E9D4;
L_0887E9D4:
    ctx.gpr[31] = (0x0887E9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E9DCu) goto L_0887E9DC;
    return;
L_0887E9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887E9E0;
L_0887E9E0:
    ctx.gpr[31] = (0x0887E9E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887E9E8u) goto L_0887E9E8;
    return;
L_0887E9E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887EA00;
      }
      goto L_0887E9F4;
    }
L_0887E9F4:
    ctx.gpr[31] = (0x0887E9FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 779u, 0x08B673B0u>(ctx, &aot_mem) && ctx.pc == 0x0887E9FCu) goto L_0887E9FC;
    return;
L_0887E9FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887EA00;
L_0887EA00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887EA10;
      }
      goto L_0887EA08;
    }
L_0887EA08:
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    goto L_0887EA10;
L_0887EA10:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887EA24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887EA24u) goto L_0887EA24;
    return;
L_0887EA24:
    ctx.gpr[2] = (0u | 0u);
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
L_0887EA40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887EA70u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EA70u) goto L_0887EA70;
    return;
L_0887EA70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
      if (branch_taken) {
          goto L_0887EA80;
      }
      goto L_0887EA80;
    }
L_0887EA80:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0887EA98;
    }
    goto L_0887EA88;
L_0887EA88:
    ctx.gpr[31] = (0x0887EA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EA90u) goto L_0887EA90;
    return;
L_0887EA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0887EA98;
L_0887EA98:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0887EAC0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EAC0u) goto L_0887EAC0;
    return;
L_0887EAC0:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EB04;
      }
      goto L_0887EAF8;
    }
L_0887EAF8:
    ctx.gpr[31] = (0x0887EB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EB00u) goto L_0887EB00;
    return;
L_0887EB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887EB04;
L_0887EB04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EB38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EB54;
      }
      goto L_0887EB4C;
    }
L_0887EB4C:
    ctx.gpr[31] = (0x0887EB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem) && ctx.pc == 0x0887EB54u) goto L_0887EB54;
    return;
L_0887EB54:
    ctx.gpr[31] = (0x0887EB5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 416u, 0x0886EC4Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EB5Cu) goto L_0887EB5C;
    return;
L_0887EB5C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EB6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EB80;
    }
L_0887EB80:
    ctx.gpr[31] = (0x0887EB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem) && ctx.pc == 0x0887EB88u) goto L_0887EB88;
    return;
L_0887EB88:
    ctx.gpr[31] = (0x0887EB90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 430u, 0x0886ED34u>(ctx, &aot_mem) && ctx.pc == 0x0887EB90u) goto L_0887EB90;
    return;
L_0887EB90:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EBA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887EBD8u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EBD8u) goto L_0887EBD8;
    return;
L_0887EBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887EBEC;
      }
      goto L_0887EBE4;
    }
L_0887EBE4:
    ctx.gpr[31] = (0x0887EBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EBECu) goto L_0887EBEC;
    return;
L_0887EBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[31] = (0x0887EBF8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887EBF8u) goto L_0887EBF8;
    return;
L_0887EBF8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0887EC10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EC10u) goto L_0887EC10;
    return;
L_0887EC10:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EC2C;
    }
    goto L_0887EC20;
L_0887EC20:
    ctx.gpr[31] = (0x0887EC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EC28u) goto L_0887EC28;
    return;
L_0887EC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EC2C;
L_0887EC2C:
    ctx.gpr[31] = (0x0887EC34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem) && ctx.pc == 0x0887EC34u) goto L_0887EC34;
    return;
L_0887EC34:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887EC54;
      }
      goto L_0887EC40;
    }
L_0887EC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC54;
      }
      goto L_0887EC4C;
    }
L_0887EC4C:
    ctx.gpr[31] = (0x0887EC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EC54u) goto L_0887EC54;
    return;
L_0887EC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EC6C;
    }
    goto L_0887EC60;
L_0887EC60:
    ctx.gpr[31] = (0x0887EC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EC68u) goto L_0887EC68;
    return;
L_0887EC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EC6C;
L_0887EC6C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[31] = (0x0887EC88u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 456u, 0x0880E158u>(ctx, &aot_mem) && ctx.pc == 0x0887EC88u) goto L_0887EC88;
    return;
L_0887EC88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887ECA4;
    }
    goto L_0887EC98;
L_0887EC98:
    ctx.gpr[31] = (0x0887ECA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887ECA0u) goto L_0887ECA0;
    return;
L_0887ECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887ECA4;
L_0887ECA4:
    ctx.gpr[31] = (0x0887ECACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887ECACu) goto L_0887ECAC;
    return;
L_0887ECAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887ECE8;
      }
      goto L_0887ECBC;
    }
L_0887ECBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887ECD4;
    }
    goto L_0887ECC8;
L_0887ECC8:
    ctx.gpr[31] = (0x0887ECD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887ECD0u) goto L_0887ECD0;
    return;
L_0887ECD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887ECD4;
L_0887ECD4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887ECE0u);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x0887ECE0u) goto L_0887ECE0;
    return;
L_0887ECE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED64;
      }
      goto L_0887ECE8;
    }
L_0887ECE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887ED00;
    }
    goto L_0887ECF4;
L_0887ECF4:
    ctx.gpr[31] = (0x0887ECFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887ECFCu) goto L_0887ECFC;
    return;
L_0887ECFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887ED00;
L_0887ED00:
    ctx.gpr[31] = (0x0887ED08u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887ED08u) goto L_0887ED08;
    return;
L_0887ED08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED40;
      }
      goto L_0887ED14;
    }
L_0887ED14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887ED2C;
    }
    goto L_0887ED20;
L_0887ED20:
    ctx.gpr[31] = (0x0887ED28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887ED28u) goto L_0887ED28;
    return;
L_0887ED28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887ED2C;
L_0887ED2C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887ED38u);
    ctx.gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x0887ED38u) goto L_0887ED38;
    return;
L_0887ED38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED64;
      }
      goto L_0887ED40;
    }
L_0887ED40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887ED58;
    }
    goto L_0887ED4C;
L_0887ED4C:
    ctx.gpr[31] = (0x0887ED54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887ED54u) goto L_0887ED54;
    return;
L_0887ED54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887ED58;
L_0887ED58:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887ED64u);
    ctx.gpr[6] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x0887ED64u) goto L_0887ED64;
    return;
L_0887ED64:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887ED78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887ED78u) goto L_0887ED78;
    return;
L_0887ED78:
    ctx.gpr[2] = (0u | 0u);
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
L_0887ED9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887EDD4u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EDD4u) goto L_0887EDD4;
    return;
L_0887EDD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887EDE8;
      }
      goto L_0887EDE0;
    }
L_0887EDE0:
    ctx.gpr[31] = (0x0887EDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EDE8u) goto L_0887EDE8;
    return;
L_0887EDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[31] = (0x0887EDF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887EDF4u) goto L_0887EDF4;
    return;
L_0887EDF4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0887EE0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EE0Cu) goto L_0887EE0C;
    return;
L_0887EE0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EE28;
    }
    goto L_0887EE1C;
L_0887EE1C:
    ctx.gpr[31] = (0x0887EE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EE24u) goto L_0887EE24;
    return;
L_0887EE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EE28;
L_0887EE28:
    ctx.gpr[31] = (0x0887EE30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem) && ctx.pc == 0x0887EE30u) goto L_0887EE30;
    return;
L_0887EE30:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887EE50;
      }
      goto L_0887EE3C;
    }
L_0887EE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE50;
      }
      goto L_0887EE48;
    }
L_0887EE48:
    ctx.gpr[31] = (0x0887EE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EE50u) goto L_0887EE50;
    return;
L_0887EE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EE68;
    }
    goto L_0887EE5C;
L_0887EE5C:
    ctx.gpr[31] = (0x0887EE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EE64u) goto L_0887EE64;
    return;
L_0887EE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EE68;
L_0887EE68:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[31] = (0x0887EE84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EE84u) goto L_0887EE84;
    return;
L_0887EE84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887EEA0;
    }
    goto L_0887EE94;
L_0887EE94:
    ctx.gpr[31] = (0x0887EE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EE9Cu) goto L_0887EE9C;
    return;
L_0887EE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887EEA0;
L_0887EEA0:
    ctx.gpr[31] = (0x0887EEA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887EEA8u) goto L_0887EEA8;
    return;
L_0887EEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887EEE4;
      }
      goto L_0887EEB8;
    }
L_0887EEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EED0;
    }
    goto L_0887EEC4;
L_0887EEC4:
    ctx.gpr[31] = (0x0887EECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EECCu) goto L_0887EECC;
    return;
L_0887EECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EED0;
L_0887EED0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887EEDCu);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x0887EEDCu) goto L_0887EEDC;
    return;
L_0887EEDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EF60;
      }
      goto L_0887EEE4;
    }
L_0887EEE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
        goto L_0887EEFC;
    }
    goto L_0887EEF0;
L_0887EEF0:
    ctx.gpr[31] = (0x0887EEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EEF8u) goto L_0887EEF8;
    return;
L_0887EEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_0887EEFC;
L_0887EEFC:
    ctx.gpr[31] = (0x0887EF04u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x0887EF04u) goto L_0887EF04;
    return;
L_0887EF04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EF3C;
      }
      goto L_0887EF10;
    }
L_0887EF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EF28;
    }
    goto L_0887EF1C;
L_0887EF1C:
    ctx.gpr[31] = (0x0887EF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EF24u) goto L_0887EF24;
    return;
L_0887EF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EF28;
L_0887EF28:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887EF34u);
    ctx.gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x0887EF34u) goto L_0887EF34;
    return;
L_0887EF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EF60;
      }
      goto L_0887EF3C;
    }
L_0887EF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_0887EF54;
    }
    goto L_0887EF48;
L_0887EF48:
    ctx.gpr[31] = (0x0887EF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0887EF50u) goto L_0887EF50;
    return;
L_0887EF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_0887EF54;
L_0887EF54:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887EF60u);
    ctx.gpr[6] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem) && ctx.pc == 0x0887EF60u) goto L_0887EF60;
    return;
L_0887EF60:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887EF74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0887EF74u) goto L_0887EF74;
    return;
L_0887EF74:
    ctx.gpr[2] = (0u | 0u);
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
L_0887EF98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887EFB8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EFB8u) goto L_0887EFB8;
    return;
L_0887EFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EFDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887EFF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 779u, 0x08B673B0u>(ctx, &aot_mem) && ctx.pc == 0x0887EFF0u) goto L_0887EFF0;
    return;
L_0887EFF0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F014;
      }
      goto L_0887EFFC;
    }
L_0887EFFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F014;
      }
      goto L_0887F010;
    }
L_0887F010:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F014;
L_0887F014:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F038u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 258u, 0x08A696F8u>(ctx, &aot_mem) && ctx.pc == 0x0887F038u) goto L_0887F038;
    return;
L_0887F038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21080));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F06C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0887F0B4;
      }
      goto L_0887F088;
    }
L_0887F088:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21080));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887F0A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 501u, 0x08A66220u>(ctx, &aot_mem) && ctx.pc == 0x0887F0A0u) goto L_0887F0A0;
    return;
L_0887F0A0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0B4;
      }
      goto L_0887F0AC;
    }
L_0887F0AC:
    ctx.gpr[31] = (0x0887F0B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0887F0E4;
L_0887F0B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F0C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F0D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 780u, 0x08B673CCu>(ctx, &aot_mem) && ctx.pc == 0x0887F0D8u) goto L_0887F0D8;
    return;
L_0887F0D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F0F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 788u, 0x08B67490u>(ctx, &aot_mem) && ctx.pc == 0x0887F0F8u) goto L_0887F0F8;
    return;
L_0887F0F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F104:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F10C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F138;
      }
      goto L_0887F12C;
    }
L_0887F12C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887F138u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 222u, 0x08B212B4u>(ctx, &aot_mem) && ctx.pc == 0x0887F138u) goto L_0887F138;
    return;
L_0887F138:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1836)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887F170;
      }
      goto L_0887F164;
    }
L_0887F164:
    ctx.gpr[4] = (77u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28672));
      if (branch_taken) {
          goto L_0887F184;
      }
      goto L_0887F170;
    }
L_0887F170:
    ctx.gpr[31] = (0x0887F178u);
    // nop
    ctx.pc = 0x08B73564u;
    return;
L_0887F178:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28672));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    goto L_0887F184;
L_0887F184:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26312));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0887F1A4u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B73534u;
    return;
L_0887F1A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0887F1B8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B7342Cu;
    return;
L_0887F1B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0887F1CCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 485u, 0x08ABE3E4u>(ctx, &aot_mem) && ctx.pc == 0x0887F1CCu) goto L_0887F1CC;
    return;
L_0887F1CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F1E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F1F8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 484u, 0x08ABE3BCu>(ctx, &aot_mem) && ctx.pc == 0x0887F1F8u) goto L_0887F1F8;
    return;
L_0887F1F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(31984));
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F23Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x0887F23Cu) goto L_0887F23C;
    return;
L_0887F23C:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F258;
      }
      goto L_0887F248;
    }
L_0887F248:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F260;
      }
      goto L_0887F250;
    }
L_0887F250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F27C;
      }
      goto L_0887F258;
    }
L_0887F258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F350;
      }
      goto L_0887F260;
    }
L_0887F260:
    ctx.gpr[31] = (0x0887F268u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 685u, 0x08ABF2D8u>(ctx, &aot_mem) && ctx.pc == 0x0887F268u) goto L_0887F268;
    return;
L_0887F268:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6784));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F31C;
      }
      goto L_0887F27C;
    }
L_0887F27C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0887F288u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 318u, 0x08939374u>(ctx, &aot_mem) && ctx.pc == 0x0887F288u) goto L_0887F288;
    return;
L_0887F288:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887F294u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 571u, 0x08ABEA10u>(ctx, &aot_mem) && ctx.pc == 0x0887F294u) goto L_0887F294;
    return;
L_0887F294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F2EC;
      }
      goto L_0887F2A0;
    }
L_0887F2A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F308;
      }
      goto L_0887F2A8;
    }
L_0887F2A8:
    ctx.gpr[31] = (0x0887F2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem) && ctx.pc == 0x0887F2B0u) goto L_0887F2B0;
    return;
L_0887F2B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887F2BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 571u, 0x08ABEA10u>(ctx, &aot_mem) && ctx.pc == 0x0887F2BCu) goto L_0887F2BC;
    return;
L_0887F2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F2EC;
      }
      goto L_0887F2C8;
    }
L_0887F2C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0887F2D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 318u, 0x08939374u>(ctx, &aot_mem) && ctx.pc == 0x0887F2D4u) goto L_0887F2D4;
    return;
L_0887F2D4:
    ctx.gpr[31] = (0x0887F2DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 641u, 0x08ABEFDCu>(ctx, &aot_mem) && ctx.pc == 0x0887F2DCu) goto L_0887F2DC;
    return;
L_0887F2DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F324;
      }
      goto L_0887F2E4;
    }
L_0887F2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F32C;
      }
      goto L_0887F2EC;
    }
L_0887F2EC:
    ctx.gpr[31] = (0x0887F2F4u);
    // nop
    goto L_0887F804;
L_0887F2F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0887F300u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 318u, 0x08939374u>(ctx, &aot_mem) && ctx.pc == 0x0887F300u) goto L_0887F300;
    return;
L_0887F300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F350;
      }
      goto L_0887F308;
    }
L_0887F308:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0887F314u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 318u, 0x08939374u>(ctx, &aot_mem) && ctx.pc == 0x0887F314u) goto L_0887F314;
    return;
L_0887F314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F350;
      }
      goto L_0887F31C;
    }
L_0887F31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F350;
      }
      goto L_0887F324;
    }
L_0887F324:
    ctx.gpr[31] = (0x0887F32Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 650u, 0x08ABF048u>(ctx, &aot_mem) && ctx.pc == 0x0887F32Cu) goto L_0887F32C;
    return;
L_0887F32C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887F338u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 571u, 0x08ABEA10u>(ctx, &aot_mem) && ctx.pc == 0x0887F338u) goto L_0887F338;
    return;
L_0887F338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F2EC;
      }
      goto L_0887F344;
    }
L_0887F344:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0887F350u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 318u, 0x08939374u>(ctx, &aot_mem) && ctx.pc == 0x0887F350u) goto L_0887F350;
    return;
L_0887F350:
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
L_0887F368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F388u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0887F5E4;
L_0887F388:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F39C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F3B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3224));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F3B4u) goto L_0887F3B4;
    return;
L_0887F3B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F3C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F3DCu);
    ctx.gpr[5] = (0u | 2u);
    goto L_0887F6B4;
L_0887F3DC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F3F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F408u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3136));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F408u) goto L_0887F408;
    return;
L_0887F408:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F4BC;
      }
      goto L_0887F44C;
    }
L_0887F44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F47C;
      }
      goto L_0887F464;
    }
L_0887F464:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0887F470u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0887F5E4;
L_0887F470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887F47C;
L_0887F47C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4A8;
      }
      goto L_0887F48C;
    }
L_0887F48C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4A8;
      }
      goto L_0887F498;
    }
L_0887F498:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0887F4A8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0887F5E4;
L_0887F4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887F44C;
      }
      goto L_0887F4BC;
    }
L_0887F4BC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0887F4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F57C;
      }
      goto L_0887F514;
    }
L_0887F514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F540;
      }
      goto L_0887F52C;
    }
L_0887F52C:
    ctx.gpr[31] = (0x0887F534u);
    ctx.gpr[5] = (0u | 2u);
    goto L_0887F6B4;
L_0887F534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887F540;
L_0887F540:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F568;
      }
      goto L_0887F550;
    }
L_0887F550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F568;
      }
      goto L_0887F55C;
    }
L_0887F55C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x0887F568u);
    ctx.gpr[5] = (0u | 2u);
    goto L_0887F6B4;
L_0887F568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887F514;
      }
      goto L_0887F57C;
    }
L_0887F57C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0887F59C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F5B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3052));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F5B4u) goto L_0887F5B4;
    return;
L_0887F5B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F5C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887F5D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2852));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x0887F5D8u) goto L_0887F5D8;
    return;
L_0887F5D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F5E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F62C;
      }
      goto L_0887F600;
    }
L_0887F600:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(31984));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(31984)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F62C;
      }
      goto L_0887F624;
    }
L_0887F624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F6A0;
      }
      goto L_0887F62C;
    }
L_0887F62C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887F64Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 828u, 0x08B67798u>(ctx, &aot_mem) && ctx.pc == 0x0887F64Cu) goto L_0887F64C;
    return;
L_0887F64C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887F660u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 803u, 0x08B67558u>(ctx, &aot_mem) && ctx.pc == 0x0887F660u) goto L_0887F660;
    return;
L_0887F660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887F6A0;
      }
      goto L_0887F684;
    }
L_0887F684:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18632));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0887F6A0;
L_0887F6A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887F708;
L_0887F708:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
        goto L_0887F734;
    }
    goto L_0887F710;
L_0887F710:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
        goto L_0887F734;
    }
    goto L_0887F72C;
L_0887F72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0887F708;
      }
      goto L_0887F734;
    }
L_0887F734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F7D8;
      }
      goto L_0887F7A0;
    }
L_0887F7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x0887F7BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 816u, 0x08B676C4u>(ctx, &aot_mem) && ctx.pc == 0x0887F7BCu) goto L_0887F7BC;
    return;
L_0887F7BC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18632));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0887F7D8;
L_0887F7D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F7E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F7F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7584)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2240u << 16u);
        goto L_0887F8F0;
    }
    goto L_0887F868;
L_0887F868:
    ctx.gpr[5] = (2240u << 16u);
    goto L_0887F86C;
L_0887F86C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2240u << 16u);
      if (branch_taken) {
          goto L_0887F8BC;
      }
      goto L_0887F888;
    }
L_0887F888:
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887F914;
      }
      goto L_0887F8BC;
    }
L_0887F8BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2240u << 16u);
      if (branch_taken) {
          goto L_0887F86C;
      }
      goto L_0887F8EC;
    }
L_0887F8EC:
    ctx.gpr[4] = (2240u << 16u);
    goto L_0887F8F0;
L_0887F8F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    goto L_0887F914;
L_0887F914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_0887FBAC;
    }
    goto L_0887F978;
L_0887F978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0887F97C;
L_0887F97C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9AC;
      }
      goto L_0887F9A0;
    }
L_0887F9A0:
    ctx.gpr[31] = (0x0887F9A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 930u, 0x08B67F44u>(ctx, &aot_mem) && ctx.pc == 0x0887F9A8u) goto L_0887F9A8;
    return;
L_0887F9A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887F9AC;
L_0887F9AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x0887F9C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 626u, 0x08ABEEBCu>(ctx, &aot_mem) && ctx.pc == 0x0887F9C4u) goto L_0887F9C4;
    return;
L_0887F9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887FB3C;
      }
      goto L_0887F9D0;
    }
L_0887F9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x0887F9F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 816u, 0x08B676C4u>(ctx, &aot_mem) && ctx.pc == 0x0887F9F0u) goto L_0887F9F0;
    return;
L_0887F9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_0887FA24;
    }
    goto L_0887FA00;
L_0887FA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_0887FA18;
    }
    goto L_0887FA0C;
L_0887FA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0887FA18;
L_0887FA18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887FB3C;
      }
      goto L_0887FA24;
    }
L_0887FA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FA60;
      }
      goto L_0887FA58;
    }
L_0887FA58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
      if (branch_taken) {
          goto L_0887FA64;
      }
      goto L_0887FA60;
    }
L_0887FA60:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    goto L_0887FA64;
L_0887FA64:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FA9C;
      }
      goto L_0887FA78;
    }
L_0887FA78:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x0887FA84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0887FA84u) goto L_0887FA84;
    return;
L_0887FA84:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_0887FA9C;
      }
      goto L_0887FA90;
    }
L_0887FA90:
    ctx.gpr[31] = (0x0887FA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0887FA98u) goto L_0887FA98;
    return;
L_0887FA98:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0887FA9C;
L_0887FA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887FAB0;
      }
      goto L_0887FAA8;
    }
L_0887FAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0887FAC4;
      }
      goto L_0887FAB0;
    }
L_0887FAB0:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887FAC0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0887FAC0u) goto L_0887FAC0;
    return;
L_0887FAC0:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[21]);
    goto L_0887FAC4;
L_0887FAC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_0887FAE8;
    }
    goto L_0887FAD0;
L_0887FAD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887FAD0;
      }
      goto L_0887FAE4;
    }
L_0887FAE4:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0887FAE8;
L_0887FAE8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887FB14;
      }
      goto L_0887FAF0;
    }
L_0887FAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887FB14;
      }
      goto L_0887FAFC;
    }
L_0887FAFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887FB0Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0887FB0Cu) goto L_0887FB0C;
    return;
L_0887FB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887FB14;
      }
      goto L_0887FB14;
    }
L_0887FB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887FB28;
      }
      goto L_0887FB20;
    }
L_0887FB20:
    ctx.gpr[31] = (0x0887FB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0887FB28u) goto L_0887FB28;
    return;
L_0887FB28:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_0887FB3C;
L_0887FB3C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0887FB4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 626u, 0x08ABEEBCu>(ctx, &aot_mem) && ctx.pc == 0x0887FB4Cu) goto L_0887FB4C;
    return;
L_0887FB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_0887F97C;
    }
    goto L_0887FBA8;
L_0887FBA8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0887FBAC;
L_0887FBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2240u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.gpr[31] = (0x0887FBE0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 828u, 0x08B67798u>(ctx, &aot_mem) && ctx.pc == 0x0887FBE0u) goto L_0887FBE0;
    return;
L_0887FBE0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FC10;
      }
      goto L_0887FBE8;
    }
L_0887FBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x0887FC04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 803u, 0x08B67558u>(ctx, &aot_mem) && ctx.pc == 0x0887FC04u) goto L_0887FC04;
    return;
L_0887FC04:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887FBE8;
      }
      goto L_0887FC10;
    }
L_0887FC10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(26160));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887FE90;
      }
      goto L_0887FC24;
    }
L_0887FC24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[9] = (25455u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(27698));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887FD8C;
      }
      goto L_0887FC48;
    }
L_0887FC48:
    ctx.gpr[9] = (24942u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(26989));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[9] = (116u << 16u);
      if (branch_taken) {
          goto L_0887FD94;
      }
      goto L_0887FC58;
    }
L_0887FC58:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[9] = (109u << 16u);
      if (branch_taken) {
          goto L_0887FC8C;
      }
      goto L_0887FC64;
    }
L_0887FC64:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(25708));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[9] = (67u << 16u);
      if (branch_taken) {
          goto L_0887FC84;
      }
      goto L_0887FC70;
    }
L_0887FC70:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16717));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0887FD9C;
      }
      goto L_0887FC7C;
    }
L_0887FC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDA0;
      }
      goto L_0887FC84;
    }
L_0887FC84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDA0;
      }
      goto L_0887FC8C;
    }
L_0887FC8C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 840 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FD84;
      }
      goto L_0887FC9C;
    }
L_0887FC9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887FCB8;
      }
      goto L_0887FCA4;
    }
L_0887FCA4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_0887FCC0;
    }
    goto L_0887FCB8;
L_0887FCB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FCF4;
      }
      goto L_0887FCC0;
    }
L_0887FCC0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_0887FCE0;
    }
    goto L_0887FCD8;
L_0887FCD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FCF4;
      }
      goto L_0887FCE0;
    }
L_0887FCE0:
    ctx.gpr[10] = (ctx.gpr[8] << 5u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_0887FCF4;
L_0887FCF4:
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FD74;
      }
      goto L_0887FD04;
    }
L_0887FD04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887FD20;
      }
      goto L_0887FD0C;
    }
L_0887FD0C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_0887FD28;
    }
    goto L_0887FD20;
L_0887FD20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FD5C;
      }
      goto L_0887FD28;
    }
L_0887FD28:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_0887FD48;
    }
    goto L_0887FD40;
L_0887FD40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FD5C;
      }
      goto L_0887FD48;
    }
L_0887FD48:
    ctx.gpr[10] = (ctx.gpr[8] << 5u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_0887FD5C;
L_0887FD5C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0887FD74;
      }
      goto L_0887FD6C;
    }
L_0887FD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0887FD84;
      }
      goto L_0887FD74;
    }
L_0887FD74:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 840 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FC9C;
      }
      goto L_0887FD84;
    }
L_0887FD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDA0;
      }
      goto L_0887FD8C;
    }
L_0887FD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDA0;
      }
      goto L_0887FD94;
    }
L_0887FD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDA0;
      }
      goto L_0887FD9C;
    }
L_0887FD9C:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887FDA0;
L_0887FDA0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDB0;
      }
      goto L_0887FDA8;
    }
L_0887FDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FE80;
      }
      goto L_0887FDB0;
    }
L_0887FDB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0887FE08;
      }
      goto L_0887FDD0;
    }
L_0887FDD0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDF0;
      }
      goto L_0887FDDC;
    }
L_0887FDDC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_0887FDF0;
L_0887FDF0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0887FDD0;
      }
      goto L_0887FE08;
    }
L_0887FE08:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887FE80;
      }
      goto L_0887FE14;
    }
L_0887FE14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887FE30;
      }
      goto L_0887FE1C;
    }
L_0887FE1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_0887FE38;
    }
    goto L_0887FE30;
L_0887FE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FE6C;
      }
      goto L_0887FE38;
    }
L_0887FE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
        goto L_0887FE58;
    }
    goto L_0887FE50;
L_0887FE50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FE6C;
      }
      goto L_0887FE58;
    }
L_0887FE58:
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0887FE6C;
L_0887FE6C:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887FE80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3828));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 352u, 0x08A65998u>(ctx, &aot_mem) && ctx.pc == 0x0887FE80u) goto L_0887FE80;
    return;
L_0887FE80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887FC24;
      }
      goto L_0887FE90;
    }
L_0887FE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887FEB0;
      }
      goto L_0887FE9C;
    }
L_0887FE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FEB0;
      }
      goto L_0887FEA8;
    }
L_0887FEA8:
    ctx.gpr[31] = (0x0887FEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0887FEB0u) goto L_0887FEB0;
    return;
L_0887FEB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887FEF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    goto L_0887F1E4;
L_0887FEF4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (2240u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25160));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887FF40u);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 856u, 0x08B67A40u>(ctx, &aot_mem) && ctx.pc == 0x0887FF40u) goto L_0887FF40;
    return;
L_0887FF40:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887FF50u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 861u, 0x08B67AB4u>(ctx, &aot_mem) && ctx.pc == 0x0887FF50u) goto L_0887FF50;
    return;
L_0887FF50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887FF68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 881u, 0x08B67C1Cu>(ctx, &aot_mem) && ctx.pc == 0x0887FF68u) goto L_0887FF68;
    return;
L_0887FF68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x0887FF74u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26288));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0887FF74u) goto L_0887FF74;
    return;
L_0887FF74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF8C:
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[6]);
    ctx.pc = 0x08880000u; return;
}

void recomp_unit_0030(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0030_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_30(Runtime &runtime) {
    runtime.register_generated_unit(30u, 0x0887C000u, 16384u, &recomp_unit_0030, &recomp_unit_0030_entry);
    runtime.register_function(0x0887C004u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C01Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C028u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C030u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C034u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C058u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C060u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C068u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C074u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C07Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C084u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C100u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C104u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C10Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C124u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C20Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C21Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C220u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C224u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C22Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C240u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C254u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C268u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C26Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C270u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C278u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C284u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C290u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C298u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C308u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C318u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C328u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C32Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C330u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C338u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C340u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C350u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C358u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C364u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C36Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C370u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C37Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C388u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C390u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C404u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C40Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C410u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C41Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C434u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C440u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C448u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C450u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C464u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C474u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C484u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C48Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C494u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C510u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C514u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C524u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C534u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C544u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C574u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C580u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C590u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C610u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C640u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C650u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C664u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C668u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C678u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C684u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C68Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C694u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C704u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C714u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C718u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C71Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C730u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C73Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C744u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C74Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C798u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C804u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C808u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C814u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C848u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C874u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C880u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C890u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C898u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C900u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C90Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C91Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C940u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C94Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C954u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C958u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C960u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C968u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C998u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CEB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CEF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D004u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D024u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D07Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D08Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D108u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D120u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D138u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D144u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D150u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D16Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D17Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D190u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D208u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D21Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D228u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D250u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D268u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D278u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D290u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D328u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D334u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D350u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D364u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D388u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D428u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D43Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D480u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D490u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D498u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D508u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D514u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D540u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D54Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D55Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D560u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D584u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D610u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D618u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D624u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D63Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D66Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D678u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D734u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D748u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D758u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D760u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D768u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D770u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D77Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D78Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D80Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D824u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D848u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D854u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D85Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D864u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D87Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D89Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D964u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E008u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E034u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E044u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E15Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E160u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E208u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E210u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E214u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E220u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E234u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E258u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E280u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E294u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E298u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E300u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E308u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E31Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E324u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E328u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E330u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E348u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E370u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E37Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E384u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E388u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E390u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E418u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E440u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E44Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E454u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E458u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E460u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E47Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E484u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E490u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E50Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E510u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E518u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E530u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E574u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E57Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E580u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E60Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E618u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E620u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E624u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E644u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E69Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E714u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E720u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E728u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E734u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E74Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E768u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E798u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E81Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E834u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E83Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E854u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E924u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E930u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E938u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E93Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E944u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E97Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E998u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EECCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F014u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F024u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F038u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F06Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F088u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F104u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F10Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F12Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F138u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F14Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F164u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F170u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F178u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F184u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F210u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F23Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F248u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F250u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F258u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F260u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F268u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F27Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F288u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F294u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F300u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F308u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F314u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F31Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F324u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F32Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F338u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F344u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F350u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F368u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F388u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F39Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F408u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F414u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F44Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F464u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F470u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F47Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F48Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F498u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F514u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F52Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F534u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F540u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F550u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F55Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F57Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F59Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F600u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F624u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F64Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F684u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F708u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F710u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F734u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F804u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F86Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F888u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F914u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F978u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F97Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FED4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFC8u, &recomp_unit_0030, "recomp_unit_0030");
}
} // namespace psprecomp
