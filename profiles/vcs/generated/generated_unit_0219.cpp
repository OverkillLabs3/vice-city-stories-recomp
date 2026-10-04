#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0219[4084] = {
    1, 0, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 47, 0, 48, 0, 49, 0, 50, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56,
    0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81,
    0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103,
    0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 123, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0,
    129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 182, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 248, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0,
    253, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0,
    287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294,
    0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 301, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 306, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 334,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 347,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 359,
    0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0,
    0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377,
    0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0,
    0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0,
    0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423,
    0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 440,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465,
    0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0,
    0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0,
    480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 488, 0, 489, 0, 0, 0, 0,
    0, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0,
    0, 0, 504, 0, 505, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 519, 0, 0,
    0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0,
    0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0,
    548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 552, 553, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0,
    558, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 565, 566, 0, 567, 0, 0, 568, 0, 569,
    570, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 578,
    579, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 585, 0, 586, 0, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600,
    0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616,
    0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632,
    0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648,
    0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664,
    0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680,
    0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694,
    0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 707,
    0, 708, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0, 716, 0, 717,
    0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727,
    0, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742,
    0, 743, 0, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758,
    0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 0, 0, 766, 0, 767, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 773,
    0, 774, 0, 775, 0, 776, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 789,
    0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802,
    0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 816, 817, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820,
    0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0,
    0, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 0, 832, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 839,
    0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 843, 844, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 0, 848,
    0, 0, 0, 0, 849, 0, 0, 850, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0,
    856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0,
    862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 865, 0, 866, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    868, 0, 869, 0, 0, 0, 870, 0, 871, 872, 0, 0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0,
    0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 882, 0, 0, 0,
    0, 0, 883, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 892, 893,
    0, 894, 0, 895, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0,
    0, 0, 0, 899, 0, 0, 0, 0, 900, 901, 0, 0, 0, 0, 0, 902, 0, 0, 0, 903,
};
void recomp_unit_0219_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B70000u;
        entry_id = (entry_delta < 16336u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0219[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B70000;
    case 2u: goto L_08B7000C;
    case 3u: goto L_08B70014;
    case 4u: goto L_08B70018;
    case 5u: goto L_08B70038;
    case 6u: goto L_08B70058;
    case 7u: goto L_08B7006C;
    case 8u: goto L_08B70078;
    case 9u: goto L_08B700A8;
    case 10u: goto L_08B700B4;
    case 11u: goto L_08B700C4;
    case 12u: goto L_08B700EC;
    case 13u: goto L_08B7010C;
    case 14u: goto L_08B70128;
    case 15u: goto L_08B70150;
    case 16u: goto L_08B70170;
    case 17u: goto L_08B70198;
    case 18u: goto L_08B7024C;
    case 19u: goto L_08B70250;
    case 20u: goto L_08B70280;
    case 21u: goto L_08B702EC;
    case 22u: goto L_08B70314;
    case 23u: goto L_08B70328;
    case 24u: goto L_08B70348;
    case 25u: goto L_08B70358;
    case 26u: goto L_08B70368;
    case 27u: goto L_08B70370;
    case 28u: goto L_08B70394;
    case 29u: goto L_08B703A8;
    case 30u: goto L_08B703BC;
    case 31u: goto L_08B703C4;
    case 32u: goto L_08B703D4;
    case 33u: goto L_08B703E4;
    case 34u: goto L_08B703F4;
    case 35u: goto L_08B70400;
    case 36u: goto L_08B70418;
    case 37u: goto L_08B70430;
    case 38u: goto L_08B70440;
    case 39u: goto L_08B70450;
    case 40u: goto L_08B70458;
    case 41u: goto L_08B70478;
    case 42u: goto L_08B70480;
    case 43u: goto L_08B704A8;
    case 44u: goto L_08B704C0;
    case 45u: goto L_08B704C8;
    case 46u: goto L_08B704D8;
    case 47u: goto L_08B704DC;
    case 48u: goto L_08B704E4;
    case 49u: goto L_08B704EC;
    case 50u: goto L_08B704F4;
    case 51u: goto L_08B704F8;
    case 52u: goto L_08B70544;
    case 53u: goto L_08B70554;
    case 54u: goto L_08B70560;
    case 55u: goto L_08B70570;
    case 56u: goto L_08B7057C;
    case 57u: goto L_08B70588;
    case 58u: goto L_08B70590;
    case 59u: goto L_08B7059C;
    case 60u: goto L_08B705B8;
    case 61u: goto L_08B705C8;
    case 62u: goto L_08B705D8;
    case 63u: goto L_08B705F0;
    case 64u: goto L_08B70600;
    case 65u: goto L_08B7060C;
    case 66u: goto L_08B70614;
    case 67u: goto L_08B7061C;
    case 68u: goto L_08B70628;
    case 69u: goto L_08B7062C;
    case 70u: goto L_08B70634;
    case 71u: goto L_08B70640;
    case 72u: goto L_08B70654;
    case 73u: goto L_08B70670;
    case 74u: goto L_08B70680;
    case 75u: goto L_08B70694;
    case 76u: goto L_08B706A0;
    case 77u: goto L_08B706AC;
    case 78u: goto L_08B706B4;
    case 79u: goto L_08B706C8;
    case 80u: goto L_08B706E4;
    case 81u: goto L_08B706FC;
    case 82u: goto L_08B70708;
    case 83u: goto L_08B70710;
    case 84u: goto L_08B70724;
    case 85u: goto L_08B7074C;
    case 86u: goto L_08B70758;
    case 87u: goto L_08B70778;
    case 88u: goto L_08B7077C;
    case 89u: goto L_08B707B0;
    case 90u: goto L_08B707C8;
    case 91u: goto L_08B707E4;
    case 92u: goto L_08B707EC;
    case 93u: goto L_08B707F8;
    case 94u: goto L_08B70800;
    case 95u: goto L_08B70814;
    case 96u: goto L_08B7082C;
    case 97u: goto L_08B70834;
    case 98u: goto L_08B7083C;
    case 99u: goto L_08B7084C;
    case 100u: goto L_08B7085C;
    case 101u: goto L_08B70868;
    case 102u: goto L_08B70874;
    case 103u: goto L_08B7087C;
    case 104u: goto L_08B7088C;
    case 105u: goto L_08B70894;
    case 106u: goto L_08B708B4;
    case 107u: goto L_08B70910;
    case 108u: goto L_08B70918;
    case 109u: goto L_08B70950;
    case 110u: goto L_08B70954;
    case 111u: goto L_08B7095C;
    case 112u: goto L_08B70978;
    case 113u: goto L_08B70984;
    case 114u: goto L_08B70990;
    case 115u: goto L_08B70998;
    case 116u: goto L_08B709A8;
    case 117u: goto L_08B709B0;
    case 118u: goto L_08B709D0;
    case 119u: goto L_08B70A2C;
    case 120u: goto L_08B70A34;
    case 121u: goto L_08B70A6C;
    case 122u: goto L_08B70A70;
    case 123u: goto L_08B70A78;
    case 124u: goto L_08B70A94;
    case 125u: goto L_08B70AA8;
    case 126u: goto L_08B70AAC;
    case 127u: goto L_08B70AE4;
    case 128u: goto L_08B70AEC;
    case 129u: goto L_08B70B00;
    case 130u: goto L_08B70B04;
    case 131u: goto L_08B70B3C;
    case 132u: goto L_08B70B44;
    case 133u: goto L_08B70B58;
    case 134u: goto L_08B70B5C;
    case 135u: goto L_08B70B94;
    case 136u: goto L_08B70B9C;
    case 137u: goto L_08B70BAC;
    case 138u: goto L_08B70BB8;
    case 139u: goto L_08B70BC0;
    case 140u: goto L_08B70BF0;
    case 141u: goto L_08B70C20;
    case 142u: goto L_08B70C40;
    case 143u: goto L_08B70C58;
    case 144u: goto L_08B70C64;
    case 145u: goto L_08B70C80;
    case 146u: goto L_08B70C8C;
    case 147u: goto L_08B70CA0;
    case 148u: goto L_08B70CAC;
    case 149u: goto L_08B70CB4;
    case 150u: goto L_08B70CB8;
    case 151u: goto L_08B70CC0;
    case 152u: goto L_08B70CC8;
    case 153u: goto L_08B70CDC;
    case 154u: goto L_08B70D10;
    case 155u: goto L_08B70D1C;
    case 156u: goto L_08B70D20;
    case 157u: goto L_08B70D30;
    case 158u: goto L_08B70D48;
    case 159u: goto L_08B70D60;
    case 160u: goto L_08B70D74;
    case 161u: goto L_08B70D84;
    case 162u: goto L_08B70D88;
    case 163u: goto L_08B70DC4;
    case 164u: goto L_08B70E28;
    case 165u: goto L_08B70E40;
    case 166u: goto L_08B70E54;
    case 167u: goto L_08B70E68;
    case 168u: goto L_08B70E78;
    case 169u: goto L_08B70E84;
    case 170u: goto L_08B70E98;
    case 171u: goto L_08B70EA4;
    case 172u: goto L_08B70EC8;
    case 173u: goto L_08B70ED4;
    case 174u: goto L_08B70EDC;
    case 175u: goto L_08B70EEC;
    case 176u: goto L_08B70F00;
    case 177u: goto L_08B70F30;
    case 178u: goto L_08B70F38;
    case 179u: goto L_08B70F40;
    case 180u: goto L_08B70F60;
    case 181u: goto L_08B70F64;
    case 182u: goto L_08B70F74;
    case 183u: goto L_08B70F88;
    case 184u: goto L_08B70F98;
    case 185u: goto L_08B70FA4;
    case 186u: goto L_08B70FB0;
    case 187u: goto L_08B70FC0;
    case 188u: goto L_08B70FE0;
    case 189u: goto L_08B70FF8;
    case 190u: goto L_08B71008;
    case 191u: goto L_08B71010;
    case 192u: goto L_08B71020;
    case 193u: goto L_08B71034;
    case 194u: goto L_08B71044;
    case 195u: goto L_08B71050;
    case 196u: goto L_08B7105C;
    case 197u: goto L_08B7106C;
    case 198u: goto L_08B71090;
    case 199u: goto L_08B71094;
    case 200u: goto L_08B710B0;
    case 201u: goto L_08B710D8;
    case 202u: goto L_08B710F8;
    case 203u: goto L_08B71108;
    case 204u: goto L_08B71118;
    case 205u: goto L_08B71120;
    case 206u: goto L_08B7112C;
    case 207u: goto L_08B71144;
    case 208u: goto L_08B71180;
    case 209u: goto L_08B711A0;
    case 210u: goto L_08B711AC;
    case 211u: goto L_08B711B0;
    case 212u: goto L_08B711B8;
    case 213u: goto L_08B711C4;
    case 214u: goto L_08B711EC;
    case 215u: goto L_08B711F4;
    case 216u: goto L_08B711FC;
    case 217u: goto L_08B71218;
    case 218u: goto L_08B7122C;
    case 219u: goto L_08B71254;
    case 220u: goto L_08B71270;
    case 221u: goto L_08B71284;
    case 222u: goto L_08B71294;
    case 223u: goto L_08B712B4;
    case 224u: goto L_08B712E4;
    case 225u: goto L_08B712EC;
    case 226u: goto L_08B712F4;
    case 227u: goto L_08B71314;
    case 228u: goto L_08B71318;
    case 229u: goto L_08B71328;
    case 230u: goto L_08B7133C;
    case 231u: goto L_08B7134C;
    case 232u: goto L_08B71358;
    case 233u: goto L_08B71364;
    case 234u: goto L_08B71380;
    case 235u: goto L_08B7138C;
    case 236u: goto L_08B713AC;
    case 237u: goto L_08B713C4;
    case 238u: goto L_08B713D4;
    case 239u: goto L_08B713DC;
    case 240u: goto L_08B713EC;
    case 241u: goto L_08B71400;
    case 242u: goto L_08B71410;
    case 243u: goto L_08B7141C;
    case 244u: goto L_08B71428;
    case 245u: goto L_08B71444;
    case 246u: goto L_08B71450;
    case 247u: goto L_08B71474;
    case 248u: goto L_08B71478;
    case 249u: goto L_08B71494;
    case 250u: goto L_08B714BC;
    case 251u: goto L_08B714DC;
    case 252u: goto L_08B714EC;
    case 253u: goto L_08B71500;
    case 254u: goto L_08B71508;
    case 255u: goto L_08B71510;
    case 256u: goto L_08B7151C;
    case 257u: goto L_08B7152C;
    case 258u: goto L_08B71534;
    case 259u: goto L_08B7153C;
    case 260u: goto L_08B71544;
    case 261u: goto L_08B71550;
    case 262u: goto L_08B71568;
    case 263u: goto L_08B715A4;
    case 264u: goto L_08B715C4;
    case 265u: goto L_08B715D0;
    case 266u: goto L_08B715D4;
    case 267u: goto L_08B715DC;
    case 268u: goto L_08B715E8;
    case 269u: goto L_08B71610;
    case 270u: goto L_08B71618;
    case 271u: goto L_08B71620;
    case 272u: goto L_08B7163C;
    case 273u: goto L_08B71654;
    case 274u: goto L_08B7167C;
    case 275u: goto L_08B71698;
    case 276u: goto L_08B716AC;
    case 277u: goto L_08B716BC;
    case 278u: goto L_08B716DC;
    case 279u: goto L_08B7170C;
    case 280u: goto L_08B71714;
    case 281u: goto L_08B7171C;
    case 282u: goto L_08B7173C;
    case 283u: goto L_08B71740;
    case 284u: goto L_08B71750;
    case 285u: goto L_08B71764;
    case 286u: goto L_08B71774;
    case 287u: goto L_08B71780;
    case 288u: goto L_08B7178C;
    case 289u: goto L_08B7179C;
    case 290u: goto L_08B717BC;
    case 291u: goto L_08B717D4;
    case 292u: goto L_08B717E4;
    case 293u: goto L_08B717EC;
    case 294u: goto L_08B717FC;
    case 295u: goto L_08B71810;
    case 296u: goto L_08B71820;
    case 297u: goto L_08B7182C;
    case 298u: goto L_08B71838;
    case 299u: goto L_08B71848;
    case 300u: goto L_08B7186C;
    case 301u: goto L_08B71870;
    case 302u: goto L_08B7188C;
    case 303u: goto L_08B718B4;
    case 304u: goto L_08B718F0;
    case 305u: goto L_08B71910;
    case 306u: goto L_08B7191C;
    case 307u: goto L_08B71920;
    case 308u: goto L_08B71928;
    case 309u: goto L_08B71934;
    case 310u: goto L_08B7195C;
    case 311u: goto L_08B71964;
    case 312u: goto L_08B7196C;
    case 313u: goto L_08B71988;
    case 314u: goto L_08B719A0;
    case 315u: goto L_08B719C8;
    case 316u: goto L_08B719E4;
    case 317u: goto L_08B719F8;
    case 318u: goto L_08B71A08;
    case 319u: goto L_08B71A28;
    case 320u: goto L_08B71A64;
    case 321u: goto L_08B71A70;
    case 322u: goto L_08B71A98;
    case 323u: goto L_08B71AB4;
    case 324u: goto L_08B71ABC;
    case 325u: goto L_08B71ACC;
    case 326u: goto L_08B71AD8;
    case 327u: goto L_08B71AFC;
    case 328u: goto L_08B71B0C;
    case 329u: goto L_08B71B1C;
    case 330u: goto L_08B71B44;
    case 331u: goto L_08B71B4C;
    case 332u: goto L_08B71B68;
    case 333u: goto L_08B71B70;
    case 334u: goto L_08B71B7C;
    case 335u: goto L_08B71B90;
    case 336u: goto L_08B71BAC;
    case 337u: goto L_08B71BB4;
    case 338u: goto L_08B71BD0;
    case 339u: goto L_08B71BD8;
    case 340u: goto L_08B71BE8;
    case 341u: goto L_08B71BF4;
    case 342u: goto L_08B71C04;
    case 343u: goto L_08B71C34;
    case 344u: goto L_08B71C58;
    case 345u: goto L_08B71C60;
    case 346u: goto L_08B71C70;
    case 347u: goto L_08B71C7C;
    case 348u: goto L_08B71C8C;
    case 349u: goto L_08B71CB4;
    case 350u: goto L_08B71CDC;
    case 351u: goto L_08B71CF0;
    case 352u: goto L_08B71D0C;
    case 353u: goto L_08B71D14;
    case 354u: goto L_08B71D30;
    case 355u: goto L_08B71D38;
    case 356u: goto L_08B71D48;
    case 357u: goto L_08B71D58;
    case 358u: goto L_08B71D74;
    case 359u: goto L_08B71D7C;
    case 360u: goto L_08B71D84;
    case 361u: goto L_08B71D94;
    case 362u: goto L_08B71DBC;
    case 363u: goto L_08B71DD0;
    case 364u: goto L_08B71DEC;
    case 365u: goto L_08B71DF4;
    case 366u: goto L_08B71E10;
    case 367u: goto L_08B71E18;
    case 368u: goto L_08B71E20;
    case 369u: goto L_08B71E2C;
    case 370u: goto L_08B71E3C;
    case 371u: goto L_08B71E48;
    case 372u: goto L_08B71E68;
    case 373u: goto L_08B71EA4;
    case 374u: goto L_08B71EB0;
    case 375u: goto L_08B71ED8;
    case 376u: goto L_08B71EF4;
    case 377u: goto L_08B71EFC;
    case 378u: goto L_08B71F0C;
    case 379u: goto L_08B71F18;
    case 380u: goto L_08B71F3C;
    case 381u: goto L_08B71F4C;
    case 382u: goto L_08B71F5C;
    case 383u: goto L_08B71F84;
    case 384u: goto L_08B71F8C;
    case 385u: goto L_08B71FA8;
    case 386u: goto L_08B71FB0;
    case 387u: goto L_08B71FBC;
    case 388u: goto L_08B71FD0;
    case 389u: goto L_08B71FEC;
    case 390u: goto L_08B71FF4;
    case 391u: goto L_08B72010;
    case 392u: goto L_08B72018;
    case 393u: goto L_08B72028;
    case 394u: goto L_08B72034;
    case 395u: goto L_08B72044;
    case 396u: goto L_08B72074;
    case 397u: goto L_08B72098;
    case 398u: goto L_08B720A0;
    case 399u: goto L_08B720B0;
    case 400u: goto L_08B720BC;
    case 401u: goto L_08B720CC;
    case 402u: goto L_08B720F4;
    case 403u: goto L_08B7211C;
    case 404u: goto L_08B72130;
    case 405u: goto L_08B7214C;
    case 406u: goto L_08B72154;
    case 407u: goto L_08B72170;
    case 408u: goto L_08B72178;
    case 409u: goto L_08B72188;
    case 410u: goto L_08B72198;
    case 411u: goto L_08B721B4;
    case 412u: goto L_08B721BC;
    case 413u: goto L_08B721C4;
    case 414u: goto L_08B721D4;
    case 415u: goto L_08B721FC;
    case 416u: goto L_08B72210;
    case 417u: goto L_08B7222C;
    case 418u: goto L_08B72234;
    case 419u: goto L_08B72250;
    case 420u: goto L_08B72258;
    case 421u: goto L_08B72260;
    case 422u: goto L_08B7226C;
    case 423u: goto L_08B7227C;
    case 424u: goto L_08B72288;
    case 425u: goto L_08B722A8;
    case 426u: goto L_08B722E4;
    case 427u: goto L_08B722F0;
    case 428u: goto L_08B72318;
    case 429u: goto L_08B72334;
    case 430u: goto L_08B7233C;
    case 431u: goto L_08B7234C;
    case 432u: goto L_08B72358;
    case 433u: goto L_08B7237C;
    case 434u: goto L_08B7238C;
    case 435u: goto L_08B7239C;
    case 436u: goto L_08B723C4;
    case 437u: goto L_08B723CC;
    case 438u: goto L_08B723E8;
    case 439u: goto L_08B723F0;
    case 440u: goto L_08B723FC;
    case 441u: goto L_08B72410;
    case 442u: goto L_08B7242C;
    case 443u: goto L_08B72434;
    case 444u: goto L_08B72450;
    case 445u: goto L_08B72458;
    case 446u: goto L_08B72468;
    case 447u: goto L_08B72474;
    case 448u: goto L_08B72484;
    case 449u: goto L_08B724B4;
    case 450u: goto L_08B724D8;
    case 451u: goto L_08B724E0;
    case 452u: goto L_08B724F0;
    case 453u: goto L_08B724FC;
    case 454u: goto L_08B7250C;
    case 455u: goto L_08B72534;
    case 456u: goto L_08B7255C;
    case 457u: goto L_08B72570;
    case 458u: goto L_08B7258C;
    case 459u: goto L_08B72594;
    case 460u: goto L_08B725B0;
    case 461u: goto L_08B725B8;
    case 462u: goto L_08B725C8;
    case 463u: goto L_08B725D8;
    case 464u: goto L_08B725F4;
    case 465u: goto L_08B725FC;
    case 466u: goto L_08B72604;
    case 467u: goto L_08B72614;
    case 468u: goto L_08B7263C;
    case 469u: goto L_08B72650;
    case 470u: goto L_08B7266C;
    case 471u: goto L_08B72674;
    case 472u: goto L_08B72690;
    case 473u: goto L_08B72698;
    case 474u: goto L_08B726A0;
    case 475u: goto L_08B726AC;
    case 476u: goto L_08B726BC;
    case 477u: goto L_08B726C8;
    case 478u: goto L_08B726E8;
    case 479u: goto L_08B726F4;
    case 480u: goto L_08B72700;
    case 481u: goto L_08B72708;
    case 482u: goto L_08B72718;
    case 483u: goto L_08B72720;
    case 484u: goto L_08B72740;
    case 485u: goto L_08B727A0;
    case 486u: goto L_08B727A8;
    case 487u: goto L_08B727E0;
    case 488u: goto L_08B727E4;
    case 489u: goto L_08B727EC;
    case 490u: goto L_08B72808;
    case 491u: goto L_08B72818;
    case 492u: goto L_08B72824;
    case 493u: goto L_08B72834;
    case 494u: goto L_08B72840;
    case 495u: goto L_08B7284C;
    case 496u: goto L_08B72854;
    case 497u: goto L_08B72860;
    case 498u: goto L_08B72868;
    case 499u: goto L_08B72898;
    case 500u: goto L_08B728A0;
    case 501u: goto L_08B728D8;
    case 502u: goto L_08B728E4;
    case 503u: goto L_08B728F8;
    case 504u: goto L_08B72908;
    case 505u: goto L_08B72910;
    case 506u: goto L_08B72914;
    case 507u: goto L_08B72938;
    case 508u: goto L_08B72954;
    case 509u: goto L_08B72960;
    case 510u: goto L_08B729A0;
    case 511u: goto L_08B729B8;
    case 512u: goto L_08B729C8;
    case 513u: goto L_08B729D4;
    case 514u: goto L_08B729DC;
    case 515u: goto L_08B729F8;
    case 516u: goto L_08B72A10;
    case 517u: goto L_08B72A4C;
    case 518u: goto L_08B72A70;
    case 519u: goto L_08B72A74;
    case 520u: goto L_08B72A88;
    case 521u: goto L_08B72A98;
    case 522u: goto L_08B72AA0;
    case 523u: goto L_08B72ABC;
    case 524u: goto L_08B72AD8;
    case 525u: goto L_08B72ADC;
    case 526u: goto L_08B72B20;
    case 527u: goto L_08B72B28;
    case 528u: goto L_08B72B34;
    case 529u: goto L_08B72B3C;
    case 530u: goto L_08B72B60;
    case 531u: goto L_08B72BB4;
    case 532u: goto L_08B72BBC;
    case 533u: goto L_08B72BC4;
    case 534u: goto L_08B72BE8;
    case 535u: goto L_08B72BF4;
    case 536u: goto L_08B72C10;
    case 537u: goto L_08B72C44;
    case 538u: goto L_08B72C58;
    case 539u: goto L_08B72C60;
    case 540u: goto L_08B72C68;
    case 541u: goto L_08B72C7C;
    case 542u: goto L_08B72C8C;
    case 543u: goto L_08B72CA8;
    case 544u: goto L_08B72CB8;
    case 545u: goto L_08B72CC8;
    case 546u: goto L_08B72CD8;
    case 547u: goto L_08B72CF0;
    case 548u: goto L_08B72D00;
    case 549u: goto L_08B72D0C;
    case 550u: goto L_08B72D14;
    case 551u: goto L_08B72D1C;
    case 552u: goto L_08B72D28;
    case 553u: goto L_08B72D2C;
    case 554u: goto L_08B72D34;
    case 555u: goto L_08B72D40;
    case 556u: goto L_08B72D54;
    case 557u: goto L_08B72D70;
    case 558u: goto L_08B72D80;
    case 559u: goto L_08B72D94;
    case 560u: goto L_08B72DA0;
    case 561u: goto L_08B72DAC;
    case 562u: goto L_08B72DB4;
    case 563u: goto L_08B72DC8;
    case 564u: goto L_08B72DD4;
    case 565u: goto L_08B72DDC;
    case 566u: goto L_08B72DE0;
    case 567u: goto L_08B72DE8;
    case 568u: goto L_08B72DF4;
    case 569u: goto L_08B72DFC;
    case 570u: goto L_08B72E00;
    case 571u: goto L_08B72E08;
    case 572u: goto L_08B72E24;
    case 573u: goto L_08B72E3C;
    case 574u: goto L_08B72E4C;
    case 575u: goto L_08B72E58;
    case 576u: goto L_08B72E60;
    case 577u: goto L_08B72E70;
    case 578u: goto L_08B72E7C;
    case 579u: goto L_08B72E80;
    case 580u: goto L_08B72E88;
    case 581u: goto L_08B72E94;
    case 582u: goto L_08B72EA8;
    case 583u: goto L_08B72ECC;
    case 584u: goto L_08B72EE4;
    case 585u: goto L_08B72EE8;
    case 586u: goto L_08B72EF0;
    case 587u: goto L_08B72F04;
    case 588u: goto L_08B72F1C;
    case 589u: goto L_08B72F24;
    case 590u: goto L_08B72F2C;
    case 591u: goto L_08B72F34;
    case 592u: goto L_08B72F3C;
    case 593u: goto L_08B72F44;
    case 594u: goto L_08B72F4C;
    case 595u: goto L_08B72F54;
    case 596u: goto L_08B72F5C;
    case 597u: goto L_08B72F64;
    case 598u: goto L_08B72F6C;
    case 599u: goto L_08B72F74;
    case 600u: goto L_08B72F7C;
    case 601u: goto L_08B72F84;
    case 602u: goto L_08B72F8C;
    case 603u: goto L_08B72F94;
    case 604u: goto L_08B72F9C;
    case 605u: goto L_08B72FA4;
    case 606u: goto L_08B72FAC;
    case 607u: goto L_08B72FB4;
    case 608u: goto L_08B72FBC;
    case 609u: goto L_08B72FC4;
    case 610u: goto L_08B72FCC;
    case 611u: goto L_08B72FD4;
    case 612u: goto L_08B72FDC;
    case 613u: goto L_08B72FE4;
    case 614u: goto L_08B72FEC;
    case 615u: goto L_08B72FF4;
    case 616u: goto L_08B72FFC;
    case 617u: goto L_08B73004;
    case 618u: goto L_08B7300C;
    case 619u: goto L_08B73014;
    case 620u: goto L_08B7301C;
    case 621u: goto L_08B73024;
    case 622u: goto L_08B7302C;
    case 623u: goto L_08B73034;
    case 624u: goto L_08B7303C;
    case 625u: goto L_08B73044;
    case 626u: goto L_08B7304C;
    case 627u: goto L_08B73054;
    case 628u: goto L_08B7305C;
    case 629u: goto L_08B73064;
    case 630u: goto L_08B7306C;
    case 631u: goto L_08B73074;
    case 632u: goto L_08B7307C;
    case 633u: goto L_08B73084;
    case 634u: goto L_08B7308C;
    case 635u: goto L_08B73094;
    case 636u: goto L_08B7309C;
    case 637u: goto L_08B730A4;
    case 638u: goto L_08B730AC;
    case 639u: goto L_08B730B4;
    case 640u: goto L_08B730BC;
    case 641u: goto L_08B730C4;
    case 642u: goto L_08B730CC;
    case 643u: goto L_08B730D4;
    case 644u: goto L_08B730DC;
    case 645u: goto L_08B730E4;
    case 646u: goto L_08B730EC;
    case 647u: goto L_08B730F4;
    case 648u: goto L_08B730FC;
    case 649u: goto L_08B73104;
    case 650u: goto L_08B7310C;
    case 651u: goto L_08B73114;
    case 652u: goto L_08B7311C;
    case 653u: goto L_08B73124;
    case 654u: goto L_08B7312C;
    case 655u: goto L_08B73134;
    case 656u: goto L_08B7313C;
    case 657u: goto L_08B73144;
    case 658u: goto L_08B7314C;
    case 659u: goto L_08B73154;
    case 660u: goto L_08B7315C;
    case 661u: goto L_08B73164;
    case 662u: goto L_08B7316C;
    case 663u: goto L_08B73174;
    case 664u: goto L_08B7317C;
    case 665u: goto L_08B73184;
    case 666u: goto L_08B7318C;
    case 667u: goto L_08B73194;
    case 668u: goto L_08B7319C;
    case 669u: goto L_08B731A4;
    case 670u: goto L_08B731AC;
    case 671u: goto L_08B731B4;
    case 672u: goto L_08B731BC;
    case 673u: goto L_08B731C4;
    case 674u: goto L_08B731CC;
    case 675u: goto L_08B731D4;
    case 676u: goto L_08B731DC;
    case 677u: goto L_08B731E4;
    case 678u: goto L_08B731EC;
    case 679u: goto L_08B731F4;
    case 680u: goto L_08B731FC;
    case 681u: goto L_08B73204;
    case 682u: goto L_08B7320C;
    case 683u: goto L_08B73224;
    case 684u: goto L_08B7322C;
    case 685u: goto L_08B73234;
    case 686u: goto L_08B7323C;
    case 687u: goto L_08B73244;
    case 688u: goto L_08B7324C;
    case 689u: goto L_08B73254;
    case 690u: goto L_08B7325C;
    case 691u: goto L_08B73264;
    case 692u: goto L_08B7326C;
    case 693u: goto L_08B73274;
    case 694u: goto L_08B7327C;
    case 695u: goto L_08B73284;
    case 696u: goto L_08B7328C;
    case 697u: goto L_08B73294;
    case 698u: goto L_08B7329C;
    case 699u: goto L_08B732A4;
    case 700u: goto L_08B732AC;
    case 701u: goto L_08B732B4;
    case 702u: goto L_08B732BC;
    case 703u: goto L_08B732C4;
    case 704u: goto L_08B732CC;
    case 705u: goto L_08B732DC;
    case 706u: goto L_08B732F4;
    case 707u: goto L_08B732FC;
    case 708u: goto L_08B73304;
    case 709u: goto L_08B7330C;
    case 710u: goto L_08B7331C;
    case 711u: goto L_08B7332C;
    case 712u: goto L_08B7333C;
    case 713u: goto L_08B7334C;
    case 714u: goto L_08B7335C;
    case 715u: goto L_08B7336C;
    case 716u: goto L_08B73374;
    case 717u: goto L_08B7337C;
    case 718u: goto L_08B73384;
    case 719u: goto L_08B7338C;
    case 720u: goto L_08B73394;
    case 721u: goto L_08B7339C;
    case 722u: goto L_08B733A4;
    case 723u: goto L_08B733AC;
    case 724u: goto L_08B733CC;
    case 725u: goto L_08B733DC;
    case 726u: goto L_08B733EC;
    case 727u: goto L_08B733FC;
    case 728u: goto L_08B7340C;
    case 729u: goto L_08B73414;
    case 730u: goto L_08B7341C;
    case 731u: goto L_08B73424;
    case 732u: goto L_08B7342C;
    case 733u: goto L_08B73434;
    case 734u: goto L_08B7343C;
    case 735u: goto L_08B73444;
    case 736u: goto L_08B7344C;
    case 737u: goto L_08B73454;
    case 738u: goto L_08B7345C;
    case 739u: goto L_08B73464;
    case 740u: goto L_08B7346C;
    case 741u: goto L_08B73474;
    case 742u: goto L_08B7347C;
    case 743u: goto L_08B73484;
    case 744u: goto L_08B7348C;
    case 745u: goto L_08B73494;
    case 746u: goto L_08B7349C;
    case 747u: goto L_08B734A4;
    case 748u: goto L_08B734AC;
    case 749u: goto L_08B734B4;
    case 750u: goto L_08B734BC;
    case 751u: goto L_08B734C4;
    case 752u: goto L_08B734CC;
    case 753u: goto L_08B734D4;
    case 754u: goto L_08B734DC;
    case 755u: goto L_08B734E4;
    case 756u: goto L_08B734EC;
    case 757u: goto L_08B734F4;
    case 758u: goto L_08B734FC;
    case 759u: goto L_08B73504;
    case 760u: goto L_08B7350C;
    case 761u: goto L_08B73514;
    case 762u: goto L_08B7351C;
    case 763u: goto L_08B73524;
    case 764u: goto L_08B7352C;
    case 765u: goto L_08B73534;
    case 766u: goto L_08B73544;
    case 767u: goto L_08B7354C;
    case 768u: goto L_08B73554;
    case 769u: goto L_08B7355C;
    case 770u: goto L_08B73564;
    case 771u: goto L_08B7356C;
    case 772u: goto L_08B73574;
    case 773u: goto L_08B7357C;
    case 774u: goto L_08B73584;
    case 775u: goto L_08B7358C;
    case 776u: goto L_08B73594;
    case 777u: goto L_08B7359C;
    case 778u: goto L_08B735A4;
    case 779u: goto L_08B735AC;
    case 780u: goto L_08B735B4;
    case 781u: goto L_08B735BC;
    case 782u: goto L_08B735C4;
    case 783u: goto L_08B735CC;
    case 784u: goto L_08B735D4;
    case 785u: goto L_08B735DC;
    case 786u: goto L_08B735E4;
    case 787u: goto L_08B735EC;
    case 788u: goto L_08B735F4;
    case 789u: goto L_08B735FC;
    case 790u: goto L_08B73604;
    case 791u: goto L_08B7360C;
    case 792u: goto L_08B73614;
    case 793u: goto L_08B7361C;
    case 794u: goto L_08B73624;
    case 795u: goto L_08B7362C;
    case 796u: goto L_08B7363C;
    case 797u: goto L_08B7364C;
    case 798u: goto L_08B73654;
    case 799u: goto L_08B7365C;
    case 800u: goto L_08B73664;
    case 801u: goto L_08B7366C;
    case 802u: goto L_08B7367C;
    case 803u: goto L_08B73684;
    case 804u: goto L_08B7368C;
    case 805u: goto L_08B73694;
    case 806u: goto L_08B7369C;
    case 807u: goto L_08B736A4;
    case 808u: goto L_08B736B0;
    case 809u: goto L_08B736C0;
    case 810u: goto L_08B736C8;
    case 811u: goto L_08B738D0;
    case 812u: goto L_08B738D4;
    case 813u: goto L_08B7390C;
    case 814u: goto L_08B73924;
    case 815u: goto L_08B73938;
    case 816u: goto L_08B73948;
    case 817u: goto L_08B7394C;
    case 818u: goto L_08B73964;
    case 819u: goto L_08B7396C;
    case 820u: goto L_08B7397C;
    case 821u: goto L_08B73990;
    case 822u: goto L_08B739A8;
    case 823u: goto L_08B739C0;
    case 824u: goto L_08B739D4;
    case 825u: goto L_08B739E4;
    case 826u: goto L_08B739EC;
    case 827u: goto L_08B739F4;
    case 828u: goto L_08B73A08;
    case 829u: goto L_08B73A18;
    case 830u: goto L_08B73A24;
    case 831u: goto L_08B73A34;
    case 832u: goto L_08B73A40;
    case 833u: goto L_08B73A48;
    case 834u: goto L_08B73A50;
    case 835u: goto L_08B73A58;
    case 836u: goto L_08B73A60;
    case 837u: goto L_08B73A68;
    case 838u: goto L_08B73A70;
    case 839u: goto L_08B73A7C;
    case 840u: goto L_08B73A8C;
    case 841u: goto L_08B73AA0;
    case 842u: goto L_08B73AB8;
    case 843u: goto L_08B73AC0;
    case 844u: goto L_08B73AC4;
    case 845u: goto L_08B73ACC;
    case 846u: goto L_08B73AD4;
    case 847u: goto L_08B73AE8;
    case 848u: goto L_08B73AFC;
    case 849u: goto L_08B73B10;
    case 850u: goto L_08B73B1C;
    case 851u: goto L_08B73B20;
    case 852u: goto L_08B73B2C;
    case 853u: goto L_08B73B3C;
    case 854u: goto L_08B73B50;
    case 855u: goto L_08B73B78;
    case 856u: goto L_08B73B80;
    case 857u: goto L_08B73BB0;
    case 858u: goto L_08B73BC0;
    case 859u: goto L_08B73BCC;
    case 860u: goto L_08B73BD4;
    case 861u: goto L_08B73BE0;
    case 862u: goto L_08B73C00;
    case 863u: goto L_08B73C10;
    case 864u: goto L_08B73C20;
    case 865u: goto L_08B73C28;
    case 866u: goto L_08B73C30;
    case 867u: goto L_08B73C40;
    case 868u: goto L_08B73C80;
    case 869u: goto L_08B73C88;
    case 870u: goto L_08B73C98;
    case 871u: goto L_08B73CA0;
    case 872u: goto L_08B73CA4;
    case 873u: goto L_08B73CB0;
    case 874u: goto L_08B73CBC;
    case 875u: goto L_08B73CC4;
    case 876u: goto L_08B73CCC;
    case 877u: goto L_08B73CF0;
    case 878u: goto L_08B73D10;
    case 879u: goto L_08B73D44;
    case 880u: goto L_08B73D54;
    case 881u: goto L_08B73D5C;
    case 882u: goto L_08B73D70;
    case 883u: goto L_08B73D88;
    case 884u: goto L_08B73D9C;
    case 885u: goto L_08B73DEC;
    case 886u: goto L_08B73E24;
    case 887u: goto L_08B73E2C;
    case 888u: goto L_08B73E40;
    case 889u: goto L_08B73E48;
    case 890u: goto L_08B73E4C;
    case 891u: goto L_08B73E60;
    case 892u: goto L_08B73E78;
    case 893u: goto L_08B73E7C;
    case 894u: goto L_08B73E84;
    case 895u: goto L_08B73E8C;
    case 896u: goto L_08B73E98;
    case 897u: goto L_08B73ED4;
    case 898u: goto L_08B73F70;
    case 899u: goto L_08B73F8C;
    case 900u: goto L_08B73FA0;
    case 901u: goto L_08B73FA4;
    case 902u: goto L_08B73FBC;
    case 903u: goto L_08B73FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B70000:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B7000Cu);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 508u, 0x08A9BF74u>(ctx, &aot_mem) && ctx.pc == 0x08B7000Cu) goto L_08B7000C;
    return;
L_08B7000C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B70250;
      }
      goto L_08B70014;
    }
L_08B70014:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B70018;
L_08B70018:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[9]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B70058;
      }
      goto L_08B70038;
    }
L_08B70038:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[12] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[3]);
    goto L_08B70058;
L_08B70058:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[12] = (ctx.gpr[11] + static_cast<std::uint32_t>(-8));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B700B4;
      }
      goto L_08B7006C;
    }
L_08B7006C:
    ctx.gpr[12] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B700A8;
      }
      goto L_08B70078;
    }
L_08B70078:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    goto L_08B700A8;
L_08B700A8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B700EC;
      }
      goto L_08B700B4;
    }
L_08B700B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B700C4u);
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 753u, 0x08B6FA30u>(ctx, &aot_mem) && ctx.pc == 0x08B700C4u) goto L_08B700C4;
    return;
L_08B700C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    goto L_08B700EC;
L_08B700EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08B70128;
      }
      goto L_08B7010C;
    }
L_08B7010C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[11]);
    goto L_08B70128;
L_08B70128:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B70170;
      }
      goto L_08B70150;
    }
L_08B70150:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[9]);
    goto L_08B70170;
L_08B70170:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[31] = (0x08B70198u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9B124u>(ctx, &aot_mem) && ctx.pc == 0x08B70198u) goto L_08B70198;
    return;
L_08B70198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[31] = (0x08B7024Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 9u, 0x08A9C198u>(ctx, &aot_mem) && ctx.pc == 0x08B7024Cu) goto L_08B7024C;
    return;
L_08B7024C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B70250;
L_08B70250:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[5] >> 30u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_08B703C4;
      }
      goto L_08B702EC;
    }
L_08B702EC:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
        goto L_08B70314;
    }
    goto L_08B70314;
L_08B70314:
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B70370;
      }
      goto L_08B70328;
    }
L_08B70328:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B70348u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 294u, 0x08A9A6B8u>(ctx, &aot_mem) && ctx.pc == 0x08B70348u) goto L_08B70348;
    return;
L_08B70348:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B704F4;
      }
      goto L_08B70358;
    }
L_08B70358:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B70368u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B70368u) goto L_08B70368;
    return;
L_08B70368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B704F8;
      }
      goto L_08B70370;
    }
L_08B70370:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(15))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B70394u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 294u, 0x08A9A6B8u>(ctx, &aot_mem) && ctx.pc == 0x08B70394u) goto L_08B70394;
    return;
L_08B70394:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B704F4;
      }
      goto L_08B703A8;
    }
L_08B703A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08B703BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B703BCu) goto L_08B703BC;
    return;
L_08B703BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B704F8;
      }
      goto L_08B703C4;
    }
L_08B703C4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B703E4;
      }
      goto L_08B703D4;
    }
L_08B703D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B703F4;
      }
      goto L_08B703E4;
    }
L_08B703E4:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08B703F4;
L_08B703F4:
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B70458;
      }
      goto L_08B70400;
    }
L_08B70400:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[31] = (0x08B70418u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B70418u) goto L_08B70418;
    return;
L_08B70418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08B70450;
      }
      goto L_08B70430;
    }
L_08B70430:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B70440u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B70440u) goto L_08B70440;
    return;
L_08B70440:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08B70450;
L_08B70450:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08B70458;
L_08B70458:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B70480;
      }
      goto L_08B70478;
    }
L_08B70478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08B70480;
L_08B70480:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08B704A8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 294u, 0x08A9A6B8u>(ctx, &aot_mem) && ctx.pc == 0x08B704A8u) goto L_08B704A8;
    return;
L_08B704A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B704C8;
      }
      goto L_08B704C0;
    }
L_08B704C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B704DC;
      }
      goto L_08B704C8;
    }
L_08B704C8:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B704D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B704D8u) goto L_08B704D8;
    return;
L_08B704D8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08B704DC;
L_08B704DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B704EC;
      }
      goto L_08B704E4;
    }
L_08B704E4:
    ctx.gpr[31] = (0x08B704ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B704ECu) goto L_08B704EC;
    return;
L_08B704EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    goto L_08B704F4;
L_08B704F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B704F8;
L_08B704F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
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
L_08B70544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B70590;
      }
      goto L_08B70554;
    }
L_08B70554:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(31336));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B7057C;
      }
      goto L_08B70560;
    }
L_08B70560:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20576));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B7057C;
      }
      goto L_08B70570;
    }
L_08B70570:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08B7057C;
L_08B7057C:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70590;
      }
      goto L_08B70588;
    }
L_08B70588:
    ctx.gpr[31] = (0x08B70590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B70590u) goto L_08B70590;
    return;
L_08B70590:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7059C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B70640;
      }
      goto L_08B705B8;
    }
L_08B705B8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25844));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B70628;
      }
      goto L_08B705C8;
    }
L_08B705C8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B70628;
      }
      goto L_08B705D8;
    }
L_08B705D8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70614;
      }
      goto L_08B705F0;
    }
L_08B705F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70614;
      }
      goto L_08B70600;
    }
L_08B70600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70614;
      }
      goto L_08B7060C;
    }
L_08B7060C:
    ctx.gpr[31] = (0x08B70614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B70614u) goto L_08B70614;
    return;
L_08B70614:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B7062C;
      }
      goto L_08B7061C;
    }
L_08B7061C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B70628;
L_08B70628:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B7062C;
L_08B7062C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B70640;
      }
      goto L_08B70634;
    }
L_08B70634:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B70640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B70640u) goto L_08B70640;
    return;
L_08B70640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B706B4;
      }
      goto L_08B70670;
    }
L_08B70670:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31648));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B706A0;
      }
      goto L_08B70680;
    }
L_08B70680:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25828));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B70694u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x08B70694u) goto L_08B70694;
    return;
L_08B70694:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B706A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 682u, 0x08A7FB94u>(ctx, &aot_mem) && ctx.pc == 0x08B706A0u) goto L_08B706A0;
    return;
L_08B706A0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B706B4;
      }
      goto L_08B706AC;
    }
L_08B706AC:
    ctx.gpr[31] = (0x08B706B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B706B4u) goto L_08B706B4;
    return;
L_08B706B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B706C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B70710;
      }
      goto L_08B706E4;
    }
L_08B706E4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31432));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B706FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 175u, 0x08A8223Cu>(ctx, &aot_mem) && ctx.pc == 0x08B706FCu) goto L_08B706FC;
    return;
L_08B706FC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70710;
      }
      goto L_08B70708;
    }
L_08B70708:
    ctx.gpr[31] = (0x08B70710u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B70710u) goto L_08B70710;
    return;
L_08B70710:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[31] = (0x08B7074Cu);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08B7074Cu) goto L_08B7074C;
    return;
L_08B7074C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B70758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08B70758u) goto L_08B70758;
    return;
L_08B70758:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B707B0;
      }
      goto L_08B70778;
    }
L_08B70778:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B7077C;
L_08B7077C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B7077C;
    }
    goto L_08B707B0;
L_08B707B0:
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
L_08B707C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B70800;
      }
      goto L_08B707E4;
    }
L_08B707E4:
    ctx.gpr[31] = (0x08B707ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B70814;
L_08B707EC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70800;
      }
      goto L_08B707F8;
    }
L_08B707F8:
    ctx.gpr[31] = (0x08B70800u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B70800u) goto L_08B70800;
    return;
L_08B70800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B7084C;
      }
      goto L_08B7082C;
    }
L_08B7082C:
    ctx.gpr[31] = (0x08B70834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08B70834u) goto L_08B70834;
    return;
L_08B70834:
    ctx.gpr[31] = (0x08B7083Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08B7083Cu) goto L_08B7083C;
    return;
L_08B7083C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08B7084C;
L_08B7084C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7085C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B70868;
L_08B70868:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B70894;
      }
      goto L_08B70874;
    }
L_08B70874:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B7088C;
      }
      goto L_08B7087C;
    }
L_08B7087C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B70894;
      }
      goto L_08B7088C;
    }
L_08B7088C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B70910;
      }
      goto L_08B70894;
    }
L_08B70894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B70868;
      }
      goto L_08B708B4;
    }
L_08B708B4:
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
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B70910;
L_08B70910:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70918:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 28u);
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
          goto L_08B70954;
      }
      goto L_08B70950;
    }
L_08B70950:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B70954;
L_08B70954:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7095C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B70984;
L_08B70984:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B709B0;
      }
      goto L_08B70990;
    }
L_08B70990:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B709A8;
      }
      goto L_08B70998;
    }
L_08B70998:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B709B0;
      }
      goto L_08B709A8;
    }
L_08B709A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B70A2C;
      }
      goto L_08B709B0;
    }
L_08B709B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B70984;
      }
      goto L_08B709D0;
    }
L_08B709D0:
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
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B70A2C;
L_08B70A2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70A34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
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
          goto L_08B70A70;
      }
      goto L_08B70A6C;
    }
L_08B70A6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B70A70;
L_08B70A70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B70AE4;
      }
      goto L_08B70AA8;
    }
L_08B70AA8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B70AAC;
L_08B70AAC:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B70AAC;
    }
    goto L_08B70AE4;
L_08B70AE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B70B3C;
      }
      goto L_08B70B00;
    }
L_08B70B00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B70B04;
L_08B70B04:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B70B04;
    }
    goto L_08B70B3C;
L_08B70B3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70B44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B70B94;
      }
      goto L_08B70B58;
    }
L_08B70B58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B70B5C;
L_08B70B5C:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B70B5C;
    }
    goto L_08B70B94;
L_08B70B94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70B9C:
    ctx.gpr[5] = (ctx.gpr[4] - 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B70BB8;
      }
      goto L_08B70BAC;
    }
L_08B70BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B70BAC;
      }
      goto L_08B70BB8;
    }
L_08B70BB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70BC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32368));
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
L_08B70BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B70C40;
      }
      goto L_08B70C20;
    }
L_08B70C20:
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B70C40;
      }
      goto L_08B70C40;
    }
L_08B70C40:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08B70C58u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B70C58u) goto L_08B70C58;
    return;
L_08B70C58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B70CC8;
      }
      goto L_08B70C80;
    }
L_08B70C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B70CB8;
      }
      goto L_08B70C8C;
    }
L_08B70C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B70CA0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_08B70EA4;
L_08B70CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B70CB8;
    }
    goto L_08B70CAC;
L_08B70CAC:
    ctx.gpr[31] = (0x08B70CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B70CB4u) goto L_08B70CB4;
    return;
L_08B70CB4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B70CB8;
L_08B70CB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70CC8;
      }
      goto L_08B70CC0;
    }
L_08B70CC0:
    ctx.gpr[31] = (0x08B70CC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B70CC8u) goto L_08B70CC8;
    return;
L_08B70CC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] >> 5u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B70D1C;
      }
      goto L_08B70D10;
    }
L_08B70D10:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B70D20;
      }
      goto L_08B70D1C;
    }
L_08B70D1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08B70D20;
L_08B70D20:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B70D88;
      }
      goto L_08B70D30;
    }
L_08B70D30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08B70D48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B70D48u) goto L_08B70D48;
    return;
L_08B70D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B70D84;
      }
      goto L_08B70D60;
    }
L_08B70D60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B70D74u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B70D74u) goto L_08B70D74;
    return;
L_08B70D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08B70D84;
L_08B70D84:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B70D88;
L_08B70D88:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] >> 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B70DC4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08B70E28;
L_08B70DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
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
L_08B70E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70E98;
      }
      goto L_08B70E40;
    }
L_08B70E40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[31] = (0x08B70E54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B70E54u) goto L_08B70E54;
    return;
L_08B70E54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B70E84;
      }
      goto L_08B70E68;
    }
L_08B70E68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B70E78u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B70E78u) goto L_08B70E78;
    return;
L_08B70E78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08B70E84;
L_08B70E84:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B70E40;
      }
      goto L_08B70E98;
    }
L_08B70E98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70EEC;
      }
      goto L_08B70EC8;
    }
L_08B70EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70EDC;
      }
      goto L_08B70ED4;
    }
L_08B70ED4:
    ctx.gpr[31] = (0x08B70EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B70EDCu) goto L_08B70EDC;
    return;
L_08B70EDC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B70EC8;
      }
      goto L_08B70EEC;
    }
L_08B70EEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B70F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B70F64;
    }
    goto L_08B70F30;
L_08B70F30:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B71010;
    }
    goto L_08B70F38;
L_08B70F38:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B70F64;
    }
    goto L_08B70F40;
L_08B70F40:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B71010;
    }
    goto L_08B70F60;
L_08B70F60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08B70F64;
L_08B70F64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B70F74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B70F74u) goto L_08B70F74;
    return;
L_08B70F74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B70FA4;
      }
      goto L_08B70F88;
    }
L_08B70F88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B70F98u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B70F98u) goto L_08B70F98;
    return;
L_08B70F98:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B70FA4;
L_08B70FA4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B70FC0;
      }
      goto L_08B70FB0;
    }
L_08B70FB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B70FC0;
L_08B70FC0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B70FF8;
      }
      goto L_08B70FE0;
    }
L_08B70FE0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B71094;
      }
      goto L_08B70FF8;
    }
L_08B70FF8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B71094;
      }
      goto L_08B71008;
    }
L_08B71008:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B71094;
      }
      goto L_08B71010;
    }
L_08B71010:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B71020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B71020u) goto L_08B71020;
    return;
L_08B71020:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B71050;
      }
      goto L_08B71034;
    }
L_08B71034:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B71044u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B71044u) goto L_08B71044;
    return;
L_08B71044:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B71050;
L_08B71050:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7106C;
      }
      goto L_08B7105C;
    }
L_08B7105C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B7106C;
L_08B7106C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B71094;
      }
      goto L_08B71090;
    }
L_08B71090:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B71094;
L_08B71094:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B710B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 368u, 0x08B6A46Cu>(ctx, &aot_mem) && ctx.pc == 0x08B710B0u) goto L_08B710B0;
    return;
L_08B710B0:
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
L_08B710D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B7112C;
      }
      goto L_08B710F8;
    }
L_08B710F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B71108u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B710D8;
L_08B71108:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71120;
      }
      goto L_08B71118;
    }
L_08B71118:
    ctx.gpr[31] = (0x08B71120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B71120u) goto L_08B71120;
    return;
L_08B71120:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B710F8;
      }
      goto L_08B7112C;
    }
L_08B7112C:
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
L_08B71144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B711B8;
      }
      goto L_08B71180;
    }
L_08B71180:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B711AC;
      }
      goto L_08B711A0;
    }
L_08B711A0:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B711B0;
      }
      goto L_08B711AC;
    }
L_08B711AC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B711B0;
L_08B711B0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71180;
      }
      goto L_08B711B8;
    }
L_08B711B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7122C;
      }
      goto L_08B711C4;
    }
L_08B711C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B711FC;
      }
      goto L_08B711EC;
    }
L_08B711EC:
    ctx.gpr[31] = (0x08B711F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08B711F4u) goto L_08B711F4;
    return;
L_08B711F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B7122C;
      }
      goto L_08B711FC;
    }
L_08B711FC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71218u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B70F00;
L_08B71218:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B71294;
      }
      goto L_08B7122C;
    }
L_08B7122C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71284;
      }
      goto L_08B71254;
    }
L_08B71254:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71270u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B70F00;
L_08B71270:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B71294;
      }
      goto L_08B71284;
    }
L_08B71284:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B71294;
L_08B71294:
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
L_08B712B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B71318;
    }
    goto L_08B712E4;
L_08B712E4:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B713DC;
    }
    goto L_08B712EC;
L_08B712EC:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B71318;
    }
    goto L_08B712F4;
L_08B712F4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B713DC;
    }
    goto L_08B71314;
L_08B71314:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08B71318;
L_08B71318:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B71328u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B71328u) goto L_08B71328;
    return;
L_08B71328:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B71358;
      }
      goto L_08B7133C;
    }
L_08B7133C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B7134Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B7134Cu) goto L_08B7134C;
    return;
L_08B7134C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B71358;
L_08B71358:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7138C;
      }
      goto L_08B71364;
    }
L_08B71364:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7138C;
      }
      goto L_08B71380;
    }
L_08B71380:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B7138C;
L_08B7138C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B713C4;
      }
      goto L_08B713AC;
    }
L_08B713AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B71478;
      }
      goto L_08B713C4;
    }
L_08B713C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B71478;
      }
      goto L_08B713D4;
    }
L_08B713D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B71478;
      }
      goto L_08B713DC;
    }
L_08B713DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B713ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B713ECu) goto L_08B713EC;
    return;
L_08B713EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B7141C;
      }
      goto L_08B71400;
    }
L_08B71400:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B71410u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B71410u) goto L_08B71410;
    return;
L_08B71410:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B7141C;
L_08B7141C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71450;
      }
      goto L_08B71428;
    }
L_08B71428:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71450;
      }
      goto L_08B71444;
    }
L_08B71444:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B71450;
L_08B71450:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B71478;
      }
      goto L_08B71474;
    }
L_08B71474:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B71478;
L_08B71478:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B71494u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 368u, 0x08B6A46Cu>(ctx, &aot_mem) && ctx.pc == 0x08B71494u) goto L_08B71494;
    return;
L_08B71494:
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
L_08B714BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B71550;
      }
      goto L_08B714DC;
    }
L_08B714DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B714ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B714BC;
L_08B714EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B71534;
      }
      goto L_08B71500;
    }
L_08B71500:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71534;
      }
      goto L_08B71508;
    }
L_08B71508:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71534;
      }
      goto L_08B71510;
    }
L_08B71510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71534;
      }
      goto L_08B7151C;
    }
L_08B7151C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B71534;
      }
      goto L_08B7152C;
    }
L_08B7152C:
    ctx.gpr[31] = (0x08B71534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B71534u) goto L_08B71534;
    return;
L_08B71534:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71544;
      }
      goto L_08B7153C;
    }
L_08B7153C:
    ctx.gpr[31] = (0x08B71544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B71544u) goto L_08B71544;
    return;
L_08B71544:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B714DC;
      }
      goto L_08B71550;
    }
L_08B71550:
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
L_08B71568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B715DC;
      }
      goto L_08B715A4;
    }
L_08B715A4:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B715D0;
      }
      goto L_08B715C4;
    }
L_08B715C4:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B715D4;
      }
      goto L_08B715D0;
    }
L_08B715D0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B715D4;
L_08B715D4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B715A4;
      }
      goto L_08B715DC;
    }
L_08B715DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71654;
      }
      goto L_08B715E8;
    }
L_08B715E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71620;
      }
      goto L_08B71610;
    }
L_08B71610:
    ctx.gpr[31] = (0x08B71618u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08B71618u) goto L_08B71618;
    return;
L_08B71618:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B71654;
      }
      goto L_08B71620;
    }
L_08B71620:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B7163Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B712B4;
L_08B7163C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B716BC;
      }
      goto L_08B71654;
    }
L_08B71654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B716AC;
      }
      goto L_08B7167C;
    }
L_08B7167C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71698u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B712B4;
L_08B71698:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B716BC;
      }
      goto L_08B716AC;
    }
L_08B716AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B716BC;
L_08B716BC:
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
L_08B716DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B71740;
    }
    goto L_08B7170C;
L_08B7170C:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B717EC;
    }
    goto L_08B71714;
L_08B71714:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B71740;
    }
    goto L_08B7171C;
L_08B7171C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08B717EC;
    }
    goto L_08B7173C;
L_08B7173C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08B71740;
L_08B71740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B71750u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B71750u) goto L_08B71750;
    return;
L_08B71750:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B71780;
      }
      goto L_08B71764;
    }
L_08B71764:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B71774u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B71774u) goto L_08B71774;
    return;
L_08B71774:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B71780;
L_08B71780:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7179C;
      }
      goto L_08B7178C;
    }
L_08B7178C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B7179C;
L_08B7179C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B717D4;
      }
      goto L_08B717BC;
    }
L_08B717BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B71870;
      }
      goto L_08B717D4;
    }
L_08B717D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B71870;
      }
      goto L_08B717E4;
    }
L_08B717E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B71870;
      }
      goto L_08B717EC;
    }
L_08B717EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B717FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B717FCu) goto L_08B717FC;
    return;
L_08B717FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B7182C;
      }
      goto L_08B71810;
    }
L_08B71810:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B71820u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B71820u) goto L_08B71820;
    return;
L_08B71820:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B7182C;
L_08B7182C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71848;
      }
      goto L_08B71838;
    }
L_08B71838:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B71848;
L_08B71848:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B71870;
      }
      goto L_08B7186C;
    }
L_08B7186C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B71870;
L_08B71870:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B7188Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 368u, 0x08B6A46Cu>(ctx, &aot_mem) && ctx.pc == 0x08B7188Cu) goto L_08B7188C;
    return;
L_08B7188C:
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
L_08B718B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B71928;
      }
      goto L_08B718F0;
    }
L_08B718F0:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B7191C;
      }
      goto L_08B71910;
    }
L_08B71910:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B71920;
      }
      goto L_08B7191C;
    }
L_08B7191C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B71920;
L_08B71920:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B718F0;
      }
      goto L_08B71928;
    }
L_08B71928:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B719A0;
      }
      goto L_08B71934;
    }
L_08B71934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B7196C;
      }
      goto L_08B7195C;
    }
L_08B7195C:
    ctx.gpr[31] = (0x08B71964u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08B71964u) goto L_08B71964;
    return;
L_08B71964:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B719A0;
      }
      goto L_08B7196C;
    }
L_08B7196C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71988u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B716DC;
L_08B71988:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71A08;
      }
      goto L_08B719A0;
    }
L_08B719A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B719F8;
      }
      goto L_08B719C8;
    }
L_08B719C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B719E4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B716DC;
L_08B719E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B71A08;
      }
      goto L_08B719F8;
    }
L_08B719F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B71A08;
L_08B71A08:
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
L_08B71A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B71BF4;
      }
      goto L_08B71A64;
    }
L_08B71A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71ABC;
      }
      goto L_08B71A70;
    }
L_08B71A70:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71AD8;
      }
      goto L_08B71A98;
    }
L_08B71A98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71AB4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B70F00;
L_08B71AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71ABC;
    }
L_08B71ABC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B71ACCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71144;
L_08B71ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71AD8;
    }
L_08B71AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71B70;
      }
      goto L_08B71AFC;
    }
L_08B71AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B71B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B71B0Cu) goto L_08B71B0C;
    return;
L_08B71B0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B71B4C;
      }
      goto L_08B71B1C;
    }
L_08B71B1C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71B7C;
      }
      goto L_08B71B44;
    }
L_08B71B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71BD8;
      }
      goto L_08B71B4C;
    }
L_08B71B4C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B71B68u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B70F00;
L_08B71B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71B70;
    }
L_08B71B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71B7C;
    }
L_08B71B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71BB4;
      }
      goto L_08B71B90;
    }
L_08B71B90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B71BACu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B70F00;
L_08B71BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71BB4;
    }
L_08B71BB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71BD0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B70F00;
L_08B71BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71BD8;
    }
L_08B71BD8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B71BE8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71144;
L_08B71BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71BF4;
    }
L_08B71BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B71C7C;
      }
      goto L_08B71C04;
    }
L_08B71C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71C60;
      }
      goto L_08B71C34;
    }
L_08B71C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B71C58u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B70F00;
L_08B71C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71C60;
    }
L_08B71C60:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B71C70u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71144;
L_08B71C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71C7C;
    }
L_08B71C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B71C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08B71C8Cu) goto L_08B71C8C;
    return;
L_08B71C8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71D38;
      }
      goto L_08B71CB4;
    }
L_08B71CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71D38;
      }
      goto L_08B71CDC;
    }
L_08B71CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71D14;
      }
      goto L_08B71CF0;
    }
L_08B71CF0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B71D0Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B70F00;
L_08B71D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71D14;
    }
L_08B71D14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71D30u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B70F00;
L_08B71D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71D38;
    }
L_08B71D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B71D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B71D48u) goto L_08B71D48;
    return;
L_08B71D48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71D74;
      }
      goto L_08B71D58;
    }
L_08B71D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    goto L_08B71D74;
L_08B71D74:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E18;
      }
      goto L_08B71D7C;
    }
L_08B71D7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E18;
      }
      goto L_08B71D84;
    }
L_08B71D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B71DBC;
      }
      goto L_08B71D94;
    }
L_08B71D94:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E18;
      }
      goto L_08B71DBC;
    }
L_08B71DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71DF4;
      }
      goto L_08B71DD0;
    }
L_08B71DD0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B71DECu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B70F00;
L_08B71DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71DF4;
    }
L_08B71DF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71E10u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B70F00;
L_08B71E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71E18;
    }
L_08B71E18:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B71E2C;
      }
      goto L_08B71E20;
    }
L_08B71E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71E2C;
    }
L_08B71E2C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B71E3Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71144;
L_08B71E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B71E48;
      }
      goto L_08B71E48;
    }
L_08B71E48:
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
L_08B71E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B72034;
      }
      goto L_08B71EA4;
    }
L_08B71EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71EFC;
      }
      goto L_08B71EB0;
    }
L_08B71EB0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71F18;
      }
      goto L_08B71ED8;
    }
L_08B71ED8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B71EF4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B712B4;
L_08B71EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B71EFC;
    }
L_08B71EFC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B71F0Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71568;
L_08B71F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B71F18;
    }
L_08B71F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B71FB0;
      }
      goto L_08B71F3C;
    }
L_08B71F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B71F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B71F4Cu) goto L_08B71F4C;
    return;
L_08B71F4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B71F8C;
      }
      goto L_08B71F5C;
    }
L_08B71F5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71FBC;
      }
      goto L_08B71F84;
    }
L_08B71F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72018;
      }
      goto L_08B71F8C;
    }
L_08B71F8C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B71FA8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B712B4;
L_08B71FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B71FB0;
    }
L_08B71FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B71FBC;
    }
L_08B71FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B71FF4;
      }
      goto L_08B71FD0;
    }
L_08B71FD0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B71FECu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B712B4;
L_08B71FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B71FF4;
    }
L_08B71FF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B72010u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B712B4;
L_08B72010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72018;
    }
L_08B72018:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B72028u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71568;
L_08B72028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72034;
    }
L_08B72034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B720BC;
      }
      goto L_08B72044;
    }
L_08B72044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B720A0;
      }
      goto L_08B72074;
    }
L_08B72074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B72098u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B712B4;
L_08B72098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B720A0;
    }
L_08B720A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B720B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71568;
L_08B720B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B720BC;
    }
L_08B720BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B720CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08B720CCu) goto L_08B720CC;
    return;
L_08B720CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72178;
      }
      goto L_08B720F4;
    }
L_08B720F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72178;
      }
      goto L_08B7211C;
    }
L_08B7211C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72154;
      }
      goto L_08B72130;
    }
L_08B72130:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B7214Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B712B4;
L_08B7214C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72154;
    }
L_08B72154:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B72170u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B712B4;
L_08B72170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72178;
    }
L_08B72178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B72188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B72188u) goto L_08B72188;
    return;
L_08B72188:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B721B4;
      }
      goto L_08B72198;
    }
L_08B72198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B721B4;
L_08B721B4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72258;
      }
      goto L_08B721BC;
    }
L_08B721BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72258;
      }
      goto L_08B721C4;
    }
L_08B721C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B721FC;
      }
      goto L_08B721D4;
    }
L_08B721D4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72258;
      }
      goto L_08B721FC;
    }
L_08B721FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72234;
      }
      goto L_08B72210;
    }
L_08B72210:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B7222Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B712B4;
L_08B7222C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72234;
    }
L_08B72234:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B72250u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B712B4;
L_08B72250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72258;
    }
L_08B72258:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B7226C;
      }
      goto L_08B72260;
    }
L_08B72260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B7226C;
    }
L_08B7226C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B7227Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B71568;
L_08B7227C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72288;
      }
      goto L_08B72288;
    }
L_08B72288:
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
L_08B722A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B72474;
      }
      goto L_08B722E4;
    }
L_08B722E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B7233C;
      }
      goto L_08B722F0;
    }
L_08B722F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72358;
      }
      goto L_08B72318;
    }
L_08B72318:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B72334u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B716DC;
L_08B72334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B7233C;
    }
L_08B7233C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B7234Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B718B4;
L_08B7234C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72358;
    }
L_08B72358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B723F0;
      }
      goto L_08B7237C;
    }
L_08B7237C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B7238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B7238Cu) goto L_08B7238C;
    return;
L_08B7238C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B723CC;
      }
      goto L_08B7239C;
    }
L_08B7239C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B723FC;
      }
      goto L_08B723C4;
    }
L_08B723C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72458;
      }
      goto L_08B723CC;
    }
L_08B723CC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B723E8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B716DC;
L_08B723E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B723F0;
    }
L_08B723F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B723FC;
    }
L_08B723FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72434;
      }
      goto L_08B72410;
    }
L_08B72410:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B7242Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B716DC;
L_08B7242C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72434;
    }
L_08B72434:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B72450u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B716DC;
L_08B72450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72458;
    }
L_08B72458:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B72468u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B718B4;
L_08B72468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72474;
    }
L_08B72474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B724FC;
      }
      goto L_08B72484;
    }
L_08B72484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B724E0;
      }
      goto L_08B724B4;
    }
L_08B724B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B724D8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B716DC;
L_08B724D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B724E0;
    }
L_08B724E0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B724F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B718B4;
L_08B724F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B724FC;
    }
L_08B724FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B7250Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 401u, 0x08B6A64Cu>(ctx, &aot_mem) && ctx.pc == 0x08B7250Cu) goto L_08B7250C;
    return;
L_08B7250C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B725B8;
      }
      goto L_08B72534;
    }
L_08B72534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B725B8;
      }
      goto L_08B7255C;
    }
L_08B7255C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72594;
      }
      goto L_08B72570;
    }
L_08B72570:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B7258Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B716DC;
L_08B7258C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72594;
    }
L_08B72594:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B725B0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B716DC;
L_08B725B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B725B8;
    }
L_08B725B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B725C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B725C8u) goto L_08B725C8;
    return;
L_08B725C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B725F4;
      }
      goto L_08B725D8;
    }
L_08B725D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B725F4;
L_08B725F4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72698;
      }
      goto L_08B725FC;
    }
L_08B725FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72698;
      }
      goto L_08B72604;
    }
L_08B72604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B7263C;
      }
      goto L_08B72614;
    }
L_08B72614:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72698;
      }
      goto L_08B7263C;
    }
L_08B7263C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72674;
      }
      goto L_08B72650;
    }
L_08B72650:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B7266Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B716DC;
L_08B7266C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72674;
    }
L_08B72674:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B72690u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B716DC;
L_08B72690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B72698;
    }
L_08B72698:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B726AC;
      }
      goto L_08B726A0;
    }
L_08B726A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B726AC;
    }
L_08B726AC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B726BCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B718B4;
L_08B726BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B726C8;
      }
      goto L_08B726C8;
    }
L_08B726C8:
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
L_08B726E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B726F4;
L_08B726F4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B72720;
      }
      goto L_08B72700;
    }
L_08B72700:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B72718;
      }
      goto L_08B72708;
    }
L_08B72708:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B72720;
      }
      goto L_08B72718;
    }
L_08B72718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B727A0;
      }
      goto L_08B72720;
    }
L_08B72720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B726F4;
      }
      goto L_08B72740;
    }
L_08B72740:
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
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B727A0;
L_08B727A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B727A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 2080u);
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
          goto L_08B727E4;
      }
      goto L_08B727E0;
    }
L_08B727E0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B727E4;
L_08B727E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B727EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2080u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B72854;
      }
      goto L_08B72818;
    }
L_08B72818:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-31808));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B72840;
      }
      goto L_08B72824;
    }
L_08B72824:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32464));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B72840;
      }
      goto L_08B72834;
    }
L_08B72834:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08B72840;
L_08B72840:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72854;
      }
      goto L_08B7284C;
    }
L_08B7284C:
    ctx.gpr[31] = (0x08B72854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B72854u) goto L_08B72854;
    return;
L_08B72854:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72860:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B72898;
      }
      goto L_08B72868;
    }
L_08B72868:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08B72898;
L_08B72898:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B728A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B72B3C;
      }
      goto L_08B728D8;
    }
L_08B728D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B72B3C;
      }
      goto L_08B728E4;
    }
L_08B728E4:
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08B728F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B728F8u) goto L_08B728F8;
    return;
L_08B728F8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
      if (branch_taken) {
          goto L_08B72914;
      }
      goto L_08B72908;
    }
L_08B72908:
    ctx.gpr[31] = (0x08B72910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08B72910u) goto L_08B72910;
    return;
L_08B72910:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08B72914;
L_08B72914:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[7] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08B72938u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16072));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B72938u) goto L_08B72938;
    return;
L_08B72938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B72A88;
      }
      goto L_08B72954;
    }
L_08B72954:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08B72960;
L_08B72960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B729C8;
      }
      goto L_08B729A0;
    }
L_08B729A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B729C8;
      }
      goto L_08B729B8;
    }
L_08B729B8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08B729C8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08B72860;
L_08B729C8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08B729D4;
L_08B729D4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08B72A4C;
    }
    goto L_08B729DC;
L_08B729DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08B72A4C;
    }
    goto L_08B729F8;
L_08B729F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(368))))));
    ctx.gpr[31] = (0x08B72A10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B72B60;
L_08B72A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B729D4;
      }
      goto L_08B72A4C;
    }
L_08B72A4C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B72A74;
      }
      goto L_08B72A70;
    }
L_08B72A70:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B72A74;
L_08B72A74:
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08B72960;
    }
    goto L_08B72A88;
L_08B72A88:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B72ADC;
      }
      goto L_08B72A98;
    }
L_08B72A98:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    goto L_08B72AA0;
L_08B72AA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B72ABCu);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(368))))));
    goto L_08B72B60;
L_08B72ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B72AA0;
      }
      goto L_08B72ADC;
    }
L_08B72AD8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_08B72ADC;
L_08B72ADC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08B72B20u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16164));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08B72B20u) goto L_08B72B20;
    return;
L_08B72B20:
    ctx.gpr[31] = (0x08B72B28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 721u, 0x08B6BAECu>(ctx, &aot_mem) && ctx.pc == 0x08B72B28u) goto L_08B72B28;
    return;
L_08B72B28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72B3C;
      }
      goto L_08B72B34;
    }
L_08B72B34:
    ctx.gpr[31] = (0x08B72B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B72B3Cu) goto L_08B72B3C;
    return;
L_08B72B3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08B72BB4;
L_08B72BB4:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72C60;
      }
      goto L_08B72BBC;
    }
L_08B72BBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72C60;
      }
      goto L_08B72BC4;
    }
L_08B72BC4:
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B72BE8;
    }
    goto L_08B72BE8;
L_08B72BE8:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72C44;
      }
      goto L_08B72BF4;
    }
L_08B72BF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08B72C10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B72860;
L_08B72C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[7]);
    ctx.gpr[9] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B72C58;
      }
      goto L_08B72C44;
    }
L_08B72C44:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] ^ ctx.gpr[7]);
    ctx.gpr[9] = (0u < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_08B72C58;
L_08B72C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72BB4;
      }
      goto L_08B72C60;
    }
L_08B72C60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72C7C;
      }
      goto L_08B72C68;
    }
L_08B72C68:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B72C7Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08B72860;
L_08B72C7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B72D40;
      }
      goto L_08B72CA8;
    }
L_08B72CA8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25444));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72D28;
      }
      goto L_08B72CB8;
    }
L_08B72CB8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72D28;
      }
      goto L_08B72CC8;
    }
L_08B72CC8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72D28;
      }
      goto L_08B72CD8;
    }
L_08B72CD8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72D14;
      }
      goto L_08B72CF0;
    }
L_08B72CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72D14;
      }
      goto L_08B72D00;
    }
L_08B72D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72D14;
      }
      goto L_08B72D0C;
    }
L_08B72D0C:
    ctx.gpr[31] = (0x08B72D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B72D14u) goto L_08B72D14;
    return;
L_08B72D14:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B72D2C;
      }
      goto L_08B72D1C;
    }
L_08B72D1C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B72D28;
L_08B72D28:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B72D2C;
L_08B72D2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B72D40;
      }
      goto L_08B72D34;
    }
L_08B72D34:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B72D40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B72D40u) goto L_08B72D40;
    return;
L_08B72D40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B72DB4;
      }
      goto L_08B72D70;
    }
L_08B72D70:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31008));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72DA0;
      }
      goto L_08B72D80;
    }
L_08B72D80:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25636));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B72D94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x08B72D94u) goto L_08B72D94;
    return;
L_08B72D94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B72DA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem) && ctx.pc == 0x08B72DA0u) goto L_08B72DA0;
    return;
L_08B72DA0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72DB4;
      }
      goto L_08B72DAC;
    }
L_08B72DAC:
    ctx.gpr[31] = (0x08B72DB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B72DB4u) goto L_08B72DB4;
    return;
L_08B72DB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72DC8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B72DDC;
      }
      goto L_08B72DD4;
    }
L_08B72DD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B72E00;
      }
      goto L_08B72DDC;
    }
L_08B72DDC:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08B72DE0;
L_08B72DE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72DFC;
      }
      goto L_08B72DE8;
    }
L_08B72DE8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B72DFC;
      }
      goto L_08B72DF4;
    }
L_08B72DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B72DE0;
      }
      goto L_08B72DFC;
    }
L_08B72DFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B72E00;
L_08B72E00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B72E94;
      }
      goto L_08B72E24;
    }
L_08B72E24:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25252));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72E58;
      }
      goto L_08B72E3C;
    }
L_08B72E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B72E58;
      }
      goto L_08B72E4C;
    }
L_08B72E4C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B72E58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B72E58u) goto L_08B72E58;
    return;
L_08B72E58:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B72E80;
      }
      goto L_08B72E60;
    }
L_08B72E60:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27268));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72E7C;
      }
      goto L_08B72E70;
    }
L_08B72E70:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B72E7C;
L_08B72E7C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B72E80;
L_08B72E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B72E94;
      }
      goto L_08B72E88;
    }
L_08B72E88:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B72E94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B72E94u) goto L_08B72E94;
    return;
L_08B72E94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72EA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B72EE4;
      }
      goto L_08B72ECC;
    }
L_08B72ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B72EE8;
      }
      goto L_08B72EE4;
    }
L_08B72EE4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B72EE8;
L_08B72EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B72F04u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 630u, 0x08B6B4B4u>(ctx, &aot_mem) && ctx.pc == 0x08B72F04u) goto L_08B72F04;
    return;
L_08B72F04:
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
L_08B72F1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72F9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B72FFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73004:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7300C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73014:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7301C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73024:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7302C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7303C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73044:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7304C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73054:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7305C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73064:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7306C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7307C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73084:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7308C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73094:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7309C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B730FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73104:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7310C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73114:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7311C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73124:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7312C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73134:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7313C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73144:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7314C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7315C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73164:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7316C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73174:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7317C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73184:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7318C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73194:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7319C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B731FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73204:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7320C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7322C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73234:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7323C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73244:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7324C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73254:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7325C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73264:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7326C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73274:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7327C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7328C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73294:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7329C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B732FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73304:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7330C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7331C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7332C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7333C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7334C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7335C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7336C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73374:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7337C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73384:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7338C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73394:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7339C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B733A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B733AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B733CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B733DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B733EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B733FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7340C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73414:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7341C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73424:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7342C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73434:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7343C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73444:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7344C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73454:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7345C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73464:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7346C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73474:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7347C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73484:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7348C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73494:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7349C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B734FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73504:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7350C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73514:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7351C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73524:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7352C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73534:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73544:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7354C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73554:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7355C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73564:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7356C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73574:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7357C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73584:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7358C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73594:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7359C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B735FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73604:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7360C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73614:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7361C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7362C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7363C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7364C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73654:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7365C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73664:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7366C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7367C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7368C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B7369C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B736A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B736B0:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    (void)(ctx.gpr[2] << (0u & 31u));
    // nop
    ctx.pc = 0x02DCEBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B736C0:
    // nop
    // nop
    goto L_08B736C8;
L_08B736C8:
    rt.unsupported(0x08B736CCu, 0x40010011u, "unknown not lowered yet"); return;
    ctx.pc = 0x02DCE430u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B738D0:
    // nop
    goto L_08B738D4;
L_08B738D4:
    (void)(ctx.gpr[1] << 0u);
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B738F8u, 0x08B736B0u, "control flow in delay slot"); return;
L_08B7390C:
    rt.unsupported(0x08B7390Cu, 0x69466F49u, "unknown not lowered yet"); return;
L_08B73924:
    rt.unsupported(0x08B73924u, 0x6E72654Bu, "vfpu3 not lowered yet"); return;
L_08B73938:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B7393Cu, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08B73948:
    // nop
    goto L_08B7394C;
L_08B7394C:
    rt.unsupported(0x08B7394Cu, 0x75646F4Du, "unknown not lowered yet"); return;
L_08B73964:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    ctx.execute_vfpu_vscl_ct<117u, 115u, 112u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 59u, 0x08B8C734u>(ctx, &aot_mem); return;
    }
    goto L_08B7396C;
L_08B7396C:
    ctx.execute_vfpu_compare3(110u, 100u, 70u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 85u, 115u, 1u>();
    rt.unsupported(0x08B73974u, 0x00000072u, "special? not lowered yet"); return;
L_08B7397C:
    rt.unsupported(0x08B7397Cu, 0x69647453u, "unknown not lowered yet"); return;
L_08B73990:
    rt.unsupported(0x08B73990u, 0x4D737953u, "unknown not lowered yet"); return;
L_08B739A8:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    rt.unsupported(0x08B739ACu, 0x614D6461u, "vfpu0 not lowered yet"); return;
L_08B739C0:
    ctx.execute_vfpu_vcmp_ct<116u, 105u, 1u, 5u>();
    rt.unsupported(0x08B739C4u, 0x726F4673u, "unknown not lowered yet"); return;
L_08B739D4:
    rt.unsupported(0x08B739D4u, 0x41656373u, "unknown not lowered yet"); return;
L_08B739E4:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    ctx.execute_vfpu_compare3(97u, 115u, 67u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 63u, 0x08B8C7B4u>(ctx, &aot_mem); return;
    }
    goto L_08B739EC;
L_08B739EC:
    rt.unsupported(0x08B739ECu, 0x00006572u, "special? not lowered yet"); return;
L_08B739F4:
    rt.unsupported(0x08B739F4u, 0x41656373u, "unknown not lowered yet"); return;
L_08B73A08:
    rt.unsupported(0x08B73A08u, 0x47656373u, "cop1? not lowered yet"); return;
L_08B73A18:
    rt.unsupported(0x08B73A18u, 0x43656373u, "unknown not lowered yet"); return;
L_08B73A24:
    rt.unsupported(0x08B73A24u, 0x44656373u, "cop1? not lowered yet"); return;
L_08B73A34:
    rt.unsupported(0x08B73A34u, 0x4D656373u, "unknown not lowered yet"); return;
L_08B73A40:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B73A44u, 0x7355646Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 69u, 0x08B8C810u>(ctx, &aot_mem); return;
    }
    goto L_08B73A48;
L_08B73A48:
    ctx.gpr[14] = (0u | 0u);
    // nop
    goto L_08B73A50;
L_08B73A50:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B73A54u, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 71u, 0x08B8C820u>(ctx, &aot_mem); return;
    }
    goto L_08B73A58;
L_08B73A58:
    rt.unsupported(0x08B73A58u, 0x00007974u, "special? not lowered yet"); return;
L_08B73A60:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.unsupported(0x08B73A64u, 0x7265776Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 72u, 0x08B8C830u>(ctx, &aot_mem); return;
    }
    goto L_08B73A68;
L_08B73A68:
    // nop
    // nop
    goto L_08B73A70;
L_08B73A70:
    rt.unsupported(0x08B73A70u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B73A7C:
    rt.unsupported(0x08B73A7Cu, 0x4E656373u, "unknown not lowered yet"); return;
L_08B73A8C:
    rt.unsupported(0x08B73A8Cu, 0x4E656373u, "unknown not lowered yet"); return;
L_08B73AA0:
    rt.unsupported(0x08B73AA0u, 0x4E656373u, "unknown not lowered yet"); return;
L_08B73AB8:
    if (ctx.gpr[19] == ctx.gpr[5]) {
    rt.unsupported(0x08B73ABCu, 0x00006374u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 75u, 0x08B8C888u>(ctx, &aot_mem); return;
    }
    goto L_08B73AC0;
L_08B73AC0:
    // nop
    goto L_08B73AC4;
L_08B73AC4:
    if (ctx.gpr[27] != ctx.gpr[5]) {
    rt.unsupported(0x08B73AC8u, 0x446E616Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 77u, 0x08B8C894u>(ctx, &aot_mem); return;
    }
    goto L_08B73ACC;
L_08B73ACC:
    rt.unsupported(0x08B73ACCu, 0x00007672u, "special? not lowered yet"); return;
L_08B73AD4:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08B73AD8u, 0x70757272u, "unknown not lowered yet"); return;
L_08B73AE8:
    rt.unsupported(0x08B73AE8u, 0xD632ACDBu, "vfpu not lowered yet"); return;
L_08B73AFC:
    rt.unsupported(0x08B73B00u, 0x08B54DA8u, "control flow in delay slot"); return;
L_08B73B10:
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23880)));
    rt.unsupported(0x08B73B14u, 0xD61E6961u, "vfpu not lowered yet"); return;
L_08B73B1C:
    rt.unsupported(0x08B73B1Cu, 0xD7763699u, "vfpu not lowered yet"); return;
L_08B73B20:
    rt.unsupported(0x08B73B20u, 0x011F03C1u, "special? not lowered yet"); return;
L_08B73B2C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7687 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[21] & 22195u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) > 0) {
    rt.unsupported(0x08B73B38u, 0x7945ECDAu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 45u, 0x08B8691Cu>(ctx, &aot_mem); return;
    }
    goto L_08B73B3C;
L_08B73B3C:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[31] + static_cast<std::uint32_t>(14403)));
    rt.unsupported(0x08B73B40u, 0xB58E61B7u, "unknown not lowered yet"); return;
L_08B73B50:
    rt.unsupported(0x08B73B54u, 0x0AD043EDu, "control flow in delay slot"); return;
L_08B73B78:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[30];
    rt.unsupported(0x08B73B7Cu, 0x4DA4C788u, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 33u, 0x08B8C410u>(ctx, &aot_mem); return;
      }
      goto L_08B73B80;
    }
L_08B73B80:
    ctx.execute_vfpu_compare3(27u, 116u, 18u, 1u, 7u);
    rt.unsupported(0x08B73B84u, 0x7F27BB5Eu, "special3? not lowered yet"); return;
L_08B73BB0:
    ctx.gpr[25] = (static_cast<std::int32_t>(0u) < 10409 ? 1u : 0u);
    ctx.pc = 0x0FC28EB8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B73BC0:
    rt.unsupported(0x08B73BC0u, 0x04B7766Eu, "regimm? not lowered yet"); return;
L_08B73BCC:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[25];
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[22]) < -7623 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 18u, 0x08B5C134u>(ctx, &aot_mem); return;
      }
      goto L_08B73BD4;
    }
L_08B73BD4:
    ctx.gpr[23] = (ctx.gpr[5] | 33603u);
    if (ctx.gpr[6] == ctx.gpr[4]) {
    ctx.execute_vfpu_vdot_ct<86u, 12u, 85u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 741u, 0x08B67138u>(ctx, &aot_mem); return;
    }
    goto L_08B73BE0;
L_08B73BE0:
    rt.unsupported(0x08B73BE0u, 0x67AF3428u, "vfpu1 not lowered yet"); return;
L_08B73C00:
    rt.unsupported(0x08B73C00u, 0x20628E6Fu, "unknown not lowered yet"); return;
L_08B73C10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28722)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16461), ctx.gpr[7]);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15687)));
    goto L_08B73C20;
L_08B73C20:
    rt.unsupported(0x08B73C24u, 0x13407F13u, "control flow in delay slot"); return;
L_08B73C28:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[26];
    rt.unsupported(0x08B73C2Cu, 0x21FF80E4u, "unknown not lowered yet"); return;
      if (branch_taken) {
          goto L_08B732A4;
      }
      goto L_08B73C30;
    }
L_08B73C30:
    ctx.gpr[9] = (ctx.gpr[25] | 24280u);
    rt.unsupported(0x08B73C34u, 0x42560F23u, "unknown not lowered yet"); return;
L_08B73C40:
    rt.unsupported(0x08B73C40u, 0x611E9E11u, "vfpu0 not lowered yet"); return;
L_08B73C80:
    ctx.gpr[31] = (0x08B73C88u);
    ctx.gpr[29] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32002 ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B73C88u) goto L_08B73C88;
    return;
L_08B73C88:
    ctx.gpr[13] = (ctx.gpr[22] | 64222u);
    rt.unsupported(0x08B73C8Cu, 0x4D4E10ECu, "unknown not lowered yet"); return;
L_08B73C98:
    rt.unsupported(0x08B73C9Cu, 0x1F803938u, "control flow in delay slot"); return;
L_08B73CA0:
    rt.unsupported(0x08B73CA0u, 0x6A2774F3u, "unknown not lowered yet"); return;
L_08B73CA4:
    rt.unsupported(0x08B73CA4u, 0x05DB22CEu, "regimm? not lowered yet"); return;
L_08B73CB0:
    rt.memory().aot_store_word_left(ctx.gpr[26] + static_cast<std::uint32_t>(-6294), ctx.gpr[9]);
    rt.unsupported(0x08B73CB4u, 0xB287BD61u, "unknown not lowered yet"); return;
L_08B73CBC:
    ctx.gpr[31] = (0x08B73CC4u);
    ctx.gpr[19] = (ctx.gpr[14] < static_cast<std::uint32_t>(-7528) ? 1u : 0u);
    ctx.pc = 0x0EB8DC38u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CC4u) goto L_08B73CC4;
    return;
L_08B73CC4:
    if (static_cast<std::int32_t>(ctx.gpr[9]) > 0) {
    rt.unsupported(0x08B73CC8u, 0x61EB33F5u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 422u, 0x08B558E4u>(ctx, &aot_mem); return;
    }
    goto L_08B73CCC;
L_08B73CCC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<86u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 1u>(vfpu_d); }
    rt.unsupported(0x08B73CD0u, 0x6A8C3CD5u, "unknown not lowered yet"); return;
L_08B73CF0:
    ctx.gpr[4] = (ctx.gpr[12] < ctx.gpr[27] ? 1u : 0u);
    ctx.gpr[26] = (ctx.gpr[19] + static_cast<std::uint32_t>(28114));
    ctx.gpr[14] = (ctx.gpr[4] < static_cast<std::uint32_t>(27315) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[30] & 43831u);
    rt.unsupported(0x08B73D00u, 0x42778A9Fu, "unknown not lowered yet"); return;
L_08B73D10:
    rt.unsupported(0x08B73D10u, 0x68A46B95u, "unknown not lowered yet"); return;
L_08B73D44:
    ctx.gpr[5] = (ctx.gpr[10] - ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[10] < static_cast<std::uint32_t>(-3218) ? 1u : 0u);
    rt.unsupported(0x08B73D50u, 0x13F592BCu, "control flow in delay slot"); return;
L_08B73D54:
    if (static_cast<std::int32_t>(ctx.gpr[22]) > 0) {
    ctx.execute_vfpu_compare3(83u, 104u, 68u, 1u, 7u);
        (void)rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 98u, 0x08B7AEACu>(ctx, &aot_mem); return;
    }
    goto L_08B73D5C;
L_08B73D5C:
    ctx.gpr[29] = (aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(3117)));
    rt.unsupported(0x08B73D60u, 0xB011922Fu, "unknown not lowered yet"); return;
L_08B73D70:
    rt.unsupported(0x08B73D70u, 0x6AD345D7u, "unknown not lowered yet"); return;
L_08B73D88:
    rt.unsupported(0x08B73D88u, 0xCEADEB47u, "unknown not lowered yet"); return;
L_08B73D9C:
    { const std::uint32_t vfpu_address = ctx.gpr[27] + static_cast<std::uint32_t>(-28876);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<51u, 4u>(vfpu_value); }
    rt.unsupported(0x08B73DA0u, 0xE1619D7Cu, "unknown not lowered yet"); return;
L_08B73DEC:
    ctx.execute_vfpu_vdot_ct<14u, 84u, 84u, 1u>();
    rt.unsupported(0x08B73DF0u, 0x68DA9E36u, "unknown not lowered yet"); return;
L_08B73E24:
    { const bool branch_taken = ctx.gpr[29] == ctx.gpr[5];
    rt.unsupported(0x08B73E28u, 0x237DBD4Fu, "unknown not lowered yet"); return;
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 657u, 0x08B5EDE4u>(ctx, &aot_mem); return;
      }
      goto L_08B73E2C;
    }
L_08B73E2C:
    rt.unsupported(0x08B73E2Cu, 0x7591C7DBu, "unknown not lowered yet"); return;
L_08B73E40:
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[13];
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-19735), static_cast<std::uint16_t>(ctx.gpr[26]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 45u, 0x08B803FCu>(ctx, &aot_mem); return;
      }
      goto L_08B73E48;
    }
L_08B73E48:
    rt.unsupported(0x08B73E48u, 0xF78BA90Au, "vfpu not lowered yet"); return;
L_08B73E4C:
    ctx.gpr[14] = (ctx.gpr[23] ^ 29281u);
    ctx.pc = 0x04332CFCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B73E60:
    rt.unsupported(0x08B73E60u, 0xD1FF982Au, "vfpu4 not lowered yet"); return;
L_08B73E78:
    rt.unsupported(0x08B73E78u, 0xB7F46618u, "unknown not lowered yet"); return;
L_08B73E7C:
    rt.unsupported(0x08B73E7Cu, 0x05572A5Fu, "regimm? not lowered yet"); return;
L_08B73E84:
    rt.unsupported(0x08B73E88u, 0x5F10D406u, "control flow in delay slot"); return;
L_08B73E8C:
    rt.unsupported(0x08B73E8Cu, 0x42EC03ACu, "unknown not lowered yet"); return;
L_08B73E98:
    rt.unsupported(0x08B73E98u, 0x71B19E77u, "unknown not lowered yet"); return;
L_08B73ED4:
    ctx.gpr[17] = (ctx.gpr[18] & 59990u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B73F08u, 0x00000054u, "special? not lowered yet"); return;
L_08B73F70:
    rt.unsupported(0x08B73F70u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B73F8C:
    rt.unsupported(0x08B73F8Cu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B73FA0:
    // nop
    goto L_08B73FA4;
L_08B73FA4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    rt.unsupported(0x08B73FA8u, 0x7361730Au, "unknown not lowered yet"); return;
L_08B73FBC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B73FC0u, 0x756F5320u, "unknown not lowered yet"); return;
L_08B73FCC:
    rt.unsupported(0x08B73FCCu, 0x63206563u, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0219(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0219_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_219(Runtime &runtime) {
    runtime.register_generated_unit(219u, 0x08B70000u, 16384u, &recomp_unit_0219, &recomp_unit_0219_entry);
    runtime.register_function(0x08B70000u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7000Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70014u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70018u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70038u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70058u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7006Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70078u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B700A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B700B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B700C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B700ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7010Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70128u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70150u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70170u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70198u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7024Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70250u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70280u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B702ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70314u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70328u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70348u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70358u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70368u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70370u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70394u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B703A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B703BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B703C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B703D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B703E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B703F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70400u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70418u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70430u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70440u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70450u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70458u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70478u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70480u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704C0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B704F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70544u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70554u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70560u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70570u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7057Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70588u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70590u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7059Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B705B8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B705C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B705D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B705F0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70600u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7060Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70614u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7061Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70628u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7062Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70634u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70640u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70654u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70670u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70680u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70694u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B706A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B706ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B706B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B706C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B706E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B706FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70708u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70710u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70724u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7074Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70758u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70778u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7077Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B707B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B707C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B707E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B707ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B707F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70800u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70814u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7082Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70834u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7083Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7084Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7085Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70868u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70874u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7087Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7088Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70894u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B708B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70910u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70918u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70950u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70954u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7095Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70978u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70984u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70990u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70998u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B709A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B709B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B709D0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70A2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70A34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70A6Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70A70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70A78u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70A94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70AA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70AACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70AE4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70AECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B00u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B04u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B44u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70B9Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70BACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70BB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70BC0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70BF0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70C20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70C40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70C58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70C64u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70C80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70C8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CC0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CC8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70CDCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D30u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D48u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D74u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70D88u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70DC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E68u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E78u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70E98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70EA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70EC8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70ED4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70EDCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70EECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F00u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F30u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F38u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F64u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F74u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F88u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70F98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70FA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70FB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70FC0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70FE0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B70FF8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71008u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71010u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71020u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71034u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71044u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71050u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7105Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7106Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71090u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71094u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B710B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B710D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B710F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71108u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71118u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71120u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7112Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71144u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71180u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711B8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B711FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71218u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7122Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71254u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71270u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71284u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71294u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B712B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B712E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B712ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B712F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71314u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71318u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71328u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7133Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7134Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71358u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71364u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71380u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7138Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B713ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B713C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B713D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B713DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B713ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71400u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71410u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7141Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71428u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71444u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71450u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71474u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71478u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71494u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B714BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B714DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B714ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71500u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71508u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71510u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7151Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7152Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71534u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7153Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71544u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71550u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71568u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B715A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B715C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B715D0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B715D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B715DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B715E8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71610u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71618u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71620u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7163Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71654u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7167Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71698u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B716ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B716BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B716DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7170Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71714u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7171Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7173Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71740u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71750u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71764u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71774u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71780u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7178Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7179Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B717BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B717D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B717E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B717ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B717FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71810u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71820u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7182Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71838u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71848u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7186Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71870u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7188Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B718B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B718F0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71910u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7191Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71920u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71928u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71934u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7195Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71964u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7196Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71988u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B719A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B719C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B719E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B719F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71A08u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71A28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71A64u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71A70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71A98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71AB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71ABCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71ACCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71AD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71AFCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B44u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B68u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71B90u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71BACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71BB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71BD0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71BD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71BE8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71BF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C04u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71C8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71CB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71CDCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71CF0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D14u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D30u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D38u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D48u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D74u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71D94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71DBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71DD0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71DECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71DF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E18u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E48u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71E68u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71EA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71EB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71ED8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71EF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71EFCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F18u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71F8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71FA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71FB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71FBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71FD0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71FECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B71FF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72010u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72018u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72028u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72034u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72044u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72074u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72098u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B720A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B720B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B720BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B720CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B720F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7211Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72130u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7214Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72154u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72170u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72178u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72188u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72198u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B721B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B721BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B721C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B721D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B721FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72210u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7222Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72234u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72250u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72258u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72260u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7226Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7227Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72288u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B722A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B722E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B722F0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72318u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72334u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7233Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7234Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72358u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7237Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7238Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7239Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B723C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B723CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B723E8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B723F0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B723FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72410u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7242Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72434u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72450u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72458u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72468u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72474u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72484u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B724B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B724D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B724E0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B724F0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B724FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7250Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72534u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7255Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72570u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7258Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72594u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B725B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B725B8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B725C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B725D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B725F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B725FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72604u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72614u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7263Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72650u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7266Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72674u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72690u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72698u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B726A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B726ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B726BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B726C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B726E8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B726F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72700u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72708u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72718u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72720u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72740u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B727A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B727A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B727E0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B727E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B727ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72808u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72818u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72824u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72834u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72840u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7284Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72854u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72860u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72868u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72898u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B728A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B728D8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B728E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B728F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72908u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72910u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72914u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72938u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72954u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72960u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B729A0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B729B8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B729C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B729D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B729DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B729F8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72A10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72A4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72A70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72A74u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72A88u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72A98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72AA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72ABCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72AD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72ADCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72B20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72B28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72B34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72B3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72B60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72BB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72BBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72BC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72BE8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72BF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C44u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C68u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72C8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72CA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72CB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72CC8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72CD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72CF0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D00u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D14u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72D94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DC8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DD4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DDCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DE0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DE8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72DFCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E00u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E08u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E24u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E88u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72E94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72EA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72ECCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72EE4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72EE8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72EF0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F04u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F24u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F44u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F64u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F6Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F74u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F94u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72F9Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FCCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FD4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FDCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FE4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FF4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B72FFCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73004u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7300Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73014u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7301Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73024u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7302Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73034u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7303Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73044u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7304Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73054u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7305Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73064u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7306Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73074u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7307Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73084u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7308Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73094u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7309Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B730FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73104u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7310Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73114u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7311Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73124u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7312Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73134u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7313Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73144u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7314Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73154u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7315Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73164u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7316Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73174u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7317Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73184u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7318Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73194u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7319Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B731FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73204u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7320Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73224u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7322Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73234u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7323Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73244u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7324Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73254u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7325Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73264u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7326Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73274u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7327Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73284u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7328Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73294u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7329Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B732FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73304u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7330Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7331Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7332Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7333Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7334Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7335Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7336Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73374u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7337Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73384u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7338Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73394u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7339Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B733A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B733ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B733CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B733DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B733ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B733FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7340Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73414u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7341Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73424u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7342Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73434u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7343Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73444u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7344Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73454u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7345Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73464u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7346Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73474u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7347Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73484u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7348Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73494u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7349Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B734FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73504u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7350Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73514u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7351Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73524u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7352Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73534u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73544u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7354Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73554u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7355Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73564u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7356Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73574u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7357Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73584u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7358Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73594u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7359Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735ACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735B4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735BCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735C4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735CCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735DCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B735FCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73604u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7360Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73614u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7361Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73624u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7362Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7363Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7364Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73654u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7365Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73664u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7366Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7367Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73684u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7368Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73694u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7369Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B736A4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B736B0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B736C0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B736C8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B738D0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B738D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7390Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73924u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73938u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73948u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7394Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73964u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7396Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B7397Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73990u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B739A8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B739C0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B739D4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B739E4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B739ECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B739F4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A08u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A18u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A24u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A48u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A50u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A68u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73A8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AC0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73ACCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AD4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AE8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73AFCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B1Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B50u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B78u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73B80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BC0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BCCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BD4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BE0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C00u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C30u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C88u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CB0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CCCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CF0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D10u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D44u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D88u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D9Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73DECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E24u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E48u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E60u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E78u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73ED4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FCCu, &recomp_unit_0219, "recomp_unit_0219");
}
} // namespace psprecomp
