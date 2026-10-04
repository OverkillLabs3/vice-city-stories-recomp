#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0119[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 14, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 28, 0, 0, 29, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0,
    0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 43, 0, 44, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 50, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0,
    0, 0, 79, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0,
    0, 86, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103,
    0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 125, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 155, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0,
    178, 0, 0, 0, 0, 179, 0, 180, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189,
    0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205,
    206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 242, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 260, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0,
    0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0,
    303, 0, 304, 0, 305, 0, 306, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0,
    314, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0, 0, 320, 0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327,
    0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 337, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0,
    0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387,
    0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 0, 400, 0, 401, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 0,
    0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 430, 0, 0, 0, 431, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 451, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 457, 0, 0, 0, 0, 0,
    0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 474, 0, 0, 475, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 479, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 487, 488, 0, 489, 0, 0, 490,
    0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502,
    0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0,
    517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 0,
    535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0,
    0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0,
    0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 567,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0,
    580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592,
    0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602,
    0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0,
    0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0,
    0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0,
    0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0,
    638, 0, 639, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650,
    0, 651, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659,
    660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0,
    667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0,
    0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0,
    680, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 693,
    0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 0, 0,
    704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 711,
    0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 718, 0,
    719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0,
    726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 739,
    0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 745, 0, 0, 746, 0, 747, 0, 748, 0, 0,
    0, 749, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757,
    0, 758, 0, 759, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767,
    0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0,
    775, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0,
    0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 787,
    0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0,
    795, 0, 796, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 0,
    0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0,
    0, 815, 0, 816, 0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821, 0, 822, 0, 823, 0, 824, 0, 0, 0, 0, 0,
    825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 828, 0, 829, 0, 0, 0, 0, 0, 0,
    0, 830, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0,
    0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846,
};
void recomp_unit_0119_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0119[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E0000;
    case 2u: goto L_089E0020;
    case 3u: goto L_089E002C;
    case 4u: goto L_089E0034;
    case 5u: goto L_089E0064;
    case 6u: goto L_089E006C;
    case 7u: goto L_089E0070;
    case 8u: goto L_089E0078;
    case 9u: goto L_089E0090;
    case 10u: goto L_089E00B8;
    case 11u: goto L_089E00C4;
    case 12u: goto L_089E00CC;
    case 13u: goto L_089E00FC;
    case 14u: goto L_089E0104;
    case 15u: goto L_089E0108;
    case 16u: goto L_089E0110;
    case 17u: goto L_089E0128;
    case 18u: goto L_089E0164;
    case 19u: goto L_089E0168;
    case 20u: goto L_089E018C;
    case 21u: goto L_089E0194;
    case 22u: goto L_089E01B4;
    case 23u: goto L_089E01C0;
    case 24u: goto L_089E01D8;
    case 25u: goto L_089E01DC;
    case 26u: goto L_089E01E4;
    case 27u: goto L_089E0204;
    case 28u: goto L_089E0210;
    case 29u: goto L_089E021C;
    case 30u: goto L_089E0220;
    case 31u: goto L_089E0234;
    case 32u: goto L_089E0264;
    case 33u: goto L_089E0270;
    case 34u: goto L_089E0278;
    case 35u: goto L_089E0290;
    case 36u: goto L_089E029C;
    case 37u: goto L_089E02A4;
    case 38u: goto L_089E02AC;
    case 39u: goto L_089E02C8;
    case 40u: goto L_089E02D4;
    case 41u: goto L_089E02E8;
    case 42u: goto L_089E0300;
    case 43u: goto L_089E0308;
    case 44u: goto L_089E0310;
    case 45u: goto L_089E0314;
    case 46u: goto L_089E0330;
    case 47u: goto L_089E0338;
    case 48u: goto L_089E0350;
    case 49u: goto L_089E0364;
    case 50u: goto L_089E0384;
    case 51u: goto L_089E0388;
    case 52u: goto L_089E03A4;
    case 53u: goto L_089E03CC;
    case 54u: goto L_089E03F4;
    case 55u: goto L_089E040C;
    case 56u: goto L_089E0434;
    case 57u: goto L_089E045C;
    case 58u: goto L_089E0474;
    case 59u: goto L_089E04A0;
    case 60u: goto L_089E04AC;
    case 61u: goto L_089E04B4;
    case 62u: goto L_089E04C4;
    case 63u: goto L_089E04CC;
    case 64u: goto L_089E04DC;
    case 65u: goto L_089E04EC;
    case 66u: goto L_089E04F0;
    case 67u: goto L_089E0514;
    case 68u: goto L_089E051C;
    case 69u: goto L_089E053C;
    case 70u: goto L_089E0548;
    case 71u: goto L_089E0560;
    case 72u: goto L_089E0564;
    case 73u: goto L_089E0580;
    case 74u: goto L_089E05A0;
    case 75u: goto L_089E05BC;
    case 76u: goto L_089E05E4;
    case 77u: goto L_089E05F0;
    case 78u: goto L_089E05F8;
    case 79u: goto L_089E0608;
    case 80u: goto L_089E0610;
    case 81u: goto L_089E0614;
    case 82u: goto L_089E0638;
    case 83u: goto L_089E0640;
    case 84u: goto L_089E0660;
    case 85u: goto L_089E066C;
    case 86u: goto L_089E0684;
    case 87u: goto L_089E0688;
    case 88u: goto L_089E06A0;
    case 89u: goto L_089E06F8;
    case 90u: goto L_089E0704;
    case 91u: goto L_089E074C;
    case 92u: goto L_089E075C;
    case 93u: goto L_089E077C;
    case 94u: goto L_089E0784;
    case 95u: goto L_089E0794;
    case 96u: goto L_089E07A0;
    case 97u: goto L_089E07A8;
    case 98u: goto L_089E07C0;
    case 99u: goto L_089E07C8;
    case 100u: goto L_089E07E0;
    case 101u: goto L_089E07EC;
    case 102u: goto L_089E07F4;
    case 103u: goto L_089E07FC;
    case 104u: goto L_089E0814;
    case 105u: goto L_089E081C;
    case 106u: goto L_089E0834;
    case 107u: goto L_089E083C;
    case 108u: goto L_089E0844;
    case 109u: goto L_089E0860;
    case 110u: goto L_089E0868;
    case 111u: goto L_089E0870;
    case 112u: goto L_089E0878;
    case 113u: goto L_089E0888;
    case 114u: goto L_089E08B4;
    case 115u: goto L_089E08C4;
    case 116u: goto L_089E08CC;
    case 117u: goto L_089E08D4;
    case 118u: goto L_089E08E8;
    case 119u: goto L_089E08F0;
    case 120u: goto L_089E0928;
    case 121u: goto L_089E0938;
    case 122u: goto L_089E0958;
    case 123u: goto L_089E0968;
    case 124u: goto L_089E0974;
    case 125u: goto L_089E0978;
    case 126u: goto L_089E098C;
    case 127u: goto L_089E09AC;
    case 128u: goto L_089E09BC;
    case 129u: goto L_089E09C0;
    case 130u: goto L_089E09E4;
    case 131u: goto L_089E09EC;
    case 132u: goto L_089E0A0C;
    case 133u: goto L_089E0A18;
    case 134u: goto L_089E0A30;
    case 135u: goto L_089E0A34;
    case 136u: goto L_089E0A4C;
    case 137u: goto L_089E0A58;
    case 138u: goto L_089E0A5C;
    case 139u: goto L_089E0A80;
    case 140u: goto L_089E0A88;
    case 141u: goto L_089E0AA8;
    case 142u: goto L_089E0AB4;
    case 143u: goto L_089E0ACC;
    case 144u: goto L_089E0AD0;
    case 145u: goto L_089E0AD8;
    case 146u: goto L_089E0AF8;
    case 147u: goto L_089E0B14;
    case 148u: goto L_089E0B40;
    case 149u: goto L_089E0B4C;
    case 150u: goto L_089E0B5C;
    case 151u: goto L_089E0B7C;
    case 152u: goto L_089E0B94;
    case 153u: goto L_089E0BA0;
    case 154u: goto L_089E0BA8;
    case 155u: goto L_089E0BAC;
    case 156u: goto L_089E0BB0;
    case 157u: goto L_089E0BD0;
    case 158u: goto L_089E0BE0;
    case 159u: goto L_089E0C00;
    case 160u: goto L_089E0C08;
    case 161u: goto L_089E0C28;
    case 162u: goto L_089E0C34;
    case 163u: goto L_089E0C38;
    case 164u: goto L_089E0C4C;
    case 165u: goto L_089E0C7C;
    case 166u: goto L_089E0C88;
    case 167u: goto L_089E0C90;
    case 168u: goto L_089E0CAC;
    case 169u: goto L_089E0CC8;
    case 170u: goto L_089E0D10;
    case 171u: goto L_089E0D1C;
    case 172u: goto L_089E0D28;
    case 173u: goto L_089E0D30;
    case 174u: goto L_089E0D48;
    case 175u: goto L_089E0D60;
    case 176u: goto L_089E0D68;
    case 177u: goto L_089E0D78;
    case 178u: goto L_089E0D80;
    case 179u: goto L_089E0D94;
    case 180u: goto L_089E0D9C;
    case 181u: goto L_089E0DA0;
    case 182u: goto L_089E0DAC;
    case 183u: goto L_089E0DB4;
    case 184u: goto L_089E0DBC;
    case 185u: goto L_089E0DC8;
    case 186u: goto L_089E0DD4;
    case 187u: goto L_089E0DE0;
    case 188u: goto L_089E0DF0;
    case 189u: goto L_089E0DFC;
    case 190u: goto L_089E0E0C;
    case 191u: goto L_089E0E14;
    case 192u: goto L_089E0E38;
    case 193u: goto L_089E0E50;
    case 194u: goto L_089E0E84;
    case 195u: goto L_089E0EAC;
    case 196u: goto L_089E0EB8;
    case 197u: goto L_089E0EC0;
    case 198u: goto L_089E0F08;
    case 199u: goto L_089E0F2C;
    case 200u: goto L_089E0F38;
    case 201u: goto L_089E0F44;
    case 202u: goto L_089E0F4C;
    case 203u: goto L_089E0F54;
    case 204u: goto L_089E0F74;
    case 205u: goto L_089E0F7C;
    case 206u: goto L_089E0F80;
    case 207u: goto L_089E0F88;
    case 208u: goto L_089E0F90;
    case 209u: goto L_089E0F9C;
    case 210u: goto L_089E0FA4;
    case 211u: goto L_089E0FA8;
    case 212u: goto L_089E0FC4;
    case 213u: goto L_089E0FDC;
    case 214u: goto L_089E0FFC;
    case 215u: goto L_089E1040;
    case 216u: goto L_089E1068;
    case 217u: goto L_089E1094;
    case 218u: goto L_089E10AC;
    case 219u: goto L_089E10D4;
    case 220u: goto L_089E10E0;
    case 221u: goto L_089E10E8;
    case 222u: goto L_089E10FC;
    case 223u: goto L_089E110C;
    case 224u: goto L_089E1114;
    case 225u: goto L_089E111C;
    case 226u: goto L_089E1134;
    case 227u: goto L_089E113C;
    case 228u: goto L_089E1150;
    case 229u: goto L_089E1168;
    case 230u: goto L_089E1190;
    case 231u: goto L_089E119C;
    case 232u: goto L_089E11A8;
    case 233u: goto L_089E11C0;
    case 234u: goto L_089E11E8;
    case 235u: goto L_089E11F8;
    case 236u: goto L_089E11FC;
    case 237u: goto L_089E1220;
    case 238u: goto L_089E1228;
    case 239u: goto L_089E1248;
    case 240u: goto L_089E1254;
    case 241u: goto L_089E126C;
    case 242u: goto L_089E1270;
    case 243u: goto L_089E1288;
    case 244u: goto L_089E12B0;
    case 245u: goto L_089E12BC;
    case 246u: goto L_089E12D8;
    case 247u: goto L_089E133C;
    case 248u: goto L_089E13B4;
    case 249u: goto L_089E13CC;
    case 250u: goto L_089E1400;
    case 251u: goto L_089E1414;
    case 252u: goto L_089E141C;
    case 253u: goto L_089E145C;
    case 254u: goto L_089E146C;
    case 255u: goto L_089E147C;
    case 256u: goto L_089E14A4;
    case 257u: goto L_089E14B0;
    case 258u: goto L_089E14B8;
    case 259u: goto L_089E14C4;
    case 260u: goto L_089E14D0;
    case 261u: goto L_089E14D4;
    case 262u: goto L_089E14EC;
    case 263u: goto L_089E1520;
    case 264u: goto L_089E1534;
    case 265u: goto L_089E153C;
    case 266u: goto L_089E157C;
    case 267u: goto L_089E15A0;
    case 268u: goto L_089E15AC;
    case 269u: goto L_089E15B4;
    case 270u: goto L_089E15C0;
    case 271u: goto L_089E15D8;
    case 272u: goto L_089E1600;
    case 273u: goto L_089E1610;
    case 274u: goto L_089E1620;
    case 275u: goto L_089E1634;
    case 276u: goto L_089E1640;
    case 277u: goto L_089E1650;
    case 278u: goto L_089E1660;
    case 279u: goto L_089E1674;
    case 280u: goto L_089E1684;
    case 281u: goto L_089E1694;
    case 282u: goto L_089E169C;
    case 283u: goto L_089E16A4;
    case 284u: goto L_089E16A8;
    case 285u: goto L_089E16B4;
    case 286u: goto L_089E16D0;
    case 287u: goto L_089E16DC;
    case 288u: goto L_089E16EC;
    case 289u: goto L_089E16F8;
    case 290u: goto L_089E1708;
    case 291u: goto L_089E1720;
    case 292u: goto L_089E1728;
    case 293u: goto L_089E1730;
    case 294u: goto L_089E1738;
    case 295u: goto L_089E1740;
    case 296u: goto L_089E1748;
    case 297u: goto L_089E1750;
    case 298u: goto L_089E1758;
    case 299u: goto L_089E1760;
    case 300u: goto L_089E1768;
    case 301u: goto L_089E1770;
    case 302u: goto L_089E1778;
    case 303u: goto L_089E1780;
    case 304u: goto L_089E1788;
    case 305u: goto L_089E1790;
    case 306u: goto L_089E1798;
    case 307u: goto L_089E179C;
    case 308u: goto L_089E17B0;
    case 309u: goto L_089E17C0;
    case 310u: goto L_089E17C8;
    case 311u: goto L_089E17D0;
    case 312u: goto L_089E17DC;
    case 313u: goto L_089E17F8;
    case 314u: goto L_089E1800;
    case 315u: goto L_089E180C;
    case 316u: goto L_089E1818;
    case 317u: goto L_089E1820;
    case 318u: goto L_089E182C;
    case 319u: goto L_089E1834;
    case 320u: goto L_089E1840;
    case 321u: goto L_089E1848;
    case 322u: goto L_089E1854;
    case 323u: goto L_089E185C;
    case 324u: goto L_089E1864;
    case 325u: goto L_089E186C;
    case 326u: goto L_089E1874;
    case 327u: goto L_089E187C;
    case 328u: goto L_089E1884;
    case 329u: goto L_089E188C;
    case 330u: goto L_089E1894;
    case 331u: goto L_089E189C;
    case 332u: goto L_089E18A4;
    case 333u: goto L_089E18AC;
    case 334u: goto L_089E18B4;
    case 335u: goto L_089E18BC;
    case 336u: goto L_089E18C4;
    case 337u: goto L_089E18D0;
    case 338u: goto L_089E18D4;
    case 339u: goto L_089E18E8;
    case 340u: goto L_089E193C;
    case 341u: goto L_089E1980;
    case 342u: goto L_089E198C;
    case 343u: goto L_089E19A8;
    case 344u: goto L_089E19C8;
    case 345u: goto L_089E19E0;
    case 346u: goto L_089E19EC;
    case 347u: goto L_089E19F8;
    case 348u: goto L_089E1A08;
    case 349u: goto L_089E1A10;
    case 350u: goto L_089E1A1C;
    case 351u: goto L_089E1A4C;
    case 352u: goto L_089E1A60;
    case 353u: goto L_089E1A8C;
    case 354u: goto L_089E1AB4;
    case 355u: goto L_089E1ABC;
    case 356u: goto L_089E1AC4;
    case 357u: goto L_089E1ACC;
    case 358u: goto L_089E1AD0;
    case 359u: goto L_089E1AEC;
    case 360u: goto L_089E1AF4;
    case 361u: goto L_089E1B14;
    case 362u: goto L_089E1B20;
    case 363u: goto L_089E1B38;
    case 364u: goto L_089E1B3C;
    case 365u: goto L_089E1B54;
    case 366u: goto L_089E1B74;
    case 367u: goto L_089E1B7C;
    case 368u: goto L_089E1B90;
    case 369u: goto L_089E1BD0;
    case 370u: goto L_089E1BF0;
    case 371u: goto L_089E1C08;
    case 372u: goto L_089E1C14;
    case 373u: goto L_089E1C20;
    case 374u: goto L_089E1C30;
    case 375u: goto L_089E1C38;
    case 376u: goto L_089E1C44;
    case 377u: goto L_089E1C74;
    case 378u: goto L_089E1C88;
    case 379u: goto L_089E1CB0;
    case 380u: goto L_089E1CF4;
    case 381u: goto L_089E1D00;
    case 382u: goto L_089E1D1C;
    case 383u: goto L_089E1D3C;
    case 384u: goto L_089E1D54;
    case 385u: goto L_089E1D60;
    case 386u: goto L_089E1D6C;
    case 387u: goto L_089E1D7C;
    case 388u: goto L_089E1D84;
    case 389u: goto L_089E1D94;
    case 390u: goto L_089E1DC0;
    case 391u: goto L_089E1DD4;
    case 392u: goto L_089E1E00;
    case 393u: goto L_089E1E40;
    case 394u: goto L_089E1E80;
    case 395u: goto L_089E1E88;
    case 396u: goto L_089E1E90;
    case 397u: goto L_089E1E9C;
    case 398u: goto L_089E1ED8;
    case 399u: goto L_089E1EDC;
    case 400u: goto L_089E1EEC;
    case 401u: goto L_089E1EF4;
    case 402u: goto L_089E1EF8;
    case 403u: goto L_089E1F1C;
    case 404u: goto L_089E1F24;
    case 405u: goto L_089E1F3C;
    case 406u: goto L_089E1F50;
    case 407u: goto L_089E1F70;
    case 408u: goto L_089E1F74;
    case 409u: goto L_089E1F94;
    case 410u: goto L_089E1FD4;
    case 411u: goto L_089E1FF4;
    case 412u: goto L_089E200C;
    case 413u: goto L_089E2018;
    case 414u: goto L_089E2024;
    case 415u: goto L_089E2034;
    case 416u: goto L_089E203C;
    case 417u: goto L_089E2048;
    case 418u: goto L_089E2078;
    case 419u: goto L_089E208C;
    case 420u: goto L_089E20B4;
    case 421u: goto L_089E2120;
    case 422u: goto L_089E215C;
    case 423u: goto L_089E2164;
    case 424u: goto L_089E216C;
    case 425u: goto L_089E2178;
    case 426u: goto L_089E219C;
    case 427u: goto L_089E21C0;
    case 428u: goto L_089E21CC;
    case 429u: goto L_089E21DC;
    case 430u: goto L_089E21E0;
    case 431u: goto L_089E21F0;
    case 432u: goto L_089E2204;
    case 433u: goto L_089E223C;
    case 434u: goto L_089E2244;
    case 435u: goto L_089E224C;
    case 436u: goto L_089E225C;
    case 437u: goto L_089E226C;
    case 438u: goto L_089E2284;
    case 439u: goto L_089E2294;
    case 440u: goto L_089E22A4;
    case 441u: goto L_089E2354;
    case 442u: goto L_089E2390;
    case 443u: goto L_089E2398;
    case 444u: goto L_089E23C4;
    case 445u: goto L_089E23E0;
    case 446u: goto L_089E23F0;
    case 447u: goto L_089E2408;
    case 448u: goto L_089E241C;
    case 449u: goto L_089E2450;
    case 450u: goto L_089E2460;
    case 451u: goto L_089E2464;
    case 452u: goto L_089E2480;
    case 453u: goto L_089E2490;
    case 454u: goto L_089E24CC;
    case 455u: goto L_089E24DC;
    case 456u: goto L_089E24E4;
    case 457u: goto L_089E24E8;
    case 458u: goto L_089E2504;
    case 459u: goto L_089E250C;
    case 460u: goto L_089E2520;
    case 461u: goto L_089E252C;
    case 462u: goto L_089E2534;
    case 463u: goto L_089E2554;
    case 464u: goto L_089E2564;
    case 465u: goto L_089E2578;
    case 466u: goto L_089E25A8;
    case 467u: goto L_089E25B0;
    case 468u: goto L_089E25B8;
    case 469u: goto L_089E25C0;
    case 470u: goto L_089E25C8;
    case 471u: goto L_089E25CC;
    case 472u: goto L_089E25DC;
    case 473u: goto L_089E25EC;
    case 474u: goto L_089E260C;
    case 475u: goto L_089E2618;
    case 476u: goto L_089E261C;
    case 477u: goto L_089E2654;
    case 478u: goto L_089E2670;
    case 479u: goto L_089E2684;
    case 480u: goto L_089E2690;
    case 481u: goto L_089E269C;
    case 482u: goto L_089E26A4;
    case 483u: goto L_089E26B8;
    case 484u: goto L_089E26C0;
    case 485u: goto L_089E26CC;
    case 486u: goto L_089E26DC;
    case 487u: goto L_089E26E4;
    case 488u: goto L_089E26E8;
    case 489u: goto L_089E26F0;
    case 490u: goto L_089E26FC;
    case 491u: goto L_089E2708;
    case 492u: goto L_089E2710;
    case 493u: goto L_089E2734;
    case 494u: goto L_089E273C;
    case 495u: goto L_089E2740;
    case 496u: goto L_089E2748;
    case 497u: goto L_089E2788;
    case 498u: goto L_089E27A4;
    case 499u: goto L_089E27B4;
    case 500u: goto L_089E27C4;
    case 501u: goto L_089E27E8;
    case 502u: goto L_089E27FC;
    case 503u: goto L_089E2804;
    case 504u: goto L_089E280C;
    case 505u: goto L_089E2814;
    case 506u: goto L_089E281C;
    case 507u: goto L_089E2828;
    case 508u: goto L_089E2834;
    case 509u: goto L_089E283C;
    case 510u: goto L_089E2844;
    case 511u: goto L_089E284C;
    case 512u: goto L_089E2854;
    case 513u: goto L_089E285C;
    case 514u: goto L_089E2868;
    case 515u: goto L_089E2870;
    case 516u: goto L_089E2878;
    case 517u: goto L_089E2880;
    case 518u: goto L_089E2888;
    case 519u: goto L_089E2890;
    case 520u: goto L_089E28A8;
    case 521u: goto L_089E28B8;
    case 522u: goto L_089E28E8;
    case 523u: goto L_089E2918;
    case 524u: goto L_089E2924;
    case 525u: goto L_089E2934;
    case 526u: goto L_089E2940;
    case 527u: goto L_089E2948;
    case 528u: goto L_089E2960;
    case 529u: goto L_089E299C;
    case 530u: goto L_089E29BC;
    case 531u: goto L_089E29D0;
    case 532u: goto L_089E29D8;
    case 533u: goto L_089E29E4;
    case 534u: goto L_089E29F0;
    case 535u: goto L_089E2A00;
    case 536u: goto L_089E2A08;
    case 537u: goto L_089E2A10;
    case 538u: goto L_089E2A2C;
    case 539u: goto L_089E2A6C;
    case 540u: goto L_089E2A90;
    case 541u: goto L_089E2AA0;
    case 542u: goto L_089E2AAC;
    case 543u: goto L_089E2AD8;
    case 544u: goto L_089E2B04;
    case 545u: goto L_089E2B40;
    case 546u: goto L_089E2B70;
    case 547u: goto L_089E2B94;
    case 548u: goto L_089E2BC4;
    case 549u: goto L_089E2BE4;
    case 550u: goto L_089E2C04;
    case 551u: goto L_089E2C4C;
    case 552u: goto L_089E2C74;
    case 553u: goto L_089E2C7C;
    case 554u: goto L_089E2CB0;
    case 555u: goto L_089E2CC0;
    case 556u: goto L_089E2CD0;
    case 557u: goto L_089E2CD8;
    case 558u: goto L_089E2D20;
    case 559u: goto L_089E2D30;
    case 560u: goto L_089E2D40;
    case 561u: goto L_089E2D48;
    case 562u: goto L_089E2D7C;
    case 563u: goto L_089E2DA8;
    case 564u: goto L_089E2DD0;
    case 565u: goto L_089E2DF0;
    case 566u: goto L_089E2DF8;
    case 567u: goto L_089E2DFC;
    case 568u: goto L_089E2E30;
    case 569u: goto L_089E2E40;
    case 570u: goto L_089E2E44;
    case 571u: goto L_089E2E70;
    case 572u: goto L_089E2E9C;
    case 573u: goto L_089E2ECC;
    case 574u: goto L_089E2EF8;
    case 575u: goto L_089E2F24;
    case 576u: goto L_089E2F2C;
    case 577u: goto L_089E2F30;
    case 578u: goto L_089E2F54;
    case 579u: goto L_089E2F78;
    case 580u: goto L_089E2F80;
    case 581u: goto L_089E2F88;
    case 582u: goto L_089E2F90;
    case 583u: goto L_089E2F98;
    case 584u: goto L_089E2FA0;
    case 585u: goto L_089E2FA8;
    case 586u: goto L_089E2FB0;
    case 587u: goto L_089E2FBC;
    case 588u: goto L_089E2FC4;
    case 589u: goto L_089E2FCC;
    case 590u: goto L_089E2FDC;
    case 591u: goto L_089E2FEC;
    case 592u: goto L_089E2FFC;
    case 593u: goto L_089E300C;
    case 594u: goto L_089E301C;
    case 595u: goto L_089E302C;
    case 596u: goto L_089E303C;
    case 597u: goto L_089E304C;
    case 598u: goto L_089E305C;
    case 599u: goto L_089E3064;
    case 600u: goto L_089E306C;
    case 601u: goto L_089E3074;
    case 602u: goto L_089E307C;
    case 603u: goto L_089E3088;
    case 604u: goto L_089E30A8;
    case 605u: goto L_089E30C8;
    case 606u: goto L_089E30D0;
    case 607u: goto L_089E30D8;
    case 608u: goto L_089E30E4;
    case 609u: goto L_089E30F4;
    case 610u: goto L_089E3104;
    case 611u: goto L_089E3110;
    case 612u: goto L_089E3120;
    case 613u: goto L_089E3148;
    case 614u: goto L_089E3158;
    case 615u: goto L_089E3168;
    case 616u: goto L_089E3178;
    case 617u: goto L_089E3184;
    case 618u: goto L_089E3194;
    case 619u: goto L_089E31A4;
    case 620u: goto L_089E31AC;
    case 621u: goto L_089E31B8;
    case 622u: goto L_089E31C8;
    case 623u: goto L_089E31D8;
    case 624u: goto L_089E31E8;
    case 625u: goto L_089E31F8;
    case 626u: goto L_089E3208;
    case 627u: goto L_089E3218;
    case 628u: goto L_089E3228;
    case 629u: goto L_089E3238;
    case 630u: goto L_089E3240;
    case 631u: goto L_089E3248;
    case 632u: goto L_089E3250;
    case 633u: goto L_089E3258;
    case 634u: goto L_089E3260;
    case 635u: goto L_089E3268;
    case 636u: goto L_089E3270;
    case 637u: goto L_089E3278;
    case 638u: goto L_089E3280;
    case 639u: goto L_089E3288;
    case 640u: goto L_089E3290;
    case 641u: goto L_089E3298;
    case 642u: goto L_089E32A4;
    case 643u: goto L_089E32AC;
    case 644u: goto L_089E32B4;
    case 645u: goto L_089E32BC;
    case 646u: goto L_089E32C4;
    case 647u: goto L_089E32D0;
    case 648u: goto L_089E32E8;
    case 649u: goto L_089E32F0;
    case 650u: goto L_089E32FC;
    case 651u: goto L_089E3304;
    case 652u: goto L_089E330C;
    case 653u: goto L_089E3314;
    case 654u: goto L_089E3320;
    case 655u: goto L_089E3330;
    case 656u: goto L_089E3340;
    case 657u: goto L_089E3354;
    case 658u: goto L_089E3368;
    case 659u: goto L_089E337C;
    case 660u: goto L_089E3380;
    case 661u: goto L_089E3394;
    case 662u: goto L_089E33A0;
    case 663u: goto L_089E33B4;
    case 664u: goto L_089E33CC;
    case 665u: goto L_089E33E0;
    case 666u: goto L_089E33F4;
    case 667u: goto L_089E3400;
    case 668u: goto L_089E3414;
    case 669u: goto L_089E3428;
    case 670u: goto L_089E3430;
    case 671u: goto L_089E3444;
    case 672u: goto L_089E3474;
    case 673u: goto L_089E3488;
    case 674u: goto L_089E3490;
    case 675u: goto L_089E3498;
    case 676u: goto L_089E34A0;
    case 677u: goto L_089E34B8;
    case 678u: goto L_089E34D0;
    case 679u: goto L_089E34F8;
    case 680u: goto L_089E3500;
    case 681u: goto L_089E350C;
    case 682u: goto L_089E3514;
    case 683u: goto L_089E351C;
    case 684u: goto L_089E3530;
    case 685u: goto L_089E353C;
    case 686u: goto L_089E3560;
    case 687u: goto L_089E3568;
    case 688u: goto L_089E35A4;
    case 689u: goto L_089E35D0;
    case 690u: goto L_089E35D8;
    case 691u: goto L_089E35EC;
    case 692u: goto L_089E35F4;
    case 693u: goto L_089E35FC;
    case 694u: goto L_089E3608;
    case 695u: goto L_089E361C;
    case 696u: goto L_089E362C;
    case 697u: goto L_089E3638;
    case 698u: goto L_089E3640;
    case 699u: goto L_089E3648;
    case 700u: goto L_089E3650;
    case 701u: goto L_089E3658;
    case 702u: goto L_089E3660;
    case 703u: goto L_089E3668;
    case 704u: goto L_089E3680;
    case 705u: goto L_089E3688;
    case 706u: goto L_089E36C4;
    case 707u: goto L_089E36CC;
    case 708u: goto L_089E36D4;
    case 709u: goto L_089E36E4;
    case 710u: goto L_089E36F4;
    case 711u: goto L_089E36FC;
    case 712u: goto L_089E3714;
    case 713u: goto L_089E372C;
    case 714u: goto L_089E3734;
    case 715u: goto L_089E3744;
    case 716u: goto L_089E3764;
    case 717u: goto L_089E3770;
    case 718u: goto L_089E3778;
    case 719u: goto L_089E3780;
    case 720u: goto L_089E3790;
    case 721u: goto L_089E37B4;
    case 722u: goto L_089E37C0;
    case 723u: goto L_089E37C8;
    case 724u: goto L_089E37D8;
    case 725u: goto L_089E37E4;
    case 726u: goto L_089E3800;
    case 727u: goto L_089E3808;
    case 728u: goto L_089E3810;
    case 729u: goto L_089E3818;
    case 730u: goto L_089E3820;
    case 731u: goto L_089E3828;
    case 732u: goto L_089E3838;
    case 733u: goto L_089E3840;
    case 734u: goto L_089E3850;
    case 735u: goto L_089E3858;
    case 736u: goto L_089E3860;
    case 737u: goto L_089E3868;
    case 738u: goto L_089E3870;
    case 739u: goto L_089E387C;
    case 740u: goto L_089E3884;
    case 741u: goto L_089E3894;
    case 742u: goto L_089E38AC;
    case 743u: goto L_089E38C4;
    case 744u: goto L_089E38D0;
    case 745u: goto L_089E38D8;
    case 746u: goto L_089E38E4;
    case 747u: goto L_089E38EC;
    case 748u: goto L_089E38F4;
    case 749u: goto L_089E3904;
    case 750u: goto L_089E390C;
    case 751u: goto L_089E3914;
    case 752u: goto L_089E3924;
    case 753u: goto L_089E393C;
    case 754u: goto L_089E3954;
    case 755u: goto L_089E3960;
    case 756u: goto L_089E3970;
    case 757u: goto L_089E397C;
    case 758u: goto L_089E3984;
    case 759u: goto L_089E398C;
    case 760u: goto L_089E3994;
    case 761u: goto L_089E399C;
    case 762u: goto L_089E39A4;
    case 763u: goto L_089E39BC;
    case 764u: goto L_089E39C4;
    case 765u: goto L_089E39D4;
    case 766u: goto L_089E39F4;
    case 767u: goto L_089E39FC;
    case 768u: goto L_089E3A04;
    case 769u: goto L_089E3A14;
    case 770u: goto L_089E3A34;
    case 771u: goto L_089E3A48;
    case 772u: goto L_089E3A54;
    case 773u: goto L_089E3A5C;
    case 774u: goto L_089E3A74;
    case 775u: goto L_089E3A80;
    case 776u: goto L_089E3A88;
    case 777u: goto L_089E3A94;
    case 778u: goto L_089E3AB4;
    case 779u: goto L_089E3AE8;
    case 780u: goto L_089E3AF8;
    case 781u: goto L_089E3B08;
    case 782u: goto L_089E3B18;
    case 783u: goto L_089E3B20;
    case 784u: goto L_089E3B30;
    case 785u: goto L_089E3B48;
    case 786u: goto L_089E3B70;
    case 787u: goto L_089E3B7C;
    case 788u: goto L_089E3B8C;
    case 789u: goto L_089E3BA4;
    case 790u: goto L_089E3BBC;
    case 791u: goto L_089E3BC8;
    case 792u: goto L_089E3BD0;
    case 793u: goto L_089E3BE8;
    case 794u: goto L_089E3BF8;
    case 795u: goto L_089E3C00;
    case 796u: goto L_089E3C08;
    case 797u: goto L_089E3C10;
    case 798u: goto L_089E3C20;
    case 799u: goto L_089E3C40;
    case 800u: goto L_089E3C48;
    case 801u: goto L_089E3C58;
    case 802u: goto L_089E3C64;
    case 803u: goto L_089E3C6C;
    case 804u: goto L_089E3C84;
    case 805u: goto L_089E3C98;
    case 806u: goto L_089E3CD0;
    case 807u: goto L_089E3CD8;
    case 808u: goto L_089E3CE4;
    case 809u: goto L_089E3CEC;
    case 810u: goto L_089E3D30;
    case 811u: goto L_089E3D40;
    case 812u: goto L_089E3D54;
    case 813u: goto L_089E3D64;
    case 814u: goto L_089E3D6C;
    case 815u: goto L_089E3D84;
    case 816u: goto L_089E3D8C;
    case 817u: goto L_089E3D94;
    case 818u: goto L_089E3DA8;
    case 819u: goto L_089E3DB0;
    case 820u: goto L_089E3DB8;
    case 821u: goto L_089E3DD0;
    case 822u: goto L_089E3DD8;
    case 823u: goto L_089E3DE0;
    case 824u: goto L_089E3DE8;
    case 825u: goto L_089E3E00;
    case 826u: goto L_089E3E08;
    case 827u: goto L_089E3ED8;
    case 828u: goto L_089E3EDC;
    case 829u: goto L_089E3EE4;
    case 830u: goto L_089E3F04;
    case 831u: goto L_089E3F0C;
    case 832u: goto L_089E3F1C;
    case 833u: goto L_089E3F34;
    case 834u: goto L_089E3F40;
    case 835u: goto L_089E3F48;
    case 836u: goto L_089E3F60;
    case 837u: goto L_089E3F70;
    case 838u: goto L_089E3F88;
    case 839u: goto L_089E3F94;
    case 840u: goto L_089E3F9C;
    case 841u: goto L_089E3FA4;
    case 842u: goto L_089E3FAC;
    case 843u: goto L_089E3FB4;
    case 844u: goto L_089E3FCC;
    case 845u: goto L_089E3FD4;
    case 846u: goto L_089E3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E0000:
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0020u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0020u) goto L_089E0020;
    return;
L_089E0020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E002Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E002Cu) goto L_089E002C;
    return;
L_089E002C:
    ctx.gpr[31] = (0x089E0034u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E0034u) goto L_089E0034;
    return;
L_089E0034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089E0070;
    }
    goto L_089E0064;
L_089E0064:
    ctx.gpr[31] = (0x089E006Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089E006Cu) goto L_089E006C;
    return;
L_089E006C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089E0070;
L_089E0070:
    ctx.gpr[31] = (0x089E0078u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 669u, 0x089BB19Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0078u) goto L_089E0078;
    return;
L_089E0078:
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
L_089E0090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E00B8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E00B8u) goto L_089E00B8;
    return;
L_089E00B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E00C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E00C4u) goto L_089E00C4;
    return;
L_089E00C4:
    ctx.gpr[31] = (0x089E00CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E00CCu) goto L_089E00CC;
    return;
L_089E00CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(337)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(337)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089E0108;
    }
    goto L_089E00FC;
L_089E00FC:
    ctx.gpr[31] = (0x089E0104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089E0104u) goto L_089E0104;
    return;
L_089E0104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089E0108;
L_089E0108:
    ctx.gpr[31] = (0x089E0110u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 669u, 0x089BB19Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0110u) goto L_089E0110;
    return;
L_089E0110:
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
L_089E0128:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2320)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E0168;
      }
      goto L_089E0164;
    }
L_089E0164:
    ctx.gpr[5] = (0u | 1u);
    goto L_089E0168;
L_089E0168:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E0194;
      }
      goto L_089E018C;
    }
L_089E018C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E01DC;
      }
      goto L_089E0194;
    }
L_089E0194:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E01C0;
      }
      goto L_089E01B4;
    }
L_089E01B4:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E01DC;
      }
      goto L_089E01C0;
    }
L_089E01C0:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E01DC;
      }
      goto L_089E01D8;
    }
L_089E01D8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E01DC;
L_089E01DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E01E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0204u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0204u) goto L_089E0204;
    return;
L_089E0204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E021C;
      }
      goto L_089E0210;
    }
L_089E0210:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7720), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E0220;
      }
      goto L_089E021C;
    }
L_089E021C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7720), static_cast<std::uint8_t>(0u));
    goto L_089E0220;
L_089E0220:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0264u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0264u) goto L_089E0264;
    return;
L_089E0264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E0270u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E0270u) goto L_089E0270;
    return;
L_089E0270:
    ctx.gpr[31] = (0x089E0278u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E0278u) goto L_089E0278;
    return;
L_089E0278:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E0290u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0290u) goto L_089E0290;
    return;
L_089E0290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_089E02A4;
    }
    goto L_089E029C;
L_089E029C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E02AC;
      }
      goto L_089E02A4;
    }
L_089E02A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089E02AC;
L_089E02AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[31] = (0x089E02C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x089E02C8u) goto L_089E02C8;
    return;
L_089E02C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E02D4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem) && ctx.pc == 0x089E02D4u) goto L_089E02D4;
    return;
L_089E02D4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089E02E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem) && ctx.pc == 0x089E02E8u) goto L_089E02E8;
    return;
L_089E02E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E0310;
      }
      goto L_089E0300;
    }
L_089E0300:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E0310;
      }
      goto L_089E0308;
    }
L_089E0308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E0314;
      }
      goto L_089E0310;
    }
L_089E0310:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E0314;
L_089E0314:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E0338;
      }
      goto L_089E0330;
    }
L_089E0330:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E0388;
      }
      goto L_089E0338;
    }
L_089E0338:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089E0364;
      }
      goto L_089E0350;
    }
L_089E0350:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E0388;
      }
      goto L_089E0364;
    }
L_089E0364:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0388;
      }
      goto L_089E0384;
    }
L_089E0384:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E0388;
L_089E0388:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E03A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E03CCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E03CCu) goto L_089E03CC;
    return;
L_089E03CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089E03F4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 521u, 0x0896725Cu>(ctx, &aot_mem) && ctx.pc == 0x089E03F4u) goto L_089E03F4;
    return;
L_089E03F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E040C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0434u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0434u) goto L_089E0434;
    return;
L_089E0434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089E045Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 524u, 0x089672B0u>(ctx, &aot_mem) && ctx.pc == 0x089E045Cu) goto L_089E045C;
    return;
L_089E045C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E04A0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E04A0u) goto L_089E04A0;
    return;
L_089E04A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E04ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E04ACu) goto L_089E04AC;
    return;
L_089E04AC:
    ctx.gpr[31] = (0x089E04B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E04B4u) goto L_089E04B4;
    return;
L_089E04B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E04C4u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089E04C4u) goto L_089E04C4;
    return;
L_089E04C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04F0;
      }
      goto L_089E04CC;
    }
L_089E04CC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04F0;
      }
      goto L_089E04DC;
    }
L_089E04DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E04F0;
      }
      goto L_089E04EC;
    }
L_089E04EC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E04F0;
L_089E04F0:
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
          goto L_089E051C;
      }
      goto L_089E0514;
    }
L_089E0514:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E0564;
      }
      goto L_089E051C;
    }
L_089E051C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E0548;
      }
      goto L_089E053C;
    }
L_089E053C:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E0564;
      }
      goto L_089E0548;
    }
L_089E0548:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0564;
      }
      goto L_089E0560;
    }
L_089E0560:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E0564;
L_089E0564:
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
L_089E0580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E05A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E05A0u) goto L_089E05A0;
    return;
L_089E05A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1772), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E05BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E05E4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E05E4u) goto L_089E05E4;
    return;
L_089E05E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E05F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E05F0u) goto L_089E05F0;
    return;
L_089E05F0:
    ctx.gpr[31] = (0x089E05F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E05F8u) goto L_089E05F8;
    return;
L_089E05F8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E0608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem) && ctx.pc == 0x089E0608u) goto L_089E0608;
    return;
L_089E0608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0614;
      }
      goto L_089E0610;
    }
L_089E0610:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E0614;
L_089E0614:
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
          goto L_089E0640;
      }
      goto L_089E0638;
    }
L_089E0638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E0688;
      }
      goto L_089E0640;
    }
L_089E0640:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E066C;
      }
      goto L_089E0660;
    }
L_089E0660:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E0688;
      }
      goto L_089E066C;
    }
L_089E066C:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0688;
      }
      goto L_089E0684;
    }
L_089E0684:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E0688;
L_089E0688:
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
L_089E06A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[21] = (2238u << 16u);
    ctx.gpr[22] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E06F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E06F8u) goto L_089E06F8;
    return;
L_089E06F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x089E0704u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x089E0704u) goto L_089E0704;
    return;
L_089E0704:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 192u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1786), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E077C;
      }
      goto L_089E074C;
    }
L_089E074C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089E075Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x089E075Cu) goto L_089E075C;
    return;
L_089E075C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089E077C;
L_089E077C:
    ctx.gpr[31] = (0x089E0784u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089E0784u) goto L_089E0784;
    return;
L_089E0784:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E07A0;
      }
      goto L_089E0794;
    }
L_089E0794:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E07F4;
      }
      goto L_089E07A0;
    }
L_089E07A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E07C8;
      }
      goto L_089E07A8;
    }
L_089E07A8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089E07C0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x089E07C0u) goto L_089E07C0;
    return;
L_089E07C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E07E0;
      }
      goto L_089E07C8;
    }
L_089E07C8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089E07E0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x089E07E0u) goto L_089E07E0;
    return;
L_089E07E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E07ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 223u, 0x08A1D2D8u>(ctx, &aot_mem) && ctx.pc == 0x089E07ECu) goto L_089E07EC;
    return;
L_089E07EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
      if (branch_taken) {
          goto L_089E083C;
      }
      goto L_089E07F4;
    }
L_089E07F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E081C;
      }
      goto L_089E07FC;
    }
L_089E07FC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089E0814u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0814u) goto L_089E0814;
    return;
L_089E0814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0834;
      }
      goto L_089E081C;
    }
L_089E081C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x089E0834u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D43Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0834u) goto L_089E0834;
    return;
L_089E0834:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    goto L_089E083C;
L_089E083C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0860;
      }
      goto L_089E0844;
    }
L_089E0844:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089E0860u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0860u) goto L_089E0860;
    return;
L_089E0860:
    ctx.gpr[31] = (0x089E0868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089E0868u) goto L_089E0868;
    return;
L_089E0868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0888;
      }
      goto L_089E0870;
    }
L_089E0870:
    ctx.gpr[31] = (0x089E0878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089E0878u) goto L_089E0878;
    return;
L_089E0878:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E0888;
L_089E0888:
    ctx.gpr[2] = (0u | 0u);
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
L_089E08B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E08C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089E08C4u) goto L_089E08C4;
    return;
L_089E08C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E08E8;
      }
      goto L_089E08CC;
    }
L_089E08CC:
    ctx.gpr[31] = (0x089E08D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089E08D4u) goto L_089E08D4;
    return;
L_089E08D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E08E8;
L_089E08E8:
    ctx.gpr[31] = (0x089E08F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 962u, 0x0897FD10u>(ctx, &aot_mem) && ctx.pc == 0x089E08F0u) goto L_089E08F0;
    return;
L_089E08F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x089E0928u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0928u) goto L_089E0928;
    return;
L_089E0928:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0958u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0958u) goto L_089E0958;
    return;
L_089E0958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_089E0974;
      }
      goto L_089E0968;
    }
L_089E0968:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E0978;
      }
      goto L_089E0974;
    }
L_089E0974:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    goto L_089E0978;
L_089E0978:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E098C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E09ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089E09ACu) goto L_089E09AC;
    return;
L_089E09AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E09C0;
      }
      goto L_089E09BC;
    }
L_089E09BC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E09C0;
L_089E09C0:
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
          goto L_089E09EC;
      }
      goto L_089E09E4;
    }
L_089E09E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E0A34;
      }
      goto L_089E09EC;
    }
L_089E09EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E0A18;
      }
      goto L_089E0A0C;
    }
L_089E0A0C:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E0A34;
      }
      goto L_089E0A18;
    }
L_089E0A18:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A34;
      }
      goto L_089E0A30;
    }
L_089E0A30:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E0A34;
L_089E0A34:
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
L_089E0A4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E0A5C;
      }
      goto L_089E0A58;
    }
L_089E0A58:
    ctx.gpr[5] = (0u | 1u);
    goto L_089E0A5C;
L_089E0A5C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E0A88;
      }
      goto L_089E0A80;
    }
L_089E0A80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E0AD0;
      }
      goto L_089E0A88;
    }
L_089E0A88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E0AB4;
      }
      goto L_089E0AA8;
    }
L_089E0AA8:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E0AD0;
      }
      goto L_089E0AB4;
    }
L_089E0AB4:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0AD0;
      }
      goto L_089E0ACC;
    }
L_089E0ACC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E0AD0;
L_089E0AD0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0AF8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0AF8u) goto L_089E0AF8;
    return;
L_089E0AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0B40u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0B40u) goto L_089E0B40;
    return;
L_089E0B40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x089E0B4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089E0B4Cu) goto L_089E0B4C;
    return;
L_089E0B4C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089E0B5Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089E0B5Cu) goto L_089E0B5C;
    return;
L_089E0B5C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (0u | 0u);
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
L_089E0B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E0B94u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0B94u) goto L_089E0B94;
    return;
L_089E0B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_089E0BA8;
    }
    goto L_089E0BA0;
L_089E0BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E0BAC;
      }
      goto L_089E0BA8;
    }
L_089E0BA8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089E0BAC;
L_089E0BAC:
    ctx.gpr[5] = (0u | 0u);
    goto L_089E0BB0;
L_089E0BB0:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[28] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-17536), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0BB0;
      }
      goto L_089E0BD0;
    }
L_089E0BD0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[31] = (0x089E0C00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0C00u) goto L_089E0C00;
    return;
L_089E0C00:
    ctx.gpr[31] = (0x089E0C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089E0C08u) goto L_089E0C08;
    return;
L_089E0C08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0C38;
      }
      goto L_089E0C28;
    }
L_089E0C28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0C38;
      }
      goto L_089E0C34;
    }
L_089E0C34:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_089E0C38;
L_089E0C38:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0C7Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0C7Cu) goto L_089E0C7C;
    return;
L_089E0C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E0C88u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E0C88u) goto L_089E0C88;
    return;
L_089E0C88:
    ctx.gpr[31] = (0x089E0C90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E0C90u) goto L_089E0C90;
    return;
L_089E0C90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[6]);
    ctx.gpr[31] = (0x089E0CACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E0CACu) goto L_089E0CAC;
    return;
L_089E0CAC:
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
L_089E0CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E0D10u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0D10u) goto L_089E0D10;
    return;
L_089E0D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E0D1Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E0D1Cu) goto L_089E0D1C;
    return;
L_089E0D1C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0D28u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0D28u) goto L_089E0D28;
    return;
L_089E0D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E50;
      }
      goto L_089E0D30;
    }
L_089E0D30:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (49152u << 16u);
      if (branch_taken) {
          goto L_089E0E50;
      }
      goto L_089E0D48;
    }
L_089E0D48:
    ctx.gpr[21] = (65520u << 16u);
    ctx.gpr[30] = (0u | 15u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (16384u << 16u);
    goto L_089E0D60;
L_089E0D60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E0D78;
      }
      goto L_089E0D68;
    }
L_089E0D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089E0D80;
    }
    goto L_089E0D78;
L_089E0D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E0DA0;
      }
      goto L_089E0D80;
    }
L_089E0D80:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089E0D9C;
    }
    goto L_089E0D94;
L_089E0D94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E0DA0;
      }
      goto L_089E0D9C;
    }
L_089E0D9C:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089E0DA0;
L_089E0DA0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E38;
      }
      goto L_089E0DAC;
    }
L_089E0DAC:
    ctx.gpr[31] = (0x089E0DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 241u, 0x089051ACu>(ctx, &aot_mem) && ctx.pc == 0x089E0DB4u) goto L_089E0DB4;
    return;
L_089E0DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E38;
      }
      goto L_089E0DBC;
    }
L_089E0DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089E0DE0;
      }
      goto L_089E0DC8;
    }
L_089E0DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089E0E38;
      }
      goto L_089E0DD4;
    }
L_089E0DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089E0E38;
      }
      goto L_089E0DE0;
    }
L_089E0DE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_089E0DFC;
      }
      goto L_089E0DF0;
    }
L_089E0DF0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E0E38;
      }
      goto L_089E0DFC;
    }
L_089E0DFC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E0E0Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem) && ctx.pc == 0x089E0E0Cu) goto L_089E0E0C;
    return;
L_089E0E0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E38;
      }
      goto L_089E0E14;
    }
L_089E0E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E0E38u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0E38u) goto L_089E0E38;
    return;
L_089E0E38:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_089E0D60;
      }
      goto L_089E0E50;
    }
L_089E0E50:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0EACu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0EACu) goto L_089E0EAC;
    return;
L_089E0EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E0EB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E0EB8u) goto L_089E0EB8;
    return;
L_089E0EB8:
    ctx.gpr[31] = (0x089E0EC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E0EC0u) goto L_089E0EC0;
    return;
L_089E0EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_089E0F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0F2Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0F2Cu) goto L_089E0F2C;
    return;
L_089E0F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089E0F90;
      }
      goto L_089E0F38;
    }
L_089E0F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0F4C;
      }
      goto L_089E0F44;
    }
L_089E0F44:
    ctx.gpr[31] = (0x089E0F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089E0F4Cu) goto L_089E0F4C;
    return;
L_089E0F4C:
    ctx.gpr[31] = (0x089E0F54u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x089E0F54u) goto L_089E0F54;
    return;
L_089E0F54:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(6864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_089E0F80;
    }
    goto L_089E0F74;
L_089E0F74:
    ctx.gpr[31] = (0x089E0F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089E0F7Cu) goto L_089E0F7C;
    return;
L_089E0F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089E0F80;
L_089E0F80:
    ctx.gpr[31] = (0x089E0F88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 567u, 0x0880EA84u>(ctx, &aot_mem) && ctx.pc == 0x089E0F88u) goto L_089E0F88;
    return;
L_089E0F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0FC4;
      }
      goto L_089E0F90;
    }
L_089E0F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_089E0FA8;
    }
    goto L_089E0F9C;
L_089E0F9C:
    ctx.gpr[31] = (0x089E0FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089E0FA4u) goto L_089E0FA4;
    return;
L_089E0FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089E0FA8;
L_089E0FA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089E0FC4;
L_089E0FC4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E0FFCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0FFCu) goto L_089E0FFC;
    return;
L_089E0FFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(335), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1068u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1068u) goto L_089E1068;
    return;
L_089E1068:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089E1094u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 658u, 0x08AB663Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1094u) goto L_089E1094;
    return;
L_089E1094:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E10AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E10D4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E10D4u) goto L_089E10D4;
    return;
L_089E10D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E10E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E10E0u) goto L_089E10E0;
    return;
L_089E10E0:
    ctx.gpr[31] = (0x089E10E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E10E8u) goto L_089E10E8;
    return;
L_089E10E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3262))))));
      if (branch_taken) {
          goto L_089E113C;
      }
      goto L_089E10FC;
    }
L_089E10FC:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089E110Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 84u, 0x0894857Cu>(ctx, &aot_mem) && ctx.pc == 0x089E110Cu) goto L_089E110C;
    return;
L_089E110C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1150;
      }
      goto L_089E1114;
    }
L_089E1114:
    ctx.gpr[31] = (0x089E111Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 261u, 0x0894D1B8u>(ctx, &aot_mem) && ctx.pc == 0x089E111Cu) goto L_089E111C;
    return;
L_089E111C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089E1134u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem) && ctx.pc == 0x089E1134u) goto L_089E1134;
    return;
L_089E1134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1150;
      }
      goto L_089E113C;
    }
L_089E113C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089E1150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 83u, 0x08948568u>(ctx, &aot_mem) && ctx.pc == 0x089E1150u) goto L_089E1150;
    return;
L_089E1150:
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
L_089E1168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1190u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1190u) goto L_089E1190;
    return;
L_089E1190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E119Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E119Cu) goto L_089E119C;
    return;
L_089E119C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E11A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E11A8u) goto L_089E11A8;
    return;
L_089E11A8:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E11FC;
      }
      goto L_089E11C0;
    }
L_089E11C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E11F8;
      }
      goto L_089E11E8;
    }
L_089E11E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E11FC;
      }
      goto L_089E11F8;
    }
L_089E11F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E11FC;
L_089E11FC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E1228;
      }
      goto L_089E1220;
    }
L_089E1220:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1270;
      }
      goto L_089E1228;
    }
L_089E1228:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E1254;
      }
      goto L_089E1248;
    }
L_089E1248:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1270;
      }
      goto L_089E1254;
    }
L_089E1254:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1270;
      }
      goto L_089E126C;
    }
L_089E126C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E1270;
L_089E1270:
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
L_089E1288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E12B0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E12B0u) goto L_089E12B0;
    return;
L_089E12B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E12BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E12BCu) goto L_089E12BC;
    return;
L_089E12BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E133C;
      }
      goto L_089E12D8;
    }
L_089E12D8:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[8] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[5] = (1024u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E13B4;
      }
      goto L_089E133C;
    }
L_089E133C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[5] = (64512u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[5] = (63488u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65532u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (61440u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089E13B4;
L_089E13B4:
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
L_089E13CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1400u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1400u) goto L_089E1400;
    return;
L_089E1400:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E141C;
      }
      goto L_089E1414;
    }
L_089E1414:
    ctx.gpr[31] = (0x089E141Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089E141Cu) goto L_089E141C;
    return;
L_089E141C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E145C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E146Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 629u, 0x088635ACu>(ctx, &aot_mem) && ctx.pc == 0x089E146Cu) goto L_089E146C;
    return;
L_089E146C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E147C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E14A4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E14A4u) goto L_089E14A4;
    return;
L_089E14A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x089E14B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089E14B0u) goto L_089E14B0;
    return;
L_089E14B0:
    ctx.gpr[31] = (0x089E14B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x089E14B8u) goto L_089E14B8;
    return;
L_089E14B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E14D0;
      }
      goto L_089E14C4;
    }
L_089E14C4:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E14D4;
      }
      goto L_089E14D0;
    }
L_089E14D0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    goto L_089E14D4;
L_089E14D4:
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
L_089E14EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1520u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1520u) goto L_089E1520;
    return;
L_089E1520:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E153C;
      }
      goto L_089E1534;
    }
L_089E1534:
    ctx.gpr[31] = (0x089E153Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089E153Cu) goto L_089E153C;
    return;
L_089E153C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E157C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E15A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E15A0u) goto L_089E15A0;
    return;
L_089E15A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_089E15B4;
      }
      goto L_089E15AC;
    }
L_089E15AC:
    ctx.gpr[31] = (0x089E15B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x089E15B4u) goto L_089E15B4;
    return;
L_089E15B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x089E15C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 567u, 0x0880EA84u>(ctx, &aot_mem) && ctx.pc == 0x089E15C0u) goto L_089E15C0;
    return;
L_089E15C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E15D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27896));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(29704), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1600u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E1600u) goto L_089E1600;
    return;
L_089E1600:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1610:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7592), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1634u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 123u, 0x08890838u>(ctx, &aot_mem) && ctx.pc == 0x089E1634u) goto L_089E1634;
    return;
L_089E1634:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1640:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 157u, 0x08890F48u>(ctx, &aot_mem) && ctx.pc == 0x089E1650u) goto L_089E1650;
    return;
L_089E1650:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1674u);
    ctx.gpr[4] = (0u | 2u);
    goto L_089E16B4;
L_089E1674:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1694u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11168));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x089E1694u) goto L_089E1694;
    return;
L_089E1694:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E16A4;
      }
      goto L_089E169C;
    }
L_089E169C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E16A8;
      }
      goto L_089E16A4;
    }
L_089E16A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E16A8;
L_089E16A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E16B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E16D0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 674u, 0x0893671Cu>(ctx, &aot_mem) && ctx.pc == 0x089E16D0u) goto L_089E16D0;
    return;
L_089E16D0:
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E16EC;
      }
      goto L_089E16DC;
    }
L_089E16DC:
    ctx.gpr[6] = (2247u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089E16EC;
L_089E16EC:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E1798;
      }
      goto L_089E16F8;
    }
L_089E16F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1790;
      }
      goto L_089E1708;
    }
L_089E1708:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1728;
    }
L_089E1728:
    ctx.gpr[31] = (0x089E1730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E1660;
L_089E1730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1738;
    }
L_089E1738:
    ctx.gpr[31] = (0x089E1740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E1684;
L_089E1740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1748;
    }
L_089E1748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1750;
    }
L_089E1750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1758;
    }
L_089E1758:
    ctx.gpr[31] = (0x089E1760u);
    // nop
    goto L_089E17B0;
L_089E1760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1768;
    }
L_089E1768:
    ctx.gpr[31] = (0x089E1770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E17DC;
L_089E1770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1778;
    }
L_089E1778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1780;
    }
L_089E1780:
    ctx.gpr[31] = (0x089E1788u);
    // nop
    goto L_089E18E8;
L_089E1788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1790;
    }
L_089E1790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E179C;
      }
      goto L_089E1798;
    }
L_089E1798:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_089E179C;
L_089E179C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E17B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E17C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 227u, 0x0886180Cu>(ctx, &aot_mem) && ctx.pc == 0x089E17C0u) goto L_089E17C0;
    return;
L_089E17C0:
    ctx.gpr[31] = (0x089E17C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 228u, 0x08861814u>(ctx, &aot_mem) && ctx.pc == 0x089E17C8u) goto L_089E17C8;
    return;
L_089E17C8:
    ctx.gpr[31] = (0x089E17D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 229u, 0x0886181Cu>(ctx, &aot_mem) && ctx.pc == 0x089E17D0u) goto L_089E17D0;
    return;
L_089E17D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E17DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E17F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 102u, 0x0886094Cu>(ctx, &aot_mem) && ctx.pc == 0x089E17F8u) goto L_089E17F8;
    return;
L_089E17F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E18BC;
      }
      goto L_089E1800;
    }
L_089E1800:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089E180Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E16B4;
L_089E180C:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089E1818u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E16B4;
L_089E1818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E18B4;
      }
      goto L_089E1820;
    }
L_089E1820:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089E182Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E16B4;
L_089E182C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E18AC;
      }
      goto L_089E1834;
    }
L_089E1834:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x089E1840u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 149u, 0x08860C08u>(ctx, &aot_mem) && ctx.pc == 0x089E1840u) goto L_089E1840;
    return;
L_089E1840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E189C;
      }
      goto L_089E1848;
    }
L_089E1848:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x089E1854u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089E16B4;
L_089E1854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1884;
      }
      goto L_089E185C;
    }
L_089E185C:
    ctx.gpr[31] = (0x089E1864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 178u, 0x088614ACu>(ctx, &aot_mem) && ctx.pc == 0x089E1864u) goto L_089E1864;
    return;
L_089E1864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E18C4;
      }
      goto L_089E186C;
    }
L_089E186C:
    ctx.gpr[31] = (0x089E1874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 228u, 0x08861814u>(ctx, &aot_mem) && ctx.pc == 0x089E1874u) goto L_089E1874;
    return;
L_089E1874:
    ctx.gpr[31] = (0x089E187Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 229u, 0x0886181Cu>(ctx, &aot_mem) && ctx.pc == 0x089E187Cu) goto L_089E187C;
    return;
L_089E187C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E18D4;
      }
      goto L_089E1884;
    }
L_089E1884:
    ctx.gpr[31] = (0x089E188Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 228u, 0x08861814u>(ctx, &aot_mem) && ctx.pc == 0x089E188Cu) goto L_089E188C;
    return;
L_089E188C:
    ctx.gpr[31] = (0x089E1894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 229u, 0x0886181Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1894u) goto L_089E1894;
    return;
L_089E1894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E18D4;
      }
      goto L_089E189C;
    }
L_089E189C:
    ctx.gpr[31] = (0x089E18A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 229u, 0x0886181Cu>(ctx, &aot_mem) && ctx.pc == 0x089E18A4u) goto L_089E18A4;
    return;
L_089E18A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E18D4;
      }
      goto L_089E18AC;
    }
L_089E18AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E18D4;
      }
      goto L_089E18B4;
    }
L_089E18B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E18D4;
      }
      goto L_089E18BC;
    }
L_089E18BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E18D4;
      }
      goto L_089E18C4;
    }
L_089E18C4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089E18D0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089E16B4;
L_089E18D0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089E18D4;
L_089E18D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E18E8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-11160));
    ctx.gpr[5] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 480u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E193C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1980u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1980u) goto L_089E1980;
    return;
L_089E1980:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_089E19A8;
      }
      goto L_089E198C;
    }
L_089E198C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089E19A8;
L_089E19A8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E19E0;
      }
      goto L_089E19C8;
    }
L_089E19C8:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E19F8;
      }
      goto L_089E19E0;
    }
L_089E19E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E19ECu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x089E19ECu) goto L_089E19EC;
    return;
L_089E19EC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089E19F8;
L_089E19F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E1A08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1A08u) goto L_089E1A08;
    return;
L_089E1A08:
    ctx.gpr[31] = (0x089E1A10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1A10u) goto L_089E1A10;
    return;
L_089E1A10:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E1A1C;
      }
      goto L_089E1A1C;
    }
L_089E1A1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089E1A4Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1A4Cu) goto L_089E1A4C;
    return;
L_089E1A4C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089E1A60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E1A60u) goto L_089E1A60;
    return;
L_089E1A60:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1AB4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1AB4u) goto L_089E1AB4;
    return;
L_089E1AB4:
    ctx.gpr[31] = (0x089E1ABCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 602u, 0x088F2D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1ABCu) goto L_089E1ABC;
    return;
L_089E1ABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1ACC;
      }
      goto L_089E1AC4;
    }
L_089E1AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E1AD0;
      }
      goto L_089E1ACC;
    }
L_089E1ACC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E1AD0;
L_089E1AD0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E1AF4;
      }
      goto L_089E1AEC;
    }
L_089E1AEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1B3C;
      }
      goto L_089E1AF4;
    }
L_089E1AF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E1B20;
      }
      goto L_089E1B14;
    }
L_089E1B14:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1B3C;
      }
      goto L_089E1B20;
    }
L_089E1B20:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B3C;
      }
      goto L_089E1B38;
    }
L_089E1B38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E1B3C;
L_089E1B3C:
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
L_089E1B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1B74u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1B74u) goto L_089E1B74;
    return;
L_089E1B74:
    ctx.gpr[31] = (0x089E1B7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 608u, 0x088F2DDCu>(ctx, &aot_mem) && ctx.pc == 0x089E1B7Cu) goto L_089E1B7C;
    return;
L_089E1B7C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1BD0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1BD0u) goto L_089E1BD0;
    return;
L_089E1BD0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E1C08;
      }
      goto L_089E1BF0;
    }
L_089E1BF0:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E1C20;
      }
      goto L_089E1C08;
    }
L_089E1C08:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E1C14u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x089E1C14u) goto L_089E1C14;
    return;
L_089E1C14:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089E1C20;
L_089E1C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E1C30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1C30u) goto L_089E1C30;
    return;
L_089E1C30:
    ctx.gpr[31] = (0x089E1C38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1C38u) goto L_089E1C38;
    return;
L_089E1C38:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E1C44;
      }
      goto L_089E1C44;
    }
L_089E1C44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089E1C74u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1C74u) goto L_089E1C74;
    return;
L_089E1C74:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E1C88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E1C88u) goto L_089E1C88;
    return;
L_089E1C88:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089E1CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1CF4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1CF4u) goto L_089E1CF4;
    return;
L_089E1CF4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_089E1D1C;
      }
      goto L_089E1D00;
    }
L_089E1D00:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089E1D1C;
L_089E1D1C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E1D54;
      }
      goto L_089E1D3C;
    }
L_089E1D3C:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E1D6C;
      }
      goto L_089E1D54;
    }
L_089E1D54:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E1D60u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x089E1D60u) goto L_089E1D60;
    return;
L_089E1D60:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089E1D6C;
L_089E1D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E1D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1D7Cu) goto L_089E1D7C;
    return;
L_089E1D7C:
    ctx.gpr[31] = (0x089E1D84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1D84u) goto L_089E1D84;
    return;
L_089E1D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E1D94;
      }
      goto L_089E1D94;
    }
L_089E1D94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089E1DC0u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1DC0u) goto L_089E1DC0;
    return;
L_089E1DC0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089E1DD4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E1DD4u) goto L_089E1DD4;
    return;
L_089E1DD4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1E00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (2246u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(31024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E1E40u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1E40u) goto L_089E1E40;
    return;
L_089E1E40:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (0u | 1u);
    goto L_089E1E80;
L_089E1E80:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1EEC;
      }
      goto L_089E1E88;
    }
L_089E1E88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1EEC;
      }
      goto L_089E1E90;
    }
L_089E1E90:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1EDC;
      }
      goto L_089E1E9C;
    }
L_089E1E9C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E1EDC;
      }
      goto L_089E1ED8;
    }
L_089E1ED8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E1EDC;
L_089E1EDC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(336) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E1E80;
      }
      goto L_089E1EEC;
    }
L_089E1EEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1EF8;
      }
      goto L_089E1EF4;
    }
L_089E1EF4:
    ctx.gpr[7] = (0u | 1u);
    goto L_089E1EF8;
L_089E1EF8:
    ctx.gpr[4] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E1F24;
      }
      goto L_089E1F1C;
    }
L_089E1F1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089E1F74;
      }
      goto L_089E1F24;
    }
L_089E1F24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_089E1F50;
      }
      goto L_089E1F3C;
    }
L_089E1F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1F74;
      }
      goto L_089E1F50;
    }
L_089E1F50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1F74;
      }
      goto L_089E1F70;
    }
L_089E1F70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089E1F74;
L_089E1F74:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1F94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1FD4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1FD4u) goto L_089E1FD4;
    return;
L_089E1FD4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E200C;
      }
      goto L_089E1FF4;
    }
L_089E1FF4:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E2024;
      }
      goto L_089E200C;
    }
L_089E200C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E2018u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x089E2018u) goto L_089E2018;
    return;
L_089E2018:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089E2024;
L_089E2024:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E2034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2034u) goto L_089E2034;
    return;
L_089E2034:
    ctx.gpr[31] = (0x089E203Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem) && ctx.pc == 0x089E203Cu) goto L_089E203C;
    return;
L_089E203C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E2048;
      }
      goto L_089E2048;
    }
L_089E2048:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(174)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089E2078u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2078u) goto L_089E2078;
    return;
L_089E2078:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E208Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E208Cu) goto L_089E208C;
    return;
L_089E208C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089E20B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (2246u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(31024));
    ctx.gpr[30] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 4u);
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E2120u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2120u) goto L_089E2120;
    return;
L_089E2120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 1u);
    goto L_089E215C;
L_089E215C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E21F0;
      }
      goto L_089E2164;
    }
L_089E2164:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E21F0;
      }
      goto L_089E216C;
    }
L_089E216C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E21E0;
      }
      goto L_089E2178;
    }
L_089E2178:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089E21E0;
      }
      goto L_089E219C;
    }
L_089E219C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E21E0;
      }
      goto L_089E21C0;
    }
L_089E21C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E21E0;
      }
      goto L_089E21CC;
    }
L_089E21CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x089E21DCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 589u, 0x088F2D04u>(ctx, &aot_mem) && ctx.pc == 0x089E21DCu) goto L_089E21DC;
    return;
L_089E21DC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_089E21E0;
L_089E21E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(336) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E215C;
      }
      goto L_089E21F0;
    }
L_089E21F0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(29704), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x089E2204u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x089E2204u) goto L_089E2204;
    return;
L_089E2204:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E223C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2244:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E224C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089E226C;
      }
      goto L_089E225C;
    }
L_089E225C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089E226C;
L_089E226C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2390;
      }
      goto L_089E2284;
    }
L_089E2284:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11144)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089E22A4;
      }
      goto L_089E2294;
    }
L_089E2294:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E22A4;
L_089E22A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(473), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(483))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(31)));
    ctx.gpr[7] = (18371u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] | 20224u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E2390;
      }
      goto L_089E2354;
    }
L_089E2354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089E2390;
L_089E2390:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E2460;
      }
      goto L_089E23C4;
    }
L_089E23C4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23472));
    ctx.gpr[31] = (0x089E23E0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 173u, 0x089F5058u>(ctx, &aot_mem) && ctx.pc == 0x089E23E0u) goto L_089E23E0;
    return;
L_089E23E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[5] = (2246u << 16u);
      if (branch_taken) {
          goto L_089E2460;
      }
      goto L_089E23F0;
    }
L_089E23F0:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23472));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2460;
      }
      goto L_089E2408;
    }
L_089E2408:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1936), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E241Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E241Cu) goto L_089E241C;
    return;
L_089E241C:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23472));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089E2450u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x089E2450u) goto L_089E2450;
    return;
L_089E2450:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1924), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1348), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E2464;
      }
      goto L_089E2460;
    }
L_089E2460:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E2464;
L_089E2464:
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
L_089E2480:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E24CCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 838u, 0x08913670u>(ctx, &aot_mem) && ctx.pc == 0x089E24CCu) goto L_089E24CC;
    return;
L_089E24CC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26440));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E24E8;
      }
      goto L_089E24DC;
    }
L_089E24DC:
    ctx.gpr[31] = (0x089E24E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089E24E4u) goto L_089E24E4;
    return;
L_089E24E4:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    goto L_089E24E8;
L_089E24E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089E2504u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2504u) goto L_089E2504;
    return;
L_089E2504:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E250C;
L_089E250C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1784), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E250C;
      }
      goto L_089E2520;
    }
L_089E2520:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2288), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E2534;
      }
      goto L_089E252C;
    }
L_089E252C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2288), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E2534;
L_089E2534:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2296), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11116)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11120)));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-960));
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_089E2554;
L_089E2554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E2564u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089E2564u) goto L_089E2564;
    return;
L_089E2564:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(-170));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E2578u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2578u) goto L_089E2578;
    return;
L_089E2578:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E25A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem) && ctx.pc == 0x089E25A8u) goto L_089E25A8;
    return;
L_089E25A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E25C0;
      }
      goto L_089E25B0;
    }
L_089E25B0:
    ctx.gpr[31] = (0x089E25B8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 217u, 0x08AECC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E25B8u) goto L_089E25B8;
    return;
L_089E25B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E25C8;
      }
      goto L_089E25C0;
    }
L_089E25C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2300), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E25CC;
      }
      goto L_089E25C8;
    }
L_089E25C8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2300), ctx.gpr[22]);
    goto L_089E25CC;
L_089E25CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E2554;
      }
      goto L_089E25DC;
    }
L_089E25DC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089E25ECu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089E25ECu) goto L_089E25EC;
    return;
L_089E25EC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8984)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E2618;
      }
      goto L_089E260C;
    }
L_089E260C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2364), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E261C;
      }
      goto L_089E2618;
    }
L_089E2618:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2364), static_cast<std::uint8_t>(0u));
    goto L_089E261C;
L_089E261C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2368), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E26A4;
      }
      goto L_089E2670;
    }
L_089E2670:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26440));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E2684u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 117u, 0x089086DCu>(ctx, &aot_mem) && ctx.pc == 0x089E2684u) goto L_089E2684;
    return;
L_089E2684:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E2690u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 416u, 0x08905FECu>(ctx, &aot_mem) && ctx.pc == 0x089E2690u) goto L_089E2690;
    return;
L_089E2690:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E26A4;
      }
      goto L_089E269C;
    }
L_089E269C:
    ctx.gpr[31] = (0x089E26A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 477u, 0x08906308u>(ctx, &aot_mem) && ctx.pc == 0x089E26A4u) goto L_089E26A4;
    return;
L_089E26A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E26B8:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2300));
    goto L_089E26C0;
L_089E26C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E26E4;
      }
      goto L_089E26CC;
    }
L_089E26CC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E26C0;
      }
      goto L_089E26DC;
    }
L_089E26DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E26E8;
      }
      goto L_089E26E4;
    }
L_089E26E4:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E26E8;
L_089E26E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E26F0:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E273C;
      }
      goto L_089E26FC;
    }
L_089E26FC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089E2710;
      }
      goto L_089E2708;
    }
L_089E2708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E2740;
      }
      goto L_089E2710;
    }
L_089E2710:
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089E2734;
    }
    goto L_089E2734;
L_089E2734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089E2740;
      }
      goto L_089E273C;
    }
L_089E273C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E2740;
L_089E2740:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E2788u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 832u, 0x0891FD10u>(ctx, &aot_mem) && ctx.pc == 0x089E2788u) goto L_089E2788;
    return;
L_089E2788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2814;
      }
      goto L_089E27A4;
    }
L_089E27A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E280C;
      }
      goto L_089E27B4;
    }
L_089E27B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E2804;
      }
      goto L_089E27C4;
    }
L_089E27C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089E27E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem) && ctx.pc == 0x089E27E8u) goto L_089E27E8;
    return;
L_089E27E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089E281C;
      }
      goto L_089E27FC;
    }
L_089E27FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 55u);
      if (branch_taken) {
          goto L_089E2854;
      }
      goto L_089E2804;
    }
L_089E2804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3568;
      }
      goto L_089E280C;
    }
L_089E280C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3568;
      }
      goto L_089E2814;
    }
L_089E2814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3568;
      }
      goto L_089E281C;
    }
L_089E281C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E283C;
      }
      goto L_089E2828;
    }
L_089E2828:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E2834;
    }
L_089E2834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3258;
      }
      goto L_089E283C;
    }
L_089E283C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E2FBC;
      }
      goto L_089E2844;
    }
L_089E2844:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2F80;
      }
      goto L_089E284C;
    }
L_089E284C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E2854;
    }
L_089E2854:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E2890;
      }
      goto L_089E285C;
    }
L_089E285C:
    ctx.gpr[18] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_089E3314;
      }
      goto L_089E2868;
    }
L_089E2868:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_089E3304;
      }
      goto L_089E2870;
    }
L_089E2870:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_089E3278;
      }
      goto L_089E2878;
    }
L_089E2878:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_089E32AC;
      }
      goto L_089E2880;
    }
L_089E2880:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3288;
      }
      goto L_089E2888;
    }
L_089E2888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E2890;
    }
L_089E2890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E28A8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E28A8u) goto L_089E28A8;
    return;
L_089E28A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E2F78;
      }
      goto L_089E28B8;
    }
L_089E28B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[19] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089E2F78;
      }
      goto L_089E28E8;
    }
L_089E28E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2E44;
    }
    goto L_089E2918;
L_089E2918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2DFC;
    }
    goto L_089E2924;
L_089E2924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2DFC;
    }
    goto L_089E2934;
L_089E2934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x089E2940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2940u) goto L_089E2940;
    return;
L_089E2940:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2DFC;
    }
    goto L_089E2948;
L_089E2948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2DFC;
    }
    goto L_089E2960;
L_089E2960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089E299Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x089E299Cu) goto L_089E299C;
    return;
L_089E299C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[31] = (0x089E29BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x089E29BCu) goto L_089E29BC;
    return;
L_089E29BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11104)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089E29D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x089E29D0u) goto L_089E29D0;
    return;
L_089E29D0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2D48;
    }
    goto L_089E29D8;
L_089E29D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2D48;
    }
    goto L_089E29E4;
L_089E29E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2D48;
    }
    goto L_089E29F0;
L_089E29F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2D48;
    }
    goto L_089E2A00;
L_089E2A00:
    ctx.gpr[31] = (0x089E2A08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 289u, 0x08B01038u>(ctx, &aot_mem) && ctx.pc == 0x089E2A08u) goto L_089E2A08;
    return;
L_089E2A08:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2CD8;
    }
    goto L_089E2A10;
L_089E2A10:
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x089E2A2Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089E2A2Cu) goto L_089E2A2C;
    return;
L_089E2A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = ctx.fpr[22] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x089E2A6Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x089E2A6Cu) goto L_089E2A6C;
    return;
L_089E2A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E2A90u);
    ctx.gpr[6] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x089E2A90u) goto L_089E2A90;
    return;
L_089E2A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x089E2AA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089E2AA0u) goto L_089E2AA0;
    return;
L_089E2AA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E2AACu);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089E2AACu) goto L_089E2AAC;
    return;
L_089E2AAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2C7C;
    }
    goto L_089E2AD8;
L_089E2AD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089E2C7C;
    }
    goto L_089E2B04;
L_089E2B04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(350) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[4] = (17146u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E2B94;
      }
      goto L_089E2B40;
    }
L_089E2B40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 250u);
        goto L_089E2B70;
    }
    goto L_089E2B70;
L_089E2B70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E2BE4;
      }
      goto L_089E2B94;
    }
L_089E2B94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(250) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 250u);
        goto L_089E2BC4;
    }
    goto L_089E2BC4;
L_089E2BC4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    goto L_089E2BE4;
L_089E2BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089E2C04;
    }
    goto L_089E2C04;
L_089E2C04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 250u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E2C74;
      }
      goto L_089E2C4C;
    }
L_089E2C4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    goto L_089E2C74;
L_089E2C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2DF0;
      }
      goto L_089E2C7C;
    }
L_089E2C7C:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[31] = (0x089E2CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x089E2CB0u) goto L_089E2CB0;
    return;
L_089E2CB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E2CC0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E2CC0u) goto L_089E2CC0;
    return;
L_089E2CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 126u);
    ctx.gpr[31] = (0x089E2CD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089E2CD0u) goto L_089E2CD0;
    return;
L_089E2CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2DF0;
      }
      goto L_089E2CD8;
    }
L_089E2CD8:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E2D20u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x089E2D20u) goto L_089E2D20;
    return;
L_089E2D20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E2D30u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E2D30u) goto L_089E2D30;
    return;
L_089E2D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 126u);
    ctx.gpr[31] = (0x089E2D40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089E2D40u) goto L_089E2D40;
    return;
L_089E2D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2DF0;
      }
      goto L_089E2D48;
    }
L_089E2D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3000));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2DD0;
    }
    goto L_089E2D7C;
L_089E2D7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2DD0;
    }
    goto L_089E2DA8;
L_089E2DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E2DF0;
      }
      goto L_089E2DD0;
    }
L_089E2DD0:
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    goto L_089E2DF0;
L_089E2DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
      if (branch_taken) {
          goto L_089E2E44;
      }
      goto L_089E2DF8;
    }
L_089E2DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_089E2DFC;
L_089E2DFC:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[31] = (0x089E2E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x089E2E30u) goto L_089E2E30;
    return;
L_089E2E30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E2E40u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E2E40u) goto L_089E2E40;
    return;
L_089E2E40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_089E2E44;
L_089E2E44:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2F78;
      }
      goto L_089E2E70;
    }
L_089E2E70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089E2F30;
    }
    goto L_089E2E9C;
L_089E2E9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_089E2ECC;
    }
    goto L_089E2ECC;
L_089E2ECC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2F24;
      }
      goto L_089E2EF8;
    }
L_089E2EF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1918)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089E2F24;
L_089E2F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
      if (branch_taken) {
          goto L_089E2F54;
      }
      goto L_089E2F2C;
    }
L_089E2F2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_089E2F30;
L_089E2F30:
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_089E2F54;
L_089E2F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    goto L_089E2F78;
L_089E2F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E2F80;
    }
L_089E2F80:
    ctx.gpr[31] = (0x089E2F88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089E2F88u) goto L_089E2F88;
    return;
L_089E2F88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2FA0;
      }
      goto L_089E2F90;
    }
L_089E2F90:
    ctx.gpr[31] = (0x089E2F98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089E2F98u) goto L_089E2F98;
    return;
L_089E2F98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E2FA0;
    }
L_089E2FA0:
    ctx.gpr[31] = (0x089E2FA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089E2FA8u) goto L_089E2FA8;
    return;
L_089E2FA8:
    ctx.gpr[31] = (0x089E2FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089E2FB0u) goto L_089E2FB0;
    return;
L_089E2FB0:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089E2FBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x089E2FBCu) goto L_089E2FBC;
    return;
L_089E2FBC:
    ctx.gpr[31] = (0x089E2FC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x089E2FC4u) goto L_089E2FC4;
    return;
L_089E2FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E2FCC;
    }
L_089E2FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[18] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E2FDC;
    }
L_089E2FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E2FEC;
    }
L_089E2FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E2FFC;
    }
L_089E2FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E300C;
    }
L_089E300C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E301C;
    }
L_089E301C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E302C;
    }
L_089E302C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E303C;
    }
L_089E303C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E304C;
    }
L_089E304C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E307C;
      }
      goto L_089E305C;
    }
L_089E305C:
    ctx.gpr[31] = (0x089E3064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x089E3064u) goto L_089E3064;
    return;
L_089E3064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E307C;
      }
      goto L_089E306C;
    }
L_089E306C:
    ctx.gpr[31] = (0x089E3074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E3074u) goto L_089E3074;
    return;
L_089E3074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E307C;
    }
L_089E307C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1936)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E30E4;
      }
      goto L_089E3088;
    }
L_089E3088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1924))))));
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(23472));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E30D0;
      }
      goto L_089E30A8;
    }
L_089E30A8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1924))))));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E30C8u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089E30C8u) goto L_089E30C8;
    return;
L_089E30C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E30D0;
    }
L_089E30D0:
    ctx.gpr[31] = (0x089E30D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089E30D8u) goto L_089E30D8;
    return;
L_089E30D8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1924), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E30E4;
    }
L_089E30E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E30F4;
    }
L_089E30F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E3104;
    }
L_089E3104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3168;
      }
      goto L_089E3110;
    }
L_089E3110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3168;
      }
      goto L_089E3120;
    }
L_089E3120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E3148;
    }
L_089E3148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E3158;
    }
L_089E3158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2256)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E3168;
    }
L_089E3168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E31AC;
      }
      goto L_089E3178;
    }
L_089E3178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E31AC;
      }
      goto L_089E3184;
    }
L_089E3184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E31AC;
      }
      goto L_089E3194;
    }
L_089E3194:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E31A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2244)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E31A4u) goto L_089E31A4;
    return;
L_089E31A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E31AC;
    }
L_089E31AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E31B8;
    }
L_089E31B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E31C8;
    }
L_089E31C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E31D8;
    }
L_089E31D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E31E8;
    }
L_089E31E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E31F8;
    }
L_089E31F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E3208;
    }
L_089E3208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E3218;
    }
L_089E3218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3238;
      }
      goto L_089E3228;
    }
L_089E3228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3248;
      }
      goto L_089E3238;
    }
L_089E3238:
    ctx.gpr[31] = (0x089E3240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3240u) goto L_089E3240;
    return;
L_089E3240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3250;
      }
      goto L_089E3248;
    }
L_089E3248:
    ctx.gpr[31] = (0x089E3250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089E3250u) goto L_089E3250;
    return;
L_089E3250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E3258;
    }
L_089E3258:
    ctx.gpr[31] = (0x089E3260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 51u, 0x08AD0598u>(ctx, &aot_mem) && ctx.pc == 0x089E3260u) goto L_089E3260;
    return;
L_089E3260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3270;
      }
      goto L_089E3268;
    }
L_089E3268:
    ctx.gpr[31] = (0x089E3270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 177u, 0x08918F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3270u) goto L_089E3270;
    return;
L_089E3270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E3278;
    }
L_089E3278:
    ctx.gpr[31] = (0x089E3280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 832u, 0x0890B4B0u>(ctx, &aot_mem) && ctx.pc == 0x089E3280u) goto L_089E3280;
    return;
L_089E3280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E3288;
    }
L_089E3288:
    ctx.gpr[31] = (0x089E3290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 993u, 0x0890BEE4u>(ctx, &aot_mem) && ctx.pc == 0x089E3290u) goto L_089E3290;
    return;
L_089E3290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E32A4;
      }
      goto L_089E3298;
    }
L_089E3298:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E32A4u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089E32A4u) goto L_089E32A4;
    return;
L_089E32A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E32AC;
    }
L_089E32AC:
    ctx.gpr[31] = (0x089E32B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 7u, 0x0890C074u>(ctx, &aot_mem) && ctx.pc == 0x089E32B4u) goto L_089E32B4;
    return;
L_089E32B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E32FC;
      }
      goto L_089E32BC;
    }
L_089E32BC:
    ctx.gpr[31] = (0x089E32C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089E32C4u) goto L_089E32C4;
    return;
L_089E32C4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089E32E8;
    }
    goto L_089E32D0;
L_089E32D0:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_089E32F0;
      }
      goto L_089E32E8;
    }
L_089E32E8:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_089E32F0;
L_089E32F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E32FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089E32FCu) goto L_089E32FC;
    return;
L_089E32FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E3304;
    }
L_089E3304:
    ctx.gpr[31] = (0x089E330Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 395u, 0x0890D9E8u>(ctx, &aot_mem) && ctx.pc == 0x089E330Cu) goto L_089E330C;
    return;
L_089E330C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E3314;
    }
L_089E3314:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089E3320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 701u, 0x0890713Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3320u) goto L_089E3320;
    return;
L_089E3320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3488;
      }
      goto L_089E3330;
    }
L_089E3330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3488;
      }
      goto L_089E3340;
    }
L_089E3340:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089E3394;
      }
      goto L_089E3354;
    }
L_089E3354:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E3380;
      }
      goto L_089E3368;
    }
L_089E3368:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2228));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E3380;
      }
      goto L_089E337C;
    }
L_089E337C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089E3380;
L_089E3380:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E3354;
      }
      goto L_089E3394;
    }
L_089E3394:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3488;
      }
      goto L_089E33A0;
    }
L_089E33A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3488;
      }
      goto L_089E33B4;
    }
L_089E33B4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11092)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11096)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11084)));
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11088)));
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    goto L_089E33CC;
L_089E33CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3474;
      }
      goto L_089E33E0;
    }
L_089E33E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089E3474;
      }
      goto L_089E33F4;
    }
L_089E33F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[31] = (0x089E3400u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089E3400u) goto L_089E3400;
    return;
L_089E3400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3428;
      }
      goto L_089E3414;
    }
L_089E3414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3474;
      }
      goto L_089E3428;
    }
L_089E3428:
    ctx.gpr[31] = (0x089E3430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089E3430u) goto L_089E3430;
    return;
L_089E3430:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E3444u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3444u) goto L_089E3444;
    return;
L_089E3444:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E3474u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x089E3474u) goto L_089E3474;
    return;
L_089E3474:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E33CC;
      }
      goto L_089E3488;
    }
L_089E3488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3490;
      }
      goto L_089E3490;
    }
L_089E3490:
    ctx.gpr[31] = (0x089E3498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089E3498u) goto L_089E3498;
    return;
L_089E3498:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3500;
      }
      goto L_089E34A0;
    }
L_089E34A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E34B8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E34B8u) goto L_089E34B8;
    return;
L_089E34B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E34D0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E34D0u) goto L_089E34D0;
    return;
L_089E34D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3500;
      }
      goto L_089E34F8;
    }
L_089E34F8:
    ctx.gpr[31] = (0x089E3500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E35A4;
L_089E3500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E351C;
      }
      goto L_089E350C;
    }
L_089E350C:
    ctx.gpr[31] = (0x089E3514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 71u, 0x089E4378u>(ctx, &aot_mem) && ctx.pc == 0x089E3514u) goto L_089E3514;
    return;
L_089E3514:
    ctx.gpr[31] = (0x089E351Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 143u, 0x089E48BCu>(ctx, &aot_mem) && ctx.pc == 0x089E351Cu) goto L_089E351C;
    return;
L_089E351C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
        goto L_089E353C;
    }
    goto L_089E3530;
L_089E3530:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1384), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1388), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    goto L_089E353C;
L_089E353C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3568;
      }
      goto L_089E3560;
    }
L_089E3560:
    ctx.gpr[31] = (0x089E3568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 753u, 0x0890748Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3568u) goto L_089E3568;
    return;
L_089E3568:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E35A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 41u, 0x089E41ECu>(ctx, &aot_mem); return;
      }
      goto L_089E35D0;
    }
L_089E35D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E35EC;
      }
      goto L_089E35D8;
    }
L_089E35D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 41u, 0x089E41ECu>(ctx, &aot_mem); return;
      }
      goto L_089E35EC;
    }
L_089E35EC:
    ctx.gpr[31] = (0x089E35F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 813u, 0x089079CCu>(ctx, &aot_mem) && ctx.pc == 0x089E35F4u) goto L_089E35F4;
    return;
L_089E35F4:
    ctx.gpr[31] = (0x089E35FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 824u, 0x08907A54u>(ctx, &aot_mem) && ctx.pc == 0x089E35FCu) goto L_089E35FC;
    return;
L_089E35FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 70u, 0x089E4360u>(ctx, &aot_mem); return;
      }
      goto L_089E3608;
    }
L_089E3608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1904)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 70u, 0x089E4360u>(ctx, &aot_mem); return;
      }
      goto L_089E361C;
    }
L_089E361C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1900), 0u);
    ctx.gpr[5] = (512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1904), 0u);
      if (branch_taken) {
          goto L_089E3CD8;
      }
      goto L_089E362C;
    }
L_089E362C:
    ctx.gpr[5] = (128u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_089E3A88;
      }
      goto L_089E3638;
    }
L_089E3638:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3F9C;
      }
      goto L_089E3640;
    }
L_089E3640:
    ctx.gpr[31] = (0x089E3648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3648u) goto L_089E3648;
    return;
L_089E3648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A80;
      }
      goto L_089E3650;
    }
L_089E3650:
    ctx.gpr[31] = (0x089E3658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3658u) goto L_089E3658;
    return;
L_089E3658:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E36CC;
      }
      goto L_089E3660;
    }
L_089E3660:
    ctx.gpr[31] = (0x089E3668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3668u) goto L_089E3668;
    return;
L_089E3668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E36CC;
      }
      goto L_089E3680;
    }
L_089E3680:
    ctx.gpr[31] = (0x089E3688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3688u) goto L_089E3688;
    return;
L_089E3688:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089E36D4;
      }
      goto L_089E36C4;
    }
L_089E36C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E36FC;
      }
      goto L_089E36CC;
    }
L_089E36CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 40u, 0x089E41E4u>(ctx, &aot_mem); return;
      }
      goto L_089E36D4;
    }
L_089E36D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E36FC;
      }
      goto L_089E36E4;
    }
L_089E36E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089E36F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem) && ctx.pc == 0x089E36F4u) goto L_089E36F4;
    return;
L_089E36F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E36FC;
    }
L_089E36FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E37C8;
      }
      goto L_089E3714;
    }
L_089E3714:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (16384u << 16u);
      if (branch_taken) {
          goto L_089E3778;
      }
      goto L_089E372C;
    }
L_089E372C:
    ctx.gpr[31] = (0x089E3734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3734u) goto L_089E3734;
    return;
L_089E3734:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E3744u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3744u) goto L_089E3744;
    return;
L_089E3744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E3764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E3764u) goto L_089E3764;
    return;
L_089E3764:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3770u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E3770u) goto L_089E3770;
    return;
L_089E3770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E3778;
    }
L_089E3778:
    ctx.gpr[31] = (0x089E3780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3780u) goto L_089E3780;
    return;
L_089E3780:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E3790u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3790u) goto L_089E3790;
    return;
L_089E3790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E37B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E37B4u) goto L_089E37B4;
    return;
L_089E37B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E37C0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E37C0u) goto L_089E37C0;
    return;
L_089E37C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E37C8;
    }
L_089E37C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3984;
      }
      goto L_089E37D8;
    }
L_089E37D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E390C;
      }
      goto L_089E37E4;
    }
L_089E37E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E3800u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x089E3800u) goto L_089E3800;
    return;
L_089E3800:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E390C;
      }
      goto L_089E3808;
    }
L_089E3808:
    ctx.gpr[31] = (0x089E3810u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3810u) goto L_089E3810;
    return;
L_089E3810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3858;
      }
      goto L_089E3818;
    }
L_089E3818:
    ctx.gpr[31] = (0x089E3820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3820u) goto L_089E3820;
    return;
L_089E3820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3858;
      }
      goto L_089E3828;
    }
L_089E3828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3858;
      }
      goto L_089E3838;
    }
L_089E3838:
    ctx.gpr[31] = (0x089E3840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3840u) goto L_089E3840;
    return;
L_089E3840:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089E3850u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E3850u) goto L_089E3850;
    return;
L_089E3850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E3858;
    }
L_089E3858:
    ctx.gpr[31] = (0x089E3860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3860u) goto L_089E3860;
    return;
L_089E3860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E38EC;
      }
      goto L_089E3868;
    }
L_089E3868:
    ctx.gpr[31] = (0x089E3870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089E3870u) goto L_089E3870;
    return;
L_089E3870:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E38EC;
      }
      goto L_089E387C;
    }
L_089E387C:
    ctx.gpr[31] = (0x089E3884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3884u) goto L_089E3884;
    return;
L_089E3884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E3894u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3894u) goto L_089E3894;
    return;
L_089E3894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E38ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E38ACu) goto L_089E38AC;
    return;
L_089E38AC:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E38D8;
      }
      goto L_089E38C4;
    }
L_089E38C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E38D0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E38D0u) goto L_089E38D0;
    return;
L_089E38D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E38D8;
    }
L_089E38D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E38E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E38E4u) goto L_089E38E4;
    return;
L_089E38E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E38EC;
    }
L_089E38EC:
    ctx.gpr[31] = (0x089E38F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E38F4u) goto L_089E38F4;
    return;
L_089E38F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089E3904u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089E3904u) goto L_089E3904;
    return;
L_089E3904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E390C;
    }
L_089E390C:
    ctx.gpr[31] = (0x089E3914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3914u) goto L_089E3914;
    return;
L_089E3914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E3924u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3924u) goto L_089E3924;
    return;
L_089E3924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E393Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E393Cu) goto L_089E393C;
    return;
L_089E393C:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3970;
      }
      goto L_089E3954;
    }
L_089E3954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3960u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E3960u) goto L_089E3960;
    return;
L_089E3960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E3970;
    }
L_089E3970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E397Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E397Cu) goto L_089E397C;
    return;
L_089E397C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E3984;
    }
L_089E3984:
    ctx.gpr[31] = (0x089E398Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089E398Cu) goto L_089E398C;
    return;
L_089E398C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089E39A4;
      }
      goto L_089E3994;
    }
L_089E3994:
    ctx.gpr[31] = (0x089E399Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089E2398;
L_089E399C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E39A4;
    }
L_089E39A4:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (16384u << 16u);
      if (branch_taken) {
          goto L_089E39FC;
      }
      goto L_089E39BC;
    }
L_089E39BC:
    ctx.gpr[31] = (0x089E39C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E39C4u) goto L_089E39C4;
    return;
L_089E39C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E39D4u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E39D4u) goto L_089E39D4;
    return;
L_089E39D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E39F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E39F4u) goto L_089E39F4;
    return;
L_089E39F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3A54;
      }
      goto L_089E39FC;
    }
L_089E39FC:
    ctx.gpr[31] = (0x089E3A04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3A04u) goto L_089E3A04;
    return;
L_089E3A04:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E3A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3A14u) goto L_089E3A14;
    return;
L_089E3A14:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089E3A34u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089E3A34u) goto L_089E3A34;
    return;
L_089E3A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[17]);
    ctx.gpr[31] = (0x089E3A48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E3A48u) goto L_089E3A48;
    return;
L_089E3A48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3A54u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E3A54u) goto L_089E3A54;
    return;
L_089E3A54:
    ctx.gpr[31] = (0x089E3A5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3A5Cu) goto L_089E3A5C;
    return;
L_089E3A5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089E3A74u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x089E3A74u) goto L_089E3A74;
    return;
L_089E3A74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3A80u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089E3A80u) goto L_089E3A80;
    return;
L_089E3A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 40u, 0x089E41E4u>(ctx, &aot_mem); return;
      }
      goto L_089E3A88;
    }
L_089E3A88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E3A94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E3A94u) goto L_089E3A94;
    return;
L_089E3A94:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3AB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E3AB4u) goto L_089E3AB4;
    return;
L_089E3AB4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[6] = (17352u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
      if (branch_taken) {
          goto L_089E3B20;
      }
      goto L_089E3AE8;
    }
L_089E3AE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3B20;
      }
      goto L_089E3AF8;
    }
L_089E3AF8:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3B20;
      }
      goto L_089E3B08;
    }
L_089E3B08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089E3B18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem) && ctx.pc == 0x089E3B18u) goto L_089E3B18;
    return;
L_089E3B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3CD0;
      }
      goto L_089E3B20;
    }
L_089E3B20:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3BD0;
      }
      goto L_089E3B30;
    }
L_089E3B30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[5]);
    ctx.gpr[31] = (0x089E3B48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E3B48u) goto L_089E3B48;
    return;
L_089E3B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3B70u);
    ctx.gpr[6] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089E3B70u) goto L_089E3B70;
    return;
L_089E3B70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089E3B7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E3B7Cu) goto L_089E3B7C;
    return;
L_089E3B7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x089E3B8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E3B8Cu) goto L_089E3B8C;
    return;
L_089E3B8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x089E3BA4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089E3BA4u) goto L_089E3BA4;
    return;
L_089E3BA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E3BBCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 430u, 0x08909990u>(ctx, &aot_mem) && ctx.pc == 0x089E3BBCu) goto L_089E3BBC;
    return;
L_089E3BBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3BC8u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089E3BC8u) goto L_089E3BC8;
    return;
L_089E3BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3CD0;
      }
      goto L_089E3BD0;
    }
L_089E3BD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (17608u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E3C48;
      }
      goto L_089E3BE8;
    }
L_089E3BE8:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3C48;
      }
      goto L_089E3BF8;
    }
L_089E3BF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3CD0;
      }
      goto L_089E3C00;
    }
L_089E3C00:
    ctx.gpr[31] = (0x089E3C08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3C08u) goto L_089E3C08;
    return;
L_089E3C08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3CD0;
      }
      goto L_089E3C10;
    }
L_089E3C10:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E3C20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem) && ctx.pc == 0x089E3C20u) goto L_089E3C20;
    return;
L_089E3C20:
    ctx.gpr[8] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E3C40u);
    ctx.gpr[7] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 350u, 0x088E2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3C40u) goto L_089E3C40;
    return;
L_089E3C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3CD0;
      }
      goto L_089E3C48;
    }
L_089E3C48:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3CD0;
      }
      goto L_089E3C58;
    }
L_089E3C58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089E3C64u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089E3C64u) goto L_089E3C64;
    return;
L_089E3C64:
    ctx.gpr[31] = (0x089E3C6Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089E3C6Cu) goto L_089E3C6C;
    return;
L_089E3C6C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
        goto L_089E3C98;
    }
    goto L_089E3C84;
L_089E3C84:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    goto L_089E3C98;
L_089E3C98:
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[31] = (0x089E3CD0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089E3CD0u) goto L_089E3CD0;
    return;
L_089E3CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 40u, 0x089E41E4u>(ctx, &aot_mem); return;
      }
      goto L_089E3CD8;
    }
L_089E3CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F94;
      }
      goto L_089E3CE4;
    }
L_089E3CE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E3F94;
      }
      goto L_089E3CEC;
    }
L_089E3CEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089E3D6C;
      }
      goto L_089E3D30;
    }
L_089E3D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16840u << 16u);
      if (branch_taken) {
          goto L_089E3D6C;
      }
      goto L_089E3D40;
    }
L_089E3D40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3D6C;
      }
      goto L_089E3D54;
    }
L_089E3D54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10000u);
    ctx.gpr[31] = (0x089E3D64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem) && ctx.pc == 0x089E3D64u) goto L_089E3D64;
    return;
L_089E3D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F94;
      }
      goto L_089E3D6C;
    }
L_089E3D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 68u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F48;
      }
      goto L_089E3D84;
    }
L_089E3D84:
    ctx.gpr[31] = (0x089E3D8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3D8Cu) goto L_089E3D8C;
    return;
L_089E3D8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3DA8;
      }
      goto L_089E3D94;
    }
L_089E3D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E3F48;
      }
      goto L_089E3DA8;
    }
L_089E3DA8:
    ctx.gpr[31] = (0x089E3DB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3DB0u) goto L_089E3DB0;
    return;
L_089E3DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
      if (branch_taken) {
          goto L_089E3DD0;
      }
      goto L_089E3DB8;
    }
L_089E3DB8:
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3F0C;
      }
      goto L_089E3DD0;
    }
L_089E3DD0:
    ctx.gpr[31] = (0x089E3DD8u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3DD8u) goto L_089E3DD8;
    return;
L_089E3DD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3EDC;
      }
      goto L_089E3DE0;
    }
L_089E3DE0:
    ctx.gpr[31] = (0x089E3DE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3DE8u) goto L_089E3DE8;
    return;
L_089E3DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E3EDC;
      }
      goto L_089E3E00;
    }
L_089E3E00:
    ctx.gpr[31] = (0x089E3E08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3E08u) goto L_089E3E08;
    return;
L_089E3E08:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17096u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3EDC;
      }
      goto L_089E3ED8;
    }
L_089E3ED8:
    ctx.gpr[17] = (0u | 0u);
    goto L_089E3EDC;
L_089E3EDC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F04;
      }
      goto L_089E3EE4;
    }
L_089E3EE4:
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x089E3F04u);
    ctx.gpr[7] = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 350u, 0x088E2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3F04u) goto L_089E3F04;
    return;
L_089E3F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F94;
      }
      goto L_089E3F0C;
    }
L_089E3F0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3F1Cu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3F1Cu) goto L_089E3F1C;
    return;
L_089E3F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E3F34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E3F34u) goto L_089E3F34;
    return;
L_089E3F34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3F40u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E3F40u) goto L_089E3F40;
    return;
L_089E3F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F94;
      }
      goto L_089E3F48;
    }
L_089E3F48:
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3F94;
      }
      goto L_089E3F60;
    }
L_089E3F60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3F70u);
    ctx.gpr[6] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3F70u) goto L_089E3F70;
    return;
L_089E3F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E3F88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089E3F88u) goto L_089E3F88;
    return;
L_089E3F88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E3F94u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089E3F94u) goto L_089E3F94;
    return;
L_089E3F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 40u, 0x089E41E4u>(ctx, &aot_mem); return;
      }
      goto L_089E3F9C;
    }
L_089E3F9C:
    ctx.gpr[31] = (0x089E3FA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3FA4u) goto L_089E3FA4;
    return;
L_089E3FA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 40u, 0x089E41E4u>(ctx, &aot_mem); return;
      }
      goto L_089E3FAC;
    }
L_089E3FAC:
    ctx.gpr[31] = (0x089E3FB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3FB4u) goto L_089E3FB4;
    return;
L_089E3FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 38u, 0x089E41CCu>(ctx, &aot_mem); return;
      }
      goto L_089E3FCC;
    }
L_089E3FCC:
    ctx.gpr[31] = (0x089E3FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem) && ctx.pc == 0x089E3FD4u) goto L_089E3FD4;
    return;
L_089E3FD4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 3u, 0x089E4010u>(ctx, &aot_mem); return;
    }
    goto L_089E3FFC;
L_089E3FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.pc = 0x089E4000u; return;
}

void recomp_unit_0119(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0119_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_119(Runtime &runtime) {
    runtime.register_generated_unit(119u, 0x089E0000u, 16384u, &recomp_unit_0119, &recomp_unit_0119_entry);
    runtime.register_function(0x089E0000u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0020u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E002Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0034u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0064u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E006Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0070u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0078u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0090u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0104u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0108u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0110u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0128u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0164u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0168u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E018Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0194u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0204u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0210u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E021Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0220u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0234u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0264u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0270u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0278u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0290u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E029Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0300u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0308u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0310u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0314u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0330u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0338u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0350u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0364u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0384u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0388u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E040Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0434u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E045Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0474u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0514u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E051Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E053Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0548u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0560u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0564u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0580u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0608u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0610u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0614u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0638u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0640u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0660u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E066Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0684u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0688u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0704u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E074Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E075Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E077Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0784u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0794u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0814u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E081Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0834u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E083Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0844u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0860u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0868u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0870u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0878u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0888u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0928u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0938u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0958u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0968u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0974u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0978u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E098Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0ACCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1040u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1068u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1094u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E110Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1114u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E111Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1134u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E113Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1150u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1168u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1190u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E119Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1220u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1228u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1248u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1254u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E126Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1270u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1288u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E12B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E12BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E12D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E133Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1400u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1414u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E141Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E145Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E146Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E147Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1520u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1534u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E153Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E157Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1600u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1610u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1620u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1634u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1640u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1650u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1660u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1674u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1684u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1694u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E169Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1708u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1720u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1728u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1730u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1738u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1740u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1748u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1750u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1758u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1760u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1768u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1770u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1778u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1780u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1788u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1790u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1798u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E179Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1800u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E180Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1818u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1820u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E182Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1834u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1840u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1848u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1854u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E185Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1864u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E186Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1874u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E187Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1884u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E188Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1894u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E189Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E193Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1980u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E198Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1ABCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1ACCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1ED8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F24u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E200Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2018u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2024u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2034u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E203Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2048u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2078u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E208Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2120u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E215Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2164u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E216Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2178u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E219Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2204u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E223Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2244u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E224Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E225Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E226Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2284u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2294u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2354u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2390u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2398u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2408u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E241Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2450u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2460u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2464u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2480u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2490u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2504u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E250Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2520u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E252Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2534u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2554u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2564u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2578u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E260Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2618u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E261Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2654u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2670u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2684u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2690u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E269Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2708u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2710u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2734u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E273Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2740u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2748u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2788u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2804u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E280Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2814u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E281Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2828u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2834u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E283Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2844u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E284Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2854u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E285Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2868u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2870u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2878u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2880u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2888u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2890u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2918u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2924u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2934u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2940u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2948u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2960u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E299Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2ECCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2EF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F24u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E300Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E301Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E302Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E303Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E304Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E305Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3064u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E306Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3074u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E307Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3088u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3104u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3110u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3120u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3148u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3158u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3168u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3178u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3184u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3194u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3208u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3218u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3228u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3238u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3240u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3248u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3250u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3258u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3260u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3268u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3270u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3278u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3280u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3288u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3290u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3298u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3304u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E330Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3314u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3320u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3330u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3340u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3354u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3368u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E337Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3380u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3394u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3400u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3414u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3428u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3430u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3444u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3474u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3488u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3490u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3498u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3500u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E350Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3514u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E351Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3530u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E353Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3560u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3568u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E35A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E35D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E35D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E35ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E35F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E35FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3608u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E361Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E362Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3638u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3640u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3648u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3650u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3658u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3660u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3668u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3680u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3688u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3714u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E372Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3734u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3744u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3764u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3770u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3778u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3780u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3790u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3800u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3808u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3810u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3818u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3820u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3828u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3838u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3840u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3850u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3858u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3860u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3868u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3870u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E387Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3884u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3894u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3904u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E390Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3914u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3924u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E393Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3954u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3960u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3970u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E397Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3984u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E398Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3994u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E399Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3ED8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FFCu, &recomp_unit_0119, "recomp_unit_0119");
}
} // namespace psprecomp
